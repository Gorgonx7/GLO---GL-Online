/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Link.h
 * Author: jamesgordon
 *
 * Created on 10 July 2018, 22:31
 */

#include "Chain.h"
#include <vector>
using namespace std;
class Link {
public:
    Link();
    void addLink(Link * pLink);
    void removeLink(int pIndex);
    Chain * getLinks();
    Link(const Link& orig);
    virtual ~Link();
private:
    vector<Link> m_Chain;
};



