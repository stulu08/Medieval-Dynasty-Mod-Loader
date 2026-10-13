#pragma once
#include "Structs.h"
#include "Engine/ActorComponent.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.RelationsComponentBase
// Super: Class Engine.ActorComponent
// Size: 256
// Size inherited: 176
/////////////////////////////////////////////
namespace UE4 {
class URelationsComponentBase : public UActorComponent {
public:
#pragma region Members
	//struct FString	CurrentHouseID;		//Offset: 176	Size: 16	Flags: BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FString M_GetCurrentHouseID() const;
	struct FString* M_PtrGetCurrentHouseID();
	void M_SetCurrentHouseID(const struct FString& value);

	//struct FString	CurrentWorkPlaceID;		//Offset: 192	Size: 16	Flags: BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FString M_GetCurrentWorkPlaceID() const;
	struct FString* M_PtrGetCurrentWorkPlaceID();
	void M_SetCurrentWorkPlaceID(const struct FString& value);

	//TArray<struct FText>	CurrentDialogueHistory;		//Offset: 208	Size: 16	Flags: BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FText> M_GetCurrentDialogueHistory() const;
	TArray<struct FText>* M_PtrGetCurrentDialogueHistory();
	void M_SetCurrentDialogueHistory(const TArray<struct FText>& value);

	//TArray<struct FText>	CurrentDialogueOptions;		//Offset: 224	Size: 16	Flags: BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FText> M_GetCurrentDialogueOptions() const;
	TArray<struct FText>* M_PtrGetCurrentDialogueOptions();
	void M_SetCurrentDialogueOptions(const TArray<struct FText>& value);

	//TArray<bool>	CurrentDialogueHistory_IsPlayerDialogue;		//Offset: 240	Size: 16	Flags: BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<bool> M_GetCurrentDialogueHistory_IsPlayerDialogue() const;
	TArray<bool>* M_PtrGetCurrentDialogueHistory_IsPlayerDialogue();
	void M_SetCurrentDialogueHistory_IsPlayerDialogue(const TArray<bool>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.RelationsComponentBase");
		return ptr;
	}

#pragma region Functions
	void AddCurrentDialogueHistory(struct FText NewDialogue);

	void AddCurrentDialogueHistory_IsPlayerDialogue(bool newIsInDialogue);

	void AddCurrentDialogueOptions(struct FText NewOption);

	void ClearCurrentDialogueHistory();

	void ClearCurrentDialogueHistory_IsPlayerDialogue();

	void ClearCurrentDialogueOptions();

	void OnRep_CurrentHouseID();

	void OnRep_CurrentWorkPlaceID();

	void SetCurrentHouseID(struct FString NewHouseID);

	void SetCurrentWorkPlaceID(struct FString NewWorkPlaceID);

#pragma endregion
};
};