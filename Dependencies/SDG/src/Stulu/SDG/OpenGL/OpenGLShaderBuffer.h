#pragma once
#include "../ShaderBuffer.h"

namespace SDG {
	class SDG_API OpenGLUniformBuffer : public UniformBuffer {
	public:
		OpenGLUniformBuffer(uint32_t size, uint32_t binding);
		virtual ~OpenGLUniformBuffer();

		virtual void bind(uint32_t binding) const override;
		virtual void setData(const void* data, uint32_t size, uint32_t offset) override;
		virtual uint32_t getSize() const override { return m_size; }
	private:
		uint32_t m_rendererID = 0;
		uint32_t m_size = 0;
	};

	class SDG_API OpenGLShaderStorageBuffer : public ShaderStorageBuffer {
	public:
		OpenGLShaderStorageBuffer(uint32_t size, uint32_t binding, BufferDrawMode mode);
		virtual ~OpenGLShaderStorageBuffer();

		virtual void setData(const void* data) override { setData(data, m_size, 0); }
		virtual void setData(const void* data, uint32_t size, uint32_t offset) override;

		virtual void bind(uint32_t binding) const override;
		virtual void getData(void* data) const override { getData(data, m_size, 0); }
		virtual void getData(void* data, uint32_t size, uint32_t offset = 0) const override;
		virtual uint32_t getSize() const override { return m_size; }
	private:
		uint32_t m_rendererID;
		uint32_t m_size;
		BufferDrawMode m_mode;
	};
}