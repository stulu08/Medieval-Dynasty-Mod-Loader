#pragma once
#include "Defs.h"
#include "MDML/IniFile.h"
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
		hModule = handle;
		// No UE4::InitSDK() here any more: the engine core (GObjects, GNames, GWorld) lives once in MDML.dll
		// (Wave 2.3) and is initialized by mdml::mods::InitCoreMods() before any mod's InitializeMod()/events run.
	}

	//When your mod gets initlized
	virtual void OnModInitialize() {};

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
	// Members of Blueprint classes are resolved by name through reflection, so they keep working after game patches
	// (the generated SDK's fixed offsets went stale with 2.7.0.4). See docs/MODERNIZATION_PLAN.md, SDK decisions.
	template<typename T>
	static T GetMember(UE4::UObject* Object, const char* Name) {
		T value{};
		if (Object)
			UE4::GetVariable<T>(Object, Name, value);
		return value;
	}
	inline UE4::ABP_SystemsManager_C* getMainGameManager() const { return GetMember<UE4::ABP_SystemsManager_C*>(getMedievalDynastyGameMode(), "SystemsManagerReference"); }
	inline UE4::ABP_WeatherManager_C* getWeatherManager() const { return GetMember<UE4::ABP_WeatherManager_C*>(getMainGameManager(), "WeatherSystemReference"); }
	inline UE4::ABP_AnimalsManager_C* getCameraManager() const { return GetMember<UE4::ABP_AnimalsManager_C*>(getMainGameManager(), "AnimalsManagerReference"); }
	inline UE4::ABP_QuestManager_C* getQuestManager() const { return GetMember<UE4::ABP_QuestManager_C*>(getMainGameManager(), "QuestManagerReference"); }
	inline UE4::ABP_DataManager_C* getDataManager() const { return GetMember<UE4::ABP_DataManager_C*>(getMainGameManager(), "DataManagerReference"); }
	inline UE4::ABP_TimeManager_C* getTimeManager() const { return GetMember<UE4::ABP_TimeManager_C*>(getMainGameManager(), "TimeManagerReference"); }
	inline UE4::ABP_NPC_Manager_C* getNpcManager () const { return GetMember<UE4::ABP_NPC_Manager_C*>(getMainGameManager(), "NPCManagerReference"); }
	inline UE4::ABP_EventManager_C* getEventManager () const { return GetMember<UE4::ABP_EventManager_C*>(getMainGameManager(), "EventManagerReference"); }
	inline UE4::ABP_POI_Manager_C* getPOIManager () const { return GetMember<UE4::ABP_POI_Manager_C*>(getMainGameManager(), "POI_ManagerReference"); }
	inline UE4::EMD_GameState getMDGameState() const { return (UE4::EMD_GameState)GetMember<uint8_t>(MedievalDynastyGameInstance, "MDGameState"); }

	Ref<Logger> getLogger() const { return logger; }
protected:
	virtual void InitializeMod() override;
	virtual bool InitGameState() override;
	virtual bool BeginPlay(UE4::AActor* Actor) override;
	virtual bool Tick(UE4::ELevelTick tick, float deltaTime) override;

	// Reads a value from your mod.ini (mdml::platform::IniFile, see docs/guides/Modding.md for the file format).
	// Supported T: bool, int/unsigned/int64-like integers, float, double, std::string. A missing file, section or key
	// gives nullReturn (a missing file is logged as a warning).
	template<class T>
	T GetINIConfig(const std::string& key, const std::string& section = "Config", T nullReturn = T()) {
		const std::string path = GetFolder() + "/mod.ini";
		mdml::platform::IniFile ini(path);
		if (!ini.IsLoaded()) {
			if (logger) {
				logger->Warn("Could not locate file: {0}", path);
			}
			else {
				Log::Warn_MDML("Could not locate file: {0}", path);
			}
			return nullReturn;
		}
		if constexpr (std::is_same_v<T, bool>) {
			return ini.GetBool(section, key, nullReturn);
		}
		else if constexpr (std::is_floating_point_v<T>) {
			return static_cast<T>(ini.GetFloat(section, key, static_cast<float>(nullReturn)));
		}
		else if constexpr (std::is_integral_v<T>) {
			return static_cast<T>(ini.GetInt(section, key, static_cast<int>(nullReturn)));
		}
		else if constexpr (std::is_convertible_v<T, std::string>) {
			return ini.Get(section, key, nullReturn);
		}
		else {
			static_assert(!sizeof(T), "GetINIConfig: unsupported type (use bool, integer, float or std::string)");
		}
	}
	// Writes a value to your mod.ini (creates file, section and key when missing, keeps comments and everything else).
	template<class T>
	void SetINIConfig(const std::string& key, T value = T(), const std::string& section = "Config") {
		const std::string path = GetFolder() + "/mod.ini";
		mdml::platform::IniFile ini(path);
		std::stringstream stream;
		stream << value;
		ini.Set(section, key, stream.str());
		if (!ini.Save()) {
			if (logger) {
				logger->Error("Could not write file: {0}", path);
			}
			else {
				Log::Error_MDML("Could not write file: {0}", path);
			}
		}
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