#pragma once
#include "GameMod.h"

namespace MDMLBase {
	class BASEMOD_API Mod : public GameMod {
	private:
		//Basic Mod Info
		Mod(HMODULE handle = nullptr) 
			: GameMod(handle) {
			ModName = "BaseMod";
			ModVersion = "1.0.0";
			ModDescription = "Base Mod of MDML";
			ModAuthors = "Stulu";
			EnabledModEvents = EventsEnabled::All;
			CompleteModCreation();
		}
		virtual void OnModInitilize() override;
		virtual bool DrawImGui() override;
		virtual bool SetupImGui(ImGuiIO& io) override;

		virtual bool InitGameState() override;
		virtual bool GameInit() override;
		virtual bool MenuTick(float deltaTime) override;
	public:
		inline static Mod& Get() { return *s_instance; }
	private:
		bool m_showObjectBrowser = false;
		bool m_showIniBrowser = false;
		bool m_showIniEditor = false;
		void ShowObjectBrowser();
		void ShowINIBrowser();

		static Mod* s_instance;
		friend class DLLHandler;
	};

	
}

