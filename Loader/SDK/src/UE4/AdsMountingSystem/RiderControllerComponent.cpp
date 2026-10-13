#include "../SDK.h"
#include "RiderControllerComponent.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of ownedPawn
// Declaration: class APawn* ownedPawn
class APawn* URiderControllerComponent::M_GetownedPawn() const {
	return Read<class APawn*>((byte*)this + 176);
}
class APawn** URiderControllerComponent::M_PtrGetownedPawn() {
	return reinterpret_cast<class APawn**>((byte*)this + 176);
}
void URiderControllerComponent::M_SetownedPawn(const class APawn*& value) {
	Write((byte*)this + 176, value);
}
// Member Getter and Setter of mountActor
// Declaration: class AActor* mountActor
class AActor* URiderControllerComponent::M_GetmountActor() const {
	return Read<class AActor*>((byte*)this + 184);
}
class AActor** URiderControllerComponent::M_PtrGetmountActor() {
	return reinterpret_cast<class AActor**>((byte*)this + 184);
}
void URiderControllerComponent::M_SetmountActor(const class AActor*& value) {
	Write((byte*)this + 184, value);
}
// Member Getter and Setter of LinkedMountActor
// Declaration: class AActor* LinkedMountActor
class AActor* URiderControllerComponent::M_GetLinkedMountActor() const {
	return Read<class AActor*>((byte*)this + 192);
}
class AActor** URiderControllerComponent::M_PtrGetLinkedMountActor() {
	return reinterpret_cast<class AActor**>((byte*)this + 192);
}
void URiderControllerComponent::M_SetLinkedMountActor(const class AActor*& value) {
	Write((byte*)this + 192, value);
}
// Member Getter and Setter of ownedController
// Declaration: TWeakObjectPtr<class AController> ownedController
TWeakObjectPtr<class AController> URiderControllerComponent::M_GetownedController() const {
	return Read<TWeakObjectPtr<class AController>>((byte*)this + 200);
}
TWeakObjectPtr<class AController>* URiderControllerComponent::M_PtrGetownedController() {
	return reinterpret_cast<TWeakObjectPtr<class AController>*>((byte*)this + 200);
}
void URiderControllerComponent::M_SetownedController(const TWeakObjectPtr<class AController>& value) {
	Write((byte*)this + 200, value);
}
// Member Getter and Setter of OnRiderAdded
// Declaration: TAssetPtr<class FMountRidersChanged__DelegateSignature> OnRiderAdded
TAssetPtr<class FMountRidersChanged__DelegateSignature> URiderControllerComponent::M_GetOnRiderAdded() const {
	return Read<TAssetPtr<class FMountRidersChanged__DelegateSignature>>((byte*)this + 208);
}
TAssetPtr<class FMountRidersChanged__DelegateSignature>* URiderControllerComponent::M_PtrGetOnRiderAdded() {
	return reinterpret_cast<TAssetPtr<class FMountRidersChanged__DelegateSignature>*>((byte*)this + 208);
}
void URiderControllerComponent::M_SetOnRiderAdded(const TAssetPtr<class FMountRidersChanged__DelegateSignature>& value) {
	Write((byte*)this + 208, value);
}
// Member Getter and Setter of OnRiderRemoved
// Declaration: TAssetPtr<class FMountRidersChanged__DelegateSignature> OnRiderRemoved
TAssetPtr<class FMountRidersChanged__DelegateSignature> URiderControllerComponent::M_GetOnRiderRemoved() const {
	return Read<TAssetPtr<class FMountRidersChanged__DelegateSignature>>((byte*)this + 224);
}
TAssetPtr<class FMountRidersChanged__DelegateSignature>* URiderControllerComponent::M_PtrGetOnRiderRemoved() {
	return reinterpret_cast<TAssetPtr<class FMountRidersChanged__DelegateSignature>*>((byte*)this + 224);
}
void URiderControllerComponent::M_SetOnRiderRemoved(const TAssetPtr<class FMountRidersChanged__DelegateSignature>& value) {
	Write((byte*)this + 224, value);
}
// Member Getter and Setter of OnOtherRiderChangedSeat
// Declaration: TAssetPtr<class FRidersChangedSeats__DelegateSignature> OnOtherRiderChangedSeat
TAssetPtr<class FRidersChangedSeats__DelegateSignature> URiderControllerComponent::M_GetOnOtherRiderChangedSeat() const {
	return Read<TAssetPtr<class FRidersChangedSeats__DelegateSignature>>((byte*)this + 240);
}
TAssetPtr<class FRidersChangedSeats__DelegateSignature>* URiderControllerComponent::M_PtrGetOnOtherRiderChangedSeat() {
	return reinterpret_cast<TAssetPtr<class FRidersChangedSeats__DelegateSignature>*>((byte*)this + 240);
}
void URiderControllerComponent::M_SetOnOtherRiderChangedSeat(const TAssetPtr<class FRidersChangedSeats__DelegateSignature>& value) {
	Write((byte*)this + 240, value);
}
// Member Getter and Setter of EnableActionRpcs
// Declaration: bool EnableActionRpcs
bool URiderControllerComponent::M_GetEnableActionRpcs() const {
	return Read<bool>((byte*)this + 256);
}
bool* URiderControllerComponent::M_PtrGetEnableActionRpcs() {
	return reinterpret_cast<bool*>((byte*)this + 256);
}
void URiderControllerComponent::M_SetEnableActionRpcs(const bool& value) {
	Write((byte*)this + 256, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerComponent.ClearMount
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void URiderControllerComponent::ClearMount() {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.ClearMount");

	struct URiderControllerComponent_ClearMount_Params {
	};
	URiderControllerComponent_ClearMount_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerComponent.GetLinkedMountActor
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class AActor* URiderControllerComponent::GetLinkedMountActor()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.GetLinkedMountActor");

	struct URiderControllerComponent_GetLinkedMountActor_Params {
		class AActor* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	URiderControllerComponent_GetLinkedMountActor_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerComponent.GetMountActor
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class AActor* URiderControllerComponent::GetMountActor()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.GetMountActor");

	struct URiderControllerComponent_GetMountActor_Params {
		class AActor* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	URiderControllerComponent_GetMountActor_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerComponent.GetMountPawn
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class APawn*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class APawn* URiderControllerComponent::GetMountPawn()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.GetMountPawn");

	struct URiderControllerComponent_GetMountPawn_Params {
		class APawn* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	URiderControllerComponent_GetMountPawn_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerComponent.GetOwnedPawn
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class APawn*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class APawn* URiderControllerComponent::GetOwnedPawn()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.GetOwnedPawn");

	struct URiderControllerComponent_GetOwnedPawn_Params {
		class APawn* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	URiderControllerComponent_GetOwnedPawn_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerComponent.GetOwningController
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class AController*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class AController* URiderControllerComponent::GetOwningController()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.GetOwningController");

	struct URiderControllerComponent_GetOwningController_Params {
		class AController* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	URiderControllerComponent_GetOwningController_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerComponent.IsMounted
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool URiderControllerComponent::IsMounted()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.IsMounted");

	struct URiderControllerComponent_IsMounted_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	URiderControllerComponent_IsMounted_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerComponent.OtherRiderChangedSeat
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: otherRider	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: newSeatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: oldSeatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void URiderControllerComponent::OtherRiderChangedSeat(class AActor* otherRider, int32_t newSeatId, int32_t oldSeatId) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.OtherRiderChangedSeat");

	struct URiderControllerComponent_OtherRiderChangedSeat_Params {
		class AActor* otherRider;			//Offset: 0 | ElementSize: 8
		int32_t newSeatId;			//Offset: 8 | ElementSize: 4
		int32_t oldSeatId;			//Offset: 12 | ElementSize: 4
	};
	URiderControllerComponent_OtherRiderChangedSeat_Params params;
	params.otherRider = otherRider;
	params.newSeatId = newSeatId;
	params.oldSeatId = oldSeatId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerComponent.PerformChangeSeatById
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Response	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool URiderControllerComponent::PerformChangeSeatById(int32_t seatId, struct FMountActionResponse* Response) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.PerformChangeSeatById");

	struct URiderControllerComponent_PerformChangeSeatById_Params {
		int32_t seatId;			//Offset: 0 | ElementSize: 4
		struct FMountActionResponse Response;			//Offset: 4 | ElementSize: 3
		bool ReturnValue;			//Offset: 7 | ElementSize: 1
	};
	URiderControllerComponent_PerformChangeSeatById_Params params;
	params.seatId = seatId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Response != nullptr)
		*Response = params.Response;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerComponent.PerformChangeSeatToIndex
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: seatIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Response	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool URiderControllerComponent::PerformChangeSeatToIndex(int32_t seatIndex, struct FMountActionResponse* Response) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.PerformChangeSeatToIndex");

	struct URiderControllerComponent_PerformChangeSeatToIndex_Params {
		int32_t seatIndex;			//Offset: 0 | ElementSize: 4
		struct FMountActionResponse Response;			//Offset: 4 | ElementSize: 3
		bool ReturnValue;			//Offset: 7 | ElementSize: 1
	};
	URiderControllerComponent_PerformChangeSeatToIndex_Params params;
	params.seatIndex = seatIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Response != nullptr)
		*Response = params.Response;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerComponent.PerformDismountActor
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: dismountingActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Response	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool URiderControllerComponent::PerformDismountActor(class AActor* dismountingActor, struct FMountActionResponse* Response) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.PerformDismountActor");

	struct URiderControllerComponent_PerformDismountActor_Params {
		class AActor* dismountingActor;			//Offset: 0 | ElementSize: 8
		struct FMountActionResponse Response;			//Offset: 8 | ElementSize: 3
		bool ReturnValue;			//Offset: 11 | ElementSize: 1
	};
	URiderControllerComponent_PerformDismountActor_Params params;
	params.dismountingActor = dismountingActor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Response != nullptr)
		*Response = params.Response;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerComponent.PerformDismountPawn
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: dismountingActor	Type: class APawn*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Response	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool URiderControllerComponent::PerformDismountPawn(class APawn* dismountingActor, struct FMountActionResponse* Response) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.PerformDismountPawn");

	struct URiderControllerComponent_PerformDismountPawn_Params {
		class APawn* dismountingActor;			//Offset: 0 | ElementSize: 8
		struct FMountActionResponse Response;			//Offset: 8 | ElementSize: 3
		bool ReturnValue;			//Offset: 11 | ElementSize: 1
	};
	URiderControllerComponent_PerformDismountPawn_Params params;
	params.dismountingActor = dismountingActor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Response != nullptr)
		*Response = params.Response;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerComponent.PerformMountActor
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: newMountActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: newLinkedActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Response	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool URiderControllerComponent::PerformMountActor(class AActor* newMountActor, class AActor* newLinkedActor, struct FMountActionResponse* Response) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.PerformMountActor");

	struct URiderControllerComponent_PerformMountActor_Params {
		class AActor* newMountActor;			//Offset: 0 | ElementSize: 8
		class AActor* newLinkedActor;			//Offset: 8 | ElementSize: 8
		struct FMountActionResponse Response;			//Offset: 16 | ElementSize: 3
		bool ReturnValue;			//Offset: 19 | ElementSize: 1
	};
	URiderControllerComponent_PerformMountActor_Params params;
	params.newMountActor = newMountActor;
	params.newLinkedActor = newLinkedActor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Response != nullptr)
		*Response = params.Response;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerComponent.PerformMountActorToSeat
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: newMountActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: newLinkedActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Response	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool URiderControllerComponent::PerformMountActorToSeat(class AActor* newMountActor, class AActor* newLinkedActor, int32_t seatId, struct FMountActionResponse* Response) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.PerformMountActorToSeat");

	struct URiderControllerComponent_PerformMountActorToSeat_Params {
		class AActor* newMountActor;			//Offset: 0 | ElementSize: 8
		class AActor* newLinkedActor;			//Offset: 8 | ElementSize: 8
		int32_t seatId;			//Offset: 16 | ElementSize: 4
		struct FMountActionResponse Response;			//Offset: 20 | ElementSize: 3
		bool ReturnValue;			//Offset: 23 | ElementSize: 1
	};
	URiderControllerComponent_PerformMountActorToSeat_Params params;
	params.newMountActor = newMountActor;
	params.newLinkedActor = newLinkedActor;
	params.seatId = seatId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Response != nullptr)
		*Response = params.Response;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerComponent.PerformMountPawn
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: newMountActor	Type: class APawn*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Response	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool URiderControllerComponent::PerformMountPawn(class APawn* newMountActor, struct FMountActionResponse* Response) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.PerformMountPawn");

	struct URiderControllerComponent_PerformMountPawn_Params {
		class APawn* newMountActor;			//Offset: 0 | ElementSize: 8
		struct FMountActionResponse Response;			//Offset: 8 | ElementSize: 3
		bool ReturnValue;			//Offset: 11 | ElementSize: 1
	};
	URiderControllerComponent_PerformMountPawn_Params params;
	params.newMountActor = newMountActor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Response != nullptr)
		*Response = params.Response;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerComponent.PossessPawn
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: pawnToPossess	Type: class APawn*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool URiderControllerComponent::PossessPawn(class APawn* pawnToPossess) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.PossessPawn");

	struct URiderControllerComponent_PossessPawn_Params {
		class APawn* pawnToPossess;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	URiderControllerComponent_PossessPawn_Params params;
	params.pawnToPossess = pawnToPossess;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerComponent.Reset
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void URiderControllerComponent::Reset() {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.Reset");

	struct URiderControllerComponent_Reset_Params {
	};
	URiderControllerComponent_Reset_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerComponent.RiderAdded
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: newRider	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void URiderControllerComponent::RiderAdded(class AActor* newRider, int32_t seatId) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.RiderAdded");

	struct URiderControllerComponent_RiderAdded_Params {
		class AActor* newRider;			//Offset: 0 | ElementSize: 8
		int32_t seatId;			//Offset: 8 | ElementSize: 4
	};
	URiderControllerComponent_RiderAdded_Params params;
	params.newRider = newRider;
	params.seatId = seatId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerComponent.RiderRemoved
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: removedRider	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void URiderControllerComponent::RiderRemoved(class AActor* removedRider, int32_t seatId) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.RiderRemoved");

	struct URiderControllerComponent_RiderRemoved_Params {
		class AActor* removedRider;			//Offset: 0 | ElementSize: 8
		int32_t seatId;			//Offset: 8 | ElementSize: 4
	};
	URiderControllerComponent_RiderRemoved_Params params;
	params.removedRider = removedRider;
	params.seatId = seatId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerComponent.SERVER_PerformChangeSeatById
// Flags: Net, NetReliable, Native, Event, Public, NetServer, NetValidate
// Params:
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Response	Type: struct FMountActionResponse	Flags: ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void URiderControllerComponent::SERVER_PerformChangeSeatById(int32_t seatId, struct FMountActionResponse& Response) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.SERVER_PerformChangeSeatById");

	struct URiderControllerComponent_SERVER_PerformChangeSeatById_Params {
		int32_t seatId;			//Offset: 0 | ElementSize: 4
		struct FMountActionResponse Response;			//Offset: 4 | ElementSize: 3
	};
	URiderControllerComponent_SERVER_PerformChangeSeatById_Params params;
	params.seatId = seatId;
	params.Response = Response;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerComponent.SERVER_PerformChangeSeatToIndex
// Flags: Net, NetReliable, Native, Event, Public, NetServer, NetValidate
// Params:
// Name: seatIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Response	Type: struct FMountActionResponse	Flags: ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void URiderControllerComponent::SERVER_PerformChangeSeatToIndex(int32_t seatIndex, struct FMountActionResponse& Response) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.SERVER_PerformChangeSeatToIndex");

	struct URiderControllerComponent_SERVER_PerformChangeSeatToIndex_Params {
		int32_t seatIndex;			//Offset: 0 | ElementSize: 4
		struct FMountActionResponse Response;			//Offset: 4 | ElementSize: 3
	};
	URiderControllerComponent_SERVER_PerformChangeSeatToIndex_Params params;
	params.seatIndex = seatIndex;
	params.Response = Response;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerComponent.SERVER_PerformDismountActor
// Flags: Net, NetReliable, Native, Event, Public, NetServer, NetValidate
// Params:
// Name: dismountActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Response	Type: struct FMountActionResponse	Flags: ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void URiderControllerComponent::SERVER_PerformDismountActor(class AActor* dismountActor, struct FMountActionResponse& Response) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.SERVER_PerformDismountActor");

	struct URiderControllerComponent_SERVER_PerformDismountActor_Params {
		class AActor* dismountActor;			//Offset: 0 | ElementSize: 8
		struct FMountActionResponse Response;			//Offset: 8 | ElementSize: 3
	};
	URiderControllerComponent_SERVER_PerformDismountActor_Params params;
	params.dismountActor = dismountActor;
	params.Response = Response;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerComponent.SERVER_PerformMountActor
// Flags: Net, NetReliable, Native, Event, Public, NetServer, NetValidate
// Params:
// Name: newMountActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: newLinkedActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Response	Type: struct FMountActionResponse	Flags: ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void URiderControllerComponent::SERVER_PerformMountActor(class AActor* newMountActor, class AActor* newLinkedActor, struct FMountActionResponse& Response) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.SERVER_PerformMountActor");

	struct URiderControllerComponent_SERVER_PerformMountActor_Params {
		class AActor* newMountActor;			//Offset: 0 | ElementSize: 8
		class AActor* newLinkedActor;			//Offset: 8 | ElementSize: 8
		struct FMountActionResponse Response;			//Offset: 16 | ElementSize: 3
	};
	URiderControllerComponent_SERVER_PerformMountActor_Params params;
	params.newMountActor = newMountActor;
	params.newLinkedActor = newLinkedActor;
	params.Response = Response;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerComponent.SERVER_PerformMountActorToSeat
// Flags: Net, NetReliable, Native, Event, Public, NetServer, NetValidate
// Params:
// Name: newMountActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: newLinkedActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Response	Type: struct FMountActionResponse	Flags: ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void URiderControllerComponent::SERVER_PerformMountActorToSeat(class AActor* newMountActor, class AActor* newLinkedActor, int32_t seatId, struct FMountActionResponse& Response) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.SERVER_PerformMountActorToSeat");

	struct URiderControllerComponent_SERVER_PerformMountActorToSeat_Params {
		class AActor* newMountActor;			//Offset: 0 | ElementSize: 8
		class AActor* newLinkedActor;			//Offset: 8 | ElementSize: 8
		int32_t seatId;			//Offset: 16 | ElementSize: 4
		struct FMountActionResponse Response;			//Offset: 20 | ElementSize: 3
	};
	URiderControllerComponent_SERVER_PerformMountActorToSeat_Params params;
	params.newMountActor = newMountActor;
	params.newLinkedActor = newLinkedActor;
	params.seatId = seatId;
	params.Response = Response;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerComponent.SERVER_PossessPawn
// Flags: Net, NetReliable, Native, Event, Public, NetServer, NetValidate
// Params:
// Name: pawnToPossess	Type: class APawn*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void URiderControllerComponent::SERVER_PossessPawn(class APawn* pawnToPossess) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.SERVER_PossessPawn");

	struct URiderControllerComponent_SERVER_PossessPawn_Params {
		class APawn* pawnToPossess;			//Offset: 0 | ElementSize: 8
	};
	URiderControllerComponent_SERVER_PossessPawn_Params params;
	params.pawnToPossess = pawnToPossess;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerComponent.SetControlledPawn
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: newControlledPawn	Type: class APawn*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void URiderControllerComponent::SetControlledPawn(class APawn* newControlledPawn) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.SetControlledPawn");

	struct URiderControllerComponent_SetControlledPawn_Params {
		class APawn* newControlledPawn;			//Offset: 0 | ElementSize: 8
	};
	URiderControllerComponent_SetControlledPawn_Params params;
	params.newControlledPawn = newControlledPawn;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerComponent.SetLinkedMountActor
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: newLinkedMountActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class AActor* URiderControllerComponent::SetLinkedMountActor(class AActor* newLinkedMountActor) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.SetLinkedMountActor");

	struct URiderControllerComponent_SetLinkedMountActor_Params {
		class AActor* newLinkedMountActor;			//Offset: 0 | ElementSize: 8
		class AActor* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	URiderControllerComponent_SetLinkedMountActor_Params params;
	params.newLinkedMountActor = newLinkedMountActor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerComponent.SetMountActor
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: newMountActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void URiderControllerComponent::SetMountActor(class AActor* newMountActor) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.SetMountActor");

	struct URiderControllerComponent_SetMountActor_Params {
		class AActor* newMountActor;			//Offset: 0 | ElementSize: 8
	};
	URiderControllerComponent_SetMountActor_Params params;
	params.newMountActor = newMountActor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerComponent.SetMountPawn
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: newMountActor	Type: class APawn*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void URiderControllerComponent::SetMountPawn(class APawn* newMountActor) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.SetMountPawn");

	struct URiderControllerComponent_SetMountPawn_Params {
		class APawn* newMountActor;			//Offset: 0 | ElementSize: 8
	};
	URiderControllerComponent_SetMountPawn_Params params;
	params.newMountActor = newMountActor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AdsMountingSystem.RiderControllerComponent.SetOwnedPawn
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: newOwnedPawn	Type: class APawn*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void URiderControllerComponent::SetOwnedPawn(class APawn* newOwnedPawn) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.RiderControllerComponent.SetOwnedPawn");

	struct URiderControllerComponent_SetOwnedPawn_Params {
		class APawn* newOwnedPawn;			//Offset: 0 | ElementSize: 8
	};
	URiderControllerComponent_SetOwnedPawn_Params params;
	params.newOwnedPawn = newOwnedPawn;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}