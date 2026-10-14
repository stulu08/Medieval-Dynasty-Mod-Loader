#include "st_pch.h"
#include "Application.h"

#include <GLFW/glfw3.h>

#define IMGUI_DEFINE_MATH_OPERATORS
#include <imgui.h>
#include <imgui_internal.h>

#include "RenderCommand.h"
#include "Texture.h"
#include "Platform.h"
#include "Style.h"

namespace SDG {
	Application* Application::s_instance = nullptr;

	int stoi(const std::string& str, int def = 0) {
		int re = def;
		try {
			re = std::stoi(str);
		}
		catch (const std::invalid_argument& e) {
			std::cout << e.what() << "\n";
			re = def;
		}
		catch (const std::out_of_range& e) {
			std::cout << e.what() << "\n";
			re = def;
		}
		return re;
	}

	Application::Application(const ApplicationInfo& appInfo)
		: m_appInfo(appInfo) {
		s_instance = this;
		if (m_appInfo.loadWindowPosSizeFromConfig) {
			m_appInfo.pos.x = stoi(Platform::getConfigString("Window_Pos_X", "SDG", std::to_string(getPos().x), ST_CONFIG_FILE_NAME("WindowConfig.ini")), getPos().x);
			m_appInfo.pos.y = stoi(Platform::getConfigString("Window_Pos_Y", "SDG", std::to_string(getPos().y), ST_CONFIG_FILE_NAME("WindowConfig.ini")), getPos().y);
			m_appInfo.width = stoi(Platform::getConfigString("Window_Width", "SDG", std::to_string(getWidth()), ST_CONFIG_FILE_NAME("WindowConfig.ini")), getWidth());
			m_appInfo.height = stoi(Platform::getConfigString("Window_Height", "SDG", std::to_string(getHeight()), ST_CONFIG_FILE_NAME("WindowConfig.ini")), getHeight());
			m_appInfo.maximized = (bool)stoi(Platform::getConfigString("Window_Maximized", "SDG", std::to_string(m_appInfo.maximized), ST_CONFIG_FILE_NAME("WindowConfig.ini")), m_appInfo.maximized);
		}
		initglfw();
		RenderCommand::init();

		IMGUI_CHECKVERSION();
		m_context = ImGui::CreateContext();
		ImGuiIO& io = ImGui::GetIO(); (void)io;
		io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;       // Enable Keyboard Controls
		io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;      // Enable Gamepad Controls
		io.ConfigFlags |= ImGuiConfigFlags_DockingEnable;           // Enable Docking
		io.ConfigFlags |= ImGuiConfigFlags_ViewportsEnable;         // Enable Multi-Viewport / Platform Windows
		//io.ConfigFlags |= ImGuiConfigFlags_ViewportsNoTaskBarIcons;
		//io.ConfigFlags |= ImGuiConfigFlags_ViewportsNoMerge;

		Style::LoadAll(m_appInfo.fontFile, m_appInfo.iconFile);

		Application& app = Application::get();

		RenderCommand::imgui_init(m_window);
	}
	Application::~Application() {
		for (auto& [hash, panel] : m_panels) {
			if (panel) {
				Platform::setConfigString(panel->GetID() + "_open", std::to_string((int)panel->IsOpen()), "SDG_Panels");
				delete panel;
			}
		}
		
		for (auto& layer : m_layerStack)
			popLayer(layer);

		RenderCommand::imgui_shutdown();
		ImGui::DestroyContext(m_context);
		if (m_appInfo.loadWindowPosSizeFromConfig) {
			glm::uvec2 pos = getPos();
			Platform::setConfigString("Window_Pos_X", std::to_string(pos.x), "SDG", ST_CONFIG_FILE_NAME("WindowConfig.ini"));
			Platform::setConfigString("Window_Pos_Y", std::to_string(pos.y), "SDG", ST_CONFIG_FILE_NAME("WindowConfig.ini"));
			Platform::setConfigString("Window_Width", std::to_string(getWidth()), "SDG", ST_CONFIG_FILE_NAME("WindowConfig.ini"));
			Platform::setConfigString("Window_Height", std::to_string(getHeight()), "SDG", ST_CONFIG_FILE_NAME("WindowConfig.ini"));
			Platform::setConfigString("Window_Maximized", std::to_string(m_appInfo.maximized), "SDG", ST_CONFIG_FILE_NAME("WindowConfig.ini"));
		}
		glfwDestroyWindow(m_window);
		glfwTerminate();

		m_runnig = false;
		m_context = nullptr;
		m_window = nullptr;
		s_instance = nullptr;
	}

