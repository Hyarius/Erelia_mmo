#pragma once

#include "jgl.h"
#include "erelia_commun.h"
#include "Data/erelia_map.h"

class Engine
{
private:
	Map _map;

public:
	Engine();

	Chunk* request_chunk(jgl::Vector2Int p_pos);
};
