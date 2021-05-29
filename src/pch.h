#if defined(_WIN32) || defined(__GNUC__)
#define PROTON_WINDOWS

#elif defined(__linux__)
#define PROTON_LINUX

#else
#error "Unsupported build platform!"

#endif

