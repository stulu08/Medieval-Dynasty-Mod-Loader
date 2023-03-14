#pragma once
#include "Structs.h"
#include "BP_BaseCharacter/BP_BaseCharacter_C.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_NPC.BP_NPC_C
// Super: BlueprintGeneratedClass BP_BaseCharacter.BP_BaseCharacter_C
// Size: 7569
// Size inherited: 5833
/////////////////////////////////////////////
namespace UE4 {
class ABP_NPC_C : public ABP_BaseCharacter_C {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 5840	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//class UAudioComponent*	Voice;		//Offset: 5848	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UAudioComponent* M_GetVoice() const;
	class UAudioComponent** M_PtrGetVoice();
	void M_SetVoice(const class UAudioComponent*& value);

	//class USkeletalMeshComponent*	ShadowCaster;		//Offset: 5856	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class USkeletalMeshComponent* M_GetShadowCaster() const;
	class USkeletalMeshComponent** M_PtrGetShadowCaster();
	void M_SetShadowCaster(const class USkeletalMeshComponent*& value);

	//class UBP_BoostComponent_C*	BP_BoostComponent;		//Offset: 5864	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBP_BoostComponent_C* M_GetBP_BoostComponent() const;
	class UBP_BoostComponent_C** M_PtrGetBP_BoostComponent();
	void M_SetBP_BoostComponent(const class UBP_BoostComponent_C*& value);

	//class UNavigationInvokerComponent*	NavigationInvoker;		//Offset: 5872	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UNavigationInvokerComponent* M_GetNavigationInvoker() const;
	class UNavigationInvokerComponent** M_PtrGetNavigationInvoker();
	void M_SetNavigationInvoker(const class UNavigationInvokerComponent*& value);

	//class AAIC_NPC_C*	AINPCReference;		//Offset: 5880	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AAIC_NPC_C* M_GetAINPCReference() const;
	class AAIC_NPC_C** M_PtrGetAINPCReference();
	void M_SetAINPCReference(const class AAIC_NPC_C*& value);

	//struct FString	ID;		//Offset: 5888	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash
	struct FString M_GetID() const;
	struct FString* M_PtrGetID();
	void M_SetID(const struct FString& value);

	//struct FName	VoiceID;		//Offset: 5904	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetVoiceID() const;
	struct FName* M_PtrGetVoiceID();
	void M_SetVoiceID(const struct FName& value);

	//struct FDataTableRowHandle	CustomNPC_DTHandler;		//Offset: 5912	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
	struct FDataTableRowHandle M_GetCustomNPC_DTHandler() const;
	struct FDataTableRowHandle* M_PtrGetCustomNPC_DTHandler();
	void M_SetCustomNPC_DTHandler(const struct FDataTableRowHandle& value);

	//struct FST_Profession	ProfessionData;		//Offset: 5928	Size: 72	Flags: Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
	struct FST_Profession M_GetProfessionData() const;
	struct FST_Profession* M_PtrGetProfessionData();
	void M_SetProfessionData(const struct FST_Profession& value);

	//TEnumAsByte<E_OutsideNPCTypes>	OutsideNPCType;		//Offset: 6000	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	TEnumAsByte<E_OutsideNPCTypes> M_GetOutsideNPCType() const;
	TEnumAsByte<E_OutsideNPCTypes>* M_PtrGetOutsideNPCType();
	void M_SetOutsideNPCType(const TEnumAsByte<E_OutsideNPCTypes>& value);

	//TEnumAsByte<E_Ownership>	OutsideNPC_Ownership;		//Offset: 6001	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Ownership> M_GetOutsideNPC_Ownership() const;
	TEnumAsByte<E_Ownership>* M_PtrGetOutsideNPC_Ownership();
	void M_SetOutsideNPC_Ownership(const TEnumAsByte<E_Ownership>& value);

	//TEnumAsByte<E_BanditType>	BanditType;		//Offset: 6002	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_BanditType> M_GetBanditType() const;
	TEnumAsByte<E_BanditType>* M_PtrGetBanditType();
	void M_SetBanditType(const TEnumAsByte<E_BanditType>& value);

	//TEnumAsByte<E_Wealth>	Wealth;		//Offset: 6003	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	TEnumAsByte<E_Wealth> M_GetWealth() const;
	TEnumAsByte<E_Wealth>* M_PtrGetWealth();
	void M_SetWealth(const TEnumAsByte<E_Wealth>& value);

