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
#include <glm/glm.hpp>
#include <vector>
#include <iostream>
#include "OBJ_Loader.h"
#include "ModelLoader.h"
class Model {
public:
    std::vector<objl::Mesh> Meshes;
    ModelLoader* loader;
    Model(std::string FileLoc);
    Model(const Model& orig);
    virtual ~Model();
private:
    std::string fileLoc;
};


