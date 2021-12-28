#pragma once

#include "jgl.h"

#include "Data/erelia_engine.h"

namespace Singleplayer
{
	class Entity_updater : public jgl::Widget
	{
	private:
		Engine* _engine;

		void _on_geometry_change();
		void _render();
		jgl::Bool _update();
		jgl::Bool _fixed_update();

	public:
		Entity_updater(Engine* p_engine, jgl::Widget* p_parent = nullptr);
	};
}