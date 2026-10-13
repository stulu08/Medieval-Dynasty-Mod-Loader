#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_QuestManager.BP_QuestManager_C
// Super: Class Engine.Actor
// Size: 1256
// Size inherited: 544
/////////////////////////////////////////////
namespace UE4 {
class ABP_QuestManager_C : public AActor {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 544	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//class UInventoryComponent_C*	QuestInventory;		//Offset: 552	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UInventoryComponent_C* M_GetQuestInventory() const;
	class UInventoryComponent_C** M_PtrGetQuestInventory();
	void M_SetQuestInventory(const class UInventoryComponent_C*& value);

	//class USceneComponent*	DefaultSceneRoot;		//Offset: 560	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class USceneComponent* M_GetDefaultSceneRoot() const;
	class USceneComponent** M_PtrGetDefaultSceneRoot();
	void M_SetDefaultSceneRoot(const class USceneComponent*& value);

	//class ABP_SystemsManager_C*	SystemsManagerReference;		//Offset: 568	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_SystemsManager_C* M_GetSystemsManagerReference() const;
	class ABP_SystemsManager_C** M_PtrGetSystemsManagerReference();
	void M_SetSystemsManagerReference(const class ABP_SystemsManager_C*& value);

	//int32_t	AmountToHunt;		//Offset: 576	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetAmountToHunt() const;
	int32_t* M_PtrGetAmountToHunt();
	void M_SetAmountToHunt(const int32_t& value);

	//TAssetPtr<class FIncreaseHuntedByPlayer__DelegateSignature>	IncreaseHuntedByPlayer;		//Offset: 584	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FIncreaseHuntedByPlayer__DelegateSignature> M_GetIncreaseHuntedByPlayer() const;
	TAssetPtr<class FIncreaseHuntedByPlayer__DelegateSignature>* M_PtrGetIncreaseHuntedByPlayer();
	void M_SetIncreaseHuntedByPlayer(const TAssetPtr<class FIncreaseHuntedByPlayer__DelegateSignature>& value);

	//TArray<struct FST_QuestInfos>	AllAcceptedQuests;		//Offset: 600	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
	TArray<struct FST_QuestInfos> M_GetAllAcceptedQuests() const;
	TArray<struct FST_QuestInfos>* M_PtrGetAllAcceptedQuests();
	void M_SetAllAcceptedQuests(const TArray<struct FST_QuestInfos>& value);

	//class ABP_NPC_C*	TmpNPCReference;		//Offset: 616	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_NPC_C* M_GetTmpNPCReference() const;
	class ABP_NPC_C** M_PtrGetTmpNPCReference();
	void M_SetTmpNPCReference(const class ABP_NPC_C*& value);

	//int32_t	tmpDynastyReputationToAdd;		//Offset: 624	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GettmpDynastyReputationToAdd() const;
	int32_t* M_PtrGettmpDynastyReputationToAdd();
	void M_SettmpDynastyReputationToAdd(const int32_t& value);

	//TArray<class ABP_GoalActor_C*>	GoalActors;		//Offset: 632	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TArray<class ABP_GoalActor_C*> M_GetGoalActors() const;
	TArray<class ABP_GoalActor_C*>* M_PtrGetGoalActors();
	void M_SetGoalActors(const TArray<class ABP_GoalActor_C*>& value);

	//TAssetPtr<class FOnVillageParametersChange__DelegateSignature>	OnVillageParametersChange;		//Offset: 648	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnVillageParametersChange__DelegateSignature> M_GetOnVillageParametersChange() const;
	TAssetPtr<class FOnVillageParametersChange__DelegateSignature>* M_PtrGetOnVillageParametersChange();
	void M_SetOnVillageParametersChange(const TAssetPtr<class FOnVillageParametersChange__DelegateSignature>& value);

	//int32_t	tmpTechnologyBuildingsUnlocked;		//Offset: 664	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	int32_t M_GettmpTechnologyBuildingsUnlocked() const;
	int32_t* M_PtrGettmpTechnologyBuildingsUnlocked();
	void M_SettmpTechnologyBuildingsUnlocked(const int32_t& value);

