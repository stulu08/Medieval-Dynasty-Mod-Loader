#include "../SDK.h"
#include "AIController.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of bStartAILogicOnPossess
// Declaration: unsigned char bStartAILogicOnPossess : 1
unsigned char AAIController::M_GetbStartAILogicOnPossess() const {
	return Read<unsigned char>((byte*)this + 720);
}
unsigned char* AAIController::M_PtrGetbStartAILogicOnPossess() {
	return reinterpret_cast<unsigned char*>((byte*)this + 720);
}
void AAIController::M_SetbStartAILogicOnPossess(const unsigned char& value) {
	Write((byte*)this + 720, value);
}
// Member Getter and Setter of bStopAILogicOnUnposses
// Declaration: unsigned char bStopAILogicOnUnposses : 1
unsigned char AAIController::M_GetbStopAILogicOnUnposses() const {
	return Read<unsigned char>((byte*)this + 720);
}
unsigned char* AAIController::M_PtrGetbStopAILogicOnUnposses() {
	return reinterpret_cast<unsigned char*>((byte*)this + 720);
}
void AAIController::M_SetbStopAILogicOnUnposses(const unsigned char& value) {
	Write((byte*)this + 720, value);
}
// Member Getter and Setter of bLOSflag
// Declaration: unsigned char bLOSflag : 1
unsigned char AAIController::M_GetbLOSflag() const {
	return Read<unsigned char>((byte*)this + 720);
}
unsigned char* AAIController::M_PtrGetbLOSflag() {
	return reinterpret_cast<unsigned char*>((byte*)this + 720);
}
void AAIController::M_SetbLOSflag(const unsigned char& value) {
	Write((byte*)this + 720, value);
}
// Member Getter and Setter of bSkipExtraLOSChecks
// Declaration: unsigned char bSkipExtraLOSChecks : 1
unsigned char AAIController::M_GetbSkipExtraLOSChecks() const {
	return Read<unsigned char>((byte*)this + 720);
}
unsigned char* AAIController::M_PtrGetbSkipExtraLOSChecks() {
	return reinterpret_cast<unsigned char*>((byte*)this + 720);
}
void AAIController::M_SetbSkipExtraLOSChecks(const unsigned char& value) {
	Write((byte*)this + 720, value);
}
// Member Getter and Setter of bAllowStrafe
// Declaration: unsigned char bAllowStrafe : 1
unsigned char AAIController::M_GetbAllowStrafe() const {
	return Read<unsigned char>((byte*)this + 720);
}
unsigned char* AAIController::M_PtrGetbAllowStrafe() {
	return reinterpret_cast<unsigned char*>((byte*)this + 720);
}
void AAIController::M_SetbAllowStrafe(const unsigned char& value) {
	Write((byte*)this + 720, value);
}
// Member Getter and Setter of bWantsPlayerState
// Declaration: unsigned char bWantsPlayerState : 1
unsigned char AAIController::M_GetbWantsPlayerState() const {
	return Read<unsigned char>((byte*)this + 720);
}
unsigned char* AAIController::M_PtrGetbWantsPlayerState() {
	return reinterpret_cast<unsigned char*>((byte*)this + 720);
}
void AAIController::M_SetbWantsPlayerState(const unsigned char& value) {
	Write((byte*)this + 720, value);
}
// Member Getter and Setter of bSetControlRotationFromPawnOrientation
// Declaration: unsigned char bSetControlRotationFromPawnOrientation : 1
unsigned char AAIController::M_GetbSetControlRotationFromPawnOrientation() const {
	return Read<unsigned char>((byte*)this + 720);
}
unsigned char* AAIController::M_PtrGetbSetControlRotationFromPawnOrientation() {
	return reinterpret_cast<unsigned char*>((byte*)this + 720);
}
void AAIController::M_SetbSetControlRotationFromPawnOrientation(const unsigned char& value) {
	Write((byte*)this + 720, value);
}
// Member Getter and Setter of PathFollowingComponent
// Declaration: class UPathFollowingComponent* PathFollowingComponent
class UPathFollowingComponent* AAIController::M_GetPathFollowingComponent() const {
	return Read<class UPathFollowingComponent*>((byte*)this + 728);
}
class UPathFollowingComponent** AAIController::M_PtrGetPathFollowingComponent() {
	return reinterpret_cast<class UPathFollowingComponent**>((byte*)this + 728);
}
void AAIController::M_SetPathFollowingComponent(const class UPathFollowingComponent*& value) {
	Write((byte*)this + 728, value);
}
// Member Getter and Setter of BrainComponent
// Declaration: class UBrainComponent* BrainComponent
class UBrainComponent* AAIController::M_GetBrainComponent() const {
	return Read<class UBrainComponent*>((byte*)this + 736);
}
class UBrainComponent** AAIController::M_PtrGetBrainComponent() {
	return reinterpret_cast<class UBrainComponent**>((byte*)this + 736);
}
void AAIController::M_SetBrainComponent(const class UBrainComponent*& value) {
	Write((byte*)this + 736, value);
}
// Member Getter and Setter of PerceptionComponent
// Declaration: class UAIPerceptionComponent* PerceptionComponent
class UAIPerceptionComponent* AAIController::M_GetPerceptionComponent() const {
	return Read<class UAIPerceptionComponent*>((byte*)this + 744);
}
class UAIPerceptionComponent** AAIController::M_PtrGetPerceptionComponent() {
	return reinterpret_cast<class UAIPerceptionComponent**>((byte*)this + 744);
}
void AAIController::M_SetPerceptionComponent(const class UAIPerceptionComponent*& value) {
	Write((byte*)this + 744, value);
}
// Member Getter and Setter of ActionsComp
// Declaration: class UPawnActionsComponent* ActionsComp
class UPawnActionsComponent* AAIController::M_GetActionsComp() const {
	return Read<class UPawnActionsComponent*>((byte*)this + 752);
}
class UPawnActionsComponent** AAIController::M_PtrGetActionsComp() {
	return reinterpret_cast<class UPawnActionsComponent**>((byte*)this + 752);
}
void AAIController::M_SetActionsComp(const class UPawnActionsComponent*& value) {
	Write((byte*)this + 752, value);
}
// Member Getter and Setter of Blackboard
// Declaration: class UBlackboardComponent* Blackboard
class UBlackboardComponent* AAIController::M_GetBlackboard() const {
	return Read<class UBlackboardComponent*>((byte*)this + 760);
}
class UBlackboardComponent** AAIController::M_PtrGetBlackboard() {
	return reinterpret_cast<class UBlackboardComponent**>((byte*)this + 760);
}
void AAIController::M_SetBlackboard(const class UBlackboardComponent*& value) {
	Write((byte*)this + 760, value);
}
// Member Getter and Setter of CachedGameplayTasksComponent
// Declaration: class UGameplayTasksComponent* CachedGameplayTasksComponent
class UGameplayTasksComponent* AAIController::M_GetCachedGameplayTasksComponent() const {
	return Read<class UGameplayTasksComponent*>((byte*)this + 768);
}
class UGameplayTasksComponent** AAIController::M_PtrGetCachedGameplayTasksComponent() {
	return reinterpret_cast<class UGameplayTasksComponent**>((byte*)this + 768);
}
void AAIController::M_SetCachedGameplayTasksComponent(const class UGameplayTasksComponent*& value) {
	Write((byte*)this + 768, value);
}
// Member Getter and Setter of DefaultNavigationFilterClass
// Declaration: class UNavigationQueryFilter* DefaultNavigationFilterClass
class UNavigationQueryFilter* AAIController::M_GetDefaultNavigationFilterClass() const {
	return Read<class UNavigationQueryFilter*>((byte*)this + 776);
}
class UNavigationQueryFilter** AAIController::M_PtrGetDefaultNavigationFilterClass() {
	return reinterpret_cast<class UNavigationQueryFilter**>((byte*)this + 776);
}
void AAIController::M_SetDefaultNavigationFilterClass(const class UNavigationQueryFilter*& value) {
	Write((byte*)this + 776, value);
}
// Member Getter and Setter of ReceiveMoveCompleted
// Declaration: TAssetPtr<class FAIMoveCompletedSignature__DelegateSignature> ReceiveMoveCompleted
TAssetPtr<class FAIMoveCompletedSignature__DelegateSignature> AAIController::M_GetReceiveMoveCompleted() const {
	return Read<TAssetPtr<class FAIMoveCompletedSignature__DelegateSignature>>((byte*)this + 784);
}
TAssetPtr<class FAIMoveCompletedSignature__DelegateSignature>* AAIController::M_PtrGetReceiveMoveCompleted() {
	return reinterpret_cast<TAssetPtr<class FAIMoveCompletedSignature__DelegateSignature>*>((byte*)this + 784);
}
void AAIController::M_SetReceiveMoveCompleted(const TAssetPtr<class FAIMoveCompletedSignature__DelegateSignature>& value) {
	Write((byte*)this + 784, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function AIModule.AIController.ClaimTaskResource
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ResourceClass	Type: class UGameplayTaskResource*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AAIController::ClaimTaskResource(class UGameplayTaskResource* ResourceClass) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.ClaimTaskResource");

	struct AAIController_ClaimTaskResource_Params {
		class UGameplayTaskResource* ResourceClass;			//Offset: 0 | ElementSize: 8
	};
	AAIController_ClaimTaskResource_Params params;
	params.ResourceClass = ResourceClass;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AIModule.AIController.GetAIPerceptionComponent
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: class UAIPerceptionComponent*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UAIPerceptionComponent* AAIController::GetAIPerceptionComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetAIPerceptionComponent");

	struct AAIController_GetAIPerceptionComponent_Params {
		class UAIPerceptionComponent* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	AAIController_GetAIPerceptionComponent_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AIModule.AIController.GetFocalPoint
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector AAIController::GetFocalPoint()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetFocalPoint");

	struct AAIController_GetFocalPoint_Params {
		struct FVector ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	AAIController_GetFocalPoint_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AIModule.AIController.GetFocalPointOnActor
// Flags: Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: Actor	Type: class AActor*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector AAIController::GetFocalPointOnActor(class AActor* Actor)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetFocalPointOnActor");

	struct AAIController_GetFocalPointOnActor_Params {
		class AActor* Actor;			//Offset: 0 | ElementSize: 8
		struct FVector ReturnValue;			//Offset: 8 | ElementSize: 12
	};
	AAIController_GetFocalPointOnActor_Params params;
	params.Actor = Actor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AIModule.AIController.GetFocusActor
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class AActor* AAIController::GetFocusActor()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetFocusActor");

	struct AAIController_GetFocusActor_Params {
		class AActor* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	AAIController_GetFocusActor_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AIModule.AIController.GetImmediateMoveDestination
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector AAIController::GetImmediateMoveDestination()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetImmediateMoveDestination");

	struct AAIController_GetImmediateMoveDestination_Params {
		struct FVector ReturnValue;			//Offset: 0 | ElementSize: 12
	};
	AAIController_GetImmediateMoveDestination_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AIModule.AIController.GetMoveStatus
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: TEnumAsByte<EPathFollowingStatus>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TEnumAsByte<EPathFollowingStatus> AAIController::GetMoveStatus()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetMoveStatus");

	struct AAIController_GetMoveStatus_Params {
		TEnumAsByte<EPathFollowingStatus> ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AAIController_GetMoveStatus_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AIModule.AIController.GetPathFollowingComponent
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class UPathFollowingComponent*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UPathFollowingComponent* AAIController::GetPathFollowingComponent()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetPathFollowingComponent");

	struct AAIController_GetPathFollowingComponent_Params {
		class UPathFollowingComponent* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	AAIController_GetPathFollowingComponent_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AIModule.AIController.HasPartialPath
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AAIController::HasPartialPath()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.HasPartialPath");

	struct AAIController_HasPartialPath_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AAIController_HasPartialPath_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AIModule.AIController.K2_ClearFocus
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void AAIController::K2_ClearFocus() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.K2_ClearFocus");

	struct AAIController_K2_ClearFocus_Params {
	};
	AAIController_K2_ClearFocus_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AIModule.AIController.K2_SetFocalPoint
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: FP	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AAIController::K2_SetFocalPoint(struct FVector FP) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.K2_SetFocalPoint");

	struct AAIController_K2_SetFocalPoint_Params {
		struct FVector FP;			//Offset: 0 | ElementSize: 12
	};
	AAIController_K2_SetFocalPoint_Params params;
	params.FP = FP;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AIModule.AIController.K2_SetFocus
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewFocus	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AAIController::K2_SetFocus(class AActor* NewFocus) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.K2_SetFocus");

	struct AAIController_K2_SetFocus_Params {
		class AActor* NewFocus;			//Offset: 0 | ElementSize: 8
	};
	AAIController_K2_SetFocus_Params params;
	params.NewFocus = NewFocus;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AIModule.AIController.MoveToActor
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Goal	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: AcceptanceRadius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bStopOnOverlap	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bUsePathfinding	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bCanStrafe	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FilterClass	Type: class UNavigationQueryFilter*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAllowPartialPath	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TEnumAsByte<EPathFollowingRequestResult>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TEnumAsByte<EPathFollowingRequestResult> AAIController::MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UNavigationQueryFilter* FilterClass, bool bAllowPartialPath) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.MoveToActor");

	struct AAIController_MoveToActor_Params {
		class AActor* Goal;			//Offset: 0 | ElementSize: 8
		float AcceptanceRadius;			//Offset: 8 | ElementSize: 4
		bool bStopOnOverlap;			//Offset: 12 | ElementSize: 1
		bool bUsePathfinding;			//Offset: 13 | ElementSize: 1
		bool bCanStrafe;			//Offset: 14 | ElementSize: 1
		class UNavigationQueryFilter* FilterClass;			//Offset: 16 | ElementSize: 8
		bool bAllowPartialPath;			//Offset: 24 | ElementSize: 1
		TEnumAsByte<EPathFollowingRequestResult> ReturnValue;			//Offset: 25 | ElementSize: 1
	};
	AAIController_MoveToActor_Params params;
	params.Goal = Goal;
	params.AcceptanceRadius = AcceptanceRadius;
	params.bStopOnOverlap = bStopOnOverlap;
	params.bUsePathfinding = bUsePathfinding;
	params.bCanStrafe = bCanStrafe;
	params.FilterClass = FilterClass;
	params.bAllowPartialPath = bAllowPartialPath;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AIModule.AIController.MoveToLocation
// Flags: Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: Dest	Type: struct FVector	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: AcceptanceRadius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bStopOnOverlap	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bUsePathfinding	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bProjectDestinationToNavigation	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bCanStrafe	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FilterClass	Type: class UNavigationQueryFilter*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAllowPartialPath	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TEnumAsByte<EPathFollowingRequestResult>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TEnumAsByte<EPathFollowingRequestResult> AAIController::MoveToLocation(const struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UNavigationQueryFilter* FilterClass, bool bAllowPartialPath) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.MoveToLocation");

	struct AAIController_MoveToLocation_Params {
		struct FVector Dest;			//Offset: 0 | ElementSize: 12
		float AcceptanceRadius;			//Offset: 12 | ElementSize: 4
		bool bStopOnOverlap;			//Offset: 16 | ElementSize: 1
		bool bUsePathfinding;			//Offset: 17 | ElementSize: 1
		bool bProjectDestinationToNavigation;			//Offset: 18 | ElementSize: 1
		bool bCanStrafe;			//Offset: 19 | ElementSize: 1
		class UNavigationQueryFilter* FilterClass;			//Offset: 24 | ElementSize: 8
		bool bAllowPartialPath;			//Offset: 32 | ElementSize: 1
		TEnumAsByte<EPathFollowingRequestResult> ReturnValue;			//Offset: 33 | ElementSize: 1
	};
	AAIController_MoveToLocation_Params params;
	params.Dest = Dest;
	params.AcceptanceRadius = AcceptanceRadius;
	params.bStopOnOverlap = bStopOnOverlap;
	params.bUsePathfinding = bUsePathfinding;
	params.bProjectDestinationToNavigation = bProjectDestinationToNavigation;
	params.bCanStrafe = bCanStrafe;
	params.FilterClass = FilterClass;
	params.bAllowPartialPath = bAllowPartialPath;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AIModule.AIController.OnGameplayTaskResourcesClaimed
// Flags: Native, Public
// Params:
// Name: NewlyClaimed	Type: struct FGameplayResourceSet	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
// Name: FreshlyReleased	Type: struct FGameplayResourceSet	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AAIController::OnGameplayTaskResourcesClaimed(struct FGameplayResourceSet NewlyClaimed, struct FGameplayResourceSet FreshlyReleased) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.OnGameplayTaskResourcesClaimed");

	struct AAIController_OnGameplayTaskResourcesClaimed_Params {
		struct FGameplayResourceSet NewlyClaimed;			//Offset: 0 | ElementSize: 2
		struct FGameplayResourceSet FreshlyReleased;			//Offset: 2 | ElementSize: 2
	};
	AAIController_OnGameplayTaskResourcesClaimed_Params params;
	params.NewlyClaimed = NewlyClaimed;
	params.FreshlyReleased = FreshlyReleased;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AIModule.AIController.OnUsingBlackBoard
// Flags: Event, Protected, BlueprintEvent
// Params:
// Name: BlackboardComp	Type: class UBlackboardComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BlackboardAsset	Type: class UBlackboardData*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AAIController::OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.OnUsingBlackBoard");

	struct AAIController_OnUsingBlackBoard_Params {
		class UBlackboardComponent* BlackboardComp;			//Offset: 0 | ElementSize: 8
		class UBlackboardData* BlackboardAsset;			//Offset: 8 | ElementSize: 8
	};
	AAIController_OnUsingBlackBoard_Params params;
	params.BlackboardComp = BlackboardComp;
	params.BlackboardAsset = BlackboardAsset;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AIModule.AIController.RunBehaviorTree
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: BTAsset	Type: class UBehaviorTree*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AAIController::RunBehaviorTree(class UBehaviorTree* BTAsset) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.RunBehaviorTree");

	struct AAIController_RunBehaviorTree_Params {
		class UBehaviorTree* BTAsset;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	AAIController_RunBehaviorTree_Params params;
	params.BTAsset = BTAsset;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function AIModule.AIController.SetMoveBlockDetection
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bEnable	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AAIController::SetMoveBlockDetection(bool bEnable) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.SetMoveBlockDetection");

	struct AAIController_SetMoveBlockDetection_Params {
		bool bEnable;			//Offset: 0 | ElementSize: 1
	};
	AAIController_SetMoveBlockDetection_Params params;
	params.bEnable = bEnable;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AIModule.AIController.SetPathFollowingComponent
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewPFComponent	Type: class UPathFollowingComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AAIController::SetPathFollowingComponent(class UPathFollowingComponent* NewPFComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.SetPathFollowingComponent");

	struct AAIController_SetPathFollowingComponent_Params {
		class UPathFollowingComponent* NewPFComponent;			//Offset: 0 | ElementSize: 8
	};
	AAIController_SetPathFollowingComponent_Params params;
	params.NewPFComponent = NewPFComponent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AIModule.AIController.UnclaimTaskResource
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ResourceClass	Type: class UGameplayTaskResource*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AAIController::UnclaimTaskResource(class UGameplayTaskResource* ResourceClass) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.UnclaimTaskResource");

	struct AAIController_UnclaimTaskResource_Params {
		class UGameplayTaskResource* ResourceClass;			//Offset: 0 | ElementSize: 8
	};
	AAIController_UnclaimTaskResource_Params params;
	params.ResourceClass = ResourceClass;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function AIModule.AIController.UseBlackboard
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: BlackboardAsset	Type: class UBlackboardData*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BlackboardComponent	Type: class UBlackboardComponent*	Flags: Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AAIController::UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent** BlackboardComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.UseBlackboard");

	struct AAIController_UseBlackboard_Params {
		class UBlackboardData* BlackboardAsset;			//Offset: 0 | ElementSize: 8
		class UBlackboardComponent* BlackboardComponent;			//Offset: 8 | ElementSize: 8
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	AAIController_UseBlackboard_Params params;
	params.BlackboardAsset = BlackboardAsset;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (BlackboardComponent != nullptr)
		*BlackboardComponent = params.BlackboardComponent;
	return params.ReturnValue;
}

#pragma endregion
}