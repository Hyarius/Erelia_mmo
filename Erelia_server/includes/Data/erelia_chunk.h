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

	void set_node(jgl::Size_t x, jgl::Size_t y, jgl::Int value);
	void set_scenery(jgl::Size_t x, jgl::Size_t y, jgl::Size_t z, jgl::Int value);
	const Data_structure::Chunk& data() { return (_data); }
};