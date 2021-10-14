#pragma once

#include "jgl.h"

class Map_renderer : public jgl::Widget
{
private:

	void _on_geometry_change();
	void _render();

	bool _update();
	bool _fixed_update();

public:
	Map_renderer(jgl::Widget* p_parent = nullptr);
};
