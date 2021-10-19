#pragma once

#include "jgl.h"
#include "erelia_commun.h"

class Map_renderer : public jgl::Widget
{
private:
	const Map* _map;

	void _on_geometry_change();
	void _render();

	bool _update();
	bool _fixed_update();

	jgl::Array<jgl::Vector2Int> _active_chunk;
	jgl::Array<jgl::Vector2Int> _missing_chunk;

public:
	Map_renderer(const Map* p_map, jgl::Widget* p_parent = nullptr);

	const jgl::Array<jgl::Vector2Int>& active_chunk() { return (_active_chunk); }

	void clear_missing_chunk() { _missing_chunk.clear(); }
	const jgl::Array<jgl::Vector2Int>& missing_chunk() { return (_missing_chunk); }
};
