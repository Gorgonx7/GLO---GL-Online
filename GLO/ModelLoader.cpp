#include "ModelLoader.h"
#include <fstream>
#include <vector>
#include <glm/glm.hpp>
#include "OBJ_Loader.h"
ModelLoader::ModelLoader(std::string fileLoc)
{
	using namespace std;
	ModelLoader::loader.LoadFile(fileLoc);

}

std::vector<objl::Mesh> ModelLoader::GetModel()
{
	return loader.LoadedMeshes;
}

