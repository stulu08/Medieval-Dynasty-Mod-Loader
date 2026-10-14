#pragma once
#include "Core.h"

namespace SDG {
	enum class TextureFormat : uint32_t {
		RGBA, RGB, RG, R, SRGB, SRGBA, RGBA16F, RGB16F, RGBA32F, RG32F, Auto, None,
		Depth16, Depth24, Depth32, Depth32F, Depth24_Stencil8, Depth32F_Stencil8, Stencil8
	};
	enum class TextureWrap : uint32_t {
		ClampToEdge, Repeat, ClampToBorder
	};
	enum class TextureFiltering : uint32_t {
		Linear, Nearest
	};
	struct TextureSettings {
		TextureFormat format = TextureFormat::Auto;
		TextureWrap wrap = TextureWrap::Repeat;
		glm::vec2 tiling = { 1.0f,1.0f };
		uint32_t levels = 1;
		glm::vec4 border = glm::vec4(1.0f);
		TextureFiltering filtering = TextureFiltering::Linear;
		bool forceGenMips = false;

		TextureSettings(TextureFormat format = TextureFormat::Auto, TextureWrap wrap = TextureWrap::Repeat,
			const glm::vec2& tiling = { 1.0f,1.0f }, uint32_t levels = 1, glm::vec4 border = glm::vec4(1.0f),
			TextureFiltering filtering = TextureFiltering::Linear)
			:format(format), wrap(wrap), tiling(tiling), levels(levels), border(border), filtering(filtering) {}
	};
	class SDG_API Texture
	{
	public:
		virtual ~Texture() = default;

		virtual void* getHandle() const = 0;
		virtual uint32_t getWidth() const = 0;
		virtual uint32_t getHeight() const = 0;
		virtual std::string getPath() const = 0;
		virtual void getData(void* data, uint32_t size, uint32_t mipLevel = 0) const = 0;
		virtual uint32_t getPixel(uint32_t posX, uint32_t posY, uint32_t mipLevel = 0) const = 0;

		virtual void setData(void* data, uint32_t mipLevel = 0) = 0;
		virtual void setData(void* data, uint32_t offsetX, uint32_t offsetY, uint32_t resizeContentWidth = 1, uint32_t resizeContentHeight = 1, uint32_t mipLevel = 0) = 0;
		virtual void setPixel(uint32_t color, uint32_t x, uint32_t y, uint32_t mipLevel = 0) = 0;
		virtual void setPixel(const glm::vec4& color, uint32_t x, uint32_t y, uint32_t mipLevel = 0) = 0;
		virtual void resize(uint32_t width, uint32_t height, bool copyContent = true) = 0;
		virtual TextureSettings& getSettings() = 0;

		virtual bool operator == (const Texture & other) const = 0;
		
		static Ref<Texture> create(const std::string& path, const TextureSettings& settings = TextureSettings());
		static Ref<Texture> create(uint32_t width, uint32_t height, const TextureSettings& settings = TextureSettings());
	};
}