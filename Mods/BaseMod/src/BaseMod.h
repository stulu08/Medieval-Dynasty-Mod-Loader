#pragma once
#include "GameMod.h"

namespace MDMLBase {
	// BaseMod is the game API of MDML mods (GameMod, Utils.h). Since Wave 3C it has no UI and no cheats: the developer
	// tools (object browser, INI browser/editor, SDK exporter, dev-build flag swap, player tools) live in DevTools.
	class BASEMOD_API Mod : public GameMod {
	private:
		//Basic Mod Info
		Mod(HMODULE handle = nullptr)
			: GameMod(handle) {
			ModName = "BaseMod";
			ModVersion = "1.2.0";
			ModDescription = "Base Mod of MDML: game API for mods (GameMod). Developer tools are in DevTools.";
			ModAuthors = "Stulu";
			EnabledModEvents = EventsEnabled::None; // nothing to react to any more
			CompleteModCreation();
		}
		virtual void OnModInitialize() override;
	public:
		inline static Mod& Get() { return *s_instance; }
	private:
		static Mod* s_instance;
		friend class DLLHandler;
	};
}
