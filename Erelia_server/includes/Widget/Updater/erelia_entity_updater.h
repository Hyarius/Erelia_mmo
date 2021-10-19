#pragma once

#include "jgl.h"
#include "erelia_commun.h"

class Entity_updater : public jgl::Widget
{
private:

	void _on_geometry_change();
	void _render();

	bool _update();
	bool _fixed_update();

public:
	Entity_updater(jgl::Widget* p_parent = nullptr);
};