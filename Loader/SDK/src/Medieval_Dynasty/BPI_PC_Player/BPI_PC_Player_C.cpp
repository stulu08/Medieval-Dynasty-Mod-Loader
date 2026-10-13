#include "../SDK.h"
#include "BPI_PC_Player_C.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BPI_PC_Player.BPI_PC_Player_C.BPI_UpdateControlsSensitivity
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_PC_Player_C::BPI_UpdateControlsSensitivity() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PC_Player.BPI_PC_Player_C.BPI_UpdateControlsSensitivity");

	struct UBPI_PC_Player_C_BPI_UpdateControlsSensitivity_Params {
	};
	UBPI_PC_Player_C_BPI_UpdateControlsSensitivity_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_PC_Player.BPI_PC_Player_C.BPI_OnHeadbobbingChanged
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_PC_Player_C::BPI_OnHeadbobbingChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PC_Player.BPI_PC_Player_C.BPI_OnHeadbobbingChanged");

	struct UBPI_PC_Player_C_BPI_OnHeadbobbingChanged_Params {
	};
	UBPI_PC_Player_C_BPI_OnHeadbobbingChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_PC_Player.BPI_PC_Player_C.BPI_OnCameraShakesChanged
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_PC_Player_C::BPI_OnCameraShakesChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PC_Player.BPI_PC_Player_C.BPI_OnCameraShakesChanged");

	struct UBPI_PC_Player_C_BPI_OnCameraShakesChanged_Params {
	};
	UBPI_PC_Player_C_BPI_OnCameraShakesChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_PC_Player.BPI_PC_Player_C.BPI_OnBreathingChanged
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_PC_Player_C::BPI_OnBreathingChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PC_Player.BPI_PC_Player_C.BPI_OnBreathingChanged");

	struct UBPI_PC_Player_C_BPI_OnBreathingChanged_Params {
	};
	UBPI_PC_Player_C_BPI_OnBreathingChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_PC_Player.BPI_PC_Player_C.BPI_RefreshSetSteering
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_PC_Player_C::BPI_RefreshSetSteering() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PC_Player.BPI_PC_Player_C.BPI_RefreshSetSteering");

	struct UBPI_PC_Player_C_BPI_RefreshSetSteering_Params {
	};
	UBPI_PC_Player_C_BPI_RefreshSetSteering_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_PC_Player.BPI_PC_Player_C.DestroyPlayerSessionQuit_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_PC_Player_C::DestroyPlayerSessionQuit_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PC_Player.BPI_PC_Player_C.DestroyPlayerSessionQuit_BPI");

	struct UBPI_PC_Player_C_DestroyPlayerSessionQuit_BPI_Params {
	};
	UBPI_PC_Player_C_DestroyPlayerSessionQuit_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_PC_Player.BPI_PC_Player_C.DestroyPlayerSessionMenu_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_PC_Player_C::DestroyPlayerSessionMenu_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PC_Player.BPI_PC_Player_C.DestroyPlayerSessionMenu_BPI");

	struct UBPI_PC_Player_C_DestroyPlayerSessionMenu_BPI_Params {
	};
	UBPI_PC_Player_C_DestroyPlayerSessionMenu_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_PC_Player.BPI_PC_Player_C.DestroyPlayerSessionWithReason_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Reason	Type: TEnumAsByte<E_PlayerDisconnectReason>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_PC_Player_C::DestroyPlayerSessionWithReason_BPI(TEnumAsByte<E_PlayerDisconnectReason> Reason) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PC_Player.BPI_PC_Player_C.DestroyPlayerSessionWithReason_BPI");

	struct UBPI_PC_Player_C_DestroyPlayerSessionWithReason_BPI_Params {
		TEnumAsByte<E_PlayerDisconnectReason> Reason;			//Offset: 0 | ElementSize: 1
	};
	UBPI_PC_Player_C_DestroyPlayerSessionWithReason_BPI_Params params;
	params.Reason = Reason;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_PC_Player.BPI_PC_Player_C.UpdateDialogueSyncArray_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NodeId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_PC_Player_C::UpdateDialogueSyncArray_BPI(int32_t NodeId, int32_t Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PC_Player.BPI_PC_Player_C.UpdateDialogueSyncArray_BPI");

	struct UBPI_PC_Player_C_UpdateDialogueSyncArray_BPI_Params {
		int32_t NodeId;			//Offset: 0 | ElementSize: 4
		int32_t Value;			//Offset: 4 | ElementSize: 4
	};
	UBPI_PC_Player_C_UpdateDialogueSyncArray_BPI_Params params;
	params.NodeId = NodeId;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_PC_Player.BPI_PC_Player_C.CreateSound2D_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sound	Type: class USoundBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_PC_Player_C::CreateSound2D_BPI(class USoundBase* Sound) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PC_Player.BPI_PC_Player_C.CreateSound2D_BPI");

	struct UBPI_PC_Player_C_CreateSound2D_BPI_Params {
		class USoundBase* Sound;			//Offset: 0 | ElementSize: 8
	};
	UBPI_PC_Player_C_CreateSound2D_BPI_Params params;
	params.Sound = Sound;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_PC_Player.BPI_PC_Player_C.CreateSound2DAllPlayers_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sound	Type: class USoundBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_PC_Player_C::CreateSound2DAllPlayers_BPI(class USoundBase* Sound) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PC_Player.BPI_PC_Player_C.CreateSound2DAllPlayers_BPI");

	struct UBPI_PC_Player_C_CreateSound2DAllPlayers_BPI_Params {
		class USoundBase* Sound;			//Offset: 0 | ElementSize: 8
	};
	UBPI_PC_Player_C_CreateSound2DAllPlayers_BPI_Params params;
	params.Sound = Sound;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_PC_Player.BPI_PC_Player_C.AddStatProgressPC_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: StatName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StatValue	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AllPlayers	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: TreatAsSet	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_PC_Player_C::AddStatProgressPC_BPI(struct FName StatName, int32_t StatValue, bool AllPlayers, bool TreatAsSet) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PC_Player.BPI_PC_Player_C.AddStatProgressPC_BPI");

	struct UBPI_PC_Player_C_AddStatProgressPC_BPI_Params {
		struct FName StatName;			//Offset: 0 | ElementSize: 8
		int32_t StatValue;			//Offset: 8 | ElementSize: 4
		bool AllPlayers;			//Offset: 12 | ElementSize: 1
		bool TreatAsSet;			//Offset: 13 | ElementSize: 1
	};
	UBPI_PC_Player_C_AddStatProgressPC_BPI_Params params;
	params.StatName = StatName;
	params.StatValue = StatValue;
	params.AllPlayers = AllPlayers;
	params.TreatAsSet = TreatAsSet;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_PC_Player.BPI_PC_Player_C.UnlockAchievementPC_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: AchID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AllPlayers	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_PC_Player_C::UnlockAchievementPC_BPI(struct FName AchID, bool AllPlayers) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PC_Player.BPI_PC_Player_C.UnlockAchievementPC_BPI");

	struct UBPI_PC_Player_C_UnlockAchievementPC_BPI_Params {
		struct FName AchID;			//Offset: 0 | ElementSize: 8
		bool AllPlayers;			//Offset: 8 | ElementSize: 1
	};
	UBPI_PC_Player_C_UnlockAchievementPC_BPI_Params params;
	params.AchID = AchID;
	params.AllPlayers = AllPlayers;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_PC_Player.BPI_PC_Player_C.PCCameraShake_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CameraShake	Type: class UCameraShakeBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Scale	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_PC_Player_C::PCCameraShake_BPI(class UCameraShakeBase* CameraShake, float Scale) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PC_Player.BPI_PC_Player_C.PCCameraShake_BPI");

	struct UBPI_PC_Player_C_PCCameraShake_BPI_Params {
		class UCameraShakeBase* CameraShake;			//Offset: 0 | ElementSize: 8
		float Scale;			//Offset: 8 | ElementSize: 4
	};
	UBPI_PC_Player_C_PCCameraShake_BPI_Params params;
	params.CameraShake = CameraShake;
	params.Scale = Scale;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_PC_Player.BPI_PC_Player_C.PCCameraShakeFromSource_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CameraShake	Type: class UCameraShakeBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SourceComponent	Type: class UCameraShakeSourceComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_PC_Player_C::PCCameraShakeFromSource_BPI(class UCameraShakeBase* CameraShake, class UCameraShakeSourceComponent* SourceComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PC_Player.BPI_PC_Player_C.PCCameraShakeFromSource_BPI");

	struct UBPI_PC_Player_C_PCCameraShakeFromSource_BPI_Params {
		class UCameraShakeBase* CameraShake;			//Offset: 0 | ElementSize: 8
		class UCameraShakeSourceComponent* SourceComponent;			//Offset: 8 | ElementSize: 8
	};
	UBPI_PC_Player_C_PCCameraShakeFromSource_BPI_Params params;
	params.CameraShake = CameraShake;
	params.SourceComponent = SourceComponent;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_PC_Player.BPI_PC_Player_C.ReleaseInputs_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_PC_Player_C::ReleaseInputs_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PC_Player.BPI_PC_Player_C.ReleaseInputs_BPI");

	struct UBPI_PC_Player_C_ReleaseInputs_BPI_Params {
	};
	UBPI_PC_Player_C_ReleaseInputs_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_PC_Player.BPI_PC_Player_C.ReleaseInputsUI_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_PC_Player_C::ReleaseInputsUI_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PC_Player.BPI_PC_Player_C.ReleaseInputsUI_BPI");

	struct UBPI_PC_Player_C_ReleaseInputsUI_BPI_Params {
	};
	UBPI_PC_Player_C_ReleaseInputsUI_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_PC_Player.BPI_PC_Player_C.GetUIEventScreen_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: EventScreen	Type: class UUserWidget*	Flags: Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_PC_Player_C::GetUIEventScreen_BPI(class UUserWidget** EventScreen) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PC_Player.BPI_PC_Player_C.GetUIEventScreen_BPI");

	struct UBPI_PC_Player_C_GetUIEventScreen_BPI_Params {
		class UUserWidget* EventScreen;			//Offset: 0 | ElementSize: 8
	};
	UBPI_PC_Player_C_GetUIEventScreen_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (EventScreen != nullptr)
		*EventScreen = params.EventScreen;
}

/////////////////////////////////////////////
// Function BPI_PC_Player.BPI_PC_Player_C.ToggleEvent_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CheatStart	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: CheatEnd	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_PC_Player_C::ToggleEvent_BPI(bool CheatStart, bool CheatEnd) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PC_Player.BPI_PC_Player_C.ToggleEvent_BPI");

	struct UBPI_PC_Player_C_ToggleEvent_BPI_Params {
		bool CheatStart;			//Offset: 0 | ElementSize: 1
		bool CheatEnd;			//Offset: 1 | ElementSize: 1
	};
	UBPI_PC_Player_C_ToggleEvent_BPI_Params params;
	params.CheatStart = CheatStart;
	params.CheatEnd = CheatEnd;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_PC_Player.BPI_PC_Player_C.GetTimeManager_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: TimeManager	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_PC_Player_C::GetTimeManager_BPI(class UObject** TimeManager) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PC_Player.BPI_PC_Player_C.GetTimeManager_BPI");

	struct UBPI_PC_Player_C_GetTimeManager_BPI_Params {
		class UObject* TimeManager;			//Offset: 0 | ElementSize: 8
	};
	UBPI_PC_Player_C_GetTimeManager_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (TimeManager != nullptr)
		*TimeManager = params.TimeManager;
}

