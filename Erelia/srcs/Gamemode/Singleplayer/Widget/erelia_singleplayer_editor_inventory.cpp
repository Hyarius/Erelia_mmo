#include "erelia.h"

extern jgl::Map< jgl::String, jgl::Array <std::tuple <jgl::Int, jgl::Vector2Int, jgl::Size_t> > > g_page_content;

namespace Singleplayer
{
	void Editor_inventory::_render()
	{
		if (_inventory_page_index < _pages.size() && _pages[_inventory_page_index] != nullptr && _pages[_inventory_page_index]->texture != nullptr)
		{
			jgl::draw_rectangle_color(_inventory_frame->box().front_color(), _slider_contener->anchor() + _inventory_frame->anchor() + 10,
				_inventory_frame->area() - 20, _inventory_frame->depth());

			_pages[_inventory_page_index]->texture->draw(
				_inventory_frame_contener->cumuled_anchor(),
				_inventory_frame_contener->area(), //_element_unit * _nb_element_on_screen,
				_pages[_inventory_page_index]->unit * _page_offset,
				_pages[_inventory_page_index]->unit * _nb_element_on_screen,
				_inventory_frame->depth() + 1,
				1.0f);

			if (_inventory_page_index == _selected_page_index && _selected_item_pos.y >= _page_offset.y)
			{
				jgl::Vector2Int anchor = _slider_contener->anchor() + _inventory_frame->anchor() + 10 + _element_unit * (_selected_item_pos - _page_offset) + jgl::Vector2Int(0, 1) - 5;
				jgl::Vector2Int area = _element_unit + 10;

				{
					World_object::Node::C_TEXTURE_SHEET->draw(
						jgl::Vector2Int(0, 66),
						anchor,
						area,
						_inventory_frame->depth() + 2,
						1.0f);
				}
			}
		}
	}

	void Editor_inventory::_on_geometry_change()
	{
		jgl::Size_t sub_part = _area.y / 15;
		jgl::Vector2Int frame_size = jgl::Vector2Int(_area.x / 4, _area.y - sub_part);
	
		if (_is_opened == true)
		{
			_slider_contener->set_geometry(jgl::Vector2Int(0, 0), _area);
		}
		else
		{
			_slider_contener->set_geometry(jgl::Vector2Int(-frame_size.x, 0), _area);
		}

		_slider_button->set_geometry(jgl::Vector2Int(frame_size.x, sub_part), sub_part);
		_slider_button->unselected_box().set_border_size(sub_part / 10);
		_slider_button->selected_box().set_border_size(sub_part / 10);

		_lower_level_button->set_geometry(jgl::Vector2Int(frame_size.x, 0), sub_part);
		_lower_level_button->unselected_box().set_border_size(sub_part / 10);
		_lower_level_button->selected_box().set_border_size(sub_part / 10);

		_level_selected_label->set_geometry(jgl::Vector2Int(frame_size.x + sub_part, 0), jgl::Vector2Int(sub_part * 3, sub_part));

		_raise_level_button->set_geometry(jgl::Vector2Int(frame_size.x + sub_part * 4, 0), sub_part);
		_raise_level_button->unselected_box().set_border_size(sub_part / 10);
		_raise_level_button->selected_box().set_border_size(sub_part / 10);

		_inventory_frame->set_geometry(jgl::Vector2Int(0, sub_part), frame_size);

		_inventory_frame_contener->set_geometry(10, _inventory_frame->area() - 20);

		_previous_page_button->set_geometry(0, sub_part);
		_previous_page_button->unselected_box().set_border_size(sub_part / 10);
		_previous_page_button->selected_box().set_border_size(sub_part / 10);

		_page_name_label->set_geometry(jgl::Vector2Int(sub_part, 0), jgl::Vector2Int(frame_size.x - sub_part * 2, sub_part));
		_page_name_label->box().set_border_size(sub_part / 10);

		_next_page_button->set_geometry(jgl::Vector2Int(frame_size.x - sub_part, 0), sub_part);
		_next_page_button->unselected_box().set_border_size(sub_part / 10);
		_next_page_button->selected_box().set_border_size(sub_part / 10);
		
		_element_unit = static_cast<jgl::Float>(_inventory_frame->area().x - 20) / Inventory_page::C_NB_ITEM_PER_LINE;
		_nb_element_on_screen = jgl::Vector2(_inventory_frame->area().x - 20.0f, _inventory_frame->area().y - 20.0f) / _element_unit;
		_element_unit = jgl::Vector2(_inventory_frame->area().x - 20.0f, _inventory_frame->area().y - 20.0f) / _nb_element_on_screen;
		_page_offset = 0;
	}

