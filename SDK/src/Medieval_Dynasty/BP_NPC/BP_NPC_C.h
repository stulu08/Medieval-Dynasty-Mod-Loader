#pragma once
#include "Structs.h"
#include "BP_BaseCharacter/BP_BaseCharacter_C.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_NPC.BP_NPC_C
// Super: BlueprintGeneratedClass BP_BaseCharacter.BP_BaseCharacter_C
// Size: 7597
// Size inherited: 5580
/////////////////////////////////////////////
namespace UE4 {
class ABP_NPC_C : public ABP_BaseCharacter_C {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 5584	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//class USkeletalMeshComponent*	ShadowCaster;		//Offset: 5592	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class USkeletalMeshComponent* M_GetShadowCaster() const;
	class USkeletalMeshComponent** M_PtrGetShadowCaster();
	void M_SetShadowCaster(const class USkeletalMeshComponent*& value);

	//class UBP_BoostComponent_C*	BP_BoostComponent;		//Offset: 5600	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_BoostComponent_C* M_GetBP_BoostComponent() const;
	class UBP_BoostComponent_C** M_PtrGetBP_BoostComponent();
	void M_SetBP_BoostComponent(const class UBP_BoostComponent_C*& value);

	//class UNavigationInvokerComponent*	NavigationInvoker;		//Offset: 5608	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UNavigationInvokerComponent* M_GetNavigationInvoker() const;
	class UNavigationInvokerComponent** M_PtrGetNavigationInvoker();
	void M_SetNavigationInvoker(const class UNavigationInvokerComponent*& value);

	//unsigned char	ProfessionState;		//Offset: 5616	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char M_GetProfessionState() const;
	unsigned char* M_PtrGetProfessionState();
	void M_SetProfessionState(const unsigned char& value);

	//unsigned char	BreakAnimID;		//Offset: 5617	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char M_GetBreakAnimID() const;
	unsigned char* M_PtrGetBreakAnimID();
	void M_SetBreakAnimID(const unsigned char& value);

	//TEnumAsByte<E_AnimBreakType>	BreakAnimType;		//Offset: 5618	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_AnimBreakType> M_GetBreakAnimType() const;
	TEnumAsByte<E_AnimBreakType>* M_PtrGetBreakAnimType();
	void M_SetBreakAnimType(const TEnumAsByte<E_AnimBreakType>& value);

	//unsigned char	ActivityAnimID;		//Offset: 5619	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char M_GetActivityAnimID() const;
	unsigned char* M_PtrGetActivityAnimID();
	void M_SetActivityAnimID(const unsigned char& value);

	//TEnumAsByte<E_AnimActivityType>	ActivityAnimType;		//Offset: 5620	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_AnimActivityType> M_GetActivityAnimType() const;
	TEnumAsByte<E_AnimActivityType>* M_PtrGetActivityAnimType();
	void M_SetActivityAnimType(const TEnumAsByte<E_AnimActivityType>& value);

	//int32_t	WorkStateLoops;		//Offset: 5624	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetWorkStateLoops() const;
	int32_t* M_PtrGetWorkStateLoops();
	void M_SetWorkStateLoops(const int32_t& value);

	//int32_t	CurrentWorkStateLoop;		//Offset: 5628	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetCurrentWorkStateLoop() const;
	int32_t* M_PtrGetCurrentWorkStateLoop();
	void M_SetCurrentWorkStateLoop(const int32_t& value);

	//bool	Spawned;		//Offset: 5632	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSpawned() const;
	bool* M_PtrGetSpawned();
	void M_SetSpawned(const bool& value);

	//bool	IsStoryNPC;		//Offset: 5633	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
	bool M_GetIsStoryNPC() const;
	bool* M_PtrGetIsStoryNPC();
	void M_SetIsStoryNPC(const bool& value);

	//bool	NightPatrol;		//Offset: 5634	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
	bool M_GetNightPatrol() const;
	bool* M_PtrGetNightPatrol();
	void M_SetNightPatrol(const bool& value);

	//bool	HasInfant;		//Offset: 5635	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetHasInfant() const;
	bool* M_PtrGetHasInfant();
	void M_SetHasInfant(const bool& value);

	//bool	ChangeCollision;		//Offset: 5636	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetChangeCollision() const;
	bool* M_PtrGetChangeCollision();
	void M_SetChangeCollision(const bool& value);

	//bool	IsComponent;		//Offset: 5637	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsComponent() const;
	bool* M_PtrGetIsComponent();
	void M_SetIsComponent(const bool& value);

	//bool	Interactable;		//Offset: 5638	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetInteractable() const;
	bool* M_PtrGetInteractable();
	void M_SetInteractable(const bool& value);

	//bool	IsLookAtTargetRotation;		//Offset: 5639	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsLookAtTargetRotation() const;
	bool* M_PtrGetIsLookAtTargetRotation();
	void M_SetIsLookAtTargetRotation(const bool& value);

	//bool	InspectorVisibility;		//Offset: 5640	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetInspectorVisibility() const;
	bool* M_PtrGetInspectorVisibility();
	void M_SetInspectorVisibility(const bool& value);

	//bool	IsLost;		//Offset: 5641	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsLost() const;
	bool* M_PtrGetIsLost();
	void M_SetIsLost(const bool& value);

	//bool	IsTargetOfTalkGoal;		//Offset: 5642	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
	bool M_GetIsTargetOfTalkGoal() const;
	bool* M_PtrGetIsTargetOfTalkGoal();
	void M_SetIsTargetOfTalkGoal(const bool& value);

	//int32_t	QuestIndex;		//Offset: 5644	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetQuestIndex() const;
	int32_t* M_PtrGetQuestIndex();
	void M_SetQuestIndex(const int32_t& value);

	//int32_t	BedIndex;		//Offset: 5648	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetBedIndex() const;
	int32_t* M_PtrGetBedIndex();
	void M_SetBedIndex(const int32_t& value);

	//int32_t	BedSlotIndex;		//Offset: 5652	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetBedSlotIndex() const;
	int32_t* M_PtrGetBedSlotIndex();
	void M_SetBedSlotIndex(const int32_t& value);

	//int32_t	WorkSlotIndex;		//Offset: 5656	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetWorkSlotIndex() const;
	int32_t* M_PtrGetWorkSlotIndex();
	void M_SetWorkSlotIndex(const int32_t& value);

	//struct FVector	FoliageLocation;		//Offset: 5660	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetFoliageLocation() const;
	struct FVector* M_PtrGetFoliageLocation();
	void M_SetFoliageLocation(const struct FVector& value);

	//TArray<struct FVector>	Paths;		//Offset: 5672	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FVector> M_GetPaths() const;
	TArray<struct FVector>* M_PtrGetPaths();
	void M_SetPaths(const TArray<struct FVector>& value);

	//struct FTransform	SpawnPoint;		//Offset: 5696	Size: 48	Flags: Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
	struct FTransform M_GetSpawnPoint() const;
	struct FTransform* M_PtrGetSpawnPoint();
	void M_SetSpawnPoint(const struct FTransform& value);

	//class AActor*	Building;		//Offset: 5744	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AActor* M_GetBuilding() const;
	class AActor** M_PtrGetBuilding();
	void M_SetBuilding(const class AActor*& value);

	//bool	Vendor;		//Offset: 5752	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
	bool M_GetVendor() const;
	bool* M_PtrGetVendor();
	void M_SetVendor(const bool& value);

	//class AActor*	LastFurniture;		//Offset: 5760	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AActor* M_GetLastFurniture() const;
	class AActor** M_PtrGetLastFurniture();
	void M_SetLastFurniture(const class AActor*& value);