	//unsigned char	ProfessionState;		//Offset: 6004	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char M_GetProfessionState() const;
	unsigned char* M_PtrGetProfessionState();
	void M_SetProfessionState(const unsigned char& value);

	//unsigned char	BreakAnimID;		//Offset: 6005	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	unsigned char M_GetBreakAnimID() const;
	unsigned char* M_PtrGetBreakAnimID();
	void M_SetBreakAnimID(const unsigned char& value);

	//TEnumAsByte<E_AnimBreakType>	BreakAnimType;		//Offset: 6006	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_AnimBreakType> M_GetBreakAnimType() const;
	TEnumAsByte<E_AnimBreakType>* M_PtrGetBreakAnimType();
	void M_SetBreakAnimType(const TEnumAsByte<E_AnimBreakType>& value);

	//int32_t	WorkStateLoops;		//Offset: 6008	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetWorkStateLoops() const;
	int32_t* M_PtrGetWorkStateLoops();
	void M_SetWorkStateLoops(const int32_t& value);

	//int32_t	CurrentWorkStateLoop;		//Offset: 6012	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetCurrentWorkStateLoop() const;
	int32_t* M_PtrGetCurrentWorkStateLoop();
	void M_SetCurrentWorkStateLoop(const int32_t& value);

	//struct FST_Hour	BeginWakeUpTime;		//Offset: 6016	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_Hour M_GetBeginWakeUpTime() const;
	struct FST_Hour* M_PtrGetBeginWakeUpTime();
	void M_SetBeginWakeUpTime(const struct FST_Hour& value);

	//struct FST_Hour	BeginSleepTime;		//Offset: 6028	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_Hour M_GetBeginSleepTime() const;
	struct FST_Hour* M_PtrGetBeginSleepTime();
	void M_SetBeginSleepTime(const struct FST_Hour& value);

	//struct FST_Hour	StartWorkingTime;		//Offset: 6040	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_Hour M_GetStartWorkingTime() const;
	struct FST_Hour* M_PtrGetStartWorkingTime();
	void M_SetStartWorkingTime(const struct FST_Hour& value);

	//struct FST_Hour	StopWorkingTime;		//Offset: 6052	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_Hour M_GetStopWorkingTime() const;
	struct FST_Hour* M_PtrGetStopWorkingTime();
	void M_SetStopWorkingTime(const struct FST_Hour& value);

	//struct FTimerHandle	CheckUnderTheMapTimer;		//Offset: 6064	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetCheckUnderTheMapTimer() const;
	struct FTimerHandle* M_PtrGetCheckUnderTheMapTimer();
	void M_SetCheckUnderTheMapTimer(const struct FTimerHandle& value);

	//struct FTimerHandle	AfterGetOrWakeUpTimer;		//Offset: 6072	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetAfterGetOrWakeUpTimer() const;
	struct FTimerHandle* M_PtrGetAfterGetOrWakeUpTimer();
	void M_SetAfterGetOrWakeUpTimer(const struct FTimerHandle& value);

	//TMap<TEnumAsByte<E_TimeOfDay>, bool>	ChangedTimeOfDay;		//Offset: 6080	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<TEnumAsByte<E_TimeOfDay>, bool> M_GetChangedTimeOfDay() const;
	TMap<TEnumAsByte<E_TimeOfDay>, bool>* M_PtrGetChangedTimeOfDay();
	void M_SetChangedTimeOfDay(const TMap<TEnumAsByte<E_TimeOfDay>, bool>& value);

	//bool	Spawned;		//Offset: 6160	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSpawned() const;
	bool* M_PtrGetSpawned();
	void M_SetSpawned(const bool& value);

	//bool	IsStoryNPC;		//Offset: 6161	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
	bool M_GetIsStoryNPC() const;
	bool* M_PtrGetIsStoryNPC();
	void M_SetIsStoryNPC(const bool& value);

	//bool	NightPatrol;		//Offset: 6162	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
	bool M_GetNightPatrol() const;
	bool* M_PtrGetNightPatrol();
	void M_SetNightPatrol(const bool& value);

