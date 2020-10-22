#pragma once
#include <string>

class ShaderComponent
{
public:
	virtual ~ShaderComponent();
	virtual void WriteVariables(std::string* output)  = 0;

protected:
	ShaderComponent() {
	
	}
	
	void write();
	
private:
	std::string shaderString;
};

