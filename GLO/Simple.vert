#version 330 core
layout (location = 0) in vec3 aPos;
uniform mat4 uPosition;
void main()
{
   vec4 holder  = vec4(aPos.x, aPos.y, aPos.z, 1.0);
   holder = holder * uPosition;
   gl_Position = holder;
}