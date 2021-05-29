#include <ui/editor/editor_window.h>
#include <assert.h>

EditorWindow::EditorWindow(std::string p_title) {
    
    if (!glfwInit())
        return;
    
    window = glfwCreateWindow(default_window_size[0], default_window_size[1], (p_title + " - Proton Studio").c_str(), NULL, NULL);
    assert(window);
}