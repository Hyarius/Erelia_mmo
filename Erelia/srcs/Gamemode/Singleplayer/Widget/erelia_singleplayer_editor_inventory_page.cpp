#include "erelia.h"

namespace Singleplayer
{
	Editor_inventory::Inventory_page::Inventory_page(jgl::String p_name) :
		name(p_name), size(0), map(), unit(0), output(nullptr), texture(nullptr)
	{

	}
	void Editor_inventory::Inventory_page::clear()
	{
		map.clear();
		size = 0;
	}
	void Editor_inventory::Inventory_page::add_item(jgl::Vector2Uint p_pos, Item* p_item)
	{
		map[p_pos] = p_item;

		if (p_pos.x >= size.x)
			size.x = p_pos.x + 1;
		if (p_pos.y >= size.y)
			size.y = p_pos.y + 1;
	}
	void Editor_inventory::Inventory_page::calc_unit()
	{
		if (size != 0)
			unit = jgl::Vector2(1, 1) / size;
		else
			unit = 1;
	}
	void Editor_inventory::Inventory_page::compute()
	{
		static jgl::Vector2Int tmp_delta_node[4] =
		{
			jgl::Vector2Int(0, 0),
			jgl::Vector2Int(0, 1),
			jgl::Vector2Int(1, 0),
			jgl::Vector2Int(1, 1)
		};
		jgl::Vector2Uint image_size = 0;

		image_size = size * C_ITEM_SIZE;

		if (image_size.x != 0 && image_size.y != 0)
		{
			if (output != nullptr)
				delete output;
			output = new jgl::Image_output(image_size);

			output->associate();

			for (auto tmp : map)
			{
				jgl::Vector2Uint pos = tmp.first;
				Item* item = tmp.second;

				if (item->type == Item_type::Node)
				{
					Node_item* tmp_item = static_cast<Node_item*>(item);
					if (World_object::g_node_array[tmp_item->value]->autotiled == true)
					{
						for (jgl::Size_t i = 0; i < 4; i++)
							World_object::Node::C_TEXTURE_SHEET->draw(
								World_object::g_node_array[tmp_item->value]->sprite + tmp_delta_node[i],
								pos * C_ITEM_SIZE + tmp_delta_node[i] * (C_ITEM_SIZE / 2),
								C_ITEM_SIZE / 2,
								100,
								1.0f
							);
					}
					else
					{
						World_object::Node::C_TEXTURE_SHEET->draw(World_object::g_node_array[tmp_item->value]->sprite, pos * C_ITEM_SIZE, C_ITEM_SIZE, 100, 1.0f);
					}
				}
				else if (item->type == Item_type::Prefab)
				{
					Prefab_item* tmp_item = static_cast<Prefab_item*>(item);

					World_object::Prefab::C_TEXTURE_SHEET->draw(World_object::g_prefab_array[tmp_item->value]->sprite, pos * C_ITEM_SIZE, C_ITEM_SIZE, 100, 1.0f);
				}
			}

			if (texture != nullptr)
				delete texture;

			texture = output->save();

			output->desassociate();
		}
		calc_unit();
	}
}