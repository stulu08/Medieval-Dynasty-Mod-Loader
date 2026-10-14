// Compile wrapper for the unmodified upstream imgui_impl_glfw.cpp.
// Dependencies/GLFW is the owner's GLFW fork: its header says 3.4.0 but it is a pre-release snapshot without the 3.4
// platform API (glfwGetPlatform). The backend only uses it to disable viewports on Wayland, which is irrelevant on Windows.
#include <GLFW/glfw3.h>
#ifndef GLFW_PLATFORM_WAYLAND
#define GLFW_PLATFORM_WAYLAND 0x00060004
#endif
#define glfwGetPlatform() 0
#include "imgui_impl_glfw.cpp"
