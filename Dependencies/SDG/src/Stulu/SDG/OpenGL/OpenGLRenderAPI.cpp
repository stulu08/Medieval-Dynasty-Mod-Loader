#include "st_pch.h"
#include "OpenGLRenderAPI.h"
#include <stb_image.h>
#include <glad/glad.h>

#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"

namespace SDG {
	//https://www.khronos.org/opengl/wiki/Debug_Output
	void debugCallback(GLenum source,
		GLenum type,
		GLuint id,
		GLenum messageSeverity,
		GLsizei length,
		const GLchar* message,
		const void* userParam)
	{
		switch (messageSeverity)
		{
		case GL_DEBUG_SEVERITY_HIGH:
			std::cout << "[OPENGL][HIGH] " << message << std::endl;
			break;
		case GL_DEBUG_SEVERITY_MEDIUM:
			std::cout << "[OPENGL][MEDIUM] " << message << std::endl;
			break;
		case GL_DEBUG_SEVERITY_LOW:
			std::cout << "[OPENGL][LOW] " << message << std::endl;
			break;
		case GL_DEBUG_SEVERITY_NOTIFICATION:
			std::cout << "[OPENGL][NOTIFICATION:] " << message << std::endl;
			break;
		default:
			break;
		}
	}

	void OpenGLRenderAPI::init() {
		glDepthMask(GL_TRUE);

		glEnable(GL_CULL_FACE);
		glCullFace(GL_BACK);
		glEnable(GL_DEPTH_TEST);
		glEnable(GL_BLEND);
		glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
		glDepthFunc(GL_LESS);

#ifdef ST_DEBUG
		glEnable(GL_DEBUG_OUTPUT);
		glEnable(GL_DEBUG_OUTPUT_SYNCHRONOUS);
		glDebugMessageCallback(debugCallback, nullptr);

		glDebugMessageControl(GL_DONT_CARE, GL_DONT_CARE, GL_DONT_CARE, 0, nullptr, GL_TRUE);
#if ST_GRAPHICS_API_VERBOSE_LOGGING == 0
		glDebugMessageControl(GL_DONT_CARE, GL_DONT_CARE, GL_DEBUG_SEVERITY_NOTIFICATION, 0, nullptr, GL_FALSE);
#endif
#if ST_GRAPHICS_API_INFO_LOGGING == 0
		glDebugMessageControl(GL_DONT_CARE, GL_DONT_CARE, GL_DEBUG_SEVERITY_LOW, 0, nullptr, GL_FALSE);
#endif
		
#endif

		setClearColor({ 0,0,0,1 });
	}


	void OpenGLRenderAPI::setViewport(uint32_t x, uint32_t y, uint32_t width, uint32_t height) {
		glViewport(x, y, width, height);
	}
	void OpenGLRenderAPI::setClearColor(const glm::vec4& color) {
		glClearColor(color.r, color.g, color.b, color.a);
	}
	void OpenGLRenderAPI::clear() {
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	}

	void OpenGLRenderAPI::imgui_init(GLFWwindow* window) {
		ImGui_ImplGlfw_InitForOpenGL(window, true);
		ImGui_ImplOpenGL3_Init("#version 460");
	}

	void OpenGLRenderAPI::imgui_newFrame() {
		ImGui_ImplOpenGL3_NewFrame();
		ImGui_ImplGlfw_NewFrame();
	}

	void OpenGLRenderAPI::imgui_render() {
		ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

	}

	void OpenGLRenderAPI::imgui_shutdown() {
		ImGui_ImplOpenGL3_Shutdown();
		ImGui_ImplGlfw_Shutdown();
	}
}