	//class AActor*	Spawner;		//Offset: 5768	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AActor* M_GetSpawner() const;
	class AActor** M_PtrGetSpawner();
	void M_SetSpawner(const class AActor*& value);

	//TArray<class UObject*>	AnimalsReferences;		//Offset: 5776	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<class UObject*> M_GetAnimalsReferences() const;
	TArray<class UObject*>* M_PtrGetAnimalsReferences();
	void M_SetAnimalsReferences(const TArray<class UObject*>& value);

	//struct FST_FoliageTarget	FoliageTarget;		//Offset: 5792	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash
	struct FST_FoliageTarget M_GetFoliageTarget() const;
	struct FST_FoliageTarget* M_PtrGetFoliageTarget();
	void M_SetFoliageTarget(const struct FST_FoliageTarget& value);

	//int32_t	QuestActivitiesIndex;		//Offset: 5872	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetQuestActivitiesIndex() const;
	int32_t* M_PtrGetQuestActivitiesIndex();
	void M_SetQuestActivitiesIndex(const int32_t& value);

	//struct FString	QuestNameID;		//Offset: 5880	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
	struct FString M_GetQuestNameID() const;
	struct FString* M_PtrGetQuestNameID();
	void M_SetQuestNameID(const struct FString& value);

	//struct FDataTableRowHandle	QuestToGiveDTHandle;		//Offset: 5896	Size: 16	Flags: Edit, BlueprintVisible, Net, DisableEditOnInstance, NoDestructor
	struct FDataTableRowHandle M_GetQuestToGiveDTHandle() const;
	struct FDataTableRowHandle* M_PtrGetQuestToGiveDTHandle();
	void M_SetQuestToGiveDTHandle(const struct FDataTableRowHandle& value);

	//struct FST_QuestAnimation	QuestAnimation;		//Offset: 5912	Size: 4	Flags: Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
	struct FST_QuestAnimation M_GetQuestAnimation() const;
	struct FST_QuestAnimation* M_PtrGetQuestAnimation();
	void M_SetQuestAnimation(const struct FST_QuestAnimation& value);

	//struct FST_QuestInfos	QuestToGive;		//Offset: 5920	Size: 992	Flags: Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
	struct FST_QuestInfos M_GetQuestToGive() const;
	struct FST_QuestInfos* M_PtrGetQuestToGive();
	void M_SetQuestToGive(const struct FST_QuestInfos& value);

	//TArray<struct FST_QuestInfos>	TalkQuestReference;		//Offset: 6912	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
	TArray<struct FST_QuestInfos> M_GetTalkQuestReference() const;
	TArray<struct FST_QuestInfos>* M_PtrGetTalkQuestReference();
	void M_SetTalkQuestReference(const TArray<struct FST_QuestInfos>& value);

	//TAssetPtr<class FWorkMontageLoaded__DelegateSignature>	WorkMontageLoaded;		//Offset: 6928	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FWorkMontageLoaded__DelegateSignature> M_GetWorkMontageLoaded() const;
	TAssetPtr<class FWorkMontageLoaded__DelegateSignature>* M_PtrGetWorkMontageLoaded();
	void M_SetWorkMontageLoaded(const TAssetPtr<class FWorkMontageLoaded__DelegateSignature>& value);

	//TAssetPtr<class FWorkLoopsFinished__DelegateSignature>	WorkLoopsFinished;		//Offset: 6944	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FWorkLoopsFinished__DelegateSignature> M_GetWorkLoopsFinished() const;
	TAssetPtr<class FWorkLoopsFinished__DelegateSignature>* M_PtrGetWorkLoopsFinished();
	void M_SetWorkLoopsFinished(const TAssetPtr<class FWorkLoopsFinished__DelegateSignature>& value);

	//TAssetPtr<class FWorkMontageComplete__DelegateSignature>	WorkMontageComplete;		//Offset: 6960	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FWorkMontageComplete__DelegateSignature> M_GetWorkMontageComplete() const;
	TAssetPtr<class FWorkMontageComplete__DelegateSignature>* M_PtrGetWorkMontageComplete();
	void M_SetWorkMontageComplete(const TAssetPtr<class FWorkMontageComplete__DelegateSignature>& value);

	//TArray<struct FName>	Toys;		//Offset: 6976	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FName> M_GetToys() const;
	TArray<struct FName>* M_PtrGetToys();
	void M_SetToys(const TArray<struct FName>& value);

	//class UAnimMontage*	WorkMontage;		//Offset: 6992	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UAnimMontage* M_GetWorkMontage() const;
	class UAnimMontage** M_PtrGetWorkMontage();
	void M_SetWorkMontage(const class UAnimMontage*& value);

	//struct FDataTableRowHandle	VendorCat;		//Offset: 7000	Size: 16	Flags: Edit, BlueprintVisible, Net, NoDestructor, ExposeOnSpawn
	struct FDataTableRowHandle M_GetVendorCat() const;
	struct FDataTableRowHandle* M_PtrGetVendorCat();
	void M_SetVendorCat(const struct FDataTableRowHandle& value);

	//TEnumAsByte<E_NPCStatus>	NPC_Status;		//Offset: 7016	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_NPCStatus> M_GetNPC_Status() const;
	TEnumAsByte<E_NPCStatus>* M_PtrGetNPC_Status();
	void M_SetNPC_Status(const TEnumAsByte<E_NPCStatus>& value);

	//TEnumAsByte<E_Tools_Activity>	ToolActivity;		//Offset: 7017	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Tools_Activity> M_GetToolActivity() const;
	TEnumAsByte<E_Tools_Activity>* M_PtrGetToolActivity();
	void M_SetToolActivity(const TEnumAsByte<E_Tools_Activity>& value);

	//struct FName	NeedItem;		//Offset: 7020	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetNeedItem() const;
	struct FName* M_PtrGetNeedItem();
	void M_SetNeedItem(const struct FName& value);

	//class UBTTask_BlueprintBase*	AI_Task;		//Offset: 7032	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UBTTask_BlueprintBase* M_GetAI_Task() const;
	class UBTTask_BlueprintBase** M_PtrGetAI_Task();
	void M_SetAI_Task(const class UBTTask_BlueprintBase*& value);

	//struct FST_FieldTasksLists	FieldTask;		//Offset: 7040	Size: 56	Flags: Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
	struct FST_FieldTasksLists M_GetFieldTask() const;
	struct FST_FieldTasksLists* M_PtrGetFieldTask();
	void M_SetFieldTask(const struct FST_FieldTasksLists& value);

	//bool	WhetherAffectNavigation;		//Offset: 7096	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetWhetherAffectNavigation() const;
	bool* M_PtrGetWhetherAffectNavigation();
	void M_SetWhetherAffectNavigation(const bool& value);

	//struct FST_SAVE_NPC_Blackboards	OptimizationBlackboards;		//Offset: 7100	Size: 40	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_SAVE_NPC_Blackboards M_GetOptimizationBlackboards() const;
	struct FST_SAVE_NPC_Blackboards* M_PtrGetOptimizationBlackboards();
	void M_SetOptimizationBlackboards(const struct FST_SAVE_NPC_Blackboards& value);

	//TAssetPtr<class FBreakMontageComplete__DelegateSignature>	BreakMontageComplete;		//Offset: 7144	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FBreakMontageComplete__DelegateSignature> M_GetBreakMontageComplete() const;
	TAssetPtr<class FBreakMontageComplete__DelegateSignature>* M_PtrGetBreakMontageComplete();
	void M_SetBreakMontageComplete(const TAssetPtr<class FBreakMontageComplete__DelegateSignature>& value);

