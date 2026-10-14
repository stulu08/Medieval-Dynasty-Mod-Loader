#pragma once
#include "BaseControls.h"

namespace SDG {
    namespace Controls {
        inline bool Vector2(const std::string& label, glm::vec2& value, float speed = 1.0f, const glm::vec2& min = glm::vec2(-FLT_MAX), const glm::vec2& max = glm::vec2(FLT_MAX), const char* format = "%.3f") {
            return LabeledBaseControl(label, [&]() {
                float spacing = ImGui::GetStyle().ItemSpacing.x;
                ImGui::PushItemWidth((ImGui::GetContentRegionAvail().x - spacing) / 2.0f);

                bool changed = ImGui::DragFloat("##X", &value.x, speed, min.x, max.x, format);
                ImGui::SameLine();
                changed |= ImGui::DragFloat("##Y", &value.y, speed, min.y, max.y, format);

                ImGui::PopItemWidth();
                return changed;
                });
        }
        inline bool Vector3(const std::string& label, glm::vec3& value, float speed = 1.0f, const glm::vec3& min = glm::vec3(-FLT_MAX), const glm::vec3& max = glm::vec3(FLT_MAX), const char* format = "%.3f") {
            return LabeledBaseControl(label, [&]() {
                float spacing = ImGui::GetStyle().ItemSpacing.x * 2.0f;
                ImGui::PushItemWidth((ImGui::GetContentRegionAvail().x - spacing) / 3.0f);

                bool changed = ImGui::DragFloat("##X", &value.x, speed, min.x, max.x, format);
                ImGui::SameLine();
                changed |= ImGui::DragFloat("##Y", &value.y, speed, min.y, max.y, format);
                ImGui::SameLine();
                changed |= ImGui::DragFloat("##Z", &value.z, speed, min.z, max.y, format);

                ImGui::PopItemWidth();
                return changed;
                });
        }
        inline bool Vector4(const std::string& label, glm::vec4& value, float speed = 1.0f, const glm::vec4& min = glm::vec4(-FLT_MAX), const glm::vec4& max = glm::vec4(FLT_MAX), const char* format = "%.3f") {
            return LabeledBaseControl(label, [&]() {
                float spacing = ImGui::GetStyle().ItemSpacing.x * 3.0f;
                ImGui::PushItemWidth((ImGui::GetContentRegionAvail().x - spacing) / 4.0f);

                bool changed = ImGui::DragFloat("##X", &value.x, speed, min.x, max.x, format);
                ImGui::SameLine();
                changed |= ImGui::DragFloat("##Y", &value.y, speed, min.y, max.y, format);
                ImGui::SameLine();
                changed |= ImGui::DragFloat("##Z", &value.z, speed, min.z, max.y, format);
                ImGui::SameLine();
                changed |= ImGui::DragFloat("##W", &value.w, speed, min.w, max.w, format);

                ImGui::PopItemWidth();
                return changed;
                });
        }

        inline bool Vector2Int(const std::string& label, glm::ivec2& value, float speed = 1.0f, const glm::ivec2& min = glm::ivec2(-INT32_MAX), const glm::ivec2& max = glm::ivec2(INT32_MAX), const char* format = "%d") {
            return LabeledBaseControl(label, [&]() {
                float spacing = ImGui::GetStyle().ItemSpacing.x;
                ImGui::PushItemWidth((ImGui::GetContentRegionAvail().x - spacing) / 2.0f);

                bool changed = ImGui::DragInt("##X", &value.x, speed, min.x, max.x, format);
                ImGui::SameLine();
                changed |= ImGui::DragInt("##Y", &value.y, speed, min.y, max.y, format);

                ImGui::PopItemWidth();
                return changed;
                });
        }

        inline bool Vector3Int(const std::string& label, glm::ivec3& value, float speed = 1.0f, const glm::ivec3& min = glm::ivec3(-INT32_MAX), const glm::ivec3& max = glm::ivec3(INT32_MAX), const char* format = "%d") {
            return LabeledBaseControl(label, [&]() {
                float spacing = ImGui::GetStyle().ItemSpacing.x * 2.0f;
                ImGui::PushItemWidth((ImGui::GetContentRegionAvail().x - spacing) / 3.0f);

                bool changed = ImGui::DragInt("##X", &value.x, speed, min.x, max.x, format);
                ImGui::SameLine();
                changed |= ImGui::DragInt("##Y", &value.y, speed, min.y, max.y, format);
                ImGui::SameLine();
                changed |= ImGui::DragInt("##Z", &value.z, speed, min.z, max.y, format);

                ImGui::PopItemWidth();
                return changed;
                });
        }

        inline bool Vector4Int(const std::string& label, glm::ivec4& value, float speed = 1.0f, const glm::ivec4& min = glm::ivec4(-INT32_MAX), const glm::ivec4& max = glm::ivec4(INT32_MAX), const char* format = "%d") {
            return LabeledBaseControl(label, [&]() {
                float spacing = ImGui::GetStyle().ItemSpacing.x * 3.0f;
                ImGui::PushItemWidth((ImGui::GetContentRegionAvail().x - spacing) / 4.0f);

                bool changed = ImGui::DragInt("##X", &value.x, speed, min.x, max.x, format);
                ImGui::SameLine();
                changed |= ImGui::DragInt("##Y", &value.y, speed, min.y, max.y, format);
                ImGui::SameLine();
                changed |= ImGui::DragInt("##Z", &value.z, speed, min.z, max.y, format);
                ImGui::SameLine();
                changed |= ImGui::DragInt("##W", &value.w, speed, min.w, max.w, format);

                ImGui::PopItemWidth();
                return changed;
                });
        }
    }
}