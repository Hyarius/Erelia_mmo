#include "erelia_client.h"

Engine::Engine() :
	_map(nullptr)
{
	_map = new Map();
}

void Engine::received_chunk_data(Message& msg)
{
	while (msg.empty() == false)
	{
		Data_structure::Chunk data;

		msg >> data;

		_map->set_chunk_data(data.pos, data);
	}
}