	//class UAnimMontage*	BreakMontage;		//Offset: 7160	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UAnimMontage* M_GetBreakMontage() const;
	class UAnimMontage** M_PtrGetBreakMontage();
	void M_SetBreakMontage(const class UAnimMontage*& value);

	//bool	CanChangeMovementActive;		//Offset: 7168	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCanChangeMovementActive() const;
	bool* M_PtrGetCanChangeMovementActive();
	void M_SetCanChangeMovementActive(const bool& value);

	//TEnumAsByte<E_OutsideNPCTypes>	OutsideNPCType;		//Offset: 7169	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	TEnumAsByte<E_OutsideNPCTypes> M_GetOutsideNPCType() const;
	TEnumAsByte<E_OutsideNPCTypes>* M_PtrGetOutsideNPCType();
	void M_SetOutsideNPCType(const TEnumAsByte<E_OutsideNPCTypes>& value);

	//TEnumAsByte<E_Ownership>	OutsideNPC_Ownership;		//Offset: 7170	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Ownership> M_GetOutsideNPC_Ownership() const;
	TEnumAsByte<E_Ownership>* M_PtrGetOutsideNPC_Ownership();
	void M_SetOutsideNPC_Ownership(const TEnumAsByte<E_Ownership>& value);

	//TEnumAsByte<E_BanditType>	BanditType;		//Offset: 7171	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_BanditType> M_GetBanditType() const;
	TEnumAsByte<E_BanditType>* M_PtrGetBanditType();
	void M_SetBanditType(const TEnumAsByte<E_BanditType>& value);

	//TEnumAsByte<E_Wealth>	Wealth;		//Offset: 7172	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	TEnumAsByte<E_Wealth> M_GetWealth() const;
	TEnumAsByte<E_Wealth>* M_PtrGetWealth();
	void M_SetWealth(const TEnumAsByte<E_Wealth>& value);

	//TMap<TEnumAsByte<E_TimeOfDay>, bool>	ChangedTimeOfDay;		//Offset: 7176	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<TEnumAsByte<E_TimeOfDay>, bool> M_GetChangedTimeOfDay() const;
	TMap<TEnumAsByte<E_TimeOfDay>, bool>* M_PtrGetChangedTimeOfDay();
	void M_SetChangedTimeOfDay(const TMap<TEnumAsByte<E_TimeOfDay>, bool>& value);

	//struct FName	BehaviorTreeName;		//Offset: 7256	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetBehaviorTreeName() const;
	struct FName* M_PtrGetBehaviorTreeName();
	void M_SetBehaviorTreeName(const struct FName& value);

	//struct FName	BehaviorDT_Name;		//Offset: 7264	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	struct FName M_GetBehaviorDT_Name() const;
	struct FName* M_PtrGetBehaviorDT_Name();
	void M_SetBehaviorDT_Name(const struct FName& value);

	//struct FString	ID;		//Offset: 7272	Size: 16	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash
	struct FString M_GetID() const;
	struct FString* M_PtrGetID();
	void M_SetID(const struct FString& value);

	//struct FTimerHandle	CheckUnderTheMapTimer;		//Offset: 7288	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetCheckUnderTheMapTimer() const;
	struct FTimerHandle* M_PtrGetCheckUnderTheMapTimer();
	void M_SetCheckUnderTheMapTimer(const struct FTimerHandle& value);

	//struct FTimerHandle	AfterGetOrWakeUpTimer;		//Offset: 7296	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetAfterGetOrWakeUpTimer() const;
	struct FTimerHandle* M_PtrGetAfterGetOrWakeUpTimer();
	void M_SetAfterGetOrWakeUpTimer(const struct FTimerHandle& value);

	//struct FST_Hour	BeginWakeUpTime;		//Offset: 7304	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_Hour M_GetBeginWakeUpTime() const;
	struct FST_Hour* M_PtrGetBeginWakeUpTime();
	void M_SetBeginWakeUpTime(const struct FST_Hour& value);

	//struct FST_Hour	BeginSleepTime;		//Offset: 7316	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_Hour M_GetBeginSleepTime() const;
	struct FST_Hour* M_PtrGetBeginSleepTime();
	void M_SetBeginSleepTime(const struct FST_Hour& value);

	//struct FST_Hour	StartWorkingTime;		//Offset: 7328	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_Hour M_GetStartWorkingTime() const;
	struct FST_Hour* M_PtrGetStartWorkingTime();
	void M_SetStartWorkingTime(const struct FST_Hour& value);

	//struct FST_Hour	StopWorkingTime;		//Offset: 7340	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_Hour M_GetStopWorkingTime() const;
	struct FST_Hour* M_PtrGetStopWorkingTime();
	void M_SetStopWorkingTime(const struct FST_Hour& value);

	//struct FST_Profession	ProfessionData;		//Offset: 7352	Size: 72	Flags: Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash
	struct FST_Profession M_GetProfessionData() const;
	struct FST_Profession* M_PtrGetProfessionData();
	void M_SetProfessionData(const struct FST_Profession& value);

	//struct FDataTableRowHandle	CustomNPC_DTHandler;		//Offset: 7424	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
	struct FDataTableRowHandle M_GetCustomNPC_DTHandler() const;
	struct FDataTableRowHandle* M_PtrGetCustomNPC_DTHandler();
	void M_SetCustomNPC_DTHandler(const struct FDataTableRowHandle& value);

	//class AAIC_NPC_C*	AINPCReference;		//Offset: 7440	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AAIC_NPC_C* M_GetAINPCReference() const;
	class AAIC_NPC_C** M_PtrGetAINPCReference();
	void M_SetAINPCReference(const class AAIC_NPC_C*& value);

	//class UAudioComponent*	VoiceComponentVar;		//Offset: 7448	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UAudioComponent* M_GetVoiceComponentVar() const;
	class UAudioComponent** M_PtrGetVoiceComponentVar();
	void M_SetVoiceComponentVar(const class UAudioComponent*& value);

	//struct FName	VoiceID;		//Offset: 7456	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetVoiceID() const;
	struct FName* M_PtrGetVoiceID();
	void M_SetVoiceID(const struct FName& value);

	//struct FTimerHandle	ChatterTimer;		//Offset: 7464	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetChatterTimer() const;
	struct FTimerHandle* M_PtrGetChatterTimer();
	void M_SetChatterTimer(const struct FTimerHandle& value);

	//class UAnimMontage*	ActivityMontage;		//Offset: 7472	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UAnimMontage* M_GetActivityMontage() const;
	class UAnimMontage** M_PtrGetActivityMontage();
	void M_SetActivityMontage(const class UAnimMontage*& value);

	//TAssetPtr<class FActivityMontageLoaded__DelegateSignature>	ActivityMontageLoaded;		//Offset: 7480	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FActivityMontageLoaded__DelegateSignature> M_GetActivityMontageLoaded() const;
	TAssetPtr<class FActivityMontageLoaded__DelegateSignature>* M_PtrGetActivityMontageLoaded();
	void M_SetActivityMontageLoaded(const TAssetPtr<class FActivityMontageLoaded__DelegateSignature>& value);

	//TAssetPtr<class FActivityMontageComplete__DelegateSignature>	ActivityMontageComplete;		//Offset: 7496	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FActivityMontageComplete__DelegateSignature> M_GetActivityMontageComplete() const;
	TAssetPtr<class FActivityMontageComplete__DelegateSignature>* M_PtrGetActivityMontageComplete();
	void M_SetActivityMontageComplete(const TAssetPtr<class FActivityMontageComplete__DelegateSignature>& value);

	//class UObject*	ChatterSoundObject;		//Offset: 7512	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UObject* M_GetChatterSoundObject() const;
	class UObject** M_PtrGetChatterSoundObject();
	void M_SetChatterSoundObject(const class UObject*& value);

