/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GameObject.h
 * Author: jamesgordon
 *
 * Created on 04 August 2018, 23:01
 */
#pragma once
#include "sGameObject.h"
#include <glm/glm.hpp>
#include "Propertie.h"
#include <vector>

using namespace std;
class GameObject : public sGameObject {
public:
    GameObject(glm::vec3 pPosition);
    GameObject(const GameObject& orig);
    virtual ~GameObject();
private:
   
    vector<IPropertie *> m_Properties;
    
};


