/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   WriterHelper.h
 * Author: jamesgordon
 *
 * Created on 12 July 2018, 21:30
 */

#ifndef WRITERHELPER_H
#define WRITERHELPER_H

class WriterHelper {
public:
    WriterHelper();
    WriterHelper(const WriterHelper& orig);
    virtual ~WriterHelper();
    static void createPlayerFile(); // can be slow happens rarely
    static void editPlayerPosition(); // has to be really quick going to happen a lot
    static void editPlayerZone();
    
private:

};

#endif /* WRITERHELPER_H */

