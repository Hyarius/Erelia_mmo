#pragma once

#include "erelia_chunk.h"

class Map
{
private:
	jgl::String _name;
	jgl::String _map_folder;
	jgl::String _chunk_folder;

	jgl::Map<jgl::Vector2Int, Chunk*> _chunks;

	static jgl::Bool _intern_variable_initialize;
	static void _init_internal_variable();

public:
	Map(jgl::String p_name);

	static jgl::Vector2Int convert_world_to_chunk(jgl::Vector2Int p_world_pos);
	static jgl::Vector2Int convert_world_to_chunk(jgl::Vector3Int p_world_pos);
	static jgl::Vector3Int convert_world_to_relative(jgl::Vector2Int p_world_pos, jgl::Int p_level);
	static jgl::Vector3Int convert_world_to_relative(jgl::Vector3Int p_world_pos);
	static jgl::Vector2Int convert_chunk_to_world(jgl::Vector2Int p_chunk_pos);

	jgl::Short node(jgl::Vector3Int p_pos);
	void place_node(jgl::Vector3Int p_pos, jgl::Short p_value);

	const jgl::Map<jgl::Vector2Int, Chunk*>& chunks() const { return (_chunks); }
	Chunk* request_chunk(jgl::Vector2Int p_pos);
	Chunk* chunk(jgl::Vector2Int p_pos) const;

	void save();
	Chunk* load_chunk(jgl::Vector2Int p_pos);

	void unbake();

	void prepare_folders();
};