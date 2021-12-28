#include "erelia.h"

jgl::Shader* Chunk::_chunk_shader = nullptr;
jgl::Uniform* Chunk::_delta_pos_uniform = nullptr;
jgl::Uniform* Chunk::_texture_uniform = nullptr;
jgl::Bool Chunk::_intern_variable_initialize = false;

jgl::Vector3* Chunk::_chunk_point_array = nullptr;
jgl::Vector2* Chunk::_chunk_uv_array = nullptr;
jgl::Size_t* Chunk::_chunk_index_array = nullptr;

jgl::Vector2 Chunk::_delta_autotile_position[4] = {
	jgl::Vector2(0.0f, 0.0f),
	jgl::Vector2(0.0f, 0.5f),
	jgl::Vector2(0.5f, 0.0f),
	jgl::Vector2(0.5f, 0.5f)
};
jgl::Vector2 Chunk::_delta_tile_position[4] = {
	jgl::Vector2(0.0f, 0.0f),
	jgl::Vector2(0.0f, 1.0f),
	jgl::Vector2(1.0f, 0.0f),
	jgl::Vector2(1.0f, 1.0f)
};
jgl::Vector2 Chunk::_delta_uvs[4] = {
	jgl::Vector2(0.0f, 0.0f),
	jgl::Vector2(0.0f, 1.0f),
	jgl::Vector2(1.0f, 0.0f),
	jgl::Vector2(1.0f, 1.0f)
};
jgl::Uint Chunk::_delta_indexes[6] = {
	0, 3, 1, 2, 3, 0
};

Chunk::Chunk(jgl::Vector2Int p_pos) :
	_pos(p_pos), _baked(false)
{
	static const jgl::String C_CHUNK_STRING = "chunk";
	static const jgl::String C_X_STRING = "x";
	static const jgl::String C_Y_STRING = "y";
	_name = C_CHUNK_STRING + jgl::itoa(_pos.x) + C_X_STRING + jgl::itoa(_pos.y) + C_Y_STRING + ".chk";

	for (jgl::Size_t x = 0; x < C_SIZE; x++)
	{
		for (jgl::Size_t y = 0; y < C_SIZE; y++)
		{
			for (jgl::Size_t h = 0; h < C_NB_LAYER; h++)
			{
				_content[x][y][h] = -1;
			}
		}
	}

	for (jgl::Size_t i = 0; i < 3; i++)
		for (jgl::Size_t j = 0; j < 3; j++)
			_neightbour_chunks[i][j] = nullptr;

	if (_intern_variable_initialize == false)
		_init_internal_variable();

	_fixed_buffers.acquire();

	for (jgl::Size_t i = 0; i < C_NB_ANIMATION_FRAME; i++)
		_animated_buffers[i].acquire();
}

void Chunk::save(jgl::String p_path)
{
	jgl::File my_file = jgl::open_file(p_path + _name, jgl::File_mode::out);
	for (jgl::Size_t i = 0; i < C_SIZE; i++)
	{
		for (jgl::Size_t j = 0; j < C_SIZE; j++)
		{
			for (jgl::Size_t h = 0; h < C_NB_LAYER; h++)
			{
				jgl::Short value = _content[i][j][h];
				void* add = &(value);
				my_file.write(static_cast<const char*>(add), sizeof(value));
			}
		}
	}
	my_file.close();
}

void Chunk::load(jgl::String p_path)
{
	jgl::String final_path = p_path + _name;

	if (jgl::check_file_exist(final_path) == true)
	{
		jgl::File my_file = jgl::open_file(final_path, jgl::File_mode::in);

		void* tmp = _content;

		my_file.read(static_cast<char*>(tmp), sizeof(jgl::Short) * C_SIZE * C_SIZE * C_NB_LAYER);

		my_file.close();
	}
}

