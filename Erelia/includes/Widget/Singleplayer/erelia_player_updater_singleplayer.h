#pragma once

#include "jgl.h"

#include "Widget/Generic/erelia_generic_player_updater.h"
#include "Gamemode/Singleplayer/erelia_adventure_gamemode.h"
#include "Gamemode/Singleplayer/erelia_editor_gamemode.h"
#include "Data/erelia_engine.h"

namespace Singleplayer
{
	class Player_updater : public Generic_player_updater
	{
	private:
		Engine* _engine;

		void _on_geometry_change();
		void _render();

	public:
		Player_updater(Engine* p_engine, jgl::Widget* p_parent = nullptr);
	};
}