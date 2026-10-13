#pragma once
#include "Structs.h"
#include "CoreUObject/Interface.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BPI_PC_Player.BPI_PC_Player_C
// Super: Class CoreUObject.Interface
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UBPI_PC_Player_C : public UInterface {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_PC_Player.BPI_PC_Player_C");
		return ptr;
	}

#pragma region Functions
	void BPI_UpdateControlsSensitivity();

	void BPI_OnHeadbobbingChanged();

	void BPI_OnCameraShakesChanged();

	void BPI_OnBreathingChanged();

	void BPI_RefreshSetSteering();

	void DestroyPlayerSessionQuit_BPI();

	void DestroyPlayerSessionMenu_BPI();

	void DestroyPlayerSessionWithReason_BPI(TEnumAsByte<E_PlayerDisconnectReason> Reason);

	void UpdateDialogueSyncArray_BPI(int32_t NodeId, int32_t Value);

	void CreateSound2D_BPI(class USoundBase* Sound);

	void CreateSound2DAllPlayers_BPI(class USoundBase* Sound);

	void AddStatProgressPC_BPI(struct FName StatName, int32_t StatValue, bool AllPlayers, bool TreatAsSet);

	void UnlockAchievementPC_BPI(struct FName AchID, bool AllPlayers);

	void PCCameraShake_BPI(class UCameraShakeBase* CameraShake, float Scale);

	void PCCameraShakeFromSource_BPI(class UCameraShakeBase* CameraShake, class UCameraShakeSourceComponent* SourceComponent);

	void ReleaseInputs_BPI();

	void ReleaseInputsUI_BPI();

	void GetUIEventScreen_BPI(class UUserWidget** EventScreen);

	void ToggleEvent_BPI(bool CheatStart, bool CheatEnd);

	void GetTimeManager_BPI(class UObject** TimeManager);

	void GetVillageJournalManager_BPI(class UObject** VillageJournalManager);

	void OpenCurrentBookTab_BPI();

	void UseOnlyControllsForUI_BPI(bool* UseOnlyControllsForUI);

	void GetDeathScreen_BPI(class UUserWidget** DeathScreen);

	void ProcessChatCommand_BPI(struct FString ChatMessage, struct FString* Output);

#pragma endregion
};
};