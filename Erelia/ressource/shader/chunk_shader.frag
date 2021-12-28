#version 330 core

in vec2 UV;
out vec4 output_color;
uniform sampler2D textureID;

void main()
{
	output_color = texture(textureID, UV).rgba;
	if (output_color.a <= 0.01f)
		discard;
}