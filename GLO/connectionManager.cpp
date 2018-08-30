/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   connectionManager.cpp
 * Author: jamesgordon
 * 
 * Created on 30 July 2018, 22:32
 */
#include "connectionManager.h"
#include <vector>
#include "Connection.h"
#include <glm/glm.hpp>



#include <string>
#include <iostream>
#define PORT 8080
  // if we have an object that should have a stream of data associated with it. 
using namespace std;
vector<Connection *> connectionManager::m_ConnectionList;
glm::vec3 connectionManager::GetServerProperty(){
    //Connection * connection = new Connection(socket(AF_INET, SOCK_STREAM, 0), "Test");
    
    //m_ConnectionList.push_back(connection);
   // delete connection;
    return glm::vec3();
}

connectionManager::connectionManager() {
}

connectionManager::connectionManager(const connectionManager& orig) {
}

connectionManager::~connectionManager() {
}

