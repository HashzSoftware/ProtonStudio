#include "pch.h"
#include "Editor/Window/editor_window.h"

#if defined(PROTON_WINDOWS)
#include <windows.h>

int main() {
    EditorWindow *window = new EditorWindow("No Project ");
}

#endif
