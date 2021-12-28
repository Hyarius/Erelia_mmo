#include "erelia.h"

jgl::Bool Map::_intern_variable_initialize = false;

Map::Map(jgl::String p_name)
{
	_name = p_name;
	_map_folder = "ressource/map/" + p_name;
	_chunk_folder = _map_folder + "/chunk/";

	prepare_folders();
	if (_intern_variable_initialize == false)
		_init_internal_variable();
}

void Map::_init_internal_variable()
{
	if (World_object::Node::C_TEXTURE_SHEET == nullptr)
		World_object::Node::C_TEXTURE_SHEET = new jgl::Sprite_sheet("ressource/texture/chunk_sprite_sheet.png", World_object::Node::C_TEXTURE_SIZE);
	if (World_object::Prefab::C_TEXTURE_SHEET == nullptr)
		World_object::Prefab::C_TEXTURE_SHEET = new jgl::Sprite_sheet("ressource/texture/prefab_sheet.png", World_object::Prefab::C_TEXTURE_SIZE);
	_intern_variable_initialize = true;
}

jgl::Vector2Int Map::convert_world_to_chunk(jgl::Vector2Int p_world_pos)
{
	jgl::Vector2Int result = p_world_pos / Chunk::C_SIZE;

	if (p_world_pos.x < 0)
		result.x--;
	if (p_world_pos.y < 0)
		result.y--;

	return (result);
}

jgl::Vector2Int Map::convert_world_to_chunk(jgl::Vector3Int p_world_pos)
{
	jgl::Vector2 result;

	result.x = static_cast<jgl::Float>(p_world_pos.x) / static_cast<jgl::Float>(Chunk::C_SIZE);
	result.y = static_cast<jgl::Float>(p_world_pos.y) / static_cast<jgl::Float>(Chunk::C_SIZE);

	result = result.floor();

	return (result);
}

jgl::Vector3Int Map::convert_world_to_relative(jgl::Vector2Int p_world_pos, jgl::Int p_level)
{
	jgl::Vector3Int result = jgl::Vector3Int(p_world_pos.x, p_world_pos.y, p_level);

	while (result.x < 0)
	{
		result.x += Chunk::C_SIZE;
	}
	while (result.y < 0)
	{
		result.y += Chunk::C_SIZE;
	}
	while (result.x >= Chunk::C_SIZE)
	{
		result.x -= Chunk::C_SIZE;
	}
	while (result.y >= Chunk::C_SIZE)
	{
		result.y -= Chunk::C_SIZE;
	}

	return (result);
}

jgl::Vector3Int Map::convert_world_to_relative(jgl::Vector3Int p_world_pos)
{
	return (convert_world_to_relative(jgl::Vector2Int(p_world_pos.x, p_world_pos.y), p_world_pos.z));
}

jgl::Vector2Int Map::convert_chunk_to_world(jgl::Vector2Int p_chunk_pos)
{
	return (p_chunk_pos * Chunk::C_SIZE);
}


void Map::prepare_folders()
{
	int check = _mkdir(_map_folder.c_str());
	check = _mkdir((_map_folder + "/chunk").c_str());
}

jgl::Short Map::node(jgl::Vector3Int p_pos)
{
	jgl::Vector2Int chunk_pos = convert_world_to_chunk(p_pos);

	Chunk* tmp_chunk = chunk(chunk_pos);
	if (tmp_chunk == nullptr)
		return (-1);

	jgl::Vector3Int relative_pos = convert_world_to_relative(p_pos);

	return (tmp_chunk->node(relative_pos));
}

void Map::place_node(jgl::Vector3Int p_pos, jgl::Short p_value)
{
	jgl::Vector2Int chunk_pos = convert_world_to_chunk(p_pos);
		
	jgl::Vector3Int relative_pos = convert_world_to_relative(p_pos);

	Chunk* tmp_chunk = request_chunk(chunk_pos);

	tmp_chunk->place_node(relative_pos, p_value);

	jgl::Bool rebake_neightbour = false;

	if (relative_pos.x == 0 || relative_pos.x == Chunk::C_SIZE - 1 ||
		relative_pos.y == 0 || relative_pos.y == Chunk::C_SIZE - 1 ||
		relative_pos.z == 0 || relative_pos.z == Chunk::C_NB_LAYER - 1)
	{
		rebake_neightbour = true;
	}

	tmp_chunk->unbake(rebake_neightbour);
}

Chunk* Map::request_chunk(jgl::Vector2Int p_pos)
{
	if (_chunks.count(p_pos) == 0)
	{
		_chunks[p_pos] = new Chunk(p_pos);
	}
	return (_chunks.at(p_pos));
}

void Map::save()
{
	for (auto tmp : _chunks)
	{
		tmp.second->save(_chunk_folder);
	}
}

Chunk* Map::load_chunk(jgl::Vector2Int p_pos)
{
	Chunk* tmp_chunk = request_chunk(p_pos);
	tmp_chunk->load(_chunk_folder);
	return (tmp_chunk);
}

void Map::unbake()
{
	for (auto tmp : _chunks)
	{
		tmp.second->unbake();
	}
}

Chunk* Map::chunk(jgl::Vector2Int p_pos) const
{
	if (_chunks.count(p_pos) == 0)
		return (nullptr);
	return (_chunks.at(p_pos));
}