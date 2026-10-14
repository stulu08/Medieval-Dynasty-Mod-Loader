#pragma once
#include "Core.h"
#include "Application.h"
namespace SDG{
	class SDG_API RenderCommand {
	public:
		static void init();
		static void setViewport(uint32_t x, uint32_t y, uint32_t width, uint32_t height);
		static void setClearColor(const glm::vec4& color);
		static void clear();
		
		//ImGui
		static void imgui_init(GLFWwindow* window);
		static void imgui_newFrame();
		static void imgui_render();
		static void imgui_shutdown();
	};
}