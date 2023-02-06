#pragma once
#include "Defs.h"
// I want to make it so that the mod loader does nothing game specific
// Thats why the default mod class only has basic features
// But this mod class extends the default mod class to have game specific features and also does internal stuff 
class BASEMOD_API GameMod : public ::Mod {
public:
	GameMod(HMODULE handle = nullptr) {
		ModLoaderVersion = MODLOADER_VERSION;
		MedievalModLoaderVersion = MEDIEVAL_VERSION;
		CreateLogger = true;
		LogToFile = true;
		ModRef = this;
		hModule = handle;
	}

	//When your mod gets initlized
	virtual void OnModInitilize() {};

	//Called for every Actor in Menu
	virtual bool MenuBeginPlay(UE4::AActor* Actor) { return false; };
	//Called for every Actor in loading screen
	virtual bool GameLoadingBeginPlay(UE4::AActor* Actor) { return false; };
	//Called for every Actor in Game
	virtual bool GameBeginPlay(UE4::AActor* Actor) { return false; };

	//Called once for the Mod in Menu every tick
	virtual bool MenuTick(float deltaTime) { return false; }
	//Called once for the Mod in Game every tick
	virtual bool GameTick(float deltaTime) { return false; }

	//Called when the Menu gets the init call
	virtual bool MenuInit() { return false; }
	//Called when the Game gets the init call
	virtual bool GameInit() { return false; }

	UE4::APC_Player_C* getPlayer() const { return PlayerActor; }
	UE4::ABP_PlayerCharacter_C* getPlayerCharacter() const { return PlayerCharacter; }
	UE4::UGI_MedievalDynasty_C* getMedievalDynastyGameInstance() const { return MedievalDynastyGameInstance; }
	UE4::AGM_MedievalDynasty_C* getMedievalDynastyGameMode() const { return MedievalDynastyGameMode; }
	UE4::AGS_GameState_C* getMedievalDynastyGameState() const { return MedievalDynastyGameState; }
	Ref<Logger> getLogger() const { return logger; }
protected:
	virtual void InitializeMod() override;
	virtual bool InitGameState() override;
	virtual bool BeginPlay(UE4::AActor* Actor) override;
	virtual bool Tick(UE4::ELevelTick tick, float deltaTime) override;

	// Gets a value from your mod.ini file
	template<class T>
	T GetINIConfig(const std::string& key, const std::string& section = "Config", T nullReturn = T()) {
		std::string path = GetFolder() + "/mod.ini";
		if (!std::filesystem::exists(path)) {
			if (logger) {
				logger->Warn("Could not locate file: {0}", path);
			}
			else {
				Log::Warn_MDML("Could not locate file: {0}", path);
			}
			return nullReturn;
		}
		INI ini(path, true);
		if (ini.select(section)) {
			return ini.getAs<T>(section, key, nullReturn);
		}
		return nullReturn;
	}
protected:
	UE4::APC_Player_C* PlayerActor;
	UE4::ABP_PlayerCharacter_C* PlayerCharacter;
	UE4::UGI_MedievalDynasty_C* MedievalDynastyGameInstance;
	UE4::AGM_MedievalDynasty_C* MedievalDynastyGameMode;
	UE4::AGS_GameState_C* MedievalDynastyGameState;

	bool TickWhenGamePaused = false;
	EventsEnabled::EnabledEvents EnabledModEvents = EventsEnabled::EngineOnly;
};