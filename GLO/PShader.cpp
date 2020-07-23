#include "PShader.h"
#include <string>
void PShader::write()
{
	std::string output = "";
	std::string core = ((compatability == true) ? "compatability" : "core");
	output += "#version " + (int)(this->m_Version) + core + "\n";
	for (int x = 0; x < components.size(); x++) {

	}

}

const int PShader::GetCurrentLayout()
{
	int holder =  CurrentLayout;
	CurrentLayout++;
	return holder;
}
