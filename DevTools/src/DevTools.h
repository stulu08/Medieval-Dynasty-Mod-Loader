#pragma once
// DevTools: developer mod shipped with MDML, disabled by default (Config/mod.ini). Part 1 hosts the SDK generator UI
// (docs/SDK_GENERATOR.md). Later: object browser, exporter replacement, cheats (plan 2.5).
#include "Mod/Mod.h"

#include <atomic>
#include <deque>
#include <filesystem>
#include <mutex>
#include <set>
#include <string>
#include <vector>

#include "ExportList.h"

namespace devtools {
	class DevToolsMod : public ::Mod {
	public:
		DevToolsMod(HMODULE Handle);

		void InitializeMod() override;
		bool DrawImGui() override;
		void OnModMenuButtonPressed() override;

		static DevToolsMod* Get() { return s_instance; }

	private:
		enum class EJobState { Idle, Queued, Running, Done, Failed };

		void DrawSdkGenerator();
		void RescanExportLists();
		void StartAnalysis();
		void StartGeneration();
		void AddLog(const std::string& Line, bool bError = false);
		std::vector<std::string> CollectSelectedPackages() const;

		static std::filesystem::path GetOutputRoot();

		static inline DevToolsMod* s_instance = nullptr;

		bool m_showWindow = true;

		// UI state (render thread only)
		std::vector<ExportList> m_exportLists;
		std::vector<bool> m_exportListSelected;
		std::string m_extraPackages;
		std::string m_packageFilter;
		std::set<std::string> m_pickedPackages;
		bool m_allPackages = false;
		std::string m_saveListName = "Selection";

		// shared with the game-thread job
		std::atomic<EJobState> m_jobState{ EJobState::Idle };
		mutable std::mutex m_mutex;
		std::deque<std::pair<bool, std::string>> m_log; // (bError, line)
		std::vector<std::string> m_packageNames;       // from the analysis
		std::string m_lastResult;
	};
}
