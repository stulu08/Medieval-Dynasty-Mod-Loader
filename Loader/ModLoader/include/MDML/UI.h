#pragma once
// Loader UI for mods (Wave 4, replaces the old LoaderUI class): the game's D3D11 objects, the F1 menu state and the
// colour themes. ImGui itself is compiled into MDML.dll and exported, so mods draw into the loader's ImGui context
// (Mod::DrawImGui, only called while the F1 menu is open). Widgets: MDML/UI/Widgets.h.
#include "MDML/Core.h"

#include <d3d11.h>
#include <imgui/imgui.h>
#include <imgui/imgui_internal.h>
#include <imgui/imgui_stdlib.h>

namespace mdml::ui {
	enum class ColorTheme {
		PhotoshopDark, Dark, AmoledDark, OceanDark, ImGuiClassic, ImGuiDark, ImGuiLight
	};

	// The game's device, immediate context and back buffer render target view. Null until the first Present (see
	// IsRenderingReady); the render target view is recreated on every ResizeBuffers, so do not keep it.
	LOADER_API ID3D11Device* GetDevice();
	LOADER_API ID3D11DeviceContext* GetContext();
	LOADER_API ID3D11RenderTargetView* GetRenderTargetView();
	// True once the first Present created the device objects and the ImGui context.
	LOADER_API bool IsRenderingReady();

	// True while the F1 menu is open (Mod::DrawImGui runs only then).
	LOADER_API bool IsMenuOpen();

	// Applies a colour theme to the loader's ImGui context. Render thread (e.g. in Mod::SetupImGui or Mod::DrawImGui).
	LOADER_API void SetTheme(ColorTheme theme);
}
