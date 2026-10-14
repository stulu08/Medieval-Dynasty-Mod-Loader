#pragma once
#include "Core.h"

namespace SDG {
	class SDG_API Random {
	public:
		static int getInt(int min, int max);
		static float getFloat(float min = 0.0f, float max = 1.0);
		static glm::vec2 getVector2(glm::vec2 min = glm::vec2(0.0f), glm::vec2 max = glm::vec2(1.0f));
		static glm::vec3 getVector3(glm::vec3 min = glm::vec3(0.0f), glm::vec3 max = glm::vec3(1.0f));
		static glm::vec4 getVector4(glm::vec4 min = glm::vec4(0.0f), glm::vec4 max = glm::vec4(1.0f));
	};
}