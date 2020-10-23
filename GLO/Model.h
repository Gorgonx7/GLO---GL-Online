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
#include "ModelLoader.h"
#include <vector>
#include <iostream>
#include "Mesh.h"


class Model {
public:
    std::vector<Mesh> Meshes;
    ModelLoader* loader;
    Model(std::string FileLoc);
    Model(const Model& orig);
    virtual ~Model();
private:
    std::string fileLoc;
};


