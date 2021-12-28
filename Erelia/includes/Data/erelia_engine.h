#pragma once

#include "erelia_map.h"
#include "erelia_player.h"

class Engine
{
private:
	Map* _active_map;
	jgl::Map<jgl::String, Map*> _maps;
	Player* _player;
	jgl::Map<jgl::Long, Entity*> _entities;

public:
	Engine();

	void add_map(jgl::String p_name) {
		if (_maps.count(p_name) != 0)
			delete _maps[p_name];
		_maps[p_name] = new Map(p_name);
	}
	void set_node_size(jgl::Size_t p_node_size);
	jgl::Map<jgl::String, Map*>& maps() { return (_maps); }
	void set_active_map(Map* p_map) { _active_map = p_map; }
	Map* active_map() { return (_active_map); }
	Map* map(jgl::String p_name) {
		if (_maps.count(p_name) == 0)
			_maps[p_name] = new Map(p_name);
		return (_maps[p_name]);
	}
	Player* player() { return (_player); }
	jgl::Map<jgl::Long, Entity*>& entities() { return (_entities); }
	
	void load_map(jgl::String p_name);
	void add_entity(Entity *p_entity) { _entities[p_entity->id()] = p_entity; }
};