	//struct FST_VoiceDTs	ActualVoiceDTs;		//Offset: 7520	Size: 24	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_VoiceDTs M_GetActualVoiceDTs() const;
	struct FST_VoiceDTs* M_PtrGetActualVoiceDTs();
	void M_SetActualVoiceDTs(const struct FST_VoiceDTs& value);

	//class UUI_Inspector_NPC_C*	InspectorNPC;		//Offset: 7544	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUI_Inspector_NPC_C* M_GetInspectorNPC() const;
	class UUI_Inspector_NPC_C** M_PtrGetInspectorNPC();
	void M_SetInspectorNPC(const class UUI_Inspector_NPC_C*& value);

	//int32_t	VoiceIndex;		//Offset: 7552	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
	int32_t M_GetVoiceIndex() const;
	int32_t* M_PtrGetVoiceIndex();
	void M_SetVoiceIndex(const int32_t& value);

	//bool	ReplicatedGetOut;		//Offset: 7556	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
	bool M_GetReplicatedGetOut() const;
	bool* M_PtrGetReplicatedGetOut();
	void M_SetReplicatedGetOut(const bool& value);

	//TAssetPtr<class FBandMontageComplete__DelegateSignature>	BandMontageComplete;		//Offset: 7560	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FBandMontageComplete__DelegateSignature> M_GetBandMontageComplete() const;
	TAssetPtr<class FBandMontageComplete__DelegateSignature>* M_PtrGetBandMontageComplete();
	void M_SetBandMontageComplete(const TAssetPtr<class FBandMontageComplete__DelegateSignature>& value);

	//class UAnimMontage*	BardMontage;		//Offset: 7576	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UAnimMontage* M_GetBardMontage() const;
	class UAnimMontage** M_PtrGetBardMontage();
	void M_SetBardMontage(const class UAnimMontage*& value);

	//struct FST_TrackData	BardTrackData;		//Offset: 7584	Size: 12	Flags: Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
	struct FST_TrackData M_GetBardTrackData() const;
	struct FST_TrackData* M_PtrGetBardTrackData();
	void M_SetBardTrackData(const struct FST_TrackData& value);

	//bool	IsListeningBard;		//Offset: 7596	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsListeningBard() const;
	bool* M_PtrGetIsListeningBard();
	void M_SetIsListeningBard(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NPC.BP_NPC_C");
		return ptr;
	}

#pragma region Functions
	void WorkMontageComplete__DelegateSignature(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState);

	void WorkLoopsFinished__DelegateSignature(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState, int32_t Loop);

	void BreakMontageComplete__DelegateSignature(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID);

	void WorkMontageLoaded__DelegateSignature();

	void ActivityMontageLoaded__DelegateSignature();

	void ActivityMontageComplete__DelegateSignature(class UAnimMontage* Montage, unsigned char ActivityAnimID);

	void BandMontageComplete__DelegateSignature();

	void ExecuteUbergraph_BP_NPC(int32_t EntryPoint);

	void AI_BindEventToBreakMontageComplete(class UBTTask_BlueprintBase* BTTask);

	void AI_UnbindEventFromBreakMontageComplete();

	void OnBind_BreakMontage(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID);

	void AI_BindEventToOnIdleAnimFinished(class UBTTask_BlueprintBase* BTTask);

	void AI_UnbindEventsFromOnIdleAnimFinished();

	void OnBind_IdleAnim();

	void AI_BindEventToOnSleepFinished(class UBTTask_BlueprintBase* BTTask);

	void OnBind_OnSleep();

	void AI_UnbindEventFromOnSleepFinished();

	void AI_UnbindAllEventsFromOnSleepFinished();

	void AI_BindEventToOnSitFinished(class UBTTask_BlueprintBase* BTTask);

	void AI_UnbindEventFromOnSitFinished();

	void AI_UnbindAllEventsFromOnSitFinished();

	void OnBind_OnSit();

	void AI_UnbindAllEventsFromBreakMontageComplete();

	void AI_BindEventToWorkMontageComplete(class UBTTask_BlueprintBase* BTTask);

	void AI_UnbindEventFromWorkMontageComplete();

	void AI_UnbindAllEventsFromWorkMontageComplete();

	void OnBind_WorkMontage(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState);

	void AI_BindEventToWorkMontageLoaded(class UBTTask_BlueprintBase* BTTask);

	void OnBind_WorkLoaded();

	void AI_UnbindEventFromWorkMontageLoaded();

	void AI_UnbindAllEventsFromWorkMontageLoaded();

	void OnBind_ActivityLoaded();

	void AI_BindEventToActivityMontageLoaded(class UBTTask_BlueprintBase* BTTask);

	void AI_UnbindEventFromActivityMontageLoaded();

	void AI_UnbindAllEventsFromActivityMontageLoaded();

	void AI_HideHeldItem(bool IsWorking, bool UpdateToolType);

	void AI_SpawnTool(TEnumAsByte<E_Tools> Tool, bool CheckInInventory, bool FlipTool);

	void AI_SpawnOff_HandItem(TEnumAsByte<E_Tools> Item, bool CheckInInventory);

	void AI_HideOff_HandItem(bool IsWorking);

	void AI_HideItemsInHands(bool IsWorking);

	void AI_InteractResource(bool FlipTool);

	void AI_InteractFoliage(bool Timer);

	void AI_ToolInteractFoliage();

	void AI_OutsideInteract(bool FlipTool);

	void AI_InteractWithFurniture(struct FHitResult Hit, bool Timer);

	void AI_CancelInteractWithFurniture();

	void AI_StopMovement();

	void AI_MoveAside();

	void AI_UnlockThings();

	void AI_FlipTool(bool UnFlip);

	void AI_GetOut(bool CheckChildrenAffection);

	void AI_LightCampfire();

	void AI_UnoccupyBuildingWorkSlot();

	void AI_UnoccupyNPC_FieldTask();

	void AI_ResetBehaviorOnWakeUp();

	void AI_PlayAudio(class USoundBase*& Audio, float StartTime, bool DestroyAfterPlaying);

	void AI_StopAudio();

	void AI_StopFurnitureAnimation(class AActor* Furniture);

	void SleepingFinish();

	void SittingFinish();

	void DestroyAudioComp();

	void AI_DestroyAudioComponent(bool WaitForSoundToFinish);

	void AI_PlayChatter(EChatterSoundType ChatterCategory, struct FName ChatterSubCategory, struct FName ChatterID, struct FChatterData ChatterData);

	void AI_SetBanditType(TEnumAsByte<E_BanditType> BanditType);

	void AI_SetActivity(const TArray<int32_t>& SpecifiedActivities);

	void AI_SetGoHome_Activity(bool GoHome_Activity);

	void AI_SetWorkSlotIndex(int32_t WorkSlotIndex);

	void AI_SetFieldTask(struct FST_FieldTasksLists Field_Task);

	void AI_SetCharacterRotation(struct FRotator TargetRotation, bool interpRotation, float interpSpeed);

	void AI_SetCollisionResponse(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> Response);

	void AI_SetNPC_MustBeDeactivated(bool NPC_MustBeDeactivated);

	void AI_SetNPC_Status(TEnumAsByte<E_NPCStatus> NPC_Status);

	void AI_SetNeedItemName(struct FName NeedItem);

	void AI_SetIsLookAtTargetRotation(bool IsLookAtTargetRotation);

	void AI_SetCanAffectNavigation(bool CanAffectNavigation);

	void AI_SetInteractionSlotIndex(int32_t InteractionSlotIndex);

	void AI_SetIsChangedTimeOfDay(TEnumAsByte<E_TimeOfDay> TimeOfDay, bool Value);

