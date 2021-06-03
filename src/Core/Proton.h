#pragma once

#ifndef PROTON_H
#define PROTON_H

#include "pch.h"
#include "../ui/editor/editor_window.h"

namespace Proton{
    using kuint = uint32_t;
    using kuchar = unsigned char;
}

namespace Proton{
    extern kuint Init(EditorWindow* window);
    extern kuint Exit();
    extern void Pause();
    extern void Testbreak();
}

#endif