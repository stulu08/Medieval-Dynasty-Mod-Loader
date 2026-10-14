#pragma once
#include "Core.h"

namespace SDG {
	enum class BufferDrawMode {
		Static, // The data store contents will be modified once and used many times.
		Dynamic, // The data store contents will be modified repeatedly and used many times.
		Stream // The data store contents will be modified once and used at most a few times.
	};
	class SDG_API UniformBuffer {
	public:
		virtual ~UniformBuffer() = default;

		virtual void bind(uint32_t binding) const = 0;
		virtual uint32_t getSize() const = 0;
		virtual void setData(const void* data, uint32_t size, uint32_t offset = 0) = 0;

		static Ref<UniformBuffer> create(uint32_t size, uint32_t binding);
	};
	class SDG_API ShaderStorageBuffer {
	public:
		virtual ~ShaderStorageBuffer() = default;

		virtual void bind(uint32_t binding) const = 0;
		virtual uint32_t getSize() const = 0;
		virtual void getData(void* data, uint32_t size, uint32_t offset = 0) const = 0;
		virtual void getData(void* data) const = 0;

		virtual void setData(const void* data) = 0;
		virtual void setData(const void* data, uint32_t size, uint32_t offset = 0) = 0;

		static Ref<ShaderStorageBuffer> create(uint32_t size, uint32_t binding, BufferDrawMode mode = BufferDrawMode::Dynamic);
	};
}