#pragma once

#include "Dependencies/glew/glew.h"
#include "Dependencies/freeglut/freeglut.h"
#include <iostream>

namespace Core {
	class ShaderLoader {
	private:
		std::string ReadShader(char *filename);
		GLuint CreateShader(GLenum shaderType, std::string source, char* shaderName);

	public:
		ShaderLoader(void);
		~ShaderLoader(void);
		GLuint CreateProgram(char* vertexShaderFileName, char* fragmentShaderFilename);
	};
}


