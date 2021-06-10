#include "Proton.h"

namespace Proton{
    kuint Intit(EditorWindow *window) {
        return PROTON_TRUE;
    }
    
    kuint Exit() {
        std::exit(-1);
        return PROTON_TRUE;
    }
    
    void Pause() {
        std::cin.get();
    }
}