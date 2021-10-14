#pragma once

#include "jgl.h"
#include "erelia_commun.h"

class Chunk
{
private:
	Data_structure::Chunk _data;

public:
	Chunk(jgl::Vector2Int p_pos);
	Chunk(Data_structure::Chunk& p_data);
};