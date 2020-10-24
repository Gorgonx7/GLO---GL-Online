#pragma once


#include <string>
#include "OBJ_Loader.h"

class ModelLoader
{
public:
	ModelLoader(std::string fileLoc);
	std::vector<Mesh> GetModel();

private:
	
	objl::Loader loader;

};

