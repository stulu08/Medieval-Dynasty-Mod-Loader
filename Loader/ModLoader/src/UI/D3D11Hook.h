#pragma once
#include "Core.h"

#include <windows.h>
#include <d3d11.h>
#include <dxgi.h>

#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "D3dcompiler.lib")

// Hooks IDXGISwapChain::Present / ResizeBuffers (vtable entries 8 and 13 of a dummy swap chain, hooked with MinHook
// through mdml::platform::Hooks) and owns the real device, immediate context and render target view. The first Present
// creates those objects and the ImGui context (ImGuiHost::Init); every Present renders the loader UI and then raises the
// "DX11Present" event for core mods.
namespace mdml::ui {
	class D3D11Hook {
	public:
		// Starts the install thread (waits for dxgi.dll, creates the dummy swap chain, hooks). Does nothing when the UI is
		// disabled (UseDebugUI / DirectX 11 rendering mode; logs a warning once) or when it was already started.
		static void Install();
		static bool IsInstalled();

		// Valid after the first Present. Null before that.
		static ID3D11Device* Device();
		static ID3D11DeviceContext* Context();
		static ID3D11RenderTargetView* RenderTargetView();
	};
}