	void Application::popLayer(Ref<Layer> layer) {
		layer->onDetach();
		m_layerStack.erase(std::find(m_layerStack.begin(), m_layerStack.end(), layer));
	}

	void Application::LoadPanelConfig(Panel* panel) {
		if (!panel) return;

		bool default = panel->IsOpen();
		std::string value = Platform::getConfigString(panel->GetID() + "_open", "SDG_Panels", std::to_string((int)panel->IsOpen()));
		panel->SetOpen(stoi(value, (int)default) != 0);
	}

	void Application::setWindowPos(const glm::uvec2& pos) {
		glfwSetWindowPos(m_window, pos.x, pos.y);
		m_appInfo.pos = pos;
	}

	void Application::setWindowSize(const glm::uvec2& size) {
		glfwSetWindowSize(m_window, size.x, size.y);
		m_appInfo.width = size.x;
		m_appInfo.height = size.y;
	}



	void Application::run() {

		m_runnig = true;
		while (m_runnig) {
			if (!m_minimized && m_window) {

				m_frameTime = (float)glfwGetTime() - m_lastFrame;
				m_lastFrame = (float)glfwGetTime();

				RenderCommand::clear();
				glfwPollEvents();
				if (m_context) {
					RenderCommand::imgui_newFrame();
					ImGui::NewFrame();
					ImGui::DockSpaceOverViewport();
				}
				

				for (Ref<Layer> layer : m_layerStack) {
					layer->onRender();
					CallPanels<&Panel::InvokeImGui>();
				}

				if (m_context) {
					ImGuiIO& io = ImGui::GetIO();
					Application& app = Application::get();
					io.DisplaySize = ImVec2((float)getWidth(), (float)getHeight());
					// Rendering
					ImGui::Render();
					RenderCommand::imgui_render();
					if (io.ConfigFlags & ImGuiConfigFlags_ViewportsEnable)
					{
						GLFWwindow* backup_current_context = glfwGetCurrentContext();
						ImGui::UpdatePlatformWindows();
						ImGui::RenderPlatformWindowsDefault();
						glfwMakeContextCurrent(backup_current_context);
					}
				}
				

				m_graphicsContext->swapBuffers();
			}
		}
	}


	static bool s_glfwInitilized = false;
	void Application::initglfw() {
		if (!s_glfwInitilized) {
			int32_t succes = glfwInit();
			s_glfwInitilized = true;
		}
#ifdef SDG_DEBUG
			glfwWindowHint(GLFW_OPENGL_DEBUG_CONTEXT, GLFW_TRUE);
#endif
#if SDG_USE_VULKAN
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
#endif

		m_graphicsContext = GraphicsContext::create(m_window);
		m_window = glfwCreateWindow((int)m_appInfo.width, (int)m_appInfo.height, m_appInfo.title.c_str(), nullptr, nullptr);
		m_graphicsContext->init(m_window);
		glfwSetWindowSizeCallback(m_window, [](GLFWwindow* window, int width, int height) {
				RenderCommand::setViewport(0, 0, width, height);
				Application::get().getApplicationInfo().width = (uint32_t)width;
				Application::get().getApplicationInfo().height = (uint32_t)height;
			});
		glfwSetWindowPosCallback(m_window, [](GLFWwindow* window, int posX, int posY) {
			Application::get().getApplicationInfo().pos.x = (uint32_t)posX;
			Application::get().getApplicationInfo().pos.y = (uint32_t)posY;
			});
		glfwSetWindowCloseCallback(m_window, [](GLFWwindow* window) {
				Application::get().shutdown();
			});
		glfwSetWindowMaximizeCallback(m_window, [](GLFWwindow* window, int value) {
			if (value == GLFW_TRUE) {
				Application::get().getApplicationInfo().maximized = true;
			}
			else if (value == GLFW_FALSE) {
				Application::get().getApplicationInfo().maximized = false;
			}
			else {
				Application::get().getApplicationInfo().maximized = false;
			}
		});
		glfwSwapInterval(m_appInfo.VSync); //enable vsync
		setWindowPos(m_appInfo.pos);
		setWindowSize(glm::uvec2(m_appInfo.width, m_appInfo.height));
		if (m_appInfo.maximized)
			glfwMaximizeWindow(m_window);
	}
	void Application::shutdown() {
		m_runnig = false;
	}
	uint32_t Application::getWidth() {
		return m_appInfo.width;
	}
	uint32_t Application::getHeight() {
		return m_appInfo.height;
	}
	glm::uvec2 Application::getPos() {
		return m_appInfo.pos;
	}
}

