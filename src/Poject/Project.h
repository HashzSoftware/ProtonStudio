#pragma once

#include "pch.h"

namespace Proton{
    struct File{ std::string name; std::string path; };
    struct Project{ std::string name; File[] files; };
};