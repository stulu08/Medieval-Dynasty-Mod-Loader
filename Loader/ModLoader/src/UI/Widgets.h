#pragma once
// Reusable ImGui helpers. The ImGui::MDML_* widgets are part of the mod API (exported from MDML.dll, used by
// BaseMod, DevTools and other mods); they stay in namespace ImGui so existing mod code compiles unchanged.
#include <string>
#include <vector>
#include <functional>

#include <imgui/imgui.h>
#include <imgui/imgui_internal.h>
#include <imgui/imgui_stdlib.h>
#include "UE4.h"

#define DEFAULT_TREE_NODE_FLAGS ImGuiTreeNodeFlags_SpanAvailWidth | ImGuiTreeNodeFlags_OpenOnArrow | ImGuiTreeNodeFlags_OpenOnDoubleClick
#define IMGUI_TREE_CONTINUE { ImGui::TreePop(); continue; }

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

namespace ImGui {
	LOADER_API bool MDML_Combo(const std::string& header, int& current_item, const char* items_separated_by_zeros, int height_in_items = -1);
	LOADER_API bool MDML_Combo(const std::string& header, int32_t& current_item, const std::vector<std::string>& items);
	LOADER_API bool MDML_Vector4(const std::string& header, glm::vec4& vec, bool readonly = false);
	LOADER_API bool MDML_Vector4(const std::string& header, glm::quat& quat, bool readonly = false);
	LOADER_API bool MDML_Vector3(const std::string& header, glm::vec3& vec, bool readonly = false);
	LOADER_API bool MDML_Vector2(const std::string& header, glm::vec2& vec, bool readonly = false);
	LOADER_API bool MDML_String(const std::string& header, std::string& v, bool readonly = false);
	LOADER_API bool MDML_Bool(const std::string& header, bool& v, bool readonly = false);
	LOADER_API bool MDML_Int(const std::string& header, int& v, bool readonly = false);
	LOADER_API bool MDML_IntSlider(const std::string& header, int& v, int min = 0, int max = 10, bool readonly = false);
	LOADER_API bool MDML_UInt(const std::string& header, uint32_t& v, bool readonly = false);
	LOADER_API bool MDML_UIntSlider(const std::string& header, uint32_t& v, uint32_t min = 0, uint32_t max = 10, bool readonly = false);
	LOADER_API bool MDML_Float(const std::string& header, float& v, float min = .0f, float max = .0f, float speed = .1f, bool readonly = false);
	LOADER_API bool MDML_FloatSlider(const std::string& header, float& v, float min = 0.0f, float max = 1.0f, bool readonly = false);
	LOADER_API void MDML_HelpMarker(const std::string& text);

	inline bool Button(const std::string& header, std::function<void()> executeIfPressed, const ImVec2& Size = ImVec2(0,0)) {
		if (ImGui::Button(header.c_str(), Size)) {
			executeIfPressed();
			return true;
		}
		return false;
	}
	inline bool MDML_Vector4(const std::string& header, UE4::FQuat& quat, bool readonly = false) {
		glm::quat v = quat;
		bool re = MDML_Vector4(header, v, readonly);
		if (re)
			quat = v;
		return re;
	}
	inline bool MDML_Vector4(const std::string& header, UE4::FVector4& vec, bool readonly = false) {
		glm::vec4 v = vec;
		bool re = MDML_Vector4(header, v, readonly);
		if (re)
			vec = v;
		return re;
	}
	inline bool MDML_Vector2(const std::string& header, UE4::FVector2D& vec, bool readonly = false) {
		glm::vec2 v = vec;
		bool re = MDML_Vector2(header, v, readonly);
		if (re)
			vec = v;
		return re;
	}
	inline bool MDML_Vector3(const std::string& header, UE4::FVector& vec, bool readonly = false) {
		glm::vec3 v = vec;
		bool re = MDML_Vector3(header, v, readonly);
		if (re)
			vec = v;
		return re;
	}
	inline bool MDML_Vector3(const std::string& header, UE4::FRotator& vec, bool readonly = false) {
		glm::vec3 v = vec;
		bool re = MDML_Vector3(header, v, readonly);
		if (re)
			vec = v;
		return re;
	}
}

