/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GameObject.cpp
 * Author: jamesgordon
 * 
 * Created on 04 August 2018, 23:01
 */

#include "GameObject.h"
#include "sGameObject.h"
GameObject::GameObject(glm::vec3 pPosition) : sGameObject(pPosition){

}

GameObject::GameObject(const GameObject& orig) : sGameObject(orig.m_Position)
{
}

GameObject::~GameObject() {
}

