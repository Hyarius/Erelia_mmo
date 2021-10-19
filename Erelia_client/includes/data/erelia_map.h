#pragma once

#include "jgl.h"
#include "erelia_commun.h"
#include "data/erelia_chunk.h"

class Map
{
private:
	jgl::Map<jgl::Vector2Int, Chunk*> _chunks;
	jgl::Map<jgl::Vector2Int, jgl::Bool> _chunk_asked;

public:
	Map();

	void set_chunk_data(jgl::Vector2Int& p_pos, Data_structure::Chunk& data)
	{
		if (_chunks.count(p_pos) == 0)
		{
			_chunks[p_pos] = new Chunk(data);
		}
		else
		{
			_chunks[p_pos]->set_data(data);
		}
	}

	Chunk* chunk(jgl::Vector2Int p_pos) const {
		if (_chunks.count(p_pos) == 0)
			return (nullptr);
		return (_chunks.at(p_pos));
	}


	void set_chunk_asked(jgl::Vector2Int p_pos, jgl::Bool state) {
		_chunk_asked[p_pos] = state;
	}
	jgl::Bool chunk_asked(jgl::Vector2Int p_pos) const {
		if (_chunk_asked.count(p_pos) == 0)
			return (false);
		return (_chunk_asked.at(p_pos));
	}
};