	//int32_t	tmpBuildingsBuilt;		//Offset: 668	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	int32_t M_GettmpBuildingsBuilt() const;
	int32_t* M_PtrGettmpBuildingsBuilt();
	void M_SettmpBuildingsBuilt(const int32_t& value);

	//TAssetPtr<class FOnTalentsChange__DelegateSignature>	OnTalentsChange;		//Offset: 672	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnTalentsChange__DelegateSignature> M_GetOnTalentsChange() const;
	TAssetPtr<class FOnTalentsChange__DelegateSignature>* M_PtrGetOnTalentsChange();
	void M_SetOnTalentsChange(const TAssetPtr<class FOnTalentsChange__DelegateSignature>& value);

	//int32_t	tmpTalentPointsSpent;		//Offset: 688	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	int32_t M_GettmpTalentPointsSpent() const;
	int32_t* M_PtrGettmpTalentPointsSpent();
	void M_SettmpTalentPointsSpent(const int32_t& value);

	//int32_t	tmpVillagersAssignedToWork;		//Offset: 692	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	int32_t M_GettmpVillagersAssignedToWork() const;
	int32_t* M_PtrGettmpVillagersAssignedToWork();
	void M_SettmpVillagersAssignedToWork(const int32_t& value);

	//TAssetPtr<class FOnVillagersProfessionsChange__DelegateSignature>	OnVillagersProfessionsChange;		//Offset: 696	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnVillagersProfessionsChange__DelegateSignature> M_GetOnVillagersProfessionsChange() const;
	TAssetPtr<class FOnVillagersProfessionsChange__DelegateSignature>* M_PtrGetOnVillagersProfessionsChange();
	void M_SetOnVillagersProfessionsChange(const TAssetPtr<class FOnVillagersProfessionsChange__DelegateSignature>& value);

	//TAssetPtr<class FOnDaySeasonChange__DelegateSignature>	OnDaySeasonChange;		//Offset: 712	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnDaySeasonChange__DelegateSignature> M_GetOnDaySeasonChange() const;
	TAssetPtr<class FOnDaySeasonChange__DelegateSignature>* M_PtrGetOnDaySeasonChange();
	void M_SetOnDaySeasonChange(const TAssetPtr<class FOnDaySeasonChange__DelegateSignature>& value);

	//TAssetPtr<class FOnGoalsTimePass__DelegateSignature>	OnGoalsTimePass;		//Offset: 728	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnGoalsTimePass__DelegateSignature> M_GetOnGoalsTimePass() const;
	TAssetPtr<class FOnGoalsTimePass__DelegateSignature>* M_PtrGetOnGoalsTimePass();
	void M_SetOnGoalsTimePass(const TAssetPtr<class FOnGoalsTimePass__DelegateSignature>& value);

	//TAssetPtr<class FOnArcheryContestUpdate__DelegateSignature>	OnArcheryContestUpdate;		//Offset: 744	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnArcheryContestUpdate__DelegateSignature> M_GetOnArcheryContestUpdate() const;
	TAssetPtr<class FOnArcheryContestUpdate__DelegateSignature>* M_PtrGetOnArcheryContestUpdate();
	void M_SetOnArcheryContestUpdate(const TAssetPtr<class FOnArcheryContestUpdate__DelegateSignature>& value);

	//TAssetPtr<class FOnFoliageRemoved__DelegateSignature>	OnFoliageRemoved;		//Offset: 760	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnFoliageRemoved__DelegateSignature> M_GetOnFoliageRemoved() const;
	TAssetPtr<class FOnFoliageRemoved__DelegateSignature>* M_PtrGetOnFoliageRemoved();
	void M_SetOnFoliageRemoved(const TAssetPtr<class FOnFoliageRemoved__DelegateSignature>& value);

	//TAssetPtr<class FOnQuestCompleted__DelegateSignature>	OnQuestCompleted;		//Offset: 776	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnQuestCompleted__DelegateSignature> M_GetOnQuestCompleted() const;
	TAssetPtr<class FOnQuestCompleted__DelegateSignature>* M_PtrGetOnQuestCompleted();
	void M_SetOnQuestCompleted(const TAssetPtr<class FOnQuestCompleted__DelegateSignature>& value);

