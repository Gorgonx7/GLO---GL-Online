#version 330 core
out vec4 FragColor;
uniform vec4 pColour;
in vec2 TexCoord;

struct Material{
	sampler2D texture_diffuse1;
	sampler2D texture_specular;
};

uniform Material material;

void main()
{
   // FragColor = mix(texture(material.texture_diffuse1, TexCoord), texture(material.texture_specular, TexCoord), 0.2);
   FragColor = texture(material.texture_diffuse1, TexCoord);
}