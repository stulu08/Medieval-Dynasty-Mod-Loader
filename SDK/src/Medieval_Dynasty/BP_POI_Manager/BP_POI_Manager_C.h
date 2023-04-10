#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_POI_Manager.BP_POI_Manager_C
// Super: Class Engine.Actor
// Size: 936
// Size inherited: 544
/////////////////////////////////////////////
namespace UE4 {
class ABP_POI_Manager_C : public AActor {
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

	//bool	Preview;		//Offset: 560	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetPreview() const;
	bool* M_PtrGetPreview();
	void M_SetPreview(const bool& value);

	//class ABP_SystemsManager_C*	SystemsManagerReference;		//Offset: 568	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_SystemsManager_C* M_GetSystemsManagerReference() const;
	class ABP_SystemsManager_C** M_PtrGetSystemsManagerReference();
	void M_SetSystemsManagerReference(const class ABP_SystemsManager_C*& value);

	//TArray<class ABP_POI_Spawner_C*>	POI_Spawners;		//Offset: 576	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate
	TArray<class ABP_POI_Spawner_C*> M_GetPOI_Spawners() const;
	TArray<class ABP_POI_Spawner_C*>* M_PtrGetPOI_Spawners();
	void M_SetPOI_Spawners(const TArray<class ABP_POI_Spawner_C*>& value);

	//TMap<TEnumAsByte<E_POI_Type>, struct FST_DrawingSpawnersArray>	DrawRestrictions;		//Offset: 592	Size: 80	Flags: Edit, BlueprintVisible
	TMap<TEnumAsByte<E_POI_Type>, struct FST_DrawingSpawnersArray> M_GetDrawRestrictions() const;
	TMap<TEnumAsByte<E_POI_Type>, struct FST_DrawingSpawnersArray>* M_PtrGetDrawRestrictions();
	void M_SetDrawRestrictions(const TMap<TEnumAsByte<E_POI_Type>, struct FST_DrawingSpawnersArray>& value);

	//int32_t	MaxNumberOfActiveSpawners;		//Offset: 672	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetMaxNumberOfActiveSpawners() const;
	int32_t* M_PtrGetMaxNumberOfActiveSpawners();
	void M_SetMaxNumberOfActiveSpawners(const int32_t& value);

	//int32_t	MaxTries;		//Offset: 676	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetMaxTries() const;
	int32_t* M_PtrGetMaxTries();
	void M_SetMaxTries(const int32_t& value);

	//TMap<class ABP_POI_Spawner_C*, TEnumAsByte<E_POI_Type>>	SpawnersCategorized;		//Offset: 680	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TMap<class ABP_POI_Spawner_C*, TEnumAsByte<E_POI_Type>> M_GetSpawnersCategorized() const;
	TMap<class ABP_POI_Spawner_C*, TEnumAsByte<E_POI_Type>>* M_PtrGetSpawnersCategorized();
	void M_SetSpawnersCategorized(const TMap<class ABP_POI_Spawner_C*, TEnumAsByte<E_POI_Type>>& value);

	//TArray<int32_t>	Separator;		//Offset: 760	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<int32_t> M_GetSeparator() const;
	TArray<int32_t>* M_PtrGetSeparator();
	void M_SetSeparator(const TArray<int32_t>& value);

	//TArray<struct FST_SAVE_POI>	TestSave;		//Offset: 776	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FST_SAVE_POI> M_GetTestSave() const;
	TArray<struct FST_SAVE_POI>* M_PtrGetTestSave();
	void M_SetTestSave(const TArray<struct FST_SAVE_POI>& value);

	//TMap<TEnumAsByte<E_POI_Type>, struct FST_SpawnersArray>	CategorizedSpawners;		//Offset: 792	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<TEnumAsByte<E_POI_Type>, struct FST_SpawnersArray> M_GetCategorizedSpawners() const;
	TMap<TEnumAsByte<E_POI_Type>, struct FST_SpawnersArray>* M_PtrGetCategorizedSpawners();
	void M_SetCategorizedSpawners(const TMap<TEnumAsByte<E_POI_Type>, struct FST_SpawnersArray>& value);

