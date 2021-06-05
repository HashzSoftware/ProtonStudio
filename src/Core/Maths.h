#pragma once

#ifndef PROTON_MATHS_H
#define PROTON_MATHS_H

#include "pch.h"

namespace Proton{
    using vint = int;
    using vuint = uint32_t;
    using vfloat = float;
    using vufloat = double;
    using vlong = long;
    using vulong = uint64_t;
    using vshort = short;
    using vushort = uint16_t;
    using vchar = char;
    using vstring = char*;
    using vbool = bool;

    using Matrix4 = glm::mat4;
}

#endif