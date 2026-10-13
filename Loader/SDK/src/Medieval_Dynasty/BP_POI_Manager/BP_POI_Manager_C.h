#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_POI_Manager.BP_POI_Manager_C
// Super: Class Engine.Actor
// Size: 1033
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

	//TArray<class ABP_POI_Spawner_C*>	NewGamePOIs;		//Offset: 592	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate
	TArray<class ABP_POI_Spawner_C*> M_GetNewGamePOIs() const;
	TArray<class ABP_POI_Spawner_C*>* M_PtrGetNewGamePOIs();
	void M_SetNewGamePOIs(const TArray<class ABP_POI_Spawner_C*>& value);

	//TMap<TEnumAsByte<E_POI_Type>, struct FST_DrawingSpawnersArray>	DrawRestrictions;		//Offset: 608	Size: 80	Flags: Edit, BlueprintVisible
	TMap<TEnumAsByte<E_POI_Type>, struct FST_DrawingSpawnersArray> M_GetDrawRestrictions() const;
	TMap<TEnumAsByte<E_POI_Type>, struct FST_DrawingSpawnersArray>* M_PtrGetDrawRestrictions();
	void M_SetDrawRestrictions(const TMap<TEnumAsByte<E_POI_Type>, struct FST_DrawingSpawnersArray>& value);

	//int32_t	MaxNumberOfActiveSpawners;		//Offset: 688	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetMaxNumberOfActiveSpawners() const;
	int32_t* M_PtrGetMaxNumberOfActiveSpawners();
	void M_SetMaxNumberOfActiveSpawners(const int32_t& value);

	//int32_t	MaxTries;		//Offset: 692	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetMaxTries() const;
	int32_t* M_PtrGetMaxTries();
	void M_SetMaxTries(const int32_t& value);

	//TMap<class ABP_POI_Spawner_C*, TEnumAsByte<E_POI_Type>>	SpawnersCategorized;		//Offset: 696	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TMap<class ABP_POI_Spawner_C*, TEnumAsByte<E_POI_Type>> M_GetSpawnersCategorized() const;
	TMap<class ABP_POI_Spawner_C*, TEnumAsByte<E_POI_Type>>* M_PtrGetSpawnersCategorized();
	void M_SetSpawnersCategorized(const TMap<class ABP_POI_Spawner_C*, TEnumAsByte<E_POI_Type>>& value);

	//TArray<int32_t>	Separator;		//Offset: 776	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<int32_t> M_GetSeparator() const;
	TArray<int32_t>* M_PtrGetSeparator();
	void M_SetSeparator(const TArray<int32_t>& value);

	//TArray<struct FST_SAVE_POI>	TestSave;		//Offset: 792	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FST_SAVE_POI> M_GetTestSave() const;
	TArray<struct FST_SAVE_POI>* M_PtrGetTestSave();
	void M_SetTestSave(const TArray<struct FST_SAVE_POI>& value);

	//TMap<TEnumAsByte<E_POI_Type>, struct FST_SpawnersArray>	CategorizedSpawners;		//Offset: 808	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<TEnumAsByte<E_POI_Type>, struct FST_SpawnersArray> M_GetCategorizedSpawners() const;
	TMap<TEnumAsByte<E_POI_Type>, struct FST_SpawnersArray>* M_PtrGetCategorizedSpawners();
	void M_SetCategorizedSpawners(const TMap<TEnumAsByte<E_POI_Type>, struct FST_SpawnersArray>& value);

	//TArray<class ABP_POI_Spawner_C*>	ActiveSpawners;		//Offset: 888	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TArray<class ABP_POI_Spawner_C*> M_GetActiveSpawners() const;
	TArray<class ABP_POI_Spawner_C*>* M_PtrGetActiveSpawners();
	void M_SetActiveSpawners(const TArray<class ABP_POI_Spawner_C*>& value);

	//TArray<class ABP_POI_Spawner_C*>	ActiveSpawnersHistory;		//Offset: 904	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TArray<class ABP_POI_Spawner_C*> M_GetActiveSpawnersHistory() const;
	TArray<class ABP_POI_Spawner_C*>* M_PtrGetActiveSpawnersHistory();
	void M_SetActiveSpawnersHistory(const TArray<class ABP_POI_Spawner_C*>& value);

	//TAssetPtr<class FNone_513>	DisabledPOIs;		//Offset: 920	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TAssetPtr<class FNone_513> M_GetDisabledPOIs() const;
	TAssetPtr<class FNone_513>* M_PtrGetDisabledPOIs();
	void M_SetDisabledPOIs(const TAssetPtr<class FNone_513>& value);

	//int32_t	LengthOfDeactivation;		//Offset: 1000	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetLengthOfDeactivation() const;
	int32_t* M_PtrGetLengthOfDeactivation();
	void M_SetLengthOfDeactivation(const int32_t& value);

	//TArray<struct FST_SAVE_POI_History>	TestSaveOnlyActive;		//Offset: 1008	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FST_SAVE_POI_History> M_GetTestSaveOnlyActive() const;
	TArray<struct FST_SAVE_POI_History>* M_PtrGetTestSaveOnlyActive();
	void M_SetTestSaveOnlyActive(const TArray<struct FST_SAVE_POI_History>& value);

	//bool	RestartPOI;		//Offset: 1024	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetRestartPOI() const;
	bool* M_PtrGetRestartPOI();
	void M_SetRestartPOI(const bool& value);

	//bool	DisplayWarnings;		//Offset: 1025	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetDisplayWarnings() const;
	bool* M_PtrGetDisplayWarnings();
	void M_SetDisplayWarnings(const bool& value);

	//int32_t	POIsPerTick;		//Offset: 1028	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetPOIsPerTick() const;
	int32_t* M_PtrGetPOIsPerTick();
	void M_SetPOIsPerTick(const int32_t& value);

	//bool	bDisplayPositionInGame;		//Offset: 1032	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetbDisplayPositionInGame() const;
	bool* M_PtrGetbDisplayPositionInGame();
	void M_SetbDisplayPositionInGame(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_POI_Manager.BP_POI_Manager_C");
		return ptr;
	}

