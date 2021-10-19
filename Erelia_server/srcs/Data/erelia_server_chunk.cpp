#include "erelia_server.h"

Chunk::Chunk(jgl::Vector2Int p_pos) : _data(p_pos)
{

}

Chunk::Chunk(Data_structure::Chunk& p_data) : _data(p_data.pos)
{
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

void Chunk::set_node(jgl::Size_t x, jgl::Size_t y, jgl::Int value)
{
	if (x < 0 || x >= Constant::Chunk::size || y < 0 || y >= Constant::Chunk::size)
		THROW_EXCEPTION(jgl::Error_level::Error, 1, "Chunk node out of range");

	_data.nodes[x][y] = value;
}

void Chunk::set_scenery(jgl::Size_t x, jgl::Size_t y, jgl::Size_t z, jgl::Int value)
{
	if (x < 0 || x >= Constant::Chunk::size || y < 0 || y >= Constant::Chunk::size || z < 0 || z >= Constant::Chunk::nb_layer)
		THROW_EXCEPTION(jgl::Error_level::Error, 1, "Chunk scenery out of range");

	_data.sceneries[x][y][z] = value;
}
