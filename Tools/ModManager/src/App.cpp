#include <Stulu/SDG/SDG.h>
#include <Stulu/SDG/EntryPoint.h>

#include <GLFW/glfw3.h>
#include <Windows.h>

#include "UI/MainPanel.h"
#include "UI/State.h"

namespace {
	// Owns the state, wires drag&drop and registers the one panel.
	class ManagerLayer : public SDG::Layer {
	public:
		void onAttach() override {
			s_state = &m_state;
			SDG::Application& app = SDG::Application::get();
			app.AddPanel<mmui::MainPanel>(m_state);
			glfwSetDropCallback((GLFWwindow*)app.getNativeWindow(), [](GLFWwindow*, int count, const char** paths) {
				if (!s_state) return;
				// a single drop at a time; the confirm dialog lists what was found
				if (count > 0) s_state->RequestModInstall(mm::PathFromUtf8(paths[0]));
			});
		}
		void onDetach() override { s_state = nullptr; }

	private:
		mmui::State m_state;
		static inline mmui::State* s_state = nullptr;
	};
}

SDG::Application* SDG::CreateApplication() {
	// fonts and SDG's ini files are relative to the exe, whatever the working directory was
	wchar_t exe[MAX_PATH];
	GetModuleFileNameW(nullptr, exe, MAX_PATH);
	SetCurrentDirectoryW(std::filesystem::path(exe).parent_path().wstring().c_str());

	SDG::ApplicationInfo info;
	info.title = "MDML Mod Manager";
	info.width = 1100;
	info.height = 700;
	info.VSync = true;
	// no WindowConfig.ini: the manager is one fixed full-window panel, nothing to persist
	info.loadWindowPosSizeFromConfig = false;
	info.saveImGuiLayout = false;
	info.fontFile = "Resources/SDGFont.ttf";
	info.iconFile = "Resources/SDGIcons.ttf";

	SDG::Application* app = new SDG::Application(info);
	app->pushLayer<ManagerLayer>();
	return app;
}