	void Editor_inventory::_update_position()
	{
		if (_is_in_motion == true)
		{
			jgl::Ulong actual_tick = jgl::Application::active_application()->time() - _starting_time;

			jgl::Vector2 position = jgl::lerp<jgl::Vector2>(_start_position, _final_position, actual_tick, _slide_duration);

			_slider_contener->set_geometry(position, _slider_contener->area());

			if (actual_tick >= _slide_duration)
			{
				_is_in_motion = false;
			}
		}
	}

	jgl::Bool Editor_inventory::_update()
	{
		static jgl::Ulong next_input = 0;

		_update_position();

		if (jgl::Application::active_application()->keyboard().get_key(jgl::Key::Tab) == jgl::Input_status::Release)
		{
			_slider_button_action();
			return (true);
		}

		if (jgl::Application::active_application()->mouse().wheel() != 0 &&
			_inventory_frame_contener->is_pointed() == true &&
			next_input < jgl::Application::active_application()->time())
		{
			if (jgl::Application::active_application()->mouse().wheel() > 0 && _page_offset.y > 0)
			{
				if (jgl::Application::active_application()->keyboard().get_key(jgl::Key::Shift) == jgl::Input_status::Down)
				{
					_page_offset.y -= 5.0f;
				}
				else
				{
					_page_offset.y -= 1.0f;
				}
			}
			else if (jgl::Application::active_application()->mouse().wheel() < 0 && _page_offset.y < _pages[_inventory_page_index]->size.y)
			{
				if (jgl::Application::active_application()->keyboard().get_key(jgl::Key::Shift) == jgl::Input_status::Down)
				{
					_page_offset.y += 5.0f;
				}
				else
				{
					_page_offset.y += 1.0f;
				}
			}
			next_input = jgl::Application::active_application()->time() + 5;
		}
		if (jgl::Application::active_application()->mouse().get_button(jgl::Mouse_button::Left) == jgl::Input_status::Release &&
			_inventory_frame_contener->is_pointed() == true)
		{
			jgl::Vector2 mouse_pos = jgl::Application::active_application()->mouse().pos() - _inventory_frame_contener->cumuled_anchor();
			jgl::Vector2 node_pos = mouse_pos / _element_unit;
			jgl::Vector2 final_pos = node_pos + _page_offset;

			_selected_page_index = _inventory_page_index;
			_selected_item_pos = final_pos;
			_selected_item = _pages[_inventory_page_index]->item(_selected_item_pos);
		}
		if (jgl::Application::active_application()->keyboard().get_key(jgl::Key::F7) == jgl::Input_status::Release)
		{
			_engine->active_map()->save();
		}
		if (jgl::Application::active_application()->keyboard().get_key(jgl::Key::Key_1) == jgl::Input_status::Release)
		{
			_engine->set_node_size(4);
		}
		if (jgl::Application::active_application()->keyboard().get_key(jgl::Key::Key_2) == jgl::Input_status::Release)
		{
			_engine->set_node_size(8);
		}
		if (jgl::Application::active_application()->keyboard().get_key(jgl::Key::Key_3) == jgl::Input_status::Release)
		{
			_engine->set_node_size(16);
		}
		if (jgl::Application::active_application()->keyboard().get_key(jgl::Key::Key_4) == jgl::Input_status::Release)
		{
			_engine->set_node_size(32);
		}
		if (jgl::Application::active_application()->keyboard().get_key(jgl::Key::Key_5) == jgl::Input_status::Release)
		{
			_engine->set_node_size(64);
		}
		return (false);
	}

	jgl::Bool Editor_inventory::_fixed_update()
	{
		return (false);
	}

	void Editor_inventory::_slider_button_open()
	{
		_slider_button->label().set_text("<");

		_is_opened = true;
		_is_in_motion = true;
		_starting_time = jgl::Application::active_application()->time();

		_start_position = jgl::Vector2Int(-_inventory_frame->area().x, 0);
		_final_position = 0;
	}

	void Editor_inventory::_slider_button_close()
	{
		_slider_button->label().set_text(">");

		_is_opened = false;
		_is_in_motion = true;
		_starting_time = jgl::Application::active_application()->time();

		_start_position = 0;
		_final_position = jgl::Vector2Int(-_inventory_frame->area().x, 0);
	}

	void Editor_inventory::_slider_button_action()
	{
		if (_is_opened == true)
		{
			_slider_button_close();
		}
		else
		{
			_slider_button_open();
		}
	}

	void Editor_inventory::_compose_predefined_page()
	{
		for (auto tmp : g_page_content)
		{
			Inventory_page* new_page = new Inventory_page(tmp.first);

			for (jgl::Size_t i = 0; i < tmp.second.size(); i++)
			{
				jgl::Size_t type = std::get<0>(tmp.second[i]);
				if (type == 0)
					new_page->add_item(std::get<1>(tmp.second[i]), new Node_item(std::get<2>(tmp.second[i])));
				else if (type == 1 && World_object::g_prefab_array[std::get<2>(tmp.second[i])]->size != 0)
					new_page->add_item(std::get<1>(tmp.second[i]), new Prefab_item(std::get<2>(tmp.second[i])));
			}

			_pages.push_back(new_page);
		}
	}

