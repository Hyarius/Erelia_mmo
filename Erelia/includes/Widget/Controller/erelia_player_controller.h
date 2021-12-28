#pragma once

#include "jgl.h"

#include "erelia_connection_data.h"

#include "Widget/Multiplayer/erelia_player_updater_multiplayer.h"
#include "Widget/Singleplayer/erelia_player_updater_singleplayer.h"

class Player_controller : public jgl::Widget
{
private:
	Engine* _engine;

	Generic_player_updater* _updater;

	void _on_geometry_change();

	void _render();

	Player_controller(Engine* p_engine, jgl::Widget* p_parent = nullptr);

public:
	static Player_controller* create(Engine* p_engine, Connection_type p_connection_type, jgl::Widget* p_parent = nullptr);
};