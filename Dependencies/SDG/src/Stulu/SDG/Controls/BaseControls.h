#pragma once
#include <imgui.h>
#include <imgui_stdlib.h>
#include <imgui_internal.h>

#include <functional>

#include "Stulu/SDG/Style.h"
#include "Stulu/SDG/Icons.h"
#include "Stulu/SDG/Application.h"

namespace SDG {
	namespace Controls {
		extern std::string ControlHelpMark;

		inline void SetControlHelpMark(const std::string& text) {
			ControlHelpMark = text;
		}
		inline const std::string& GetControlHelpMark() {
			return ControlHelpMark;
		}
		inline void PopControlHelpMark() {
			ControlHelpMark.clear();
		}

		inline void Text(const char* fmt, va_list args) {
			ImGui::TextWrappedV(fmt, args);
			if (!GetControlHelpMark().empty()) {
				ImGui::SameLine();
				ImGui::HelpMarker(GetControlHelpMark().c_str());
			}
		}
		inline void Text(const char* fmt, ...) {
			va_list args;
			va_start(args, fmt);
			Text(fmt, args);
			va_end(args);
		}
		inline void Text(const std::string& text) {
			Text(text.c_str());
		}
		inline void TextDisabled(const char* fmt, ...) {
			ImGui::PushStyleColor(ImGuiCol_Text, ImGui::GetStyle().Colors[ImGuiCol_TextDisabled]);

			va_list args;
			va_start(args, fmt);
			Text(fmt, args);
			va_end(args);

			ImGui::PopStyleColor();
		}
		inline void TextDisabled(const std::string& text) {
			TextDisabled(text.c_str());
		}

		inline bool LabeledBaseControl(const std::string& label, std::function<bool()> drawControl, float columnWidth = 0.0f) {
			ImGui::PushID(label.c_str());

			if (columnWidth == 0) {
				columnWidth = ImGui::GetContentRegionAvail().x / 2.0f;
			}


			ImGui::PushTextWrapPos(columnWidth);
			ImGui::TextWrapped("%s", label.c_str());
			ImGui::PopTextWrapPos();

			if (!GetControlHelpMark().empty()) {
				ImGui::SameLine();
				ImGui::HelpMarker(GetControlHelpMark().c_str());
			}

			ImGui::SameLine(columnWidth + ImGui::GetCurrentWindow()->DC.Indent.x);

			bool changed = drawControl();

			ImGui::PopID();

			return changed;
		}

		inline bool AlignedButton(const std::string& label, float alignment = 0.5f) {
			ImGuiStyle& style = ImGui::GetStyle();

			float size = ImGui::CalcTextSize(label.c_str()).x + style.FramePadding.x * 2.0f;
			float avail = ImGui::GetContentRegionAvail().x;

			float off = (avail - size) * alignment;
			if (off > 0.0f)
				ImGui::SetCursorPosX(ImGui::GetCursorPosX() + off);

			return ImGui::Button(label.c_str());
		}
	}
}