#pragma once
#include "GameMod.h"

namespace MDMLBase {
	class BASEMOD_API Mod : public GameMod {
	private:
		//Basic Mod Info
		Mod(HMODULE handle = nullptr) 
			: GameMod(handle) {
			ModName = "BaseMod";
			ModVersion = "1.1.2";
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
		virtual bool GameTick(float delta) override;
		virtual bool BeginPlay(UE4::AActor* Actor) override;
	public:
		inline static Mod& Get() { return *s_instance; }
	private:
		bool m_showObjectBrowser = false;
		bool m_showIniBrowser = false;
		bool m_showIniEditor = false;
		void ShowObjectBrowser();
		void ShowINIBrowser();

		bool m_enableCheatsMenu = false;

		static Mod* s_instance;
		friend class DLLHandler;
	};

	
}

