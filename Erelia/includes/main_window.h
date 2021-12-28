#pragma once

#include "jgl.h"

class Main_window : public jgl::Widget
{
private:
	Engine* _engine;

	Player_controller* _player_controller;
	Map_controller* _map_controller;
	Entity_controller* _entity_controller;

	void _on_geometry_change();
	void _render();

public:
	Main_window(jgl::Widget* p_parent = nullptr);
};