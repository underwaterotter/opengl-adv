#ifndef SHADER_H
#define SHADER_H

#include <glew.h>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
#include <algorithm>

class shaderInit
{
public:
	GLuint theProgram;
	std::vector<GLuint> shaderList;
	//Shader program constructor
	shaderInit();
	void Use();
private:
	std::string GetShaderSrc(const GLchar* filePath);
	GLuint CreateShader(GLenum, const GLchar*);
	GLuint CreateProgram(const std::vector<GLuint> &);

};
#endif