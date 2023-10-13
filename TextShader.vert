#version 330 core

layout (location = 0) in vec4 vertex;
out vec2 TextCoordinates;

uniform mat4 projection;

void main()
{
	gl_position = projection * vec4(vec4.xy, 0.0, 1.0);
	TextCoordinates = vertex.zw;
}