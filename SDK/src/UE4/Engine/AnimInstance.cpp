#include "../SDK.h"
#include "AnimInstance.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of CurrentSkeleton
// Declaration: class USkeleton* CurrentSkeleton
class USkeleton* UAnimInstance::M_GetCurrentSkeleton() const {
	return Read<class USkeleton*>((byte*)this + 40);
}
class USkeleton** UAnimInstance::M_PtrGetCurrentSkeleton() {
	return reinterpret_cast<class USkeleton**>((byte*)this + 40);
}
void UAnimInstance::M_SetCurrentSkeleton(const class USkeleton*& value) {
	Write((byte*)this + 40, value);
}
// Member Getter and Setter of RootMotionMode
// Declaration: TEnumAsByte<ERootMotionMode> RootMotionMode
TEnumAsByte<ERootMotionMode> UAnimInstance::M_GetRootMotionMode() const {
	return Read<TEnumAsByte<ERootMotionMode>>((byte*)this + 48);
}
TEnumAsByte<ERootMotionMode>* UAnimInstance::M_PtrGetRootMotionMode() {
	return reinterpret_cast<TEnumAsByte<ERootMotionMode>*>((byte*)this + 48);
}
void UAnimInstance::M_SetRootMotionMode(const TEnumAsByte<ERootMotionMode>& value) {
	Write((byte*)this + 48, value);
}
// Member Getter and Setter of bUseMultiThreadedAnimationUpdate
// Declaration: unsigned char bUseMultiThreadedAnimationUpdate : 1
unsigned char UAnimInstance::M_GetbUseMultiThreadedAnimationUpdate() const {
	return Read<unsigned char>((byte*)this + 49);
}
unsigned char* UAnimInstance::M_PtrGetbUseMultiThreadedAnimationUpdate() {
	return reinterpret_cast<unsigned char*>((byte*)this + 49);
}
void UAnimInstance::M_SetbUseMultiThreadedAnimationUpdate(const unsigned char& value) {
	Write((byte*)this + 49, value);
}
// Member Getter and Setter of bUsingCopyPoseFromMesh
// Declaration: unsigned char bUsingCopyPoseFromMesh : 1
unsigned char UAnimInstance::M_GetbUsingCopyPoseFromMesh() const {
	return Read<unsigned char>((byte*)this + 49);
}
unsigned char* UAnimInstance::M_PtrGetbUsingCopyPoseFromMesh() {
	return reinterpret_cast<unsigned char*>((byte*)this + 49);
}
void UAnimInstance::M_SetbUsingCopyPoseFromMesh(const unsigned char& value) {
	Write((byte*)this + 49, value);
}
// Member Getter and Setter of bReceiveNotifiesFromLinkedInstances
// Declaration: unsigned char bReceiveNotifiesFromLinkedInstances : 1
unsigned char UAnimInstance::M_GetbReceiveNotifiesFromLinkedInstances() const {
	return Read<unsigned char>((byte*)this + 49);
}
unsigned char* UAnimInstance::M_PtrGetbReceiveNotifiesFromLinkedInstances() {
	return reinterpret_cast<unsigned char*>((byte*)this + 49);
}
void UAnimInstance::M_SetbReceiveNotifiesFromLinkedInstances(const unsigned char& value) {
	Write((byte*)this + 49, value);
}
// Member Getter and Setter of bPropagateNotifiesToLinkedInstances
// Declaration: unsigned char bPropagateNotifiesToLinkedInstances : 1
unsigned char UAnimInstance::M_GetbPropagateNotifiesToLinkedInstances() const {
	return Read<unsigned char>((byte*)this + 49);
}
unsigned char* UAnimInstance::M_PtrGetbPropagateNotifiesToLinkedInstances() {
	return reinterpret_cast<unsigned char*>((byte*)this + 49);
}
void UAnimInstance::M_SetbPropagateNotifiesToLinkedInstances(const unsigned char& value) {
	Write((byte*)this + 49, value);
}
// Member Getter and Setter of bQueueMontageEvents
// Declaration: unsigned char bQueueMontageEvents : 1
unsigned char UAnimInstance::M_GetbQueueMontageEvents() const {
	return Read<unsigned char>((byte*)this + 49);
}
unsigned char* UAnimInstance::M_PtrGetbQueueMontageEvents() {
	return reinterpret_cast<unsigned char*>((byte*)this + 49);
}
void UAnimInstance::M_SetbQueueMontageEvents(const unsigned char& value) {
	Write((byte*)this + 49, value);
}
// Member Getter and Setter of OnMontageBlendingOut
// Declaration: TAssetPtr<class FOnMontageBlendingOutStartedMCDelegate__DelegateSignature> OnMontageBlendingOut
TAssetPtr<class FOnMontageBlendingOutStartedMCDelegate__DelegateSignature> UAnimInstance::M_GetOnMontageBlendingOut() const {
	return Read<TAssetPtr<class FOnMontageBlendingOutStartedMCDelegate__DelegateSignature>>((byte*)this + 56);
}
TAssetPtr<class FOnMontageBlendingOutStartedMCDelegate__DelegateSignature>* UAnimInstance::M_PtrGetOnMontageBlendingOut() {
	return reinterpret_cast<TAssetPtr<class FOnMontageBlendingOutStartedMCDelegate__DelegateSignature>*>((byte*)this + 56);
}
void UAnimInstance::M_SetOnMontageBlendingOut(const TAssetPtr<class FOnMontageBlendingOutStartedMCDelegate__DelegateSignature>& value) {
	Write((byte*)this + 56, value);
}
// Member Getter and Setter of OnMontageStarted
// Declaration: TAssetPtr<class FOnMontageStartedMCDelegate__DelegateSignature> OnMontageStarted
TAssetPtr<class FOnMontageStartedMCDelegate__DelegateSignature> UAnimInstance::M_GetOnMontageStarted() const {
	return Read<TAssetPtr<class FOnMontageStartedMCDelegate__DelegateSignature>>((byte*)this + 72);
}
TAssetPtr<class FOnMontageStartedMCDelegate__DelegateSignature>* UAnimInstance::M_PtrGetOnMontageStarted() {
	return reinterpret_cast<TAssetPtr<class FOnMontageStartedMCDelegate__DelegateSignature>*>((byte*)this + 72);
}
void UAnimInstance::M_SetOnMontageStarted(const TAssetPtr<class FOnMontageStartedMCDelegate__DelegateSignature>& value) {
	Write((byte*)this + 72, value);
}
// Member Getter and Setter of OnMontageEnded
// Declaration: TAssetPtr<class FOnMontageEndedMCDelegate__DelegateSignature> OnMontageEnded
TAssetPtr<class FOnMontageEndedMCDelegate__DelegateSignature> UAnimInstance::M_GetOnMontageEnded() const {
	return Read<TAssetPtr<class FOnMontageEndedMCDelegate__DelegateSignature>>((byte*)this + 88);
}
TAssetPtr<class FOnMontageEndedMCDelegate__DelegateSignature>* UAnimInstance::M_PtrGetOnMontageEnded() {
	return reinterpret_cast<TAssetPtr<class FOnMontageEndedMCDelegate__DelegateSignature>*>((byte*)this + 88);
}
void UAnimInstance::M_SetOnMontageEnded(const TAssetPtr<class FOnMontageEndedMCDelegate__DelegateSignature>& value) {
	Write((byte*)this + 88, value);
}
// Member Getter and Setter of OnAllMontageInstancesEnded
// Declaration: TAssetPtr<class FOnAllMontageInstancesEndedMCDelegate__DelegateSignature> OnAllMontageInstancesEnded
TAssetPtr<class FOnAllMontageInstancesEndedMCDelegate__DelegateSignature> UAnimInstance::M_GetOnAllMontageInstancesEnded() const {
	return Read<TAssetPtr<class FOnAllMontageInstancesEndedMCDelegate__DelegateSignature>>((byte*)this + 104);
}
TAssetPtr<class FOnAllMontageInstancesEndedMCDelegate__DelegateSignature>* UAnimInstance::M_PtrGetOnAllMontageInstancesEnded() {
	return reinterpret_cast<TAssetPtr<class FOnAllMontageInstancesEndedMCDelegate__DelegateSignature>*>((byte*)this + 104);
}
void UAnimInstance::M_SetOnAllMontageInstancesEnded(const TAssetPtr<class FOnAllMontageInstancesEndedMCDelegate__DelegateSignature>& value) {
	Write((byte*)this + 104, value);
}
// Member Getter and Setter of NotifyQueue
// Declaration: struct FAnimNotifyQueue NotifyQueue
struct FAnimNotifyQueue UAnimInstance::M_GetNotifyQueue() const {
	return Read<struct FAnimNotifyQueue>((byte*)this + 256);
}
struct FAnimNotifyQueue* UAnimInstance::M_PtrGetNotifyQueue() {
	return reinterpret_cast<struct FAnimNotifyQueue*>((byte*)this + 256);
}
void UAnimInstance::M_SetNotifyQueue(const struct FAnimNotifyQueue& value) {
	Write((byte*)this + 256, value);
}
// Member Getter and Setter of ActiveAnimNotifyState
// Declaration: TArray<struct FAnimNotifyEvent> ActiveAnimNotifyState
TArray<struct FAnimNotifyEvent> UAnimInstance::M_GetActiveAnimNotifyState() const {
	return Read<TArray<struct FAnimNotifyEvent>>((byte*)this + 368);
}
TArray<struct FAnimNotifyEvent>* UAnimInstance::M_PtrGetActiveAnimNotifyState() {
	return reinterpret_cast<TArray<struct FAnimNotifyEvent>*>((byte*)this + 368);
}
void UAnimInstance::M_SetActiveAnimNotifyState(const TArray<struct FAnimNotifyEvent>& value) {
	Write((byte*)this + 368, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.AnimInstance.BlueprintBeginPlay
// Flags: Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UAnimInstance::BlueprintBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.BlueprintBeginPlay");

	struct UAnimInstance_BlueprintBeginPlay_Params {
	};
	UAnimInstance_BlueprintBeginPlay_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.AnimInstance.BlueprintInitializeAnimation
// Flags: Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UAnimInstance::BlueprintInitializeAnimation() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.BlueprintInitializeAnimation");

	struct UAnimInstance_BlueprintInitializeAnimation_Params {
	};
	UAnimInstance_BlueprintInitializeAnimation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.AnimInstance.BlueprintLinkedAnimationLayersInitialized
// Flags: Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UAnimInstance::BlueprintLinkedAnimationLayersInitialized() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.BlueprintLinkedAnimationLayersInitialized");

	struct UAnimInstance_BlueprintLinkedAnimationLayersInitialized_Params {
	};
	UAnimInstance_BlueprintLinkedAnimationLayersInitialized_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.AnimInstance.BlueprintPostEvaluateAnimation
// Flags: Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UAnimInstance::BlueprintPostEvaluateAnimation() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.BlueprintPostEvaluateAnimation");

	struct UAnimInstance_BlueprintPostEvaluateAnimation_Params {
	};
	UAnimInstance_BlueprintPostEvaluateAnimation_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.AnimInstance.BlueprintUpdateAnimation
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: DeltaTimeX	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UAnimInstance::BlueprintUpdateAnimation(float DeltaTimeX) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.BlueprintUpdateAnimation");

	struct UAnimInstance_BlueprintUpdateAnimation_Params {
		float DeltaTimeX;			//Offset: 0 | ElementSize: 4
	};
	UAnimInstance_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.AnimInstance.CalculateDirection
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Velocity	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BaseRotation	Type: struct FRotator	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UAnimInstance::CalculateDirection(const struct FVector& Velocity, const struct FRotator& BaseRotation)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.CalculateDirection");

	struct UAnimInstance_CalculateDirection_Params {
		struct FVector Velocity;			//Offset: 0 | ElementSize: 12
		struct FRotator BaseRotation;			//Offset: 12 | ElementSize: 12
		float ReturnValue;			//Offset: 24 | ElementSize: 4
	};
	UAnimInstance_CalculateDirection_Params params;
	params.Velocity = Velocity;
	params.BaseRotation = BaseRotation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.ClearMorphTargets
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UAnimInstance::ClearMorphTargets() {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.ClearMorphTargets");

	struct UAnimInstance_ClearMorphTargets_Params {
	};
	UAnimInstance_ClearMorphTargets_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.AnimInstance.GetActiveCurveNames
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: CurveType	Type: EAnimCurveType	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutNames	Type: TArray<struct FName>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UAnimInstance::GetActiveCurveNames(EAnimCurveType CurveType, TArray<struct FName>* OutNames)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetActiveCurveNames");

	struct UAnimInstance_GetActiveCurveNames_Params {
		EAnimCurveType CurveType;			//Offset: 0 | ElementSize: 1
		TArray<struct FName> OutNames;			//Offset: 8 | ElementSize: 16
	};
	UAnimInstance_GetActiveCurveNames_Params params;
	params.CurveType = CurveType;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutNames != nullptr)
		*OutNames = params.OutNames;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.GetAllCurveNames
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: OutNames	Type: TArray<struct FName>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UAnimInstance::GetAllCurveNames(TArray<struct FName>* OutNames)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetAllCurveNames");

	struct UAnimInstance_GetAllCurveNames_Params {
		TArray<struct FName> OutNames;			//Offset: 0 | ElementSize: 16
	};
	UAnimInstance_GetAllCurveNames_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutNames != nullptr)
		*OutNames = params.OutNames;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.GetCurrentActiveMontage
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class UAnimMontage*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UAnimMontage* UAnimInstance::GetCurrentActiveMontage()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetCurrentActiveMontage");

	struct UAnimInstance_GetCurrentActiveMontage_Params {
		class UAnimMontage* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UAnimInstance_GetCurrentActiveMontage_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.GetCurrentStateName
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: MachineIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FName UAnimInstance::GetCurrentStateName(int32_t MachineIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetCurrentStateName");

	struct UAnimInstance_GetCurrentStateName_Params {
		int32_t MachineIndex;			//Offset: 0 | ElementSize: 4
		struct FName ReturnValue;			//Offset: 4 | ElementSize: 8
	};
	UAnimInstance_GetCurrentStateName_Params params;
	params.MachineIndex = MachineIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.GetCurveValue
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: CurveName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UAnimInstance::GetCurveValue(struct FName CurveName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetCurveValue");

	struct UAnimInstance_GetCurveValue_Params {
		struct FName CurveName;			//Offset: 0 | ElementSize: 8
		float ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	UAnimInstance_GetCurveValue_Params params;
	params.CurveName = CurveName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.GetInstanceAssetPlayerLength
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: AssetPlayerIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UAnimInstance::GetInstanceAssetPlayerLength(int32_t AssetPlayerIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceAssetPlayerLength");

	struct UAnimInstance_GetInstanceAssetPlayerLength_Params {
		int32_t AssetPlayerIndex;			//Offset: 0 | ElementSize: 4
		float ReturnValue;			//Offset: 4 | ElementSize: 4
	};
	UAnimInstance_GetInstanceAssetPlayerLength_Params params;
	params.AssetPlayerIndex = AssetPlayerIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.GetInstanceAssetPlayerTime
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: AssetPlayerIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UAnimInstance::GetInstanceAssetPlayerTime(int32_t AssetPlayerIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceAssetPlayerTime");

	struct UAnimInstance_GetInstanceAssetPlayerTime_Params {
		int32_t AssetPlayerIndex;			//Offset: 0 | ElementSize: 4
		float ReturnValue;			//Offset: 4 | ElementSize: 4
	};
	UAnimInstance_GetInstanceAssetPlayerTime_Params params;
	params.AssetPlayerIndex = AssetPlayerIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFraction
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: AssetPlayerIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UAnimInstance::GetInstanceAssetPlayerTimeFraction(int32_t AssetPlayerIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFraction");

	struct UAnimInstance_GetInstanceAssetPlayerTimeFraction_Params {
		int32_t AssetPlayerIndex;			//Offset: 0 | ElementSize: 4
		float ReturnValue;			//Offset: 4 | ElementSize: 4
	};
	UAnimInstance_GetInstanceAssetPlayerTimeFraction_Params params;
	params.AssetPlayerIndex = AssetPlayerIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEnd
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: AssetPlayerIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UAnimInstance::GetInstanceAssetPlayerTimeFromEnd(int32_t AssetPlayerIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEnd");

	struct UAnimInstance_GetInstanceAssetPlayerTimeFromEnd_Params {
		int32_t AssetPlayerIndex;			//Offset: 0 | ElementSize: 4
		float ReturnValue;			//Offset: 4 | ElementSize: 4
	};
	UAnimInstance_GetInstanceAssetPlayerTimeFromEnd_Params params;
	params.AssetPlayerIndex = AssetPlayerIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEndFraction
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: AssetPlayerIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UAnimInstance::GetInstanceAssetPlayerTimeFromEndFraction(int32_t AssetPlayerIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEndFraction");

	struct UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Params {
		int32_t AssetPlayerIndex;			//Offset: 0 | ElementSize: 4
		float ReturnValue;			//Offset: 4 | ElementSize: 4
	};
	UAnimInstance_GetInstanceAssetPlayerTimeFromEndFraction_Params params;
	params.AssetPlayerIndex = AssetPlayerIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.GetInstanceCurrentStateElapsedTime
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: MachineIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UAnimInstance::GetInstanceCurrentStateElapsedTime(int32_t MachineIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceCurrentStateElapsedTime");

	struct UAnimInstance_GetInstanceCurrentStateElapsedTime_Params {
		int32_t MachineIndex;			//Offset: 0 | ElementSize: 4
		float ReturnValue;			//Offset: 4 | ElementSize: 4
	};
	UAnimInstance_GetInstanceCurrentStateElapsedTime_Params params;
	params.MachineIndex = MachineIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.GetInstanceMachineWeight
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: MachineIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UAnimInstance::GetInstanceMachineWeight(int32_t MachineIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceMachineWeight");

	struct UAnimInstance_GetInstanceMachineWeight_Params {
		int32_t MachineIndex;			//Offset: 0 | ElementSize: 4
		float ReturnValue;			//Offset: 4 | ElementSize: 4
	};
	UAnimInstance_GetInstanceMachineWeight_Params params;
	params.MachineIndex = MachineIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.GetInstanceStateWeight
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: MachineIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: StateIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UAnimInstance::GetInstanceStateWeight(int32_t MachineIndex, int32_t StateIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceStateWeight");

	struct UAnimInstance_GetInstanceStateWeight_Params {
		int32_t MachineIndex;			//Offset: 0 | ElementSize: 4
		int32_t StateIndex;			//Offset: 4 | ElementSize: 4
		float ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	UAnimInstance_GetInstanceStateWeight_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.GetInstanceTransitionCrossfadeDuration
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: MachineIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TransitionIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UAnimInstance::GetInstanceTransitionCrossfadeDuration(int32_t MachineIndex, int32_t TransitionIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceTransitionCrossfadeDuration");

	struct UAnimInstance_GetInstanceTransitionCrossfadeDuration_Params {
		int32_t MachineIndex;			//Offset: 0 | ElementSize: 4
		int32_t TransitionIndex;			//Offset: 4 | ElementSize: 4
		float ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	UAnimInstance_GetInstanceTransitionCrossfadeDuration_Params params;
	params.MachineIndex = MachineIndex;
	params.TransitionIndex = TransitionIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.GetInstanceTransitionTimeElapsed
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: MachineIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TransitionIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UAnimInstance::GetInstanceTransitionTimeElapsed(int32_t MachineIndex, int32_t TransitionIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceTransitionTimeElapsed");

	struct UAnimInstance_GetInstanceTransitionTimeElapsed_Params {
		int32_t MachineIndex;			//Offset: 0 | ElementSize: 4
		int32_t TransitionIndex;			//Offset: 4 | ElementSize: 4
		float ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	UAnimInstance_GetInstanceTransitionTimeElapsed_Params params;
	params.MachineIndex = MachineIndex;
	params.TransitionIndex = TransitionIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.GetInstanceTransitionTimeElapsedFraction
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: MachineIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TransitionIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UAnimInstance::GetInstanceTransitionTimeElapsedFraction(int32_t MachineIndex, int32_t TransitionIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceTransitionTimeElapsedFraction");

	struct UAnimInstance_GetInstanceTransitionTimeElapsedFraction_Params {
		int32_t MachineIndex;			//Offset: 0 | ElementSize: 4
		int32_t TransitionIndex;			//Offset: 4 | ElementSize: 4
		float ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	UAnimInstance_GetInstanceTransitionTimeElapsedFraction_Params params;
	params.MachineIndex = MachineIndex;
	params.TransitionIndex = TransitionIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.GetLinkedAnimGraphInstanceByTag
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: InTag	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UAnimInstance*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UAnimInstance* UAnimInstance::GetLinkedAnimGraphInstanceByTag(struct FName InTag)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetLinkedAnimGraphInstanceByTag");

	struct UAnimInstance_GetLinkedAnimGraphInstanceByTag_Params {
		struct FName InTag;			//Offset: 0 | ElementSize: 8
		class UAnimInstance* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UAnimInstance_GetLinkedAnimGraphInstanceByTag_Params params;
	params.InTag = InTag;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.GetLinkedAnimGraphInstancesByTag
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: InTag	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutLinkedInstances	Type: TArray<class UAnimInstance*>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UAnimInstance::GetLinkedAnimGraphInstancesByTag(struct FName InTag, TArray<class UAnimInstance*>* OutLinkedInstances)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetLinkedAnimGraphInstancesByTag");

	struct UAnimInstance_GetLinkedAnimGraphInstancesByTag_Params {
		struct FName InTag;			//Offset: 0 | ElementSize: 8
		TArray<class UAnimInstance*> OutLinkedInstances;			//Offset: 8 | ElementSize: 16
	};
	UAnimInstance_GetLinkedAnimGraphInstancesByTag_Params params;
	params.InTag = InTag;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutLinkedInstances != nullptr)
		*OutLinkedInstances = params.OutLinkedInstances;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.GetLinkedAnimLayerInstanceByClass
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: InClass	Type: class UAnimInstance*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UAnimInstance*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UAnimInstance* UAnimInstance::GetLinkedAnimLayerInstanceByClass(class UAnimInstance* InClass)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetLinkedAnimLayerInstanceByClass");

	struct UAnimInstance_GetLinkedAnimLayerInstanceByClass_Params {
		class UAnimInstance* InClass;			//Offset: 0 | ElementSize: 8
		class UAnimInstance* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UAnimInstance_GetLinkedAnimLayerInstanceByClass_Params params;
	params.InClass = InClass;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.GetLinkedAnimLayerInstanceByGroup
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: InGroup	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UAnimInstance*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UAnimInstance* UAnimInstance::GetLinkedAnimLayerInstanceByGroup(struct FName InGroup)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetLinkedAnimLayerInstanceByGroup");

	struct UAnimInstance_GetLinkedAnimLayerInstanceByGroup_Params {
		struct FName InGroup;			//Offset: 0 | ElementSize: 8
		class UAnimInstance* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UAnimInstance_GetLinkedAnimLayerInstanceByGroup_Params params;
	params.InGroup = InGroup;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.GetLinkedAnimLayerInstanceByGroupAndClass
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: InGroup	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InClass	Type: class UAnimInstance*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UAnimInstance*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UAnimInstance* UAnimInstance::GetLinkedAnimLayerInstanceByGroupAndClass(struct FName InGroup, class UAnimInstance* InClass)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetLinkedAnimLayerInstanceByGroupAndClass");

	struct UAnimInstance_GetLinkedAnimLayerInstanceByGroupAndClass_Params {
		struct FName InGroup;			//Offset: 0 | ElementSize: 8
		class UAnimInstance* InClass;			//Offset: 8 | ElementSize: 8
		class UAnimInstance* ReturnValue;			//Offset: 16 | ElementSize: 8
	};
	UAnimInstance_GetLinkedAnimLayerInstanceByGroupAndClass_Params params;
	params.InGroup = InGroup;
	params.InClass = InClass;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.GetLinkedAnimLayerInstancesByGroup
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: InGroup	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutLinkedInstances	Type: TArray<class UAnimInstance*>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UAnimInstance::GetLinkedAnimLayerInstancesByGroup(struct FName InGroup, TArray<class UAnimInstance*>* OutLinkedInstances)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetLinkedAnimLayerInstancesByGroup");

	struct UAnimInstance_GetLinkedAnimLayerInstancesByGroup_Params {
		struct FName InGroup;			//Offset: 0 | ElementSize: 8
		TArray<class UAnimInstance*> OutLinkedInstances;			//Offset: 8 | ElementSize: 16
	};
	UAnimInstance_GetLinkedAnimLayerInstancesByGroup_Params params;
	params.InGroup = InGroup;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutLinkedInstances != nullptr)
		*OutLinkedInstances = params.OutLinkedInstances;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.GetOwningActor
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class AActor* UAnimInstance::GetOwningActor()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetOwningActor");

	struct UAnimInstance_GetOwningActor_Params {
		class AActor* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UAnimInstance_GetOwningActor_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.GetOwningComponent
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class USkeletalMeshComponent*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class USkeletalMeshComponent* UAnimInstance::GetOwningComponent()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetOwningComponent");

	struct UAnimInstance_GetOwningComponent_Params {
		class USkeletalMeshComponent* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UAnimInstance_GetOwningComponent_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.GetPropagateNotifiesToLinkedInstances
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UAnimInstance::GetPropagateNotifiesToLinkedInstances()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetPropagateNotifiesToLinkedInstances");

	struct UAnimInstance_GetPropagateNotifiesToLinkedInstances_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UAnimInstance_GetPropagateNotifiesToLinkedInstances_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.GetReceiveNotifiesFromLinkedInstances
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UAnimInstance::GetReceiveNotifiesFromLinkedInstances()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetReceiveNotifiesFromLinkedInstances");

	struct UAnimInstance_GetReceiveNotifiesFromLinkedInstances_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UAnimInstance_GetReceiveNotifiesFromLinkedInstances_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.GetRelevantAnimLength
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: MachineIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: StateIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UAnimInstance::GetRelevantAnimLength(int32_t MachineIndex, int32_t StateIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetRelevantAnimLength");

	struct UAnimInstance_GetRelevantAnimLength_Params {
		int32_t MachineIndex;			//Offset: 0 | ElementSize: 4
		int32_t StateIndex;			//Offset: 4 | ElementSize: 4
		float ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	UAnimInstance_GetRelevantAnimLength_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.GetRelevantAnimTime
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: MachineIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: StateIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UAnimInstance::GetRelevantAnimTime(int32_t MachineIndex, int32_t StateIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetRelevantAnimTime");

	struct UAnimInstance_GetRelevantAnimTime_Params {
		int32_t MachineIndex;			//Offset: 0 | ElementSize: 4
		int32_t StateIndex;			//Offset: 4 | ElementSize: 4
		float ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	UAnimInstance_GetRelevantAnimTime_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.GetRelevantAnimTimeFraction
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: MachineIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: StateIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UAnimInstance::GetRelevantAnimTimeFraction(int32_t MachineIndex, int32_t StateIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetRelevantAnimTimeFraction");

	struct UAnimInstance_GetRelevantAnimTimeFraction_Params {
		int32_t MachineIndex;			//Offset: 0 | ElementSize: 4
		int32_t StateIndex;			//Offset: 4 | ElementSize: 4
		float ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	UAnimInstance_GetRelevantAnimTimeFraction_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.GetRelevantAnimTimeRemaining
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: MachineIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: StateIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UAnimInstance::GetRelevantAnimTimeRemaining(int32_t MachineIndex, int32_t StateIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetRelevantAnimTimeRemaining");

	struct UAnimInstance_GetRelevantAnimTimeRemaining_Params {
		int32_t MachineIndex;			//Offset: 0 | ElementSize: 4
		int32_t StateIndex;			//Offset: 4 | ElementSize: 4
		float ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	UAnimInstance_GetRelevantAnimTimeRemaining_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.GetRelevantAnimTimeRemainingFraction
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: MachineIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: StateIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UAnimInstance::GetRelevantAnimTimeRemainingFraction(int32_t MachineIndex, int32_t StateIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetRelevantAnimTimeRemainingFraction");

	struct UAnimInstance_GetRelevantAnimTimeRemainingFraction_Params {
		int32_t MachineIndex;			//Offset: 0 | ElementSize: 4
		int32_t StateIndex;			//Offset: 4 | ElementSize: 4
		float ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	UAnimInstance_GetRelevantAnimTimeRemainingFraction_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.GetSyncGroupPosition
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: InSyncGroupName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FMarkerSyncAnimPosition	Flags: Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FMarkerSyncAnimPosition UAnimInstance::GetSyncGroupPosition(struct FName InSyncGroupName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetSyncGroupPosition");

	struct UAnimInstance_GetSyncGroupPosition_Params {
		struct FName InSyncGroupName;			//Offset: 0 | ElementSize: 8
		struct FMarkerSyncAnimPosition ReturnValue;			//Offset: 8 | ElementSize: 20
	};
	UAnimInstance_GetSyncGroupPosition_Params params;
	params.InSyncGroupName = InSyncGroupName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.GetTimeToClosestMarker
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: SyncGroup	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MarkerName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OutMarkerTime	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UAnimInstance::GetTimeToClosestMarker(struct FName SyncGroup, struct FName MarkerName, float* OutMarkerTime)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetTimeToClosestMarker");

	struct UAnimInstance_GetTimeToClosestMarker_Params {
		struct FName SyncGroup;			//Offset: 0 | ElementSize: 8
		struct FName MarkerName;			//Offset: 8 | ElementSize: 8
		float OutMarkerTime;			//Offset: 16 | ElementSize: 4
		bool ReturnValue;			//Offset: 20 | ElementSize: 1
	};
	UAnimInstance_GetTimeToClosestMarker_Params params;
	params.SyncGroup = SyncGroup;
	params.MarkerName = MarkerName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (OutMarkerTime != nullptr)
		*OutMarkerTime = params.OutMarkerTime;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.HasMarkerBeenHitThisFrame
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: SyncGroup	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MarkerName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UAnimInstance::HasMarkerBeenHitThisFrame(struct FName SyncGroup, struct FName MarkerName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.HasMarkerBeenHitThisFrame");

	struct UAnimInstance_HasMarkerBeenHitThisFrame_Params {
		struct FName SyncGroup;			//Offset: 0 | ElementSize: 8
		struct FName MarkerName;			//Offset: 8 | ElementSize: 8
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UAnimInstance_HasMarkerBeenHitThisFrame_Params params;
	params.SyncGroup = SyncGroup;
	params.MarkerName = MarkerName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.IsAnyMontagePlaying
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UAnimInstance::IsAnyMontagePlaying()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.IsAnyMontagePlaying");

	struct UAnimInstance_IsAnyMontagePlaying_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UAnimInstance_IsAnyMontagePlaying_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.IsPlayingSlotAnimation
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Asset	Type: class UAnimSequenceBase*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SlotNodeName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UAnimInstance::IsPlayingSlotAnimation(class UAnimSequenceBase* Asset, struct FName SlotNodeName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.IsPlayingSlotAnimation");

	struct UAnimInstance_IsPlayingSlotAnimation_Params {
		class UAnimSequenceBase* Asset;			//Offset: 0 | ElementSize: 8
		struct FName SlotNodeName;			//Offset: 8 | ElementSize: 8
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UAnimInstance_IsPlayingSlotAnimation_Params params;
	params.Asset = Asset;
	params.SlotNodeName = SlotNodeName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.IsSyncGroupBetweenMarkers
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: InSyncGroupName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PreviousMarker	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NextMarker	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bRespectMarkerOrder	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UAnimInstance::IsSyncGroupBetweenMarkers(struct FName InSyncGroupName, struct FName PreviousMarker, struct FName NextMarker, bool bRespectMarkerOrder)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.IsSyncGroupBetweenMarkers");

	struct UAnimInstance_IsSyncGroupBetweenMarkers_Params {
		struct FName InSyncGroupName;			//Offset: 0 | ElementSize: 8
		struct FName PreviousMarker;			//Offset: 8 | ElementSize: 8
		struct FName NextMarker;			//Offset: 16 | ElementSize: 8
		bool bRespectMarkerOrder;			//Offset: 24 | ElementSize: 1
		bool ReturnValue;			//Offset: 25 | ElementSize: 1
	};
	UAnimInstance_IsSyncGroupBetweenMarkers_Params params;
	params.InSyncGroupName = InSyncGroupName;
	params.PreviousMarker = PreviousMarker;
	params.NextMarker = NextMarker;
	params.bRespectMarkerOrder = bRespectMarkerOrder;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.LinkAnimClassLayers
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InClass	Type: class UAnimInstance*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UAnimInstance::LinkAnimClassLayers(class UAnimInstance* InClass) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.LinkAnimClassLayers");

	struct UAnimInstance_LinkAnimClassLayers_Params {
		class UAnimInstance* InClass;			//Offset: 0 | ElementSize: 8
	};
	UAnimInstance_LinkAnimClassLayers_Params params;
	params.InClass = InClass;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.AnimInstance.LinkAnimGraphByTag
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InTag	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InClass	Type: class UAnimInstance*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UAnimInstance::LinkAnimGraphByTag(struct FName InTag, class UAnimInstance* InClass) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.LinkAnimGraphByTag");

	struct UAnimInstance_LinkAnimGraphByTag_Params {
		struct FName InTag;			//Offset: 0 | ElementSize: 8
		class UAnimInstance* InClass;			//Offset: 8 | ElementSize: 8
	};
	UAnimInstance_LinkAnimGraphByTag_Params params;
	params.InTag = InTag;
	params.InClass = InClass;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.AnimInstance.LockAIResources
// Flags: Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable
// Params:
// Name: bLockMovement	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LockAILogic	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UAnimInstance::LockAIResources(bool bLockMovement, bool LockAILogic) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.LockAIResources");

	struct UAnimInstance_LockAIResources_Params {
		bool bLockMovement;			//Offset: 0 | ElementSize: 1
		bool LockAILogic;			//Offset: 1 | ElementSize: 1
	};
	UAnimInstance_LockAIResources_Params params;
	params.bLockMovement = bLockMovement;
	params.LockAILogic = LockAILogic;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.AnimInstance.Montage_GetBlendTime
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Montage	Type: class UAnimMontage*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UAnimInstance::Montage_GetBlendTime(class UAnimMontage* Montage)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_GetBlendTime");

	struct UAnimInstance_Montage_GetBlendTime_Params {
		class UAnimMontage* Montage;			//Offset: 0 | ElementSize: 8
		float ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	UAnimInstance_Montage_GetBlendTime_Params params;
	params.Montage = Montage;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.Montage_GetCurrentSection
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Montage	Type: class UAnimMontage*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FName UAnimInstance::Montage_GetCurrentSection(class UAnimMontage* Montage)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_GetCurrentSection");

	struct UAnimInstance_Montage_GetCurrentSection_Params {
		class UAnimMontage* Montage;			//Offset: 0 | ElementSize: 8
		struct FName ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UAnimInstance_Montage_GetCurrentSection_Params params;
	params.Montage = Montage;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.Montage_GetIsStopped
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Montage	Type: class UAnimMontage*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UAnimInstance::Montage_GetIsStopped(class UAnimMontage* Montage)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_GetIsStopped");

	struct UAnimInstance_Montage_GetIsStopped_Params {
		class UAnimMontage* Montage;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UAnimInstance_Montage_GetIsStopped_Params params;
	params.Montage = Montage;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.Montage_GetPlayRate
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Montage	Type: class UAnimMontage*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UAnimInstance::Montage_GetPlayRate(class UAnimMontage* Montage)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_GetPlayRate");

	struct UAnimInstance_Montage_GetPlayRate_Params {
		class UAnimMontage* Montage;			//Offset: 0 | ElementSize: 8
		float ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	UAnimInstance_Montage_GetPlayRate_Params params;
	params.Montage = Montage;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.Montage_GetPosition
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Montage	Type: class UAnimMontage*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UAnimInstance::Montage_GetPosition(class UAnimMontage* Montage)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_GetPosition");

	struct UAnimInstance_Montage_GetPosition_Params {
		class UAnimMontage* Montage;			//Offset: 0 | ElementSize: 8
		float ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	UAnimInstance_Montage_GetPosition_Params params;
	params.Montage = Montage;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.Montage_IsActive
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Montage	Type: class UAnimMontage*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UAnimInstance::Montage_IsActive(class UAnimMontage* Montage)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_IsActive");

	struct UAnimInstance_Montage_IsActive_Params {
		class UAnimMontage* Montage;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UAnimInstance_Montage_IsActive_Params params;
	params.Montage = Montage;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.Montage_IsPlaying
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Montage	Type: class UAnimMontage*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UAnimInstance::Montage_IsPlaying(class UAnimMontage* Montage)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_IsPlaying");

	struct UAnimInstance_Montage_IsPlaying_Params {
		class UAnimMontage* Montage;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UAnimInstance_Montage_IsPlaying_Params params;
	params.Montage = Montage;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.Montage_JumpToSection
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: SectionName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Montage	Type: class UAnimMontage*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UAnimInstance::Montage_JumpToSection(struct FName SectionName, class UAnimMontage* Montage) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_JumpToSection");

	struct UAnimInstance_Montage_JumpToSection_Params {
		struct FName SectionName;			//Offset: 0 | ElementSize: 8
		class UAnimMontage* Montage;			//Offset: 8 | ElementSize: 8
	};
	UAnimInstance_Montage_JumpToSection_Params params;
	params.SectionName = SectionName;
	params.Montage = Montage;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.AnimInstance.Montage_JumpToSectionsEnd
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: SectionName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Montage	Type: class UAnimMontage*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UAnimInstance::Montage_JumpToSectionsEnd(struct FName SectionName, class UAnimMontage* Montage) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_JumpToSectionsEnd");

	struct UAnimInstance_Montage_JumpToSectionsEnd_Params {
		struct FName SectionName;			//Offset: 0 | ElementSize: 8
		class UAnimMontage* Montage;			//Offset: 8 | ElementSize: 8
	};
	UAnimInstance_Montage_JumpToSectionsEnd_Params params;
	params.SectionName = SectionName;
	params.Montage = Montage;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.AnimInstance.Montage_Pause
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Montage	Type: class UAnimMontage*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UAnimInstance::Montage_Pause(class UAnimMontage* Montage) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_Pause");

	struct UAnimInstance_Montage_Pause_Params {
		class UAnimMontage* Montage;			//Offset: 0 | ElementSize: 8
	};
	UAnimInstance_Montage_Pause_Params params;
	params.Montage = Montage;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.AnimInstance.Montage_Play
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: MontageToPlay	Type: class UAnimMontage*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InPlayRate	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValueType	Type: EMontagePlayReturnType	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InTimeToStartMontageAt	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bStopAllMontages	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UAnimInstance::Montage_Play(class UAnimMontage* MontageToPlay, float InPlayRate, EMontagePlayReturnType ReturnValueType, float InTimeToStartMontageAt, bool bStopAllMontages) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_Play");

	struct UAnimInstance_Montage_Play_Params {
		class UAnimMontage* MontageToPlay;			//Offset: 0 | ElementSize: 8
		float InPlayRate;			//Offset: 8 | ElementSize: 4
		EMontagePlayReturnType ReturnValueType;			//Offset: 12 | ElementSize: 1
		float InTimeToStartMontageAt;			//Offset: 16 | ElementSize: 4
		bool bStopAllMontages;			//Offset: 20 | ElementSize: 1
		float ReturnValue;			//Offset: 24 | ElementSize: 4
	};
	UAnimInstance_Montage_Play_Params params;
	params.MontageToPlay = MontageToPlay;
	params.InPlayRate = InPlayRate;
	params.ReturnValueType = ReturnValueType;
	params.InTimeToStartMontageAt = InTimeToStartMontageAt;
	params.bStopAllMontages = bStopAllMontages;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.Montage_Resume
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Montage	Type: class UAnimMontage*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UAnimInstance::Montage_Resume(class UAnimMontage* Montage) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_Resume");

	struct UAnimInstance_Montage_Resume_Params {
		class UAnimMontage* Montage;			//Offset: 0 | ElementSize: 8
	};
	UAnimInstance_Montage_Resume_Params params;
	params.Montage = Montage;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.AnimInstance.Montage_SetNextSection
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: SectionNameToChange	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NextSection	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Montage	Type: class UAnimMontage*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UAnimInstance::Montage_SetNextSection(struct FName SectionNameToChange, struct FName NextSection, class UAnimMontage* Montage) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_SetNextSection");

	struct UAnimInstance_Montage_SetNextSection_Params {
		struct FName SectionNameToChange;			//Offset: 0 | ElementSize: 8
		struct FName NextSection;			//Offset: 8 | ElementSize: 8
		class UAnimMontage* Montage;			//Offset: 16 | ElementSize: 8
	};
	UAnimInstance_Montage_SetNextSection_Params params;
	params.SectionNameToChange = SectionNameToChange;
	params.NextSection = NextSection;
	params.Montage = Montage;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.AnimInstance.Montage_SetPlayRate
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Montage	Type: class UAnimMontage*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewPlayRate	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UAnimInstance::Montage_SetPlayRate(class UAnimMontage* Montage, float NewPlayRate) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_SetPlayRate");

	struct UAnimInstance_Montage_SetPlayRate_Params {
		class UAnimMontage* Montage;			//Offset: 0 | ElementSize: 8
		float NewPlayRate;			//Offset: 8 | ElementSize: 4
	};
	UAnimInstance_Montage_SetPlayRate_Params params;
	params.Montage = Montage;
	params.NewPlayRate = NewPlayRate;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.AnimInstance.Montage_SetPosition
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Montage	Type: class UAnimMontage*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewPosition	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UAnimInstance::Montage_SetPosition(class UAnimMontage* Montage, float NewPosition) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_SetPosition");

	struct UAnimInstance_Montage_SetPosition_Params {
		class UAnimMontage* Montage;			//Offset: 0 | ElementSize: 8
		float NewPosition;			//Offset: 8 | ElementSize: 4
	};
	UAnimInstance_Montage_SetPosition_Params params;
	params.Montage = Montage;
	params.NewPosition = NewPosition;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.AnimInstance.Montage_Stop
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InBlendOutTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Montage	Type: class UAnimMontage*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UAnimInstance::Montage_Stop(float InBlendOutTime, class UAnimMontage* Montage) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_Stop");

	struct UAnimInstance_Montage_Stop_Params {
		float InBlendOutTime;			//Offset: 0 | ElementSize: 4
		class UAnimMontage* Montage;			//Offset: 8 | ElementSize: 8
	};
	UAnimInstance_Montage_Stop_Params params;
	params.InBlendOutTime = InBlendOutTime;
	params.Montage = Montage;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.AnimInstance.Montage_StopGroupByName
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InBlendOutTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: GroupName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UAnimInstance::Montage_StopGroupByName(float InBlendOutTime, struct FName GroupName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_StopGroupByName");

	struct UAnimInstance_Montage_StopGroupByName_Params {
		float InBlendOutTime;			//Offset: 0 | ElementSize: 4
		struct FName GroupName;			//Offset: 4 | ElementSize: 8
	};
	UAnimInstance_Montage_StopGroupByName_Params params;
	params.InBlendOutTime = InBlendOutTime;
	params.GroupName = GroupName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.AnimInstance.PlaySlotAnimation
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Asset	Type: class UAnimSequenceBase*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SlotNodeName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BlendInTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BlendOutTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InPlayRate	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LoopCount	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UAnimInstance::PlaySlotAnimation(class UAnimSequenceBase* Asset, struct FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32_t LoopCount) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.PlaySlotAnimation");

	struct UAnimInstance_PlaySlotAnimation_Params {
		class UAnimSequenceBase* Asset;			//Offset: 0 | ElementSize: 8
		struct FName SlotNodeName;			//Offset: 8 | ElementSize: 8
		float BlendInTime;			//Offset: 16 | ElementSize: 4
		float BlendOutTime;			//Offset: 20 | ElementSize: 4
		float InPlayRate;			//Offset: 24 | ElementSize: 4
		int32_t LoopCount;			//Offset: 28 | ElementSize: 4
		float ReturnValue;			//Offset: 32 | ElementSize: 4
	};
	UAnimInstance_PlaySlotAnimation_Params params;
	params.Asset = Asset;
	params.SlotNodeName = SlotNodeName;
	params.BlendInTime = BlendInTime;
	params.BlendOutTime = BlendOutTime;
	params.InPlayRate = InPlayRate;
	params.LoopCount = LoopCount;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Asset	Type: class UAnimSequenceBase*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SlotNodeName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BlendInTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BlendOutTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InPlayRate	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LoopCount	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BlendOutTriggerTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InTimeToStartMontageAt	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UAnimMontage*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UAnimMontage* UAnimInstance::PlaySlotAnimationAsDynamicMontage(class UAnimSequenceBase* Asset, struct FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32_t LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage");

	struct UAnimInstance_PlaySlotAnimationAsDynamicMontage_Params {
		class UAnimSequenceBase* Asset;			//Offset: 0 | ElementSize: 8
		struct FName SlotNodeName;			//Offset: 8 | ElementSize: 8
		float BlendInTime;			//Offset: 16 | ElementSize: 4
		float BlendOutTime;			//Offset: 20 | ElementSize: 4
		float InPlayRate;			//Offset: 24 | ElementSize: 4
		int32_t LoopCount;			//Offset: 28 | ElementSize: 4
		float BlendOutTriggerTime;			//Offset: 32 | ElementSize: 4
		float InTimeToStartMontageAt;			//Offset: 36 | ElementSize: 4
		class UAnimMontage* ReturnValue;			//Offset: 40 | ElementSize: 8
	};
	UAnimInstance_PlaySlotAnimationAsDynamicMontage_Params params;
	params.Asset = Asset;
	params.SlotNodeName = SlotNodeName;
	params.BlendInTime = BlendInTime;
	params.BlendOutTime = BlendOutTime;
	params.InPlayRate = InPlayRate;
	params.LoopCount = LoopCount;
	params.BlendOutTriggerTime = BlendOutTriggerTime;
	params.InTimeToStartMontageAt = InTimeToStartMontageAt;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.ResetDynamics
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InTeleportType	Type: ETeleportType	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UAnimInstance::ResetDynamics(ETeleportType InTeleportType) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.ResetDynamics");

	struct UAnimInstance_ResetDynamics_Params {
		ETeleportType InTeleportType;			//Offset: 0 | ElementSize: 1
	};
	UAnimInstance_ResetDynamics_Params params;
	params.InTeleportType = InTeleportType;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.AnimInstance.SavePoseSnapshot
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: SnapshotName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UAnimInstance::SavePoseSnapshot(struct FName SnapshotName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.SavePoseSnapshot");

	struct UAnimInstance_SavePoseSnapshot_Params {
		struct FName SnapshotName;			//Offset: 0 | ElementSize: 8
	};
	UAnimInstance_SavePoseSnapshot_Params params;
	params.SnapshotName = SnapshotName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.AnimInstance.SetMorphTarget
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: MorphTargetName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Value	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UAnimInstance::SetMorphTarget(struct FName MorphTargetName, float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.SetMorphTarget");

	struct UAnimInstance_SetMorphTarget_Params {
		struct FName MorphTargetName;			//Offset: 0 | ElementSize: 8
		float Value;			//Offset: 8 | ElementSize: 4
	};
	UAnimInstance_SetMorphTarget_Params params;
	params.MorphTargetName = MorphTargetName;
	params.Value = Value;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.AnimInstance.SetPropagateNotifiesToLinkedInstances
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bSet	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UAnimInstance::SetPropagateNotifiesToLinkedInstances(bool bSet) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.SetPropagateNotifiesToLinkedInstances");

	struct UAnimInstance_SetPropagateNotifiesToLinkedInstances_Params {
		bool bSet;			//Offset: 0 | ElementSize: 1
	};
	UAnimInstance_SetPropagateNotifiesToLinkedInstances_Params params;
	params.bSet = bSet;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.AnimInstance.SetReceiveNotifiesFromLinkedInstances
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bSet	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UAnimInstance::SetReceiveNotifiesFromLinkedInstances(bool bSet) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.SetReceiveNotifiesFromLinkedInstances");

	struct UAnimInstance_SetReceiveNotifiesFromLinkedInstances_Params {
		bool bSet;			//Offset: 0 | ElementSize: 1
	};
	UAnimInstance_SetReceiveNotifiesFromLinkedInstances_Params params;
	params.bSet = bSet;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.AnimInstance.SetRootMotionMode
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Value	Type: TEnumAsByte<ERootMotionMode>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UAnimInstance::SetRootMotionMode(TEnumAsByte<ERootMotionMode> Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.SetRootMotionMode");

	struct UAnimInstance_SetRootMotionMode_Params {
		TEnumAsByte<ERootMotionMode> Value;			//Offset: 0 | ElementSize: 1
	};
	UAnimInstance_SetRootMotionMode_Params params;
	params.Value = Value;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.AnimInstance.SnapshotPose
// Flags: Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: Snapshot	Type: struct FPoseSnapshot	Flags: Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UAnimInstance::SnapshotPose(struct FPoseSnapshot* Snapshot) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.SnapshotPose");

	struct UAnimInstance_SnapshotPose_Params {
		struct FPoseSnapshot Snapshot;			//Offset: 0 | ElementSize: 56
	};
	UAnimInstance_SnapshotPose_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Snapshot != nullptr)
		*Snapshot = params.Snapshot;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.StopSlotAnimation
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InBlendOutTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SlotNodeName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UAnimInstance::StopSlotAnimation(float InBlendOutTime, struct FName SlotNodeName) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.StopSlotAnimation");

	struct UAnimInstance_StopSlotAnimation_Params {
		float InBlendOutTime;			//Offset: 0 | ElementSize: 4
		struct FName SlotNodeName;			//Offset: 4 | ElementSize: 8
	};
	UAnimInstance_StopSlotAnimation_Params params;
	params.InBlendOutTime = InBlendOutTime;
	params.SlotNodeName = SlotNodeName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.AnimInstance.TryGetPawnOwner
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class APawn*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class APawn* UAnimInstance::TryGetPawnOwner()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.TryGetPawnOwner");

	struct UAnimInstance_TryGetPawnOwner_Params {
		class APawn* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UAnimInstance_TryGetPawnOwner_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.AnimInstance.UnlinkAnimClassLayers
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InClass	Type: class UAnimInstance*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UAnimInstance::UnlinkAnimClassLayers(class UAnimInstance* InClass) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.UnlinkAnimClassLayers");

	struct UAnimInstance_UnlinkAnimClassLayers_Params {
		class UAnimInstance* InClass;			//Offset: 0 | ElementSize: 8
	};
	UAnimInstance_UnlinkAnimClassLayers_Params params;
	params.InClass = InClass;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.AnimInstance.UnlockAIResources
// Flags: Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable
// Params:
// Name: bUnlockMovement	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: UnlockAILogic	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UAnimInstance::UnlockAIResources(bool bUnlockMovement, bool UnlockAILogic) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.UnlockAIResources");

	struct UAnimInstance_UnlockAIResources_Params {
		bool bUnlockMovement;			//Offset: 0 | ElementSize: 1
		bool UnlockAILogic;			//Offset: 1 | ElementSize: 1
	};
	UAnimInstance_UnlockAIResources_Params params;
	params.bUnlockMovement = bUnlockMovement;
	params.UnlockAILogic = UnlockAILogic;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}