	//bool	HasInfant;		//Offset: 6163	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetHasInfant() const;
	bool* M_PtrGetHasInfant();
	void M_SetHasInfant(const bool& value);

	//bool	ChangeCollision;		//Offset: 6164	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetChangeCollision() const;
	bool* M_PtrGetChangeCollision();
	void M_SetChangeCollision(const bool& value);

	//bool	IsComponent;		//Offset: 6165	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsComponent() const;
	bool* M_PtrGetIsComponent();
	void M_SetIsComponent(const bool& value);

	//bool	Interactable;		//Offset: 6166	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetInteractable() const;
	bool* M_PtrGetInteractable();
	void M_SetInteractable(const bool& value);

	//bool	IsLookAtTargetRotation;		//Offset: 6167	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsLookAtTargetRotation() const;
	bool* M_PtrGetIsLookAtTargetRotation();
	void M_SetIsLookAtTargetRotation(const bool& value);

	//bool	InspectorVisibility;		//Offset: 6168	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetInspectorVisibility() const;
	bool* M_PtrGetInspectorVisibility();
	void M_SetInspectorVisibility(const bool& value);

	//bool	IsLost;		//Offset: 6169	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsLost() const;
	bool* M_PtrGetIsLost();
	void M_SetIsLost(const bool& value);

	//bool	IsTargetOfTalkGoal;		//Offset: 6170	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsTargetOfTalkGoal() const;
	bool* M_PtrGetIsTargetOfTalkGoal();
	void M_SetIsTargetOfTalkGoal(const bool& value);

	//int32_t	QuestIndex;		//Offset: 6172	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetQuestIndex() const;
	int32_t* M_PtrGetQuestIndex();
	void M_SetQuestIndex(const int32_t& value);

	//TArray<class UObject*>	AnimalsReferences;		//Offset: 6176	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<class UObject*> M_GetAnimalsReferences() const;
	TArray<class UObject*>* M_PtrGetAnimalsReferences();
	void M_SetAnimalsReferences(const TArray<class UObject*>& value);

	//class AActor*	Building;		//Offset: 6192	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AActor* M_GetBuilding() const;
	class AActor** M_PtrGetBuilding();
	void M_SetBuilding(const class AActor*& value);

	//bool	Vendor;		//Offset: 6200	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
	bool M_GetVendor() const;
	bool* M_PtrGetVendor();
	void M_SetVendor(const bool& value);

	//class AActor*	LastFurniture;		//Offset: 6208	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AActor* M_GetLastFurniture() const;
	class AActor** M_PtrGetLastFurniture();
	void M_SetLastFurniture(const class AActor*& value);

	//class AActor*	Spawner;		//Offset: 6216	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AActor* M_GetSpawner() const;
	class AActor** M_PtrGetSpawner();
	void M_SetSpawner(const class AActor*& value);

	//struct FST_FoliageTarget	FoliageTarget;		//Offset: 6224	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash
	struct FST_FoliageTarget M_GetFoliageTarget() const;
	struct FST_FoliageTarget* M_PtrGetFoliageTarget();
	void M_SetFoliageTarget(const struct FST_FoliageTarget& value);

	//struct FVector	FoliageLocation;		//Offset: 6304	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FVector M_GetFoliageLocation() const;
	struct FVector* M_PtrGetFoliageLocation();
	void M_SetFoliageLocation(const struct FVector& value);

	//int32_t	BedIndex;		//Offset: 6316	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetBedIndex() const;
	int32_t* M_PtrGetBedIndex();
	void M_SetBedIndex(const int32_t& value);

	//int32_t	BedSlotIndex;		//Offset: 6320	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetBedSlotIndex() const;
	int32_t* M_PtrGetBedSlotIndex();
	void M_SetBedSlotIndex(const int32_t& value);

	//int32_t	WorkSlotIndex;		//Offset: 6324	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetWorkSlotIndex() const;
	int32_t* M_PtrGetWorkSlotIndex();
	void M_SetWorkSlotIndex(const int32_t& value);

	//class UBTTask_BlueprintBase*	AI_Task;		//Offset: 6328	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UBTTask_BlueprintBase* M_GetAI_Task() const;
	class UBTTask_BlueprintBase** M_PtrGetAI_Task();
	void M_SetAI_Task(const class UBTTask_BlueprintBase*& value);

