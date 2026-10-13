#include "../SDK.h"
#include "MD_PlayerController.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of SyncedDialogues
// Declaration: TArray<struct FNodeEventsState> SyncedDialogues
TArray<struct FNodeEventsState> AMD_PlayerController::M_GetSyncedDialogues() const {
	return Read<TArray<struct FNodeEventsState>>((byte*)this + 1408);
}
TArray<struct FNodeEventsState>* AMD_PlayerController::M_PtrGetSyncedDialogues() {
	return reinterpret_cast<TArray<struct FNodeEventsState>*>((byte*)this + 1408);
}
void AMD_PlayerController::M_SetSyncedDialogues(const TArray<struct FNodeEventsState>& value) {
	Write((byte*)this + 1408, value);
}
// Member Getter and Setter of SyncedConditions
// Declaration: TArray<struct FNodeConditionState> SyncedConditions
TArray<struct FNodeConditionState> AMD_PlayerController::M_GetSyncedConditions() const {
	return Read<TArray<struct FNodeConditionState>>((byte*)this + 1424);
}
TArray<struct FNodeConditionState>* AMD_PlayerController::M_PtrGetSyncedConditions() {
	return reinterpret_cast<TArray<struct FNodeConditionState>*>((byte*)this + 1424);
}
void AMD_PlayerController::M_SetSyncedConditions(const TArray<struct FNodeConditionState>& value) {
	Write((byte*)this + 1424, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerController.AddSyncedConditions
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: newDialogueCondition	Type: struct FNodeConditionState	Flags: Parm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AMD_PlayerController::AddSyncedConditions(struct FNodeConditionState newDialogueCondition) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerController.AddSyncedConditions");

	struct AMD_PlayerController_AddSyncedConditions_Params {
		struct FNodeConditionState newDialogueCondition;			//Offset: 0 | ElementSize: 32
	};
	AMD_PlayerController_AddSyncedConditions_Params params;
	params.newDialogueCondition = newDialogueCondition;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerController.AddSyncedDialogues
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: newDialogueEvent	Type: struct FNodeEventsState	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AMD_PlayerController::AddSyncedDialogues(struct FNodeEventsState newDialogueEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerController.AddSyncedDialogues");

	struct AMD_PlayerController_AddSyncedDialogues_Params {
		struct FNodeEventsState newDialogueEvent;			//Offset: 0 | ElementSize: 8
	};
	AMD_PlayerController_AddSyncedDialogues_Params params;
	params.newDialogueEvent = newDialogueEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerController.ClearSyncedConditions
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void AMD_PlayerController::ClearSyncedConditions() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerController.ClearSyncedConditions");

	struct AMD_PlayerController_ClearSyncedConditions_Params {
	};
	AMD_PlayerController_ClearSyncedConditions_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerController.ClearSyncedDialogues
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void AMD_PlayerController::ClearSyncedDialogues() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerController.ClearSyncedDialogues");

	struct AMD_PlayerController_ClearSyncedDialogues_Params {
	};
	AMD_PlayerController_ClearSyncedDialogues_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerController.GetInBytesPerSecond
// Flags: Final, Native, Private, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t AMD_PlayerController::GetInBytesPerSecond()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerController.GetInBytesPerSecond");

	struct AMD_PlayerController_GetInBytesPerSecond_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	AMD_PlayerController_GetInBytesPerSecond_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerController.GetInPacketLostPercentage
// Flags: Final, Native, Private, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float AMD_PlayerController::GetInPacketLostPercentage()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerController.GetInPacketLostPercentage");

	struct AMD_PlayerController_GetInPacketLostPercentage_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	AMD_PlayerController_GetInPacketLostPercentage_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerController.GetInPacketsPerSecond
// Flags: Final, Native, Private, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t AMD_PlayerController::GetInPacketsPerSecond()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerController.GetInPacketsPerSecond");

	struct AMD_PlayerController_GetInPacketsPerSecond_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	AMD_PlayerController_GetInPacketsPerSecond_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerController.GetOutBytesPerSecond
// Flags: Final, Native, Private, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t AMD_PlayerController::GetOutBytesPerSecond()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerController.GetOutBytesPerSecond");

	struct AMD_PlayerController_GetOutBytesPerSecond_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	AMD_PlayerController_GetOutBytesPerSecond_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerController.GetOutPacketLostPercentage
// Flags: Final, Native, Private, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float AMD_PlayerController::GetOutPacketLostPercentage()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerController.GetOutPacketLostPercentage");

	struct AMD_PlayerController_GetOutPacketLostPercentage_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	AMD_PlayerController_GetOutPacketLostPercentage_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerController.GetOutPacketsPerSecond
// Flags: Final, Native, Private, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t AMD_PlayerController::GetOutPacketsPerSecond()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerController.GetOutPacketsPerSecond");

	struct AMD_PlayerController_GetOutPacketsPerSecond_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	AMD_PlayerController_GetOutPacketsPerSecond_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerController.OnPawnLeavingGame
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AMD_PlayerController::OnPawnLeavingGame() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerController.OnPawnLeavingGame");

	struct AMD_PlayerController_OnPawnLeavingGame_Params {
	};
	AMD_PlayerController_OnPawnLeavingGame_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerController.OnRepDialogueConditionsSyncState
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AMD_PlayerController::OnRepDialogueConditionsSyncState() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerController.OnRepDialogueConditionsSyncState");

	struct AMD_PlayerController_OnRepDialogueConditionsSyncState_Params {
	};
	AMD_PlayerController_OnRepDialogueConditionsSyncState_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerController.OnRepDialogueEventsSyncState
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AMD_PlayerController::OnRepDialogueEventsSyncState() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerController.OnRepDialogueEventsSyncState");

	struct AMD_PlayerController_OnRepDialogueEventsSyncState_Params {
	};
	AMD_PlayerController_OnRepDialogueEventsSyncState_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerController.OnServerAcknowledgedPossession
// Flags: Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: P	Type: class APawn*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AMD_PlayerController::OnServerAcknowledgedPossession(class APawn* P) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerController.OnServerAcknowledgedPossession");

	struct AMD_PlayerController_OnServerAcknowledgedPossession_Params {
		class APawn* P;			//Offset: 0 | ElementSize: 8
	};
	AMD_PlayerController_OnServerAcknowledgedPossession_Params params;
	params.P = P;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerController.RemoveIndexSyncedConditions
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Index	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AMD_PlayerController::RemoveIndexSyncedConditions(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerController.RemoveIndexSyncedConditions");

	struct AMD_PlayerController_RemoveIndexSyncedConditions_Params {
		int32_t Index;			//Offset: 0 | ElementSize: 4
	};
	AMD_PlayerController_RemoveIndexSyncedConditions_Params params;
	params.Index = Index;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerController.RemoveIndexSyncedDialogues
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Index	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AMD_PlayerController::RemoveIndexSyncedDialogues(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerController.RemoveIndexSyncedDialogues");

	struct AMD_PlayerController_RemoveIndexSyncedDialogues_Params {
		int32_t Index;			//Offset: 0 | ElementSize: 4
	};
	AMD_PlayerController_RemoveIndexSyncedDialogues_Params params;
	params.Index = Index;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerController.SetElementSyncedConditions
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Index	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: newDialogueCondition	Type: struct FNodeConditionState	Flags: Parm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AMD_PlayerController::SetElementSyncedConditions(int32_t Index, struct FNodeConditionState newDialogueCondition) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerController.SetElementSyncedConditions");

	struct AMD_PlayerController_SetElementSyncedConditions_Params {
		int32_t Index;			//Offset: 0 | ElementSize: 4
		struct FNodeConditionState newDialogueCondition;			//Offset: 8 | ElementSize: 32
	};
	AMD_PlayerController_SetElementSyncedConditions_Params params;
	params.Index = Index;
	params.newDialogueCondition = newDialogueCondition;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.MD_PlayerController.SetElementSyncedDialogues
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Index	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: newDialogueEvent	Type: struct FNodeEventsState	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AMD_PlayerController::SetElementSyncedDialogues(int32_t Index, struct FNodeEventsState newDialogueEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.MD_PlayerController.SetElementSyncedDialogues");

	struct AMD_PlayerController_SetElementSyncedDialogues_Params {
		int32_t Index;			//Offset: 0 | ElementSize: 4
		struct FNodeEventsState newDialogueEvent;			//Offset: 4 | ElementSize: 8
	};
	AMD_PlayerController_SetElementSyncedDialogues_Params params;
	params.Index = Index;
	params.newDialogueEvent = newDialogueEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}