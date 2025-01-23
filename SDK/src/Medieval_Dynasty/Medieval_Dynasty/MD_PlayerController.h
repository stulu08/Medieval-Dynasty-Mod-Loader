#pragma once
#include "Structs.h"
#include "Engine/PlayerController.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.MD_PlayerController
// Super: Class Engine.PlayerController
// Size: 1440
// Size inherited: 1408
/////////////////////////////////////////////
namespace UE4 {
class AMD_PlayerController : public APlayerController {
public:
#pragma region Members
	//TArray<struct FNodeEventsState>	SyncedDialogues;		//Offset: 1408	Size: 16	Flags: BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPublic
	TArray<struct FNodeEventsState> M_GetSyncedDialogues() const;
	TArray<struct FNodeEventsState>* M_PtrGetSyncedDialogues();
	void M_SetSyncedDialogues(const TArray<struct FNodeEventsState>& value);

	//TArray<struct FNodeConditionState>	SyncedConditions;		//Offset: 1424	Size: 16	Flags: BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPublic
	TArray<struct FNodeConditionState> M_GetSyncedConditions() const;
	TArray<struct FNodeConditionState>* M_PtrGetSyncedConditions();
	void M_SetSyncedConditions(const TArray<struct FNodeConditionState>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.MD_PlayerController");
		return ptr;
	}

#pragma region Functions
	void AddSyncedConditions(struct FNodeConditionState newDialogueCondition);

	void AddSyncedDialogues(struct FNodeEventsState newDialogueEvent);

	void ClearSyncedConditions();

	void ClearSyncedDialogues();

	int32_t GetInBytesPerSecond()/* const*/;

	float GetInPacketLostPercentage()/* const*/;

	int32_t GetInPacketsPerSecond()/* const*/;

	int32_t GetOutBytesPerSecond()/* const*/;

	float GetOutPacketLostPercentage()/* const*/;

	int32_t GetOutPacketsPerSecond()/* const*/;

	void OnPawnLeavingGame();

	void OnRepDialogueConditionsSyncState();

	void OnRepDialogueEventsSyncState();

	void OnServerAcknowledgedPossession(class APawn* P);

	void RemoveIndexSyncedConditions(int32_t Index);

	void RemoveIndexSyncedDialogues(int32_t Index);

	void SetElementSyncedConditions(int32_t Index, struct FNodeConditionState newDialogueCondition);

	void SetElementSyncedDialogues(int32_t Index, struct FNodeEventsState newDialogueEvent);

#pragma endregion
};
};