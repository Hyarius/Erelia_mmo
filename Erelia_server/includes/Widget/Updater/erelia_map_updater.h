#pragma once

#include "jgl.h"

class Map_updater : public jgl::Widget
{
private:

	void _on_geometry_change();
	void _render();

	bool _update();
	bool _fixed_update();

public:
	Map_updater(jgl::Widget* p_parent = nullptr);
};