ImVec2 operator+(const ImVec2& vec, const float v) {
	return ImVec2(vec.x + v, vec.y + v);
}
ImVec2 operator-(const ImVec2& vec, const float v) {
	return ImVec2(vec.x - v, vec.y - v);
}
ImVec2 operator*(const ImVec2& vec, const glm::vec2& vec2) {
	return ImVec2(vec.x * vec2.x, vec.y * vec2.y);
}
ImVec2 operator/(const ImVec2& vec, const glm::vec2& vec2) {
	return ImVec2(vec.x / vec2.x, vec.y / vec2.y);
}
ImVec2 operator+(const ImVec2& vec, const glm::vec2& vec2) {
	return ImVec2(vec.x + vec2.x, vec.y + vec2.y);
}
ImVec2 operator-(const ImVec2& vec, const glm::vec2& vec2) {
	return ImVec2(vec.x - vec2.x, vec.y - vec2.y);
}

void ImGui::Image(const SDG::Ref<SDG::Texture> texture, const ImVec2& size, const ImVec2& uv0, const ImVec2& uv1, const ImVec4& tint_col, const ImVec4& border_col) {
	ImGui::Image(StuluTextureToImGui(texture), size, uv0, uv1, tint_col, border_col);
}

void ImGui::Image(const SDG::Ref<SDG::Texture> texture, const glm::vec2& size, const glm::vec2& uv0, const glm::vec2& uv1, const glm::vec4& tint_col, const glm::vec4& border_col) {
	ImGui::Image(StuluTextureToImGui(texture), { size.x,  size.y }, { uv0.x,  uv0.y }, { uv1.x,  uv1.y }, { tint_col.x, tint_col.y, tint_col.z, tint_col.w }, { border_col.x, border_col.y, border_col.z, border_col.w });
}

bool ImGui::ImageButton(const std::string& id, const SDG::Ref<SDG::Texture> texture, const ImVec2& size, const ImVec2& uv0, const ImVec2& uv1, const ImVec4& bg_col, const ImVec4& tint_col) {
	return ImGui::ImageButton(id.c_str(), StuluTextureToImGui(texture), size, uv0, uv1, bg_col, tint_col);
}

bool ImGui::ImageButton(const std::string& id, const SDG::Ref<SDG::Texture> texture, const glm::vec2& size, const glm::vec2& uv0, const glm::vec2& uv1, const glm::vec4& bg_col, const glm::vec4& tint_col) {
	return ImGui::ImageButton(id.c_str(), StuluTextureToImGui(texture), { size.x,  size.y }, { uv0.x,  uv0.y }, { uv1.x,  uv1.y }, { bg_col.x, bg_col.y, bg_col.z, bg_col.w }, { tint_col.x, tint_col.y, tint_col.z, tint_col.w });
}

ImTextureID ImGui::StuluTextureToImGui(const SDG::Ref<SDG::Texture> texture) {
	ImTextureID id = 0;
#if SDG_USE_OPENGL
	id = (ImTextureID)reinterpret_cast<void*>((uint64_t)(*(uint32_t*)texture->getHandle()));
#endif
	return id;

	return id;
}


