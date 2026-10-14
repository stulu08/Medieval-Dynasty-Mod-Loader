#pragma once
#include <string>

// Small text helpers of the loader window (were in UI/Widgets.h before the public API split, Wave 4).
namespace mdml::ui {
	// Narrow a wide string by truncating each wchar_t (mod names are ASCII). Same behaviour the F1 window always had.
	inline std::string NarrowTruncating(const std::wstring& text) {
		std::string result(text.length(), 0);
		for (size_t i = 0; i < text.length(); i++)
			result[i] = (char)text[i];
		return result;
	}

	// "label##tag<index>": ImGui widget id that is unique per list entry.
	inline std::string IdLabel(const std::string& label, const char* tag, size_t index) {
		return label + "##" + tag + std::to_string(index);
	}
}
