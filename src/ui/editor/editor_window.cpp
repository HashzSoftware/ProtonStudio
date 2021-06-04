#include "editor_window.h"
//#include "pch.h"

EditorWindow::EditorWindow(std::string p_title) {
    
    if (!glfwInit())
        return;
    
    window = glfwCreateWindow(default_window_size[0], default_window_size[1], (p_title + " - Proton Studio").c_str(), NULL, NULL);
    if (!window) glfwTerminate();

    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return;
}