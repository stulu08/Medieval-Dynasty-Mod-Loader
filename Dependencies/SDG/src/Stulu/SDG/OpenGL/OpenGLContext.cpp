#include "st_pch.h"
#include "OpenGLContext.h"

#include <GLFW/glfw3.h>
#include <glad/glad.h>

#include "SDG/Application.h"

namespace SDG {

	OpenGLContext::OpenGLContext() 
	{ }
	OpenGLContext::OpenGLContext(GLFWwindow* window)
		: m_windowHandle(window)
	{ }

	void OpenGLContext::init(GLFWwindow* window) {
		{
			GLFWwindow* windowHandle = static_cast<GLFWwindow*>(window);
			if (!windowHandle)
				std::cout << "Window handle is null";
			m_windowHandle = windowHandle;
		}
		glfwMakeContextCurrent(m_windowHandle);
		int32_t status = gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
		if (!status)
			std::cout << "Failed glad initialization";
	}

	void OpenGLContext::swapBuffers() {
		glfwSwapBuffers(m_windowHandle);
	}
	void OpenGLContext::setVSync(bool enabled) {
		if (enabled)
			glfwSwapInterval(1);
		else
			glfwSwapInterval(0);
	}
	API_Infos OpenGLContext::getApiInfos() {
		return API_Infos{ "OpenGL",(char*)glGetString(GL_VENDOR),(char*)glGetString(GL_VERSION),(char*)glGetString(GL_RENDERER) };
	}
}