	//struct FST_FieldTasksLists	FieldTask;		//Offset: 6336	Size: 56	Flags: Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
	struct FST_FieldTasksLists M_GetFieldTask() const;
	struct FST_FieldTasksLists* M_PtrGetFieldTask();
	void M_SetFieldTask(const struct FST_FieldTasksLists& value);

	//struct FST_QuestAnimation	QuestAnimation;		//Offset: 6392	Size: 4	Flags: Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_QuestAnimation M_GetQuestAnimation() const;
	struct FST_QuestAnimation* M_PtrGetQuestAnimation();
	void M_SetQuestAnimation(const struct FST_QuestAnimation& value);

	//struct FST_QuestInfos	QuestToGive;		//Offset: 6400	Size: 976	Flags: Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
	struct FST_QuestInfos M_GetQuestToGive() const;
	struct FST_QuestInfos* M_PtrGetQuestToGive();
	void M_SetQuestToGive(const struct FST_QuestInfos& value);

	//TArray<struct FST_QuestInfos>	TalkQuestReference;		//Offset: 7376	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
	TArray<struct FST_QuestInfos> M_GetTalkQuestReference() const;
	TArray<struct FST_QuestInfos>* M_PtrGetTalkQuestReference();
	void M_SetTalkQuestReference(const TArray<struct FST_QuestInfos>& value);

	//TAssetPtr<class FWorkMontageComplete__DelegateSignature>	WorkMontageComplete;		//Offset: 7392	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FWorkMontageComplete__DelegateSignature> M_GetWorkMontageComplete() const;
	TAssetPtr<class FWorkMontageComplete__DelegateSignature>* M_PtrGetWorkMontageComplete();
	void M_SetWorkMontageComplete(const TAssetPtr<class FWorkMontageComplete__DelegateSignature>& value);

	//TAssetPtr<class FWorkLoopsFinished__DelegateSignature>	WorkLoopsFinished;		//Offset: 7408	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FWorkLoopsFinished__DelegateSignature> M_GetWorkLoopsFinished() const;
	TAssetPtr<class FWorkLoopsFinished__DelegateSignature>* M_PtrGetWorkLoopsFinished();
	void M_SetWorkLoopsFinished(const TAssetPtr<class FWorkLoopsFinished__DelegateSignature>& value);

	//struct FST_SAVE_NPC_Blackboards	OptimizationBlackboards;		//Offset: 7424	Size: 40	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_SAVE_NPC_Blackboards M_GetOptimizationBlackboards() const;
	struct FST_SAVE_NPC_Blackboards* M_PtrGetOptimizationBlackboards();
	void M_SetOptimizationBlackboards(const struct FST_SAVE_NPC_Blackboards& value);

	//class UAnimMontage*	WorkMontage;		//Offset: 7464	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UAnimMontage* M_GetWorkMontage() const;
	class UAnimMontage** M_PtrGetWorkMontage();
	void M_SetWorkMontage(const class UAnimMontage*& value);

	//struct FDataTableRowHandle	VendorCat;		//Offset: 7472	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn
	struct FDataTableRowHandle M_GetVendorCat() const;
	struct FDataTableRowHandle* M_PtrGetVendorCat();
	void M_SetVendorCat(const struct FDataTableRowHandle& value);

	//TEnumAsByte<E_NPCStatus>	NPC_Status;		//Offset: 7488	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_NPCStatus> M_GetNPC_Status() const;
	TEnumAsByte<E_NPCStatus>* M_PtrGetNPC_Status();
	void M_SetNPC_Status(const TEnumAsByte<E_NPCStatus>& value);

	//TEnumAsByte<E_Tools_Activity>	ToolActivity;		//Offset: 7489	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Tools_Activity> M_GetToolActivity() const;
	TEnumAsByte<E_Tools_Activity>* M_PtrGetToolActivity();
	void M_SetToolActivity(const TEnumAsByte<E_Tools_Activity>& value);

	//struct FName	NeedItem;		//Offset: 7492	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FName M_GetNeedItem() const;
	struct FName* M_PtrGetNeedItem();
	void M_SetNeedItem(const struct FName& value);

	//bool	OptimizationSetBlackboards;		//Offset: 7500	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetOptimizationSetBlackboards() const;
	bool* M_PtrGetOptimizationSetBlackboards();
	void M_SetOptimizationSetBlackboards(const bool& value);

