#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_QuestManager.BP_QuestManager_C
// Super: Class Engine.Actor
// Size: 1009
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

	//class USceneComponent*	DefaultSceneRoot;		//Offset: 552	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class USceneComponent* M_GetDefaultSceneRoot() const;
	class USceneComponent** M_PtrGetDefaultSceneRoot();
	void M_SetDefaultSceneRoot(const class USceneComponent*& value);

	//class ABP_SystemsManager_C*	SystemsManagerReference;		//Offset: 560	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_SystemsManager_C* M_GetSystemsManagerReference() const;
	class ABP_SystemsManager_C** M_PtrGetSystemsManagerReference();
	void M_SetSystemsManagerReference(const class ABP_SystemsManager_C*& value);

	//int32_t	AmountToHunt;		//Offset: 568	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetAmountToHunt() const;
	int32_t* M_PtrGetAmountToHunt();
	void M_SetAmountToHunt(const int32_t& value);

	//TAssetPtr<class FIncreaseHuntedByPlayer__DelegateSignature>	IncreaseHuntedByPlayer;		//Offset: 576	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FIncreaseHuntedByPlayer__DelegateSignature> M_GetIncreaseHuntedByPlayer() const;
	TAssetPtr<class FIncreaseHuntedByPlayer__DelegateSignature>* M_PtrGetIncreaseHuntedByPlayer();
	void M_SetIncreaseHuntedByPlayer(const TAssetPtr<class FIncreaseHuntedByPlayer__DelegateSignature>& value);

	//TArray<struct FST_QuestInfos>	AllAcceptedQuests;		//Offset: 592	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
	TArray<struct FST_QuestInfos> M_GetAllAcceptedQuests() const;
	TArray<struct FST_QuestInfos>* M_PtrGetAllAcceptedQuests();
	void M_SetAllAcceptedQuests(const TArray<struct FST_QuestInfos>& value);

	//class ABP_NPC_C*	TmpNPCReference;		//Offset: 608	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_NPC_C* M_GetTmpNPCReference() const;
	class ABP_NPC_C** M_PtrGetTmpNPCReference();
	void M_SetTmpNPCReference(const class ABP_NPC_C*& value);

	//int32_t	tmpDynastyReputationToAdd;		//Offset: 616	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GettmpDynastyReputationToAdd() const;
	int32_t* M_PtrGettmpDynastyReputationToAdd();
	void M_SettmpDynastyReputationToAdd(const int32_t& value);

	//TArray<class ABP_GoalActor_C*>	GoalActors;		//Offset: 624	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TArray<class ABP_GoalActor_C*> M_GetGoalActors() const;
	TArray<class ABP_GoalActor_C*>* M_PtrGetGoalActors();
	void M_SetGoalActors(const TArray<class ABP_GoalActor_C*>& value);

	//TAssetPtr<class FOnVillageParametersChange__DelegateSignature>	OnVillageParametersChange;		//Offset: 640	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnVillageParametersChange__DelegateSignature> M_GetOnVillageParametersChange() const;
	TAssetPtr<class FOnVillageParametersChange__DelegateSignature>* M_PtrGetOnVillageParametersChange();
	void M_SetOnVillageParametersChange(const TAssetPtr<class FOnVillageParametersChange__DelegateSignature>& value);

	//int32_t	tmpTechnologyBuildingsUnlocked;		//Offset: 656	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	int32_t M_GettmpTechnologyBuildingsUnlocked() const;
	int32_t* M_PtrGettmpTechnologyBuildingsUnlocked();
	void M_SettmpTechnologyBuildingsUnlocked(const int32_t& value);

	//int32_t	tmpBuildingsBuilt;		//Offset: 660	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	int32_t M_GettmpBuildingsBuilt() const;
	int32_t* M_PtrGettmpBuildingsBuilt();
	void M_SettmpBuildingsBuilt(const int32_t& value);

	//TAssetPtr<class FOnTalentsChange__DelegateSignature>	OnTalentsChange;		//Offset: 664	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnTalentsChange__DelegateSignature> M_GetOnTalentsChange() const;
	TAssetPtr<class FOnTalentsChange__DelegateSignature>* M_PtrGetOnTalentsChange();
	void M_SetOnTalentsChange(const TAssetPtr<class FOnTalentsChange__DelegateSignature>& value);

	//int32_t	tmpTalentPointsSpent;		//Offset: 680	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	int32_t M_GettmpTalentPointsSpent() const;
	int32_t* M_PtrGettmpTalentPointsSpent();
	void M_SettmpTalentPointsSpent(const int32_t& value);

	//int32_t	tmpVillagersAssignedToWork;		//Offset: 684	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	int32_t M_GettmpVillagersAssignedToWork() const;
	int32_t* M_PtrGettmpVillagersAssignedToWork();
	void M_SettmpVillagersAssignedToWork(const int32_t& value);

	//TAssetPtr<class FOnVillagersProfessionsChange__DelegateSignature>	OnVillagersProfessionsChange;		//Offset: 688	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnVillagersProfessionsChange__DelegateSignature> M_GetOnVillagersProfessionsChange() const;
	TAssetPtr<class FOnVillagersProfessionsChange__DelegateSignature>* M_PtrGetOnVillagersProfessionsChange();
	void M_SetOnVillagersProfessionsChange(const TAssetPtr<class FOnVillagersProfessionsChange__DelegateSignature>& value);

	//TAssetPtr<class FOnDaySeasonChange__DelegateSignature>	OnDaySeasonChange;		//Offset: 704	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnDaySeasonChange__DelegateSignature> M_GetOnDaySeasonChange() const;
	TAssetPtr<class FOnDaySeasonChange__DelegateSignature>* M_PtrGetOnDaySeasonChange();
	void M_SetOnDaySeasonChange(const TAssetPtr<class FOnDaySeasonChange__DelegateSignature>& value);

	//TAssetPtr<class FOnGoalsTimePass__DelegateSignature>	OnGoalsTimePass;		//Offset: 720	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnGoalsTimePass__DelegateSignature> M_GetOnGoalsTimePass() const;
	TAssetPtr<class FOnGoalsTimePass__DelegateSignature>* M_PtrGetOnGoalsTimePass();
	void M_SetOnGoalsTimePass(const TAssetPtr<class FOnGoalsTimePass__DelegateSignature>& value);

	//TAssetPtr<class FOnArcheryContestUpdate__DelegateSignature>	OnArcheryContestUpdate;		//Offset: 736	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnArcheryContestUpdate__DelegateSignature> M_GetOnArcheryContestUpdate() const;
	TAssetPtr<class FOnArcheryContestUpdate__DelegateSignature>* M_PtrGetOnArcheryContestUpdate();
	void M_SetOnArcheryContestUpdate(const TAssetPtr<class FOnArcheryContestUpdate__DelegateSignature>& value);

	//TAssetPtr<class FOnFoliageRemoved__DelegateSignature>	OnFoliageRemoved;		//Offset: 752	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnFoliageRemoved__DelegateSignature> M_GetOnFoliageRemoved() const;
	TAssetPtr<class FOnFoliageRemoved__DelegateSignature>* M_PtrGetOnFoliageRemoved();
	void M_SetOnFoliageRemoved(const TAssetPtr<class FOnFoliageRemoved__DelegateSignature>& value);

	//TAssetPtr<class FOnQuestCompleted__DelegateSignature>	OnQuestCompleted;		//Offset: 768	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnQuestCompleted__DelegateSignature> M_GetOnQuestCompleted() const;
	TAssetPtr<class FOnQuestCompleted__DelegateSignature>* M_PtrGetOnQuestCompleted();
	void M_SetOnQuestCompleted(const TAssetPtr<class FOnQuestCompleted__DelegateSignature>& value);

	//TAssetPtr<class FOnFlirtWithNPC__DelegateSignature>	OnFlirtWithNPC;		//Offset: 784	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnFlirtWithNPC__DelegateSignature> M_GetOnFlirtWithNPC() const;
	TAssetPtr<class FOnFlirtWithNPC__DelegateSignature>* M_PtrGetOnFlirtWithNPC();
	void M_SetOnFlirtWithNPC(const TAssetPtr<class FOnFlirtWithNPC__DelegateSignature>& value);

	//TMap<TAssetPtr<class UClass>, class UMasterCustomGoal_C*>	CustomGoalsMap;		//Offset: 800	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<TAssetPtr<class UClass>, class UMasterCustomGoal_C*> M_GetCustomGoalsMap() const;
	TMap<TAssetPtr<class UClass>, class UMasterCustomGoal_C*>* M_PtrGetCustomGoalsMap();
	void M_SetCustomGoalsMap(const TMap<TAssetPtr<class UClass>, class UMasterCustomGoal_C*>& value);

	//TAssetPtr<class FOnChunkToolInteraction__DelegateSignature>	OnChunkToolInteraction;		//Offset: 880	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnChunkToolInteraction__DelegateSignature> M_GetOnChunkToolInteraction() const;
	TAssetPtr<class FOnChunkToolInteraction__DelegateSignature>* M_PtrGetOnChunkToolInteraction();
	void M_SetOnChunkToolInteraction(const TAssetPtr<class FOnChunkToolInteraction__DelegateSignature>& value);

	//class ABP_MasterQuestScenography_C*	HugoBloodStains;		//Offset: 896	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_MasterQuestScenography_C* M_GetHugoBloodStains() const;
	class ABP_MasterQuestScenography_C** M_PtrGetHugoBloodStains();
	void M_SetHugoBloodStains(const class ABP_MasterQuestScenography_C*& value);

	//class ABP_MasterQuestScenography_C*	KestrelMess;		//Offset: 904	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_MasterQuestScenography_C* M_GetKestrelMess() const;
	class ABP_MasterQuestScenography_C** M_PtrGetKestrelMess();
	void M_SetKestrelMess(const class ABP_MasterQuestScenography_C*& value);

	//TAssetPtr<class FOnBanditCampCleared__DelegateSignature>	OnBanditCampCleared;		//Offset: 912	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnBanditCampCleared__DelegateSignature> M_GetOnBanditCampCleared() const;
	TAssetPtr<class FOnBanditCampCleared__DelegateSignature>* M_PtrGetOnBanditCampCleared();
	void M_SetOnBanditCampCleared(const TAssetPtr<class FOnBanditCampCleared__DelegateSignature>& value);

	//TAssetPtr<class FNone_574>	AcceptedFamilyQuests;		//Offset: 928	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TAssetPtr<class FNone_574> M_GetAcceptedFamilyQuests() const;
	TAssetPtr<class FNone_574>* M_PtrGetAcceptedFamilyQuests();
	void M_SetAcceptedFamilyQuests(const TAssetPtr<class FNone_574>& value);

	//bool	ShouldWaitForSeasonWithFamilyQuest;		//Offset: 1008	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetShouldWaitForSeasonWithFamilyQuest() const;
	bool* M_PtrGetShouldWaitForSeasonWithFamilyQuest();
	void M_SetShouldWaitForSeasonWithFamilyQuest(const bool& value);

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

	void OnChunkToolInteraction__DelegateSignature(TEnumAsByte<E_ChunkStates> InteractedChunkFinalState);

	void OnBanditCampCleared__DelegateSignature(struct FVector CampLocation);

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

	void FixStartingQuestOnLoad();

	void TryToGenerateTaxesQuest();

	void StartQuestSystem(bool LoadGame);

	void AfterSeasonSkip();

	void ReceiveBeginPlay();

	void AssignQuestToNPC(struct FST_QuestInfos InputPin, struct FString NPCID);

	void FailQuest(int32_t QuestId);

	void Init();

	void UpdateNPCQuestsOnSeasonChange();

	void GenerateChallengeValues(const struct FST_Challange& InputChallenge, struct FST_Challange* OutputChallenge);

	void StartQuest(struct FST_QuestInfos Quest, bool ThroughDialogue_, int32_t* QuestId);

	void CompleteGoal(int32_t QuestId, int32_t ObjectiveID, int32_t GoalID);

	void FindNPCsForTalkGoalAndHideNPCsHeldItem();

	void StartObjective(int32_t QuestId, int32_t ObjectiveID);

	void CompleteObjective(int32_t QuestId, int32_t ObjectiveID, int32_t GoalID);

	void CheckNPCForQuestRestrictions(struct FST_QuestInfos QuestReference, class ABP_NPC_C* NPCReference, bool* NPCValidForQuest);

	void SeasonalGenerateAndAssignQuests();

	void SetMainQuest(struct FName MainQuestID);

	void LoadSaveFileIntoSystem(class USAVE_Game_C* SaveReference);

	void SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference);

	void AssignStoryQuests();

	void GiveQuestReward(int32_t InputPin);

	void CheckNPCForTalk(struct FST_GeneratedQuest_TalkGoalNPCRestrictions TalkRestriction, class ABP_NPC_C* NPCReference, bool* NPCValidForQuest);

	void FailObjective(int32_t QuestId, int32_t ObjectiveID);

	void CheckTechnologyRestriction(struct FST_GeneratedQuestRestrictions_Technology TechnologyRestriction, bool* Value);

	void GenerateQuestRewards(TArray<struct FST_GenerateQuestReward>* GeneratorQuestsRewards, struct FST_QuestReward* GeneratedReward);

	void GenerateQuestObjectives(TArray<struct FST_GenerateObjectivesForQuest>* GeneratorQuestObjectives, TArray<struct FST_QuestObjectives>* GeneratedObjectives, bool* Success);

	void GenerateTaxQuest();

	void CheckDevelopmentStageOnChaptersLoad();

	void FixHeirQuestsOnLoad();

	void FixAlwinQuestlineOnLoad();

	void SeasonalGenerateAndAssignQuest_Cheat(struct FName QuestName);

	void ClearOldSideQuests();

	void RerollTaxQuestOnUniegostDeath();

	void CheckAlwin_sTargetAtGostovia();

	void AssignGeneratedChallenge(class ABP_NPC_C* TmpNPCReference, struct FName RowName);

	void CompleteQuest(int32_t QuestId);

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

	void CancelQuest(int32_t QuestId);

	void FixQuestEmptyGoal(struct FName QuestId, int32_t ObjectiveID, int32_t GoalID, bool* Success, struct FST_MasterGoals* Goal);

	void FixQuestEmptyObjective(struct FName QuestId, int32_t ObjectiveID, bool* Success, struct FST_QuestObjectives* Objective);

	void CheckAndFixDialogueOnLoad(struct FName QuestId, int32_t ObjectiveID, int32_t GoalID, struct FST_Goal_Talk Goal, bool* Fixed, struct FST_Goal_Talk* FixedGoal);

	void SetNPCsObjectivesAndGoals(const struct FST_QuestInfos& ST_QuestInfo);

	void FixAlwinOnVersion0_5_0_8(struct FString SaveGameVersion);

	void FixChapters0_5_1_1(struct FString SaveGameVersion);

	void Stop_All_Follow_for_Quest(int32_t QuestId, bool SeasonChange);

	void UpdateBuildingQuests(TEnumAsByte<E_Goal_BuildTypes> Type, bool Constructed_, struct FName Name, struct FVector Location);

	void SpawnCustomGoalObject(struct FST_Goal_Custom* CustomGoal, struct FName QuestId, int32_t ObjectiveIndex, int32_t GoalIndex, TEnumAsByte<E_GoalState> GoalState);

	void FailGoal(int32_t QuestId, int32_t ObjectiveID, int32_t GoalID);

	void FixUniegostOnVersion_1_0_0_8(struct FString SaveGameVersion);

	void FixAlwinInStoryVI_OnVersion_1_3_0_5(struct FString SaveGameVersion);

	void FixTaxQuestOnVersion_1_1_1_1(struct FString SaveGameVersion);

	void FixAlwinInStoryVII_VIII_UpToVersion_1_3_0_4(struct FString SaveGameVersion);

	void SetKestrelBehavior();

	void CheckQuestByState(struct FName QuestId, bool CheckObjective, int32_t ObjectiveIndex, bool CheckIsDone, TEnumAsByte<E_QuestState> QuestState, TEnumAsByte<E_ObjectiveState> ObjectiveState, bool* Success, bool* found);

	void SeasonalGenerateAndAssignFamilyQuest(bool Cheat, struct FName CheatName);

	void AddSamborFigurinesOnLoad(struct FString SaveGameVersion);

	void FixFindGoalForVengeanceQuest(int32_t QuestId);

	void FixFamilyQuestsNPCsOnLoad(struct FString SaveGameVersion);

	void FixAlwinInStoryIV(struct FString SaveGameVersion);

	void FixForInvalidQuestItemsRemainingInInventory();

#pragma endregion
};
};