void Chunk::place_node(jgl::Vector3Int p_pos, jgl::Short p_value)
{
	if (p_pos.z >= C_NB_LAYER)
		p_pos.z = C_NB_LAYER - 1;
	_content[p_pos.x][p_pos.y][p_pos.z] = p_value;
}

void Chunk::_init_internal_variable()
{
	if (_chunk_shader == nullptr)
		_chunk_shader = jgl::Application::active_application()->shader("Chunk_shader");

	const jgl::Size_t nb_sub_part_in_autotile = 4u;
	const jgl::Size_t nb_element = 4u;
	const jgl::Size_t nb_indexes = 6u;

	if (_chunk_point_array == nullptr)
		_chunk_point_array = new jgl::Vector3[C_SIZE * C_SIZE * C_NB_LAYER * nb_element * nb_sub_part_in_autotile];
	if (_chunk_uv_array == nullptr)
		_chunk_uv_array = new jgl::Vector2[C_SIZE * C_SIZE * C_NB_LAYER * nb_element * nb_sub_part_in_autotile];
	if (_chunk_index_array == nullptr)
		_chunk_index_array = new jgl::Size_t[C_SIZE * C_SIZE * C_NB_LAYER * nb_indexes * nb_sub_part_in_autotile];

	_delta_pos_uniform = _chunk_shader->uniform("delta_pos")->copy();
	_texture_uniform = _chunk_shader->uniform("textureID")->copy();

	_intern_variable_initialize = true;
}

jgl::Vector2Int Chunk::_calc_sub_part_sprite(jgl::Int p_x, jgl::Int p_y, jgl::Int p_z, jgl::Size_t p_sub_part)
{
	jgl::Int first_value = node(p_x, p_y, p_z);

	jgl::Bool values[3] = { false, false, false };
	for (jgl::Size_t j = 0; j < 3; j++)
	{
		jgl::Vector2Int next_pos = jgl::Vector2Int(p_x + _baking_neightbour_node[p_sub_part][j].x, p_y + _baking_neightbour_node[p_sub_part][j].y);
		jgl::Int chunk_x = (next_pos.x == -1 ? 0 : (next_pos.x != C_SIZE ? 1 : 2));
		jgl::Int chunk_y = (next_pos.y == -1 ? 0 : (next_pos.y != C_SIZE ? 1 : 2));

		if (next_pos.x == -1)
			next_pos.x = C_SIZE - 1;
		if (next_pos.y == -1)
			next_pos.y = C_SIZE - 1;

		if (next_pos.x == C_SIZE)
			next_pos.x = 0;
		if (next_pos.y == C_SIZE)
			next_pos.y = 0;

		jgl::Int next_value;

		if (_neightbour_chunks[chunk_x][chunk_y] == nullptr)
		{
			next_value = -1;
		}
		else
		{
			next_value = _neightbour_chunks[chunk_x][chunk_y]->node(next_pos, p_z);
		}
		values[j] = (next_value == first_value ? false : true);
	}

	return (_baking_delta_node_sprite[p_sub_part][values[0]][values[1]][values[2]]);
}

