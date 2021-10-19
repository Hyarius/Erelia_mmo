#include "erelia_client.h"

extern jgl::String chunk_texture_shader_vert;
extern jgl::String chunk_texture_shader_frag;

int main()
{
	jgl::Application app("Erelia client", jgl::Vector2Int(640, 640), jgl::Color(50, 50, 50));
	app.add_shader("Chunk_shader", chunk_texture_shader_vert, chunk_texture_shader_frag);

	Client_application main_app;
	main_app.set_geometry(0, app.size());
	main_app.activate();

	return (app.run());
}