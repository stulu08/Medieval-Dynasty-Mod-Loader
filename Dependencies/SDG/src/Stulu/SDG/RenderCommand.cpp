#include "st_pch.h"
#include "RenderCommand.h"

#include "OpenGL/OpenGLRenderAPI.h"

namespace SDG {
	void RenderCommand::init() {
#if SDG_USE_OPENGL
		OpenGLRenderAPI::init();
#elif SDG_USE_VULKAN
#endif
	}

	void RenderCommand::setViewport(uint32_t x, uint32_t y, uint32_t width, uint32_t height) {
#if SDG_USE_OPENGL
		OpenGLRenderAPI::setViewport(x,y,width,height);
#elif SDG_USE_VULKAN
#endif
	}

	void RenderCommand::setClearColor(const glm::vec4& color) {
#if SDG_USE_OPENGL
		OpenGLRenderAPI::setClearColor(color);
#elif SDG_USE_VULKAN
#endif
	}

	void RenderCommand::clear() {
#if SDG_USE_OPENGL
		OpenGLRenderAPI::clear();
#elif SDG_USE_VULKAN
#endif
	}

	void RenderCommand::imgui_init(GLFWwindow* window) {
#if SDG_USE_OPENGL
		OpenGLRenderAPI::imgui_init(window);
#elif SDG_USE_VULKAN
#endif
	}

	void RenderCommand::imgui_newFrame() {
#if SDG_USE_OPENGL
		OpenGLRenderAPI::imgui_newFrame();
#elif SDG_USE_VULKAN
#endif
	}

	void RenderCommand::imgui_render() {
#if SDG_USE_OPENGL
		OpenGLRenderAPI::imgui_render();
#elif SDG_USE_VULKAN
#endif
	}

	void RenderCommand::imgui_shutdown() {
#if SDG_USE_OPENGL
		OpenGLRenderAPI::imgui_shutdown();
#elif SDG_USE_VULKAN
#endif
	}

}