	//TAssetPtr<class FOnFlirtWithNPC__DelegateSignature>	OnFlirtWithNPC;		//Offset: 792	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnFlirtWithNPC__DelegateSignature> M_GetOnFlirtWithNPC() const;
	TAssetPtr<class FOnFlirtWithNPC__DelegateSignature>* M_PtrGetOnFlirtWithNPC();
	void M_SetOnFlirtWithNPC(const TAssetPtr<class FOnFlirtWithNPC__DelegateSignature>& value);

	//TMap<struct FString, class UMasterCustomGoal_C*>	CustomGoalsMap;		//Offset: 808	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<struct FString, class UMasterCustomGoal_C*> M_GetCustomGoalsMap() const;
	TMap<struct FString, class UMasterCustomGoal_C*>* M_PtrGetCustomGoalsMap();
	void M_SetCustomGoalsMap(const TMap<struct FString, class UMasterCustomGoal_C*>& value);

	//TAssetPtr<class FOnChunkToolInteraction__DelegateSignature>	OnChunkToolInteraction;		//Offset: 888	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnChunkToolInteraction__DelegateSignature> M_GetOnChunkToolInteraction() const;
	TAssetPtr<class FOnChunkToolInteraction__DelegateSignature>* M_PtrGetOnChunkToolInteraction();
	void M_SetOnChunkToolInteraction(const TAssetPtr<class FOnChunkToolInteraction__DelegateSignature>& value);

	//class ABP_MasterQuestScenography_C*	HugoBloodStains;		//Offset: 904	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_MasterQuestScenography_C* M_GetHugoBloodStains() const;
	class ABP_MasterQuestScenography_C** M_PtrGetHugoBloodStains();
	void M_SetHugoBloodStains(const class ABP_MasterQuestScenography_C*& value);

	//class ABP_MasterQuestScenography_C*	KestrelMess;		//Offset: 912	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_MasterQuestScenography_C* M_GetKestrelMess() const;
	class ABP_MasterQuestScenography_C** M_PtrGetKestrelMess();
	void M_SetKestrelMess(const class ABP_MasterQuestScenography_C*& value);

	//TAssetPtr<class FOnBanditCampCleared__DelegateSignature>	OnBanditCampCleared;		//Offset: 920	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnBanditCampCleared__DelegateSignature> M_GetOnBanditCampCleared() const;
	TAssetPtr<class FOnBanditCampCleared__DelegateSignature>* M_PtrGetOnBanditCampCleared();
	void M_SetOnBanditCampCleared(const TAssetPtr<class FOnBanditCampCleared__DelegateSignature>& value);

	//TAssetPtr<class FNone_513>	AcceptedFamilyQuests;		//Offset: 936	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TAssetPtr<class FNone_513> M_GetAcceptedFamilyQuests() const;
	TAssetPtr<class FNone_513>* M_PtrGetAcceptedFamilyQuests();
	void M_SetAcceptedFamilyQuests(const TAssetPtr<class FNone_513>& value);

	//bool	ShouldWaitForSeasonWithFamilyQuest;		//Offset: 1016	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetShouldWaitForSeasonWithFamilyQuest() const;
	bool* M_PtrGetShouldWaitForSeasonWithFamilyQuest();
	void M_SetShouldWaitForSeasonWithFamilyQuest(const bool& value);

	//TMap<struct FName, int32_t>	DialogueChoices;		//Offset: 1024	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<struct FName, int32_t> M_GetDialogueChoices() const;
	TMap<struct FName, int32_t>* M_PtrGetDialogueChoices();
	void M_SetDialogueChoices(const TMap<struct FName, int32_t>& value);

	//class AActor*	NoticeBoardReference;		//Offset: 1104	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AActor* M_GetNoticeBoardReference() const;
	class AActor** M_PtrGetNoticeBoardReference();
	void M_SetNoticeBoardReference(const class AActor*& value);

	//TArray<struct FName>	MultiGenericQuestHistory;		//Offset: 1112	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FName> M_GetMultiGenericQuestHistory() const;
	TArray<struct FName>* M_PtrGetMultiGenericQuestHistory();
	void M_SetMultiGenericQuestHistory(const TArray<struct FName>& value);

