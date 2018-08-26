/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jamesgordon
 *
 * Created on 10 July 2018, 22:24
 */

#include <cstdlib>
#include <iostream>
#include "Hash.h"
using namespace std;

/*
 * links and chains
 *  a link binds two info files of any type together, a chain is a collection of links
 *  a chain has a start and a end within the database and the database can be thought as a collection of chains
 *  
 */
int main(int argc, char** argv) {
    Hash.Hash("blah blah blah");
    if(argc > 1){
        cout << "The Database manager does not accept command line arguments" << endl;
    }
    return 0;
}

