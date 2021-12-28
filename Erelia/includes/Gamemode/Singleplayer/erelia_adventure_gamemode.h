#pragma once

#include "jgl.h"

#include "Widget/Generic/erelia_graphical_widget.h"
#include "Gamemode/Singleplayer/Widget/erelia_singleplayer_player_command.h"

namespace Singleplayer
{
	class Adventure_gamemode : public Graphical_widget
	{
	private:
		Singleplayer::Player_command* _player_command;

		Engine* _engine;

		void _render();
		void _on_geometry_change();

		jgl::Bool _update();
		jgl::Bool _fixed_update();

	public:
		Adventure_gamemode(Engine* p_engine, jgl::Widget* p_parent);
	};
}