void Chunk::_bake_autotile(const World_object::Node* p_node, const jgl::Int& p_value, const jgl::Size_t& p_frame,
	const jgl::Int& p_x, const jgl::Int& p_y, const jgl::Int& p_z,
	jgl::Size_t& p_index, jgl::Size_t& p_index_indexes)
{
	for (jgl::Size_t sub_part = 0; sub_part < 4; sub_part++)
	{
		jgl::Uint index_base_length = p_index;

		jgl::Vector2Int sub_part_sprite = _calc_sub_part_sprite(p_x, p_y, p_z, sub_part);

		jgl::Vector2 tmp_sprite = World_object::Node::C_TEXTURE_SHEET->sprite(p_node->sprite + sub_part_sprite + jgl::Vector2Int(4, 0) * p_frame);

		for (jgl::Size_t i = 0; i < 4; i++)
		{
			_chunk_point_array[p_index] = jgl::convert_screen_to_opengl(jgl::Vector2Int((p_x + _delta_autotile_position[i].x + _delta_autotile_position[sub_part].x) * World_object::Node::C_SIZE, (p_y + _delta_autotile_position[i].y + _delta_autotile_position[sub_part].y) * World_object::Node::C_SIZE), p_z);
			_chunk_point_array[p_index].x += 1.0f;
			_chunk_point_array[p_index].y -= 1.0f;
			_chunk_uv_array[p_index] = tmp_sprite + _delta_uvs[i] * World_object::Node::C_TEXTURE_SHEET->unit();

			p_index++;
		}

		for (jgl::Size_t i = 0; i < 6; i++)
		{
			_chunk_index_array[p_index_indexes] = index_base_length + _delta_indexes[i];
			p_index_indexes++;
		}
	}
}

void Chunk::_bake_tile(const World_object::Node* p_node, const jgl::Int& p_value, const jgl::Size_t& p_frame,
	const jgl::Int& p_x, const jgl::Int& p_y, const jgl::Int& p_z,
	jgl::Size_t& p_index, jgl::Size_t& p_index_indexes)
{
	jgl::Uint index_base_length = p_index;

	jgl::Vector2 tmp_sprite = World_object::Node::C_TEXTURE_SHEET->sprite(p_node->sprite + jgl::Vector2Int(1, 0) * p_frame);

	for (jgl::Size_t i = 0; i < 4; i++)
	{
		_chunk_point_array[p_index] = jgl::convert_screen_to_opengl(jgl::Vector2Int((p_x + _delta_tile_position[i].x) * World_object::Node::C_SIZE, (p_y + _delta_tile_position[i].y) * World_object::Node::C_SIZE), p_z);
		_chunk_point_array[p_index].x += 1.0f;
		_chunk_point_array[p_index].y -= 1.0f;
		_chunk_uv_array[p_index] = tmp_sprite + _delta_uvs[i] * World_object::Node::C_TEXTURE_SHEET->unit();

		p_index++;
	}

	for (jgl::Size_t i = 0; i < 6; i++)
	{
		_chunk_index_array[p_index_indexes] = index_base_length + _delta_indexes[i];
		p_index_indexes++;
	}
}

void Chunk::_bake_fixed()
{
	jgl::Size_t index = 0;
	jgl::Size_t index_indexes = 0;

	for (jgl::Int z = 0; z < C_NB_LAYER; z++)
	{
		for (jgl::Int y = 0; y < C_SIZE; y++)
		{
			for (jgl::Int x = 0; x < C_SIZE; x++)
			{
				jgl::Int value = _content[x][y][z];
				if (value >= 0 && static_cast<jgl::Size_t>(value) < World_object::g_node_array.size())
				{
					World_object::Node* tmp_node = World_object::g_node_array[value];
					if (tmp_node->animation_size == 1)
					{
						if (tmp_node->autotiled == true)
						{
							_bake_autotile(tmp_node, value, 0, x, y, z, index, index_indexes);
						}
						else
						{
							_bake_tile(tmp_node, value, 0, x, y, z, index, index_indexes);
						}
					}
				}
			}
		}
	}

	_fixed_buffers.point_buffer->send(_chunk_point_array, index);
	_fixed_buffers.uv_buffer->send(_chunk_uv_array, index);
	_fixed_buffers.element_buffer->send(_chunk_index_array, index_indexes);

}

