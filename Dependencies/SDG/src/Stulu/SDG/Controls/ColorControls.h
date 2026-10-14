#pragma once
#include "BaseControls.h"

namespace SDG {
    namespace Controls {
        inline bool Color(const std::string& label, glm::vec3& value, bool hdr = false) {
            return LabeledBaseControl(label, [&]() {
                ImGui::PushItemWidth(-1);

                ImGuiColorEditFlags flags =
                    ImGuiColorEditFlags_PickerHueWheel | ImGuiColorEditFlags_NoAlpha;

                if (hdr) {
                    flags |= ImGuiColorEditFlags_HDR;
                    flags |= ImGuiColorEditFlags_Float;
                }

                bool changed = ImGui::ColorEdit3("##colorEdit", glm::value_ptr(value), flags);

                ImGui::PopItemWidth();
                return changed;
                });
        }
        inline bool Color(const std::string& label, glm::vec4& value, bool hdr = false) {
            return LabeledBaseControl(label, [&]() {
                ImGui::PushItemWidth(-1);

                ImGuiColorEditFlags flags =
                    ImGuiColorEditFlags_PickerHueWheel;

                if (hdr) {
                    flags |= ImGuiColorEditFlags_HDR;
                    flags |= ImGuiColorEditFlags_Float;
                }

                bool changed = ImGui::ColorEdit4("##colorEdit", glm::value_ptr(value), flags);

                ImGui::PopItemWidth();
                return changed;
                });
        }
    }
}