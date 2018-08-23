/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Propertie.h
 * Author: jamesgordon
 *
 * Created on 05 August 2018, 20:03
 */
#pragma once
#include <string>
#include <glm/glm.hpp>
using namespace std;

class IPropertie{

};
template <class T>
class Propertie : public IPropertie {
public:
    Propertie(T pPropertie, string pName);
    Propertie(const Propertie& orig);
    virtual ~Propertie();
    inline const T * GetData() const
    {
        return data;
    };
    
private:
    string m_Name;
    T data;
    
};



