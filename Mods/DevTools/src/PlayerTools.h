#pragma once
// Cheats / player tools, moved from BaseMod (BaseMod.cpp: dev-build flag swap, "Hooks", "Player Character", "Debug"
// panels) in Wave 3C. The stale item tools (give item, inventory list) are NOT active, see ItemTools.cpp.
//
// Threading: Init/OnGameState run on the game thread. Draw() runs on the render thread and only enqueues work
// (mdml::runtime::GameThread::Enqueue) or reads results the game thread stored under m_mutex.
#include "ObjectBrowser.h"

#include "Platform/IniFile.h"

#include <mutex>
#include <string>
#include <vector>

namespace devtools {
	class PlayerTools {
	public:
		explicit PlayerTools(LogFn log) : m_log(std::move(log)) {}

		// Reads the [Config] keys of DevTools' mod.ini (DevBuildFlags, EnableCheatsMenu) and queues the dev-build flag
		// swap for the game thread. Call from InitializeMod.
		void Init(const mdml::platform::IniFile& ini);
		// Game thread, InitGameState event: resolves the player character, warns about EnableCheatsMenu.
		void OnGameState();
		// Render thread.
		void Draw();

	private:
		void SwapBuildFlags();   // game thread
		void QueryBuildFlags();  // game thread
		void RefreshPlayer();    // game thread

		LogFn m_log;
		bool m_swapBuildFlags = true;
		bool m_enableCheatsMenu = false;

		// results of game-thread work, read by the UI
		std::mutex m_mutex;
		bool m_swapped = false;
		UE4::UFunction* m_isDevelopmentBuild = nullptr;
		UE4::UFunction* m_isShippingBuild = nullptr;
		int m_isDev = -1, m_isShip = -1; // -1 unknown, 0 false, 1 true
		UE4::AActor* m_player = nullptr;
		std::vector<std::pair<std::string, std::string>> m_components; // (name, full name)
		std::vector<std::pair<std::string, int>> m_itemRows;           // (row name, FName index)
		bool m_itemsLoaded = false;
	};

	// ItemTools.cpp: the disabled give-item / inventory list panel.
	void DrawItemToolsPlaceholder();
}
