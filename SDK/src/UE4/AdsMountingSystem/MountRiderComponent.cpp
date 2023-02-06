#include "../SDK.h"
#include "MountRiderComponent.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of bIsMounted
// Declaration: bool bIsMounted
bool UMountRiderComponent::M_GetbIsMounted() const {
	return Read<bool>((byte*)this + 176);
}
bool* UMountRiderComponent::M_PtrGetbIsMounted() {
	return reinterpret_cast<bool*>((byte*)this + 176);
}
void UMountRiderComponent::M_SetbIsMounted(const bool& value) {
	Write((byte*)this + 176, value);
}
// Member Getter and Setter of bIsSeated
// Declaration: bool bIsSeated
bool UMountRiderComponent::M_GetbIsSeated() const {
	return Read<bool>((byte*)this + 177);
}
bool* UMountRiderComponent::M_PtrGetbIsSeated() {
	return reinterpret_cast<bool*>((byte*)this + 177);
}
void UMountRiderComponent::M_SetbIsSeated(const bool& value) {
	Write((byte*)this + 177, value);
}
// Member Getter and Setter of bIsDriver
// Declaration: bool bIsDriver
bool UMountRiderComponent::M_GetbIsDriver() const {
	return Read<bool>((byte*)this + 178);
}
bool* UMountRiderComponent::M_PtrGetbIsDriver() {
	return reinterpret_cast<bool*>((byte*)this + 178);
}
void UMountRiderComponent::M_SetbIsDriver(const bool& value) {
	Write((byte*)this + 178, value);
}
// Member Getter and Setter of bAllowOverrideMovementReplication
// Declaration: bool bAllowOverrideMovementReplication
bool UMountRiderComponent::M_GetbAllowOverrideMovementReplication() const {
	return Read<bool>((byte*)this + 179);
}
bool* UMountRiderComponent::M_PtrGetbAllowOverrideMovementReplication() {
	return reinterpret_cast<bool*>((byte*)this + 179);
}
void UMountRiderComponent::M_SetbAllowOverrideMovementReplication(const bool& value) {
	Write((byte*)this + 179, value);
}
// Member Getter and Setter of bIsRootMotionValidationForAnimationEnabled
// Declaration: bool bIsRootMotionValidationForAnimationEnabled
bool UMountRiderComponent::M_GetbIsRootMotionValidationForAnimationEnabled() const {
	return Read<bool>((byte*)this + 180);
}
bool* UMountRiderComponent::M_PtrGetbIsRootMotionValidationForAnimationEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 180);
}
void UMountRiderComponent::M_SetbIsRootMotionValidationForAnimationEnabled(const bool& value) {
	Write((byte*)this + 180, value);
}
// Member Getter and Setter of mountingPossessionBehavior
// Declaration: EMountingBehaviorType mountingPossessionBehavior
EMountingBehaviorType UMountRiderComponent::M_GetmountingPossessionBehavior() const {
	return Read<EMountingBehaviorType>((byte*)this + 181);
}
EMountingBehaviorType* UMountRiderComponent::M_PtrGetmountingPossessionBehavior() {
	return reinterpret_cast<EMountingBehaviorType*>((byte*)this + 181);
}
void UMountRiderComponent::M_SetmountingPossessionBehavior(const EMountingBehaviorType& value) {
	Write((byte*)this + 181, value);
}
// Member Getter and Setter of dismountingPossessionBehavior
// Declaration: EDismountingBehaviorType dismountingPossessionBehavior
EDismountingBehaviorType UMountRiderComponent::M_GetdismountingPossessionBehavior() const {
	return Read<EDismountingBehaviorType>((byte*)this + 182);
}
EDismountingBehaviorType* UMountRiderComponent::M_PtrGetdismountingPossessionBehavior() {
	return reinterpret_cast<EDismountingBehaviorType*>((byte*)this + 182);
}
void UMountRiderComponent::M_SetdismountingPossessionBehavior(const EDismountingBehaviorType& value) {
	Write((byte*)this + 182, value);
}
// Member Getter and Setter of mountingAttachmentBehavior
// Declaration: EMountingBehaviorType mountingAttachmentBehavior
EMountingBehaviorType UMountRiderComponent::M_GetmountingAttachmentBehavior() const {
	return Read<EMountingBehaviorType>((byte*)this + 183);
}
EMountingBehaviorType* UMountRiderComponent::M_PtrGetmountingAttachmentBehavior() {
	return reinterpret_cast<EMountingBehaviorType*>((byte*)this + 183);
}
void UMountRiderComponent::M_SetmountingAttachmentBehavior(const EMountingBehaviorType& value) {
	Write((byte*)this + 183, value);
}
// Member Getter and Setter of dismountingAttachmentBehavior
// Declaration: EDismountingBehaviorType dismountingAttachmentBehavior
EDismountingBehaviorType UMountRiderComponent::M_GetdismountingAttachmentBehavior() const {
	return Read<EDismountingBehaviorType>((byte*)this + 184);
}
EDismountingBehaviorType* UMountRiderComponent::M_PtrGetdismountingAttachmentBehavior() {
	return reinterpret_cast<EDismountingBehaviorType*>((byte*)this + 184);
}
void UMountRiderComponent::M_SetdismountingAttachmentBehavior(const EDismountingBehaviorType& value) {
	Write((byte*)this + 184, value);
}
// Member Getter and Setter of currentMount
// Declaration: class AActor* currentMount
class AActor* UMountRiderComponent::M_GetcurrentMount() const {
	return Read<class AActor*>((byte*)this + 192);
}
class AActor** UMountRiderComponent::M_PtrGetcurrentMount() {
	return reinterpret_cast<class AActor**>((byte*)this + 192);
}
void UMountRiderComponent::M_SetcurrentMount(const class AActor*& value) {
	Write((byte*)this + 192, value);
}
// Member Getter and Setter of previousMount
// Declaration: class AActor* previousMount
class AActor* UMountRiderComponent::M_GetpreviousMount() const {
	return Read<class AActor*>((byte*)this + 200);
}
class AActor** UMountRiderComponent::M_PtrGetpreviousMount() {
	return reinterpret_cast<class AActor**>((byte*)this + 200);
}
void UMountRiderComponent::M_SetpreviousMount(const class AActor*& value) {
	Write((byte*)this + 200, value);
}
// Member Getter and Setter of LinkedMountActor
// Declaration: class AActor* LinkedMountActor
class AActor* UMountRiderComponent::M_GetLinkedMountActor() const {
	return Read<class AActor*>((byte*)this + 208);
}
class AActor** UMountRiderComponent::M_PtrGetLinkedMountActor() {
	return reinterpret_cast<class AActor**>((byte*)this + 208);
}
void UMountRiderComponent::M_SetLinkedMountActor(const class AActor*& value) {
	Write((byte*)this + 208, value);
}
// Member Getter and Setter of owningPawn
// Declaration: TWeakObjectPtr<class APawn> owningPawn
TWeakObjectPtr<class APawn> UMountRiderComponent::M_GetowningPawn() const {
	return Read<TWeakObjectPtr<class APawn>>((byte*)this + 216);
}
TWeakObjectPtr<class APawn>* UMountRiderComponent::M_PtrGetowningPawn() {
	return reinterpret_cast<TWeakObjectPtr<class APawn>*>((byte*)this + 216);
}
void UMountRiderComponent::M_SetowningPawn(const TWeakObjectPtr<class APawn>& value) {
	Write((byte*)this + 216, value);
}
// Member Getter and Setter of riderController
// Declaration: class AController* riderController
class AController* UMountRiderComponent::M_GetriderController() const {
	return Read<class AController*>((byte*)this + 224);
}
class AController** UMountRiderComponent::M_PtrGetriderController() {
	return reinterpret_cast<class AController**>((byte*)this + 224);
}
void UMountRiderComponent::M_SetriderController(const class AController*& value) {
	Write((byte*)this + 224, value);
}
// Member Getter and Setter of currentSeatData
// Declaration: struct FSeatData currentSeatData
struct FSeatData UMountRiderComponent::M_GetcurrentSeatData() const {
	return Read<struct FSeatData>((byte*)this + 232);
}
struct FSeatData* UMountRiderComponent::M_PtrGetcurrentSeatData() {
	return reinterpret_cast<struct FSeatData*>((byte*)this + 232);
}
void UMountRiderComponent::M_SetcurrentSeatData(const struct FSeatData& value) {
	Write((byte*)this + 232, value);
}
// Member Getter and Setter of currentMountingDirection
// Declaration: EMountingDirection currentMountingDirection
EMountingDirection UMountRiderComponent::M_GetcurrentMountingDirection() const {
	return Read<EMountingDirection>((byte*)this + 280);
}
EMountingDirection* UMountRiderComponent::M_PtrGetcurrentMountingDirection() {
	return reinterpret_cast<EMountingDirection*>((byte*)this + 280);
}
void UMountRiderComponent::M_SetcurrentMountingDirection(const EMountingDirection& value) {
	Write((byte*)this + 280, value);
}
// Member Getter and Setter of currentDismountDirection
// Declaration: EMountingDirection currentDismountDirection
EMountingDirection UMountRiderComponent::M_GetcurrentDismountDirection() const {
	return Read<EMountingDirection>((byte*)this + 281);
}
EMountingDirection* UMountRiderComponent::M_PtrGetcurrentDismountDirection() {
	return reinterpret_cast<EMountingDirection*>((byte*)this + 281);
}
void UMountRiderComponent::M_SetcurrentDismountDirection(const EMountingDirection& value) {
	Write((byte*)this + 281, value);
}
// Member Getter and Setter of relativeMeshLocation
// Declaration: struct FVector relativeMeshLocation
struct FVector UMountRiderComponent::M_GetrelativeMeshLocation() const {
	return Read<struct FVector>((byte*)this + 284);
}
struct FVector* UMountRiderComponent::M_PtrGetrelativeMeshLocation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 284);
}
void UMountRiderComponent::M_SetrelativeMeshLocation(const struct FVector& value) {
	Write((byte*)this + 284, value);
}
// Member Getter and Setter of relativeMeshRotation
// Declaration: struct FRotator relativeMeshRotation
struct FRotator UMountRiderComponent::M_GetrelativeMeshRotation() const {
	return Read<struct FRotator>((byte*)this + 296);
}
struct FRotator* UMountRiderComponent::M_PtrGetrelativeMeshRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 296);
}
void UMountRiderComponent::M_SetrelativeMeshRotation(const struct FRotator& value) {
	Write((byte*)this + 296, value);
}
// Member Getter and Setter of netAction
// Declaration: struct FMountingAction netAction
struct FMountingAction UMountRiderComponent::M_GetnetAction() const {
	return Read<struct FMountingAction>((byte*)this + 308);
}
struct FMountingAction* UMountRiderComponent::M_PtrGetnetAction() {
	return reinterpret_cast<struct FMountingAction*>((byte*)this + 308);
}
void UMountRiderComponent::M_SetnetAction(const struct FMountingAction& value) {
	Write((byte*)this + 308, value);
}
// Member Getter and Setter of currentAction
// Declaration: struct FMountingAction currentAction
struct FMountingAction UMountRiderComponent::M_GetcurrentAction() const {
	return Read<struct FMountingAction>((byte*)this + 320);
}
struct FMountingAction* UMountRiderComponent::M_PtrGetcurrentAction() {
	return reinterpret_cast<struct FMountingAction*>((byte*)this + 320);
}
void UMountRiderComponent::M_SetcurrentAction(const struct FMountingAction& value) {
	Write((byte*)this + 320, value);
}
// Member Getter and Setter of OnRiderAttachedToMount
// Declaration: TAssetPtr<class FMountingSystemEvent__DelegateSignature> OnRiderAttachedToMount
TAssetPtr<class FMountingSystemEvent__DelegateSignature> UMountRiderComponent::M_GetOnRiderAttachedToMount() const {
	return Read<TAssetPtr<class FMountingSystemEvent__DelegateSignature>>((byte*)this + 352);
}
TAssetPtr<class FMountingSystemEvent__DelegateSignature>* UMountRiderComponent::M_PtrGetOnRiderAttachedToMount() {
	return reinterpret_cast<TAssetPtr<class FMountingSystemEvent__DelegateSignature>*>((byte*)this + 352);
}
void UMountRiderComponent::M_SetOnRiderAttachedToMount(const TAssetPtr<class FMountingSystemEvent__DelegateSignature>& value) {
	Write((byte*)this + 352, value);
}
// Member Getter and Setter of OnRiderDetachedFromMount
// Declaration: TAssetPtr<class FMountingSystemEvent__DelegateSignature> OnRiderDetachedFromMount
TAssetPtr<class FMountingSystemEvent__DelegateSignature> UMountRiderComponent::M_GetOnRiderDetachedFromMount() const {
	return Read<TAssetPtr<class FMountingSystemEvent__DelegateSignature>>((byte*)this + 368);
}
TAssetPtr<class FMountingSystemEvent__DelegateSignature>* UMountRiderComponent::M_PtrGetOnRiderDetachedFromMount() {
	return reinterpret_cast<TAssetPtr<class FMountingSystemEvent__DelegateSignature>*>((byte*)this + 368);
}
void UMountRiderComponent::M_SetOnRiderDetachedFromMount(const TAssetPtr<class FMountingSystemEvent__DelegateSignature>& value) {
	Write((byte*)this + 368, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderComponent.AllowControllerToPossessCharacter
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UMountRiderComponent::AllowControllerToPossessCharacter() {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.AllowControllerToPossessCharacter");

	struct UMountRiderComponent_AllowControllerToPossessCharacter_Params {
	};
	UMountRiderComponent_AllowControllerToPossessCharacter_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderComponent.AllowControllerToPossessMount
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UMountRiderComponent::AllowControllerToPossessMount() {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.AllowControllerToPossessMount");

	struct UMountRiderComponent_AllowControllerToPossessMount_Params {
	};
	UMountRiderComponent_AllowControllerToPossessMount_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderComponent.AllowControllerToPossessRider
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UMountRiderComponent::AllowControllerToPossessRider() {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.AllowControllerToPossessRider");

	struct UMountRiderComponent_AllowControllerToPossessRider_Params {
	};
	UMountRiderComponent_AllowControllerToPossessRider_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderComponent.AttachRiderToMount
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UMountRiderComponent::AttachRiderToMount() {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.AttachRiderToMount");

	struct UMountRiderComponent_AttachRiderToMount_Params {
	};
	UMountRiderComponent_AttachRiderToMount_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderComponent.ChangeSeatById
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Response	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountRiderComponent::ChangeSeatById(int32_t seatId, struct FMountActionResponse* Response) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.ChangeSeatById");

	struct UMountRiderComponent_ChangeSeatById_Params {
		int32_t seatId;			//Offset: 0 | ElementSize: 4
		struct FMountActionResponse Response;			//Offset: 4 | ElementSize: 3
		bool ReturnValue;			//Offset: 7 | ElementSize: 1
	};
	UMountRiderComponent_ChangeSeatById_Params params;
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
// Function AdsMountingSystem.MountRiderComponent.ChangeSeatToIndex
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: seatIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Response	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountRiderComponent::ChangeSeatToIndex(int32_t seatIndex, struct FMountActionResponse* Response) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.ChangeSeatToIndex");

	struct UMountRiderComponent_ChangeSeatToIndex_Params {
		int32_t seatIndex;			//Offset: 0 | ElementSize: 4
		struct FMountActionResponse Response;			//Offset: 4 | ElementSize: 3
		bool ReturnValue;			//Offset: 7 | ElementSize: 1
	};
	UMountRiderComponent_ChangeSeatToIndex_Params params;
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
// Function AdsMountingSystem.MountRiderComponent.DetachRiderFromMount
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UMountRiderComponent::DetachRiderFromMount() {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.DetachRiderFromMount");

	struct UMountRiderComponent_DetachRiderFromMount_Params {
	};
	UMountRiderComponent_DetachRiderFromMount_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderComponent.DismountPawn
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: dismountActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Response	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountRiderComponent::DismountPawn(class AActor* dismountActor, struct FMountActionResponse* Response) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.DismountPawn");

	struct UMountRiderComponent_DismountPawn_Params {
		class AActor* dismountActor;			//Offset: 0 | ElementSize: 8
		struct FMountActionResponse Response;			//Offset: 8 | ElementSize: 3
		bool ReturnValue;			//Offset: 11 | ElementSize: 1
	};
	UMountRiderComponent_DismountPawn_Params params;
	params.dismountActor = dismountActor;

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
// Function AdsMountingSystem.MountRiderComponent.GetCurrentMount
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class AActor* UMountRiderComponent::GetCurrentMount()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.GetCurrentMount");

	struct UMountRiderComponent_GetCurrentMount_Params {
		class AActor* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UMountRiderComponent_GetCurrentMount_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderComponent.GetCurrentSeatData
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FSeatData	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FSeatData UMountRiderComponent::GetCurrentSeatData()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.GetCurrentSeatData");

	struct UMountRiderComponent_GetCurrentSeatData_Params {
		struct FSeatData ReturnValue;			//Offset: 0 | ElementSize: 48
	};
	UMountRiderComponent_GetCurrentSeatData_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderComponent.GetDismountLocation
// Flags: Native, Event, Public, HasDefaults, BlueprintEvent, Const
// Params:
// Name: directionToDismount	Type: EMountingDirection	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector UMountRiderComponent::GetDismountLocation(EMountingDirection directionToDismount)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.GetDismountLocation");

	struct UMountRiderComponent_GetDismountLocation_Params {
		EMountingDirection directionToDismount;			//Offset: 0 | ElementSize: 1
		struct FVector ReturnValue;			//Offset: 4 | ElementSize: 12
	};
	UMountRiderComponent_GetDismountLocation_Params params;
	params.directionToDismount = directionToDismount;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderComponent.GetLinkedMountActor
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class AActor* UMountRiderComponent::GetLinkedMountActor()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.GetLinkedMountActor");

	struct UMountRiderComponent_GetLinkedMountActor_Params {
		class AActor* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UMountRiderComponent_GetLinkedMountActor_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderComponent.GetOwningPawn
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class APawn*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class APawn* UMountRiderComponent::GetOwningPawn()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.GetOwningPawn");

	struct UMountRiderComponent_GetOwningPawn_Params {
		class APawn* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UMountRiderComponent_GetOwningPawn_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderComponent.GetPreviousMount
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class AActor* UMountRiderComponent::GetPreviousMount()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.GetPreviousMount");

	struct UMountRiderComponent_GetPreviousMount_Params {
		class AActor* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UMountRiderComponent_GetPreviousMount_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderComponent.GetRiderController
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class AController*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class AController* UMountRiderComponent::GetRiderController()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.GetRiderController");

	struct UMountRiderComponent_GetRiderController_Params {
		class AController* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UMountRiderComponent_GetRiderController_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderComponent.GetSeatId
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UMountRiderComponent::GetSeatId()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.GetSeatId");

	struct UMountRiderComponent_GetSeatId_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UMountRiderComponent_GetSeatId_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderComponent.IsDriver
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountRiderComponent::IsDriver()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.IsDriver");

	struct UMountRiderComponent_IsDriver_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMountRiderComponent_IsDriver_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderComponent.IsMounted
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountRiderComponent::IsMounted()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.IsMounted");

	struct UMountRiderComponent_IsMounted_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMountRiderComponent_IsMounted_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderComponent.IsRootMotionValidationForAnimationEnabled
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountRiderComponent::IsRootMotionValidationForAnimationEnabled() {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.IsRootMotionValidationForAnimationEnabled");

	struct UMountRiderComponent_IsRootMotionValidationForAnimationEnabled_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMountRiderComponent_IsRootMotionValidationForAnimationEnabled_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderComponent.IsSeated
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountRiderComponent::IsSeated()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.IsSeated");

	struct UMountRiderComponent_IsSeated_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMountRiderComponent_IsSeated_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderComponent.MountPawn
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: newMountActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: newLinkedActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Response	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountRiderComponent::MountPawn(class AActor* newMountActor, class AActor* newLinkedActor, struct FMountActionResponse* Response) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.MountPawn");

	struct UMountRiderComponent_MountPawn_Params {
		class AActor* newMountActor;			//Offset: 0 | ElementSize: 8
		class AActor* newLinkedActor;			//Offset: 8 | ElementSize: 8
		struct FMountActionResponse Response;			//Offset: 16 | ElementSize: 3
		bool ReturnValue;			//Offset: 19 | ElementSize: 1
	};
	UMountRiderComponent_MountPawn_Params params;
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
// Function AdsMountingSystem.MountRiderComponent.MountPawnToSeat
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: newMountActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: newLinkedActor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: seatId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Response	Type: struct FMountActionResponse	Flags: Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountRiderComponent::MountPawnToSeat(class AActor* newMountActor, class AActor* newLinkedActor, int32_t seatId, struct FMountActionResponse* Response) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.MountPawnToSeat");

	struct UMountRiderComponent_MountPawnToSeat_Params {
		class AActor* newMountActor;			//Offset: 0 | ElementSize: 8
		class AActor* newLinkedActor;			//Offset: 8 | ElementSize: 8
		int32_t seatId;			//Offset: 16 | ElementSize: 4
		struct FMountActionResponse Response;			//Offset: 20 | ElementSize: 3
		bool ReturnValue;			//Offset: 23 | ElementSize: 1
	};
	UMountRiderComponent_MountPawnToSeat_Params params;
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
// Function AdsMountingSystem.MountRiderComponent.MoveToMountingLocationComplete
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountRiderComponent::MoveToMountingLocationComplete() {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.MoveToMountingLocationComplete");

	struct UMountRiderComponent_MoveToMountingLocationComplete_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMountRiderComponent_MoveToMountingLocationComplete_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderComponent.OnCharacterChangedSeats
// Flags: Final, Native, Public
// Params:
// Name: bPlayAnimation	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountRiderComponent::OnCharacterChangedSeats(bool bPlayAnimation) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.OnCharacterChangedSeats");

	struct UMountRiderComponent_OnCharacterChangedSeats_Params {
		bool bPlayAnimation;			//Offset: 0 | ElementSize: 1
		bool ReturnValue;			//Offset: 1 | ElementSize: 1
	};
	UMountRiderComponent_OnCharacterChangedSeats_Params params;
	params.bPlayAnimation = bPlayAnimation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderComponent.OnCharacterDismounted
// Flags: Native, Event, Public, BlueprintEvent
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountRiderComponent::OnCharacterDismounted() {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.OnCharacterDismounted");

	struct UMountRiderComponent_OnCharacterDismounted_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMountRiderComponent_OnCharacterDismounted_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderComponent.OnCharacterMounted
// Flags: Native, Event, Public, BlueprintEvent
// Params:
// Name: bPlayMountingAnimation	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountRiderComponent::OnCharacterMounted(bool bPlayMountingAnimation) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.OnCharacterMounted");

	struct UMountRiderComponent_OnCharacterMounted_Params {
		bool bPlayMountingAnimation;			//Offset: 0 | ElementSize: 1
		bool ReturnValue;			//Offset: 1 | ElementSize: 1
	};
	UMountRiderComponent_OnCharacterMounted_Params params;
	params.bPlayMountingAnimation = bPlayMountingAnimation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderComponent.OnRep_CurrentAction
// Flags: Native, Public
// Params:
/////////////////////////////////////////////
void UMountRiderComponent::OnRep_CurrentAction() {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.OnRep_CurrentAction");

	struct UMountRiderComponent_OnRep_CurrentAction_Params {
	};
	UMountRiderComponent_OnRep_CurrentAction_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderComponent.OnRep_CurrentMount
// Flags: Native, Public
// Params:
/////////////////////////////////////////////
void UMountRiderComponent::OnRep_CurrentMount() {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.OnRep_CurrentMount");

	struct UMountRiderComponent_OnRep_CurrentMount_Params {
	};
	UMountRiderComponent_OnRep_CurrentMount_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderComponent.OnRep_CurrentSeatData
// Flags: Native, Public
// Params:
/////////////////////////////////////////////
void UMountRiderComponent::OnRep_CurrentSeatData() {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.OnRep_CurrentSeatData");

	struct UMountRiderComponent_OnRep_CurrentSeatData_Params {
	};
	UMountRiderComponent_OnRep_CurrentSeatData_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderComponent.PawnFinishedChangingSeats
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountRiderComponent::PawnFinishedChangingSeats() {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.PawnFinishedChangingSeats");

	struct UMountRiderComponent_PawnFinishedChangingSeats_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMountRiderComponent_PawnFinishedChangingSeats_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderComponent.PawnFinishedDismounting
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountRiderComponent::PawnFinishedDismounting() {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.PawnFinishedDismounting");

	struct UMountRiderComponent_PawnFinishedDismounting_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMountRiderComponent_PawnFinishedDismounting_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderComponent.PawnFinishedMounting
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountRiderComponent::PawnFinishedMounting() {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.PawnFinishedMounting");

	struct UMountRiderComponent_PawnFinishedMounting_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMountRiderComponent_PawnFinishedMounting_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderComponent.Reset
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UMountRiderComponent::Reset() {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.Reset");

	struct UMountRiderComponent_Reset_Params {
	};
	UMountRiderComponent_Reset_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderComponent.SetMovementReplication
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: enableMovementReplication	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: onlyAllowAutonomousTickPose	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMountRiderComponent::SetMovementReplication(bool enableMovementReplication, bool onlyAllowAutonomousTickPose) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.SetMovementReplication");

	struct UMountRiderComponent_SetMovementReplication_Params {
		bool enableMovementReplication;			//Offset: 0 | ElementSize: 1
		bool onlyAllowAutonomousTickPose;			//Offset: 1 | ElementSize: 1
	};
	UMountRiderComponent_SetMovementReplication_Params params;
	params.enableMovementReplication = enableMovementReplication;
	params.onlyAllowAutonomousTickPose = onlyAllowAutonomousTickPose;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderComponent.SetRiderController
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Controller	Type: class AController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMountRiderComponent::SetRiderController(class AController* Controller) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.SetRiderController");

	struct UMountRiderComponent_SetRiderController_Params {
		class AController* Controller;			//Offset: 0 | ElementSize: 8
	};
	UMountRiderComponent_SetRiderController_Params params;
	params.Controller = Controller;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderComponent.SetRootMotionValidationForAnimationEnabled
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: IsRootMotionValidationForAnimationEnabled	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMountRiderComponent::SetRootMotionValidationForAnimationEnabled(bool IsRootMotionValidationForAnimationEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.SetRootMotionValidationForAnimationEnabled");

	struct UMountRiderComponent_SetRootMotionValidationForAnimationEnabled_Params {
		bool IsRootMotionValidationForAnimationEnabled;			//Offset: 0 | ElementSize: 1
	};
	UMountRiderComponent_SetRootMotionValidationForAnimationEnabled_Params params;
	params.IsRootMotionValidationForAnimationEnabled = IsRootMotionValidationForAnimationEnabled;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderComponent.ShouldTeleportToDismountLocation
// Flags: Native, Event, Public, BlueprintEvent, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMountRiderComponent::ShouldTeleportToDismountLocation()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.ShouldTeleportToDismountLocation");

	struct UMountRiderComponent_ShouldTeleportToDismountLocation_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMountRiderComponent_ShouldTeleportToDismountLocation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AdsMountingSystem.MountRiderComponent.UpdateRootMeshRelativeLocation
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UMountRiderComponent::UpdateRootMeshRelativeLocation() {
	static auto fn = UObject::FindObject<UFunction>("Function AdsMountingSystem.MountRiderComponent.UpdateRootMeshRelativeLocation");

	struct UMountRiderComponent_UpdateRootMeshRelativeLocation_Params {
	};
	UMountRiderComponent_UpdateRootMeshRelativeLocation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}