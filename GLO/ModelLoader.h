#pragma once
#include <string>
#include "Model.h"
#include "OBJ_Loader.h"
class ModelLoader
{
public:
	ModelLoader(std::string fileLoc);
	std::vector<objl::Mesh> GetModel();

private:
	objl::Loader loader;

};

