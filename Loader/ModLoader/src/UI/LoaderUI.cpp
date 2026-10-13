#include "Core.h"
#include "LoaderUI.h"

#include "UI/D3D11Hook.h"
#include "UI/ImGuiHost.h"
#include "UI/Themes.h"

// Facade only, see LoaderUI.h. The implementation is in D3D11Hook, ImGuiHost, LoaderWindow, Widgets and Themes.

LoaderUI* LoaderUI::UI;

LoaderUI* LoaderUI::GetUI()
{
	if (!UI)
	{
		UI = new LoaderUI();
	}
	return UI;
}

void LoaderUI::CreateUILogicThread()
{
	mdml::ui::ImGuiHost::StartHotkeyThread();
}

void LoaderUI::HookDX()
{
	mdml::ui::D3D11Hook::Install();
}

void LoaderUI::setColorTheme(ImGuiColorTheme theme)
{
	mdml::ui::ApplyTheme(theme);
}
