#pragma once

#include "jgl.h"
#include "erelia_commun.h"
#include "data/erelia_map.h"

class Engine
{
private:
	Map* _map;

public:
	Engine();

	void received_chunk_data(Message& msg);

	Map* map() { return (_map); }
};
