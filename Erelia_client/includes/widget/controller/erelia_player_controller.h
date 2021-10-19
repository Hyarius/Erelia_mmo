#pragma once

#include "jgl.h"
#include "erelia_commun.h"

class Player_controller : public jgl::Widget
{
private:
	Client* _client;

	void _on_geometry_change();
	void _render();

	bool _update();
	bool _fixed_update();

public:
	Player_controller(jgl::Widget* p_parent = nullptr);
};
