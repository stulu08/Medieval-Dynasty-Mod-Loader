#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_EventManager.BP_EventManager_C
// Super: Class Engine.Actor
// Size: 784
// Size inherited: 544
/////////////////////////////////////////////
namespace UE4 {
class ABP_EventManager_C : public AActor {
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

	//TArray<struct FDataTableRowHandle>	EventQueue;		//Offset: 568	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FDataTableRowHandle> M_GetEventQueue() const;
	TArray<struct FDataTableRowHandle>* M_PtrGetEventQueue();
	void M_SetEventQueue(const TArray<struct FDataTableRowHandle>& value);

	//TArray<struct FName>	LastEvents;		//Offset: 584	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FName> M_GetLastEvents() const;
	TArray<struct FName>* M_PtrGetLastEvents();
	void M_SetLastEvents(const TArray<struct FName>& value);

	//bool	IsEventForThisSeason;		//Offset: 600	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsEventForThisSeason() const;
	bool* M_PtrGetIsEventForThisSeason();
	void M_SetIsEventForThisSeason(const bool& value);

	//int32_t	EventNumber;		//Offset: 604	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetEventNumber() const;
	int32_t* M_PtrGetEventNumber();
	void M_SetEventNumber(const int32_t& value);

	//float	EventHappenChance;		//Offset: 608	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetEventHappenChance() const;
	float* M_PtrGetEventHappenChance();
	void M_SetEventHappenChance(const float& value);

	//TArray<struct FST_EventHistory_Main>	EventsHistory;		//Offset: 616	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
	TArray<struct FST_EventHistory_Main> M_GetEventsHistory() const;
	TArray<struct FST_EventHistory_Main>* M_PtrGetEventsHistory();
	void M_SetEventsHistory(const TArray<struct FST_EventHistory_Main>& value);

	//TArray<class ABP_NPC_C*>	SpecyficNPCs;		//Offset: 632	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TArray<class ABP_NPC_C*> M_GetSpecyficNPCs() const;
	TArray<class ABP_NPC_C*>* M_PtrGetSpecyficNPCs();
	void M_SetSpecyficNPCs(const TArray<class ABP_NPC_C*>& value);

	//TArray<struct FST_ItemsToRemove>	ItemFoundIn;		//Offset: 648	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
	TArray<struct FST_ItemsToRemove> M_GetItemFoundIn() const;
	TArray<struct FST_ItemsToRemove>* M_PtrGetItemFoundIn();
	void M_SetItemFoundIn(const TArray<struct FST_ItemsToRemove>& value);

	//TArray<struct FE_PlayerVote>	VotingPlayers;		//Offset: 664	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FE_PlayerVote> M_GetVotingPlayers() const;
	TArray<struct FE_PlayerVote>* M_PtrGetVotingPlayers();
	void M_SetVotingPlayers(const TArray<struct FE_PlayerVote>& value);

	//TAssetPtr<class FOnPlayerVoted__DelegateSignature>	OnPlayerVoted;		//Offset: 680	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnPlayerVoted__DelegateSignature> M_GetOnPlayerVoted() const;
	TAssetPtr<class FOnPlayerVoted__DelegateSignature>* M_PtrGetOnPlayerVoted();
	void M_SetOnPlayerVoted(const TAssetPtr<class FOnPlayerVoted__DelegateSignature>& value);

	//TAssetPtr<class FRemovePlayerVote__DelegateSignature>	RemovePlayerVote;		//Offset: 696	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FRemovePlayerVote__DelegateSignature> M_GetRemovePlayerVote() const;
	TAssetPtr<class FRemovePlayerVote__DelegateSignature>* M_PtrGetRemovePlayerVote();
	void M_SetRemovePlayerVote(const TAssetPtr<class FRemovePlayerVote__DelegateSignature>& value);

