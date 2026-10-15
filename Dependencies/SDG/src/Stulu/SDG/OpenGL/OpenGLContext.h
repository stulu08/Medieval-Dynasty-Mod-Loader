#pragma once
#include "../GraphicsContext.h"

namespace SDG {
	class SDG_API OpenGLContext : public GraphicsContext {
	public:
		OpenGLContext();
		OpenGLContext(GLFWwindow* window);

		virtual void init(GLFWwindow* window) override;
		virtual void swapBuffers() override;
		virtual void setVSync(bool enabled) override;
		virtual API_Infos getApiInfos() override;
	private:
		GLFWwindow* m_windowHandle;
	};
}


