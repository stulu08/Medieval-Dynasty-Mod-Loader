#pragma once
#include "Layer.h"
#include "GraphicsContext.h"
#include "Panel.h"
#ifndef IMGUI_DEFINE_MATH_OPERATORS // also set on the SDG project command line (SDG/premake5.lua)
#define IMGUI_DEFINE_MATH_OPERATORS
#endif
#include <imgui.h>
#include <imgui_internal.h>
#include <imgui_stdlib.h>
#include <unordered_map>

namespace SDG {
	class SDG_API Texture;
	struct ApplicationInfo {
		std::string title = "App Title";
		uint32_t width = 1280, height = 720;
		glm::uvec2 pos = glm::uvec2(25, 25);
		bool VSync = true, maximized = false;
		bool loadWindowPosSizeFromConfig = true;
		// false: no WindowConfig.ini, ImGui does not persist the window/dock layout
		bool saveImGuiLayout = true;
		std::string iconFile = "";
		std::string fontFile = "";
	};
	class SDG_API Application {
	public:
		Application(const ApplicationInfo& info);
		virtual ~Application();

		void run();
		
		void setWindowPos(const glm::uvec2& pos);
		void setWindowSize(const glm::uvec2& size);

		void shutdown();

		uint32_t getWidth();
		uint32_t getHeight();
		glm::uvec2 getPos();
		void* getNativeWindow() { return m_window; }

		inline const float getFrameTime() const { return m_frameTime; }
		inline const ApplicationInfo& getApplicationInfo() const { return m_appInfo; }
		inline ApplicationInfo& getApplicationInfo() { return m_appInfo; }
		inline static Application& get(){ return *s_instance; }
	private:
		bool m_runnig = false;
		bool m_minimized = false;
		float m_frameTime = .0f, m_lastFrame = .0f;
		std::unordered_map<size_t, Panel*> m_panels;
		ApplicationInfo m_appInfo;
		GLFWwindow* m_window;
		ImGuiContext* m_context;
		Scope<GraphicsContext> m_graphicsContext;
		std::vector<Ref<Layer>> m_layerStack;

		void initglfw();
		
		static Application* s_instance;

	public:
		void pushLayer(Ref<Layer> layer) {
			layer->onAttach();
			m_layerStack.push_back(layer);
		}
		template<typename T>
		void pushLayer()
		{
			static_assert(std::is_base_of<Layer, T>::value, "Pushed type is not subclass of Layer!");
			pushLayer(createRef<T>());
		}
		void popLayer(Ref<Layer> layer);

		template<class T, class ...Args>
		inline void AddPanel(Args&& ...args) {
			T* panel = new T(std::forward<Args>(args)...);
			m_panels.insert({ typeid(T).hash_code(), panel });
			LoadPanelConfig(static_cast<Panel*>(panel));
		}
		template<class T>
		inline T& GetPanel() {
			for (auto& [hash, panel] : m_panels) {
				if (hash == typeid(T).hash_code()) {
					return *dynamic_cast<T*>(panel);
				}
			}
			ST_ASSERT(false, "Error panel not found");
			return *reinterpret_cast<T*>(nullptr);
		}
		template<auto Method, class ...Args>
		inline void CallPanels(Args&& ... args) {
			for (auto& [hash, panel] : m_panels) {
				if (panel) {
					std::invoke(Method, panel, std::forward<Args>(args)...);
				}
			}
		}

		void LoadPanelConfig(Panel* panel);

	};

	//defined in Client
	Application* CreateApplication();
}

SDG_API ImVec2 operator +(const ImVec2& vec, const float v);
SDG_API ImVec2 operator -(const ImVec2& vec, const float v);
SDG_API ImVec2 operator *(const ImVec2& vec, const glm::vec2& vec2);
SDG_API ImVec2 operator /(const ImVec2& vec, const glm::vec2& vec2);
SDG_API ImVec2 operator +(const ImVec2& vec, const glm::vec2& vec2);
SDG_API ImVec2 operator -(const ImVec2& vec, const glm::vec2& vec2);
namespace ImGui {
	SDG_API void Image(const SDG::Ref<SDG::Texture> texture, const ImVec2& size, const ImVec2& uv0, const ImVec2& uv1, const ImVec4& tint_col, const ImVec4& border_col);
	SDG_API void Image(const SDG::Ref<SDG::Texture> texture, const glm::vec2& size, const glm::vec2& uv0 = { 0,0 }, const glm::vec2& uv1 = { 1,1 }, const glm::vec4& tint_col = { 1,1,1,1 }, const glm::vec4& border_col = { 0,0,0,0 });

	SDG_API bool ImageButton(const std::string& id, const SDG::Ref<SDG::Texture> texture, const ImVec2& size, const ImVec2& uv0, const ImVec2& uv1, const ImVec4& bg_col, const ImVec4& tint_col);
	SDG_API bool ImageButton(const std::string& id, const SDG::Ref<SDG::Texture> texture, const glm::vec2& size, const glm::vec2& uv0 = glm::vec2(0, 0), const glm::vec2& uv1 = glm::vec2(1, 1), const glm::vec4& bg_col = glm::vec4(0, 0, 0, 0), const glm::vec4& tint_col = glm::vec4(1, 1, 1, 1));

	SDG_API ImTextureID StuluTextureToImGui(const SDG::Ref<SDG::Texture> texture);

	SDG_API void StyleColorsOceanDark(ImGuiStyle* dst = NULL);
	SDG_API void StyleColorsAmoledDark(ImGuiStyle* dst = NULL);
	SDG_API void StyleColorsGrayDark(ImGuiStyle* dst = NULL);

	SDG_API void HelpMarker(const char* text);

	SDG_API void Dummy(const ImVec2& size, const char* id);
}