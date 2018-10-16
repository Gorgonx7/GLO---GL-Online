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
#include "modelLoader.h"

class Model {
public:
    Model();
    Model(const Model& orig);
    virtual ~Model();
	inline void setModelLoader(modelLoader * pLoader) {
		Loader = pLoader;
	};// this will become depricated at some point when we define model loaders per model
	
	// this will bind the VAO and then call the draw arrays method to create the object
	void Draw();
private:
	modelLoader * Loader;
};