	void AI_SetWhetherAffectNavigation(bool WhetherAffectNavigation);

	void AI_SetCasualClothes(bool LoadGame);

	void AI_SetProfessionClothes(bool LoadGame);

	void AI_TalkingNPC();

	void AI_SetBlockTalking(bool BlockTalking);

	void AI_EndTalking();

	void AI_EnableDeadMethods();

	void AI_SetMontages(class UAnimMontage* WorkMontage, class UAnimMontage* BreakMontage, class UAnimMontage* AcivityMontage);

	void AI_SetBeginSleepTime();

	void AI_SetBeginWakeUpTime();

	void AI_SetPlayingTagNPC();

	void AI_SetCurrentWorkStateLoop(int32_t CurrentWorkStateLoop);

	void AI_SetPath(bool CheckDistance, float Distance, struct FVector Destination);

	void AI_SetInteractedActor(class AActor* InteractedActor);

	void AI_SetAnimationState(bool Sleeping, bool Sitting, bool Working, bool TakingBreak, bool InActivity);

	void AI_SetGetOutSettings();

	void AI_SetChangeCollision(bool ChangeCollision);

	void AI_SetNPCAfterGetOrWakeUp();

	void AI_SetWorkTask();

	void AI_SetHasInfant(bool HasInfant);

	void AI_SetID(struct FString ID);

	void AI_SetRotationManaged(bool IsRotationManaged);

	void AI_SetBedIndexes(int32_t BedIndex, int32_t BedSlotIndex);

	void AI_SetWaitTask(bool CheckDayActivities);

	void AI_SetCanChangeMovementActive(bool CanChangeMovementActive);

	void AI_SetQuestBlocking(bool QuestBlocking);

	void AI_Start_Combat(class AActor*& Actor);

	void AI_SetMotherParameters();

	void AI_AfterRemovalFromWorkplace();

	void AI_RemovePathsPoint(int32_t Index);

	void AI_RemoveAnimalReference();

	void AI_AfterRemovalFromHouse();

	void AI_DestroyOnGetOut();

	void PlayChatterDialogue(struct FName ChatterDialogueID, struct FChatterData ChatterDialogueData);

	void PlayChatter(EChatterSoundType ChatterCategory, struct FName ChatterSubCategory, struct FName ChatterID, struct FChatterData ChatterData);

	void AI_SetChatterByCategoryAndSubCategory(EChatterSoundType ChatterCategory, struct FName ChatterSubCategory, unsigned char ChatterOption, bool SkipCheckingChatterConditions, bool ShouldPlayChatter);

	void BndEvt__BP_NPC_Collision_K2Node_ComponentBoundEvent_1_OnCollision__DelegateSignature(struct FCollisionData CollisionData);

	void ReceiveDestroyed();

	void SetChatter();

	void HitRagdollDecay();

	void OnCapsuleComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, const struct FHitResult& Hit);

	void AI_SetPerceptionActive(bool Enabled, float TickInterval);

	void FarOptimization();

	void MediumOptimization();

	void CloseOptimization();

	void NoneOptimization();

	void RemoveFamilyFromHouse();

	void UpdateOnDead();

	void InitSetSkills(bool Birth);

	void DisableNPC();

	void EnableNPC();

	void LoadNPCDataFromSave(struct FST_SAVE_NPC NPCData, bool ResetEQ, struct FString SaveGameVersion);

	void Init_NPC(bool LoadGame);

	void RemoveFromWorkPlace();

	void AI_AddSkills(TEnumAsByte<E_Skills> Skill, float Value);

	void AIPlayAudio_Internal(class USoundBase* Audio, float StartTime, bool DestroyAfterPlaying, bool IsChatter);

	void AIDestroyAudioComponent_Multicast(bool WaitForSoundToFinish);

	void AIPlayAudio_Multicast(class USoundBase* Audio, float StartTime, bool DestroyAfterPlaying, bool IsChatter);

	void AI_ResetNavInvoker();

	void OnLoaded_2A48D8854175C5A6A7FC3D82664B3D26(class UObject* Loaded);

	void OnLoaded_306E1C1447AE3C11220DDC9AADCA6AB0(class UObject* Loaded);

	void OnLoaded_10E0287042B5716E06C80D849582D9F5(class UObject* Loaded);

	void OnLoaded_B056135441CEA67F35238B9B4B8DC453(class UObject* Loaded);

	void OnLoaded_BB2717E64866BD380FC9D781DB1EF03A(class UObject* Loaded);

	void OnLoaded_9AA73FD8484CD67355ABCEB05F2C8AB7(class UObject* Loaded);

	void OnLoaded_6E81A2CF4866CC36C0C84A93506A1E7B(class UObject* Loaded);

	void OnLoaded_D1FA44FD4C0B06F84B4AB3BA3EA9F50B(class UObject* Loaded);

	void OnLoaded_717BB17744D17AA5225381AE4EC50813(class UObject* Loaded);

	void OnLoaded_6CD79C014853EE3E017CBC9D6D33424B(class UObject* Loaded);

	void CheckForTalkGoal(class ABP_PlayerCharacter_C* PlayerReference, TAssetPtr<class UDialogue>* Dialogue, bool* found);

	void FindBedInHouse(bool Occupy, struct FVector* Destination, bool* Find);

	void SetBlackboardValues_Object(TEnumAsByte<E_NPC_BlackboardObject> BlacboardObject, class UObject* Object);

	void SetBlackboardValues_Boolean(TEnumAsByte<E_NPC_BlackboardBoolean> BlackboardBoolean, bool Value);

	void SetBlackboardValues_Vector(TEnumAsByte<E_NPC_BlackboardVector> Blackboard_Vector, struct FVector Value);

	void GetBlackboardValues_Object(TEnumAsByte<E_NPC_BlackboardObject> BlackboardObject, class UObject** Object);

	void GetBlackboardValues_Boolean(TEnumAsByte<E_NPC_BlackboardBoolean> BlackboardBoolean, bool* BooleanValue);

	void GetBlackboardValues_Vector(TEnumAsByte<E_NPC_BlackboardVector> Blackboard_Vector, struct FVector* VectorValue);

	void SetBlackboardValues_Int(TEnumAsByte<E_NPC_BlackboardInt> Blackboard_Int, int32_t Int);

	void SetBlackboardValues_DailyCycle(TEnumAsByte<E_DailyCycle> DailyCycle);

	void SetBlackboardValues_NPCBehavior(TEnumAsByte<E_NPCBehavior> NPCBehavior);

	void GetBlackboardValues_Int(TEnumAsByte<E_NPC_BlackboardInt> Blackboard_Int, int32_t* Int);

	void GetBlackboardValues_DailyCycle(TEnumAsByte<E_DailyCycle>* DailyCycle);

	void GetBlackboardValues_NPCBehavior(TEnumAsByte<E_NPCBehavior>* NPCBehavior);

	void SetBlackboardValues_CurrentNPCBehavior(TEnumAsByte<E_NPCBehavior> NPCBehavior);

	void SetBlackboardValues_Task(TEnumAsByte<E_Tasks> Task);

	void SetBlackboardValues_CurrentTask(TEnumAsByte<E_Tasks> Task);

	void SetBlackboardValues_TaskState(TEnumAsByte<E_TaskState> TaskState);

	void GetBlackboardValues_CurrentNPCBehavior(TEnumAsByte<E_NPCBehavior>* NPCBehavior);

	void GetBlackboardValues_Task(TEnumAsByte<E_Tasks>* Task);

	void GetBlackboardValues_CurrentTask(TEnumAsByte<E_Tasks>* Task);

	void GetBlackboardValues_TaskState(TEnumAsByte<E_TaskState>* TaskState);

