#include "Core.h"
#include "MDML/GameMod.h"

#include "UE4.h"
#include "Engine.hpp"
#include "Medieval_Dynasty.hpp"

// GameMod (MDML/GameMod.h), was Mods/BaseMod/src/GameMod.cpp before Wave 4 step B. Every game object is found by its
// Blueprint class name and every manager by its property name, so no Blueprint package header is needed here.
namespace {
	constexpr const char* PlayerControllerClass = "BlueprintGeneratedClass PC_Player.PC_Player_C";
	constexpr const char* PlayerCharacterClass = "BlueprintGeneratedClass BP_PlayerCharacter.BP_PlayerCharacter_C";
	constexpr const char* GameInstanceClass = "BlueprintGeneratedClass GI_MedievalDynasty.GI_MedievalDynasty_C";
	constexpr const char* GameStateClass = "BlueprintGeneratedClass GS_GameState.GS_GameState_C";
	constexpr const char* GameModeClass = "BlueprintGeneratedClass GM_MedievalDynasty.GM_MedievalDynasty_C";
}

void GameMod::InitializeMod() {
	SetupHooks(EnabledModEvents);
	OnModInitialize();
}

bool GameMod::InitGameState() {
	UE4::UWorld* World = UE4::GetWorld();
	PlayerController = CastByName<UE4::APC_Player_C>(UE4::UGameplayStatics::GetPlayerController(World, 0), PlayerControllerClass);
	PlayerCharacter = CastByName<UE4::ABP_PlayerCharacter_C>(UE4::UGameplayStatics::GetPlayerCharacter(World, 0), PlayerCharacterClass);
	MedievalDynastyGameInstance = CastByName<UE4::UGI_MedievalDynasty_C>(UE4::UGameplayStatics::GetGameInstance(World), GameInstanceClass);
	MedievalDynastyGameState = CastByName<UE4::AGS_GameState_C>(UE4::UGameplayStatics::GetGameState(World), GameStateClass);
	MedievalDynastyGameMode = CastByName<UE4::AGM_MedievalDynasty_C>(UE4::UGameplayStatics::GetGameMode(World), GameModeClass);

	if (!MedievalDynastyGameInstance && MedievalDynastyGameMode)
		MedievalDynastyGameInstance = CastByName<UE4::UGI_MedievalDynasty_C>(GetMember<UE4::UObject*>((UE4::UObject*)MedievalDynastyGameMode, "GameInstance"), GameInstanceClass);
	if (MedievalDynastyGameInstance) {
		switch (getMDGameState()) {
		case UE4::EMD_GameState::Init:
			return MenuInit();
		case UE4::EMD_GameState::Loading:
			return GameInit();
		default:
			break;
		}
	}
	return false;
}

bool GameMod::BeginPlay(UE4::AActor* Actor) {
	if (!PlayerController)
		PlayerController = CastByName<UE4::APC_Player_C>((UE4::UObject*)Actor, PlayerControllerClass);
	if (!PlayerCharacter)
		PlayerCharacter = CastByName<UE4::ABP_PlayerCharacter_C>((UE4::UObject*)Actor, PlayerCharacterClass);
	if (MedievalDynastyGameInstance) {
		switch (getMDGameState()) {
		case UE4::EMD_GameState::Init:
			return MenuBeginPlay(Actor);
		case UE4::EMD_GameState::Loading:
			return GameLoadingBeginPlay(Actor);
		case UE4::EMD_GameState::InGame:
			return GameBeginPlay(Actor);
		default:
			break;
		}
	}
	return false;
}

bool GameMod::Tick(UE4::ELevelTick tick, float deltaTime) {
	if (MedievalDynastyGameInstance) {
		switch (getMDGameState()) {
		case UE4::EMD_GameState::Menu:
			return MenuTick(deltaTime);
		case UE4::EMD_GameState::InGame:
			return GameTick(deltaTime);
		default:
			break;
		}
	}
	return false;
}

UE4::ABP_SystemsManager_C* GameMod::getMainGameManager() const { return GetMember<UE4::ABP_SystemsManager_C*>((UE4::UObject*)getMedievalDynastyGameMode(), "SystemsManagerReference"); }
UE4::ABP_WeatherManager_C* GameMod::getWeatherManager() const { return GetMember<UE4::ABP_WeatherManager_C*>((UE4::UObject*)getMainGameManager(), "WeatherSystemReference"); }
UE4::ABP_AnimalsManager_C* GameMod::getAnimalsManager() const { return GetMember<UE4::ABP_AnimalsManager_C*>((UE4::UObject*)getMainGameManager(), "AnimalsManagerReference"); }
UE4::ABP_QuestManager_C* GameMod::getQuestManager() const { return GetMember<UE4::ABP_QuestManager_C*>((UE4::UObject*)getMainGameManager(), "QuestManagerReference"); }
UE4::ABP_DataManager_C* GameMod::getDataManager() const { return GetMember<UE4::ABP_DataManager_C*>((UE4::UObject*)getMainGameManager(), "DataManagerReference"); }
UE4::ABP_TimeManager_C* GameMod::getTimeManager() const { return GetMember<UE4::ABP_TimeManager_C*>((UE4::UObject*)getMainGameManager(), "TimeManagerReference"); }
UE4::ABP_NPC_Manager_C* GameMod::getNpcManager() const { return GetMember<UE4::ABP_NPC_Manager_C*>((UE4::UObject*)getMainGameManager(), "NPCManagerReference"); }
UE4::ABP_EventManager_C* GameMod::getEventManager() const { return GetMember<UE4::ABP_EventManager_C*>((UE4::UObject*)getMainGameManager(), "EventManagerReference"); }
UE4::ABP_POI_Manager_C* GameMod::getPOIManager() const { return GetMember<UE4::ABP_POI_Manager_C*>((UE4::UObject*)getMainGameManager(), "POI_ManagerReference"); }

UE4::EMD_GameState GameMod::getMDGameState() const {
	return static_cast<UE4::EMD_GameState>(GetMember<uint8_t>((UE4::UObject*)MedievalDynastyGameInstance, "MDGameState"));
}
