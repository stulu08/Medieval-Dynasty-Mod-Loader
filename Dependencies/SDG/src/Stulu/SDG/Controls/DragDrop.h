#pragma once
#include "BaseControls.h"
#include <imgui.h>

namespace SDG {
    namespace Controls {
        // This handles hovering of Drag Drop sources, ImGui::ButtonBeahviour ignores this edge case
        inline bool DragDropHoverBtnPressed() {
            if (ImGui::IsDragDropActive()) {
                if (ImGui::IsItemHovered(
                    ImGuiHoveredFlags_AllowWhenBlockedByActiveItem |
                    ImGuiHoveredFlags_AllowWhenOverlapped |
                    ImGuiHoveredFlags_Stationary)) {

                    auto ctx = ImGui::GetCurrentContext();

                    const ImGuiID currentHoverId = ctx->HoverItemDelayId;
                    const ImGuiID lastHoveredID = ctx->HoverItemDelayIdPreviousFrame;
                    float& time = ctx->HoverItemDelayTimer;

                    if (currentHoverId != lastHoveredID) {
                        time = 0.f;
                        return false;
                    }

                    const float DRAGDROP_HOLD_TO_OPEN_TIMER = 0.70f;
                    if (time >= DRAGDROP_HOLD_TO_OPEN_TIMER) {
                        time = 0.f;
                        return true;
                    }
                }
            }
            return false;
        }
    }
}