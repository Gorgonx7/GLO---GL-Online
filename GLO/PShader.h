#pragma once
#include <vector>
#include "ShaderComponent.h"
enum ShaderVersion {
	VERSION330 = 330
};
class PShader
{
public:
	PShader(ShaderVersion Version = ShaderVersion::VERSION330) {
		m_Version = Version;
	}
	void write();
	const int GetCurrentLayout();
private:
	std::vector<ShaderComponent> components;
	ShaderVersion m_Version;
	bool compatability = false;
	int CurrentLayout = 0;
};

