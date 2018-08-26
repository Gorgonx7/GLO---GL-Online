/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   sGameObject.h
 * Author: jamesgordon
 *
 * Created on 04 August 2018, 22:57
 */

#pragma once
#include <glm/glm.hpp>
using namespace std;
class sGameObject {
public:
    sGameObject(glm::vec3 pPosition){
        m_Position = pPosition;
    };
    sGameObject(glm::mat4 pModelMatrix);
    sGameObject(const sGameObject& orig);
    virtual ~sGameObject();
protected:
    glm::vec3 m_Position;
    glm::mat4 m_ModelMatrix;
    
private:

};