/////////////////////////////////////////////
// Function BPI_PC_Player.BPI_PC_Player_C.GetVillageJournalManager_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: VillageJournalManager	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_PC_Player_C::GetVillageJournalManager_BPI(class UObject** VillageJournalManager) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PC_Player.BPI_PC_Player_C.GetVillageJournalManager_BPI");

	struct UBPI_PC_Player_C_GetVillageJournalManager_BPI_Params {
		class UObject* VillageJournalManager;			//Offset: 0 | ElementSize: 8
	};
	UBPI_PC_Player_C_GetVillageJournalManager_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (VillageJournalManager != nullptr)
		*VillageJournalManager = params.VillageJournalManager;
}

/////////////////////////////////////////////
// Function BPI_PC_Player.BPI_PC_Player_C.OpenCurrentBookTab_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_PC_Player_C::OpenCurrentBookTab_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PC_Player.BPI_PC_Player_C.OpenCurrentBookTab_BPI");

	struct UBPI_PC_Player_C_OpenCurrentBookTab_BPI_Params {
	};
	UBPI_PC_Player_C_OpenCurrentBookTab_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_PC_Player.BPI_PC_Player_C.UseOnlyControllsForUI_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: UseOnlyControllsForUI	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_PC_Player_C::UseOnlyControllsForUI_BPI(bool* UseOnlyControllsForUI) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PC_Player.BPI_PC_Player_C.UseOnlyControllsForUI_BPI");

	struct UBPI_PC_Player_C_UseOnlyControllsForUI_BPI_Params {
		bool UseOnlyControllsForUI;			//Offset: 0 | ElementSize: 1
	};
	UBPI_PC_Player_C_UseOnlyControllsForUI_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (UseOnlyControllsForUI != nullptr)
		*UseOnlyControllsForUI = params.UseOnlyControllsForUI;
}