	//TArray<struct FVector>	Paths;		//Offset: 7504	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FVector> M_GetPaths() const;
	TArray<struct FVector>* M_PtrGetPaths();
	void M_SetPaths(const TArray<struct FVector>& value);

	//bool	WhetherAffectNavigation;		//Offset: 7520	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetWhetherAffectNavigation() const;
	bool* M_PtrGetWhetherAffectNavigation();
	void M_SetWhetherAffectNavigation(const bool& value);

	//TAssetPtr<class FBreakMontageComplete__DelegateSignature>	BreakMontageComplete;		//Offset: 7528	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FBreakMontageComplete__DelegateSignature> M_GetBreakMontageComplete() const;
	TAssetPtr<class FBreakMontageComplete__DelegateSignature>* M_PtrGetBreakMontageComplete();
	void M_SetBreakMontageComplete(const TAssetPtr<class FBreakMontageComplete__DelegateSignature>& value);

	//class UAnimMontage*	BreakMontage;		//Offset: 7544	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UAnimMontage* M_GetBreakMontage() const;
	class UAnimMontage** M_PtrGetBreakMontage();
	void M_SetBreakMontage(const class UAnimMontage*& value);

	//TArray<struct FName>	Toys;		//Offset: 7552	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FName> M_GetToys() const;
	TArray<struct FName>* M_PtrGetToys();
	void M_SetToys(const TArray<struct FName>& value);

	//bool	CanChangeMovementActive;		//Offset: 7568	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCanChangeMovementActive() const;
	bool* M_PtrGetCanChangeMovementActive();
	void M_SetCanChangeMovementActive(const bool& value);

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

	void AI_HideHeldItem(bool IsWorking, bool UpdateToolType);

	void AI_SpawnTool(TEnumAsByte<E_Tools> Tool, bool CheckInInventory, bool FlipTool);

	void AI_SpawnOff_HandItem(TEnumAsByte<E_Tools> Item);

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

	void AI_PlayAudio(float StartTime);

	void AI_StopAudio();

	void AI_StopFurnitureAnimation(class AActor* Furniture);

	void SleepingFinish();

	void SittingFinish();

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

	void AI_SetMontages(class UAnimMontage* WorkMontage, class UAnimMontage* BreakMontage);

	void AI_SetBeginSleepTime();

	void AI_SetBeginWakeUpTime();

	void AI_SetPlayingTagNPC();

	void AI_SetCurrentWorkStateLoop(int32_t CurrentWorkStateLoop);

	void AI_SetPath(bool CheckDistance, float Distance, struct FVector Destination);

	void AI_SetInteractedActor(class AActor* InteractedActor);

	void AI_SetAnimationState(bool Sleeping, bool Sitting, bool Working, bool TakingBreak);

	void AI_SetGetOutSettings();

	void AI_SetSound(TAssetPtr<class USoundBase> Sound);

	void AI_SetChangeCollision(bool ChangeCollision);

	void AI_SetNPCAfterGetOrWakeUp();

	void AI_SetWorkTask();

	void AI_SetHasInfant(bool HasInfant);

	void SetProfessionData(struct FST_Profession ProfessionData);

	void AI_SetID(struct FString ID);

	void AI_SetRotationManaged(bool IsRotationManaged);

	void AI_SetBedIndexes(int32_t BedIndex, int32_t BedSlotIndex);

	void AI_SetWaitTask(bool CheckDayActivities);

	void AI_SetCanChangeMovementActive(bool CanChangeMovementActive);

	void AI_SetQuestBlocking(bool QuestBlocking);

	void AI_Start_Combat(class AActor* Actor);

	void AI_SetMotherParameters();

	void AI_AfterRemovalFromWorkplace();

	void AI_RemovePathsPoint(int32_t Index);

	void AI_RemoveAnimalReference();

	void AI_AfterRemovalFromHouse();

	void AI_DestroyOnGetOut();

	void Set_Sleeping_Event(bool IsSleeping, TEnumAsByte<E_SleepingDirection> SleepingDirection, bool UseBedSleepingPose);

	void Set_Sitting_Event(bool IsSitting, TEnumAsByte<E_SitDownPosition> SitDownPosition, TEnumAsByte<E_SittingType> SittingType);

