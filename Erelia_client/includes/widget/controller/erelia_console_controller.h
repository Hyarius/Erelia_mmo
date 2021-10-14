#pragma once

#include "jgl.h"

class Console_controller : public jgl::Widget
{
private:

	void _on_geometry_change();
	void _render();

	bool _update();
	bool _fixed_update();

public:
	Console_controller(jgl::Widget* p_parent = nullptr);
};