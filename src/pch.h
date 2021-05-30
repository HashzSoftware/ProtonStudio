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

#include <iostream>