#pragma region Functions
	void ExecuteUbergraph_BP_POI_Manager(int32_t EntryPoint);

	void ReceiveTick(float DeltaSeconds);

	void LoadSpawnersAsync(const TMap<struct FGuid, struct FST_SAVE_POI>& SaveMap, const TMap<struct FGuid, struct FST_SAVE_POI_History>& SaveMapOnlyActive, TMap<struct FGuid, struct FST_SAVE_POI_History> SavedMarked, class UMultiTaskBase* Task);

	void StartPOISystem(bool LoadGame, bool MainMenu);

	void SpawnAllActiveSpawners();

	void SaveSpawners(class USAVE_Game_C* SaveGame);

	void LoadSpawners(class USAVE_Game_C* SaveReference, class UMultiTaskBase* Task);

	void SpawnAll();

	void SpawnRandom();

	void Init();

	void SpawnCategoryRestricted();

	void CheckRestrictions(TArray<struct FST_DrawingSpawners>* Restrictions, const TEnumAsByte<E_POI_Type>& SpawnerType, const TEnumAsByte<E_POI_Type> Type, int32_t* NumberOfSpawners);

	void InitCategory(TArray<class ABP_POI_Spawner_C*>* Spawners, TArray<TEnumAsByte<E_POI_Type>>* Type, int32_t TypeIndex);

	void SpawnCategory(TArray<TEnumAsByte<E_POI_Type>>* SpawnerCategory, TArray<class ABP_POI_Spawner_C*>* L_Spawners, const TMap<TEnumAsByte<E_POI_Type>, int32_t>& DrawMap, int32_t RestrictionNumber);

	void TryDespawn(class ABP_POI_Spawner_C* Spawner, bool* Despawned);

	void DespawnAll();

	void UpdatePOI_Array();

	void POI_EnablePreviewAll();

	void POI_DisablePreviewAll();

	void POI_CheckAvailability();

	void CheckPOI_ID();

	void CheckForPotentialErrors();

	void ReloadAfterSettingsChanged();

	void FindClosestAvailablePOIofType(TEnumAsByte<E_POI_Type> PoiType, struct FVector SearchPoint, class ABP_POI_Spawner_C** ClosestPOI, bool* WasFound);

	void FindClosestBanditPOIForQuest(struct FVector SearchPoint, class ABP_POI_Spawner_C** ClosestPOI, bool* WasFound);

	void ForceSpawn(class ABP_POI_Spawner_C* POI, bool Respawn, bool ForceReCheckAvailability);

	void POI_ShowPositionInGame();

	void ForceDespawn(class ABP_POI_Spawner_C* POI);

	void ForceSpawnByPoiId(struct FGuid POIID, TEnumAsByte<E_POI_Type> PoiCategory, bool Respawn, bool ForceReCheckAvailability);

	void ForceDespawnByPoiId(struct FGuid POIID, TEnumAsByte<E_POI_Type> PoiCategory);

	void GetPoiById(struct FGuid ID, TEnumAsByte<E_POI_Type> PoiType, class ABP_POI_Spawner_C** POI, bool* found);

	void CanSpawnPOI(class ABP_POI_Spawner_C* POI, bool* CanSpawn);

	void SpawnOnNewGame();

	void CanSpawnAnyOfType(TEnumAsByte<E_POI_Type> PoiType, bool* CanSpawnAny);

	void FixSomePOIsNPCs(struct FGuid POI_ID);

	void SpawnAdditionalPoisByCategory(TEnumAsByte<E_POI_Type> PoiType, int32_t NumberToSpawn);

	void DisablePoiByID(struct FGuid IdToDisable);

	void DisablePoi(class ABP_POI_Spawner_C* POI);

	void EnablePoiById(struct FGuid POIID);

	void EnablePoi(class ABP_POI_Spawner_C* POI);

	void DisableAndDespawnPoi(struct FGuid POIID);

	void Is_Poi_Eligible_for_Spawn(class ABP_POI_Spawner_C* POI, bool* Eligible);

	void IsMP_MapEditor(bool* IsMP_Map);

	void SpawnOnSaveLoad(struct FString SaveGameVersion);

	void SpawnLoadNew(struct FString SaveGameVersion);

	void ForceReloadLoad(struct FString SaveGameVersion);

#pragma endregion
};
};