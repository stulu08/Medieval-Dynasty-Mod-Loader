#include "../SDK.h"
#include "Pawn.h"
namespace UE4 {
#pragma region Members
	// Member Getter and Setter of bUseControllerRotationPitch
	// Declaration: unsigned char bUseControllerRotationPitch : 1
	unsigned char APawn::M_GetbUseControllerRotationPitch() const {
		return Read<unsigned char>((byte*)this + 552);
	}
	unsigned char* APawn::M_PtrGetbUseControllerRotationPitch() {
		return reinterpret_cast<unsigned char*>((byte*)this + 552);
	}
	void APawn::M_SetbUseControllerRotationPitch(const unsigned char& value) {
		Write((byte*)this + 552, value);
	}
	// Member Getter and Setter of bUseControllerRotationYaw
	// Declaration: unsigned char bUseControllerRotationYaw : 1
	unsigned char APawn::M_GetbUseControllerRotationYaw() const {
		return Read<unsigned char>((byte*)this + 552);
	}
	unsigned char* APawn::M_PtrGetbUseControllerRotationYaw() {
		return reinterpret_cast<unsigned char*>((byte*)this + 552);
	}
	void APawn::M_SetbUseControllerRotationYaw(const unsigned char& value) {
		Write((byte*)this + 552, value);
	}
	// Member Getter and Setter of bUseControllerRotationRoll
	// Declaration: unsigned char bUseControllerRotationRoll : 1
	unsigned char APawn::M_GetbUseControllerRotationRoll() const {
		return Read<unsigned char>((byte*)this + 552);
	}
	unsigned char* APawn::M_PtrGetbUseControllerRotationRoll() {
		return reinterpret_cast<unsigned char*>((byte*)this + 552);
	}
	void APawn::M_SetbUseControllerRotationRoll(const unsigned char& value) {
		Write((byte*)this + 552, value);
	}
	// Member Getter and Setter of bCanAffectNavigationGeneration
	// Declaration: unsigned char bCanAffectNavigationGeneration : 1
	unsigned char APawn::M_GetbCanAffectNavigationGeneration() const {
		return Read<unsigned char>((byte*)this + 552);
	}
	unsigned char* APawn::M_PtrGetbCanAffectNavigationGeneration() {
		return reinterpret_cast<unsigned char*>((byte*)this + 552);
	}
	void APawn::M_SetbCanAffectNavigationGeneration(const unsigned char& value) {
		Write((byte*)this + 552, value);
	}
	// Member Getter and Setter of BaseEyeHeight
	// Declaration: float BaseEyeHeight
	float APawn::M_GetBaseEyeHeight() const {
		return Read<float>((byte*)this + 556);
	}
	float* APawn::M_PtrGetBaseEyeHeight() {
		return reinterpret_cast<float*>((byte*)this + 556);
	}
	void APawn::M_SetBaseEyeHeight(const float& value) {
		Write((byte*)this + 556, value);
	}
	// Member Getter and Setter of AutoPossessPlayer
	// Declaration: TEnumAsByte<EAutoReceiveInput> AutoPossessPlayer
	TEnumAsByte<EAutoReceiveInput> APawn::M_GetAutoPossessPlayer() const {
		return Read<TEnumAsByte<EAutoReceiveInput>>((byte*)this + 560);
	}
	TEnumAsByte<EAutoReceiveInput>* APawn::M_PtrGetAutoPossessPlayer() {
		return reinterpret_cast<TEnumAsByte<EAutoReceiveInput>*>((byte*)this + 560);
	}
	void APawn::M_SetAutoPossessPlayer(const TEnumAsByte<EAutoReceiveInput>& value) {
		Write((byte*)this + 560, value);
	}
	// Member Getter and Setter of AutoPossessAI
	// Declaration: EAutoPossessAI AutoPossessAI
	EAutoPossessAI APawn::M_GetAutoPossessAI() const {
		return Read<EAutoPossessAI>((byte*)this + 561);
	}
	EAutoPossessAI* APawn::M_PtrGetAutoPossessAI() {
		return reinterpret_cast<EAutoPossessAI*>((byte*)this + 561);
	}
	void APawn::M_SetAutoPossessAI(const EAutoPossessAI& value) {
		Write((byte*)this + 561, value);
	}
	// Member Getter and Setter of RemoteViewPitch
	// Declaration: unsigned char RemoteViewPitch
	unsigned char APawn::M_GetRemoteViewPitch() const {
		return Read<unsigned char>((byte*)this + 562);
	}
	unsigned char* APawn::M_PtrGetRemoteViewPitch() {
		return reinterpret_cast<unsigned char*>((byte*)this + 562);
	}
	void APawn::M_SetRemoteViewPitch(const unsigned char& value) {
		Write((byte*)this + 562, value);
	}
	// Member Getter and Setter of AIControllerClass
	// Declaration: class AController* AIControllerClass
	class AController* APawn::M_GetAIControllerClass() const {
		return Read<class AController*>((byte*)this + 568);
	}
	class AController** APawn::M_PtrGetAIControllerClass() {
		return reinterpret_cast<class AController**>((byte*)this + 568);
	}
	void APawn::M_SetAIControllerClass(const class AController*& value) {
		Write((byte*)this + 568, value);
	}
	// Member Getter and Setter of PlayerState
	// Declaration: class APlayerState* PlayerState
	class APlayerState* APawn::M_GetPlayerState() const {
		return Read<class APlayerState*>((byte*)this + 576);
	}
	class APlayerState** APawn::M_PtrGetPlayerState() {
		return reinterpret_cast<class APlayerState**>((byte*)this + 576);
	}
	void APawn::M_SetPlayerState(const class APlayerState*& value) {
		Write((byte*)this + 576, value);
	}
	// Member Getter and Setter of LastHitBy
	// Declaration: class AController* LastHitBy
	class AController* APawn::M_GetLastHitBy() const {
		return Read<class AController*>((byte*)this + 592);
	}
	class AController** APawn::M_PtrGetLastHitBy() {
		return reinterpret_cast<class AController**>((byte*)this + 592);
	}
	void APawn::M_SetLastHitBy(const class AController*& value) {
		Write((byte*)this + 592, value);
	}
	// Member Getter and Setter of Controller
	// Declaration: class AController* Controller
	class AController* APawn::M_GetController() const {
		return Read<class AController*>((byte*)this + 600);
	}
	class AController** APawn::M_PtrGetController() {
		return reinterpret_cast<class AController**>((byte*)this + 600);
	}
	void APawn::M_SetController(const class AController*& value) {
		Write((byte*)this + 600, value);
	}
	// Member Getter and Setter of ControlInputVector
	// Declaration: struct FVector ControlInputVector
	struct FVector APawn::M_GetControlInputVector() const {
		return Read<struct FVector>((byte*)this + 612);
	}
	struct FVector* APawn::M_PtrGetControlInputVector() {
		return reinterpret_cast<struct FVector*>((byte*)this + 612);
	}
	void APawn::M_SetControlInputVector(const struct FVector& value) {
		Write((byte*)this + 612, value);
	}
	// Member Getter and Setter of LastControlInputVector
	// Declaration: struct FVector LastControlInputVector
	struct FVector APawn::M_GetLastControlInputVector() const {
		return Read<struct FVector>((byte*)this + 624);
	}
	struct FVector* APawn::M_PtrGetLastControlInputVector() {
		return reinterpret_cast<struct FVector*>((byte*)this + 624);
	}
	void APawn::M_SetLastControlInputVector(const struct FVector& value) {
		Write((byte*)this + 624, value);
	}
#pragma endregion
#pragma region Functions
	/////////////////////////////////////////////
	// Function Engine.Pawn.AddControllerPitchInput
	// Flags: Native, Public, BlueprintCallable
	// Params:
	// Name: Val	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void APawn::AddControllerPitchInput(float Val) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.AddControllerPitchInput");

