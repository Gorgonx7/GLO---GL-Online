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

#include "Model.h"
#include <glad/glad.h>
#include <GLFW/glfw3.h>

Model::Model() {
}

Model::Model(const Model& orig) {
}

Model::~Model() {
}

void Model::Draw()
{
	glBindVertexArray(*(Loader->getVAO()));
	glDrawElements(GL_TRIANGLES, Loader->getFaceList()->size(), GL_UNSIGNED_INT, 0);
}

