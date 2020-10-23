#pragma once
#include <vector>
#include <string>
#include "Vertex.h"
#include "Material.h"

class Mesh
{
public:
	// Default Constructor
	Mesh()
	{

	}
	// Variable Set Constructor
	Mesh(std::vector<Vertex>& _Vertices, std::vector<unsigned int>& _Indices)
	{
		Vertices = _Vertices;
		Indices = _Indices;
	}
	// Mesh Name
	std::string MeshName;
	// Vertex List
	std::vector<Vertex> Vertices;
	// Index List
	std::vector<unsigned int> Indices;

	// Material
	Material MeshMaterial;
};

