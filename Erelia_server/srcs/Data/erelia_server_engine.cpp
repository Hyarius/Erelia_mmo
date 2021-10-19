#include "erelia_server.h"

Engine::Engine() :
	_map()
{

}

Chunk* Engine::request_chunk(jgl::Vector2Int p_pos)
{
	return (_map.request_chunk(p_pos));
}