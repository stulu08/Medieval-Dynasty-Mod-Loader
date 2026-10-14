#include "Core.h"
#include "Widgets.h"

bool ImGui::MDML_Combo(const std::string& header, int& current_item, const char* items_separated_by_zeros, int height_in_items) {
	ImGui::PushID(header.c_str());
	bool change = false;
	ImGui::BeginColumns(0, 2, ImGuiOldColumnFlags_NoResize | ImGuiOldColumnFlags_NoBorder);
	ImGui::SetColumnWidth(0, 100.0f);
	ImGui::TextUnformatted(header.c_str());
	ImGui::NextColumn();

	ImGui::PushMultiItemsWidths(1, ImGui::CalcItemWidth());
	ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2{ 5, 3 });
	change |= ImGui::Combo("##COMBO", &current_item, items_separated_by_zeros, height_in_items);
	ImGui::PopItemWidth();
	ImGui::PopStyleVar();
	ImGui::EndColumns();

	ImGui::PopID();
	return change;
}
bool ImGui::MDML_Combo(const std::string& header, int32_t& current_item, const std::vector<std::string>& items) {
	ImGui::PushID(header.c_str());
	bool change = false;
	ImGui::BeginColumns(0, 2, ImGuiOldColumnFlags_NoResize | ImGuiOldColumnFlags_NoBorder);
	ImGui::SetColumnWidth(0, 100.0f);
	ImGui::TextUnformatted(header.c_str());
	ImGui::NextColumn();

	ImGui::PushMultiItemsWidths(1, ImGui::CalcItemWidth());
	ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2{ 5, 3 });
	if (ImGui::BeginCombo(header.c_str(), items[current_item].c_str())) {
		for (int i = 0; i < items.size(); i++) {
			bool selected = items[current_item] == items[i];
			if (ImGui::Selectable(items[i].c_str(), selected)) {
				auto itr = std::find(items.begin(), items.end(), items[i]);
				if (itr != items.cend())
					current_item = (uint32_t)std::distance(items.begin(), itr);
				else
					current_item = 0;
				change = true;
			}
			if (selected)
				ImGui::SetItemDefaultFocus();
		}
		ImGui::EndCombo();
	}
	ImGui::PopItemWidth();
	ImGui::PopStyleVar();
	ImGui::EndColumns();

	ImGui::PopID();
	return change;
}
bool ImGui::MDML_Vector4(const std::string& header, glm::vec4& vec, bool readonly) {
	ImGui::PushID(header.c_str());
	bool change = false;
	ImGui::BeginColumns(0, 2, ImGuiOldColumnFlags_NoResize | ImGuiOldColumnFlags_NoBorder);
	ImGui::SetColumnWidth(0, 100.0f);
	ImGui::TextUnformatted(header.c_str());
	ImGui::NextColumn();

	ImGui::PushMultiItemsWidths(4, ImGui::CalcItemWidth());
	ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2{ 5, 3 });
	change |= ImGui::DragFloat("##X", &vec.x, 0.1f, 0.0f, 0.0f, "%.2f", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();
	ImGui::SameLine();

	change |= ImGui::DragFloat("##Y", &vec.y, 0.1f, 0.0f, 0.0f, "%.2f", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();
	ImGui::SameLine();

	change |= ImGui::DragFloat("##Z", &vec.z, 0.1f, 0.0f, 0.0f, "%.2f", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();
	ImGui::SameLine();

	change |= ImGui::DragFloat("##W", &vec.w, 0.1f, 0.0f, 0.0f, "%.2f", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();

	ImGui::PopStyleVar();

	ImGui::EndColumns();

	ImGui::PopID();
	return change;
}
bool ImGui::MDML_Vector4(const std::string& header, glm::quat& quat, bool readonly) {
	ImGui::PushID(header.c_str());
	bool change = false;
	ImGui::BeginColumns(0, 2, ImGuiOldColumnFlags_NoResize | ImGuiOldColumnFlags_NoBorder);
	ImGui::SetColumnWidth(0, 100.0f);
	ImGui::TextUnformatted(header.c_str());
	ImGui::NextColumn();

	ImGui::PushMultiItemsWidths(4, ImGui::CalcItemWidth());
	ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2{ 5, 3 });
	change |= ImGui::DragFloat("##X", &quat.x, 0.1f, 0.0f, 0.0f, "%.2f", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();
	ImGui::SameLine();

	change |= ImGui::DragFloat("##Y", &quat.y, 0.1f, 0.0f, 0.0f, "%.2f", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();
	ImGui::SameLine();

	change |= ImGui::DragFloat("##Z", &quat.z, 0.1f, 0.0f, 0.0f, "%.2f", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();
	ImGui::SameLine();

	change |= ImGui::DragFloat("##W", &quat.w, 0.1f, 0.0f, 0.0f, "%.2f", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();

	ImGui::PopStyleVar();

	ImGui::EndColumns();

	ImGui::PopID();
	return change;
}
bool ImGui::MDML_Vector3(const std::string& header, glm::vec3& vec, bool readonly) {
	ImGui::PushID(header.c_str());
	bool change = false;
	ImGui::BeginColumns(0, 2, ImGuiOldColumnFlags_NoResize | ImGuiOldColumnFlags_NoBorder);
	ImGui::SetColumnWidth(0, 100.0f);
	ImGui::TextUnformatted(header.c_str());
	ImGui::NextColumn();

	ImGui::PushMultiItemsWidths(4, ImGui::CalcItemWidth());
	ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2{ 5, 3 });
	change |= ImGui::DragFloat("##X", &vec.x, 0.1f, 0.0f, 0.0f, "%.2f", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();
	ImGui::SameLine();

	change |= ImGui::DragFloat("##Y", &vec.y, 0.1f, 0.0f, 0.0f, "%.2f", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();
	ImGui::SameLine();

	change |= ImGui::DragFloat("##Z", &vec.z, 0.1f, 0.0f, 0.0f, "%.2f", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();

	ImGui::PopStyleVar();

	ImGui::EndColumns();

	ImGui::PopID();
	return change;
}
bool ImGui::MDML_Vector2(const std::string& header, glm::vec2& vec, bool readonly) {
	ImGui::PushID(header.c_str());
	bool change = false;
	ImGui::BeginColumns(0, 2, ImGuiOldColumnFlags_NoResize | ImGuiOldColumnFlags_NoBorder);
	ImGui::SetColumnWidth(0, 100.0f);
	ImGui::TextUnformatted(header.c_str());
	ImGui::NextColumn();

	ImGui::PushMultiItemsWidths(4, ImGui::CalcItemWidth());
	ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2{ 5, 3 });
	change |= ImGui::DragFloat("##X", &vec.x, 0.1f, 0.0f, 0.0f, "%.2f", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();
	ImGui::SameLine();

	change |= ImGui::DragFloat("##Y", &vec.y, 0.1f, 0.0f, 0.0f, "%.2f", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();

	ImGui::PopStyleVar();

	ImGui::EndColumns();

	ImGui::PopID();
	return change;
}
bool ImGui::MDML_String(const std::string& header, std::string& v, bool readonly) {
	ImGui::PushID(header.c_str());
	bool change = false;
	ImGui::BeginColumns(0, 2, ImGuiOldColumnFlags_NoResize | ImGuiOldColumnFlags_NoBorder);
	ImGui::SetColumnWidth(0, 100.0f);
	ImGui::TextUnformatted(header.c_str());
	ImGui::NextColumn();

	ImGui::PushMultiItemsWidths(1, ImGui::CalcItemWidth());
	ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2{ 5, 3 });
	change |= ImGui::InputText("##String", &v, readonly ? ImGuiInputTextFlags_ReadOnly : 0);
	ImGui::PopItemWidth();
	ImGui::PopStyleVar();
	ImGui::EndColumns();

	ImGui::PopID();
	return change;
}
bool ImGui::MDML_Bool(const std::string& header, bool& v, bool readonly) {
	ImGui::PushID(header.c_str());
	bool change = false;
	ImGui::BeginColumns(0, 2, ImGuiOldColumnFlags_NoResize | ImGuiOldColumnFlags_NoBorder);
	ImGui::SetColumnWidth(0, 100.0f);
	ImGui::TextUnformatted(header.c_str());
	ImGui::NextColumn();

	ImGui::PushMultiItemsWidths(1, ImGui::CalcItemWidth());
	ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2{ 5, 3 });
	change |= ImGui::Checkbox("##CheckBoxBool", &v);
	ImGui::PopItemWidth();
	ImGui::PopStyleVar();
	ImGui::EndColumns();

	if (readonly && change) {
		v = !v;
		change = false;
	}

	ImGui::PopID();
	return change;
}
bool ImGui::MDML_Int(const std::string& header, int& v, bool readonly) {
	ImGui::PushID(header.c_str());
	bool change = false;
	ImGui::BeginColumns(0, 2, ImGuiOldColumnFlags_NoResize | ImGuiOldColumnFlags_NoBorder);
	ImGui::SetColumnWidth(0, 100.0f);
	ImGui::TextUnformatted(header.c_str());
	ImGui::NextColumn();

	ImGui::PushMultiItemsWidths(1, ImGui::CalcItemWidth());
	ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2{ 5, 3 });
	change |= ImGui::DragInt("##INT", &v, 1.0f, 0, 0, "%d", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();
	ImGui::PopStyleVar();
	ImGui::EndColumns();

	ImGui::PopID();
	return change;
}
bool ImGui::MDML_IntSlider(const std::string& header, int& v, int min, int max, bool readonly) {
	ImGui::PushID(header.c_str());
	bool change = false;
	ImGui::BeginColumns(0, 2, ImGuiOldColumnFlags_NoResize | ImGuiOldColumnFlags_NoBorder);
	ImGui::SetColumnWidth(0, 100.0f);
	ImGui::TextUnformatted(header.c_str());
	ImGui::NextColumn();

	ImGui::PushMultiItemsWidths(1, ImGui::CalcItemWidth());
	ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2{ 5, 3 });
	change |= ImGui::SliderInt("##INTSLIDER", &v, min, max, "%d", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();
	ImGui::PopStyleVar();
	ImGui::EndColumns();

	ImGui::PopID();
	return change;
}
bool ImGui::MDML_UInt(const std::string& header, uint32_t& v, bool readonly) {
	ImGui::PushID(header.c_str());
	bool change = false;
	int i = v;
	ImGui::BeginColumns(0, 2, ImGuiOldColumnFlags_NoResize | ImGuiOldColumnFlags_NoBorder);
	ImGui::SetColumnWidth(0, 100.0f);
	ImGui::TextUnformatted(header.c_str());
	ImGui::NextColumn();

	ImGui::PushMultiItemsWidths(1, ImGui::CalcItemWidth());
	ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2{ 5, 3 });
	change |= ImGui::DragInt("##UINT", &i, 1, 0, 0, "%d", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();
	ImGui::PopStyleVar();
	ImGui::EndColumns();
	if (change)
		v = glm::max(i, 0);
	ImGui::PopID();
	return change;
}
bool ImGui::MDML_UIntSlider(const std::string& header, uint32_t& v, uint32_t min, uint32_t max, bool readonly) {
	ImGui::PushID(header.c_str());
	bool change = false;
	ImGui::BeginColumns(0, 2, ImGuiOldColumnFlags_NoResize | ImGuiOldColumnFlags_NoBorder);
	ImGui::SetColumnWidth(0, 100.0f);
	ImGui::TextUnformatted(header.c_str());
	ImGui::NextColumn();
	int i = v;
	ImGui::PushMultiItemsWidths(1, ImGui::CalcItemWidth());
	ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2{ 5, 3 });
	change |= ImGui::SliderInt("##UINTSLIDER", &i, min, max, "%d", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();
	ImGui::PopStyleVar();
	ImGui::EndColumns();
	if (change)
		v = glm::max(i, 0);
	ImGui::PopID();
	return change;
}
bool ImGui::MDML_Float(const std::string& header, float& v, float _min, float max, float speed, bool readonly) {
	ImGui::PushID(header.c_str());
	bool change = false;
	ImGui::BeginColumns(0, 2, ImGuiOldColumnFlags_NoResize | ImGuiOldColumnFlags_NoBorder);
	ImGui::SetColumnWidth(0, 100.0f);
	ImGui::TextUnformatted(header.c_str());
	ImGui::NextColumn();

	ImGui::PushMultiItemsWidths(1, ImGui::CalcItemWidth());
	ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2{ 5, 3 });
	change |= ImGui::DragFloat("##FLOAT", &v, speed, _min, max, "%.3f", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();
	ImGui::PopStyleVar();
	ImGui::EndColumns();

	if (_min != max && change) {
		if (_min > max) {
			v = glm::max(_min, v);
		}
		else {
			v = std::clamp(v, _min, max);
		}
	}

	ImGui::PopID();
	return change;
}
bool ImGui::MDML_FloatSlider(const std::string& header, float& v, float min, float max, bool readonly) {
	ImGui::PushID(header.c_str());
	bool change = false;
	ImGui::BeginColumns(0, 2, ImGuiOldColumnFlags_NoResize | ImGuiOldColumnFlags_NoBorder);
	ImGui::SetColumnWidth(0, 100.0f);
	ImGui::TextUnformatted(header.c_str());
	ImGui::NextColumn();

	ImGui::PushMultiItemsWidths(1, ImGui::CalcItemWidth());
	ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2{ 5, 3 });
	change |= ImGui::SliderFloat("##FLOATSLIDER", &v, min, max, "%.3f", readonly ? ImGuiSliderFlags_ReadOnly : 0);
	ImGui::PopItemWidth();
	ImGui::PopStyleVar();
	ImGui::EndColumns();

	ImGui::PopID();
	return change;
}
void ImGui::MDML_HelpMarker(const std::string& text) {
	ImGui::TextDisabled("(?)");
	if (ImGui::IsItemHovered())
	{
		ImGui::BeginTooltip();
		ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
		ImGui::TextUnformatted(text.c_str());
		ImGui::PopTextWrapPos();
		ImGui::EndTooltip();
	}

}
