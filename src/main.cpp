#include "config.h"

int main() {
    std::cout << "start" << std::endl;
    
    GLFWwindow* window;
    
    if (!glfwInit()) {
        std::cout << "GLFW couldnt start" << std::endl;
        return -1;
    } else {
        std::cout << "GLFW could start" << std::endl;
    }

    window = glfwCreateWindow(640, 480, "My window", NULL, NULL);
    glfwMakeContextCurrent(window);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        glfwTerminate(); 
        return -1;
    }



    glClearColor(0.25f, 0.5f, 0.75f, 1.0f);

    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(window);
    }

    // glfwTerminate();
    return 0;
}