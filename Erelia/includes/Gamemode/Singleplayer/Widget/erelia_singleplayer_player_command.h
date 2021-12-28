#pragma once

#include "jgl.h"
#include "Widget/Generic/erelia_graphical_widget.h"

namespace Singleplayer
{
	class Player_command : public Graphical_widget
	{
	private:
		static const jgl::Size_t C_NB_KEYS = 4u;
		static jgl::Key keys[C_NB_KEYS];
		static jgl::Vector2Int deltas[C_NB_KEYS];

		Engine* _engine;

		void _render();
		void _on_geometry_change();

		jgl::Bool _update();
		jgl::Bool _fixed_update();

	public:
		Player_command(Engine* p_engine, jgl::Widget *p_parent);
	};
}