#pragma once
#include "Core.h"

#include <windows.h>
#include <d3d11.h>

// The ImGui context of the loader: creation (theme, ini path, docking), Win32 + DX11 backends, the game window's
// WndProc subclass (input capture while ImGui wants mouse/keyboard), the per-frame draw and the F1 hotkey thread.
// Driven by D3D11Hook (first Present -> Init, every Present -> RenderFrame); all of it runs on the render thread
// except the hotkey thread.
namespace mdml::ui {
	class ImGuiHost {
	public:
		// Render thread, first Present only. Creates the context and both backends, subclasses the game window and
		// raises the "SetupImGui" event for core mods.
		static void Init(ID3D11Device* device, ID3D11DeviceContext* context);

		// Render thread, every Present. Starts a frame, draws the F1 window and the mods' "DrawImGui" event while the
		// menu is open, renders. The caller binds the render target before.
		static void RenderFrame();

		// Starts the thread polling F1 (opens/closes the menu, installs the DX hook on first open when it is still
		// delayed). Safe to call once; further calls are ignored.
		static void StartHotkeyThread();

		static bool IsInitialized();
	};
}