	void SetBlackboardValues_ResourceState(TEnumAsByte<E_ResourceState> ResourceState);

	void GetBlackboardValues_ResourceState(TEnumAsByte<E_ResourceState>* ResourceState);

	void SetBlackboardValues_CurrentResourceState(TEnumAsByte<E_ResourceState> ResourceState);

	void SetBlackboardValues_Talk(TEnumAsByte<E_Talk> Talk);

	void GetBlackboardValues_CurrentResourceState(TEnumAsByte<E_ResourceState>* ResourceState);

	void GetBlackboardValues_Talk(TEnumAsByte<E_Talk>* Talk);

	void SetBlackboardValues_Seeds(TEnumAsByte<E_BagMode> Seeds);

	void GetBlackboardValues_Seeds(TEnumAsByte<E_BagMode>* Seeds);

	void FindTool(TEnumAsByte<E_Tools> ToolType, bool* Found_, struct FST_ItemDetails* ItemDetails);

	void Set_New_Collision(bool IsCollision);

	void RespawnInfant();

	void SetSceneName();

	void EndTalking();

	void GetTransformByRoot(struct FTransform Transform, struct FVector WorldLocation, const struct FTransform& ActorTransform, struct FVector* Location, struct FVector* Direction);

	void SetNPCBehaviorFromSave();

	void OnOptimizationActive();

	void OnOptimizationDeactive();

	void CheckUnderTheMap();

	void FixCustomNPCsFromDT();

	void ToolInteractFoliage();

	class USkeletalMesh* SelectCaster();

	void SetCustomNPC_DTHandler(struct FString SaveGameVersion);

	void SetGiftVendorItems(struct FST_VendorCategory VendorCategory);

	void GetToolHoldableClass(bool* NeedTool, bool* FoundTool, TAssetPtr<class UClass>* HoldableClass);

	void FixPlayersWifeAffection(struct FString SaveGameVersion);

	void SetMinDeadAge();

	void SetSaveMeshPresets(struct FString NPC_ID, struct FName MeshName, TMap<TEnumAsByte<E_BodyParts>, int32_t> BPIndexes, int32_t SkinColorID, int32_t HairColorID, int32_t HeadID, int32_t HairID, int32_t IrisID, TMap<TEnumAsByte<E_Profession>, struct FST_NPCSeasonClothing> PresetsIDs);

	void SetBlackboardValues_BanditType(TEnumAsByte<E_BanditType> BanditType);

	void GetBlackboardValues_BanditType(TEnumAsByte<E_BanditType>* BanditType);

	void AfterDeath();

	void ChooseCharacterVoiceID();

	void SetDialogue(class ABP_PlayerCharacter_C* PlayerReference);

	TAssetPtr<class UDialogue> GetActualDialogue(class ABP_PlayerCharacter_C* PlayerReference);

	void ResetActualDialogueNPC(bool ResetToBasic);

	void SetKestrelBehavior(bool SetNewBehavior);

	void SetOptimizationBlackboards();

	void ReloadCharacterVoice(struct FString SaveGameVersion);

	void BoostComponentDebug();

	void SetQuestNPC_OnLoad();

	void CheckNPCLocationOnSave();

	void ChangeApprenticeToWorker();

	void ComeBackHome(struct FTransform ParentTransform, bool* Success);

	void AddRandomToys(bool AddSamborFigurines);

	void FixMothersTasks();

	void FixQuestNPCsPersonality(struct FString SaveGameVersion);

	void SetQuestToGive(struct FST_QuestInfos QuestToGive, struct FDataTableRowHandle QuestDTHandle);

	void SetQuestPose(TEnumAsByte<E_IdleStates> IdleState, unsigned char PoseID, TEnumAsByte<E_AfterIdlePose> AfterIdlePose);

	void SpawnSoundComponentAndPlay(class USoundBase* Sound, float StartTime, bool AutoDestroy, class UAudioComponent** AudioComponent);

	void CheckHeraldOrGiftVendorLocation();

	void GetPointOutsideBuilding(struct FVector checkLocation, struct FVector Destination, struct FVector* FinalLocation);

	void RandMeshesOnCharTypeChanged(TAssetPtr<class UClass> AnimClass);

	void FindChatter(bool* IsChatter, EChatterSoundType* ChatterCategory, struct FName* ChatterSubCategory, struct FName* ChatterID, struct FChatterData* ChatterData);

	void FindChatterByCategoryAndSubCategory(EChatterSoundType Category, struct FName SubCategory, unsigned char Option, bool SkipAddingToChatterNames, bool* IsChatter, EChatterSoundType* ChatterCategory, struct FName* ChatterSubCategory, struct FName* ChatterID, struct FChatterData* ChatterData);

	void FindChatterStringTableData(EChatterSoundType ChatterCategory, struct FName ChatterID, bool* Success, struct FString* StringTableID, struct FString* StringTableKey);

	void CheckCanPlayChatter(bool SkipCheckingConditions, bool ShouldPlay, bool* CanPlay);

	void FinishChatter();

	void SetChatterTimer();

	void SetInfantInCradle(bool IsInfant);

	void SetActualVoiceDTs();

	void SetQuestVariables();

	void RunQuestBehavior(struct FString QuestID, bool TeleportToLocation);

	void SetQuestBehavior(struct FString QuestID, int32_t QuestActivitiesIndex, bool SetMultiState);

	void SetNextQuestBehavior(bool SetMultiState, bool* Success);

	void EndQuestBehavior();

	void AddChatterForPlayers(struct FString StringTableID, struct FString StringTableKey, bool IsQuest);

	void RemoveChatterForPlayers();

	void OnRep_IsTargetOfTalkGoal();

	void SetBlackboardValues_MultiState(TEnumAsByte<E_MultiState> MultiState);

	void SetBlackboardValues_DailyMode(TEnumAsByte<E_DailyMode> DailyMode);

	void SetBlackboardValues_TargetRotation(struct FRotator Rotator);

	void GetBlackboardValues_MultiState(TEnumAsByte<E_MultiState>* MultiState);

	void GetBlackboardValues_DailyMode(TEnumAsByte<E_DailyMode>* DailyMode);

	void GetBlackboardValues_TargetRotation(struct FRotator* Rotator);

	void ChangeDisabledOptimization(bool Activate);

	void AddNPCsConversationForPlayers(struct FText Text, bool IsQuest);

	void RemoveNPCsConversationForPlayers();

	void GetWorkChatterRestrictions(struct FChatterRestrictions* WorkRestrictions);

	void GetSituational_MusicalChatterRestrictions(struct FChatterRestrictions* SituationalRestrictions, struct FChatterRestrictions* MusicalRestrictions);

	void GetReactionToPlayerChatterRestrictions(struct FChatterRestrictions* ReactionToPlayerRestrictions);

	void GetStatusChatterRestrictions(struct FChatterRestrictions* StatusRestrictions);

	void GetPlaceChatterRestrictions(struct FChatterRestrictions* PlaceRestrictions);

	void GetSeasonChatterRestrictions(struct FChatterRestrictions* SeasonRestrictions);

	void GetFamilyChatterRestrictions(struct FChatterRestrictions* FamilyRestrictions);

	void GetGenericChatterRestrictions(struct FChatterRestrictions* GenericRestrictions);

	void UnbindAllEvents();

	void OnRep_VoiceIndex();

	void CheckHitConditions(bool* CanHit);

	void OnRep_QuestAnimation();

	void FixPlayersSpecialQuestWifeDialogue();

	void OnRep_ReplicatedGetOut();

	void StopLogicOnOptimization();

	void SetPOI_Behavior();

	void OnRep_BardTrackData();

