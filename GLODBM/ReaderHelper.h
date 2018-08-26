/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ReaderHelper.h
 * Author: jamesgordon
 *
 * Created on 11 July 2018, 21:28
 */

#ifndef READERHELPER_H
#define READERHELPER_H

class ReaderHelper {
public:
    ReaderHelper();
    ReaderHelper(const ReaderHelper& orig);
    virtual ~ReaderHelper();
    
    static bool isDead();
    static bool isAlive();
    
private:
    static void Hash();
};

#endif /* READERHELPER_H */

