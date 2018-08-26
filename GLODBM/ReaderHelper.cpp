/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ReaderHelper.cpp
 * Author: jamesgordon
 * 
 * Created on 11 July 2018, 21:28
 */


/*
 * The purpose of this class is to help the database manager open files contained within the database
 * This class is also paired with the WriterHelper, which is used to write files to the database and perform common edits
 */
#include "ReaderHelper.h"

ReaderHelper::ReaderHelper() {
}

ReaderHelper::ReaderHelper(const ReaderHelper& orig) {
}

ReaderHelper::~ReaderHelper() {
}

bool ReaderHelper::isDead(){
    return false;
}

bool ReaderHelper::isAlive(){
    return true;
}
