#pragma once
#include "Texture.h"

namespace SDG {
	enum class AccesMode {
		ReadOnly = 0x88B8,
		WriteOnly = 0x88B9,
		ReadWrite = 0x88BA
	};

	class SDG_API ComputeShader {
	public:
		struct Usage {
			static inline const uint32_t None = 0x00000000;// Wont wait for execution finish
			static inline const uint32_t VertexAttribArray = 0x00000001;
			static inline const uint32_t ElementArray = 0x00000002;
			static inline const uint32_t Uniform = 0x00000004;
			static inline const uint32_t TextureFetch = 0x00000008;
			static inline const uint32_t ShaderImageAcces = 0x00000020;
			static inline const uint32_t Command = 0x00000040;
			static inline const uint32_t PixelBuffer = 0x00000080;
			static inline const uint32_t TextureUpdate = 0x00000100;
			static inline const uint32_t BufferUpdate = 0x00000200;
			static inline const uint32_t Framebuffer = 0x00000400;
			static inline const uint32_t TransformFeedback = 0x00000800;
			static inline const uint32_t AtomicCounter = 0x00001000;
			static inline const uint32_t Default = 0xFFFFFFFF;
		};

		virtual ~ComputeShader() = default;

		static Ref<ComputeShader> create(const std::string& name, const std::string& src);

		virtual void reload(const std::string& src) = 0;
		virtual void Dispatch(const glm::uvec3& numWorkGroups = { 1,1,1 }, uint32_t usage = Usage::Default) = 0;
		virtual void Dispatch(const uint32_t numWorkGroupsX = 1, const uint32_t numWorkGroupsY = 1, const uint32_t numWorkGroupsZ = 1, uint32_t usage = Usage::Default) = 0;

		virtual void setTexture(const std::string& name, uint32_t binding, const Ref<Texture>& texture, uint32_t mipLevel = 0, AccesMode mode = AccesMode::ReadWrite) = 0;
		virtual void setTextureInternal(const std::string& name, uint32_t binding, void* texture, uint32_t mipLevel = 0, AccesMode mode = AccesMode::ReadWrite, TextureFormat format = TextureFormat::Auto) = 0;
		virtual void setFloat(const std::string& name, float value) = 0;
		virtual void setInt(const std::string& name, int value) = 0;
		virtual void setVec(const std::string& name, const glm::vec4& value) = 0;
		virtual void setMat(const std::string& name, const glm::mat4& value) = 0;
		virtual void setFloatArray(const std::string& name, const float* floats, uint32_t count) = 0;
		virtual void setIntArray(const std::string& name, const int* ints, uint32_t count) = 0;
		virtual void setVecArray(const std::string& name, const glm::vec4* vecs, uint32_t count) = 0;
		virtual void setMatArray(const std::string& name, const glm::mat4* mats, uint32_t count) = 0;

		virtual const std::string& getName() const = 0;
		virtual const std::string& getSource() const = 0;
		virtual const void* getHandle() const = 0;
	};
}