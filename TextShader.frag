#version 330 core

in vec2 TextCoordinates;
out vec4 Color;

uniform sampler2D text;
uniform vec3 textColor;

void main()
{
	vec4 sampled = vec4(1.0, 1.0, 1.0, texture(text, TextCoordinates).r);
	Color = vec4(textColor, 1.0) * sampled;

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);  
}