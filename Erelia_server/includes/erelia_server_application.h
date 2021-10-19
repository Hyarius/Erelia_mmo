#pragma once

#include "erelia_commun.h"

#include "Data/erelia_engine.h"

#include "Widget/Updater/erelia_map_updater.h"
#include "Widget/Updater/erelia_entity_updater.h"
#include "Widget/Updater/erelia_player_updater.h"

class Server_application : public jgl::Widget
{
private:

	Server* _server;

	//Controller elements
	jgl::Contener* _updater;
	Player_updater* _player_updater;
	Map_updater* _map_updater;
	Entity_updater* _entity_updater;

	//Data contener
	Engine* _engine;

	void _on_geometry_change();
	void _render();

	void _chunk_request(Message& msg);

public:
	Server_application(jgl::Widget* p_parent = nullptr);
};
