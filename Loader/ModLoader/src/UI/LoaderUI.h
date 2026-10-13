#pragma once
// Forwarding header (Wave 3B). The UI was split into UI/D3D11Hook, UI/ImGuiHost, UI/LoaderWindow, UI/Widgets and
// UI/Themes (namespace mdml::ui); Mod.h and every mod still include this file, so it keeps the old surface:
// the LoaderUI class, ImGuiColorTheme, the ImGui::MDML_* widgets and the ImGui / d3d11 headers they used to pull in.
#include <d3d11.h>
#include <D3D11Shader.h>
#include <D3Dcompiler.h>
#include <imgui/imgui.h>
#include <imgui/imgui_internal.h>
#include <imgui/imgui_impl_dx11.h>
#include <imgui/imgui_impl_win32.h>
#include <imgui/imgui_stdlib.h>
#include "UE4.h"

#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "D3dcompiler.lib")

#include "UI/Themes.h"
#include "UI/Widgets.h"

extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

// Legacy facade, kept source-compatible. The state lives in mdml::ui::D3D11Hook / ImGuiHost; the public fields are
// mirrors of the D3D objects (updated by D3D11Hook on first Present and on ResizeBuffers) for mods that read them.
class LOADER_API LoaderUI
{
public:
	ID3D11Device* pDevice = NULL;
	ID3D11DeviceContext* pContext = NULL;
	ID3D11RenderTargetView* pRenderTargetView = NULL;

	// True until the first Present has initialized rendering.
	bool initRendering = true;
	// True once the DX hook install was started.
	bool IsDXHooked = 0;

	// Starts the F1 hotkey thread.
	void CreateUILogicThread();

	static LoaderUI* GetUI();

	// Installs the DX11 hook (no-op when the UI is disabled in the config, shows a message then).
	static void HookDX();

	static void setColorTheme(ImGuiColorTheme theme);
private:
	static LoaderUI* UI;
};