/////////////////////////////////////////////
// Function BPI_PC_Player.BPI_PC_Player_C.GetDeathScreen_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: DeathScreen	Type: class UUserWidget*	Flags: Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_PC_Player_C::GetDeathScreen_BPI(class UUserWidget** DeathScreen) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PC_Player.BPI_PC_Player_C.GetDeathScreen_BPI");

	struct UBPI_PC_Player_C_GetDeathScreen_BPI_Params {
		class UUserWidget* DeathScreen;			//Offset: 0 | ElementSize: 8
	};
	UBPI_PC_Player_C_GetDeathScreen_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (DeathScreen != nullptr)
		*DeathScreen = params.DeathScreen;
}

/////////////////////////////////////////////
// Function BPI_PC_Player.BPI_PC_Player_C.ProcessChatCommand_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ChatMessage	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: Output	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_PC_Player_C::ProcessChatCommand_BPI(struct FString ChatMessage, struct FString* Output) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PC_Player.BPI_PC_Player_C.ProcessChatCommand_BPI");

	struct UBPI_PC_Player_C_ProcessChatCommand_BPI_Params {
		struct FString ChatMessage;			//Offset: 0 | ElementSize: 16
		struct FString Output;			//Offset: 16 | ElementSize: 16
	};
	UBPI_PC_Player_C_ProcessChatCommand_BPI_Params params;
	params.ChatMessage = ChatMessage;

	UObject::ProcessEvent(fn, &params);
	if (Output != nullptr)
		*Output = params.Output;
}

#pragma endregion
}