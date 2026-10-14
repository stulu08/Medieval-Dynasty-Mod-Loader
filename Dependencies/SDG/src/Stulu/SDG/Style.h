#pragma once
#include "Icons.h"

#include <imgui.h>
#include <imgui_stdlib.h>

#define FONT_ICON_SIZE 15.0f
#define FONT_SIZE_DEFAULT 16.0f

#define FONT_SIZE_SMALL FONT_SIZE_DEFAULT - 2.0f

#define FONT_SIZE_LARGE FONT_SIZE_DEFAULT + 2.0f
#define FONT_ICON_SIZE_ARGE FONT_ICON_SIZE + 2.0f

namespace SDG {
    namespace Style {
        extern ImFont* DefaultFont;
        extern ImFont* SmallFont;
        extern ImFont* LargeFont;

        inline void LoadColors(ImGuiStyle& style) {
            ImVec4* colors = style.Colors;

            colors[ImGuiCol_Text] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
            colors[ImGuiCol_TextDisabled] = ImVec4(0.50f, 0.50f, 0.50f, 1.00f);
            colors[ImGuiCol_WindowBg] = ImVec4(0.10f, 0.10f, 0.10f, 1.00f);
            colors[ImGuiCol_ChildBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
            colors[ImGuiCol_PopupBg] = ImVec4(0.08f, 0.08f, 0.08f, 1.000f);
            colors[ImGuiCol_Border] = ImVec4(0.25f, 0.25f, 0.25f, 0.59f);
            colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.24f);
            colors[ImGuiCol_FrameBg] = ImVec4(0.25f, 0.25f, 0.25f, 0.54f);
            colors[ImGuiCol_FrameBgHovered] = ImVec4(0.19f, 0.19f, 0.19f, 0.54f);
            colors[ImGuiCol_FrameBgActive] = ImVec4(0.20f, 0.22f, 0.23f, 1.00f);
            colors[ImGuiCol_TitleBg] = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
            colors[ImGuiCol_TitleBgActive] = ImVec4(0.06f, 0.06f, 0.06f, 1.00f);
            colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
            colors[ImGuiCol_MenuBarBg] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
            colors[ImGuiCol_ScrollbarBg] = ImVec4(0.05f, 0.05f, 0.05f, 0.54f);
            colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.34f, 0.34f, 0.34f, 0.54f);
            colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.40f, 0.40f, 0.40f, 0.54f);
            colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.56f, 0.56f, 0.56f, 0.54f);
            colors[ImGuiCol_CheckMark] = ImVec4(0.33f, 0.67f, 0.86f, 1.00f);
            colors[ImGuiCol_SliderGrab] = ImVec4(0.34f, 0.34f, 0.34f, 0.54f);
            colors[ImGuiCol_SliderGrabActive] = ImVec4(0.56f, 0.56f, 0.56f, 0.54f);
            colors[ImGuiCol_Button] = ImVec4(0.30f, 0.30f, 0.30f, 0.54f);
            colors[ImGuiCol_ButtonHovered] = ImVec4(0.19f, 0.19f, 0.19f, 0.54f);
            colors[ImGuiCol_ButtonActive] = ImVec4(0.20f, 0.22f, 0.23f, 1.00f);
            colors[ImGuiCol_Header] = ImVec4(0.00f, 0.00f, 0.00f, 0.52f);
            colors[ImGuiCol_HeaderHovered] = ImVec4(0.00f, 0.00f, 0.00f, 0.36f);
            colors[ImGuiCol_HeaderActive] = ImVec4(0.20f, 0.22f, 0.23f, 0.33f);
            colors[ImGuiCol_Separator] = ImVec4(0.28f, 0.28f, 0.28f, 0.29f);
            colors[ImGuiCol_SeparatorHovered] = ImVec4(0.44f, 0.44f, 0.44f, 0.29f);
            colors[ImGuiCol_SeparatorActive] = ImVec4(0.40f, 0.44f, 0.47f, 1.00f);
            colors[ImGuiCol_ResizeGrip] = ImVec4(0.28f, 0.28f, 0.28f, 0.29f);
            colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.44f, 0.44f, 0.44f, 0.29f);
            colors[ImGuiCol_ResizeGripActive] = ImVec4(0.40f, 0.44f, 0.47f, 1.00f);
            colors[ImGuiCol_Tab] = ImVec4(0.00f, 0.00f, 0.00f, 0.52f);
            colors[ImGuiCol_TabHovered] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
            colors[ImGuiCol_TabActive] = ImVec4(0.20f, 0.20f, 0.20f, 0.36f);
            colors[ImGuiCol_TabUnfocused] = ImVec4(0.00f, 0.00f, 0.00f, 0.52f);
            colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
            colors[ImGuiCol_DockingPreview] = ImVec4(0.33f, 0.67f, 0.86f, 1.00f);
            colors[ImGuiCol_DockingEmptyBg] = ImVec4(0.10f, 0.10f, 0.10f, 1.00f);
            colors[ImGuiCol_PlotLines] = ImVec4(0.329f, 0.671f, 0.859f, 1.000f);
            colors[ImGuiCol_PlotLinesHovered] = ImVec4(0.229f, 0.571f, 0.859f, 1.000f);
            colors[ImGuiCol_PlotHistogram] = ImVec4(0.329f, 0.671f, 0.859f, 1.000f);
            colors[ImGuiCol_PlotHistogramHovered] = ImVec4(0.229f, 0.571f, 0.859f, 1.000f);
            colors[ImGuiCol_TableHeaderBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.52f);
            colors[ImGuiCol_TableBorderStrong] = ImVec4(0.00f, 0.00f, 0.00f, 0.52f);
            colors[ImGuiCol_TableBorderLight] = ImVec4(0.28f, 0.28f, 0.28f, 0.29f);
            colors[ImGuiCol_TableRowBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
            colors[ImGuiCol_TableRowBgAlt] = ImVec4(1.00f, 1.00f, 1.00f, 0.06f);
            colors[ImGuiCol_TextSelectedBg] = ImVec4(0.20f, 0.22f, 0.23f, 1.00f);
            colors[ImGuiCol_DragDropTarget] = ImVec4(0.33f, 0.67f, 0.86f, 1.00f);
            colors[ImGuiCol_NavHighlight] = ImVec4(1.00f, 0.00f, 0.00f, 1.00f);
            colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 0.00f, 0.00f, 0.70f);
            colors[ImGuiCol_NavWindowingDimBg] = ImVec4(1.00f, 0.00f, 0.00f, 0.20f);
            colors[ImGuiCol_ModalWindowDimBg] = ImVec4(1.00f, 0.00f, 0.00f, 0.35f);
        }
        inline void LoadFonts(ImGuiIO& io, const std::string& fontPath, const std::string& iconFontPath) {
            static const ImWchar icons_ranges[] = { ICON_MIN_FK, ICON_MAX_16_FK, 0 };
            ImFontConfig icons_config;
            icons_config.MergeMode = true;
            icons_config.GlyphMinAdvanceX = FONT_SIZE_DEFAULT;
            icons_config.PixelSnapH = true;

            // Text fonts: the stb rasterizer is unhinted, so thin fonts look washed out at 14-18 px. Oversampling gives
            // smoother, evenly spaced glyphs and RasterizerMultiply brightens the thin strokes for readability.
            ImFontConfig text_config;
            text_config.OversampleH = 3;
            text_config.OversampleV = 2;
            text_config.RasterizerMultiply = 1.25f;

            DefaultFont = SmallFont = LargeFont = ImGui::GetFont();
            
            {
                if(!fontPath.empty())
                    DefaultFont = io.Fonts->AddFontFromFileTTF(fontPath.c_str(), FONT_SIZE_DEFAULT, &text_config);
                if (!iconFontPath.empty())
                    io.Fonts->AddFontFromFileTTF(iconFontPath.c_str(), FONT_ICON_SIZE, &icons_config, icons_ranges);
            }
            {
                if (!fontPath.empty())
                    SmallFont = io.Fonts->AddFontFromFileTTF(fontPath.c_str(), FONT_SIZE_SMALL, &text_config);
            }
            {
                if (!fontPath.empty())
                    LargeFont = io.Fonts->AddFontFromFileTTF(fontPath.c_str(), FONT_SIZE_LARGE, &text_config);
                if (!iconFontPath.empty())
                    io.Fonts->AddFontFromFileTTF(iconFontPath.c_str(), FONT_ICON_SIZE_ARGE, &icons_config, icons_ranges);
            }

            io.FontDefault = DefaultFont;
        }
        inline void LoadVars(ImGuiStyle& style) {
            // Corners
            style.WindowPadding = ImVec2(9.00f, 8.00f);
            style.FramePadding = ImVec2(5.00f, 2.00f);
            style.CellPadding = ImVec2(6.00f, 3.00f);
            style.ItemSpacing = ImVec2(6.00f, 6.00f);
            style.ItemInnerSpacing = ImVec2(6.00f, 6.00f);
            style.TouchExtraPadding = ImVec2(0.00f, 0.00f);
            style.IndentSpacing = 5;
            style.ScrollbarSize = 15;
            style.GrabMinSize = 10;
            style.WindowBorderSize = 1;
            style.ChildBorderSize = 1;
            style.PopupBorderSize = 1;
            style.FrameBorderSize = 0;
            style.TabBorderSize = 1;
            style.WindowRounding = 3;
            style.ChildRounding = 4;
            style.FrameRounding = 1;
            style.PopupRounding = 1;
            style.ScrollbarRounding = 9;
            style.GrabRounding = 3;
            style.LogSliderDeadzone = 4;
            style.TabRounding = 4;
        }
        inline void LoadAll(const std::string& fontFile, const std::string& iconFontFile) {

            ImGuiIO& io = ImGui::GetIO();
            ImGuiStyle& style = ImGui::GetStyle();

            ImGui::LoadIniSettingsFromDisk(io.IniFilename);
            // project only creates a temporary string, we need to hold the value for imgui
            io.IniFilename = "WindowConfig.ini";

            LoadFonts(io, fontFile, iconFontFile);
            LoadColors(style);
            LoadVars(style);
        }
    }
}

namespace ImGui {
    inline void PushFontSmall() {
        ImGui::PushFont(SDG::Style::SmallFont);
    }
    inline void PushFontLarge() {
        ImGui::PushFont(SDG::Style::LargeFont);
    }
    inline void PushFontDefault() {
        ImGui::PushFont(SDG::Style::DefaultFont);
    }
}