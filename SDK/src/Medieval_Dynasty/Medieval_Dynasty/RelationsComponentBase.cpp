#include "../SDK.h"
#include "RelationsComponentBase.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of CurrentHouseID
// Declaration: struct FString CurrentHouseID
struct FString URelationsComponentBase::M_GetCurrentHouseID() const {
	return Read<struct FString>((byte*)this + 176);
}
struct FString* URelationsComponentBase::M_PtrGetCurrentHouseID() {
	return reinterpret_cast<struct FString*>((byte*)this + 176);
}
void URelationsComponentBase::M_SetCurrentHouseID(const struct FString& value) {
	Write((byte*)this + 176, value);
}
// Member Getter and Setter of CurrentWorkPlaceID
// Declaration: struct FString CurrentWorkPlaceID
struct FString URelationsComponentBase::M_GetCurrentWorkPlaceID() const {
	return Read<struct FString>((byte*)this + 192);
}
struct FString* URelationsComponentBase::M_PtrGetCurrentWorkPlaceID() {
	return reinterpret_cast<struct FString*>((byte*)this + 192);
}
void URelationsComponentBase::M_SetCurrentWorkPlaceID(const struct FString& value) {
	Write((byte*)this + 192, value);
}
// Member Getter and Setter of CurrentDialogueHistory
// Declaration: TArray<struct FText> CurrentDialogueHistory
TArray<struct FText> URelationsComponentBase::M_GetCurrentDialogueHistory() const {
	return Read<TArray<struct FText>>((byte*)this + 208);
}
TArray<struct FText>* URelationsComponentBase::M_PtrGetCurrentDialogueHistory() {
	return reinterpret_cast<TArray<struct FText>*>((byte*)this + 208);
}
void URelationsComponentBase::M_SetCurrentDialogueHistory(const TArray<struct FText>& value) {
	Write((byte*)this + 208, value);
}
// Member Getter and Setter of CurrentDialogueOptions
// Declaration: TArray<struct FText> CurrentDialogueOptions
TArray<struct FText> URelationsComponentBase::M_GetCurrentDialogueOptions() const {
	return Read<TArray<struct FText>>((byte*)this + 224);
}
TArray<struct FText>* URelationsComponentBase::M_PtrGetCurrentDialogueOptions() {
	return reinterpret_cast<TArray<struct FText>*>((byte*)this + 224);
}
void URelationsComponentBase::M_SetCurrentDialogueOptions(const TArray<struct FText>& value) {
	Write((byte*)this + 224, value);
}
// Member Getter and Setter of CurrentDialogueHistory_IsPlayerDialogue
// Declaration: TArray<bool> CurrentDialogueHistory_IsPlayerDialogue
TArray<bool> URelationsComponentBase::M_GetCurrentDialogueHistory_IsPlayerDialogue() const {
	return Read<TArray<bool>>((byte*)this + 240);
}
TArray<bool>* URelationsComponentBase::M_PtrGetCurrentDialogueHistory_IsPlayerDialogue() {
	return reinterpret_cast<TArray<bool>*>((byte*)this + 240);
}
void URelationsComponentBase::M_SetCurrentDialogueHistory_IsPlayerDialogue(const TArray<bool>& value) {
	Write((byte*)this + 240, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.RelationsComponentBase.AddCurrentDialogueHistory
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewDialogue	Type: struct FText	Flags: Parm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void URelationsComponentBase::AddCurrentDialogueHistory(struct FText NewDialogue) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.RelationsComponentBase.AddCurrentDialogueHistory");

	struct URelationsComponentBase_AddCurrentDialogueHistory_Params {
		struct FText NewDialogue;			//Offset: 0 | ElementSize: 24
	};
	URelationsComponentBase_AddCurrentDialogueHistory_Params params;
	params.NewDialogue = NewDialogue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.RelationsComponentBase.AddCurrentDialogueHistory_IsPlayerDialogue
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: newIsInDialogue	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void URelationsComponentBase::AddCurrentDialogueHistory_IsPlayerDialogue(bool newIsInDialogue) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.RelationsComponentBase.AddCurrentDialogueHistory_IsPlayerDialogue");

	struct URelationsComponentBase_AddCurrentDialogueHistory_IsPlayerDialogue_Params {
		bool newIsInDialogue;			//Offset: 0 | ElementSize: 1
	};
	URelationsComponentBase_AddCurrentDialogueHistory_IsPlayerDialogue_Params params;
	params.newIsInDialogue = newIsInDialogue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.RelationsComponentBase.AddCurrentDialogueOptions
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewOption	Type: struct FText	Flags: Parm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void URelationsComponentBase::AddCurrentDialogueOptions(struct FText NewOption) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.RelationsComponentBase.AddCurrentDialogueOptions");

	struct URelationsComponentBase_AddCurrentDialogueOptions_Params {
		struct FText NewOption;			//Offset: 0 | ElementSize: 24
	};
	URelationsComponentBase_AddCurrentDialogueOptions_Params params;
	params.NewOption = NewOption;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.RelationsComponentBase.ClearCurrentDialogueHistory
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void URelationsComponentBase::ClearCurrentDialogueHistory() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.RelationsComponentBase.ClearCurrentDialogueHistory");

	struct URelationsComponentBase_ClearCurrentDialogueHistory_Params {
	};
	URelationsComponentBase_ClearCurrentDialogueHistory_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.RelationsComponentBase.ClearCurrentDialogueHistory_IsPlayerDialogue
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void URelationsComponentBase::ClearCurrentDialogueHistory_IsPlayerDialogue() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.RelationsComponentBase.ClearCurrentDialogueHistory_IsPlayerDialogue");

	struct URelationsComponentBase_ClearCurrentDialogueHistory_IsPlayerDialogue_Params {
	};
	URelationsComponentBase_ClearCurrentDialogueHistory_IsPlayerDialogue_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.RelationsComponentBase.ClearCurrentDialogueOptions
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void URelationsComponentBase::ClearCurrentDialogueOptions() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.RelationsComponentBase.ClearCurrentDialogueOptions");

	struct URelationsComponentBase_ClearCurrentDialogueOptions_Params {
	};
	URelationsComponentBase_ClearCurrentDialogueOptions_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.RelationsComponentBase.OnRep_CurrentHouseID
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void URelationsComponentBase::OnRep_CurrentHouseID() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.RelationsComponentBase.OnRep_CurrentHouseID");

	struct URelationsComponentBase_OnRep_CurrentHouseID_Params {
	};
	URelationsComponentBase_OnRep_CurrentHouseID_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.RelationsComponentBase.OnRep_CurrentWorkPlaceID
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void URelationsComponentBase::OnRep_CurrentWorkPlaceID() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.RelationsComponentBase.OnRep_CurrentWorkPlaceID");

	struct URelationsComponentBase_OnRep_CurrentWorkPlaceID_Params {
	};
	URelationsComponentBase_OnRep_CurrentWorkPlaceID_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.RelationsComponentBase.SetCurrentHouseID
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewHouseID	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void URelationsComponentBase::SetCurrentHouseID(struct FString NewHouseID) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.RelationsComponentBase.SetCurrentHouseID");

	struct URelationsComponentBase_SetCurrentHouseID_Params {
		struct FString NewHouseID;			//Offset: 0 | ElementSize: 16
	};
	URelationsComponentBase_SetCurrentHouseID_Params params;
	params.NewHouseID = NewHouseID;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.RelationsComponentBase.SetCurrentWorkPlaceID
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewWorkPlaceID	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void URelationsComponentBase::SetCurrentWorkPlaceID(struct FString NewWorkPlaceID) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.RelationsComponentBase.SetCurrentWorkPlaceID");

	struct URelationsComponentBase_SetCurrentWorkPlaceID_Params {
		struct FString NewWorkPlaceID;			//Offset: 0 | ElementSize: 16
	};
	URelationsComponentBase_SetCurrentWorkPlaceID_Params params;
	params.NewWorkPlaceID = NewWorkPlaceID;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}