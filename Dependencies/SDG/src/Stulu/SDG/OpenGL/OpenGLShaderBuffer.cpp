#include "st_pch.h"
#include "OpenGLShaderBuffer.h"

#include <glad/glad.h>

namespace SDG {
	OpenGLUniformBuffer::OpenGLUniformBuffer(uint32_t size, uint32_t binding)
		: m_size(size) {
		glCreateBuffers(1, &m_rendererID);
		glNamedBufferData(m_rendererID, size, nullptr, GL_DYNAMIC_DRAW);
		glBindBufferBase(GL_UNIFORM_BUFFER, binding, m_rendererID);
	}
	OpenGLUniformBuffer::~OpenGLUniformBuffer() {
		glDeleteBuffers(1, &m_rendererID);
	}
	void OpenGLUniformBuffer::bind(uint32_t binding) const {
		glBindBufferBase(GL_UNIFORM_BUFFER, binding, m_rendererID);
	}
	void OpenGLUniformBuffer::setData(const void* data, uint32_t size, uint32_t offset) {
		glNamedBufferSubData(m_rendererID, offset, size, data);
	}
	OpenGLShaderStorageBuffer::OpenGLShaderStorageBuffer(uint32_t size, uint32_t binding, BufferDrawMode mode)
		: m_size(size), m_mode(mode) {
		glCreateBuffers(1, &m_rendererID);
		glBindBuffer(GL_SHADER_STORAGE_BUFFER, m_rendererID);
		GLenum glmode;
		switch (mode)
		{
		case SDG::BufferDrawMode::Static:
			glmode = GL_STATIC_DRAW;
		case SDG::BufferDrawMode::Dynamic:
			glmode = GL_DYNAMIC_DRAW;
		case SDG::BufferDrawMode::Stream:
			glmode = GL_STREAM_DRAW;
		}
		glBufferData(GL_SHADER_STORAGE_BUFFER, size, nullptr, glmode);
		glBindBufferBase(GL_SHADER_STORAGE_BUFFER, binding, m_rendererID);
	}
	OpenGLShaderStorageBuffer::~OpenGLShaderStorageBuffer() {
		glDeleteBuffers(1, &m_rendererID);
	}
	void OpenGLShaderStorageBuffer::setData(const void* data, uint32_t size, uint32_t offset) {
		glNamedBufferSubData(m_rendererID, offset, size, data);
	}
	void OpenGLShaderStorageBuffer::bind(uint32_t binding) const {
		glBindBufferBase(GL_SHADER_STORAGE_BUFFER, binding, m_rendererID);
	}
	void OpenGLShaderStorageBuffer::getData(void* data, uint32_t size, uint32_t offset) const {
		glGetNamedBufferSubData(m_rendererID, offset, size, data);
	}
}