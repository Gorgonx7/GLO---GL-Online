/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jamesgordon
 *
 * Created on 06 July 2018, 21:41
 */

#include <cstdlib>
#include <iostream>
#include <string.h>
/*\
|*| Requirements
|*|  -> Quest
|*|      > ADD
|*|      > REMOVE
|*|  -> Character
|*|      > ADD
|*|      > REMOVE
|*|      > UPDATE -> QUEST STATUS -> COMPLETE QUEST -> ACCEPT QUEST
|*|      > UPDATE -> LEVEL -> SKILL
|*|  -> GUILD
|*|  -> MONSTER
|*|  -> REP
|*|  
\*/
using namespace std;
const char * QUT = "QUT";
/*
 * 
 */
int main(int argc, char** argv) {
    //takes in a string and processes it
    if(argc >= 2){
        for(int x = 0; x < argc; x++){
            cout << argv[x] << " " << x << endl;
        }
        if(*argv[1] == *QUT){
            
        } 
        else
        {
            cout << "Feature Not Implemented/Unrecognised Leading Word" << endl;
        }
    } else{
        cout << "Please Provide Command Line Arguments" << endl;
    }
    return 0;
}

void Quest(int argc, char** argv){
    
}
