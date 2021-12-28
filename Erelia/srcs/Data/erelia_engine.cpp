#include "erelia.h"

Engine::Engine()
{
	_player = new Player(this, 0, Entity::C_UNKNOW_ID);
}

void Engine::set_node_size(jgl::Size_t p_node_size)
{
	World_object::Node::C_SIZE = p_node_size;

	_active_map->unbake();
}

void Engine::load_map(jgl::String p_name)
{

}