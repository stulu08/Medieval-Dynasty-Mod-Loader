#pragma once
// GameMod: CoreMod with Medieval Dynasty specifics (Wave 4 step B; was BaseMod's GameMod, BaseMod.dll is gone).
// Splits the engine events by the game's state (menu / loading / in game), keeps the player and the game framework
// objects and reads/writes the mod's own mod.ini.
//
// The getters return the GENERATED Blueprint classes, only forward-declared here: include their package header to use
// members, e.g. "BP_PlayerCharacter.hpp" for ABP_PlayerCharacter_C, "BP_TimeManager.hpp" for ABP_TimeManager_C,
// "Medieval_Dynasty.hpp" for EMD_GameState (docs/SDK_GENERATOR.md). The objects are found by reflection (class and
// property names), so GameMod itself keeps working when a game patch moves members.
#include "MDML/CoreMod.h"
#include "MDML/IniFile.h"
#include "MDML/Log.h"

namespace UE4 {
	enum class EMD_GameState : uint8_t; // Medieval_Dynasty.hpp
	class APC_Player_C;
	class ABP_PlayerCharacter_C;
	class UGI_MedievalDynasty_C;
	class AGS_GameState_C;
	class AGM_MedievalDynasty_C;
	class ABP_SystemsManager_C;
	class ABP_WeatherManager_C;
	class ABP_AnimalsManager_C;
	class ABP_QuestManager_C;
	class ABP_DataManager_C;
	class ABP_TimeManager_C;
	class ABP_NPC_Manager_C;
	class ABP_EventManager_C;
	class ABP_POI_Manager_C;
}

class LOADER_API GameMod : public ::CoreMod {
public:

	// When your mod gets initialized
	virtual void OnModInitialize() {}

	// Called for every Actor in the menu
	virtual bool MenuBeginPlay(UE4::AActor* Actor) { return false; }
	// Called for every Actor in the loading screen
	virtual bool GameLoadingBeginPlay(UE4::AActor* Actor) { return false; }
	// Called for every Actor in game
	virtual bool GameBeginPlay(UE4::AActor* Actor) { return false; }

	// Called once per tick in the menu
	virtual bool MenuTick(float deltaTime) { return false; }
	// Called once per tick in game
	virtual bool GameTick(float deltaTime) { return false; }

	// Called when the menu gets the InitGameState call
	virtual bool MenuInit() { return false; }
	// Called when the game (loading a save) gets the InitGameState call
	virtual bool GameInit() { return false; }

	UE4::APC_Player_C* getPlayer() const { return PlayerController; }
	UE4::ABP_PlayerCharacter_C* getPlayerCharacter() const { return PlayerCharacter; }
	UE4::UGI_MedievalDynasty_C* getMedievalDynastyGameInstance() const { return MedievalDynastyGameInstance; }
	UE4::AGS_GameState_C* getMedievalDynastyGameState() const { return MedievalDynastyGameState; }
	UE4::AGM_MedievalDynasty_C* getMedievalDynastyGameMode() const { return MedievalDynastyGameMode; }

	// The game's managers (BP_SystemsManager_C and the references it holds), nullptr outside a loaded game.
	UE4::ABP_SystemsManager_C* getMainGameManager() const;
	UE4::ABP_WeatherManager_C* getWeatherManager() const;
	UE4::ABP_AnimalsManager_C* getAnimalsManager() const;
	UE4::ABP_QuestManager_C* getQuestManager() const;
	UE4::ABP_DataManager_C* getDataManager() const;
	UE4::ABP_TimeManager_C* getTimeManager() const;
	UE4::ABP_NPC_Manager_C* getNpcManager() const;
	UE4::ABP_EventManager_C* getEventManager() const;
	UE4::ABP_POI_Manager_C* getPOIManager() const;
	// GI_MedievalDynasty::MDGameState (Init, InitialScreen, Menu, Loading, InGame, Paused); Init without game instance.
	UE4::EMD_GameState getMDGameState() const;

	// Reads a reflected member by name (UE4::GetVariable): default T when Object is null or has no such member.
	template<typename T>
	static T GetMember(UE4::UObject* Object, const char* Name) {
		T value{};
		if (Object)
			UE4::GetVariable<T>(Object, Name, value);
		return value;
	}
	// Object as T* if its class is (or derives from) the class with this full name, e.g.
	// "BlueprintGeneratedClass BP_PlayerCharacter.BP_PlayerCharacter_C"; nullptr otherwise. Works without T's header.
	template<typename T = UE4::UObject>
	static T* CastByName(UE4::UObject* Object, const std::string& ClassFullName) {
		return (Object && Object->IsAByName(ClassFullName)) ? reinterpret_cast<T*>(Object) : nullptr;
	}

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
	UE4::APC_Player_C* PlayerController = nullptr;
	UE4::ABP_PlayerCharacter_C* PlayerCharacter = nullptr;
	UE4::UGI_MedievalDynasty_C* MedievalDynastyGameInstance = nullptr;
	UE4::AGS_GameState_C* MedievalDynastyGameState = nullptr;
	UE4::AGM_MedievalDynasty_C* MedievalDynastyGameMode = nullptr;

	bool TickWhenGamePaused = false;
	EventsEnabled::EnabledEvents EnabledModEvents = EventsEnabled::EngineOnly;
};
