#pragma once
#include <imgui/imgui.h>

// Selectable ImGui colour themes. Kept at global scope: mods use it through LoaderUI::setColorTheme.
enum class ImGuiColorTheme {
	PhotoshopDark, Dark, AmoledDark, OceanDark, ImGuiClassic, ImGuiDark, ImGuiLight
};

namespace mdml::ui {
	// Applies one of the themes to the current ImGui context's style.
	void ApplyTheme(ImGuiColorTheme theme);

	// The loader's own themes; pass a style to fill it instead of the current context's.
	void StyleColorsPhotoShopDark(ImGuiStyle* dst = nullptr);
	void StyleColorsAmoledDark(ImGuiStyle* dst = nullptr);
	void StyleColorsOceanDark(ImGuiStyle* dst = nullptr);
	void StyleColorsDark(ImGuiStyle* dst = nullptr);
}
