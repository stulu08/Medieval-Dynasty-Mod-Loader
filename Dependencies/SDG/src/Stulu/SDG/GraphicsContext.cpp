#include "st_pch.h"
#include "GraphicsContext.h"
#include "OpenGL/OpenGLContext.h"

namespace SDG {
	Scope<GraphicsContext> GraphicsContext::create(GLFWwindow* window) {
#if SDG_USE_OPENGL
		return createScope<OpenGLContext>(window);
#elif SDG_USE_VULKAN
#endif
	}
}