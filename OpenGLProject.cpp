// OpenGLProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include <stdio.h>
//#include <GL/glew.h>
//#include <GLFW/glfw3.h>
//
//const GLint WIDTH = 800, HEIGHT = 600;
//
//
//int main()
//{
//    // Init GLFW
//    if (!glfwInit()) 
//    {
//        printf("GLFW init failed");
//        glfwTerminate();
//        return 1;
//    }
//
//    // Setup glfw window properties
//    // open gl version
//    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
//    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
//    // Call profile = no backwards compatiblity
//    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
//    // Allow forward compatibility
//    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
//
//    GLFWwindow* mainWindow = glfwCreateWindow(WIDTH, HEIGHT, "Test window", NULL, NULL);
//    if (!mainWindow)
//    {
//        printf("window create failed");
//        glfwTerminate();
//        return 1;
//    }
//
//    // Get buffer size information
//    int bufferWidth, bufferHeight;
//    glfwGetFramebufferSize(mainWindow, &bufferWidth, &bufferHeight);
//
//    // Set context for glew to use
//    glfwMakeContextCurrent(mainWindow);
//
//    // allow modern extension features
//    glewExperimental = GL_TRUE;
//    
//    if (glewInit() != GLEW_OK)
//    {
//        printf("glew init failed");
//        glfwDestroyWindow(mainWindow);
//        glfwTerminate();
//        return 1;
//    }
//
//    // Setup viewport size
//    glViewport(0, 0, bufferWidth, bufferHeight);
//
//    // loop until window closed
//    while (glfwWindowShouldClose(mainWindow)) {
//        // Get and handle user input events
//        glfwPollEvents();
//
//        // clear window
//        // rgb is 0-1 not 0-255
//        glClearColor(1.0f, 0.0f, 0.0f, 1.0f);
//        glClear(GL_COLOR_BUFFER_BIT);
//
//        glfwSwapBuffers(mainWindow);
//    }
//    return 0;
//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