		struct APawn_AddControllerPitchInput_Params {
			float Val;			//Offset: 0 | ElementSize: 4
		};
		APawn_AddControllerPitchInput_Params params;
		params.Val = Val;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		UObject::ProcessEvent(fn, &params);
		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.Pawn.AddControllerRollInput
	// Flags: Native, Public, BlueprintCallable
	// Params:
	// Name: Val	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void APawn::AddControllerRollInput(float Val) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.AddControllerRollInput");

		struct APawn_AddControllerRollInput_Params {
			float Val;			//Offset: 0 | ElementSize: 4
		};
		APawn_AddControllerRollInput_Params params;
		params.Val = Val;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		UObject::ProcessEvent(fn, &params);
		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.Pawn.AddControllerYawInput
	// Flags: Native, Public, BlueprintCallable
	// Params:
	// Name: Val	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void APawn::AddControllerYawInput(float Val) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.AddControllerYawInput");

		struct APawn_AddControllerYawInput_Params {
			float Val;			//Offset: 0 | ElementSize: 4
		};
		APawn_AddControllerYawInput_Params params;
		params.Val = Val;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		UObject::ProcessEvent(fn, &params);
		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.Pawn.AddMovementInput
	// Flags: Native, Public, HasDefaults, BlueprintCallable
	// Params:
	// Name: WorldDirection	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ScaleValue	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bForce	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void APawn::AddMovementInput(struct FVector WorldDirection, float ScaleValue, bool bForce) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.AddMovementInput");

