#include "erelia.h"

namespace Singleplayer
{
	jgl::Key Player_command::keys[C_NB_KEYS] = { jgl::Key::Z, jgl::Key::Q, jgl::Key::S, jgl::Key::D };
	jgl::Vector2Int Player_command::deltas[C_NB_KEYS] = { jgl::Vector2Int(0, -1), jgl::Vector2Int(-1, 0), jgl::Vector2Int(0, 1), jgl::Vector2Int(1, 0) };

	Player_command::Player_command(Engine* p_engine, jgl::Widget* p_parent) : Graphical_widget(p_engine, p_parent),
		_engine(p_engine)
	{

	}

	void Player_command::_render()
	{

	}

	void Player_command::_on_geometry_change()
	{

	}

	jgl::Bool Player_command::_update()
	{
		jgl::Vector2Int tmp_delta = 0;

		for (jgl::Size_t i = 0; i < 4; i++)
		{
			if (jgl::Application::active_application()->keyboard().get_key(keys[i]) == jgl::Input_status::Down)
			{
				tmp_delta += deltas[i];
			}
		}

		if (tmp_delta != 0 && _engine->player()->is_in_motion() == false)
		{
			_engine->player()->move(tmp_delta);
			return (true);
		}

		return (false);
	}

	jgl::Bool Player_command::_fixed_update()
	{
		return (false);
	}
}