/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Propertie.cpp
 * Author: jamesgordon
 * 
 * Created on 05 August 2018, 20:03
 */

#include "Propertie.h"
#include <glm/glm.hpp>
#include <string>

// takes a piece of data and a string name
using namespace std;
template <class T>
Propertie<T>::Propertie(T pVector, string pName) : IPropertie() {
}
template <class T>
Propertie<T>::Propertie(const Propertie& orig) : IPropertie() {
}
template <class T>
Propertie<T>::~Propertie() 
{
    
}

