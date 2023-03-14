#include "../SDK.h"
#include "BPI_BaseCharacter_C.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set ALS_Gait BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ALS_Gait	Type: TEnumAsByte<E_Gait>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::Set_ALS_Gait_BPI(TEnumAsByte<E_Gait> ALS_Gait) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set ALS_Gait BPI");

	struct UBPI_BaseCharacter_C_Set_ALS_Gait_BPI_Params {
		TEnumAsByte<E_Gait> ALS_Gait;			//Offset: 0 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_Set_ALS_Gait_BPI_Params params;
	params.ALS_Gait = ALS_Gait;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set ALS_Stance BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ALS_Stance	Type: TEnumAsByte<E_Stance>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::Set_ALS_Stance_BPI(TEnumAsByte<E_Stance> ALS_Stance) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set ALS_Stance BPI");

	struct UBPI_BaseCharacter_C_Set_ALS_Stance_BPI_Params {
		TEnumAsByte<E_Stance> ALS_Stance;			//Offset: 0 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_Set_ALS_Stance_BPI_Params params;
	params.ALS_Stance = ALS_Stance;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set ALS_RotationMode BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ALS_RotationMode_BPI	Type: TEnumAsByte<E_RotationMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::Set_ALS_RotationMode_BPI(TEnumAsByte<E_RotationMode> ALS_RotationMode_BPI) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set ALS_RotationMode BPI");

	struct UBPI_BaseCharacter_C_Set_ALS_RotationMode_BPI_Params {
		TEnumAsByte<E_RotationMode> ALS_RotationMode_BPI;			//Offset: 0 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_Set_ALS_RotationMode_BPI_Params params;
	params.ALS_RotationMode_BPI = ALS_RotationMode_BPI;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set ALS_MovementMode BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ALS_MovementMode	Type: TEnumAsByte<E_MovementMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Force	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::Set_ALS_MovementMode_BPI(TEnumAsByte<E_MovementMode> ALS_MovementMode, bool Force) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set ALS_MovementMode BPI");

	struct UBPI_BaseCharacter_C_Set_ALS_MovementMode_BPI_Params {
		TEnumAsByte<E_MovementMode> ALS_MovementMode;			//Offset: 0 | ElementSize: 1
		bool Force;			//Offset: 1 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_Set_ALS_MovementMode_BPI_Params params;
	params.ALS_MovementMode = ALS_MovementMode;
	params.Force = Force;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_Pivot BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: PivotParams	Type: struct FST_PivotParams	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::AnimNotify_Pivot_BPI(struct FST_PivotParams PivotParams) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_Pivot BPI");

	struct UBPI_BaseCharacter_C_AnimNotify_Pivot_BPI_Params {
		struct FST_PivotParams PivotParams;			//Offset: 0 | ElementSize: 20
	};
	UBPI_BaseCharacter_C_AnimNotify_Pivot_BPI_Params params;
	params.PivotParams = PivotParams;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_TurningInPlace BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: TurnInPlaceMontage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ShouldTurnInPlace	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: TurningInPlace	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: TurningRight	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::AnimNotify_TurningInPlace_BPI(class UAnimMontage* TurnInPlaceMontage, bool ShouldTurnInPlace, bool TurningInPlace, bool TurningRight) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_TurningInPlace BPI");

	struct UBPI_BaseCharacter_C_AnimNotify_TurningInPlace_BPI_Params {
		class UAnimMontage* TurnInPlaceMontage;			//Offset: 0 | ElementSize: 8
		bool ShouldTurnInPlace;			//Offset: 8 | ElementSize: 1
		bool TurningInPlace;			//Offset: 9 | ElementSize: 1
		bool TurningRight;			//Offset: 10 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_AnimNotify_TurningInPlace_BPI_Params params;
	params.TurnInPlaceMontage = TurnInPlaceMontage;
	params.ShouldTurnInPlace = ShouldTurnInPlace;
	params.TurningInPlace = TurningInPlace;
	params.TurningRight = TurningRight;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_IdleEntryState BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IdleEntryState	Type: TEnumAsByte<E_IdleEntryState>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::AnimNotify_IdleEntryState_BPI(TEnumAsByte<E_IdleEntryState> IdleEntryState) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_IdleEntryState BPI");

	struct UBPI_BaseCharacter_C_AnimNotify_IdleEntryState_BPI_Params {
		TEnumAsByte<E_IdleEntryState> IdleEntryState;			//Offset: 0 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_AnimNotify_IdleEntryState_BPI_Params params;
	params.IdleEntryState = IdleEntryState;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set ALS_Aiming BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Aiming	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::Set_ALS_Aiming_BPI(bool Aiming) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set ALS_Aiming BPI");

	struct UBPI_BaseCharacter_C_Set_ALS_Aiming_BPI_Params {
		bool Aiming;			//Offset: 0 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_Set_ALS_Aiming_BPI_Params params;
	params.Aiming = Aiming;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Play_GetUp_Anim BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: FaceDown	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::Play_GetUp_Anim_BPI(bool FaceDown) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Play_GetUp_Anim BPI");

	struct UBPI_BaseCharacter_C_Play_GetUp_Anim_BPI_Params {
		bool FaceDown;			//Offset: 0 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_Play_GetUp_Anim_BPI_Params params;
	params.FaceDown = FaceDown;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.SavePoseSnapshot_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: PoseName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::SavePoseSnapshot_BPI(struct FName PoseName) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.SavePoseSnapshot_BPI");

	struct UBPI_BaseCharacter_C_SavePoseSnapshot_BPI_Params {
		struct FName PoseName;			//Offset: 0 | ElementSize: 8
	};
	UBPI_BaseCharacter_C_SavePoseSnapshot_BPI_Params params;
	params.PoseName = PoseName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AddCharacterRotation_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: AddAmount	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::AddCharacterRotation_BPI(struct FRotator AddAmount) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AddCharacterRotation_BPI");

	struct UBPI_BaseCharacter_C_AddCharacterRotation_BPI_Params {
		struct FRotator AddAmount;			//Offset: 0 | ElementSize: 12
	};
	UBPI_BaseCharacter_C_AddCharacterRotation_BPI_Params params;
	params.AddAmount = AddAmount;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set ALS_ViewMode BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ViewMode	Type: TEnumAsByte<E_ViewMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::Set_ALS_ViewMode_BPI(TEnumAsByte<E_ViewMode> ViewMode) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set ALS_ViewMode BPI");

	struct UBPI_BaseCharacter_C_Set_ALS_ViewMode_BPI_Params {
		TEnumAsByte<E_ViewMode> ViewMode;			//Offset: 0 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_Set_ALS_ViewMode_BPI_Params params;
	params.ViewMode = ViewMode;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.ShowTraces_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ShowTraces	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::ShowTraces_BPI(bool ShowTraces) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.ShowTraces_BPI");

	struct UBPI_BaseCharacter_C_ShowTraces_BPI_Params {
		bool ShowTraces;			//Offset: 0 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_ShowTraces_BPI_Params params;
	params.ShowTraces = ShowTraces;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set WalkingSpeed BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: WalkingSpeed	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::Set_WalkingSpeed_BPI(float WalkingSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set WalkingSpeed BPI");

	struct UBPI_BaseCharacter_C_Set_WalkingSpeed_BPI_Params {
		float WalkingSpeed;			//Offset: 0 | ElementSize: 4
	};
	UBPI_BaseCharacter_C_Set_WalkingSpeed_BPI_Params params;
	params.WalkingSpeed = WalkingSpeed;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set RunningSpeed BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: runningSpeed	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::Set_RunningSpeed_BPI(float runningSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set RunningSpeed BPI");

	struct UBPI_BaseCharacter_C_Set_RunningSpeed_BPI_Params {
		float runningSpeed;			//Offset: 0 | ElementSize: 4
	};
	UBPI_BaseCharacter_C_Set_RunningSpeed_BPI_Params params;
	params.runningSpeed = runningSpeed;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set SprintingSpeed BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: sprintingSpeed	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::Set_SprintingSpeed_BPI(float sprintingSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set SprintingSpeed BPI");

	struct UBPI_BaseCharacter_C_Set_SprintingSpeed_BPI_Params {
		float sprintingSpeed;			//Offset: 0 | ElementSize: 4
	};
	UBPI_BaseCharacter_C_Set_SprintingSpeed_BPI_Params params;
	params.sprintingSpeed = sprintingSpeed;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set CrouchingSpeed BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: crouchingSpeed	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::Set_CrouchingSpeed_BPI(float crouchingSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set CrouchingSpeed BPI");

	struct UBPI_BaseCharacter_C_Set_CrouchingSpeed_BPI_Params {
		float crouchingSpeed;			//Offset: 0 | ElementSize: 4
	};
	UBPI_BaseCharacter_C_Set_CrouchingSpeed_BPI_Params params;
	params.crouchingSpeed = crouchingSpeed;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set RF_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: RF	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::Set_RF_BPI(bool RF) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set RF_BPI");

	struct UBPI_BaseCharacter_C_Set_RF_BPI_Params {
		bool RF;			//Offset: 0 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_Set_RF_BPI_Params params;
	params.RF = RF;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.HoldableAction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: MontagesSettings	Type: TMap<TEnumAsByte<E_AnimInteractionTypes>, struct FST_MontagesSettingsArray>	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: UseLookingDown	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: LookingDownAngle	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Loop	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Attack	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: OverrideMontage	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IgnorePlayingMontage	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SkipLoopStartCheck	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: PlayMode	Type: TEnumAsByte<EBP_Enum_AnimPlayMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AnimID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::HoldableAction(TMap<TEnumAsByte<E_AnimInteractionTypes>, struct FST_MontagesSettingsArray> MontagesSettings, bool UseLookingDown, float LookingDownAngle, bool Loop, bool Attack, bool OverrideMontage, bool IgnorePlayingMontage, bool SkipLoopStartCheck, TEnumAsByte<EBP_Enum_AnimPlayMode> PlayMode, int32_t AnimID) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.HoldableAction");

	struct UBPI_BaseCharacter_C_HoldableAction_Params {
		TMap<TEnumAsByte<E_AnimInteractionTypes>, struct FST_MontagesSettingsArray> MontagesSettings;			//Offset: 0 | ElementSize: 80
		bool UseLookingDown;			//Offset: 80 | ElementSize: 1
		float LookingDownAngle;			//Offset: 84 | ElementSize: 4
		bool Loop;			//Offset: 88 | ElementSize: 1
		bool Attack;			//Offset: 89 | ElementSize: 1
		bool OverrideMontage;			//Offset: 90 | ElementSize: 1
		bool IgnorePlayingMontage;			//Offset: 91 | ElementSize: 1
		bool SkipLoopStartCheck;			//Offset: 92 | ElementSize: 1
		TEnumAsByte<EBP_Enum_AnimPlayMode> PlayMode;			//Offset: 93 | ElementSize: 1
		int32_t AnimID;			//Offset: 96 | ElementSize: 4
	};
	UBPI_BaseCharacter_C_HoldableAction_Params params;
	params.MontagesSettings = MontagesSettings;
	params.UseLookingDown = UseLookingDown;
	params.LookingDownAngle = LookingDownAngle;
	params.Loop = Loop;
	params.Attack = Attack;
	params.OverrideMontage = OverrideMontage;
	params.IgnorePlayingMontage = IgnorePlayingMontage;
	params.SkipLoopStartCheck = SkipLoopStartCheck;
	params.PlayMode = PlayMode;
	params.AnimID = AnimID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.CancelAnimationLoops
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::CancelAnimationLoops() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.CancelAnimationLoops");

	struct UBPI_BaseCharacter_C_CancelAnimationLoops_Params {
	};
	UBPI_BaseCharacter_C_CancelAnimationLoops_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetToolType BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ToolType	Type: TEnumAsByte<E_Tools>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::SetToolType_BPI(TEnumAsByte<E_Tools> ToolType) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetToolType BPI");

	struct UBPI_BaseCharacter_C_SetToolType_BPI_Params {
		TEnumAsByte<E_Tools> ToolType;			//Offset: 0 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_SetToolType_BPI_Params params;
	params.ToolType = ToolType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Get ALS_Stance BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: stance	Type: TEnumAsByte<E_Stance>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::Get_ALS_Stance_BPI(TEnumAsByte<E_Stance>* stance) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Get ALS_Stance BPI");

	struct UBPI_BaseCharacter_C_Get_ALS_Stance_BPI_Params {
		TEnumAsByte<E_Stance> stance;			//Offset: 0 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_Get_ALS_Stance_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (stance != nullptr)
		*stance = params.stance;
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_SnapPoint
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SnapComponent	Type: class USceneComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TargetSnapAlpha	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ResetSnapAlpha	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Reset	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: LeftHandSocketName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: RightHandSocketName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::AnimNotify_SnapPoint(class USceneComponent* SnapComponent, float TargetSnapAlpha, float ResetSnapAlpha, bool Reset, struct FName LeftHandSocketName, struct FName RightHandSocketName) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_SnapPoint");

	struct UBPI_BaseCharacter_C_AnimNotify_SnapPoint_Params {
		class USceneComponent* SnapComponent;			//Offset: 0 | ElementSize: 8
		float TargetSnapAlpha;			//Offset: 8 | ElementSize: 4
		float ResetSnapAlpha;			//Offset: 12 | ElementSize: 4
		bool Reset;			//Offset: 16 | ElementSize: 1
		struct FName LeftHandSocketName;			//Offset: 20 | ElementSize: 8
		struct FName RightHandSocketName;			//Offset: 28 | ElementSize: 8
	};
	UBPI_BaseCharacter_C_AnimNotify_SnapPoint_Params params;
	params.SnapComponent = SnapComponent;
	params.TargetSnapAlpha = TargetSnapAlpha;
	params.ResetSnapAlpha = ResetSnapAlpha;
	params.Reset = Reset;
	params.LeftHandSocketName = LeftHandSocketName;
	params.RightHandSocketName = RightHandSocketName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.ChangeAnimLoopState
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsLooping	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::ChangeAnimLoopState(bool IsLooping) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.ChangeAnimLoopState");

	struct UBPI_BaseCharacter_C_ChangeAnimLoopState_Params {
		bool IsLooping;			//Offset: 0 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_ChangeAnimLoopState_Params params;
	params.IsLooping = IsLooping;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_StartSnappingIK
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::AnimNotify_StartSnappingIK() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_StartSnappingIK");

	struct UBPI_BaseCharacter_C_AnimNotify_StartSnappingIK_Params {
	};
	UBPI_BaseCharacter_C_AnimNotify_StartSnappingIK_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_StopSnappingIK
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::AnimNotify_StopSnappingIK() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_StopSnappingIK");

	struct UBPI_BaseCharacter_C_AnimNotify_StopSnappingIK_Params {
	};
	UBPI_BaseCharacter_C_AnimNotify_StopSnappingIK_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.OnStartStageInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MontageToPlay	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlayRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StartingPosition	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StartingSection	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::OnStartStageInteraction(class AActor* InteractedActor, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.OnStartStageInteraction");

	struct UBPI_BaseCharacter_C_OnStartStageInteraction_Params {
		class AActor* InteractedActor;			//Offset: 0 | ElementSize: 8
		class UAnimMontage* MontageToPlay;			//Offset: 8 | ElementSize: 8
		float PlayRate;			//Offset: 16 | ElementSize: 4
		float StartingPosition;			//Offset: 20 | ElementSize: 4
		struct FName StartingSection;			//Offset: 24 | ElementSize: 8
	};
	UBPI_BaseCharacter_C_OnStartStageInteraction_Params params;
	params.InteractedActor = InteractedActor;
	params.MontageToPlay = MontageToPlay;
	params.PlayRate = PlayRate;
	params.StartingPosition = StartingPosition;
	params.StartingSection = StartingSection;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.OnLoopStageInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MontageToPlay	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlayRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StartingPosition	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StartingSection	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::OnLoopStageInteraction(class AActor* InteractedActor, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.OnLoopStageInteraction");

	struct UBPI_BaseCharacter_C_OnLoopStageInteraction_Params {
		class AActor* InteractedActor;			//Offset: 0 | ElementSize: 8
		class UAnimMontage* MontageToPlay;			//Offset: 8 | ElementSize: 8
		float PlayRate;			//Offset: 16 | ElementSize: 4
		float StartingPosition;			//Offset: 20 | ElementSize: 4
		struct FName StartingSection;			//Offset: 24 | ElementSize: 8
	};
	UBPI_BaseCharacter_C_OnLoopStageInteraction_Params params;
	params.InteractedActor = InteractedActor;
	params.MontageToPlay = MontageToPlay;
	params.PlayRate = PlayRate;
	params.StartingPosition = StartingPosition;
	params.StartingSection = StartingSection;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.OnEndStageInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MontageToPlay	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlayRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StartingPosition	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StartingSection	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::OnEndStageInteraction(class AActor* InteractedActor, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.OnEndStageInteraction");

	struct UBPI_BaseCharacter_C_OnEndStageInteraction_Params {
		class AActor* InteractedActor;			//Offset: 0 | ElementSize: 8
		class UAnimMontage* MontageToPlay;			//Offset: 8 | ElementSize: 8
		float PlayRate;			//Offset: 16 | ElementSize: 4
		float StartingPosition;			//Offset: 20 | ElementSize: 4
		struct FName StartingSection;			//Offset: 24 | ElementSize: 8
	};
	UBPI_BaseCharacter_C_OnEndStageInteraction_Params params;
	params.InteractedActor = InteractedActor;
	params.MontageToPlay = MontageToPlay;
	params.PlayRate = PlayRate;
	params.StartingPosition = StartingPosition;
	params.StartingSection = StartingSection;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.HoldableHitAction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Action_Montage_Settings	Type: struct FST_MontagesSettingsArray	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: PlayMode	Type: TEnumAsByte<EBP_Enum_AnimPlayMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AnimID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IgnorePlayingMontage	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::HoldableHitAction(struct FST_MontagesSettingsArray Action_Montage_Settings, TEnumAsByte<EBP_Enum_AnimPlayMode> PlayMode, int32_t AnimID, bool IgnorePlayingMontage) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.HoldableHitAction");

	struct UBPI_BaseCharacter_C_HoldableHitAction_Params {
		struct FST_MontagesSettingsArray Action_Montage_Settings;			//Offset: 0 | ElementSize: 16
		TEnumAsByte<EBP_Enum_AnimPlayMode> PlayMode;			//Offset: 16 | ElementSize: 1
		int32_t AnimID;			//Offset: 20 | ElementSize: 4
		bool IgnorePlayingMontage;			//Offset: 24 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_HoldableHitAction_Params params;
	params.Action_Montage_Settings = Action_Montage_Settings;
	params.PlayMode = PlayMode;
	params.AnimID = AnimID;
	params.IgnorePlayingMontage = IgnorePlayingMontage;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set Range Strength
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Strength	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::Set_Range_Strength(float Strength) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set Range Strength");

	struct UBPI_BaseCharacter_C_Set_Range_Strength_Params {
		float Strength;			//Offset: 0 | ElementSize: 4
	};
	UBPI_BaseCharacter_C_Set_Range_Strength_Params params;
	params.Strength = Strength;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetStrengthAlpha
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Alpha	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::SetStrengthAlpha(float Alpha) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetStrengthAlpha");

	struct UBPI_BaseCharacter_C_SetStrengthAlpha_Params {
		float Alpha;			//Offset: 0 | ElementSize: 4
	};
	UBPI_BaseCharacter_C_SetStrengthAlpha_Params params;
	params.Alpha = Alpha;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.OverrideCanPerfromHitAction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CanPerfromHitAction	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::OverrideCanPerfromHitAction(bool CanPerfromHitAction) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.OverrideCanPerfromHitAction");

	struct UBPI_BaseCharacter_C_OverrideCanPerfromHitAction_Params {
		bool CanPerfromHitAction;			//Offset: 0 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_OverrideCanPerfromHitAction_Params params;
	params.CanPerfromHitAction = CanPerfromHitAction;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayPickUpAnim
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Instigator	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PreferTwoHanded	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::PlayPickUpAnim(class UObject* Instigator, bool PreferTwoHanded) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayPickUpAnim");

	struct UBPI_BaseCharacter_C_PlayPickUpAnim_Params {
		class UObject* Instigator;			//Offset: 0 | ElementSize: 8
		bool PreferTwoHanded;			//Offset: 8 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_PlayPickUpAnim_Params params;
	params.Instigator = Instigator;
	params.PreferTwoHanded = PreferTwoHanded;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayerMoveForInteraction
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Instigator	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Target	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: LookAtTarget	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: RotateDuringMovement	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: UsePlayerLookAt	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ResetLookAtPitch	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::PlayerMoveForInteraction(class AActor* Instigator, struct FVector Target, struct FVector LookAtTarget, bool RotateDuringMovement, bool UsePlayerLookAt, bool ResetLookAtPitch) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayerMoveForInteraction");

	struct UBPI_BaseCharacter_C_PlayerMoveForInteraction_Params {
		class AActor* Instigator;			//Offset: 0 | ElementSize: 8
		struct FVector Target;			//Offset: 8 | ElementSize: 12
		struct FVector LookAtTarget;			//Offset: 20 | ElementSize: 12
		bool RotateDuringMovement;			//Offset: 32 | ElementSize: 1
		bool UsePlayerLookAt;			//Offset: 33 | ElementSize: 1
		bool ResetLookAtPitch;			//Offset: 34 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_PlayerMoveForInteraction_Params params;
	params.Instigator = Instigator;
	params.Target = Target;
	params.LookAtTarget = LookAtTarget;
	params.RotateDuringMovement = RotateDuringMovement;
	params.UsePlayerLookAt = UsePlayerLookAt;
	params.ResetLookAtPitch = ResetLookAtPitch;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetCurrentPickUpAnim
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: PickUpMontage	Type: class UAnimMontage*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::GetCurrentPickUpAnim(class UAnimMontage** PickUpMontage) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetCurrentPickUpAnim");

	struct UBPI_BaseCharacter_C_GetCurrentPickUpAnim_Params {
		class UAnimMontage* PickUpMontage;			//Offset: 0 | ElementSize: 8
	};
	UBPI_BaseCharacter_C_GetCurrentPickUpAnim_Params params;

	UObject::ProcessEvent(fn, &params);
	if (PickUpMontage != nullptr)
		*PickUpMontage = params.PickUpMontage;
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetIsAnyMontageFromMapPlaying
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Return_Value	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::GetIsAnyMontageFromMapPlaying(bool* Return_Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetIsAnyMontageFromMapPlaying");

	struct UBPI_BaseCharacter_C_GetIsAnyMontageFromMapPlaying_Params {
		bool Return_Value;			//Offset: 0 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_GetIsAnyMontageFromMapPlaying_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetMontageType
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Montage_Type	Type: TEnumAsByte<E_AnimInteractionTypes>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::SetMontageType(TEnumAsByte<E_AnimInteractionTypes> Montage_Type) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetMontageType");

	struct UBPI_BaseCharacter_C_SetMontageType_Params {
		TEnumAsByte<E_AnimInteractionTypes> Montage_Type;			//Offset: 0 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_SetMontageType_Params params;
	params.Montage_Type = Montage_Type;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayerLookAt
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Target	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TargetLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::PlayerLookAt(class AActor* Target, struct FVector TargetLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayerLookAt");

	struct UBPI_BaseCharacter_C_PlayerLookAt_Params {
		class AActor* Target;			//Offset: 0 | ElementSize: 8
		struct FVector TargetLocation;			//Offset: 8 | ElementSize: 12
	};
	UBPI_BaseCharacter_C_PlayerLookAt_Params params;
	params.Target = Target;
	params.TargetLocation = TargetLocation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_StopRotation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: StopRotationInput	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::AnimNotify_StopRotation(bool StopRotationInput) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_StopRotation");

	struct UBPI_BaseCharacter_C_AnimNotify_StopRotation_Params {
		bool StopRotationInput;			//Offset: 0 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_AnimNotify_StopRotation_Params params;
	params.StopRotationInput = StopRotationInput;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_StopMovement
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: bStopMovementInput	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::AnimNotify_StopMovement(bool bStopMovementInput) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_StopMovement");

	struct UBPI_BaseCharacter_C_AnimNotify_StopMovement_Params {
		bool bStopMovementInput;			//Offset: 0 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_AnimNotify_StopMovement_Params params;
	params.bStopMovementInput = bStopMovementInput;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set Sleeping BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sleeping	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SleepingDirection	Type: TEnumAsByte<E_SleepingDirection>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: UseBedSleepingPose	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::Set_Sleeping_BPI(bool Sleeping, TEnumAsByte<E_SleepingDirection> SleepingDirection, bool UseBedSleepingPose) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set Sleeping BPI");

	struct UBPI_BaseCharacter_C_Set_Sleeping_BPI_Params {
		bool Sleeping;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_SleepingDirection> SleepingDirection;			//Offset: 1 | ElementSize: 1
		bool UseBedSleepingPose;			//Offset: 2 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_Set_Sleeping_BPI_Params params;
	params.Sleeping = Sleeping;
	params.SleepingDirection = SleepingDirection;
	params.UseBedSleepingPose = UseBedSleepingPose;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set Sitting BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sitting	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SitDownPosition	Type: TEnumAsByte<E_SitDownPosition>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SittingType	Type: TEnumAsByte<E_SittingType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::Set_Sitting_BPI(bool Sitting, TEnumAsByte<E_SitDownPosition> SitDownPosition, TEnumAsByte<E_SittingType> SittingType) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set Sitting BPI");

	struct UBPI_BaseCharacter_C_Set_Sitting_BPI_Params {
		bool Sitting;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_SitDownPosition> SitDownPosition;			//Offset: 1 | ElementSize: 1
		TEnumAsByte<E_SittingType> SittingType;			//Offset: 2 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_Set_Sitting_BPI_Params params;
	params.Sitting = Sitting;
	params.SitDownPosition = SitDownPosition;
	params.SittingType = SittingType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayCraftingAnimation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: WorkbenchType	Type: TEnumAsByte<E_Workbenches>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CraftingTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CancelAnimation	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::PlayCraftingAnimation(TEnumAsByte<E_Workbenches> WorkbenchType, float CraftingTime, bool CancelAnimation) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayCraftingAnimation");

	struct UBPI_BaseCharacter_C_PlayCraftingAnimation_Params {
		TEnumAsByte<E_Workbenches> WorkbenchType;			//Offset: 0 | ElementSize: 1
		float CraftingTime;			//Offset: 4 | ElementSize: 4
		bool CancelAnimation;			//Offset: 8 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_PlayCraftingAnimation_Params params;
	params.WorkbenchType = WorkbenchType;
	params.CraftingTime = CraftingTime;
	params.CancelAnimation = CancelAnimation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_SpawnAnimItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ItemClass	Type: TAssetPtr<class UClass>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: IsOffHand	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::AnimNotify_SpawnAnimItem(TAssetPtr<class UClass> ItemClass, bool IsOffHand) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_SpawnAnimItem");

	struct UBPI_BaseCharacter_C_AnimNotify_SpawnAnimItem_Params {
		TAssetPtr<class UClass> ItemClass;			//Offset: 0 | ElementSize: 40
		bool IsOffHand;			//Offset: 40 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_AnimNotify_SpawnAnimItem_Params params;
	params.ItemClass = ItemClass;
	params.IsOffHand = IsOffHand;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_DespawnAnimItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: HoldablesToDespawn	Type: TEnumAsByte<E_HandsForHolstering>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::AnimNotify_DespawnAnimItem(TEnumAsByte<E_HandsForHolstering> HoldablesToDespawn) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_DespawnAnimItem");

	struct UBPI_BaseCharacter_C_AnimNotify_DespawnAnimItem_Params {
		TEnumAsByte<E_HandsForHolstering> HoldablesToDespawn;			//Offset: 0 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_AnimNotify_DespawnAnimItem_Params params;
	params.HoldablesToDespawn = HoldablesToDespawn;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_HolsterWeapon
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::AnimNotify_HolsterWeapon() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_HolsterWeapon");

	struct UBPI_BaseCharacter_C_AnimNotify_HolsterWeapon_Params {
	};
	UBPI_BaseCharacter_C_AnimNotify_HolsterWeapon_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.SelectPickUpAnim
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Instigator	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PreferTwoHanded	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: PlayAnimSound	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::SelectPickUpAnim(class UObject* Instigator, bool PreferTwoHanded, bool PlayAnimSound) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.SelectPickUpAnim");

	struct UBPI_BaseCharacter_C_SelectPickUpAnim_Params {
		class UObject* Instigator;			//Offset: 0 | ElementSize: 8
		bool PreferTwoHanded;			//Offset: 8 | ElementSize: 1
		bool PlayAnimSound;			//Offset: 9 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_SelectPickUpAnim_Params params;
	params.Instigator = Instigator;
	params.PreferTwoHanded = PreferTwoHanded;
	params.PlayAnimSound = PlayAnimSound;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetMontageSettings
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: MontagesSettings	Type: TMap<TEnumAsByte<E_AnimInteractionTypes>, struct FST_MontagesSettingsArray>	Flags: BlueprintVisible, BlueprintReadOnly, Parm
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::SetMontageSettings(TMap<TEnumAsByte<E_AnimInteractionTypes>, struct FST_MontagesSettingsArray> MontagesSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetMontageSettings");

	struct UBPI_BaseCharacter_C_SetMontageSettings_Params {
		TMap<TEnumAsByte<E_AnimInteractionTypes>, struct FST_MontagesSettingsArray> MontagesSettings;			//Offset: 0 | ElementSize: 80
	};
	UBPI_BaseCharacter_C_SetMontageSettings_Params params;
	params.MontagesSettings = MontagesSettings;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set IdleState BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsInIdleState	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IdleState	Type: TEnumAsByte<E_IdleStates>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::Set_IdleState_BPI(bool IsInIdleState, TEnumAsByte<E_IdleStates> IdleState) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set IdleState BPI");

	struct UBPI_BaseCharacter_C_Set_IdleState_BPI_Params {
		bool IsInIdleState;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_IdleStates> IdleState;			//Offset: 1 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_Set_IdleState_BPI_Params params;
	params.IsInIdleState = IsInIdleState;
	params.IdleState = IdleState;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetProfession
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::GetProfession(TEnumAsByte<E_Profession>* Profession) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetProfession");

	struct UBPI_BaseCharacter_C_GetProfession_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_GetProfession_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Profession != nullptr)
		*Profession = params.Profession;
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetHeadTransform
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: HeadTransform	Type: struct FTransform	Flags: Parm, OutParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::GetHeadTransform(struct FTransform* HeadTransform) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetHeadTransform");

	struct UBPI_BaseCharacter_C_GetHeadTransform_Params {
		struct FTransform HeadTransform;			//Offset: 0 | ElementSize: 48
	};
	UBPI_BaseCharacter_C_GetHeadTransform_Params params;

	UObject::ProcessEvent(fn, &params);
	if (HeadTransform != nullptr)
		*HeadTransform = params.HeadTransform;
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayHolsterAnimation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ToolType	Type: TEnumAsByte<E_Tools>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Duration	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TakeOutDuration	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::PlayHolsterAnimation(float PlayRate, TEnumAsByte<E_Tools> ToolType, float* Duration, float* TakeOutDuration) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayHolsterAnimation");

	struct UBPI_BaseCharacter_C_PlayHolsterAnimation_Params {
		float PlayRate;			//Offset: 0 | ElementSize: 4
		TEnumAsByte<E_Tools> ToolType;			//Offset: 4 | ElementSize: 1
		float Duration;			//Offset: 8 | ElementSize: 4
		float TakeOutDuration;			//Offset: 12 | ElementSize: 4
	};
	UBPI_BaseCharacter_C_PlayHolsterAnimation_Params params;
	params.PlayRate = PlayRate;
	params.ToolType = ToolType;

	UObject::ProcessEvent(fn, &params);
	if (Duration != nullptr)
		*Duration = params.Duration;
	if (TakeOutDuration != nullptr)
		*TakeOutDuration = params.TakeOutDuration;
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set WorkState BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsWorking	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ProfessionState	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Loops	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SkipEndAnim	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::Set_WorkState_BPI(bool IsWorking, TEnumAsByte<E_Profession> Profession, unsigned char ProfessionState, int32_t Loops, bool SkipEndAnim) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set WorkState BPI");

	struct UBPI_BaseCharacter_C_Set_WorkState_BPI_Params {
		bool IsWorking;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_Profession> Profession;			//Offset: 1 | ElementSize: 1
		unsigned char ProfessionState;			//Offset: 2 | ElementSize: 1
		int32_t Loops;			//Offset: 4 | ElementSize: 4
		bool SkipEndAnim;			//Offset: 8 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_Set_WorkState_BPI_Params params;
	params.IsWorking = IsWorking;
	params.Profession = Profession;
	params.ProfessionState = ProfessionState;
	params.Loops = Loops;
	params.SkipEndAnim = SkipEndAnim;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_WorkMontageComplete
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ProfessionState	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::AnimNotify_WorkMontageComplete(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_WorkMontageComplete");

	struct UBPI_BaseCharacter_C_AnimNotify_WorkMontageComplete_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		class UAnimMontage* Montage;			//Offset: 8 | ElementSize: 8
		unsigned char ProfessionState;			//Offset: 16 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_AnimNotify_WorkMontageComplete_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.ProfessionState = ProfessionState;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_WorkMontageInterrupted
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ProfessionState	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::AnimNotify_WorkMontageInterrupted(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_WorkMontageInterrupted");

	struct UBPI_BaseCharacter_C_AnimNotify_WorkMontageInterrupted_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		class UAnimMontage* Montage;			//Offset: 8 | ElementSize: 8
		unsigned char ProfessionState;			//Offset: 16 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_AnimNotify_WorkMontageInterrupted_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.ProfessionState = ProfessionState;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_WorkLoopIncreased
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ProfessionState	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Loop	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::AnimNotify_WorkLoopIncreased(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState, int32_t Loop) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_WorkLoopIncreased");

	struct UBPI_BaseCharacter_C_AnimNotify_WorkLoopIncreased_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		class UAnimMontage* Montage;			//Offset: 8 | ElementSize: 8
		unsigned char ProfessionState;			//Offset: 16 | ElementSize: 1
		int32_t Loop;			//Offset: 20 | ElementSize: 4
	};
	UBPI_BaseCharacter_C_AnimNotify_WorkLoopIncreased_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.ProfessionState = ProfessionState;
	params.Loop = Loop;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_WorkLoopsFinished
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ProfessionState	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Loop	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::AnimNotify_WorkLoopsFinished(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState, int32_t Loop) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_WorkLoopsFinished");

	struct UBPI_BaseCharacter_C_AnimNotify_WorkLoopsFinished_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		class UAnimMontage* Montage;			//Offset: 8 | ElementSize: 8
		unsigned char ProfessionState;			//Offset: 16 | ElementSize: 1
		int32_t Loop;			//Offset: 20 | ElementSize: 4
	};
	UBPI_BaseCharacter_C_AnimNotify_WorkLoopsFinished_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.ProfessionState = ProfessionState;
	params.Loop = Loop;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set BreakState BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsTakingBreak	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: RandomizeAnim	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: BreakAnimID	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BreakType	Type: TEnumAsByte<E_AnimBreakType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Loops	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::Set_BreakState_BPI(bool IsTakingBreak, TEnumAsByte<E_Profession> Profession, bool RandomizeAnim, unsigned char BreakAnimID, TEnumAsByte<E_AnimBreakType> BreakType, int32_t Loops) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set BreakState BPI");

	struct UBPI_BaseCharacter_C_Set_BreakState_BPI_Params {
		bool IsTakingBreak;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_Profession> Profession;			//Offset: 1 | ElementSize: 1
		bool RandomizeAnim;			//Offset: 2 | ElementSize: 1
		unsigned char BreakAnimID;			//Offset: 3 | ElementSize: 1
		TEnumAsByte<E_AnimBreakType> BreakType;			//Offset: 4 | ElementSize: 1
		int32_t Loops;			//Offset: 8 | ElementSize: 4
	};
	UBPI_BaseCharacter_C_Set_BreakState_BPI_Params params;
	params.IsTakingBreak = IsTakingBreak;
	params.Profession = Profession;
	params.RandomizeAnim = RandomizeAnim;
	params.BreakAnimID = BreakAnimID;
	params.BreakType = BreakType;
	params.Loops = Loops;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_BreakMontageComplete
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BreakAnimID	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::AnimNotify_BreakMontageComplete(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_BreakMontageComplete");

	struct UBPI_BaseCharacter_C_AnimNotify_BreakMontageComplete_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		class UAnimMontage* Montage;			//Offset: 8 | ElementSize: 8
		unsigned char BreakAnimID;			//Offset: 16 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_AnimNotify_BreakMontageComplete_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.BreakAnimID = BreakAnimID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_BreakMontageBlendOut
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BreakAnimID	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::AnimNotify_BreakMontageBlendOut(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_BreakMontageBlendOut");

	struct UBPI_BaseCharacter_C_AnimNotify_BreakMontageBlendOut_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		class UAnimMontage* Montage;			//Offset: 8 | ElementSize: 8
		unsigned char BreakAnimID;			//Offset: 16 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_AnimNotify_BreakMontageBlendOut_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.BreakAnimID = BreakAnimID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_BreakMontageInterrupted
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BreakAnimID	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::AnimNotify_BreakMontageInterrupted(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_BreakMontageInterrupted");

	struct UBPI_BaseCharacter_C_AnimNotify_BreakMontageInterrupted_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		class UAnimMontage* Montage;			//Offset: 8 | ElementSize: 8
		unsigned char BreakAnimID;			//Offset: 16 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_AnimNotify_BreakMontageInterrupted_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.BreakAnimID = BreakAnimID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetIsInWater
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InWater	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Intensity	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::SetIsInWater(bool InWater, float Intensity) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetIsInWater");

	struct UBPI_BaseCharacter_C_SetIsInWater_Params {
		bool InWater;			//Offset: 0 | ElementSize: 1
		float Intensity;			//Offset: 4 | ElementSize: 4
	};
	UBPI_BaseCharacter_C_SetIsInWater_Params params;
	params.InWater = InWater;
	params.Intensity = Intensity;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetBaseCharacterWorldLocation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Location	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::GetBaseCharacterWorldLocation(struct FVector* Location) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetBaseCharacterWorldLocation");

	struct UBPI_BaseCharacter_C_GetBaseCharacterWorldLocation_Params {
		struct FVector Location;			//Offset: 0 | ElementSize: 12
	};
	UBPI_BaseCharacter_C_GetBaseCharacterWorldLocation_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Location != nullptr)
		*Location = params.Location;
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.StopHolsterAnimation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BlendOutTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::StopHolsterAnimation(float BlendOutTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.StopHolsterAnimation");

	struct UBPI_BaseCharacter_C_StopHolsterAnimation_Params {
		float BlendOutTime;			//Offset: 0 | ElementSize: 4
	};
	UBPI_BaseCharacter_C_StopHolsterAnimation_Params params;
	params.BlendOutTime = BlendOutTime;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.WaitForCrafting
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::WaitForCrafting() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.WaitForCrafting");

	struct UBPI_BaseCharacter_C_WaitForCrafting_Params {
	};
	UBPI_BaseCharacter_C_WaitForCrafting_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.ForceStanding
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::ForceStanding() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.ForceStanding");

	struct UBPI_BaseCharacter_C_ForceStanding_Params {
	};
	UBPI_BaseCharacter_C_ForceStanding_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_BreakLoopIncreased
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BreakAnimID	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Loop	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::AnimNotify_BreakLoopIncreased(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID, int32_t Loop) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_BreakLoopIncreased");

	struct UBPI_BaseCharacter_C_AnimNotify_BreakLoopIncreased_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		class UAnimMontage* Montage;			//Offset: 8 | ElementSize: 8
		unsigned char BreakAnimID;			//Offset: 16 | ElementSize: 1
		int32_t Loop;			//Offset: 20 | ElementSize: 4
	};
	UBPI_BaseCharacter_C_AnimNotify_BreakLoopIncreased_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.BreakAnimID = BreakAnimID;
	params.Loop = Loop;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_BreakLoopsFinished
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Montage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BreakAnimID	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Loop	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::AnimNotify_BreakLoopsFinished(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID, int32_t Loop) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_BreakLoopsFinished");

	struct UBPI_BaseCharacter_C_AnimNotify_BreakLoopsFinished_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
		class UAnimMontage* Montage;			//Offset: 8 | ElementSize: 8
		unsigned char BreakAnimID;			//Offset: 16 | ElementSize: 1
		int32_t Loop;			//Offset: 20 | ElementSize: 4
	};
	UBPI_BaseCharacter_C_AnimNotify_BreakLoopsFinished_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.BreakAnimID = BreakAnimID;
	params.Loop = Loop;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_AnimObjectNotify
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ObjectToNotify	Type: TEnumAsByte<E_NotifyObject>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NotifyName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::AnimNotify_AnimObjectNotify(TEnumAsByte<E_NotifyObject> ObjectToNotify, struct FName NotifyName) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_AnimObjectNotify");

	struct UBPI_BaseCharacter_C_AnimNotify_AnimObjectNotify_Params {
		TEnumAsByte<E_NotifyObject> ObjectToNotify;			//Offset: 0 | ElementSize: 1
		struct FName NotifyName;			//Offset: 4 | ElementSize: 8
	};
	UBPI_BaseCharacter_C_AnimNotify_AnimObjectNotify_Params params;
	params.ObjectToNotify = ObjectToNotify;
	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Knockback
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: KnockbackDirection	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: KnockbackStrength	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::Knockback(struct FVector KnockbackDirection, float KnockbackStrength) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Knockback");

	struct UBPI_BaseCharacter_C_Knockback_Params {
		struct FVector KnockbackDirection;			//Offset: 0 | ElementSize: 12
		float KnockbackStrength;			//Offset: 12 | ElementSize: 4
	};
	UBPI_BaseCharacter_C_Knockback_Params params;
	params.KnockbackDirection = KnockbackDirection;
	params.KnockbackStrength = KnockbackStrength;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set IdlePoseByID BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Idle_State	Type: TEnumAsByte<E_IdleStates>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PoseID	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DoAfterPose	Type: TEnumAsByte<E_AfterIdlePose>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::Set_IdlePoseByID_BPI(TEnumAsByte<E_IdleStates> Idle_State, unsigned char PoseID, TEnumAsByte<E_AfterIdlePose> DoAfterPose) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set IdlePoseByID BPI");

	struct UBPI_BaseCharacter_C_Set_IdlePoseByID_BPI_Params {
		TEnumAsByte<E_IdleStates> Idle_State;			//Offset: 0 | ElementSize: 1
		unsigned char PoseID;			//Offset: 1 | ElementSize: 1
		TEnumAsByte<E_AfterIdlePose> DoAfterPose;			//Offset: 2 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_Set_IdlePoseByID_BPI_Params params;
	params.Idle_State = Idle_State;
	params.PoseID = PoseID;
	params.DoAfterPose = DoAfterPose;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.OnDeath
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::OnDeath() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.OnDeath");

	struct UBPI_BaseCharacter_C_OnDeath_Params {
	};
	UBPI_BaseCharacter_C_OnDeath_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetIsInDialogue_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsInDialogue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::GetIsInDialogue_BPI(bool* IsInDialogue) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetIsInDialogue_BPI");

	struct UBPI_BaseCharacter_C_GetIsInDialogue_BPI_Params {
		bool IsInDialogue;			//Offset: 0 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_GetIsInDialogue_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsInDialogue != nullptr)
		*IsInDialogue = params.IsInDialogue;
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set Caught Prey BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CaughtPrey	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::Set_Caught_Prey_BPI(bool CaughtPrey) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set Caught Prey BPI");

	struct UBPI_BaseCharacter_C_Set_Caught_Prey_BPI_Params {
		bool CaughtPrey;			//Offset: 0 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_Set_Caught_Prey_BPI_Params params;
	params.CaughtPrey = CaughtPrey;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetProfessionData
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ProfessionData	Type: struct FST_Profession	Flags: Parm, OutParm, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::GetProfessionData(struct FST_Profession* ProfessionData) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetProfessionData");

	struct UBPI_BaseCharacter_C_GetProfessionData_Params {
		struct FST_Profession ProfessionData;			//Offset: 0 | ElementSize: 72
	};
	UBPI_BaseCharacter_C_GetProfessionData_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ProfessionData != nullptr)
		*ProfessionData = params.ProfessionData;
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayMountAnimation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Position	Type: EMountingDirection	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Type	Type: TEnumAsByte<E_MountAnimType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::PlayMountAnimation(EMountingDirection Position, TEnumAsByte<E_MountAnimType> Type, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayMountAnimation");

	struct UBPI_BaseCharacter_C_PlayMountAnimation_Params {
		EMountingDirection Position;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_MountAnimType> Type;			//Offset: 1 | ElementSize: 1
		bool Success;			//Offset: 2 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_PlayMountAnimation_Params params;
	params.Position = Position;
	params.Type = Type;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayMountStopAnimation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: AnimIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::PlayMountStopAnimation(int32_t AnimIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayMountStopAnimation");

	struct UBPI_BaseCharacter_C_PlayMountStopAnimation_Params {
		int32_t AnimIndex;			//Offset: 0 | ElementSize: 4
	};
	UBPI_BaseCharacter_C_PlayMountStopAnimation_Params params;
	params.AnimIndex = AnimIndex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayMountSpecial
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::PlayMountSpecial() {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayMountSpecial");

	struct UBPI_BaseCharacter_C_PlayMountSpecial_Params {
	};
	UBPI_BaseCharacter_C_PlayMountSpecial_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.UpdateIKAlpha
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Alpha	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Enabled	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::UpdateIKAlpha(float Alpha, bool Enabled) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.UpdateIKAlpha");

	struct UBPI_BaseCharacter_C_UpdateIKAlpha_Params {
		float Alpha;			//Offset: 0 | ElementSize: 4
		bool Enabled;			//Offset: 4 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_UpdateIKAlpha_Params params;
	params.Alpha = Alpha;
	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetProfessionData
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ProfessionData	Type: struct FST_Profession	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::SetProfessionData(struct FST_Profession ProfessionData) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetProfessionData");

	struct UBPI_BaseCharacter_C_SetProfessionData_Params {
		struct FST_Profession ProfessionData;			//Offset: 0 | ElementSize: 72
	};
	UBPI_BaseCharacter_C_SetProfessionData_Params params;
	params.ProfessionData = ProfessionData;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetEnableIK_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IK_Enabled	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::SetEnableIK_BPI(bool IK_Enabled) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetEnableIK_BPI");

	struct UBPI_BaseCharacter_C_SetEnableIK_BPI_Params {
		bool IK_Enabled;			//Offset: 0 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_SetEnableIK_BPI_Params params;
	params.IK_Enabled = IK_Enabled;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetMountAnimalType BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: MountAnimalType	Type: TEnumAsByte<E_AnimalType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::SetMountAnimalType_BPI(TEnumAsByte<E_AnimalType> MountAnimalType) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetMountAnimalType BPI");

	struct UBPI_BaseCharacter_C_SetMountAnimalType_BPI_Params {
		TEnumAsByte<E_AnimalType> MountAnimalType;			//Offset: 0 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_SetMountAnimalType_BPI_Params params;
	params.MountAnimalType = MountAnimalType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetPhysicsHandle
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: PhysicsHandle	Type: class UPhysicsHandleComponent*	Flags: Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::GetPhysicsHandle(class UPhysicsHandleComponent** PhysicsHandle) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetPhysicsHandle");

	struct UBPI_BaseCharacter_C_GetPhysicsHandle_Params {
		class UPhysicsHandleComponent* PhysicsHandle;			//Offset: 0 | ElementSize: 8
	};
	UBPI_BaseCharacter_C_GetPhysicsHandle_Params params;

	UObject::ProcessEvent(fn, &params);
	if (PhysicsHandle != nullptr)
		*PhysicsHandle = params.PhysicsHandle;
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetInteractionEndpoint
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Distance	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: EndPoint	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::GetInteractionEndpoint(float Distance, struct FVector* EndPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetInteractionEndpoint");

	struct UBPI_BaseCharacter_C_GetInteractionEndpoint_Params {
		float Distance;			//Offset: 0 | ElementSize: 4
		struct FVector EndPoint;			//Offset: 4 | ElementSize: 12
	};
	UBPI_BaseCharacter_C_GetInteractionEndpoint_Params params;
	params.Distance = Distance;

	UObject::ProcessEvent(fn, &params);
	if (EndPoint != nullptr)
		*EndPoint = params.EndPoint;
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.UpdateCraftingNumbers BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ToCraft	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CurrentCraft	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CraftTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::UpdateCraftingNumbers_BPI(int32_t ToCraft, int32_t CurrentCraft, float CraftTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.UpdateCraftingNumbers BPI");

	struct UBPI_BaseCharacter_C_UpdateCraftingNumbers_BPI_Params {
		int32_t ToCraft;			//Offset: 0 | ElementSize: 4
		int32_t CurrentCraft;			//Offset: 4 | ElementSize: 4
		float CraftTime;			//Offset: 8 | ElementSize: 4
	};
	UBPI_BaseCharacter_C_UpdateCraftingNumbers_BPI_Params params;
	params.ToCraft = ToCraft;
	params.CurrentCraft = CurrentCraft;
	params.CraftTime = CraftTime;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetAnimalRepelStat BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: AnimalRepel	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::GetAnimalRepelStat_BPI(bool* AnimalRepel) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetAnimalRepelStat BPI");

	struct UBPI_BaseCharacter_C_GetAnimalRepelStat_BPI_Params {
		bool AnimalRepel;			//Offset: 0 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_GetAnimalRepelStat_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (AnimalRepel != nullptr)
		*AnimalRepel = params.AnimalRepel;
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayAttackAnimation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ToolType	Type: TEnumAsByte<E_Tools>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Random	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: animationId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Duration	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::PlayAttackAnimation(float PlayRate, TEnumAsByte<E_Tools> ToolType, bool Random, int32_t animationId, float* Duration) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayAttackAnimation");

	struct UBPI_BaseCharacter_C_PlayAttackAnimation_Params {
		float PlayRate;			//Offset: 0 | ElementSize: 4
		TEnumAsByte<E_Tools> ToolType;			//Offset: 4 | ElementSize: 1
		bool Random;			//Offset: 5 | ElementSize: 1
		int32_t animationId;			//Offset: 8 | ElementSize: 4
		float Duration;			//Offset: 12 | ElementSize: 4
	};
	UBPI_BaseCharacter_C_PlayAttackAnimation_Params params;
	params.PlayRate = PlayRate;
	params.ToolType = ToolType;
	params.Random = Random;
	params.animationId = animationId;

	UObject::ProcessEvent(fn, &params);
	if (Duration != nullptr)
		*Duration = params.Duration;
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayDodgeAnimation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ToolType	Type: TEnumAsByte<E_Tools>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Random	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: animationId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Direction	Type: TEnumAsByte<E_AnimDirection>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Movement	Type: TEnumAsByte<E_AnimMovement>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Duration	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::PlayDodgeAnimation(float PlayRate, TEnumAsByte<E_Tools> ToolType, bool Random, int32_t animationId, TEnumAsByte<E_AnimDirection> Direction, TEnumAsByte<E_AnimMovement> Movement, float* Duration) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayDodgeAnimation");

	struct UBPI_BaseCharacter_C_PlayDodgeAnimation_Params {
		float PlayRate;			//Offset: 0 | ElementSize: 4
		TEnumAsByte<E_Tools> ToolType;			//Offset: 4 | ElementSize: 1
		bool Random;			//Offset: 5 | ElementSize: 1
		int32_t animationId;			//Offset: 8 | ElementSize: 4
		TEnumAsByte<E_AnimDirection> Direction;			//Offset: 12 | ElementSize: 1
		TEnumAsByte<E_AnimMovement> Movement;			//Offset: 13 | ElementSize: 1
		float Duration;			//Offset: 16 | ElementSize: 4
	};
	UBPI_BaseCharacter_C_PlayDodgeAnimation_Params params;
	params.PlayRate = PlayRate;
	params.ToolType = ToolType;
	params.Random = Random;
	params.animationId = animationId;
	params.Direction = Direction;
	params.Movement = Movement;

	UObject::ProcessEvent(fn, &params);
	if (Duration != nullptr)
		*Duration = params.Duration;
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayBlockAnimation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ToolType	Type: TEnumAsByte<E_Tools>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Random	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: animationId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Duration	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::PlayBlockAnimation(float PlayRate, TEnumAsByte<E_Tools> ToolType, bool Random, int32_t animationId, float* Duration) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayBlockAnimation");

	struct UBPI_BaseCharacter_C_PlayBlockAnimation_Params {
		float PlayRate;			//Offset: 0 | ElementSize: 4
		TEnumAsByte<E_Tools> ToolType;			//Offset: 4 | ElementSize: 1
		bool Random;			//Offset: 5 | ElementSize: 1
		int32_t animationId;			//Offset: 8 | ElementSize: 4
		float Duration;			//Offset: 12 | ElementSize: 4
	};
	UBPI_BaseCharacter_C_PlayBlockAnimation_Params params;
	params.PlayRate = PlayRate;
	params.ToolType = ToolType;
	params.Random = Random;
	params.animationId = animationId;

	UObject::ProcessEvent(fn, &params);
	if (Duration != nullptr)
		*Duration = params.Duration;
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayHitAnimation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ToolType	Type: TEnumAsByte<E_Tools>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Random	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: animationId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Duration	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::PlayHitAnimation(float PlayRate, TEnumAsByte<E_Tools> ToolType, bool Random, int32_t animationId, float* Duration) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayHitAnimation");

	struct UBPI_BaseCharacter_C_PlayHitAnimation_Params {
		float PlayRate;			//Offset: 0 | ElementSize: 4
		TEnumAsByte<E_Tools> ToolType;			//Offset: 4 | ElementSize: 1
		bool Random;			//Offset: 5 | ElementSize: 1
		int32_t animationId;			//Offset: 8 | ElementSize: 4
		float Duration;			//Offset: 12 | ElementSize: 4
	};
	UBPI_BaseCharacter_C_PlayHitAnimation_Params params;
	params.PlayRate = PlayRate;
	params.ToolType = ToolType;
	params.Random = Random;
	params.animationId = animationId;

	UObject::ProcessEvent(fn, &params);
	if (Duration != nullptr)
		*Duration = params.Duration;
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetToolType BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ToolType	Type: TEnumAsByte<E_Tools>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::GetToolType_BPI(TEnumAsByte<E_Tools>* ToolType) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetToolType BPI");

	struct UBPI_BaseCharacter_C_GetToolType_BPI_Params {
		TEnumAsByte<E_Tools> ToolType;			//Offset: 0 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_GetToolType_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ToolType != nullptr)
		*ToolType = params.ToolType;
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetBlocking BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Blocking	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::SetBlocking_BPI(bool Blocking) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetBlocking BPI");

	struct UBPI_BaseCharacter_C_SetBlocking_BPI_Params {
		bool Blocking;			//Offset: 0 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_SetBlocking_BPI_Params params;
	params.Blocking = Blocking;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetIsBlocking BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Blocking	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::GetIsBlocking_BPI(bool* Blocking) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetIsBlocking BPI");

	struct UBPI_BaseCharacter_C_GetIsBlocking_BPI_Params {
		bool Blocking;			//Offset: 0 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_GetIsBlocking_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Blocking != nullptr)
		*Blocking = params.Blocking;
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetCraftingAnimation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: WorkbenchType	Type: TEnumAsByte<E_Workbenches>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FastAnim	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: CraftingMontage	Type: class UAnimMontage*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Duration	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Loop	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: LoopWait	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: LoopEnd	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::GetCraftingAnimation(TEnumAsByte<E_Workbenches> WorkbenchType, bool FastAnim, class UAnimMontage** CraftingMontage, float* Duration, float* Loop, float* LoopWait, float* LoopEnd) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetCraftingAnimation");

	struct UBPI_BaseCharacter_C_GetCraftingAnimation_Params {
		TEnumAsByte<E_Workbenches> WorkbenchType;			//Offset: 0 | ElementSize: 1
		bool FastAnim;			//Offset: 1 | ElementSize: 1
		class UAnimMontage* CraftingMontage;			//Offset: 8 | ElementSize: 8
		float Duration;			//Offset: 16 | ElementSize: 4
		float Loop;			//Offset: 20 | ElementSize: 4
		float LoopWait;			//Offset: 24 | ElementSize: 4
		float LoopEnd;			//Offset: 28 | ElementSize: 4
	};
	UBPI_BaseCharacter_C_GetCraftingAnimation_Params params;
	params.WorkbenchType = WorkbenchType;
	params.FastAnim = FastAnim;

	UObject::ProcessEvent(fn, &params);
	if (CraftingMontage != nullptr)
		*CraftingMontage = params.CraftingMontage;
	if (Duration != nullptr)
		*Duration = params.Duration;
	if (Loop != nullptr)
		*Loop = params.Loop;
	if (LoopWait != nullptr)
		*LoopWait = params.LoopWait;
	if (LoopEnd != nullptr)
		*LoopEnd = params.LoopEnd;
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.PoisonCharacter
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Poison	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::PoisonCharacter(float Poison) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.PoisonCharacter");

	struct UBPI_BaseCharacter_C_PoisonCharacter_Params {
		float Poison;			//Offset: 0 | ElementSize: 4
	};
	UBPI_BaseCharacter_C_PoisonCharacter_Params params;
	params.Poison = Poison;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetCurrentCraftingMontage
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CraftingMontage	Type: class UAnimMontage*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::GetCurrentCraftingMontage(class UAnimMontage** CraftingMontage) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetCurrentCraftingMontage");

	struct UBPI_BaseCharacter_C_GetCurrentCraftingMontage_Params {
		class UAnimMontage* CraftingMontage;			//Offset: 0 | ElementSize: 8
	};
	UBPI_BaseCharacter_C_GetCurrentCraftingMontage_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CraftingMontage != nullptr)
		*CraftingMontage = params.CraftingMontage;
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetCharacterOwnership
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::GetCharacterOwnership(TEnumAsByte<E_Ownership>* Ownership) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetCharacterOwnership");

	struct UBPI_BaseCharacter_C_GetCharacterOwnership_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_GetCharacterOwnership_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Ownership != nullptr)
		*Ownership = params.Ownership;
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetMountMovementMode_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: MountMovementMode	Type: TEnumAsByte<E_MovementMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::GetMountMovementMode_BPI(TEnumAsByte<E_MovementMode> MountMovementMode) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetMountMovementMode_BPI");

	struct UBPI_BaseCharacter_C_GetMountMovementMode_BPI_Params {
		TEnumAsByte<E_MovementMode> MountMovementMode;			//Offset: 0 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_GetMountMovementMode_BPI_Params params;
	params.MountMovementMode = MountMovementMode;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetCharacterMovementActive
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsActive	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IsIKActive	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::SetCharacterMovementActive(bool IsActive, bool IsIKActive) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetCharacterMovementActive");

	struct UBPI_BaseCharacter_C_SetCharacterMovementActive_Params {
		bool IsActive;			//Offset: 0 | ElementSize: 1
		bool IsIKActive;			//Offset: 1 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_SetCharacterMovementActive_Params params;
	params.IsActive = IsActive;
	params.IsIKActive = IsIKActive;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetEnableIK_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IK_Enabled	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::GetEnableIK_BPI(bool* IK_Enabled) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetEnableIK_BPI");

	struct UBPI_BaseCharacter_C_GetEnableIK_BPI_Params {
		bool IK_Enabled;			//Offset: 0 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_GetEnableIK_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IK_Enabled != nullptr)
		*IK_Enabled = params.IK_Enabled;
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetMass
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::GetMass(float* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetMass");

	struct UBPI_BaseCharacter_C_GetMass_Params {
		float Value;			//Offset: 0 | ElementSize: 4
	};
	UBPI_BaseCharacter_C_GetMass_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Value != nullptr)
		*Value = params.Value;
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetTime
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Time	Type: struct FST_Time	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::GetTime(struct FST_Time* Time) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetTime");

	struct UBPI_BaseCharacter_C_GetTime_Params {
		struct FST_Time Time;			//Offset: 0 | ElementSize: 24
	};
	UBPI_BaseCharacter_C_GetTime_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Time != nullptr)
		*Time = params.Time;
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.CanPushOthers
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CanPushOthers	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::CanPushOthers(bool* CanPushOthers) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.CanPushOthers");

	struct UBPI_BaseCharacter_C_CanPushOthers_Params {
		bool CanPushOthers;			//Offset: 0 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_CanPushOthers_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CanPushOthers != nullptr)
		*CanPushOthers = params.CanPushOthers;
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetMesh_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Mesh	Type: class USkeletalMeshComponent*	Flags: Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::GetMesh_BPI(class USkeletalMeshComponent** Mesh) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetMesh_BPI");

	struct UBPI_BaseCharacter_C_GetMesh_BPI_Params {
		class USkeletalMeshComponent* Mesh;			//Offset: 0 | ElementSize: 8
	};
	UBPI_BaseCharacter_C_GetMesh_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Mesh != nullptr)
		*Mesh = params.Mesh;
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.IsMoving_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsMoving	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::IsMoving_BPI(bool* IsMoving) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.IsMoving_BPI");

	struct UBPI_BaseCharacter_C_IsMoving_BPI_Params {
		bool IsMoving;			//Offset: 0 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_IsMoving_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsMoving != nullptr)
		*IsMoving = params.IsMoving;
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Hit
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: HitLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitForce	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HitBoneName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::Hit(struct FVector HitLocation, struct FVector HitForce, struct FName HitBoneName) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Hit");

	struct UBPI_BaseCharacter_C_Hit_Params {
		struct FVector HitLocation;			//Offset: 0 | ElementSize: 12
		struct FVector HitForce;			//Offset: 12 | ElementSize: 12
		struct FName HitBoneName;			//Offset: 24 | ElementSize: 8
	};
	UBPI_BaseCharacter_C_Hit_Params params;
	params.HitLocation = HitLocation;
	params.HitForce = HitForce;
	params.HitBoneName = HitBoneName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayPushAnimation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayRate	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: animationId	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Duration	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::PlayPushAnimation(float PlayRate, int32_t animationId, float* Duration) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayPushAnimation");

	struct UBPI_BaseCharacter_C_PlayPushAnimation_Params {
		float PlayRate;			//Offset: 0 | ElementSize: 4
		int32_t animationId;			//Offset: 4 | ElementSize: 4
		float Duration;			//Offset: 8 | ElementSize: 4
	};
	UBPI_BaseCharacter_C_PlayPushAnimation_Params params;
	params.PlayRate = PlayRate;
	params.animationId = animationId;

	UObject::ProcessEvent(fn, &params);
	if (Duration != nullptr)
		*Duration = params.Duration;
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.IncreaseTechnology_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: TechnologyType	Type: TEnumAsByte<E_TechnologyTypes>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::IncreaseTechnology_BPI(TEnumAsByte<E_TechnologyTypes> TechnologyType, float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.IncreaseTechnology_BPI");

	struct UBPI_BaseCharacter_C_IncreaseTechnology_BPI_Params {
		TEnumAsByte<E_TechnologyTypes> TechnologyType;			//Offset: 0 | ElementSize: 1
		float Value;			//Offset: 4 | ElementSize: 4
	};
	UBPI_BaseCharacter_C_IncreaseTechnology_BPI_Params params;
	params.TechnologyType = TechnologyType;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetCharacterStamina_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Stamina	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MaxStamina	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::GetCharacterStamina_BPI(float* Stamina, float* MaxStamina) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetCharacterStamina_BPI");

	struct UBPI_BaseCharacter_C_GetCharacterStamina_BPI_Params {
		float Stamina;			//Offset: 0 | ElementSize: 4
		float MaxStamina;			//Offset: 4 | ElementSize: 4
	};
	UBPI_BaseCharacter_C_GetCharacterStamina_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Stamina != nullptr)
		*Stamina = params.Stamina;
	if (MaxStamina != nullptr)
		*MaxStamina = params.MaxStamina;
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetCharacterHealth_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Health	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MaxHealth	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::GetCharacterHealth_BPI(float* Health, float* MaxHealth) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetCharacterHealth_BPI");

	struct UBPI_BaseCharacter_C_GetCharacterHealth_BPI_Params {
		float Health;			//Offset: 0 | ElementSize: 4
		float MaxHealth;			//Offset: 4 | ElementSize: 4
	};
	UBPI_BaseCharacter_C_GetCharacterHealth_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Health != nullptr)
		*Health = params.Health;
	if (MaxHealth != nullptr)
		*MaxHealth = params.MaxHealth;
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.CharacterAddSkills_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Skill	Type: TEnumAsByte<E_Skills>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AffectedByGameSettings	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::CharacterAddSkills_BPI(TEnumAsByte<E_Skills> Skill, float Value, bool AffectedByGameSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.CharacterAddSkills_BPI");

	struct UBPI_BaseCharacter_C_CharacterAddSkills_BPI_Params {
		TEnumAsByte<E_Skills> Skill;			//Offset: 0 | ElementSize: 1
		float Value;			//Offset: 4 | ElementSize: 4
		bool AffectedByGameSettings;			//Offset: 8 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_CharacterAddSkills_BPI_Params params;
	params.Skill = Skill;
	params.Value = Value;
	params.AffectedByGameSettings = AffectedByGameSettings;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.DecreaseStamina_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Stamina	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Dirtiness	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Enough	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::DecreaseStamina_BPI(float Stamina, bool Dirtiness, bool* Enough) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.DecreaseStamina_BPI");

	struct UBPI_BaseCharacter_C_DecreaseStamina_BPI_Params {
		float Stamina;			//Offset: 0 | ElementSize: 4
		bool Dirtiness;			//Offset: 4 | ElementSize: 1
		bool Enough;			//Offset: 5 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_DecreaseStamina_BPI_Params params;
	params.Stamina = Stamina;
	params.Dirtiness = Dirtiness;

	UObject::ProcessEvent(fn, &params);
	if (Enough != nullptr)
		*Enough = params.Enough;
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetMeshCollision_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Collision_Type	Type: TEnumAsByte<ECollisionEnabled>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::SetMeshCollision_BPI(TEnumAsByte<ECollisionEnabled> Collision_Type) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetMeshCollision_BPI");

	struct UBPI_BaseCharacter_C_SetMeshCollision_BPI_Params {
		TEnumAsByte<ECollisionEnabled> Collision_Type;			//Offset: 0 | ElementSize: 1
	};
	UBPI_BaseCharacter_C_SetMeshCollision_BPI_Params params;
	params.Collision_Type = Collision_Type;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetMeshCollisionKeepTime_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Keep_Time	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBPI_BaseCharacter_C::SetMeshCollisionKeepTime_BPI(float Keep_Time) {
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetMeshCollisionKeepTime_BPI");

	struct UBPI_BaseCharacter_C_SetMeshCollisionKeepTime_BPI_Params {
		float Keep_Time;			//Offset: 0 | ElementSize: 4
	};
	UBPI_BaseCharacter_C_SetMeshCollisionKeepTime_BPI_Params params;
	params.Keep_Time = Keep_Time;

	UObject::ProcessEvent(fn, &params);
}

#pragma endregion
}