	void PlayPickingUpMontage(class UObject* Instigator, bool PreferTwoHanded, bool PlayAnimSound);

	void NPCsStartTimer_Stamina_BPI();

	void HitRagdollDecay();

	void OnCapsuleComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, const struct FHitResult& Hit);

	void Hit(struct FVector HitLocation, struct FVector HitForce, struct FName HitBoneName);

	void AI_SetPerceptionActive(bool Enabled, float TickInterval);

	void SetCharacterMovementActive(bool IsActive, bool IsIKActive);

	void AnimNotify_BreakLoopIncreased(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID, int32_t Loop);

	void AnimNotify_BreakLoopsFinished(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID, int32_t Loop);

	void AnimNotify_WorkLoopIncreased(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState, int32_t Loop);

	void AnimNotify_BreakMontageComplete(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID);

	void FarOptimization();

	void MediumOptimization();

	void CloseOptimization();

	void NoneOptimization();

	void RemoveFamilyFromHouse();

	void UpdateOnDead();

	void OnWakeUp();

	void OnGetUp();

	void InitSetSkills(bool Birth);

	void AnimNotify_WorkLoopsFinished(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState, int32_t Loop);

	void AnimNotify_WorkMontageComplete(TEnumAsByte<E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState);

	void EndFalling();

	void StartFalling();

	void DisableNPC();

	void EnableNPC();

	void SetMeshAndMaterials(class USkeletalMesh* HeadMesh, class USkeletalMesh* TorsoMesh, class USkeletalMesh* HandsMesh, class USkeletalMesh* LegsMesh, class USkeletalMesh* FeetMesh, class USkeletalMesh* HatSKMesh, class USkeletalMesh* HoodMesh, class USkeletalMesh* Backpack, class USkeletalMesh* Pouch, class UObject* AnimClass, const TArray<struct FST_MeshDynamicMaterials>& DynamicMaterials);

	void SetMesh(class USkeletalMesh* NewHeadMesh, class USkeletalMesh* NewTorsoMesh, class USkeletalMesh* NewHandsMesh, class USkeletalMesh* NewLegsMesh, class USkeletalMesh* NewFeetMesh, class USkeletalMesh* NewHatSKMesh, class USkeletalMesh* NewHoodMesh, class USkeletalMesh* NewHairMesh, class USkeletalMesh* NewBackpackMesh, class USkeletalMesh* NewPouchMesh, class UObject* NewClass, bool UpdateOnly);

	void LoadNPCDataFromSave(struct FST_SAVE_NPC NPCData, bool ResetEQ, struct FString SaveGameVersion);

	void Init_NPC(bool LoadGame);

	void ShowInspectorUI();

	void ReceiveTick(float DeltaSeconds);

	void RemoveFromWorkPlace();

	void AI_AddSkills(TEnumAsByte<E_Skills> Skill, float Value);

	void Interact(class ABP_BaseCharacter_C* BaseCharacter, struct FHitResult Hit, bool Timer);

	void ReceiveBeginPlay();

	void AI_ResetNavInvoker();

	void OnLoaded_2A48D8854175C5A6A7FC3D82664B3D26(class UObject* Loaded);

	void OnLoaded_306E1C1447AE3C11220DDC9AADCA6AB0(class UObject* Loaded);

	void OnLoaded_10E0287042B5716E06C80D849582D9F5(class UObject* Loaded);

	void OnLoaded_BB2717E64866BD380FC9D781DB1EF03A(class UObject* Loaded);

	void OnLoaded_9AA73FD8484CD67355ABCEB05F2C8AB7(class UObject* Loaded);

	void GetHeldItem(class ABP_MasterHoldableItem_C** HeldItem);

