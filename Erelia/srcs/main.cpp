#include "erelia.h"

void generate_world_object_node_array();
void generate_world_object_scenery_array();
void generate_all_editor_page_content();

int main(int argc, char **argv)
{
	jgl::Application app = jgl::Application("Erelia", jgl::Vector2Int(640, 480), jgl::Color(50, 50, 50));
	app.set_default_font("ressource/font/karma suture.ttf");
	app.add_shader_from_file("Chunk_shader", "ressource/shader/chunk_shader.vert", "ressource/shader/chunk_shader.frag");
		
	Main_window win_app = Main_window(nullptr);
	win_app.set_geometry(0, app.size());
	win_app.activate();

	return (app.run());
}