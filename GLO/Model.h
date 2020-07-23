/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Model.h
 * Author: jamesgordon
 *
 * Created on 04 August 2018, 22:57
 */

#pragma once
#include <vector>
#include <string>
#include "Shader.h"
#include "Mesh.h"
#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>


class Model {
public:
    Model(const char* path)
    {
        loadModel(path);
    }
    Model(const Model& original) {

    }
    void Draw(Shader * shader);
    void SetTransform(glm::mat4 value);
private:
    // model data
    std::vector<Mesh> meshes;
    std::string directory;
    glm::mat4 * transform = new glm::mat4();
    void loadModel(std::string path);
    void processNode(aiNode* node, const aiScene* scene);
    Mesh processMesh(aiMesh* mesh, const aiScene* scene);
    vector<Texture> loadMaterialTextures(aiMaterial* mat, aiTextureType type, string typeName);
    vector<Texture> textures_loaded;
};


