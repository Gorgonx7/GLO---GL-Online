#include "ModelLoader.h"
#include <fstream>
#include <vector>
ModelLoader::ModelLoader(std::string fileLoc)
{

	ModelLoader::loader.LoadFile(fileLoc);

}

std::vector<objl::Mesh> ModelLoader::GetModel()
{
	return loader.LoadedMeshes;
}



