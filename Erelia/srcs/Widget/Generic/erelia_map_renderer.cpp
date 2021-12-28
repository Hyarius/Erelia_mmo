#include "erelia.h"

void Map_renderer::_on_geometry_change()
{
	if (_map == nullptr)
		return;

	_map->unbake();
}

void Map_renderer::_render()
{
	if (_map == nullptr)
		return;

	jgl::Vector2Int start_chunk = convert_screen_to_chunk(0);
	jgl::Vector2Int end_chunk = convert_screen_to_chunk(_area);

	jgl::Size_t tmp_frame = jgl::Application::active_application()->time() % 1000 / (1000 / 4);

	for (jgl::Int x = start_chunk.x; x <= end_chunk.x; x++)
	{
		for (jgl::Int y = start_chunk.y; y <= end_chunk.y; y++)
		{
			jgl::Vector2Int tmp_pos = jgl::Vector2Int(x, y);
			Chunk* tmp_chunk = _map->chunk(tmp_pos);
			if (tmp_chunk != nullptr)
			{
				jgl::Vector3 tmp_anchor = jgl::convert_screen_to_opengl(convert_world_to_screen(Map::convert_chunk_to_world(tmp_pos) - 0.5f), _depth);

				if (tmp_chunk->baked() == false)
					tmp_chunk->bake(_map);
				tmp_chunk->render(tmp_anchor, tmp_frame);
			}
		}
	}
}

Map_renderer::Map_renderer(Engine* p_engine, jgl::Widget* p_parent) : Graphical_widget(p_engine, p_parent),
	_engine(p_engine),
	_map(nullptr)
{

}

void Map_renderer::change_map(jgl::String p_name)
{
	_map = _engine->map(p_name);
}