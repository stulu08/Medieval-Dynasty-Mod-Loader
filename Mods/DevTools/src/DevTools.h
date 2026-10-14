#pragma once
// DevTools: developer mod shipped with MDML, disabled by default (Config/mod.ini). Hosts the SDK generator UI
// (docs/SDK_GENERATOR.md) and, since Wave 3C (plan 2.5), the developer tooling that used to live in BaseMod: object
// browser (ObjectBrowser), INI browser/editor (IniBrowser), dev-build flag swap and player tools (PlayerTools). The
// legacy SDK exporter was removed with the old SDK in Wave 4 step B.
#include "MDML/MDML.h"

#include <atomic>
#include <deque>
#include <filesystem>
#include <mutex>
#include <set>
#include <string>
#include <vector>

#include "ExportList.h"
#include "IniBrowser.h"
#include "ObjectBrowser.h"
#include "PlayerTools.h"

namespace devtools {
	class DevToolsMod : public ::Mod {
	public:
		DevToolsMod(HMODULE Handle);

		void InitializeMod() override;
		bool InitGameState() override;
		bool DrawImGui() override;
		void OnModMenuButtonPressed() override;

		static DevToolsMod* Get() { return s_instance; }

	private:
		enum class EJobState { Idle, Queued, Running, Done, Failed };

		void DrawSdkGenerator();
		void DrawLog();
		void RescanExportLists();
		void StartAnalysis();
		void StartGeneration();
		void AddLog(const std::string& Line, bool bError = false);
		std::vector<std::string> CollectSelectedPackages() const;

		// [Config] SDKOutputDir of DevTools' mod.ini (absolute, or relative to the MDML.dll folder); empty = <MDML dir>/SDK-Out.
		const std::filesystem::path& GetOutputRoot() const { return m_outputRoot; }
		static std::filesystem::path ResolveOutputRoot(const std::string& Configured);
		std::filesystem::path m_outputRoot;

		static inline DevToolsMod* s_instance = nullptr;

		bool m_showWindow = true;

		// tools moved from BaseMod; they log into the window log below
		LogFn m_logFn = [this](const std::string& Line, bool bError) { AddLog(Line, bError); };
		ObjectBrowser m_objectBrowser{ m_logFn };
		IniBrowser m_iniBrowser;
		PlayerTools m_playerTools{ m_logFn };

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
