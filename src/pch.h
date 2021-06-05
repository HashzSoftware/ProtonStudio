#pragma once

// Basic includes
#include <iostream>
#include <fstream>
#include <ostream>
#include <string>
#include <vector>

// GLFW
#include <GLFW/glfw3.h>

// GLM

#define GLM_ENABLE_EXPERIMENTAL
#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/quaternion.hpp>
#include <glm/gtc/matrix_transform.hpp>

// Platform Stuff
#if defined(_WIN32) || defined(__GNUC__)
#define PROTON_WINDOWS

#elif defined(__linux__)
#define PROTON_LINUX

#else
#error "Unsupported build platform!"

#endif

#if defined(PROTON_WINDOWS)
#include <windows.h>
#elif deined(PROTON_LINUX)
#include <bits/stdc++.h>
#endif