	void EndPOI_Behavior();

	void GetSpecialNPCsChatter(bool* IsSpecialNPCsChatter, struct FName* SubCategoryName);

	void SetPath(bool CheckDistance, float Distance, struct FVector Destination);

	void FindChatterDialogueStringTableData(struct FName ChatterDialogueID, bool* Success, struct FString* StringTableID, struct FString* StringTableKey);

	void SetCasualClothes(bool LoadGame);

	void SetProfessionClothes(bool LoadGame);

	void AI_FindFoliage(TEnumAsByte<E_Resources> TargetType, struct FVector* Destination, bool* Foliage);

	void AI_GetTargetLocation(struct FVector Target, float MaxDistance, float MinDistance, bool OutsideLastPoint, struct FVector* Location);

	void AI_FindField(struct FVector* Destination, bool* Field, struct FST_FieldTasksLists* TaskList, bool* IsTask);

	void AI_IncreaseNavInvoker(bool* ToBig);

	void AI_GetMesh(class USkeletalMeshComponent** Mesh);

	void AI_FindHouse(bool FindBed, bool Occupy, struct FVector* Destination, bool* Find);

	void AI_FindAnimal(struct FVector* Destination, bool* Animal);

	void AI_FindWorkPlace(struct FVector* Destination, float* WorkRadius, bool* Workplace);

	void AI_FindClosestFurniture(TEnumAsByte<E_Ownership> Location, TEnumAsByte<E_FurnitureCategories> FurnitureCategory, bool MustBeSittingFurniture, bool IgnoreOwnership, struct FVector* Destination, bool* IsFurniture);

	void AI_CheckTargetFoliage(bool* IsTargetFoliage);

	void AI_GetStats(struct FText* Name, TEnumAsByte<E_Sex>* sex, float* Age, TEnumAsByte<E_CharacterType>* CharacterType);

	void AI_GetIDFromNPC(struct FString* NPC_ID);

	void AI_CheckBuildingIsConstructed(bool* IsConstructed);

	void AI_GetOwnership(TEnumAsByte<E_Ownership>* Ownership);

	void AI_GetBedIndex(int32_t* BedIndex, int32_t* BedSlotIndex);

	void AI_FindNPCtoTalk(struct FVector* Destination, struct FVector* lookAt, bool* IsNPC);

	void AI_GetNightPatrol(bool* NightPatrol);

	void AI_FindBuildingWorkbenches(struct FVector* Destination, bool* IsWorkbenches);

	void AI_GetCapsuleHalfHeight(float* CapsuleHalfHeight);

	void AI_FindTavernFurniture(bool Occupy, struct FVector* Destination, bool* Find);

	void AI_FindRandomFurniture(TEnumAsByte<E_Ownership> Location, TEnumAsByte<E_FurnitureCategories> FurnitureCategory, bool MustBeSittingFurniture, bool IgnoreOwnership, struct FVector* Destination, bool* IsFurniture);

	void AI_GetQuestBlocking(bool* QuestBlocking);

	void AI_GetAnimationState(bool* Sleeping, bool* Sitting, bool* Working, bool* TakingBreak, bool* InActivity);

	void AI_GetInteractionSlotIndex(int32_t* InteractionSlotIndex);

	void AI_GetIsChangedTimeOfDay(TEnumAsByte<E_TimeOfDay> TimeOfDay, bool* IsChanged);

	void AI_GetCollisionResponse(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse>* Response);

	void AI_GetOptimizationBlackboards(struct FST_SAVE_NPC_Blackboards* OptimizationBlackboards);

	void AI_GetDead(bool* IsDead);

	void AI_GetIsGetOut(bool* GetOut);

	void AI_GetWorkHours(struct FST_Hour* StartWorkingTime, struct FST_Hour* StopWorkingTime);

	void AI_GetNPC_MustBeDeactivated(bool* NPC_MustBeDeactivated);

	void AI_FindFishingPoint(struct FVector* Destination, bool* Find);

	void AI_GetOptimizationStage(int32_t* optimizationStage);

	void AI_GetOutsideNPC_Ownership(TEnumAsByte<E_Ownership>* OutsideNPC_Ownership);

	void AI_CheckSeedsInChest(bool RemoveItem, TEnumAsByte<E_BagMode> BagSeeds, bool* IsBag);

	void AI_GetNPC_Status(TEnumAsByte<E_NPCStatus>* NPC_Status, TEnumAsByte<E_Tools_Activity>* NeedTool, struct FName* NeedItem);

	void AI_GetNeedItemName(struct FName* NeedItem);

	void AI_FindAnimalsBreederPoint(struct FVector* Destination, bool* Point);

	void AI_SpawnBow(bool CheckInInventory, bool* IsBow);

	void AI_SnapToFurnitureSlot(bool ToFinishSlot, bool* Success);

	void AI_CheckIsChunkInteractable(bool* Interactable);

	void AI_GetIsLookAtTargetRotation(bool* IsLookAtTargetRotation);

	void AI_GetCanAffectNavigation(bool* CanAffectNavigation);

	void AI_FindWorkSlot(struct FVector* Destination, bool* WorkSlot);

	void AI_GetGoHome_Activity(bool* GoHome_Activity);

	void AI_GetPaths(TArray<struct FVector>* Paths);

	void AI_GetPathsPoint(bool* Succes, struct FVector* PathsPoint);

	void AI_FindVillageCenter(struct FVector* VillageCenter);

	void AI_GetWhetherAffectNavigation(bool* WhetherAffectNavigation);

	void AI_FindPOIFurniture(TArray<TEnumAsByte<E_FurnitureType>>* FurnitureTypes, bool* IsFurniture, struct FVector* Destination);

	void AI_GetBanditType(TEnumAsByte<E_BanditType>* BanditType);

	void AI_FindGetOutPoint(struct FVector* GetOutPoint);

	void AI_GetWorkSlotIndex(int32_t* WorkSlotIndex);

	void AI_GetBuildingType(bool* IsValidBuilding, TEnumAsByte<E_Buildings>* BuildingType);

	void AI_SpawnCrossbow(bool CheckInInventory, bool* IsCrossBow);

	void AI_GetVendor(bool* Vendor);

	void AI_GetSpawnerLocation(bool* IsValidSpawner, struct FVector* SpawnerLocation);

	void AI_FindBreakSlot(struct FVector* Destination, bool* BreakSlot);

	void AI_GetMontages(class UAnimMontage** WorkMontage, class UAnimMontage** BreakMontage, class UAnimMontage** ActivityMontage);

	void AI_GetBreakAnimID(unsigned char* BreakAnimID);

	void AI_GetBuildingsWorkSlotWorldTransforms(bool* IsValidSlot, struct FTransform* Slot, struct FTransform* StartPoint);

	void AI_GetWakeUpAndSleepTimes(struct FST_Hour* BeginWakeUpTime, struct FST_Hour* BeginSleepTime);

	void AI_GetOutsideNPC_Type(TEnumAsByte<E_OutsideNPCTypes>* Outside_NPC_Type);

	void AI_FindNPCtoPlayingTag(struct FVector* Destination, struct FVector* lookAt, bool* IsNPC);

	void AI_GetWorkStateLoops(int32_t* CurrentWorkStateLoop, int32_t* WorkStateLoops);

	void AI_GetDistanceToPlayer(float* Distance);

	void AI_FindCampfire(TEnumAsByte<E_Ownership> Location, bool IgnoreOwnership, struct FVector* Destination, bool* IsCampfire);

	void AI_GetCustomNPC_DTHandler(struct FDataTableRowHandle* CustomNPC_DTHandler);

	void AI_FindOutsidePoint(struct FVector* OutsidePoint);

