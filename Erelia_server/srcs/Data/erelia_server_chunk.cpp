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