/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Connection.h
 * Author: jamesgordon
 *
 * Created on 30 July 2018, 22:32
 */

#pragma once
#include <string>

using namespace std;

class Connection {
public:
    Connection(int pSocket, string pVariableName){
        m_Socket = pSocket;
        m_VariableName = pVariableName;
    };
    Connection(const Connection& orig);
    virtual ~Connection();
private:
    int m_Socket;
    string m_VariableName;
};


