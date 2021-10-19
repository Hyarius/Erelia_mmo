#include "erelia_client.h"

jgl::Buffer* Chunk::_element_buffer = nullptr;
jgl::Buffer* Chunk::_point_buffer = nullptr;

Chunk::Chunk(Data_structure::Chunk& p_data) : _data(p_data.pos)
{
	_baked = false;
	set_data(p_data);
	_uvs_node_buffer = nullptr;
	for (jgl::Size_t i = 0; i < Constant::Chunk::nb_layer; i++)
		_uvs_scenery_buffer[i] = nullptr;
}

jgl::Vector2 delta_node_pos[4] = {
	jgl::Vector2(0.0f, 0.0f),
	jgl::Vector2(0.0f, 0.5f),
	jgl::Vector2(0.5f, 0.0f),
	jgl::Vector2(0.5f, 0.5f)
};
jgl::Vector2 delta_sprite_uv[4] = {
	jgl::Vector2(0.0f, 0.0f),
	jgl::Vector2(0.0f, 1.0f),
	jgl::Vector2(1.0f, 0.0f),
	jgl::Vector2(1.0f, 1.0f)
};

static jgl::Uint element_index[6] = { 0, 3, 1, 2, 3, 0 };

void Chunk::_bake_points(jgl::Shader* p_shader)
{
	jgl::Array<jgl::Vector2> points;
	jgl::Array<jgl::Uint> elements;

	if (_point_buffer == nullptr)
		_point_buffer = p_shader->buffer("model_space")->copy();
	if (_element_buffer == nullptr)
		_element_buffer = p_shader->indexes_buffer()->copy();

	for (jgl::Float i = 0; i < Constant::Chunk::size; i += 1)
	{

		for (jgl::Float j = 0; j < Constant::Chunk::size; j += 1)
		{
			for (jgl::Float delta_i = 0; delta_i < 1; delta_i += 0.5f)
			{
				for (jgl::Float delta_j = 0; delta_j < 1; delta_j += 0.5f)
				{
					jgl::Uint base_index = points.size();

					for (jgl::Size_t side = 0; side < 4; side++)
					{
						jgl::Vector2 pos = jgl::Vector2(i + delta_i, j + delta_j) + delta_node_pos[side];
						points.push_back(jgl::convert_screen_to_opengl(pos * Constant::Node::size));
					}

					for (jgl::Size_t h = 0; h < 6; h++)
					{
						elements.push_back(element_index[h] + base_index);
					}
				}
			}

		}
	}

	_point_buffer->send(points.all(), points.size());
	_element_buffer->send(elements.all(), elements.size());
}

void Chunk::_bake_autotile(jgl::Array<jgl::Vector2>& p_uvs, jgl::Vector2 p_sprite, jgl::Vector2 p_unit)
{
	for (jgl::Size_t sub_part = 0; sub_part < 4; sub_part++)
	{
		jgl::Vector2 base_sprite = p_sprite + delta_sprite_uv[sub_part] * p_unit;
		for (jgl::Size_t i = 0; i < 4; i++)
			p_uvs.push_back(base_sprite + delta_sprite_uv[i] * p_unit);
	}
}

void Chunk::_bake_tile(jgl::Array<jgl::Vector2>& p_uvs, jgl::Vector2 p_sprite, jgl::Vector2 p_unit)
{
	for (jgl::Size_t sub_part = 0; sub_part < 4; sub_part++)
	{
		jgl::Vector2 base_sprite = p_sprite + delta_sprite_uv[sub_part] * p_unit;
		for (jgl::Size_t i = 0; i < 4; i++)
			p_uvs.push_back(base_sprite + delta_sprite_uv[i] * p_unit);
	}
}

void Chunk::_bake_nodes(jgl::Shader* p_shader)
{
	static jgl::Array<jgl::Vector2> uvs;

	if (_uvs_node_buffer == nullptr)
		_uvs_node_buffer = p_shader->buffer("vertexUV")->copy();

	uvs.clear();

	for (jgl::Size_t i = 0; i < Constant::Chunk::size; i++)
	{
		for (jgl::Size_t j = 0; j < Constant::Chunk::size; j++)
		{

			if (_data.nodes[i][j] == -1)
			{
				for (jgl::Size_t i = 0; i < 16; i++)
					uvs.push_back(-1);
			}
			else
			{
				World_object::Node& tmp_node = World_object::g_node_array[_data.nodes[i][j]];

				if (tmp_node.autotiled == true)
					_bake_autotile(uvs, World_object::Node::texture->sprite(tmp_node.sprite), World_object::Node::texture->unit());
				else
					_bake_tile(uvs, World_object::Node::texture->sprite(tmp_node.sprite), World_object::Node::texture->unit());
			}

		}
	}

	_uvs_node_buffer->send(uvs.all(), uvs.size());
}

