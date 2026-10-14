#pragma once
#include "Core.h"

struct GLFWwindow;

namespace SDG {
	struct API_Infos {
		const std::string name;
		const std::string vendor;
		const std::string version;
		const std::string device;
	};
	class SDG_API GraphicsContext {
	public:
		virtual ~GraphicsContext() = default;

		virtual void init(GLFWwindow* window) = 0;
		virtual void swapBuffers() = 0;
		virtual void setVSync(bool enabled) = 0;

		virtual API_Infos getApiInfos() = 0;

		static Scope<GraphicsContext> create(GLFWwindow* window);
	};
}