		struct APawn_AddMovementInput_Params {
			struct FVector WorldDirection;			//Offset: 0 | ElementSize: 12
			float ScaleValue;			//Offset: 12 | ElementSize: 4
			bool bForce;			//Offset: 16 | ElementSize: 1
		};
		APawn_AddMovementInput_Params params;
		params.WorldDirection = WorldDirection;
		params.ScaleValue = ScaleValue;
		params.bForce = bForce;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		UObject::ProcessEvent(fn, &params);
		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.Pawn.ConsumeMovementInputVector
	// Flags: Native, Public, HasDefaults, BlueprintCallable
	// Params:
	// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	struct FVector APawn::ConsumeMovementInputVector() {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.ConsumeMovementInputVector");

		struct APawn_ConsumeMovementInputVector_Params {
			struct FVector ReturnValue;			//Offset: 0 | ElementSize: 12
		};
		APawn_ConsumeMovementInputVector_Params params;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		UObject::ProcessEvent(fn, &params);
		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.Pawn.DetachFromControllerPendingDestroy
	// Flags: Native, Public, BlueprintCallable
	// Params:
	/////////////////////////////////////////////
	void APawn::DetachFromControllerPendingDestroy() {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.DetachFromControllerPendingDestroy");

		struct APawn_DetachFromControllerPendingDestroy_Params {
		};
		APawn_DetachFromControllerPendingDestroy_Params params;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		UObject::ProcessEvent(fn, &params);
		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.Pawn.GetBaseAimRotation
	// Flags: Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
	// Params:
	// Name: ReturnValue	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	struct FRotator APawn::GetBaseAimRotation()/* const*/ {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetBaseAimRotation");

		struct APawn_GetBaseAimRotation_Params {
			struct FRotator ReturnValue;			//Offset: 0 | ElementSize: 12
		};
		APawn_GetBaseAimRotation_Params params;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		UObject::ProcessEvent(fn, &params);
		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.Pawn.GetController
	// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
	// Params:
	// Name: ReturnValue	Type: class AController*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class AController* APawn::GetController()/* const*/ {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetController");

		struct APawn_GetController_Params {
			class AController* ReturnValue;			//Offset: 0 | ElementSize: 8
		};
		APawn_GetController_Params params;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		UObject::ProcessEvent(fn, &params);
		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.Pawn.GetControlRotation
	// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
	// Params:
	// Name: ReturnValue	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	struct FRotator APawn::GetControlRotation()/* const*/ {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetControlRotation");

		struct APawn_GetControlRotation_Params {
			struct FRotator ReturnValue;			//Offset: 0 | ElementSize: 12
		};
		APawn_GetControlRotation_Params params;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		UObject::ProcessEvent(fn, &params);
		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.Pawn.GetLastMovementInputVector
	// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
	// Params:
	// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	struct FVector APawn::GetLastMovementInputVector()/* const*/ {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetLastMovementInputVector");

		struct APawn_GetLastMovementInputVector_Params {
			struct FVector ReturnValue;			//Offset: 0 | ElementSize: 12
		};
		APawn_GetLastMovementInputVector_Params params;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		UObject::ProcessEvent(fn, &params);
		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.Pawn.GetMovementBaseActor
	// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
	// Params:
	// Name: Pawn	Type: class APawn*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: ReturnValue	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class AActor* APawn::GetMovementBaseActor(class APawn* Pawn) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetMovementBaseActor");

		struct APawn_GetMovementBaseActor_Params {
			class APawn* Pawn;			//Offset: 0 | ElementSize: 8
			class AActor* ReturnValue;			//Offset: 8 | ElementSize: 8
		};
		APawn_GetMovementBaseActor_Params params;
		params.Pawn = Pawn;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		static auto Obj = StaticClass()->CreateDefaultObject();
		Obj->ProcessEvent(fn, &params);

		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.Pawn.GetMovementComponent
	// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
	// Params:
	// Name: ReturnValue	Type: class UPawnMovementComponent*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	class UPawnMovementComponent* APawn::GetMovementComponent()/* const*/ {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetMovementComponent");

		struct APawn_GetMovementComponent_Params {
			class UPawnMovementComponent* ReturnValue;			//Offset: 0 | ElementSize: 8
		};
		APawn_GetMovementComponent_Params params;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		UObject::ProcessEvent(fn, &params);
		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.Pawn.GetNavAgentLocation
	// Flags: Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
	// Params:
	// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	struct FVector APawn::GetNavAgentLocation()/* const*/ {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetNavAgentLocation");

		struct APawn_GetNavAgentLocation_Params {
			struct FVector ReturnValue;			//Offset: 0 | ElementSize: 12
		};
		APawn_GetNavAgentLocation_Params params;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		UObject::ProcessEvent(fn, &params);
		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.Pawn.GetPendingMovementInputVector
	// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
	// Params:
	// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	struct FVector APawn::GetPendingMovementInputVector()/* const*/ {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.GetPendingMovementInputVector");

		struct APawn_GetPendingMovementInputVector_Params {
			struct FVector ReturnValue;			//Offset: 0 | ElementSize: 12
		};
		APawn_GetPendingMovementInputVector_Params params;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		UObject::ProcessEvent(fn, &params);
		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.Pawn.IsBotControlled
	// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
	// Params:
	// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	bool APawn::IsBotControlled()/* const*/ {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.IsBotControlled");

		struct APawn_IsBotControlled_Params {
			bool ReturnValue;			//Offset: 0 | ElementSize: 1
		};
		APawn_IsBotControlled_Params params;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		UObject::ProcessEvent(fn, &params);
		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.Pawn.IsControlled
	// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
	// Params:
	// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	bool APawn::IsControlled()/* const*/ {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.IsControlled");

		struct APawn_IsControlled_Params {
			bool ReturnValue;			//Offset: 0 | ElementSize: 1
		};
		APawn_IsControlled_Params params;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		UObject::ProcessEvent(fn, &params);
		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.Pawn.IsLocallyControlled
	// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
	// Params:
	// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	bool APawn::IsLocallyControlled()/* const*/ {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.IsLocallyControlled");

		struct APawn_IsLocallyControlled_Params {
			bool ReturnValue;			//Offset: 0 | ElementSize: 1
		};
		APawn_IsLocallyControlled_Params params;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		UObject::ProcessEvent(fn, &params);
		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.Pawn.IsMoveInputIgnored
	// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
	// Params:
	// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	bool APawn::IsMoveInputIgnored()/* const*/ {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.IsMoveInputIgnored");

		struct APawn_IsMoveInputIgnored_Params {
			bool ReturnValue;			//Offset: 0 | ElementSize: 1
		};
		APawn_IsMoveInputIgnored_Params params;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		UObject::ProcessEvent(fn, &params);
		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.Pawn.IsPawnControlled
	// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
	// Params:
	// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	bool APawn::IsPawnControlled()/* const*/ {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.IsPawnControlled");

		struct APawn_IsPawnControlled_Params {
			bool ReturnValue;			//Offset: 0 | ElementSize: 1
		};
		APawn_IsPawnControlled_Params params;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		UObject::ProcessEvent(fn, &params);
		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.Pawn.IsPlayerControlled
	// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
	// Params:
	// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	bool APawn::IsPlayerControlled()/* const*/ {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.IsPlayerControlled");

		struct APawn_IsPlayerControlled_Params {
			bool ReturnValue;			//Offset: 0 | ElementSize: 1
		};
		APawn_IsPlayerControlled_Params params;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		UObject::ProcessEvent(fn, &params);
		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.Pawn.K2_GetMovementInputVector
	// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
	// Params:
	// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	struct FVector APawn::K2_GetMovementInputVector()/* const*/ {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.K2_GetMovementInputVector");

		struct APawn_K2_GetMovementInputVector_Params {
			struct FVector ReturnValue;			//Offset: 0 | ElementSize: 12
		};
		APawn_K2_GetMovementInputVector_Params params;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		UObject::ProcessEvent(fn, &params);
		fn->SetFunctionFlags((EFunctionFlags)flags);

		return params.ReturnValue;
	}

