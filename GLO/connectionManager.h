/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   connectionManager.h
 * Author: jamesgordon
 *
 * Created on 30 July 2018, 22:32
 */

// in charge of sending all data from the client to the server and other clients. also responsible for processing data from the server
#pragma once
#include <vector>
#include "Connection.h"
#include <glm/glm.hpp>
using namespace std;
class connectionManager {
public:
    static glm::vec3 GetServerProperty();
    
private:
    connectionManager();
    connectionManager(const connectionManager& orig);
    virtual ~connectionManager();
    static vector<Connection *> m_ConnectionList;
};


