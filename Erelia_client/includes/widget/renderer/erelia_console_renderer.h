#pragma once

#include "jgl.h"
#include "erelia_commun.h"

class Console_renderer : public jgl::Widget
{
private:

	void _on_geometry_change();
	void _render();

	bool _update();
	bool _fixed_update();

public:
	Console_renderer(jgl::Widget* p_parent = nullptr);
};