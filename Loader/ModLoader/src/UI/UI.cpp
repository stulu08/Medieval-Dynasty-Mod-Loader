#include "Core.h"
#include "MDML/UI.h"

#include "UI/D3D11Hook.h"
#include "UI/ImGuiHost.h"
#include "UI/Themes.h"

// The public UI API (include/MDML/UI.h). The state lives in D3D11Hook / ImGuiHost.
namespace mdml::ui {
	ID3D11Device* GetDevice() { return D3D11Hook::Device(); }
	ID3D11DeviceContext* GetContext() { return D3D11Hook::Context(); }
	ID3D11RenderTargetView* GetRenderTargetView() { return D3D11Hook::RenderTargetView(); }
	bool IsRenderingReady() { return ImGuiHost::IsInitialized(); }
	bool IsMenuOpen() { return ImGuiHost::IsMenuOpen(); }
	void SetTheme(ColorTheme theme) { ApplyTheme(theme); }
}
