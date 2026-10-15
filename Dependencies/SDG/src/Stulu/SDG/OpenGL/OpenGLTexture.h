#pragma once
#include "../Texture.h"

namespace SDG {
	class SDG_API OpenGLTexture : public Texture {
	public:
		OpenGLTexture(uint32_t width, uint32_t height, const TextureSettings& settings);
		OpenGLTexture(const std::string& path, const TextureSettings& settings);
		virtual ~OpenGLTexture();
		virtual void* getHandle() const override;
		virtual uint32_t getWidth() const override { return m_width; }
		virtual uint32_t getHeight() const override { return m_height; }
		virtual TextureSettings& getSettings() { return m_settings; }
		virtual void getData(void* data, uint32_t size, uint32_t mipLevel = 0) const override;
		virtual uint32_t getPixel(uint32_t posX, uint32_t posY, uint32_t mipLevel = 0) const override;

		virtual void setData(void* data, uint32_t offsetX = 0, uint32_t offsetY = 0, uint32_t resizeContentWidth = 1, uint32_t resizeContentHeight = 1, uint32_t mipLevel = 0) override;
		
		virtual void setData(void* data, uint32_t mipLevel) override {
			setData(data, 0, 0, m_width, m_height, mipLevel);
		}
		virtual void setPixel(uint32_t color, uint32_t x, uint32_t y, uint32_t mipLevel) {
			setData(&color, x, y, 1, 1, mipLevel);
		}
		virtual void setPixel(const glm::vec4& color, uint32_t x, uint32_t y, uint32_t mipLevel) {
			uint8_t r = (uint8_t)(color.r * 255.0f);
			uint8_t g = (uint8_t)(color.g * 255.0f);
			uint8_t b = (uint8_t)(color.b * 255.0f);
			uint8_t a = (uint8_t)(color.a * 255.0f);
			uint32_t colorData = (r << 24) | (g << 16) | (b << 8) | a;
			setData(&colorData, x, y, 1, 1, mipLevel);
		}

		
		virtual void resize(uint32_t width, uint32_t height, bool copyContent = true) override;

		virtual bool operator == (const Texture& other) const override;
		//temp
		virtual std::string getPath() const override { return m_path; }
	private:
		std::string m_path; 
		uint32_t m_width;
		uint32_t m_height;
		uint32_t m_rendererID;
		uint32_t m_dataFormat;
		TextureSettings m_settings;
		bool m_hasMips;
	};


	//internal format, data format
	std::pair<uint32_t, uint32_t> TextureFormatToGLenum(TextureFormat& format, int channels = 4);
	uint32_t TextureWrapToGLenum(TextureWrap wrap);
	///min = 0, mag = 1
	uint32_t TextureFilteringToGLenum(TextureFiltering wrap, bool hasMips = false, uint32_t min_mag = 1);
	bool isCorrectFormat(TextureFormat format, int channels);
	bool isGLTextureFormatFloat(const TextureFormat& format);
}

