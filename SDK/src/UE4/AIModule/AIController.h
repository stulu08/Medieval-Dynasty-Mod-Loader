#pragma once
#include "Structs.h"
#include "Engine/Controller.h"
/////////////////////////////////////////////
// Class AIModule.AIController
// Super: Class Engine.Controller
// Size: 808
// Size inherited: 664
/////////////////////////////////////////////
namespace UE4 {
class AAIController : public AController {
public:
#pragma region Members
	//unsigned char	bStartAILogicOnPossess : 1;		//Offset: 720	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbStartAILogicOnPossess() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbStartAILogicOnPossess();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbStartAILogicOnPossess(const unsigned char& value);

	//unsigned char	bStopAILogicOnUnposses : 1;		//Offset: 720	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbStopAILogicOnUnposses() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbStopAILogicOnUnposses();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbStopAILogicOnUnposses(const unsigned char& value);

	//unsigned char	bLOSflag : 1;		//Offset: 720	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbLOSflag() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbLOSflag();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbLOSflag(const unsigned char& value);

	//unsigned char	bSkipExtraLOSChecks : 1;		//Offset: 720	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbSkipExtraLOSChecks() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbSkipExtraLOSChecks();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbSkipExtraLOSChecks(const unsigned char& value);

	//unsigned char	bAllowStrafe : 1;		//Offset: 720	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbAllowStrafe() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbAllowStrafe();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbAllowStrafe(const unsigned char& value);

	//unsigned char	bWantsPlayerState : 1;		//Offset: 720	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbWantsPlayerState() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbWantsPlayerState();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbWantsPlayerState(const unsigned char& value);

	//unsigned char	bSetControlRotationFromPawnOrientation : 1;		//Offset: 720	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbSetControlRotationFromPawnOrientation() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbSetControlRotationFromPawnOrientation();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbSetControlRotationFromPawnOrientation(const unsigned char& value);

	//class UPathFollowingComponent*	PathFollowingComponent;		//Offset: 728	Size: 8	Flags: Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class UPathFollowingComponent* M_GetPathFollowingComponent() const;
	class UPathFollowingComponent** M_PtrGetPathFollowingComponent();
	void M_SetPathFollowingComponent(const class UPathFollowingComponent*& value);

	//class UBrainComponent*	BrainComponent;		//Offset: 736	Size: 8	Flags: BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UBrainComponent* M_GetBrainComponent() const;
	class UBrainComponent** M_PtrGetBrainComponent();
	void M_SetBrainComponent(const class UBrainComponent*& value);

	//class UAIPerceptionComponent*	PerceptionComponent;		//Offset: 744	Size: 8	Flags: Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UAIPerceptionComponent* M_GetPerceptionComponent() const;
	class UAIPerceptionComponent** M_PtrGetPerceptionComponent();
	void M_SetPerceptionComponent(const class UAIPerceptionComponent*& value);

	//class UPawnActionsComponent*	ActionsComp;		//Offset: 752	Size: 8	Flags: BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class UPawnActionsComponent* M_GetActionsComp() const;
	class UPawnActionsComponent** M_PtrGetActionsComp();
	void M_SetActionsComp(const class UPawnActionsComponent*& value);

	//class UBlackboardComponent*	Blackboard;		//Offset: 760	Size: 8	Flags: BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UBlackboardComponent* M_GetBlackboard() const;
	class UBlackboardComponent** M_PtrGetBlackboard();
	void M_SetBlackboard(const class UBlackboardComponent*& value);

	//class UGameplayTasksComponent*	CachedGameplayTasksComponent;		//Offset: 768	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UGameplayTasksComponent* M_GetCachedGameplayTasksComponent() const;
	class UGameplayTasksComponent** M_PtrGetCachedGameplayTasksComponent();
	void M_SetCachedGameplayTasksComponent(const class UGameplayTasksComponent*& value);

	//class UNavigationQueryFilter*	DefaultNavigationFilterClass;		//Offset: 776	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UNavigationQueryFilter* M_GetDefaultNavigationFilterClass() const;
	class UNavigationQueryFilter** M_PtrGetDefaultNavigationFilterClass();
	void M_SetDefaultNavigationFilterClass(const class UNavigationQueryFilter*& value);

	//TAssetPtr<class FAIMoveCompletedSignature__DelegateSignature>	ReceiveMoveCompleted;		//Offset: 784	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FAIMoveCompletedSignature__DelegateSignature> M_GetReceiveMoveCompleted() const;
	TAssetPtr<class FAIMoveCompletedSignature__DelegateSignature>* M_PtrGetReceiveMoveCompleted();
	void M_SetReceiveMoveCompleted(const TAssetPtr<class FAIMoveCompletedSignature__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class AIModule.AIController");
		return ptr;
	}

#pragma region Functions
	void ClaimTaskResource(class UGameplayTaskResource* ResourceClass);

	class UAIPerceptionComponent* GetAIPerceptionComponent();

	struct FVector GetFocalPoint()/* const*/;

	struct FVector GetFocalPointOnActor(class AActor* Actor)/* const*/;

	class AActor* GetFocusActor()/* const*/;

	struct FVector GetImmediateMoveDestination()/* const*/;

	TEnumAsByte<EPathFollowingStatus> GetMoveStatus()/* const*/;

	class UPathFollowingComponent* GetPathFollowingComponent()/* const*/;

	bool HasPartialPath()/* const*/;

	void K2_ClearFocus();

	void K2_SetFocalPoint(struct FVector FP);

	void K2_SetFocus(class AActor* NewFocus);

	TEnumAsByte<EPathFollowingRequestResult> MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UNavigationQueryFilter* FilterClass, bool bAllowPartialPath);

	TEnumAsByte<EPathFollowingRequestResult> MoveToLocation(const struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UNavigationQueryFilter* FilterClass, bool bAllowPartialPath);

	void OnGameplayTaskResourcesClaimed(struct FGameplayResourceSet NewlyClaimed, struct FGameplayResourceSet FreshlyReleased);

	void OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset);

	bool RunBehaviorTree(class UBehaviorTree* BTAsset);

	void SetMoveBlockDetection(bool bEnable);

	void SetPathFollowingComponent(class UPathFollowingComponent* NewPFComponent);

	void UnclaimTaskResource(class UGameplayTaskResource* ResourceClass);

	bool UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent** BlackboardComponent);

#pragma endregion
};
};