	//TArray<struct FST_AnimalQuestLoot>	AnimalsQuestLoot;		//Offset: 1128	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_AnimalQuestLoot> M_GetAnimalsQuestLoot() const;
	TArray<struct FST_AnimalQuestLoot>* M_PtrGetAnimalsQuestLoot();
	void M_SetAnimalsQuestLoot(const TArray<struct FST_AnimalQuestLoot>& value);

	//TArray<struct FName>	Co_OpStartSideQuestsList;		//Offset: 1144	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FName> M_GetCo_OpStartSideQuestsList() const;
	TArray<struct FName>* M_PtrGetCo_OpStartSideQuestsList();
	void M_SetCo_OpStartSideQuestsList(const TArray<struct FName>& value);

	//TArray<struct FName>	Co_OpEndSideQuestsList;		//Offset: 1160	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FName> M_GetCo_OpEndSideQuestsList() const;
	TArray<struct FName>* M_PtrGetCo_OpEndSideQuestsList();
	void M_SetCo_OpEndSideQuestsList(const TArray<struct FName>& value);

	//TMap<struct FName, int32_t>	SkipGivingNextObjectives;		//Offset: 1176	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<struct FName, int32_t> M_GetSkipGivingNextObjectives() const;
	TMap<struct FName, int32_t>* M_PtrGetSkipGivingNextObjectives();
	void M_SetSkipGivingNextObjectives(const TMap<struct FName, int32_t>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_QuestManager.BP_QuestManager_C");
		return ptr;
	}

#pragma region Functions
	void IncreaseHuntedByPlayer__DelegateSignature(TEnumAsByte<E_AnimalType> AnimalType);

	void OnVillageParametersChange__DelegateSignature(TEnumAsByte<E_Goal_VillageParametersTypes> VillageGoalType);

	void OnTalentsChange__DelegateSignature();

	void OnVillagersProfessionsChange__DelegateSignature();

	void OnDaySeasonChange__DelegateSignature();

	void OnGoalsTimePass__DelegateSignature(struct FST_Time PassedTime);

	void OnArcheryContestUpdate__DelegateSignature(float AchievedPoints, TArray<struct FName>* Target_sTags);

	void OnFoliageRemoved__DelegateSignature(TEnumAsByte<E_Resources> ResourceType, TEnumAsByte<E_FoliageSpecies> FoliageSpecies);

	void OnQuestCompleted__DelegateSignature();

	void OnFlirtWithNPC__DelegateSignature();

	void OnChunkToolInteraction__DelegateSignature(EChunkState InteractedChunkFinalState);

	void OnBanditCampCleared__DelegateSignature(struct FVector CampLocation, struct FGuid CampID);

	void ExecuteUbergraph_BP_QuestManager(int32_t EntryPoint);

	void OnPlayerAnimalsChange_Event_1();

	void OnFlirtWithNPC_Event();

	void OnQuestCompleted_Event();

	void OnFoliageRemoved_Event(TEnumAsByte<E_Resources> ResourceType, TEnumAsByte<E_FoliageSpecies> FoliageSpecies);

	void OnArcheryContestUpdate_Event(float AchievedPoints, TArray<struct FName>* Target_sTags);

	void OnGoalsTimePass_Event(struct FST_Time PassedTime);

	void OnDaySeasonChange_Event();

	void OnPlayersPopulationChange_Event_1();

	void CheckPledgedProfessions();

	void CheckForChildren();

	void CheckForPatner();

	void CheckTalentPoints();

	void UpdateVillageParametersQuests(TEnumAsByte<E_Goal_VillageParametersTypes> VillageGoalType);

	void IncreaseHuntedAnimals(TEnumAsByte<E_AnimalType> AnimalType);

	void CheckForNeededItems();

	void DoAutosaveOnQuestCompletion();

	void OnQuestInventoryChange();

	void FixStartingQuestOnLoad();

	void TryToGenerateTaxesQuest();

	void StartQuestSystem(bool LoadGame);

	void AfterSeasonSkip();

	void ReceiveBeginPlay();

	void AssignQuestToNPC(struct FST_QuestInfos InputPin, struct FString NPCID, class UDataTable* QuestDataTable);

	void FailQuest(int32_t QuestID, bool AllPlayers);

	void Init();

	void AddEmotesToDialogueChoices(const TArray<struct FName>& UnlockedEmotes);

	void AddToDialogueChoice_Multicast(struct FName ChoiceID, int32_t Choice);

