#include "../SDK.h"
#include "Controller.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of PlayerState
// Declaration: class APlayerState* PlayerState
class APlayerState* AController::M_GetPlayerState() const {
	return Read<class APlayerState*>((byte*)this + 552);
}
class APlayerState** AController::M_PtrGetPlayerState() {
	return reinterpret_cast<class APlayerState**>((byte*)this + 552);
}
void AController::M_SetPlayerState(const class APlayerState*& value) {
	Write((byte*)this + 552, value);
}
// Member Getter and Setter of OnInstigatedAnyDamage
// Declaration: TAssetPtr<class FInstigatedAnyDamageSignature__DelegateSignature> OnInstigatedAnyDamage
TAssetPtr<class FInstigatedAnyDamageSignature__DelegateSignature> AController::M_GetOnInstigatedAnyDamage() const {
	return Read<TAssetPtr<class FInstigatedAnyDamageSignature__DelegateSignature>>((byte*)this + 568);
}
TAssetPtr<class FInstigatedAnyDamageSignature__DelegateSignature>* AController::M_PtrGetOnInstigatedAnyDamage() {
	return reinterpret_cast<TAssetPtr<class FInstigatedAnyDamageSignature__DelegateSignature>*>((byte*)this + 568);
}
void AController::M_SetOnInstigatedAnyDamage(const TAssetPtr<class FInstigatedAnyDamageSignature__DelegateSignature>& value) {
	Write((byte*)this + 568, value);
}
// Member Getter and Setter of StateName
// Declaration: struct FName StateName
struct FName AController::M_GetStateName() const {
	return Read<struct FName>((byte*)this + 584);
}
struct FName* AController::M_PtrGetStateName() {
	return reinterpret_cast<struct FName*>((byte*)this + 584);
}
void AController::M_SetStateName(const struct FName& value) {
	Write((byte*)this + 584, value);
}
// Member Getter and Setter of Pawn
// Declaration: class APawn* Pawn
class APawn* AController::M_GetPawn() const {
	return Read<class APawn*>((byte*)this + 592);
}
class APawn** AController::M_PtrGetPawn() {
	return reinterpret_cast<class APawn**>((byte*)this + 592);
}
void AController::M_SetPawn(const class APawn*& value) {
	Write((byte*)this + 592, value);
}
// Member Getter and Setter of Character
// Declaration: class ACharacter* Character
class ACharacter* AController::M_GetCharacter() const {
	return Read<class ACharacter*>((byte*)this + 608);
}
class ACharacter** AController::M_PtrGetCharacter() {
	return reinterpret_cast<class ACharacter**>((byte*)this + 608);
}
void AController::M_SetCharacter(const class ACharacter*& value) {
	Write((byte*)this + 608, value);
}
// Member Getter and Setter of TransformComponent
// Declaration: class USceneComponent* TransformComponent
class USceneComponent* AController::M_GetTransformComponent() const {
	return Read<class USceneComponent*>((byte*)this + 616);
}
class USceneComponent** AController::M_PtrGetTransformComponent() {
	return reinterpret_cast<class USceneComponent**>((byte*)this + 616);
}
void AController::M_SetTransformComponent(const class USceneComponent*& value) {
	Write((byte*)this + 616, value);
}
// Member Getter and Setter of ControlRotation
// Declaration: struct FRotator ControlRotation
struct FRotator AController::M_GetControlRotation() const {
	return Read<struct FRotator>((byte*)this + 648);
}
struct FRotator* AController::M_PtrGetControlRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 648);
}
void AController::M_SetControlRotation(const struct FRotator& value) {
	Write((byte*)this + 648, value);
}
// Member Getter and Setter of bAttachToPawn
// Declaration: unsigned char bAttachToPawn : 1
unsigned char AController::M_GetbAttachToPawn() const {
	return Read<unsigned char>((byte*)this + 660);
}
unsigned char* AController::M_PtrGetbAttachToPawn() {
	return reinterpret_cast<unsigned char*>((byte*)this + 660);
}
void AController::M_SetbAttachToPawn(const unsigned char& value) {
	Write((byte*)this + 660, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.Controller.CastToPlayerController
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ReturnValue	Type: class APlayerController*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class APlayerController* AController::CastToPlayerController() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.CastToPlayerController");

	struct AController_CastToPlayerController_Params {
		class APlayerController* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	AController_CastToPlayerController_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Controller.ClientSetLocation
// Flags: Net, NetReliable, Native, Event, Public, HasDefaults, NetClient, NetValidate
// Params:
// Name: NewLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AController::ClientSetLocation(struct FVector NewLocation, struct FRotator NewRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.ClientSetLocation");

	struct AController_ClientSetLocation_Params {
		struct FVector NewLocation;			//Offset: 0 | ElementSize: 12
		struct FRotator NewRotation;			//Offset: 12 | ElementSize: 12
	};
	AController_ClientSetLocation_Params params;
	params.NewLocation = NewLocation;
	params.NewRotation = NewRotation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Controller.ClientSetRotation
// Flags: Net, NetReliable, Native, Event, Public, HasDefaults, NetClient, NetValidate
// Params:
// Name: NewRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: bResetCamera	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AController::ClientSetRotation(struct FRotator NewRotation, bool bResetCamera) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.ClientSetRotation");

	struct AController_ClientSetRotation_Params {
		struct FRotator NewRotation;			//Offset: 0 | ElementSize: 12
		bool bResetCamera;			//Offset: 12 | ElementSize: 1
	};
	AController_ClientSetRotation_Params params;
	params.NewRotation = NewRotation;
	params.bResetCamera = bResetCamera;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Controller.GetControlRotation
// Flags: Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FRotator AController::GetControlRotation()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.GetControlRotation");

	struct AController_GetControlRotation_Params {
		struct FRotator ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	AController_GetControlRotation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Controller.GetDesiredRotation
// Flags: Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FRotator AController::GetDesiredRotation()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.GetDesiredRotation");

	struct AController_GetDesiredRotation_Params {
		struct FRotator ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	AController_GetDesiredRotation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Controller.GetViewTarget
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class AActor* AController::GetViewTarget()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.GetViewTarget");

	struct AController_GetViewTarget_Params {
		class AActor* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	AController_GetViewTarget_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Controller.IsLocalController
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AController::IsLocalController()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.IsLocalController");

	struct AController_IsLocalController_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AController_IsLocalController_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Controller.IsLocalPlayerController
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AController::IsLocalPlayerController()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.IsLocalPlayerController");

	struct AController_IsLocalPlayerController_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AController_IsLocalPlayerController_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Controller.IsLookInputIgnored
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AController::IsLookInputIgnored()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.IsLookInputIgnored");

	struct AController_IsLookInputIgnored_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AController_IsLookInputIgnored_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Controller.IsMoveInputIgnored
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AController::IsMoveInputIgnored()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.IsMoveInputIgnored");

	struct AController_IsMoveInputIgnored_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AController_IsMoveInputIgnored_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Controller.IsPlayerController
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AController::IsPlayerController()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.IsPlayerController");

	struct AController_IsPlayerController_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AController_IsPlayerController_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Controller.K2_GetPawn
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class APawn*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class APawn* AController::K2_GetPawn()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.K2_GetPawn");

	struct AController_K2_GetPawn_Params {
		class APawn* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	AController_K2_GetPawn_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Controller.LineOfSightTo
// Flags: Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Other	Type: class AActor*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ViewPoint	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAlternateChecks	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AController::LineOfSightTo(class AActor* Other, struct FVector ViewPoint, bool bAlternateChecks)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.LineOfSightTo");

	struct AController_LineOfSightTo_Params {
		class AActor* Other;			//Offset: 0 | ElementSize: 8
		struct FVector ViewPoint;			//Offset: 8 | ElementSize: 12
		bool bAlternateChecks;			//Offset: 20 | ElementSize: 1
		bool ReturnValue;			//Offset: 21 | ElementSize: 1
	};
	AController_LineOfSightTo_Params params;
	params.Other = Other;
	params.ViewPoint = ViewPoint;
	params.bAlternateChecks = bAlternateChecks;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.Controller.OnRep_Pawn
// Flags: Native, Public
// Params:
/////////////////////////////////////////////
void AController::OnRep_Pawn() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.OnRep_Pawn");

	struct AController_OnRep_Pawn_Params {
	};
	AController_OnRep_Pawn_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Controller.OnRep_PlayerState
// Flags: Native, Public
// Params:
/////////////////////////////////////////////
void AController::OnRep_PlayerState() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.OnRep_PlayerState");

	struct AController_OnRep_PlayerState_Params {
	};
	AController_OnRep_PlayerState_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Controller.Possess
// Flags: Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable
// Params:
// Name: InPawn	Type: class APawn*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AController::Possess(class APawn* InPawn) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.Possess");

	struct AController_Possess_Params {
		class APawn* InPawn;			//Offset: 0 | ElementSize: 8
	};
	AController_Possess_Params params;
	params.InPawn = InPawn;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Controller.ReceiveInstigatedAnyDamage
// Flags: BlueprintAuthorityOnly, Event, Protected, BlueprintEvent
// Params:
// Name: Damage	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DamageType	Type: class UDamageType*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DamagedActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DamageCauser	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AController::ReceiveInstigatedAnyDamage(float Damage, class UDamageType* DamageType, class AActor* DamagedActor, class AActor* DamageCauser) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.ReceiveInstigatedAnyDamage");

	struct AController_ReceiveInstigatedAnyDamage_Params {
		float Damage;			//Offset: 0 | ElementSize: 4
		class UDamageType* DamageType;			//Offset: 8 | ElementSize: 8
		class AActor* DamagedActor;			//Offset: 16 | ElementSize: 8
		class AActor* DamageCauser;			//Offset: 24 | ElementSize: 8
	};
	AController_ReceiveInstigatedAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.DamagedActor = DamagedActor;
	params.DamageCauser = DamageCauser;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Controller.ReceivePossess
// Flags: Event, Protected, BlueprintEvent
// Params:
// Name: PossessedPawn	Type: class APawn*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AController::ReceivePossess(class APawn* PossessedPawn) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.ReceivePossess");

	struct AController_ReceivePossess_Params {
		class APawn* PossessedPawn;			//Offset: 0 | ElementSize: 8
	};
	AController_ReceivePossess_Params params;
	params.PossessedPawn = PossessedPawn;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Controller.ReceiveUnPossess
// Flags: Event, Protected, BlueprintEvent
// Params:
// Name: UnpossessedPawn	Type: class APawn*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AController::ReceiveUnPossess(class APawn* UnpossessedPawn) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.ReceiveUnPossess");

	struct AController_ReceiveUnPossess_Params {
		class APawn* UnpossessedPawn;			//Offset: 0 | ElementSize: 8
	};
	AController_ReceiveUnPossess_Params params;
	params.UnpossessedPawn = UnpossessedPawn;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Controller.ResetIgnoreInputFlags
// Flags: Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void AController::ResetIgnoreInputFlags() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.ResetIgnoreInputFlags");

	struct AController_ResetIgnoreInputFlags_Params {
	};
	AController_ResetIgnoreInputFlags_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Controller.ResetIgnoreLookInput
// Flags: Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void AController::ResetIgnoreLookInput() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.ResetIgnoreLookInput");

	struct AController_ResetIgnoreLookInput_Params {
	};
	AController_ResetIgnoreLookInput_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Controller.ResetIgnoreMoveInput
// Flags: Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void AController::ResetIgnoreMoveInput() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.ResetIgnoreMoveInput");

	struct AController_ResetIgnoreMoveInput_Params {
	};
	AController_ResetIgnoreMoveInput_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Controller.SetControlRotation
// Flags: Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: NewRotation	Type: struct FRotator	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AController::SetControlRotation(const struct FRotator& NewRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.SetControlRotation");

	struct AController_SetControlRotation_Params {
		struct FRotator NewRotation;			//Offset: 0 | ElementSize: 12
	};
	AController_SetControlRotation_Params params;
	params.NewRotation = NewRotation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Controller.SetIgnoreLookInput
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: bNewLookInput	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AController::SetIgnoreLookInput(bool bNewLookInput) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.SetIgnoreLookInput");

	struct AController_SetIgnoreLookInput_Params {
		bool bNewLookInput;			//Offset: 0 | ElementSize: 1
	};
	AController_SetIgnoreLookInput_Params params;
	params.bNewLookInput = bNewLookInput;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Controller.SetIgnoreMoveInput
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: bNewMoveInput	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AController::SetIgnoreMoveInput(bool bNewMoveInput) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.SetIgnoreMoveInput");

	struct AController_SetIgnoreMoveInput_Params {
		bool bNewMoveInput;			//Offset: 0 | ElementSize: 1
	};
	AController_SetIgnoreMoveInput_Params params;
	params.bNewMoveInput = bNewMoveInput;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Controller.SetInitialLocationAndRotation
// Flags: Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: NewLocation	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewRotation	Type: struct FRotator	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AController::SetInitialLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.SetInitialLocationAndRotation");

	struct AController_SetInitialLocationAndRotation_Params {
		struct FVector NewLocation;			//Offset: 0 | ElementSize: 12
		struct FRotator NewRotation;			//Offset: 12 | ElementSize: 12
	};
	AController_SetInitialLocationAndRotation_Params params;
	params.NewLocation = NewLocation;
	params.NewRotation = NewRotation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Controller.StopMovement
// Flags: Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void AController::StopMovement() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.StopMovement");

	struct AController_StopMovement_Params {
	};
	AController_StopMovement_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.Controller.UnPossess
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void AController::UnPossess() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Controller.UnPossess");

	struct AController_UnPossess_Params {
	};
	AController_UnPossess_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}