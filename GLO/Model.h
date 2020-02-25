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

class Model {
public:
    std::vector<glm::vec3> indicies;
    std::vector<glm::vec3> vertex;
    std::vector<glm::vec2> textureCoords;
    std::vector<glm::vec3> Normals;
    Model();
    Model(const Model& orig);
    virtual ~Model();
private:

};


