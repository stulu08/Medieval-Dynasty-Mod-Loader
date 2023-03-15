#include "GameMod.h"
#include "Utils.h"

void GameMod::InitializeMod() {
	SetupHooks(EnabledModEvents);
	OnModInitilize();
}

bool GameMod::InitGameState() {
	PlayerController = Utils::ValidateBPObject<UE4::APC_Player_C>(UE4::UGameplayStatics::GetPlayerController(0), "BlueprintGeneratedClass PC_Player.PC_Player_C");
	PlayerCharacter = Utils::ValidateBPObject<UE4::ABP_PlayerCharacter_C>(UE4::UGameplayStatics::GetPlayerCharacter(UE4::UWorld::GetWorld(), 0), "BlueprintGeneratedClass BP_PlayerCharacter.BP_PlayerCharacter_C");
	MedievalDynastyGameInstance = Utils::ValidateBPObject<UE4::UGI_MedievalDynasty_C>(UE4::UGameplayStatics::GetGameInstance(), "BlueprintGeneratedClass GI_MedievalDynasty.GI_MedievalDynasty_C");
	MedievalDynastyGameMode = Utils::ValidateBPObject<UE4::AGM_MedievalDynasty_C>(UE4::UGameplayStatics::GetGameMode(), "BlueprintGeneratedClass GM_MedievalDynasty.GM_MedievalDynasty_C");
	MedievalDynastyGameState = Utils::ValidateBPObject<UE4::AGS_GameState_C>(UE4::UGameplayStatics::GetGameState(), "BlueprintGeneratedClass GS_GameState.GS_GameState_C");
	
	if (MedievalDynastyGameInstance) {
		switch (MedievalDynastyGameInstance->M_GetMDGameState()) {
		case UE4::EMD_GameState::MD_GameState__Init:
			return MenuInit();
		case UE4::EMD_GameState::MD_GameState__Loading:
			return GameInit();
		}
	}
	return false;
}

bool GameMod::BeginPlay(UE4::AActor* Actor) {
	if(!PlayerController)
		PlayerController = Utils::ValidateBPObject<UE4::APC_Player_C>(Actor, "BlueprintGeneratedClass PC_Player.PC_Player_C");
	if(!PlayerCharacter)
		PlayerCharacter = Utils::ValidateBPObject<UE4::ABP_PlayerCharacter_C>(Actor, "BlueprintGeneratedClass BP_PlayerCharacter.BP_PlayerCharacter_C");
	if (MedievalDynastyGameInstance) {
		switch (MedievalDynastyGameInstance->M_GetMDGameState()) {
		case UE4::EMD_GameState::MD_GameState__Init:
				return MenuBeginPlay(Actor);
		case UE4::EMD_GameState::MD_GameState__Loading:
				return GameLoadingBeginPlay(Actor);
		case UE4::EMD_GameState::MD_GameState__InGame:
				return GameBeginPlay(Actor);
		}
	}
	return false;
}

bool GameMod::Tick(UE4::ELevelTick tick, float deltaTime) {
	if (MedievalDynastyGameInstance) {
		switch (MedievalDynastyGameInstance->M_GetMDGameState()) {
		case UE4::EMD_GameState::MD_GameState__Menu:
			return MenuTick(deltaTime);
		case UE4::EMD_GameState::MD_GameState__InGame:
			return GameTick(deltaTime);
		}
	}
	return false;
}
