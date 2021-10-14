#pragma once

#include "jgl.h"

class Particule_renderer : public jgl::Widget
{
private:

	void _on_geometry_change();
	void _render();

	bool _update();
	bool _fixed_update();

public:
	Particule_renderer(jgl::Widget* p_parent = nullptr);
};
