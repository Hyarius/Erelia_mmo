#include "erelia.h"

namespace Singleplayer
{
	void Map_updater::_on_geometry_change()
	{

	}

	void Map_updater::_render()
	{
		
	}

	jgl::Bool Map_updater::_update()
	{
		if (_map == nullptr)
			return (false);

		jgl::Vector2Int start_chunk = convert_screen_to_chunk(0);
		jgl::Vector2Int end_chunk = convert_screen_to_chunk(_area);

		for (jgl::Int x = start_chunk.x; x <= end_chunk.x; x++)
		{
			for (jgl::Int y = start_chunk.y; y <= end_chunk.y; y++)
			{
				jgl::Vector2Int tmp_pos = jgl::Vector2Int(x, y);
				if (_map->chunk(tmp_pos) == nullptr)
				{
					Chunk* tmp_chunk = _map->request_chunk(tmp_pos);
					_map->load_chunk(tmp_pos);
				}
			}
		}

		return (false);
	}

	jgl::Bool Map_updater::_fixed_update()
	{
		return (false);
	}

	Map_updater::Map_updater(Engine* p_engine, jgl::Widget* p_parent) : Generic_map_updater(p_engine, p_parent)
	{

	}
}