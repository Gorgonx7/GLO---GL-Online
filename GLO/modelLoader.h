#pragma once
#include<glm/glm.hpp>
#include<vector>
using namespace std;
class modelLoader
{
public:
	modelLoader(const char * pModelName);
	modelLoader(const char * pModelName, const bool pLoadFile);
	~modelLoader();
	const vector<glm::vec3 *>  const * getVertexList() {
		return &vertexList;
	};
	const vector<glm::vec2 *>  const * getTextureList() {
		return &textureList;
	};
	const vector<glm::vec3 *>  const * getNormalList() {
		return &normalList;
	};
	const vector<glm::vec3 *>  const * getFaceList() {
		return &faceList;
	};
	const vector<float> const * getData() {
		return &data;
	}
	const GLuint const * getVAO() {
		return &VAO;
	}
private: 
	vector<glm::vec3 *> vertexList;
	vector<glm::vec2 *> textureList;
	vector<glm::vec3 *> normalList;
	vector<glm::vec3 *> faceList;
	vector<float> data;
	GLuint VAO;
};

