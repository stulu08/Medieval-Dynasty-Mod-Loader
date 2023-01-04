#pragma once
#define GLM_ENABLE_EXPERIMENTAL
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/matrix_decompose.hpp>
#include <glm/gtx/compatibility.hpp>
#include <glm/gtx/string_cast.hpp>
#include <glm/gtx/quaternion.hpp>
#include <glm/gtc/constants.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/hash.hpp>
#include <glm/glm.hpp>
#include <ostream>
//I use glm to implement basic math operations 
namespace std {
	inline std::ostream& operator<<(std::ostream& os, const glm::quat& vector) { return os << glm::to_string(vector); }

	inline std::ostream& operator<<(std::ostream& os, const glm::vec4& vector) { return os << glm::to_string(vector); }
	inline std::ostream& operator<<(std::ostream& os, const glm::ivec4& vector) { return os << glm::to_string(vector); }
	inline std::ostream& operator<<(std::ostream& os, const glm::uvec4& vector) { return os << glm::to_string(vector); }
	inline std::ostream& operator<<(std::ostream& os, const glm::dvec4& vector) { return os << glm::to_string(vector); }

	inline std::ostream& operator<<(std::ostream& os, const glm::vec3& vector) { return os << glm::to_string(vector); }
	inline std::ostream& operator<<(std::ostream& os, const glm::ivec3& vector) { return os << glm::to_string(vector); }
	inline std::ostream& operator<<(std::ostream& os, const glm::uvec3& vector) { return os << glm::to_string(vector); }
	inline std::ostream& operator<<(std::ostream& os, const glm::dvec3& vector) { return os << glm::to_string(vector); }

	inline std::ostream& operator<<(std::ostream& os, const glm::vec2& vector) { return os << glm::to_string(vector); }
	inline std::ostream& operator<<(std::ostream& os, const glm::ivec2& vector) { return os << glm::to_string(vector); }
	inline std::ostream& operator<<(std::ostream& os, const glm::uvec2& vector) { return os << glm::to_string(vector); }
	inline std::ostream& operator<<(std::ostream& os, const glm::dvec2& vector) { return os << glm::to_string(vector); }

	inline std::ostream& operator<<(std::ostream& os, const glm::mat4& vector) { return os << glm::to_string(vector); }
	inline std::ostream& operator<<(std::ostream& os, const glm::mat4x3& vector) { return os << glm::to_string(vector); }
	inline std::ostream& operator<<(std::ostream& os, const glm::mat4x2& vector) { return os << glm::to_string(vector); }

	inline std::ostream& operator<<(std::ostream& os, const glm::mat3& vector) { return os << glm::to_string(vector); }
	inline std::ostream& operator<<(std::ostream& os, const glm::mat3x4& vector) { return os << glm::to_string(vector); }
	inline std::ostream& operator<<(std::ostream& os, const glm::mat3x2& vector) { return os << glm::to_string(vector); }

	inline std::ostream& operator<<(std::ostream& os, const glm::mat2& vector) { return os << glm::to_string(vector); }
	inline std::ostream& operator<<(std::ostream& os, const glm::mat2x4& vector) { return os << glm::to_string(vector); }
	inline std::ostream& operator<<(std::ostream& os, const glm::mat2x3& vector) { return os << glm::to_string(vector); }
}