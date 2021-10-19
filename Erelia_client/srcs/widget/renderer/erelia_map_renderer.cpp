#include "erelia_client.h"

void Map_renderer::_on_geometry_change()
{

}

void Map_renderer::_render()
{
	for (jgl::Int x = 0; x <= 0; x++)
	{
		for (jgl::Int y = 0; y <= 0; y++)
		{
			jgl::Vector2Int tmp_pos = jgl::Vector2Int(x, y);
			Chunk* tmp_chunk = _map->chunk(tmp_pos);

			if (tmp_chunk == nullptr && _map->chunk_asked(tmp_pos) == false)
			{
				_missing_chunk.push_back(tmp_pos);
			}
			else if (tmp_chunk != nullptr)
			{
				if (tmp_chunk->baked() == false)
				{
					tmp_chunk->bake();
				}
				tmp_chunk->render(_depth + 3);
			}
		}
	}
}

bool Map_renderer::_update()
{
	return (false);
}

bool Map_renderer::_fixed_update()
{
	return (false);
}

Map_renderer::Map_renderer(const Map* p_map, jgl::Widget* p_parent) : jgl::Widget(p_parent),
	_map(nullptr)
{
	_map = p_map;
}