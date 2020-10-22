#pragma once
#include "ShaderComponent.h"
#include <glm/glm.hpp>
class Light : public ShaderComponent
{
	Light() : ShaderComponent() {

	};
public:
	void WriteVariables(std::string* output) override;
private:
	float ambientStrength = 0.0f;
	glm::vec3 ambientColour;
	float diffuseStrength = 0.0f;
	glm::vec3 diffuseColour;
	float specularStrength = 0.0f;
	glm::vec3 specularColour;

	glm::vec3 position;

};

