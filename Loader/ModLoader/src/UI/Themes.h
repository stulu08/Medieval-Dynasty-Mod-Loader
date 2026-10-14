#pragma once
#include "MDML/UI.h"

// The selectable themes (mdml::ui::ColorTheme, public in MDML/UI.h; mods use mdml::ui::SetTheme).
namespace mdml::ui {
	// Applies one of the themes to the current ImGui context's style.
	void ApplyTheme(ColorTheme theme);

	// The loader's own themes; pass a style to fill it instead of the current context's.
	void StyleColorsPhotoShopDark(ImGuiStyle* dst = nullptr);
	void StyleColorsAmoledDark(ImGuiStyle* dst = nullptr);
	void StyleColorsOceanDark(ImGuiStyle* dst = nullptr);
	void StyleColorsDark(ImGuiStyle* dst = nullptr);
}
