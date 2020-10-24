#pragma once
#include <string>
#include <glm/glm.hpp>
namespace GLO::Graphics {
	class Material
	{
	public:
		Material()
		{
			name;
			Ns = 0.0f;
			Ni = 0.0f;
			d = 0.0f;
			illum = 0;
		}

		// Material Name
		std::string name;

		// Ambient Color
		glm::vec3 Ka = glm::vec3();

		// Diffuse Color
		glm::vec3 Kd = glm::vec3();

		// Specular Color
		glm::vec3 Ks = glm::vec3();

		// Specular Exponent
		float Ns;

		// Optical Density
		float Ni;

		// Dissolve
		float d;

		// Illumination
		int illum;

		// Ambient Texture Map
		std::string map_Ka;

		// Diffuse Texture Map
		std::string map_Kd;

		// Specular Texture Map
		std::string map_Ks;

		// Specular Hightlight Map
		std::string map_Ns;

		// Alpha Texture Map
		std::string map_d;

		// Bump Map
		std::string map_bump;
	};
}




