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

    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
    }

    // glfwTerminate();
    return 0;
}