#pragma once

#include "jgl.h"
#include "erelia_commun.h"
#include "Data/erelia_chunk.h"

class Map
{
private:
	jgl::Map<jgl::Vector2Int, Chunk*> _chunks;

	void _generate_chunk(jgl::Vector2Int p_pos);

public:
	Map();

	Chunk* chunk(jgl::Vector2Int p_pos);
	Chunk* request_chunk(jgl::Vector2Int p_pos);
};