	//struct FST_Event_PlayerMultipliers	PlayersMultiplliers;		//Offset: 712	Size: 16	Flags: Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
	struct FST_Event_PlayerMultipliers M_GetPlayersMultiplliers() const;
	struct FST_Event_PlayerMultipliers* M_PtrGetPlayersMultiplliers();
	void M_SetPlayersMultiplliers(const struct FST_Event_PlayerMultipliers& value);

	//TAssetPtr<class FOnHostSelectedOption__DelegateSignature>	OnHostSelectedOption;		//Offset: 728	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnHostSelectedOption__DelegateSignature> M_GetOnHostSelectedOption() const;
	TAssetPtr<class FOnHostSelectedOption__DelegateSignature>* M_PtrGetOnHostSelectedOption();
	void M_SetOnHostSelectedOption(const TAssetPtr<class FOnHostSelectedOption__DelegateSignature>& value);

	//TAssetPtr<class FOnPlayerMultipliersChanged__DelegateSignature>	OnPlayerMultipliersChanged;		//Offset: 744	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnPlayerMultipliersChanged__DelegateSignature> M_GetOnPlayerMultipliersChanged() const;
	TAssetPtr<class FOnPlayerMultipliersChanged__DelegateSignature>* M_PtrGetOnPlayerMultipliersChanged();
	void M_SetOnPlayerMultipliersChanged(const TAssetPtr<class FOnPlayerMultipliersChanged__DelegateSignature>& value);

	//int32_t	SelectedEventButtonIndex;		//Offset: 760	Size: 4	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
	int32_t M_GetSelectedEventButtonIndex() const;
	int32_t* M_PtrGetSelectedEventButtonIndex();
	void M_SetSelectedEventButtonIndex(const int32_t& value);

	//TAssetPtr<class FWindowCanBeClosed__DelegateSignature>	WindowCanBeClosed;		//Offset: 768	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FWindowCanBeClosed__DelegateSignature> M_GetWindowCanBeClosed() const;
	TAssetPtr<class FWindowCanBeClosed__DelegateSignature>* M_PtrGetWindowCanBeClosed();
	void M_SetWindowCanBeClosed(const TAssetPtr<class FWindowCanBeClosed__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EventManager.BP_EventManager_C");
		return ptr;
	}

#pragma region Functions
	void OnPlayerVoted__DelegateSignature(struct FE_PlayerVote PlayerVote);

	void RemovePlayerVote__DelegateSignature(struct FE_PlayerVote PlayerVote);

	void OnHostSelectedOption__DelegateSignature(int32_t ChoiceIndex);

	void OnPlayerMultipliersChanged__DelegateSignature();

	void WindowCanBeClosed__DelegateSignature();

	void ExecuteUbergraph_BP_EventManager(int32_t EntryPoint);

	void ListStuff();

	void Init(bool MainMenu);

	void StartEventSystem(bool LoadGame, bool MainMenu);

	void ReplicateRestrictions_Multicast(const TArray<struct FST_RestrictionData>& RestrictionData);

	void ReplicateConsequences_Multicast(int32_t ButtonIndex, const TArray<struct FST_PlayerEffectData>& PlayerEffectData, const TArray<struct FST_NPCEffectData>& NPCEffectData, const TArray<struct FST_OtherEffectData>& OtherEffectData, struct FST_KingEffectData KingEffectData);

	void OnEventSelected_Multicast(int32_t ChoiceIndex);

	void OnPlayerVoted_Multicast(struct FE_PlayerVote PlayerVote);

	void ToggleEventScreen_Multicast(bool CheatStart, bool CheatEnd, struct FName EventName);

	void AssignEventOnSeasonChange();

	void CheckEventsAvilable(bool* CanStart);

	void CheckEventCanFire(struct FST_SeasonEvent Event, bool* CanHappen);

	void RestrictionAnimals(struct FST_EventRestrictions Restriction, bool* CanHappen);

	void RestrictionNPC(struct FST_EventRestrictions Restriction, bool* CanHappen);