	void IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance);

	void CheckForTalkGoal(TAssetPtr<class UDialogue>* Dialogue, bool* found);

	void FindBedInHouse(bool Occupy, struct FVector* Destination, bool* Find);

	struct FRotator GetLookingRotation();

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

	void SetBlackboardValues_WorkTask(TEnumAsByte<E_Tasks> WorkTask);

	void SetBlackboardValues_Task(TEnumAsByte<E_Tasks> Task);

	void SetBlackboardValues_CurrentTask(TEnumAsByte<E_Tasks> Task);

	void SetBlackboardValues_TaskState(TEnumAsByte<E_TaskState> TaskState);

	void GetBlackboardValues_CurrentNPCBehavior(TEnumAsByte<E_NPCBehavior>* NPCBehavior);

	void GetBlackboardValues_WorkTask(TEnumAsByte<E_Tasks>* WorkTask);

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

	void GetProfession(TEnumAsByte<E_Profession>* Profession);

	void FindTool(TEnumAsByte<E_Tools> ToolType, bool* Found_, struct FST_ItemDetails* ItemDetails);

	void OnDayChanged();

	void OnSeasonChanged();

	void OnCharacterTypeChanged();

	void OnDialogueStarted();

	void OnDialogueEnded();

	void Set_New_Collision(bool IsCollision);

	void GetNPCDataToSave(struct FST_SAVE_NPC* NPCData);

	void SetNPCDataFromSave(struct FST_SAVE_NPC NPCData, bool ResetEQ, struct FString SaveGameVersion);

	void Destroy_NPC();

	void RespawnInfant();

	void SetSceneName();

	void EndTalking();

	void GetTransformByRoot(struct FTransform Transform, struct FVector WorldLocation, const struct FTransform& ActorTransform, struct FVector* Location, struct FVector* Direction);

	void SetNPCBehaviorFromSave();

	void OnPlayerOccupy(class ABP_MasterFurniture_C* Furniture);

	void BindFurnitureEvents(class ABP_MasterFurniture_C* Furniture);

	void UnbindFurnitureEvents(class ABP_MasterFurniture_C* Furniture);

	void OnOptimizationActive();

	void OnOptimizationDeactive();

	void SetMeshesFromPreset(TEnumAsByte<E_Profession> Profession, class UObject* NewClass, bool UpdateOnly, bool LoadGame);

	void CheckUnderTheMap();

	void GetProfessionData(struct FST_Profession* ProfessionData);

	void FixCustomNPCsFromDT();

	void ToolInteractFoliage();

	class USkeletalMesh* SelectCaster();

	void GetDirection(float* Direction);

	void SetCustomNPC_DTHandler(struct FString SaveGameVersion);

	void SetGiftVendorItems(struct FST_VendorCategory VendorCategory);

	void GetToolHoldableClass(bool* NeedTool, bool* FoundTool, TAssetPtr<class UClass>* HoldableClass);

	void FixPlayersWifeAffection(struct FString SaveGameVersion);

	void SetMinDeadAge();

	void SetSaveMeshPresets(struct FString NPC_ID, struct FName MeshName, TMap<TEnumAsByte<E_BodyParts>, int32_t> BPIndexes, struct FLinearColor SkinTone, struct FLinearColor HairColor, int32_t HeadID, int32_t HairID, TMap<TEnumAsByte<E_Profession>, struct FST_NPCSeasonClothing> PresetsIDs);

	void SetBlackboardValues_BanditType(TEnumAsByte<E_BanditType> BanditType);

	void GetBlackboardValues_BanditType(TEnumAsByte<E_BanditType>* BanditType);

	void AfterDeath();

	void SetRandomInventory();

	void Attach_Components();

	void ChangeName(struct FName NewRowName, struct FText NewName, bool ChangeSex);

	void ChooseCharacterVoiceID();

	TAssetPtr<class UDialogue> GetActualDialogue();

	void SetDialogue(class ABP_PlayerCharacter_C* PlayerReference);

	void SetKestrelBehavior(bool SetNewBehavior);

	void SetOptimizationBlackboards();

	void ReloadCharacterVoice(struct FString SaveGameVersion);

	void OnDestroyFurniture();

	void BoostComponentDebug();

	void SetQuestNPC_OnLoad();

	void CheckNPCLocationOnSave();

	void ChangeApprenticeToWorker();

	void AddSkillsToApprentices(TEnumAsByte<E_Skills> Skill, float Value, TEnumAsByte<E_Profession> Profession);

	void ComeBackHome(struct FTransform ParentTransform, bool* Success);

	void AddRandomToys(bool AddSamborFigurines);

	void FixMothersTasks();

	void FixQuestNPCsPersonality(struct FString SaveGameVersion);

	void MeshSettings();

	void SetQuestPose(TEnumAsByte<E_IdleStates> IdleState, unsigned char PoseID, TEnumAsByte<E_AfterIdlePose> AfterIdlePose);

	void GetDistance(float* Distance);

	void GetOptimalizationStage(int32_t* Stage);

	void Push_Sounds();

	void AI_FindFoliage(TEnumAsByte<E_Resources> TargetType, struct FVector* Destination, bool* Foliage);

	void AI_GetTargetLocation(struct FVector Target, float MaxDistance, float MaxDirection, float DistanceToLastPoint, bool OutsideLastPoint, struct FVector* Location);

	void AI_GetDistanceAndDirection(struct FVector Target_Location, struct FVector Current_Location, float* Distance, struct FVector* Direction);

	void AI_FindField(struct FVector* Destination, bool* Field, struct FST_FieldTasksLists* TaskList, bool* IsTask);

	void AI_IncreaseNavInvoker(bool* ToBig);

	void AI_GetMesh(class USkeletalMeshComponent** Mesh);

	void AI_FindHouse(bool FindBed, bool Occupy, struct FVector* Destination, bool* Find);

	void AI_FindAnimal(struct FVector* Destination, bool* Animal);

	void AI_FindWorkPlace(struct FVector* Destination, float* WorkRadius, bool* WorkPlace);

	void AI_FindClosestFurniture(TEnumAsByte<E_Ownership> Location, TEnumAsByte<E_FurnitureCategories> FurnitureCategory, bool IgnoreOwnership, struct FVector* Destination, bool* IsFurniture);

	void AI_CheckTargetFoliage(bool* IsTargetFoliage);

	void AI_GetStats(struct FText* Name, TEnumAsByte<E_Sex>* Sex, float* Age, TEnumAsByte<E_CharacterType>* CharacterType);

	void AI_GetIDFromNPC(struct FString* NPC_ID);

	void AI_CheckBuildingIsConstructed(bool* IsConstructed);

	void AI_GetOwnership(TEnumAsByte<E_Ownership>* Ownership);

	void AI_GetBedIndex(int32_t* BedIndex, int32_t* BedSlotIndex);

	void AI_FindNPCtoTalk(struct FVector* Destination, struct FVector* lookAt, bool* IsNPC);

	void AI_GetNightPatrol(bool* NightPatrol);

	void AI_FindBuildingWorkbenches(struct FVector* Destination, bool* IsWorkbenches);

	void AI_GetCapsuleHalfHeight(float* CapsuleHalfHeight);

	void AI_FindTavernFurniture(bool Occupy, struct FVector* Destination, bool* Find);

	void AI_FindRandomFurniture(TEnumAsByte<E_Ownership> Location, TEnumAsByte<E_FurnitureCategories> FurnitureCategory, bool IgnoreOwnership, struct FVector* Destination, bool* IsFurniture);

	void AI_GetQuestBlocking(bool* QuestBlocking);

	void AI_GetAnimationState(bool* Sleeping, bool* Sitting, bool* Working, bool* TakingBreak);

	void AI_GetInteractionSlotIndex(int32_t* InteractionSlotIndex);

	void AI_GetIsChangedTimeOfDay(TEnumAsByte<E_TimeOfDay> TimeOfDay, bool* IsChanged);

	void AI_GetCollisionResponse(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse>* Resposne);

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

	void AI_FindPOIFurniture(bool* IsFurniture, struct FVector* Destination);

	void AI_GetBanditType(TEnumAsByte<E_BanditType>* BanditType);

	void AI_FindGetOutPoint(struct FVector* GetOutPoint);

	void AI_GetWorkSlotIndex(int32_t* WorkSlotIndex);

	void AI_GetBuildingType(bool* IsValidBuilding, TEnumAsByte<E_Buildings>* BuildingType);

	void AI_SpawnCrossbow(bool CheckInInventory, bool* IsCrossBow);

	void AI_GetVendor(bool* Vendor);

	void AI_GetSpawnerLocation(bool* IsValidSpawner, struct FVector* SpawnerLocation);

	void CharacterVoice(struct FST_CharacterVoiceCues* ST_CharacterVoice);

	void AI_FindBreakSlot(struct FVector* Destination, bool* BreakSlot);

	void AI_GetMontages(class UAnimMontage** WorkMontage, class UAnimMontage** BreakMontage);

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

	void InheritableComponentHandler();

#pragma endregion
};
};