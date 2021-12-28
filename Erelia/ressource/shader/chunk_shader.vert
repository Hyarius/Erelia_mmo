#version 330 core

layout (location = 0) in vec3 model_space;
layout (location = 1) in vec2 model_UV;
uniform vec3 delta_pos;
out vec2 UV;

void main()
{
	gl_Position = vec4(model_space + delta_pos, 1.0f);
	UV = model_UV;
}