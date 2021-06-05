#pragma once

#ifndef PROTON_EDITOR_WINDOW_H
#define PROTON_EDITOR_WINDOW_H

#include <GLFW/glfw3.h>
#include <string>

struct EditorWindow {
    GLFWwindow *window;
    int default_window_size[2] = {1280, 720};

    EditorWindow(std::string p_title);
};

#endif