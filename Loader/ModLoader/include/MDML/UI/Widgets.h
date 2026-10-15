#pragma once
// Reusable ImGui widgets for mods (exported from MDML.dll). Labelled two-column rows: the label on the left, the
// control on the right; every function returns true when the value changed (Button: when it was pressed).
// Wave 4 (owner decision 2026-10-14): moved from ImGui::MDML_* to mdml::ui::widgets (ImGui::MDML_Combo ->
// mdml::ui::widgets::Combo, ...), so MDML no longer adds names to ImGui's namespace.
#include "MDML/UI.h"
#include "MDML/Math.h"

#include <string>
#include <vector>
#include <functional>

#include "UE4.h"

#define DEFAULT_TREE_NODE_FLAGS ImGuiTreeNodeFlags_SpanAvailWidth | ImGuiTreeNodeFlags_OpenOnArrow | ImGuiTreeNodeFlags_OpenOnDoubleClick
#define IMGUI_TREE_CONTINUE { ImGui::TreePop(); continue; }

namespace mdml::ui::widgets {
	LOADER_API bool Combo(const std::string& header, int& current_item, const char* items_separated_by_zeros, int height_in_items = -1);
	LOADER_API bool Combo(const std::string& header, int32_t& current_item, const std::vector<std::string>& items);
	LOADER_API bool Vector4(const std::string& header, glm::vec4& vec, bool readonly = false);
	LOADER_API bool Vector4(const std::string& header, glm::quat& quat, bool readonly = false);
	LOADER_API bool Vector3(const std::string& header, glm::vec3& vec, bool readonly = false);
	LOADER_API bool Vector2(const std::string& header, glm::vec2& vec, bool readonly = false);
	LOADER_API bool String(const std::string& header, std::string& v, bool readonly = false);
	LOADER_API bool Bool(const std::string& header, bool& v, bool readonly = false);
	LOADER_API bool Int(const std::string& header, int& v, bool readonly = false);
	LOADER_API bool IntSlider(const std::string& header, int& v, int min = 0, int max = 10, bool readonly = false);
	LOADER_API bool UInt(const std::string& header, uint32_t& v, bool readonly = false);
	LOADER_API bool UIntSlider(const std::string& header, uint32_t& v, uint32_t min = 0, uint32_t max = 10, bool readonly = false);
	LOADER_API bool Float(const std::string& header, float& v, float min = .0f, float max = .0f, float speed = .1f, bool readonly = false);
	LOADER_API bool FloatSlider(const std::string& header, float& v, float min = 0.0f, float max = 1.0f, bool readonly = false);
	// "(?)" marker with a tooltip.
	LOADER_API void HelpMarker(const std::string& text);

	inline bool Button(const std::string& header, std::function<void()> executeIfPressed, const ImVec2& Size = ImVec2(0,0)) {
		if (ImGui::Button(header.c_str(), Size)) {
			executeIfPressed();
			return true;
		}
		return false;
	}
	// UE4 math types, edited through their glm equivalents.
	inline bool Vector4(const std::string& header, UE4::FQuat& quat, bool readonly = false) {
		glm::quat v = quat;
		bool re = Vector4(header, v, readonly);
		if (re)
			quat = v;
		return re;
	}
	inline bool Vector4(const std::string& header, UE4::FVector4& vec, bool readonly = false) {
		glm::vec4 v = vec;
		bool re = Vector4(header, v, readonly);
		if (re)
			vec = v;
		return re;
	}
	inline bool Vector2(const std::string& header, UE4::FVector2D& vec, bool readonly = false) {
		glm::vec2 v = vec;
		bool re = Vector2(header, v, readonly);
		if (re)
			vec = v;
		return re;
	}
	inline bool Vector3(const std::string& header, UE4::FVector& vec, bool readonly = false) {
		glm::vec3 v = vec;
		bool re = Vector3(header, v, readonly);
		if (re)
			vec = v;
		return re;
	}
	inline bool Vector3(const std::string& header, UE4::FRotator& vec, bool readonly = false) {
		glm::vec3 v = vec;
		bool re = Vector3(header, v, readonly);
		if (re)
			vec = v;
		return re;
	}
}
