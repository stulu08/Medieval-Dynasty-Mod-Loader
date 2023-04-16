#pragma once
#include "Defs.h"
// I want to make it so that the mod loader does nothing game specific
// Thats why the default mod class only has basic features
// But this mod class extends the default mod class to have game specific features and also does internal stuff 
class BASEMOD_API GameMod : public ::Mod {
public:
	__forceinline GameMod(HMODULE handle = nullptr) {
		ModLoaderVersion = MODLOADER_VERSION;
		MedievalModLoaderVersion = MEDIEVAL_VERSION;
		CreateLogger = true;
		LogToFile = true;
		ModRef = this;
		hModule = handle;

		//needs to be executed in the Mods code, since GName, ... is static
		UE4::InitSDK();
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

	inline UE4::APC_Player_C* getPlayer() const { return PlayerController; }
	inline UE4::ABP_PlayerCharacter_C* getPlayerCharacter() const { return PlayerCharacter; }
	inline UE4::UGI_MedievalDynasty_C* getMedievalDynastyGameInstance() const { return MedievalDynastyGameInstance; }
	inline UE4::AGS_GameState_C* getMedievalDynastyGameState() const { return MedievalDynastyGameState; }
	inline UE4::AGM_MedievalDynasty_C* getMedievalDynastyGameMode() const { return MedievalDynastyGameMode; }
	inline UE4::ABP_SystemsManager_C* getMainGameManager() const { return getMedievalDynastyGameMode()->M_GetSystemsManagerReference(); }
	inline UE4::ABP_WeatherManager_C* getWeatherManager() const { return static_cast<UE4::ABP_WeatherManager_C*>(getMainGameManager()->M_GetWeatherSystemReference()); }
	inline UE4::ABP_AnimalsManager_C* getCameraManager() const { return static_cast<UE4::ABP_AnimalsManager_C*>(getMainGameManager()->M_GetAnimalsManagerReference()); }
	inline UE4::ABP_QuestManager_C* getQuestManager() const { return static_cast<UE4::ABP_QuestManager_C*>(getMainGameManager()->M_GetQuestManagerReference()); }
	inline UE4::ABP_DataManager_C* getDataManager() const { return static_cast<UE4::ABP_DataManager_C*>(getMainGameManager()->M_GetDataManagerReference()); }
	inline UE4::ABP_TimeManager_C* getTimeManager() const { return static_cast<UE4::ABP_TimeManager_C*>(getMainGameManager()->M_GetTimeManagerReference()); }
	inline UE4::ABP_NPC_Manager_C* getNpcManager () const { return static_cast<UE4::ABP_NPC_Manager_C*>(getMainGameManager()->M_GetNPCManagerReference()); }
	inline UE4::ABP_EventManager_C* getEventManager () const { return static_cast<UE4::ABP_EventManager_C*>(getMainGameManager()->M_GetEventManagerReference()); }
	inline UE4::ABP_POI_Manager_C* getPOIManager () const { return static_cast<UE4::ABP_POI_Manager_C*>(getMainGameManager()->M_GetPOI_ManagerReference()); }

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
		INI::PARSE_FLAGS = INI::PARSE_COMMENTS_ALL | INI::PARSE_COMMENTS_SLASH | INI::PARSE_COMMENTS_HASH;
		INI ini(path, true);
		if (ini.select(section)) {
			return ini.getAs<T>(section, key, nullReturn);
		}
		return nullReturn;
	}
	template<class T>
	void SetINIConfig(const std::string& key, T value = T(), const std::string& section = "Config") {
		std::string path = GetFolder() + "\\mod.ini";
		FILE* file = fopen(path.c_str(), "a+");
		if (file == nullptr) {
			if (logger) {
				logger->Error("Could not open file: {0}", path);
			}
			else {
				Log::Error_MDML("Could not open file: {0}", path);
			}
			return;
		}
		fclose(file);

		INI::PARSE_FLAGS = INI::PARSE_COMMENTS_ALL | INI::PARSE_COMMENTS_SLASH | INI::PARSE_COMMENTS_HASH;
		INI::SAVE_FLAGS = INI::SAVE_PADDING_SECTIONS | INI::SAVE_PRUNE;
		INI ini(path, true);
		std::stringstream stream;
		stream << value;
		ini.select(section);
		ini.set(key, stream.str());
		ini.save(path);
	}
protected:
	UE4::APC_Player_C* PlayerController;
	UE4::ABP_PlayerCharacter_C* PlayerCharacter;
	UE4::UGI_MedievalDynasty_C* MedievalDynastyGameInstance;
	UE4::AGS_GameState_C* MedievalDynastyGameState;
	UE4::AGM_MedievalDynasty_C* MedievalDynastyGameMode;


	bool TickWhenGamePaused = false;
	EventsEnabled::EnabledEvents EnabledModEvents = EventsEnabled::EngineOnly;
};