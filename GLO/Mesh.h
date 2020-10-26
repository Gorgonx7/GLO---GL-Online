#pragma once
#include <glm/glm.hpp>
#include <string>
#include <vector>
#include "Shader.h"
#include "Vertex.h"
#include "Material.h"

struct Texture {
    unsigned int id;
    std::string type;
    std::string path;
};
class Mesh
{
public:
    // Default Constructor
    Mesh()
    {

    }
    // mesh data
    std::vector<Vertex>       Vertices;
    std::vector<unsigned int> Indices;
    std::vector<Texture>      textures;
    // Mesh Name
    std::string MeshName;
    Mesh(std::vector<Vertex> vertices, std::vector<unsigned int> indices, std::vector<Texture> textures);
    // Variable Set Constructor
    Mesh(std::vector<Vertex>& _Vertices, std::vector<unsigned int>& _Indices)
    {
        Vertices = _Vertices;
        Indices = _Indices;
    }
    void Draw(Shader * shader);
    // Material
    GLO::Graphics::Material MeshMaterial;
private:
    //  render data
    unsigned int VAO, VBO, EBO;

    void setupMesh();
    void GenBuffers();
    void BindVertexData();
};






