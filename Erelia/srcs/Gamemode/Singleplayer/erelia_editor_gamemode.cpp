#include "erelia.h"

namespace Singleplayer
{
	Editor_gamemode::Editor_gamemode(Engine* p_engine, jgl::Widget *p_parent) : Graphical_widget(p_engine, p_parent),
		_engine(p_engine)
	{
		_player_command = new Singleplayer::Player_command(p_engine, this);
		_player_command->activate();

		_editor_inventory = new Singleplayer::Editor_inventory(p_engine, this);
		_editor_inventory->activate();
	}

	void Editor_gamemode::_render()
	{
		if ((jgl::Application::active_application()->mouse().get_button(jgl::Mouse_button::Left) == jgl::Input_status::Down ||
			jgl::Application::active_application()->mouse().get_button(jgl::Mouse_button::Right) == jgl::Input_status::Down) && _editor_inventory->is_pointed() == false && 
			jgl::Application::active_application()->keyboard().get_key(jgl::Key::Shift) == jgl::Input_status::Down)
		{
			jgl::Vector2Int tmp_pos = convert_screen_to_world(jgl::Application::active_application()->mouse().pos());

			jgl::Vector2Int start = jgl::Vector2Int::compose_min(_selected_first_pos, tmp_pos);
			jgl::Vector2Int end = jgl::Vector2Int::compose_max(_selected_first_pos, tmp_pos) + 1;

			jgl::Vector2Int anchor = convert_world_to_screen(start);
			jgl::Vector2Int size = (end - start) * World_object::Node::C_SIZE;

			jgl::draw_rectangle_color(jgl::Color(255, 255, 255, 120), anchor, size, _depth + 10);
		}
	}

	void Editor_gamemode::_on_geometry_change()
	{
		_player_command->set_geometry(0, _area);
		_editor_inventory->set_geometry(0, _area);
	}

	jgl::Bool Editor_gamemode::_update()
	{
		if (jgl::Application::active_application()->mouse().get_button(jgl::Mouse_button::Left) == jgl::Input_status::Pressed ||
			jgl::Application::active_application()->mouse().get_button(jgl::Mouse_button::Right) == jgl::Input_status::Pressed)
		{
			_selected_first_pos = convert_screen_to_world(jgl::Application::active_application()->mouse().pos());
		}
		if (jgl::Application::active_application()->mouse().get_button(jgl::Mouse_button::Left) == jgl::Input_status::Release && _editor_inventory->is_pointed() == false &&
			jgl::Application::active_application()->keyboard().get_key(jgl::Key::Shift) == jgl::Input_status::Down)
		{
			Item* selected_item = _editor_inventory->selected_item();

			if (selected_item != nullptr)
			{
				jgl::Vector2Int tmp_second_pos = convert_screen_to_world(jgl::Application::active_application()->mouse().pos());

				jgl::Vector2Int start = jgl::Vector2Int::compose_min(_selected_first_pos, tmp_second_pos);
				jgl::Vector2Int end = jgl::Vector2Int::compose_max(_selected_first_pos, tmp_second_pos);

				for (jgl::Int x = start.x; x <= end.x; x++)
				{
					for (jgl::Int y = start.y; y <= end.y; y++)
					{
						if (selected_item->type == Item_type::Node)
							static_cast<Node_item*>(selected_item)->use(_engine->active_map(), jgl::Vector3Int(x, y, _editor_inventory->selected_level()));
					}
				}
			}
		}
		if (jgl::Application::active_application()->mouse().get_button(jgl::Mouse_button::Right) == jgl::Input_status::Release && _editor_inventory->is_pointed() == false &&
			jgl::Application::active_application()->keyboard().get_key(jgl::Key::Shift) == jgl::Input_status::Down)
		{
			jgl::Vector2Int tmp_second_pos = convert_screen_to_world(jgl::Application::active_application()->mouse().pos());

			jgl::Vector2Int start = jgl::Vector2Int::compose_min(_selected_first_pos, tmp_second_pos);
			jgl::Vector2Int end = jgl::Vector2Int::compose_max(_selected_first_pos, tmp_second_pos);

			for (jgl::Int x = start.x; x <= end.x; x++)
			{
				for (jgl::Int y = start.y; y <= end.y; y++)
				{
					_engine->active_map()->place_node(jgl::Vector3Int(x, y, _editor_inventory->selected_level()), -1);
				}
			}
		}
		if (jgl::Application::active_application()->mouse().get_button(jgl::Mouse_button::Left) == jgl::Input_status::Down && _editor_inventory->is_pointed() == false &&
			jgl::Application::active_application()->keyboard().get_key(jgl::Key::Shift) == jgl::Input_status::Up)
		{
			Item* selected_item = _editor_inventory->selected_item();

			if (selected_item != nullptr)
			{
				jgl::Vector2Int tmp_second_pos = convert_screen_to_world(jgl::Application::active_application()->mouse().pos());

				if (selected_item->type == Item_type::Node)
					static_cast<Node_item*>(selected_item)->use(_engine->active_map(), jgl::Vector3Int(tmp_second_pos.x, tmp_second_pos.y, _editor_inventory->selected_level()));
				else if (selected_item->type == Item_type::Prefab)
					static_cast<Prefab_item*>(selected_item)->use(_engine->active_map(), jgl::Vector3Int(tmp_second_pos.x, tmp_second_pos.y, _editor_inventory->selected_level()));
			}
		}
		if (jgl::Application::active_application()->mouse().get_button(jgl::Mouse_button::Right) == jgl::Input_status::Down && _editor_inventory->is_pointed() == false &&
			jgl::Application::active_application()->keyboard().get_key(jgl::Key::Shift) == jgl::Input_status::Up)
		{
			jgl::Vector2Int tmp_second_pos = convert_screen_to_world(jgl::Application::active_application()->mouse().pos());

			_engine->active_map()->place_node(jgl::Vector3Int(tmp_second_pos.x, tmp_second_pos.y, _editor_inventory->selected_level()), -1);
		}

		return (false);
	}

	jgl::Bool Editor_gamemode::_fixed_update()
	{
		return (false);
	}
}