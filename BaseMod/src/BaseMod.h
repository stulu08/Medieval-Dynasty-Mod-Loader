#pragma once
#include "Defs.h"

namespace MDMLBase {
	class BASEMOD_API Mod : public ::Mod {
	private:
		//Basic Mod Info
		Mod(HMODULE handle = nullptr) {
			ModName = "BaseMod"; // Mod Name -- If Using BP ModActor, Should Be The Same Name As Your Pak
			ModVersion = "1.0.0"; // Mod Version
			ModDescription = "Base Mod of MDML"; // Mod Description
			ModAuthors = "Stulu"; // Mod Author
			ModLoaderVersion = MODLOADER_VERSION;
			MedievalModLoaderVersion = MEDIEVAL_VERSION;
			CreateLogger = true;
			LogToFile = true;
			// Dont Touch The Internal Stuff
			ModRef = this;
			hModule = handle;
			CompleteModCreation();
		}
		~Mod();
	public:

		virtual void InitializeMod() override;
		virtual void InitGameState() override;
		virtual void BeginPlay(UE4::AActor* Actor) override;
		virtual void PostBeginPlay(std::wstring ModActorName, UE4::AActor* Actor) override;
		virtual void DrawImGui() override;
		virtual void SetupImGui(ImGuiIO& io) override;

		UE4::AActor* getPlayer() const { return PlayerActor; }
		UE4::AActor* getPlayerController() const{ return PlayerControler; }
		Ref<Logger> getLogger() const { return logger; }

		inline static Mod& Get() { return *s_instance; }
	private:
		UE4::AActor* ModActor;
		UE4::UClass* ModObject;
		UE4::UObject* ModObjectC;

		UE4::AActor* PlayerActor;
		UE4::AActor* PlayerControler;

		bool m_showObjectBrowser = false;
		bool m_showIniBrowser = false;
		void ShowObjectBrowser(bool* enabled);
		void ShowINIBrowser(bool* enabled);

		static Mod* s_instance;
		friend class DLLHandler;
	};
}