	void Editor_inventory::_compose_custom_page()
	{

	}
	
	void Editor_inventory::set_inventory_page(jgl::Size_t p_page_index)
	{
		_page_offset = 0;
		_inventory_page_index = p_page_index;
		_page_name_label->label().set_text(_pages[_inventory_page_index]->name);
	}

	void Editor_inventory::set_level_value(jgl::Size_t p_level_value)
	{
		_selected_level = p_level_value;
		_level_selected_label->label().set_text("Level : " + jgl::itoa(_selected_level + 1));
	}

	Editor_inventory::Editor_inventory(Engine* p_engine, jgl::Widget* p_parent) : Graphical_widget(p_engine, p_parent),
		_engine(p_engine), _slide_duration(150), _page_offset(0)
	{
		_slider_contener = new jgl::Contener(this);
		_slider_contener->activate();

		_slider_button = new jgl::Button([&](jgl::Data_contener& p_param) {if (_is_in_motion == false)_slider_button_action(); }, jgl::Data_contener(), _slider_contener);
		_slider_button->activate();

		_inventory_frame = new jgl::Frame(_slider_button->unselected_box().back_color(), _slider_button->unselected_box().front_color(), _slider_contener);
		_inventory_frame->activate();

		_inventory_frame_contener = new jgl::Frame(_slider_button->unselected_box().back_color(), _slider_button->unselected_box().front_color(), _inventory_frame);
		_inventory_frame_contener->box().set_border_size(0);
		//_inventory_frame_contener->activate();

		_page_name_label = new jgl::Text_label("", _slider_contener);
		_page_name_label->label().set_horizontal_align(jgl::Horizontal_alignment::Centred);
		_page_name_label->label().set_vertical_align(jgl::Vertical_alignment::Centred);
		_page_name_label->box().set_back_color(_slider_button->unselected_box().back_color());
		_page_name_label->box().set_front_color(_slider_button->unselected_box().front_color());
		_page_name_label->activate();

		_previous_page_button = new jgl::Button([&](jgl::Data_contener& p_param)
			{
				if (_inventory_page_index == 0)
					set_inventory_page(_pages.size() - 1);
				else
					set_inventory_page(_inventory_page_index - 1);
			}, jgl::Data_contener(), _slider_contener);
		_previous_page_button->label().set_text("<");
		_previous_page_button->activate();

		_next_page_button = new jgl::Button([&](jgl::Data_contener& p_param)
			{
				if (_inventory_page_index == _pages.size() - 1)
					set_inventory_page(0);
				else
					set_inventory_page(_inventory_page_index + 1);
			}, jgl::Data_contener(), _slider_contener);
		_next_page_button->label().set_text(">");
		_next_page_button->activate();


		_level_selected_label = new jgl::Text_label("Level : ", _slider_contener);
		_level_selected_label->label().set_horizontal_align(jgl::Horizontal_alignment::Centred);
		_level_selected_label->label().set_vertical_align(jgl::Vertical_alignment::Centred);
		_level_selected_label->box().set_back_color(_slider_button->unselected_box().back_color());
		_level_selected_label->box().set_front_color(_slider_button->unselected_box().front_color());
		_level_selected_label->activate();

		_lower_level_button = new jgl::Button([&](jgl::Data_contener& p_param)
			{
				if (_selected_level > 0)
					set_level_value(_selected_level - 1);
			}, jgl::Data_contener(), _slider_contener);
		_lower_level_button->label().set_text("-");
		_lower_level_button->activate();

		_raise_level_button = new jgl::Button([&](jgl::Data_contener& p_param)
			{
				if (_selected_level < Chunk::C_NB_LAYER - 1)
					set_level_value(_selected_level + 1);
			}, jgl::Data_contener(), _slider_contener);
		_raise_level_button->label().set_text("+");
		_raise_level_button->activate();

		_is_opened = false;
		_slider_button->label().set_text(">");

		_compose_predefined_page();
		_compose_custom_page();
		
		for (jgl::Size_t i = 0; i < _pages.size(); i++)
		{
			_pages[i]->compute();
		}

		_selected_item_pos = -1;
		set_inventory_page(0);
		set_level_value(0);
	}

	jgl::Bool Editor_inventory::is_pointed()
	{
		jgl::Bool result = false;

		result |= _slider_button->is_pointed();
		result |= _page_name_label->is_pointed();
		result |= _previous_page_button->is_pointed();
		result |= _next_page_button->is_pointed();
		result |= _slider_button->is_pointed();
		result |= _inventory_frame->is_pointed();
		result |= _lower_level_button->is_pointed();
		result |= _level_selected_label->is_pointed();
		result |= _raise_level_button->is_pointed();

		return (result);
	}
}