	void AddToDialogueChoice_Server(struct FName ChoiceID, int32_t Choice);

	void FailQuest_Server();

	void CompleteQuest_Server(int32_t QuestID, bool AllPlayers);

	void UpdateNPCQuestsOnSeasonChange();

	void GenerateChallengeValues(const struct FST_Challange& InputChallenge, struct FST_Challange* OutputChallenge);

	void StartQuest(struct FST_QuestInfos Quest, bool ThroughDialogue_, int32_t* QuestID);

	void CompleteGoal(int32_t QuestID, int32_t ObjectiveID, int32_t GoalID, int32_t PlayerId);

	void FindNPCsForTalkGoalAndHideNPCsHeldItem();

	void StartObjective(int32_t QuestID, int32_t ObjectiveID);

	void CompleteObjective(int32_t QuestID, int32_t ObjectiveID, int32_t GoalID, int32_t PlayerId);

	void CheckNPCForQuestRestrictions(struct FST_QuestInfos QuestReference, class ABP_NPC_C* NPCReference, bool* NPCValidForQuest);

	void SeasonalGenerateAndAssignQuests();

	void SetMainQuest(struct FName MainQuestID);

	void LoadSaveFileIntoSystem(class USAVE_Game_C* SaveReference);

	void SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference);

	void AssignStoryQuests();

	void GiveQuestReward(int32_t InputPin, int32_t PlayerId);

	void CheckNPCForTalk(struct FST_GeneratedQuest_TalkGoalNPCRestrictions TalkRestriction, class ABP_NPC_C* NPCReference, bool* NPCValidForQuest);

	void FailObjective(int32_t QuestID, int32_t ObjectiveID);

	void CheckTechnologyRestriction(struct FST_GeneratedQuestRestrictions_Technology TechnologyRestriction, bool* Value);

	void GenerateQuestRewards(TArray<struct FST_GenerateQuestReward>* GeneratorQuestsRewards, struct FST_QuestReward* GeneratedReward);

	void GenerateQuestObjectives(TArray<struct FST_GenerateObjectivesForQuest>* GeneratorQuestObjectives, TArray<struct FST_QuestObjectives>* GeneratedObjectives, bool* Success);

	void FixDuplicatedMainMultiQuestsOnLoad();

	void GenerateTaxQuest();

	void CheckDevelopmentStageOnChaptersLoad();

	void FixDuplicatedMainMultiQuestsOnLoad_NPCQuestToGive();

	void FixListenToConversationGoalsOnLoad();

	void FixHeirQuestsOnLoad();

	void FixAlwinQuestlineOnLoad();

	void SeasonalGenerateAndAssignQuest_Cheat(struct FName QuestName);

	void ClearOldSideQuests();

	void RerollTaxQuestOnUniegostDeath();

	void CheckAlwin_sTargetAtGostovia();

	void AssignGeneratedChallenge(class ABP_NPC_C* TmpNPCReference, struct FName RowName);

	void CompleteQuest(int32_t QuestID, bool AllPlayers, int32_t PlayerId);

	void CheckForNeededItems_Function();

	void IncreaseHuntedAnimals_Function(TEnumAsByte<E_AnimalType> AnimalType);

	void UpdateVillageParametersQuests_Function(TEnumAsByte<E_Goal_VillageParametersTypes> VillageGoalType);

	void CheckTalentPoints_Function();

	void CheckForPatner_Function();

	void CheckForChildren_Function();

	void CheckPledgedProfessions_Function();

	void OnPlayersPopulationChange_Function();

	void OnPlayerAnimalsChange_Function();

	void OnDaySeasonChange_Function();

	void OnGoalsTimePass_Function(struct FST_Time PassedTime);

	void OnArcheryContestUpdate_Function(float AchievedPoints, TArray<struct FName>* Target_sTags);

	void OnFoliageRemoved_Function(TEnumAsByte<E_Resources> FoliageType, TEnumAsByte<E_FoliageSpecies> FoliageSpecies);

	void OnQuestCompleted_Function();

	void OnFlirtWithNPC_Function();

	void AssignFirstQuest();

	void CheckQuestsOnNPCRemove(class ABP_NPC_C* RemovedNPCReference);