void ImGui::StyleColorsAmoledDark(ImGuiStyle* dst) {
	ImGuiStyle* style = dst ? dst : &ImGui::GetStyle();
	ImVec4* colors = style->Colors;

	colors[ImGuiCol_Text] = ImVec4(1.0f, 1.0f, 1.0f, 1.00f);
	colors[ImGuiCol_TextDisabled] = ImVec4(0.35f, 0.35f, 0.35f, 1.00f);
	colors[ImGuiCol_WindowBg] = ImVec4(0.0f, 0.0f, 0.0f, 1.00f);
	colors[ImGuiCol_ChildBg] = ImVec4(0.025f, 0.025f, 0.025f, 1.00f);
	colors[ImGuiCol_PopupBg] = ImVec4(0.005f, 0.005f, 0.005f, 0.84f);
	colors[ImGuiCol_Border] = ImVec4(0.015f, 0.015f, 0.015f, 1.00f);
	colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
	colors[ImGuiCol_FrameBg] = ImVec4(0.04f, 0.04f, 0.04f, 1.00f);
	colors[ImGuiCol_FrameBgHovered] = ImVec4(0.06f, 0.06f, 0.06f, 1.00f);
	colors[ImGuiCol_FrameBgActive] = ImVec4(0.075f, 0.075f, 0.075f, 1.00f);
	colors[ImGuiCol_TitleBg] = ImVec4(0.04f, 0.04f, 0.04f, 1.00f);
	colors[ImGuiCol_TitleBgActive] = ImVec4(0.04f, 0.04f, 0.04f, 1.00f);
	colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.00f, 0.00f, 0.00f, 0.51f);
	colors[ImGuiCol_MenuBarBg] = ImVec4(0.04f, 0.04f, 0.04f, 1.00f);
	colors[ImGuiCol_ScrollbarBg] = ImVec4(0.02f, 0.02f, 0.02f, 0.39f);
	colors[ImGuiCol_ScrollbarGrab] = ImVec4(1.0f, 1.0f, 1.0f, 1.00f);
	colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.85f, 0.85f, 0.85f, 1.00f);
	colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.75f, 0.75f, 0.75f, 1.00f);
	colors[ImGuiCol_CheckMark] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
	colors[ImGuiCol_SliderGrab] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
	colors[ImGuiCol_SliderGrabActive] = ImVec4(0.75f, 0.75f, 0.75f, 1.00f);
	colors[ImGuiCol_Button] = ImVec4(0.06f, 0.06f, 0.06f, 1.00f);
	colors[ImGuiCol_ButtonHovered] = ImVec4(0.08f, 0.08f, 0.08f, 1.00f);
	colors[ImGuiCol_ButtonActive] = ImVec4(0.1f, 0.1f, 0.1f, 1.00f);
	colors[ImGuiCol_ResizeGrip] = ImVec4(1.0f, 1.0f, 1.0f, 0.8f);
	colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.85f, 0.85f, 0.85f, 1.0f);
	colors[ImGuiCol_ResizeGripActive] = ImVec4(0.75f, 0.75f, 0.75f, 0.95f);
	colors[ImGuiCol_Header] = ImVec4(0.06f, 0.06f, 0.06f, 0.55f);
	colors[ImGuiCol_HeaderHovered] = ImVec4(0.075f, 0.075f, 0.075f, 0.80f);
	colors[ImGuiCol_HeaderActive] = ImVec4(0.08f, 0.08f, 0.08f, 1.00f);
	colors[ImGuiCol_Separator] = ImVec4(0.1f, 0.1f, 0.1f, 1.00f);
	colors[ImGuiCol_SeparatorHovered] = ImVec4(0.8f, 0.8f, 0.8f, 0.78f);
	colors[ImGuiCol_SeparatorActive] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
	colors[ImGuiCol_Tab] = ImVec4(0.04f, 0.04f, 0.04f, 1.00f);
	colors[ImGuiCol_TabHovered] = ImVec4(0.06f, 0.06f, 0.06f, 1.0f);
	colors[ImGuiCol_TabActive] = ImVec4(0.075f, 0.075f, 0.075f, 1.00f);
	colors[ImGuiCol_TabUnfocused] = ImVec4(0.075f, 0.075f, 0.075f, 1.00f);
	colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.075f, 0.075f, 0.075f, 1.00f);
	colors[ImGuiCol_DragDropTarget] = ImVec4(1.00f, 1.00f, 1.00f, 0.90f);
	colors[ImGuiCol_PlotLines] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
	colors[ImGuiCol_PlotLinesHovered] = ImVec4(0.85f, 0.85f, 0.85f, 1.00f);
	colors[ImGuiCol_PlotHistogram] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
	colors[ImGuiCol_PlotHistogramHovered] = ImVec4(0.85f, 0.85f, 0.85f, 1.00f);
	colors[ImGuiCol_TextSelectedBg] = ImVec4(0.95f, 0.95f, 0.95f, 0.35f);
	colors[ImGuiCol_NavHighlight] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
	colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
	colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
	colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.35f);
	colors[ImGuiCol_DockingPreview] = ImVec4(1.00f, 1.00f, 1.00f, 0.7f);
}
void ImGui::StyleColorsOceanDark(ImGuiStyle* dst)
{
	ImGuiStyle* style = dst ? dst : &ImGui::GetStyle();
	ImVec4* colors = style->Colors;

	colors[ImGuiCol_Text] = ImVec4(0.95f, 0.96f, 0.98f, 1.00f);
	colors[ImGuiCol_TextDisabled] = ImVec4(0.36f, 0.42f, 0.47f, 1.00f);
	colors[ImGuiCol_WindowBg] = ImVec4(0.11f, 0.15f, 0.17f, 1.00f);
	colors[ImGuiCol_ChildBg] = ImVec4(0.15f, 0.18f, 0.22f, 1.00f);
	colors[ImGuiCol_PopupBg] = ImVec4(0.08f, 0.08f, 0.08f, 0.94f);
	colors[ImGuiCol_Border] = ImVec4(0.08f, 0.10f, 0.12f, 1.00f);
	colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
	colors[ImGuiCol_FrameBg] = ImVec4(0.20f, 0.25f, 0.29f, 1.00f);
	colors[ImGuiCol_FrameBgHovered] = ImVec4(0.12f, 0.20f, 0.28f, 1.00f);
	colors[ImGuiCol_FrameBgActive] = ImVec4(0.09f, 0.12f, 0.14f, 1.00f);
	colors[ImGuiCol_TitleBg] = ImVec4(0.09f, 0.12f, 0.14f, 0.65f);
	colors[ImGuiCol_TitleBgActive] = ImVec4(0.08f, 0.10f, 0.12f, 1.00f);
	colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.00f, 0.00f, 0.00f, 0.51f);
	colors[ImGuiCol_MenuBarBg] = ImVec4(0.15f, 0.18f, 0.22f, 1.00f);
	colors[ImGuiCol_ScrollbarBg] = ImVec4(0.02f, 0.02f, 0.02f, 0.39f);
	colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.20f, 0.25f, 0.29f, 1.00f);
	colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.18f, 0.22f, 0.25f, 1.00f);
	colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.09f, 0.21f, 0.31f, 1.00f);
	colors[ImGuiCol_CheckMark] = ImVec4(0.28f, 0.56f, 1.00f, 1.00f);
	colors[ImGuiCol_SliderGrab] = ImVec4(0.28f, 0.56f, 1.00f, 1.00f);
	colors[ImGuiCol_SliderGrabActive] = ImVec4(0.37f, 0.61f, 1.00f, 1.00f);
	colors[ImGuiCol_Button] = ImVec4(0.20f, 0.25f, 0.29f, 1.00f);
	colors[ImGuiCol_ButtonHovered] = ImVec4(0.28f, 0.56f, 1.00f, 1.00f);
	colors[ImGuiCol_ButtonActive] = ImVec4(0.06f, 0.53f, 0.98f, 1.00f);
	colors[ImGuiCol_Header] = ImVec4(0.20f, 0.25f, 0.29f, 0.55f);
	colors[ImGuiCol_HeaderHovered] = ImVec4(0.26f, 0.59f, 0.98f, 0.80f);
	colors[ImGuiCol_HeaderActive] = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
	colors[ImGuiCol_Separator] = ImVec4(0.20f, 0.25f, 0.29f, 1.00f);
	colors[ImGuiCol_SeparatorHovered] = ImVec4(0.10f, 0.40f, 0.75f, 0.78f);
	colors[ImGuiCol_SeparatorActive] = ImVec4(0.10f, 0.40f, 0.75f, 1.00f);
	colors[ImGuiCol_ResizeGrip] = ImVec4(0.26f, 0.59f, 0.98f, 0.25f);
	colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.26f, 0.59f, 0.98f, 0.67f);
	colors[ImGuiCol_ResizeGripActive] = ImVec4(0.26f, 0.59f, 0.98f, 0.95f);
	colors[ImGuiCol_Tab] = ImVec4(0.11f, 0.15f, 0.17f, 1.00f);
	colors[ImGuiCol_TabHovered] = ImVec4(0.26f, 0.59f, 0.98f, 0.80f);
	colors[ImGuiCol_TabActive] = ImVec4(0.20f, 0.25f, 0.29f, 1.00f);
	colors[ImGuiCol_TabUnfocused] = ImVec4(0.11f, 0.15f, 0.17f, 1.00f);
	colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.11f, 0.15f, 0.17f, 1.00f);
	colors[ImGuiCol_PlotLines] = ImVec4(0.61f, 0.61f, 0.61f, 1.00f);
	colors[ImGuiCol_PlotLinesHovered] = ImVec4(1.00f, 0.43f, 0.35f, 1.00f);
	colors[ImGuiCol_PlotHistogram] = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
	colors[ImGuiCol_PlotHistogramHovered] = ImVec4(1.00f, 0.60f, 0.00f, 1.00f);
	colors[ImGuiCol_TextSelectedBg] = ImVec4(0.26f, 0.59f, 0.98f, 0.35f);
	colors[ImGuiCol_DragDropTarget] = ImVec4(1.00f, 1.00f, 0.00f, 0.90f);
	colors[ImGuiCol_NavHighlight] = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
	colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
	colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
	colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.35f);
}
void ImGui::StyleColorsGrayDark(ImGuiStyle* dst)
{
	ImGuiStyle* style = dst ? dst : &ImGui::GetStyle();
	ImVec4* colors = style->Colors;

	colors[ImGuiCol_Text] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
	colors[ImGuiCol_TextDisabled] = ImVec4(0.50f, 0.50f, 0.50f, 1.00f);
	colors[ImGuiCol_WindowBg] = ImVec4{ 0.1f, 0.105f, 0.11f, 1.0f };
	colors[ImGuiCol_ChildBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
	colors[ImGuiCol_PopupBg] = ImVec4(0.08f, 0.08f, 0.08f, 0.94f);
	colors[ImGuiCol_Border] = ImVec4(0.43f, 0.43f, 0.50f, 0.50f);
	colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
	colors[ImGuiCol_FrameBg] = ImVec4{ 0.2f, 0.205f, 0.21f, 1.0f };
	colors[ImGuiCol_FrameBgHovered] = ImVec4{ 0.3f, 0.305f, 0.31f, 1.0f };
	colors[ImGuiCol_FrameBgActive] = ImVec4{ 0.15f, 0.1505f, 0.151f, 1.0f };
	colors[ImGuiCol_TitleBg] = ImVec4{ 0.15f, 0.1505f, 0.151f, 1.0f };
	colors[ImGuiCol_TitleBgActive] = ImVec4{ 0.15f, 0.1505f, 0.151f, 1.0f };
	colors[ImGuiCol_TitleBgCollapsed] = ImVec4{ 0.15f, 0.1505f, 0.151f, 1.0f };
	colors[ImGuiCol_MenuBarBg] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
	colors[ImGuiCol_ScrollbarBg] = ImVec4(0.02f, 0.02f, 0.02f, 0.53f);
	colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.31f, 0.31f, 0.31f, 1.00f);
	colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.41f, 0.41f, 0.41f, 1.00f);
	colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.51f, 0.51f, 0.51f, 1.00f);
	colors[ImGuiCol_CheckMark] = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
	colors[ImGuiCol_SliderGrab] = ImVec4(0.24f, 0.52f, 0.88f, 1.00f);
	colors[ImGuiCol_SliderGrabActive] = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
	colors[ImGuiCol_Button] = ImVec4{ 0.2f, 0.205f, 0.21f, 1.0f };
	colors[ImGuiCol_ButtonHovered] = ImVec4{ 0.3f, 0.305f, 0.31f, 1.0f };
	colors[ImGuiCol_ButtonActive] = ImVec4{ 0.15f, 0.1505f, 0.151f, 1.0f };
	colors[ImGuiCol_Header] = ImVec4{ 0.2f, 0.205f, 0.21f, 1.0f };
	colors[ImGuiCol_HeaderHovered] = ImVec4{ 0.3f, 0.305f, 0.31f, 1.0f };
	colors[ImGuiCol_HeaderActive] = ImVec4{ 0.15f, 0.1505f, 0.151f, 1.0f };
	colors[ImGuiCol_Separator] = colors[ImGuiCol_Border];
	colors[ImGuiCol_SeparatorHovered] = ImVec4(0.10f, 0.40f, 0.75f, 0.78f);
	colors[ImGuiCol_SeparatorActive] = ImVec4(0.10f, 0.40f, 0.75f, 1.00f);
	colors[ImGuiCol_ResizeGrip] = ImVec4(0.26f, 0.59f, 0.98f, 0.25f);
	colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.26f, 0.59f, 0.98f, 0.67f);
	colors[ImGuiCol_ResizeGripActive] = ImVec4(0.26f, 0.59f, 0.98f, 0.95f);
	colors[ImGuiCol_Tab] = ImVec4{ 0.15f, 0.1505f, 0.151f, 1.0f };
	colors[ImGuiCol_TabHovered] = ImVec4{ 0.38f, 0.3805f, 0.381f, 1.0f };
	colors[ImGuiCol_TabActive] = ImVec4{ 0.28f, 0.2805f, 0.281f, 1.0f };
	colors[ImGuiCol_TabUnfocused] = ImVec4{ 0.15f, 0.1505f, 0.151f, 1.0f };
	colors[ImGuiCol_TabUnfocusedActive] = ImVec4{ 0.2f, 0.205f, 0.21f, 1.0f };
	colors[ImGuiCol_DockingPreview] = ImVec4{ 0.15f, 0.1505f, 0.151f, 0.7f };
	colors[ImGuiCol_DockingEmptyBg] = ImVec4(0.20f, 0.20f, 0.20f, 1.00f);
	colors[ImGuiCol_PlotLines] = ImVec4(0.61f, 0.61f, 0.61f, 1.00f);
	colors[ImGuiCol_PlotLinesHovered] = ImVec4(1.00f, 0.43f, 0.35f, 1.00f);
	colors[ImGuiCol_PlotHistogram] = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
	colors[ImGuiCol_PlotHistogramHovered] = ImVec4(1.00f, 0.60f, 0.00f, 1.00f);
	colors[ImGuiCol_TextSelectedBg] = ImVec4(0.26f, 0.59f, 0.98f, 0.35f);
	colors[ImGuiCol_DragDropTarget] = ImVec4(1.00f, 1.00f, 0.00f, 0.90f);
	colors[ImGuiCol_NavHighlight] = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
	colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
	colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
	colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.35f);
}

void ImGui::HelpMarker(const char* text) {
	ImGui::TextDisabled("(?)");
	if (ImGui::IsItemHovered())
	{
		ImGui::BeginTooltip();
		ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
		ImGui::TextUnformatted(text);
		ImGui::PopTextWrapPos();
		ImGui::EndTooltip();
	}
}

void ImGui::Dummy(const ImVec2& size, const char* str_id) {
	ImGuiWindow* window = ImGui::GetCurrentWindow();
	if (window->SkipItems)
		return;

	const ImRect bb(window->DC.CursorPos, window->DC.CursorPos + size);
	ImGui::ItemSize(size);
	ImGui::ItemAdd(bb, window->GetID(str_id));
}