#pragma once

#include "jgl.h"

#include "Widget/Generic/erelia_generic_map_updater.h"
#include "Data/erelia_engine.h"

namespace Singleplayer
{
	class Map_updater : public Generic_map_updater
	{
	private:
		void _on_geometry_change();
		void _render();
		jgl::Bool _update();
		jgl::Bool _fixed_update();

	public:
		Map_updater(Engine* p_engine, jgl::Widget* p_parent = nullptr);
	};
}