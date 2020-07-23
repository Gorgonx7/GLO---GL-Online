#pragma once
#include <string>
#include "PShader.h"
class ShaderComponent
{
public:
	virtual ~ShaderComponent();
	virtual void WriteVariables(std::string* output, const PShader * shader)  = 0;

protected:
	ShaderComponent() {
	
	}
	
	void write();
	
private:
	std::string shaderString;
};

