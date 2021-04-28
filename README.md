# OpenGLProject

This is the first time working with openGL. The goal of this repo is to explore openGL and its features.

## Inital setup:
### Download GLEW:
http://glew.sourceforge.net/

### Download GLFW:
https://www.glfw.org/download.html

## Setup:
I've dropped my librarys next to my project, so I will need to go up one directory from my solution explorer.
I've placed both packages in External Libs.

Properties->C/C++->General->Additional Include Directories:
$(SolutionDir)/../External Libs/glew/include
$(SolutionDir)/../External Libs/glfw/include

Properties->C/C++->Linker->General->Additional Library Directories
$(SolutionDir)/../External Libs/glew/lib/Release/Win32
$(SolutionDir)/../External Libs/glfw/lib-vc2019

Properties->C/C++->Linker->Input->Additional Dependencies
opengl32.lib
glew32.lib
glfw3.lib

Copy Glew/bin/release/win32/glew32.dll to your project location