	void RestrictionBuildings(struct FST_EventRestrictions Restriction, bool* CanHappen);

	void RestrictionFields(struct FST_EventRestrictions Restriction, bool* CanHappen);

	void RestrictionSeason(struct FST_EventRestrictions Restriction, bool* CanHappen);

	void RestrictionPlayer(struct FST_EventRestrictions Restriction, bool* CanHappen);

	void ExecuteEventEffect(int32_t ButtonIndex, const struct FST_SeasonEvent& Event, struct FText* Description);

	void RestrictionTime(struct FST_EventRestrictions Restriction, bool* CanHappen);

	void FireEventCheat(const struct FName& EventName);

	void GetNumberOfBuildBuildings(int32_t* NumberOfBuildBuildings);

	void CheckDifficulty(TEnumAsByte<E_EventDifficulty>* Difficulty);

	void SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference);

	void LoadSaveFileIntoSystem(class USAVE_Game_C* SaveReference);

	void SkillRestriction(struct FST_EventButtonRestrictions Restrictions, bool* Available);

	void VillageRestriction(struct FST_EventButtonRestrictions Restrictions, bool* Available);

	void ItemRestriction(struct FST_EventButtonRestrictions Restrictions, bool* Available);

	void RemoveRosourcesFromRestrictions(const struct FST_EventButtonRestrictions& EventButtonRestrictions, TArray<struct FST_EventHistory_Consequences>* EventConsequences);

	void PlayerVoted(struct FE_PlayerVote PlayerVote);

	void OnRep_PlayerMultiplliers();

	void SetPlayerMultipliers(struct FST_Event_PlayerMultipliers PlayerMultiplliers);

	void ExecuteEventEffect_Client(int32_t ButtonIndex, const struct FST_SeasonEvent& Event, const TArray<struct FST_PlayerEffectData>& PlayerEffectData, const TArray<struct FST_NPCEffectData>& NPCEffectData, TArray<struct FST_OtherEffectData>* OtherEffectData, struct FST_KingEffectData KingEffectData, struct FText* Description);

	void ConvertNPCNameToIndex(TEnumAsByte<E_Sex> sex, struct FString Name, int32_t* NameIndex);

	void ConvertIndexToNPCName(TEnumAsByte<E_Sex> sex, int32_t Index, struct FName* Name);

	void AddNPCEffect(const TArray<struct FST_NPCEffectData>& NPCEffectData, struct FST_NPCEffectData NPCEffectNew);

	void GetNPCEffectByEffectType(const TArray<struct FST_NPCEffectData>& NPCEffectData, TEnumAsByte<E_EventEffect_NPCType> NPCEffectType, bool* found, struct FST_NPCEffectData* NPCEffect);

	void GetPlayerEffectByEffectType(const TArray<struct FST_PlayerEffectData>& PlayerEffectData, TEnumAsByte<E_EventEffect_PlayerType> PlayerEffectType, int32_t Value, bool* found, struct FST_PlayerEffectData* PlayerEffect);

	void GetSkillLevelForRestriction(struct FST_EventButtonRestrictions Restrictions, int32_t* Skill);

	void GetOtherEffectByEffectType(const TArray<struct FST_OtherEffectData>& OtherEffectData, TEnumAsByte<E_EventEffect_VillageType> OtherEffectType, bool* found, struct FST_OtherEffectData* OtherEffect);

	void TryToUnlockCrests(struct FName EventId);

	void GatherRestrictionDataForReplication(const TArray<struct FST_EventButtons>& ST_EventButtons, TArray<struct FST_RestrictionData>* GatheredData);

	void OnRep_SelectedEventButtonIndex();

	void ResetSelectedEventButtonIndex();

	void SearchInventoryForItems(class AActor* ActorWithInventory, int32_t Index, const struct FST_ItemRestriction& Items, TArray<bool>* HasAll, bool* FoundAll);

#pragma endregion
};
};