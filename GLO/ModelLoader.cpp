#include "ModelLoader.h"
#include <fstream>
#include <vector>


ModelLoader::ModelLoader(std::string fileLoc)
{
	using namespace std;
	ModelLoader::loader.LoadFile(fileLoc);

}

std::vector<Mesh> ModelLoader::GetModel()
{
	return loader.LoadedMeshes;
}

