/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Link.cpp
 * Author: jamesgordon
 * 
 * Created on 10 July 2018, 22:31
 */

#include "Link.h"

Link::Link() {
    
}

Link::Link(const Link& orig) {
}

Link::~Link() {
}

Link::addLink(Link * pLink){
    m_Chain.push_back(pLink);
}
Link::removeLink(int pIndex){
    
}
Link::getLinks(){
    return &m_Chain[0];
}
