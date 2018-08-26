/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Shader.h
 * Author: jamesgordon
 *
 * Created on 01 August 2018, 22:20
 */
#pragma once
#include <string>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <glad/glad.h>
#endif

using namespace std;
class Shader {
public:
    Shader(const char *  pVertexShader, const char * pFragmentShader);
    Shader(const Shader& orig);
    ~Shader();
    GLuint m_ShaderID;
private:
    GLuint LoadShaders(const char * vertex_file_path, const char * fragment_file_path);
};