	//TArray<class ABP_POI_Spawner_C*>	ActiveSpawners;		//Offset: 872	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TArray<class ABP_POI_Spawner_C*> M_GetActiveSpawners() const;
	TArray<class ABP_POI_Spawner_C*>* M_PtrGetActiveSpawners();
	void M_SetActiveSpawners(const TArray<class ABP_POI_Spawner_C*>& value);

	//TArray<class ABP_POI_Spawner_C*>	ActiveSpawnersHistory;		//Offset: 888	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TArray<class ABP_POI_Spawner_C*> M_GetActiveSpawnersHistory() const;
	TArray<class ABP_POI_Spawner_C*>* M_PtrGetActiveSpawnersHistory();
	void M_SetActiveSpawnersHistory(const TArray<class ABP_POI_Spawner_C*>& value);

	//int32_t	LengthOfDeactivation;		//Offset: 904	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetLengthOfDeactivation() const;
	int32_t* M_PtrGetLengthOfDeactivation();
	void M_SetLengthOfDeactivation(const int32_t& value);

	//TArray<struct FST_SAVE_POI_History>	TestSaveOnlyActive;		//Offset: 912	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FST_SAVE_POI_History> M_GetTestSaveOnlyActive() const;
	TArray<struct FST_SAVE_POI_History>* M_PtrGetTestSaveOnlyActive();
	void M_SetTestSaveOnlyActive(const TArray<struct FST_SAVE_POI_History>& value);

	//bool	RestartPOI;		//Offset: 928	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetRestartPOI() const;
	bool* M_PtrGetRestartPOI();
	void M_SetRestartPOI(const bool& value);

	//bool	DisplayWarnings;		//Offset: 929	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetDisplayWarnings() const;
	bool* M_PtrGetDisplayWarnings();
	void M_SetDisplayWarnings(const bool& value);

	//int32_t	POIsPerTick;		//Offset: 932	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetPOIsPerTick() const;
	int32_t* M_PtrGetPOIsPerTick();
	void M_SetPOIsPerTick(const int32_t& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_POI_Manager.BP_POI_Manager_C");
		return ptr;
	}

#pragma region Functions
	void ExecuteUbergraph_BP_POI_Manager(int32_t EntryPoint);

	void LoadSpawnersAsync(const TMap<struct FGuid, struct FST_SAVE_POI>& SaveMap, const TMap<struct FGuid, struct FST_SAVE_POI_History>& SaveMapOnlyActive, class UMultiTaskBase* Task);

	void StartPOISystem(bool LoadGame, bool MainMenu);

	void SpawnAllActiveSpawners();

	void SaveSpawners(class USAVE_Game_C* SaveGame);

	void LoadSpawners(class USAVE_Game_C* SaveReference, class UMultiTaskBase* Task);

	void SpawnRandom();

	void SpawnCategoryRestricted();

	void CheckRestrictions(TArray<struct FST_DrawingSpawners>* Restrictions, const TEnumAsByte<E_POI_Type>& SpawnerType, const TEnumAsByte<E_POI_Type> Type, int32_t* NumberOfSpawners);

	void Init();

	void InitCategory(TArray<class ABP_POI_Spawner_C*>* Spawners, TArray<TEnumAsByte<E_POI_Type>>* Type, int32_t TypeIndex);

	void SpawnCategory(TArray<TEnumAsByte<E_POI_Type>>* SpawnerCategory, TArray<class ABP_POI_Spawner_C*>* L_Spawners, const TMap<TEnumAsByte<E_POI_Type>, int32_t>& DrawMap, int32_t RestrictionNumber);

	void Despawn(class ABP_POI_Spawner_C* Spawner, bool* Despawned);

	void DespawnAll();

	void UpdatePOI_Array();

	void POI_EnablePreviewAll();

	void POI_DisablePreviewAll();

	void POI_CheckAvailability();

	void CheckPOI_ID();

	void CheckForPotentialErrors();

	void ReloadAfterSettingsChanged();

	void FindClosestAvailablePOIofType(TEnumAsByte<E_POI_Type> POIType, struct FVector SearchPoint, class ABP_POI_Spawner_C** ClosestPOI, bool* WasFound);

	void FindClosestBanditPOIForQuest(struct FVector SearchPoint, class ABP_POI_Spawner_C** ClosestPOI, bool* WasFound);

	void Force_Spawn(class ABP_POI_Spawner_C* POI, bool Respawn);

#pragma endregion
};
};