	/////////////////////////////////////////////
	// Function Engine.Pawn.LaunchPawn
	// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
	// Params:
	// Name: LaunchVelocity	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bXYOverride	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bZOverride	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void APawn::LaunchPawn(struct FVector LaunchVelocity, bool bXYOverride, bool bZOverride) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.LaunchPawn");

		struct APawn_LaunchPawn_Params {
			struct FVector LaunchVelocity;			//Offset: 0 | ElementSize: 12
			bool bXYOverride;			//Offset: 12 | ElementSize: 1
			bool bZOverride;			//Offset: 13 | ElementSize: 1
		};
		APawn_LaunchPawn_Params params;
		params.LaunchVelocity = LaunchVelocity;
		params.bXYOverride = bXYOverride;
		params.bZOverride = bZOverride;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		UObject::ProcessEvent(fn, &params);
		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.Pawn.OnRep_Controller
	// Flags: Native, Public
	// Params:
	/////////////////////////////////////////////
	void APawn::OnRep_Controller() {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.OnRep_Controller");

		struct APawn_OnRep_Controller_Params {
		};
		APawn_OnRep_Controller_Params params;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		UObject::ProcessEvent(fn, &params);
		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.Pawn.OnRep_PlayerState
	// Flags: Native, Public
	// Params:
	/////////////////////////////////////////////
	void APawn::OnRep_PlayerState() {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.OnRep_PlayerState");

		struct APawn_OnRep_PlayerState_Params {
		};
		APawn_OnRep_PlayerState_Params params;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		UObject::ProcessEvent(fn, &params);
		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.Pawn.PawnMakeNoise
	// Flags: Final, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable
	// Params:
	// Name: Loudness	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: NoiseLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bUseNoiseMakerLocation	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: NoiseMaker	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void APawn::PawnMakeNoise(float Loudness, struct FVector NoiseLocation, bool bUseNoiseMakerLocation, class AActor* NoiseMaker) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.PawnMakeNoise");

		struct APawn_PawnMakeNoise_Params {
			float Loudness;			//Offset: 0 | ElementSize: 4
			struct FVector NoiseLocation;			//Offset: 4 | ElementSize: 12
			bool bUseNoiseMakerLocation;			//Offset: 16 | ElementSize: 1
			class AActor* NoiseMaker;			//Offset: 24 | ElementSize: 8
		};
		APawn_PawnMakeNoise_Params params;
		params.Loudness = Loudness;
		params.NoiseLocation = NoiseLocation;
		params.bUseNoiseMakerLocation = bUseNoiseMakerLocation;
		params.NoiseMaker = NoiseMaker;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		UObject::ProcessEvent(fn, &params);
		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.Pawn.ReceivePossessed
	// Flags: Event, Public, BlueprintEvent
	// Params:
	// Name: NewController	Type: class AController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void APawn::ReceivePossessed(class AController* NewController) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.ReceivePossessed");

		struct APawn_ReceivePossessed_Params {
			class AController* NewController;			//Offset: 0 | ElementSize: 8
		};
		APawn_ReceivePossessed_Params params;
		params.NewController = NewController;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		UObject::ProcessEvent(fn, &params);
		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.Pawn.ReceiveUnpossessed
	// Flags: Event, Public, BlueprintEvent
	// Params:
	// Name: OldController	Type: class AController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void APawn::ReceiveUnpossessed(class AController* OldController) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.ReceiveUnpossessed");

		struct APawn_ReceiveUnpossessed_Params {
			class AController* OldController;			//Offset: 0 | ElementSize: 8
		};
		APawn_ReceiveUnpossessed_Params params;
		params.OldController = OldController;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		UObject::ProcessEvent(fn, &params);
		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.Pawn.SetCanAffectNavigationGeneration
	// Flags: Final, Native, Public, BlueprintCallable
	// Params:
	// Name: bNewValue	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	// Name: bForceUpdate	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	/////////////////////////////////////////////
	void APawn::SetCanAffectNavigationGeneration(bool bNewValue, bool bForceUpdate) {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.SetCanAffectNavigationGeneration");

		struct APawn_SetCanAffectNavigationGeneration_Params {
			bool bNewValue;			//Offset: 0 | ElementSize: 1
			bool bForceUpdate;			//Offset: 1 | ElementSize: 1
		};
		APawn_SetCanAffectNavigationGeneration_Params params;
		params.bNewValue = bNewValue;
		params.bForceUpdate = bForceUpdate;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		UObject::ProcessEvent(fn, &params);
		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

	/////////////////////////////////////////////
	// Function Engine.Pawn.SpawnDefaultController
	// Flags: Native, Public, BlueprintCallable
	// Params:
	/////////////////////////////////////////////
	void APawn::SpawnDefaultController() {
		static auto fn = UObject::FindObject<UFunction>("Function Engine.Pawn.SpawnDefaultController");

		struct APawn_SpawnDefaultController_Params {
		};
		APawn_SpawnDefaultController_Params params;

		uint32_t flags = (uint32_t)fn->GetFunctionFlags();
		uint32_t newFlags = flags;
		newFlags |= 0x00000400;
		fn->SetFunctionFlags((EFunctionFlags)newFlags);

		UObject::ProcessEvent(fn, &params);
		fn->SetFunctionFlags((EFunctionFlags)flags);

	}

#pragma endregion
}