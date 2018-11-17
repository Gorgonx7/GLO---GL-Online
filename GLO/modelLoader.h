#pragma once
#include<glm/glm.hpp>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include<vector>
using namespace std;
class modelLoader
{
public:
	modelLoader(const char * pModelName);
	modelLoader(const char * pModelName, const bool pLoadFile);
	modelLoader();
	~modelLoader();

	void ExampleLoad(const char * path, std::vector<glm::vec3> & out_vertices, std::vector<glm::vec2> & out_uvs, std::vector<glm::vec3> & out_normals);

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
	};

	const GLuint const * getVAO() {
		return &VAO;
	};
private: 
	vector<glm::vec3 *> vertexList;
	vector<glm::vec2 *> textureList;
	vector<glm::vec3 *> normalList;
	vector<glm::vec3 *> faceList;
	vector<float> data;
	GLuint VAO;
};

