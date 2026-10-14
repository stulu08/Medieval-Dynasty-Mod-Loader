#pragma once
// ImGui's imconfig.h (MDML block) includes "Core.h" and sets IMGUI_API = LOADER_API.
// ImGuiLoader is linked into MDML.dll with /WHOLEARCHIVE: ImGui and the dx11/win32 backends are exported from the DLL
// and mods import them (their LOADER_API is dllimport, see Loader/ModLoader/include/MDML/Core.h).
#define LOADER_API __declspec(dllexport)