	void CancelQuest(int32_t QuestID);

	void FixQuestEmptyGoal(struct FName QuestID, int32_t ObjectiveID, int32_t GoalID, bool* Success, struct FST_MasterGoals* Goal);

	void FixQuestEmptyObjective(struct FName QuestID, int32_t ObjectiveID, bool* Success, struct FST_QuestObjectives* Objective);

	void CheckAndFixDialogueOnLoad(struct FName QuestID, int32_t ObjectiveID, int32_t GoalID, struct FST_Goal_Talk Goal, bool* Fixed, struct FST_Goal_Talk* FixedGoal);

	void SetNPCsObjectivesAndGoals(const struct FST_QuestInfos& ST_QuestInfo);

	void FixAlwinOnVersion0_5_0_8(struct FString SaveGameVersion);

	void FixChapters0_5_1_1(struct FString SaveGameVersion);

	void Stop_All_Follow_for_Quest(int32_t QuestID, bool SeasonChange);

	void UpdateBuildingQuests(TEnumAsByte<E_Goal_BuildTypes> Type, bool Constructed_, struct FName Name, struct FVector Location);

	void SpawnCustomGoalObject(struct FST_Goal_Custom* CustomGoal, struct FName QuestID, int32_t ObjectiveIndex, int32_t GoalIndex, TEnumAsByte<E_GoalState> GoalState);

	void FailGoal(int32_t QuestID, int32_t ObjectiveID, int32_t GoalID);

	void FixUniegostOnVersion_1_0_0_8(struct FString SaveGameVersion);

	void FixAlwinInStoryVI_OnVersion_1_3_0_5(struct FString SaveGameVersion);

	void FixTaxQuestOnVersion_1_1_1_1(struct FString SaveGameVersion);

	void FixAlwinInStoryVII_VIII_UpToVersion_1_3_0_4(struct FString SaveGameVersion);

	void SetKestrelBehavior();

	void GetActiveQuestIndex(struct FName QuestID, int32_t* QuestIndex);

	void SeasonalGenerateAndAssignFamilyQuest(bool Cheat, struct FName CheatName);

	void AddSamborFigurinesOnLoad(struct FString SaveGameVersion);

	void FixFindGoalForVengeanceQuest(int32_t QuestID);

	void FixFamilyQuestsNPCsOnLoad(struct FString SaveGameVersion);

	void FixAlwinInStoryIV(struct FString SaveGameVersion);

	void FixForInvalidQuestItemsRemainingInInventory();

	void SetDialogueChoice(struct FName ChoiceID, int32_t Choice);

	void GetDialogueChoice(struct FName ChoiceID, int32_t* Choice);

	void GetActiveQuestCurrentObjective(struct FName QuestID, int32_t* ObjectiveID);

	void GetActiveQuestCurrentGoals(struct FName QuestID, TArray<int32_t>* GoalsIDs);

	void GetActiveQuestsAndObjectives(TMap<struct FName, int32_t>* ActiveQuestsAndObjectives);

	void GetCompletedQuestsIDs(TArray<struct FName>* CompletedQuestsIDs);

	void CheckQuestByState(struct FName QuestID, bool CheckObjective, int32_t ObjectiveIndex, bool CheckIsDone, TEnumAsByte<E_QuestState> QuestState, TEnumAsByte<E_ObjectiveState> ObjectiveState, bool* Success, bool* found);

	void ObjectiveIdWhereItemIsUsedInActiveQuest(struct FName QuestID, struct FName ItemId, int32_t* AtObjective);

	void SeasonalGenerateAndAssignQuestsToNoticeBoard();

	void UpdateNoticeBoardQuestsOnSeasonChange();

	void GetQuestHandlerFromID(struct FName QuestID, struct FDataTableRowHandle* QuestHandler);

	void FillQuestDataFromHandler(struct FDataTableRowHandle QuestHandler, int32_t* AddedAtIndex);

	void ReplicateQuestsDataOnClientLoad(int32_t QuestIndex, struct FST_QuestInfo_Save Quest);

	void GetQuestsDataForReplication(TArray<struct FST_QuestInfo_Save>* QuestsToReplicate);

	void SetNPC_QuestBehavior(struct FName QuestID, int32_t ObjectiveID, bool* Success);

