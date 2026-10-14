#pragma once
// ImGui's imconfig.h (MDML block) includes "Core.h" and sets IMGUI_API = LOADER_API.
// In the standalone ModManager ImGui is a plain static library: no import/export.
#define LOADER_API
