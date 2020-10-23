/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Model.cpp
 * Author: jamesgordon
 * 
 * Created on 04 August 2018, 22:57
 */
#include "ModelLoader.h"
#include "Model.h"

Model::Model(std::string fileLoc) {
    Model::fileLoc = fileLoc;
    loader = new ModelLoader(Model::fileLoc);
    Meshes = loader->GetModel();
}

Model::Model(const Model& orig) {
    Model::fileLoc = orig.fileLoc;
    loader = new ModelLoader(Model::fileLoc);
    Meshes = loader->GetModel();
}

Model::~Model() {
}

