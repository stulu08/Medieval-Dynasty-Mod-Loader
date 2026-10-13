#include "Application.h"
#include <iostream>
#include "Views/MenuView.h"
#include "Views/HomeView.h"

Application* Application::s_app = nullptr;

Application::Application(void* handel) 
	: m_running(true) {
	s_app = this;

	uint32_t width = GetINIConfig("width", "Window", 1280);
	uint32_t height = GetINIConfig("height", "Window", 800);
	uint32_t x = GetINIConfig("x", "Window", 100);
	uint32_t y = GetINIConfig("y", "Window", 100);
	bool maximized = GetINIConfig("maximized", "Window", false);

	m_renderer = new Renderer();
	if (m_renderer->Initialize((HINSTANCE)handel, USE_CONSOLE, x, y, width, height, maximized) == false) {
		std::cout << "Failed to initialize renderer" << std::endl;
		m_running = false;
	}

	AddView<MenuView>();
	AddView<HomeView>();
}

Application::~Application() {
	for (auto& view : m_views) {
		delete view;
	}

	if (m_renderer) {
		m_renderer->Cleanup();
		delete m_renderer;
	}
}

void Application::Run() {
	while (m_running) {
		if (m_renderer->Update() == false) {
			continue;
		}

		m_renderer->BeginRender();

		ImGuiViewport* viewport = ImGui::GetMainViewport();
		ImGui::SetNextWindowPos(viewport->Pos);
		ImGui::SetNextWindowSize(viewport->Size);
		
		if (ImGui::Begin("##Main", (bool*)0, ImGuiWindowFlags_NoDecoration)) {
			for (auto& view : m_views) {
				if (view->Enabled()) {
					if (ImGui::BeginChild(view->GetName(), view->GetSize(viewport), true)) {
						view->Render();
					}
					ImGui::EndChild();
					ImGui::SameLine();
				}
			}
		}
		ImGui::End();

		m_renderer->EndRender();
	}

	m_running = false;
}

void Application::Stop() {
	m_running = false;
}

Application* Application::Get() {
	return s_app;
}