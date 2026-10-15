#include "st_pch.h"
#include "OpenGLTexture.h"

#include <glad/glad.h>
#include <stb_image.h>

namespace SDG {
	OpenGLTexture::OpenGLTexture(uint32_t width, uint32_t height, const TextureSettings& settings) {
		m_width = width;
		m_height = height;
		m_settings = settings;
		m_hasMips = m_settings.levels > 1 || m_settings.forceGenMips;

		std::pair<GLenum, GLenum> format = TextureFormatToGLenum(m_settings.format);
		m_dataFormat = format.second;
		GLenum wrap = TextureWrapToGLenum(m_settings.wrap);

		glCreateTextures(GL_TEXTURE_2D, 1, &m_rendererID);
		glTextureStorage2D(m_rendererID, m_settings.levels, format.first, m_width, m_height);

		glTextureParameteri(m_rendererID, GL_TEXTURE_MIN_FILTER, TextureFilteringToGLenum(m_settings.filtering, m_hasMips, 0));
		glTextureParameteri(m_rendererID, GL_TEXTURE_MAG_FILTER, TextureFilteringToGLenum(m_settings.filtering, m_hasMips, 1));
		glTextureParameteri(m_rendererID, GL_TEXTURE_WRAP_S, wrap);
		glTextureParameteri(m_rendererID, GL_TEXTURE_WRAP_T, wrap);
		if (m_settings.wrap == TextureWrap::ClampToBorder) {
			float borderColor[] = { m_settings.border.x,  m_settings.border.y,  m_settings.border.z,  m_settings.border.w };
			glTexParameterfv(GL_TEXTURE_2D, GL_TEXTURE_BORDER_COLOR, borderColor);
		}

		if (m_hasMips)
			glGenerateMipmap(GL_TEXTURE_2D);
	}
	OpenGLTexture::OpenGLTexture(const std::string& path, const TextureSettings& settings)
		:m_path(path), m_settings(settings) {
		static uint32_t nullTextureColor = 0xff000000;

		int32_t width, height, channels;
		stbi_set_flip_vertically_on_load(1);
		void* textureData = nullptr;
		bool float_ = false;
		{
			if (isGLTextureFormatFloat((TextureFormat)m_settings.format)) {
				textureData = stbi_loadf(m_path.c_str(), &width, &height, &channels, 0);
				float_ = true;
			}
			else {
				textureData = stbi_load(m_path.c_str(), &width, &height, &channels, 0);
			}
			if (!textureData) {
				std::cerr << "Texture failed to load: " << m_path << std::endl;
				width = 1;
				height = 1;
				channels = 4;
			}
		}
		m_width = width;
		m_height = height;


		std::pair<GLenum, GLenum> format = TextureFormatToGLenum(m_settings.format);
		if (!isCorrectFormat(m_settings.format, channels)) {
			m_settings.format = TextureFormat::Auto;
			format = TextureFormatToGLenum(m_settings.format, channels);
		}

		GLenum wrap = TextureWrapToGLenum(m_settings.wrap);
		GLenum internalFormat = format.first;
		m_dataFormat = format.second;
		m_hasMips = m_settings.levels > 1 || m_settings.forceGenMips;



		glCreateTextures(GL_TEXTURE_2D, 1, &m_rendererID);
		glBindTexture(GL_TEXTURE_2D, m_rendererID);
		glTextureStorage2D(m_rendererID, m_settings.levels, internalFormat, m_width, m_height);

		glTextureParameteri(m_rendererID, GL_TEXTURE_MIN_FILTER, TextureFilteringToGLenum(m_settings.filtering, m_hasMips, 0));
		glTextureParameteri(m_rendererID, GL_TEXTURE_MAG_FILTER, TextureFilteringToGLenum(m_settings.filtering, m_hasMips, 1));
		glTextureParameteri(m_rendererID, GL_TEXTURE_WRAP_S, wrap);
		glTextureParameteri(m_rendererID, GL_TEXTURE_WRAP_T, wrap);
		if (m_settings.wrap == TextureWrap::ClampToBorder) {
			float borderColor[] = { m_settings.border.x,  m_settings.border.y,  m_settings.border.z,  m_settings.border.w };
			glTexParameterfv(GL_TEXTURE_2D, GL_TEXTURE_BORDER_COLOR, borderColor);
		}

		if (textureData) {
			glTextureSubImage2D(m_rendererID, 0, 0, 0, m_width, m_height, m_dataFormat, float_ ? GL_FLOAT : GL_UNSIGNED_BYTE, textureData);
			stbi_image_free(textureData);
		}
		else {
			glTextureSubImage2D(m_rendererID, 0, 0, 0, m_width, m_height, m_dataFormat, GL_UNSIGNED_BYTE, &nullTextureColor);
		}

		if (m_hasMips)
			glGenerateMipmap(GL_TEXTURE_2D);

	}
	OpenGLTexture::~OpenGLTexture() {
		glDeleteTextures(1, &m_rendererID);
	}
	void* OpenGLTexture::getHandle() const {
		return (void*)(&m_rendererID);;
	}
	void OpenGLTexture::getData(void* data, uint32_t size, uint32_t mipLevel) const {
		glGetTextureImage(m_rendererID, mipLevel, m_dataFormat, GL_UNSIGNED_BYTE, size, data);
	}
	uint32_t OpenGLTexture::getPixel(uint32_t posX, uint32_t posY, uint32_t mipLevel) const {
		uint32_t data;
		glGetTextureSubImage(m_rendererID, mipLevel, posX, posY, 0, 1, 1, 1, m_dataFormat, GL_UNSIGNED_BYTE, sizeof(uint32_t), &data);
		return data;
	}
	void OpenGLTexture::setData(void* data, uint32_t offsetX, uint32_t offsetY, uint32_t resizeContentWidth, uint32_t resizeContentHeight, uint32_t mipLevel) {
		glTextureSubImage2D(m_rendererID, mipLevel, offsetX, offsetY, resizeContentWidth, resizeContentHeight, GL_RGBA, GL_UNSIGNED_INT_8_8_8_8, data);
	}
	void OpenGLTexture::resize(uint32_t width, uint32_t height, bool copyContent) {
		uint32_t sourceTexture = m_rendererID;
		uint32_t sourceWidth = m_width;
		uint32_t sourceHeight = m_height;

		m_width = width;
		m_height = height;
		m_hasMips = m_settings.levels > 1 || m_settings.forceGenMips;
		std::pair<GLenum, GLenum> format = TextureFormatToGLenum(m_settings.format);
		m_dataFormat = format.second;
		GLenum wrap = TextureWrapToGLenum(m_settings.wrap);

		glCreateTextures(GL_TEXTURE_2D, 1, &m_rendererID);
		glTextureStorage2D(m_rendererID, m_settings.levels, format.first, m_width, m_height);

		glTextureParameteri(m_rendererID, GL_TEXTURE_MIN_FILTER, TextureFilteringToGLenum(m_settings.filtering, m_hasMips, 0));
		glTextureParameteri(m_rendererID, GL_TEXTURE_MAG_FILTER, TextureFilteringToGLenum(m_settings.filtering, m_hasMips, 1));
		glTextureParameteri(m_rendererID, GL_TEXTURE_WRAP_S, wrap);
		glTextureParameteri(m_rendererID, GL_TEXTURE_WRAP_T, wrap);
		if (m_settings.wrap == TextureWrap::ClampToBorder) {
			float borderColor[] = { m_settings.border.x,  m_settings.border.y,  m_settings.border.z,  m_settings.border.w };
			glTexParameterfv(GL_TEXTURE_2D, GL_TEXTURE_BORDER_COLOR, borderColor);
		}

		if (m_hasMips)
			glGenerateMipmap(GL_TEXTURE_2D);

		if (copyContent) {
			glCopyImageSubData(
				sourceTexture, GL_TEXTURE_2D,
				0, 0, 0, 0, 
				m_rendererID, GL_TEXTURE_2D, 
				0, 0, 0, 0, sourceWidth, sourceHeight, 1);
		}

		glDeleteTextures(1, &sourceTexture);
	}
	bool OpenGLTexture::operator==(const Texture& other) const {
		return getHandle() == other.getHandle();
	}

