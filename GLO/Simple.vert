#version 330 core
layout (location = 0) in vec3 aPos;
layout (location = 1) in vec3 normals;
layout (location = 2) in vec2 aTexCoord;

out vec2 TexCoord;

uniform mat4 projection;
uniform mat4 view;
uniform mat4 model;

void main()
{
	mat4 VMP = projection * view * model;
	gl_Position = VMP * vec4(aPos.x, aPos.y, aPos.z, 1.0) ;
	TexCoord = aTexCoord;
}