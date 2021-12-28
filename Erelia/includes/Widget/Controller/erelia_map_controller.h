
#pragma once

#include "jgl.h"

#include "erelia_connection_data.h"

#include "Widget/Generic/erelia_map_renderer.h"

#include "Widget/Multiplayer/erelia_map_updater_multiplayer.h"
#include "Widget/Singleplayer/erelia_map_updater_singleplayer.h"

class Map_controller : public jgl::Widget
{
private:
	Connection_type _connection_type;

	Engine* _engine;
	jgl::String _map_name;

	jgl::Widget* _updater;
	jgl::Widget* _renderer;

	void _on_geometry_change();

	void _render();

	Map_controller(Connection_type p_connection_type, Engine* p_engine, jgl::Widget* p_parent = nullptr);

public:
	static Map_controller* create(Engine* p_engine, Connection_type p_connection_type, jgl::Widget* p_parent = nullptr);
	void change_map(jgl::String p_name);
};