	std::pair<uint32_t, uint32_t> TextureFormatToGLenum(TextureFormat& format, int channels) {
		GLenum internalFormat, m_dataFormat;
		switch (format)
		{
		case SDG::TextureFormat::RGBA:
			internalFormat = GL_RGBA8;
			m_dataFormat = GL_RGBA;
			break;
		case SDG::TextureFormat::RGB:
			internalFormat = GL_RGB8;
			m_dataFormat = GL_RGB;
			break;
		case SDG::TextureFormat::RG:
			internalFormat = GL_RG8;
			m_dataFormat = GL_RG;
			break;
		case SDG::TextureFormat::R:
			internalFormat = GL_R8;
			m_dataFormat = GL_RED;
			break;
		case SDG::TextureFormat::SRGB:
			internalFormat = GL_SRGB8;
			m_dataFormat = GL_RGB;
			break;
		case SDG::TextureFormat::SRGBA:
			internalFormat = GL_SRGB_ALPHA;
			m_dataFormat = GL_RGBA;
			break;
		case SDG::TextureFormat::RGBA16F:
			internalFormat = GL_RGBA16F;
			m_dataFormat = GL_RGBA;
			break;
		case SDG::TextureFormat::RGB16F:
			internalFormat = GL_RGB16F;
			m_dataFormat = GL_RGB;
			break;
		case SDG::TextureFormat::RGBA32F:
			internalFormat = GL_RGBA32F;
			m_dataFormat = GL_RGBA;
			break;
		case SDG::TextureFormat::RG32F:
			internalFormat = GL_RG32F;
			m_dataFormat = GL_RGBA;
			break;
		case SDG::TextureFormat::Auto:
			switch (channels) {
			case 4:
				format = TextureFormat::RGBA;
				break;
			case 3:
				format = TextureFormat::RGB;
				break;
			case 2:
				format = TextureFormat::RG;
				break;
			case 1:
				format = TextureFormat::R;
				break;
			}
			return TextureFormatToGLenum(format, channels);
			//depth_stencil
		case SDG::TextureFormat::Depth16:
			internalFormat = GL_DEPTH_COMPONENT16;
			m_dataFormat = GL_DEPTH_COMPONENT;
			break;
		case SDG::TextureFormat::Depth24:
			internalFormat = GL_DEPTH_COMPONENT24;
			m_dataFormat = GL_DEPTH_COMPONENT;
			break;
		case SDG::TextureFormat::Depth32:
			internalFormat = GL_DEPTH_COMPONENT32;
			m_dataFormat = GL_DEPTH_COMPONENT;
			break;
		case SDG::TextureFormat::Depth32F:
			internalFormat = GL_DEPTH_COMPONENT32F;
			m_dataFormat = GL_DEPTH_COMPONENT;
			break;
		case SDG::TextureFormat::Depth24_Stencil8:
			internalFormat = GL_DEPTH24_STENCIL8;
			m_dataFormat = GL_DEPTH_STENCIL;
			break;
		case SDG::TextureFormat::Depth32F_Stencil8:
			internalFormat = GL_DEPTH32F_STENCIL8;
			m_dataFormat = GL_DEPTH_STENCIL;
			break;
		case SDG::TextureFormat::Stencil8:
			internalFormat = GL_STENCIL_INDEX8;
			m_dataFormat = GL_STENCIL_INDEX;
			break;
		}
		return { internalFormat,m_dataFormat };
	}
	uint32_t TextureWrapToGLenum(TextureWrap wrap) {
		switch (wrap)
		{
		case TextureWrap::ClampToEdge:
			return GL_CLAMP;
		case TextureWrap::Repeat:
			return GL_REPEAT;
		case TextureWrap::ClampToBorder:
			return GL_CLAMP_TO_BORDER;
		}
		return GL_REPEAT;
	}
	uint32_t TextureFilteringToGLenum(TextureFiltering filtering, bool hasMips, uint32_t min_mag) {
		if (min_mag == 0) {
			switch (filtering)
			{
			case TextureFiltering::Linear:
				return hasMips ? GL_LINEAR_MIPMAP_LINEAR : GL_LINEAR;
			case TextureFiltering::Nearest:
				return GL_NEAREST;
			}
		}
		else {
			switch (filtering)
			{
			case TextureFiltering::Linear:
				return GL_LINEAR;
			case TextureFiltering::Nearest:
				return GL_NEAREST;
			}
		}

		return GL_LINEAR;
	}
	bool isCorrectFormat(TextureFormat format, int channels) {
		switch (format)
		{
		case TextureFormat::R:
			return channels == 1;
			break;
		case TextureFormat::RG:
			return channels == 2;
			break;
		case TextureFormat::RGB:
			return channels == 3;
			break;
		case TextureFormat::RGBA:
			return channels == 4;
			break;
		case TextureFormat::SRGB:
			return channels == 3;
			break;
		case TextureFormat::SRGBA:
			return channels == 4;
			break;
		case TextureFormat::RGB16F:
			return channels == 3;
			break;
		case TextureFormat::RGBA16F:
			return channels == 4;
			break;
		case TextureFormat::RGBA32F:
			return channels == 4;
			break;
		}
		return true;
	}
	bool isGLTextureFormatFloat(const TextureFormat& format) {
		return format == TextureFormat::RGB16F || format == TextureFormat::RGBA16F || format == TextureFormat::RGBA32F ||
			format == TextureFormat::RG32F || format == TextureFormat::Depth32F || format == TextureFormat::Depth32F_Stencil8;
	}
}