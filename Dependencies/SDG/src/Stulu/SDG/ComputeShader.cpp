#include "st_pch.h"
#include "ComputeShader.h"

#include "OpenGL/OpenGLComputeShader.h"

namespace SDG {
	Ref<ComputeShader> ComputeShader::create(const std::string& name, const std::string& src) {
#if SDG_USE_OPENGL
		return createRef<OpenGLComputeShader>(name, src);
#endif
	}
}