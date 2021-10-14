#include "erelia_server.h"

void Server_application::_on_geometry_change()
{
}

void Server_application::_render()
{

}

Server_application::Server_application(jgl::Widget* p_parent) : jgl::Widget(p_parent),
	_engine(nullptr),
	_updater(nullptr),
	_player_updater(nullptr),
	_map_updater(nullptr),
	_entity_updater(nullptr)
{
	//Creation des renderers
	_updater = new jgl::Contener(this);
	_updater->activate();

	_player_updater = new Player_updater(_updater);
	_player_updater->activate();

	_map_updater = new Map_updater(_updater);
	_map_updater->activate();

	_entity_updater = new Entity_updater(_updater);
	_entity_updater->activate();
}