void Chunk::_bake_animated()
{
	for (jgl::Size_t frame = 0; frame < C_NB_ANIMATION_FRAME; frame++)
	{
		jgl::Size_t index = 0;
		jgl::Size_t index_indexes = 0;

		for (jgl::Int z = 0; z < C_NB_LAYER; z++)
		{
			for (jgl::Int y = 0; y < C_SIZE; y++)
			{
				for (jgl::Int x = 0; x < C_SIZE; x++)
				{
					jgl::Int value = _content[x][y][z];
					if (value >= 0 && static_cast<jgl::Size_t>(value) < World_object::g_node_array.size())
					{
						World_object::Node* tmp_node = World_object::g_node_array[value];
						if (tmp_node->animation_size > 1)
						{
							if (tmp_node->autotiled == true)
							{
								_bake_autotile(tmp_node, value, frame, x, y, z, index, index_indexes);
							}
							else
							{
								_bake_tile(tmp_node, value, frame, x, y, z, index, index_indexes);
							}
						}
					}
				}
			}
		}

		_animated_buffers[frame].point_buffer->send(_chunk_point_array, index);
		_animated_buffers[frame].uv_buffer->send(_chunk_uv_array, index);
		_animated_buffers[frame].element_buffer->send(_chunk_index_array, index_indexes);

	}
}

void Chunk::_find_neightbour_chunk(const Map* p_map, jgl::Int x, jgl::Int y)
{
	_neightbour_chunks[x + 1][y + 1] = p_map->chunk(jgl::Vector2Int(_pos.x + x, _pos.y + y));
}


void Chunk::unbake(jgl::Bool p_reset_neightbour_chunk)
{
	_baked = false;
	if (p_reset_neightbour_chunk == true)
	{
		for (jgl::Size_t i = 0; i < 3; i++)
		{
			for (jgl::Size_t j = 0; j < 3; j++)
			{
				_neightbour_chunks[i][j] = nullptr;
			}
		}
	}
}

void Chunk::bake(const Map* p_map)
{
	rebake(p_map);

	for (jgl::Size_t i = 0; i < 3; i++)
		for (jgl::Size_t j = 0; j < 3; j++)
		{
			if (_neightbour_chunks[i][j] != nullptr && _neightbour_chunks[i][j] != this)
			{
				_neightbour_chunks[i][j]->rebake(p_map);
			}
		}
}

void Chunk::rebake(const Map* p_map)
{
	for (jgl::Int i = 0; i < 3; i++)
		for (jgl::Int j = 0; j < 3; j++)
		{
			if (_neightbour_chunks[i][j] == nullptr)
				_find_neightbour_chunk(p_map, i - 1, j - 1);
		}

	_bake_fixed();
	_bake_animated();

	_baked = true;
}

void Chunk::_render_fixed(jgl::Vector3 p_anchor)
{
	World_object::Node::C_TEXTURE_SHEET->activate();

	_fixed_buffers.point_buffer->activate();
	_fixed_buffers.uv_buffer->activate();
	_fixed_buffers.element_buffer->activate();

	_delta_pos_uniform->send(p_anchor);
	_texture_uniform->send(0);

	_chunk_shader->cast(jgl::Shader::Mode::Triangle, _fixed_buffers.element_buffer->size() / sizeof(jgl::Uint));

	World_object::Node::C_TEXTURE_SHEET->desactivate();
}

void Chunk::_render_animated(jgl::Vector3 p_anchor, jgl::Size_t p_frame)
{
	World_object::Node::C_TEXTURE_SHEET->activate();

	_animated_buffers[p_frame].point_buffer->activate();
	_animated_buffers[p_frame].uv_buffer->activate();
	_animated_buffers[p_frame].element_buffer->activate();

	_delta_pos_uniform->send(p_anchor);
	_texture_uniform->send(0);

	_chunk_shader->cast(jgl::Shader::Mode::Triangle, _animated_buffers[p_frame].element_buffer->size() / sizeof(jgl::Uint));

	World_object::Node::C_TEXTURE_SHEET->desactivate();
}


void Chunk::render(jgl::Vector3 p_anchor, jgl::Size_t p_frame)
{
	_chunk_shader->activate();

	_render_fixed(p_anchor);
	_render_animated(p_anchor, p_frame);
}