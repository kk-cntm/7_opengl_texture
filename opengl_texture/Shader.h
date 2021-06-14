#pragma once

#include <glad/glad.h>

class Shader {
public:
    unsigned int ID;
    
    Shader(const char* vPath, const char* fPath);
    void use();
    void setValue(const char* name, float value);
    void setValue(const char* name, int value);
    
private:
    unsigned int compileShader(const char* src, const GLint type);
    unsigned int compileProgram(unsigned int vShader, unsigned int fShader);
};
