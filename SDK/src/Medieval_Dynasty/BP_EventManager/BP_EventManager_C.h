#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_EventManager.BP_EventManager_C
// Super: Class Engine.Actor
// Size: 648
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

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EventManager.BP_EventManager_C");
		return ptr;
	}

#pragma region Functions
	void ExecuteUbergraph_BP_EventManager(int32_t EntryPoint);

	void Init(bool MainMenu);

	void OnSeasonChanged();

	void StartEventSystem(bool LoadGame, bool MainMenu);

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

#pragma endregion
};
};