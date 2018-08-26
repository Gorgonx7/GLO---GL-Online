/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ConnectionAddress.h
 * Author: jamesgordon
 *
 * Created on 12 August 2018, 22:53
 */
#pragma once

class ConnectionAddress {
public:
    ConnectionAddress();
    ConnectionAddress(const ConnectionAddress& orig);
    ConnectionAddress operator=(const ConnectionAddress const * RHS);
    ConnectionAddress operator=(const char const * RHS);
    virtual ~ConnectionAddress();
private:

};



