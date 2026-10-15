#pragma once

#pragma warning(disable:4251)

#include "CoreConfig.h"
#include "PlatformConfig.h"

#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <memory>
#include <string>
#include <vector>
#include <filesystem>
#include <iostream>

#define SDG_BIND_EVENT_FN(x) std::bind(&x, this, std::placeholders::_1)
#define SDG_BIT(x) (1 << x)
#define SDG_CONCAT_INNER(a, b) a ## b
#define SDG_CONCAT(a, b) SDG_CONCAT_INNER(a, b)


namespace SDG {
	template<typename T>
	using Scope = SDG_API std::unique_ptr<T>;
	template<typename T, typename ... Args>
	constexpr Scope<T> createScope(Args&& ... args)
	{
		return std::make_unique<T>(std::forward<Args>(args)...);
	}
	template<typename T>
	using Ref = SDG_API std::shared_ptr<T>;
	template<typename T, typename ... Args>
	constexpr Ref<T> createRef(Args&& ... args)
	{
		return std::make_shared<T>(std::forward<Args>(args)...);
	}
}