	void AI_GetTalkingCharacter(bool* Success, class AActor** TalkingCharacter);

	void AI_CheckIsPlayerPartner(bool* IsPlayerPartner);

	void AI_TeleportToHouseOrWorkplace(bool ToHouse, bool* Success);

	void AI_GetTimeOfDay(TEnumAsByte<E_TimeOfDay>* TimeOfDay);

	void AI_CheckCanMove(bool* CanMove);

	void AI_FindApprenticeSlot(struct FVector* Destination, bool* ApprenticeSlot);

	void AI_GetBreakAnimType(TEnumAsByte<E_AnimBreakType>* BreakAnimType);

	void AI_GetHasInfant(bool* HasInfant);

	void AI_GetToys(TArray<struct FName>* Toys);

	void AI_CheckCanTalk(bool CheckResourceState, bool* CanTalk);

	void AI_GetRotationManaged(bool* IsRotationManaged);

	void AI_CheckIsInGoToCenterTask(bool* Success);

	void AI_ChangeSex(TEnumAsByte<E_Sex> TargetSex, bool* Success);

	void AI_ChangeHeiressToHeir(bool* Success);

	void AI_CheckIsWorkHours(bool* Success);

	void AI_CheckIsField(bool* IsField);

	void AI_GoToTeleport(bool OnSuccess, struct FVector Location, TArray<struct FVector>* PathPoints, bool* Success);

	void AI_FindPOISpawnPoint(bool* IsSpawnPoint, struct FVector* Destination);

	void AI_GetActivityAnimID(unsigned char* ActivityAnimID);

	void AI_GetActivityAnimType(TEnumAsByte<E_AnimActivityType>* ActivityAnimType);

	void AI_GetActualVoiceDTs(struct FST_VoiceDTs* ActualVoiceDTs);

	void AI_CanBeOptimized(bool* CanBeOptimized);

	void AI_FindBandSlot(struct FVector* Destination, bool* BandSlot);

	void AI_CheckQuestByState(struct FName QuestID, bool CheckObjective, int32_t ObjectiveID, bool CheckIsDone, TEnumAsByte<E_QuestState> QuestState, TEnumAsByte<E_ObjectiveState> ObjectiveState, bool* Success, bool* found);

	void AI_GetVendorCategory(struct FDataTableRowHandle* VendorCategory);

	void AI_GetQuestToGiveCategory(TEnumAsByte<E_QuestCategories>* QuestToGiveCategory);

	void AI_GetIsTargetOfTalkGoal(bool* IsTargetOfTalkGoal);

	void AI_GetQuestToGiveID(struct FName* QuestToGiveID);

	void AI_GetProfession(TEnumAsByte<E_Profession>* Profession);

	void AI_FindActivitySlot(TEnumAsByte<E_Buildings> Building_Type, struct FVector* Destination, bool* ActivitySlot);

	void AI_TryToChangePawnCollisionResponse(bool* Success);

	void AI_Herald_FindTavernFurnitureAtIndex(bool Occupy, int32_t InteractionSlotIndex, int32_t BenchIndex, struct FVector* Destination, bool* Find);

	void ComponentDelegateBinding_1()/* const*/;

	void InheritableComponentHandler();

	void OnWakeUp();

	void OnGetUp();

	void EndFalling();

	void StartFalling();

	void Set_Sleeping_Event(bool IsSleeping, TEnumAsByte<E_SleepingDirection> SleepingDirection, bool UseBedSleepingPose);

	void Set_Sitting_Event(bool IsSitting, TEnumAsByte<E_SitDownPosition> SitDownPosition, TEnumAsByte<E_SittingType> SittingType);

	void SetCharacterMovementActive(bool IsActive, bool IsIKActive);

	void Hit(struct FVector HitLocation, struct FVector hitForce, struct FName HitBoneName);

	void SetMesh(class USkeletalMesh* NewHeadMesh, class USkeletalMesh* NewHairMesh, const TArray<class USkeletalMesh*>& NewBodyMeshes, class UObject* NewClass, bool UpdateOnly);

	void PlayPickingUpMontage(class UObject* Instigator, bool PreferTwoHanded, bool PlayAnimSound);

	void ShowInspectorUI();

	void ReceiveTick(float DeltaSeconds);

	void ReceiveBeginPlay();

	void SetProfessionData(struct FST_Profession ProfessionData);

	void SetIsBardCurrentlyPlaying_BPI(bool IsPlaying);

	void SetCharacterListeningToBard_BPI(bool IsListening);

	void AnimNotify_BandMontageComplete();

	void AnimNotify_ActivityMontageComplete(class UAnimMontage* Montage, unsigned char ActivityAnimID);

	void AnimNotify_ActivityLoopsFinished(class UAnimMontage* Montage, unsigned char ActivityAnimID, int32_t Loop);

	void AnimNotify_ActivityLoopIncreased(class UAnimMontage* Montage, unsigned char ActivityAnimID, int32_t Loop);

	void AnimNotify_BreakLoopIncreased(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID, int32_t Loop);

	void AnimNotify_BreakLoopsFinished(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID, int32_t Loop);

	void AnimNotify_BreakMontageComplete(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID);

	void AnimNotify_WorkLoopIncreased(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState, int32_t Loop);

	void AnimNotify_WorkLoopsFinished(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState, int32_t Loop);

	void AnimNotify_WorkMontageComplete(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState);

	void Interact(class ABP_BaseCharacter_C* BaseCharacter, struct FVector HitLocation, int32_t HitItem, bool Timer);

	struct FRotator GetLookingRotation();

	void OnSeasonChanged();

	void OnCharacterTypeChanged();

	void OnDialogueStarted();

	void OnDialogueEnded();

	void GetNPCDataToSave(struct FST_SAVE_NPC* NPCData);

	void SetNPCDataFromSave(struct FST_SAVE_NPC NPCData, bool ResetEQ, struct FString SaveGameVersion);

	void Destroy_NPC();

	void OnDayChanged();

	void OnPlayerOccupy(class ABP_MasterFurniture_C* Furniture);

	void BindFurnitureEvents(class ABP_MasterFurniture_C* Furniture);

	void UnbindFurnitureEvents(class ABP_MasterFurniture_C* Furniture);

	void SetMeshesFromPreset(TEnumAsByte<E_Profession> Profession, class UObject* NewClass, bool UpdateOnly, bool LoadGame, bool DontSetIfNotFound);

	void OnDestroyFurniture();

	void GetDirection(float* Direction);

	void ChangeName(struct FName NewRowName, struct FText NewName, bool ChangeSex);

	void OnDayChangedByTimeUpdate();

	void AddSkillsToApprentices(TEnumAsByte<E_Skills> Skill, float Value, TEnumAsByte<E_Profession> Profession);

	void MeshSettings();

	void TrySyncFurnitureAnim(class AActor* ActorToSync, bool* Synced);

	void InitInspectorMode();

	void GetProfession(TEnumAsByte<E_Profession>* Profession);

	void GetProfessionData(struct FST_Profession* ProfessionData);

	void GetEnableIK_BPI(bool* IK_Enabled);

	void PlayOnomatopoeicSound_BPI(struct FName SoundSubCategory, bool PickRandom, int32_t SoundId, bool* Success);

	void GetHeldItem(class ABP_MasterHoldableItem_C** HeldItem);

	void IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance);

	void GetDistance(float* Distance);

	void GetOptimalizationStage(int32_t* Stage);

	void GetReaction(class UObject* OtherObject, TEnumAsByte<E_AIPerceptionReaction>* Reaction, int32_t* ReactionPriority)/* const*/;

	void GetActorType(struct FName* ActorType)/* const*/;

#pragma endregion
};
};