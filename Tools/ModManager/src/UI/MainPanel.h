#pragma once
#include <Stulu/SDG/Panel.h>
#include <ModManager/Ini.h>

#include "State.h"

namespace mmui {
	// The whole window: one full-viewport panel with a tab per area (Dashboard / Mods / Configs / Log).
	class MainPanel : public SDG::Panel {
	public:
		explicit MainPanel(State& state);

		void PreWindow() override;
		void PostWindow() override;
		void DrawImGui() override;

	private:
		void DrawDashboard();
		void DrawLoaderBox();
		void DrawMods();
		void DrawPendingInstall();
		void DrawConfigs();
		void DrawLog();
		void DrawStatusBar();

		void RescanConfigs();
		void OpenConfig(int index);
		void SaveConfig();

		State& m_state;
		std::string m_gamePathEdit;
		bool m_gamePathInit = false;

		struct ConfigFile {
			mm::fs::path path;
			std::string label;
		};
		std::vector<ConfigFile> m_configs;
		int m_configSelected = -1;
		mm::IniDocument m_doc;
		std::string m_raw;
		bool m_rawMode = false;
		bool m_dirty = false;
		bool m_configsScanned = false;
		std::string m_newKey, m_newValue, m_newSection;
		bool m_logAutoScroll = true;
	};
}
