#include "erelia_server.h"

Map::Map()
{

}

void Map::_generate_chunk(jgl::Vector2Int p_pos)
{
	_chunks[p_pos] = new Chunk(p_pos);
	for (jgl::Size_t i = 0; i < Constant::Chunk::size; i++)
	{
		for (jgl::Size_t j = 0; j < Constant::Chunk::size; j++)
		{
			if (i == 0 || j == 0)
				_chunks[p_pos]->set_node(i, j, 4);
			else
				_chunks[p_pos]->set_node(i, j, 0);
			_chunks[p_pos]->set_scenery(i, j, 0, 0);
		}
	}
}

Chunk* Map::chunk(jgl::Vector2Int p_pos)
{
	if (_chunks.count(p_pos) == 0)
		return (nullptr);
	return (_chunks[p_pos]);
}

Chunk* Map::request_chunk(jgl::Vector2Int p_pos)
{
	if (_chunks.count(p_pos) == 0)
		_generate_chunk(p_pos);
	return (_chunks[p_pos]);
}