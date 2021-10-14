#pragma once

#include "jgl.h"
#include "erelia_commun.h"
#include "Data/erelia_chunk.h"

class Map
{
private:
	jgl::Map<jgl::Vector2Int, Chunk*> _chunks;

public:
	Map();
};