	void SeasonalGenerateAndAssignQuests_MultiPlayerNPCs();

	void AddQuestToMultiHistory(struct FName QuestName);

	void GetSpecialAnimalQuestLoot(TEnumAsByte<E_AnimalType> AnimalType, TArray<struct FST_ItemResource>* ItemsToDrop);

	void RunEvent(struct FName QuestID, int32_t ObjectiveID, int32_t GoalID);

	void RunEventOnGoalCompleted(struct FName QuestID, int32_t ObjectiveID, int32_t GoalID);

	void RunEventIfQuestIsAvailable(struct FName QuestID);

	void RunEventOnObjectiveCompleted(struct FName QuestID, int32_t ObjectiveID);

	void SkipQuestToObjective(const struct FDataTableRowHandle& QuestRef, int32_t ObjectiveIDToSkipTo);

	void GetActiveObjective(TArray<struct FST_QuestObjectives>* Objectives, int32_t* CurrentObjective);

	void IncrementDialogueChoice(struct FName ChoiceID, int32_t ChoiceIncrement);

	void RemoveDialogueChoice(struct FName ChoiceID, bool* Removed);

	void CheckForGoalTalkToDialogue(class ABP_BaseCharacter_C* TalkingActor, struct FString WhoToTalkToID, bool SearchReversed, TAssetPtr<class UDialogue>* Dialogue, bool* found);

	void CheckIfQuestIsPartOne(struct FName QuestID, bool* Value);

	void SeasonalGenerateAndAssignQuestsToNoticeBoard_Cheat(struct FName QuestID);

	void SeasonalGenerateAndAssignQuests_MultiPlayerNPCs_Cheat(const struct FName& QuestID);

	void MakeDescriptionFromStringTables(TArray<struct FST_StringTable_IDKey_Pair>* Array, struct FText* Value);

	void CheckIfCoopMainQuestsShouldStart();

	void CompleteGoal_ClientVersion(int32_t QuestID, int32_t ObjectiveID, int32_t GoalID, struct FName QuestName);

	void CreateCustomGoalsForClient();

	void AddToDialogueChoice(const struct FName& ChoiceID, const int32_t& Choice);

	void GetUnlockedEmotes(TArray<struct FName>* UnlockedEmotes);

	void GetQuestsDataForReplication_NonGenericQuests(TArray<struct FST_QuestInfoForReplicationOnPlayerJoin>* QuestsDataForReplication);

	void AddQuestsFromDataReplication_NonGenericQuests(TArray<struct FST_QuestInfoForReplicationOnPlayerJoin>* QuestsData);

	void GetQuestsDataForReplication_GenericQuest(TArray<struct FST_QuestInfoForReplicationGenericQuest>* GenericQuestInfo);

	void SerializeGenericQuestRewards(TArray<struct FST_Quest_PickedItemsFromGenerator>* Items, TArray<struct FST_QuestItemRewardsForReplication>* ParsedItems);

	void SerializeGenericQuestGoal(const struct FST_MasterGoals& Goal, struct FString* GoalTask);

	void AddQuestsFromDataReplication_GenericQuests(TArray<struct FST_QuestInfoForReplicationGenericQuest>* QuestData);

	void DeserializeGenericRewards(const struct FST_QuestReward& DT_OriginalRewards, int32_t RewardReputation, TArray<struct FST_QuestItemRewardsForReplication>* RewardItems, struct FST_QuestReward* ST_QuestReward);

	void DeserializeGenericQuestGoals(struct FST_MasterGoals DT_OriginalGoal, struct FString Task, struct FST_MasterGoals* Goal);

	void GetSerializedValues(struct FString SourceString, struct FString* Values);

	void FixMissingSwirOnOxbow();

	void FixMultiNPCsQuestBehavior();

	void FixMPPoisAfter2_0_1_2(struct FString SaveGameVersion);

	void FindQuestByIDAndSetStatusToCompleted(struct FName QuestID);

	void FillMissingDescriptionsForClientOnLoad();

	void ClearFamilyQuestsOnSwitchToHeir();

	void UpdateBuildingQuests_Function(TEnumAsByte<E_Goal_BuildTypes> Type, bool Constructed_, struct FName Name, struct FVector Location);

#pragma endregion
};
};