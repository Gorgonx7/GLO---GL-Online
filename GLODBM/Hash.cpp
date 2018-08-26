/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Hash.cpp
 * Author: jamesgordon
 * 
 * Created on 15 July 2018, 21:44
 */

#include "Hash.h"
#include <iostream>
#include <iomanip>
#include <functional>
#include <string>
#include <unordered_set>

using namespace std;
template <class T>
void Hash::hash(T){
    string example = "Example";
   size_t test = std::hash<string>(example);
   cout << test << endl;
};