void Chunk::_bake_sceneries(jgl::Shader* p_shader)
{
	static jgl::Array<jgl::Vector2> uvs;

	for (jgl::Size_t h = 0; h < Constant::Chunk::nb_layer; h++)
	{
		if (_uvs_scenery_buffer[h] == nullptr)
			_uvs_scenery_buffer[h] = p_shader->buffer("vertexUV")->copy();

		uvs.clear();

		for (jgl::Size_t i = 0; i < Constant::Chunk::size; i++)
		{
			for (jgl::Size_t j = 0; j < Constant::Chunk::size; j++)
			{

				if (_data.sceneries[i][j][h] == -1)
				{
					for (jgl::Size_t i = 0; i < 16; i++)
						uvs.push_back(-1);
				}
				else
				{
					World_object::Scenery_part& tmp_scenery_part = World_object::g_scenery_part_array[_data.sceneries[i][j][h]];

					if (tmp_scenery_part.autotiled == true)
						_bake_autotile(uvs, World_object::Scenery_part::texture->sprite(tmp_scenery_part.sprite), World_object::Scenery_part::texture->unit());
					else
						_bake_tile(uvs, World_object::Scenery_part::texture->sprite(tmp_scenery_part.sprite), World_object::Scenery_part::texture->unit());
				}

			}
		}
		_uvs_scenery_buffer[h]->send(uvs.all(), uvs.size());
	}
}

void Chunk::bake()
{
	jgl::Shader* tmp_shader = jgl::Application::active_application()->shader("Chunk_shader");

	if (_point_buffer == nullptr || _element_buffer == nullptr)
	{
		_bake_points(tmp_shader);
	}

	_bake_nodes(tmp_shader);

	_bake_sceneries(tmp_shader);

	_baked = true;
}

void Chunk::_render_nodes(jgl::Vector3& p_delta_pos, jgl::Float p_depth, jgl::Shader* p_shader)
{
	//Texture activation
	World_object::Node::texture->activate();

	_point_buffer->activate();
	_element_buffer->activate();
	_uvs_node_buffer->activate();

	p_delta_pos.z = static_cast<jgl::Float>(p_depth) / 10000.0f;
	p_shader->uniform("delta_pos")->send(p_delta_pos);
	p_shader->uniform("textureID")->send(0);

	p_shader->cast(jgl::Shader::Mode::Triangle, _element_buffer->size() / sizeof(jgl::Uint));

	//Texture desactivation
	World_object::Node::texture->desactivate();
}

void Chunk::_render_sceneries(jgl::Vector3& p_delta_pos, jgl::Int p_level, jgl::Float p_depth, jgl::Shader* p_shader)
{
	//Texture activation
	World_object::Scenery_part::texture->activate();

	_point_buffer->activate();
	_element_buffer->activate();
	_uvs_scenery_buffer[p_level]->activate();

	p_delta_pos.z = static_cast<jgl::Float>(p_level + p_depth) / 10000.0f;
	p_shader->uniform("delta_pos")->send(p_delta_pos);
	p_shader->uniform("textureID")->send(0);

	p_shader->cast(jgl::Shader::Mode::Triangle, _element_buffer->size() / sizeof(jgl::Uint));

	//Texture desactivation
	World_object::Scenery_part::texture->desactivate();

}

void Chunk::render(jgl::Float p_depth)
{
	jgl::Vector3 delta_pos = jgl::convert_screen_to_opengl((jgl::Vector2(_data.pos) - 0.5f) * Constant::Node::size * Constant::Chunk::size + jgl::Application::active_application()->size() / 2, p_depth) + jgl::Vector3(1, -1, 0);

	jgl::Shader* tmp_shader = jgl::Application::active_application()->shader("Chunk_shader");

	tmp_shader->activate();

	//Render nodes
	_render_nodes(delta_pos, p_depth, tmp_shader);

	//Render sceneries under player foot
	for (jgl::Int i = 0; i < 3; i++)
	{
		_render_sceneries(delta_pos, i, p_depth, tmp_shader);
	}

	//Render sceneries over player foot
	for (jgl::Int i = 3; i < Constant::Chunk::nb_layer; i++)
	{
		_render_sceneries(delta_pos, i, p_depth + 1, tmp_shader);
	}
}

void Chunk::set_data(Data_structure::Chunk& p_data)
{
	_baked = false;
	for (jgl::Size_t i = 0; i < Constant::Chunk::size; i++)
	{
		for (jgl::Size_t j = 0; j < Constant::Chunk::size; j++)
		{
			_data.nodes[i][j] = p_data.nodes[i][j];
			for (jgl::Size_t h = 0; h < Constant::Chunk::nb_layer; h++)
			{
				_data.sceneries[i][j][h] = p_data.sceneries[i][j][h];
			}
		}
	}
}