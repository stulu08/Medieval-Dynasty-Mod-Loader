#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_AnimalsManager.BP_AnimalsManager_C
// Super: Class Engine.Actor
// Size: 1632
// Size inherited: 544
/////////////////////////////////////////////
namespace UE4 {
class ABP_AnimalsManager_C : public AActor {
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

	//class UMultiTaskThreadPool*	AnimalThreadPool;		//Offset: 568	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UMultiTaskThreadPool* M_GetAnimalThreadPool() const;
	class UMultiTaskThreadPool** M_PtrGetAnimalThreadPool();
	void M_SetAnimalThreadPool(const class UMultiTaskThreadPool*& value);

	//TArray<class ABP_AnimalBase_C*>	WildAnimals;		//Offset: 576	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TArray<class ABP_AnimalBase_C*> M_GetWildAnimals() const;
	TArray<class ABP_AnimalBase_C*>* M_PtrGetWildAnimals();
	void M_SetWildAnimals(const TArray<class ABP_AnimalBase_C*>& value);

	//struct FTimerHandle	TimerCheckAnimals;		//Offset: 592	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetTimerCheckAnimals() const;
	struct FTimerHandle* M_PtrGetTimerCheckAnimals();
	void M_SetTimerCheckAnimals(const struct FTimerHandle& value);

	//float	CheckAnimalsUpdateDelay;		//Offset: 600	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCheckAnimalsUpdateDelay() const;
	float* M_PtrGetCheckAnimalsUpdateDelay();
	void M_SetCheckAnimalsUpdateDelay(const float& value);

	//TArray<class ABP_SpawnPointWildAnimal_C*>	SpawnPointsWildAnimal;		//Offset: 608	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate
	TArray<class ABP_SpawnPointWildAnimal_C*> M_GetSpawnPointsWildAnimal() const;
	TArray<class ABP_SpawnPointWildAnimal_C*>* M_PtrGetSpawnPointsWildAnimal();
	void M_SetSpawnPointsWildAnimal(const TArray<class ABP_SpawnPointWildAnimal_C*>& value);

	//float	DistanceOfBrainActivity;		//Offset: 624	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDistanceOfBrainActivity() const;
	float* M_PtrGetDistanceOfBrainActivity();
	void M_SetDistanceOfBrainActivity(const float& value);

	//float	DistanceOfBrainActivitySquared;		//Offset: 628	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDistanceOfBrainActivitySquared() const;
	float* M_PtrGetDistanceOfBrainActivitySquared();
	void M_SetDistanceOfBrainActivitySquared(const float& value);

	//TMap<TEnumAsByte<E_AnimalType>, int32_t>	HusbandryAnimalsRemovedByEvent;		//Offset: 632	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<TEnumAsByte<E_AnimalType>, int32_t> M_GetHusbandryAnimalsRemovedByEvent() const;
	TMap<TEnumAsByte<E_AnimalType>, int32_t>* M_PtrGetHusbandryAnimalsRemovedByEvent();
	void M_SetHusbandryAnimalsRemovedByEvent(const TMap<TEnumAsByte<E_AnimalType>, int32_t>& value);

	//bool	ShowDebugInfo;		//Offset: 712	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetShowDebugInfo() const;
	bool* M_PtrGetShowDebugInfo();
	void M_SetShowDebugInfo(const bool& value);

	//bool	AllowSpawnAnimals;		//Offset: 713	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetAllowSpawnAnimals() const;
	bool* M_PtrGetAllowSpawnAnimals();
	void M_SetAllowSpawnAnimals(const bool& value);

	//bool	Birds;		//Offset: 714	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBirds() const;
	bool* M_PtrGetBirds();
	void M_SetBirds(const bool& value);

	//float	AnimalsDamageMultiplier;		//Offset: 716	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetAnimalsDamageMultiplier() const;
	float* M_PtrGetAnimalsDamageMultiplier();
	void M_SetAnimalsDamageMultiplier(const float& value);

	//float	AnimalsHPMultiplier;		//Offset: 720	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetAnimalsHPMultiplier() const;
	float* M_PtrGetAnimalsHPMultiplier();
	void M_SetAnimalsHPMultiplier(const float& value);

	//TArray<class ABP_Flock_Fish_C*>	SpawnPointsFishes;		//Offset: 728	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate
	TArray<class ABP_Flock_Fish_C*> M_GetSpawnPointsFishes() const;
	TArray<class ABP_Flock_Fish_C*>* M_PtrGetSpawnPointsFishes();
	void M_SetSpawnPointsFishes(const TArray<class ABP_Flock_Fish_C*>& value);

	//TMap<TEnumAsByte<E_AnimalType>, bool>	WasAnimalSpawnUncovered;		//Offset: 744	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<TEnumAsByte<E_AnimalType>, bool> M_GetWasAnimalSpawnUncovered() const;
	TMap<TEnumAsByte<E_AnimalType>, bool>* M_PtrGetWasAnimalSpawnUncovered();
	void M_SetWasAnimalSpawnUncovered(const TMap<TEnumAsByte<E_AnimalType>, bool>& value);

	//TMap<TEnumAsByte<E_AnimalType>, struct FST_AnimalSpawnerArray>	SpawnPointsWildAnimalCategorized;		//Offset: 824	Size: 80	Flags: Edit, BlueprintVisible
	TMap<TEnumAsByte<E_AnimalType>, struct FST_AnimalSpawnerArray> M_GetSpawnPointsWildAnimalCategorized() const;
	TMap<TEnumAsByte<E_AnimalType>, struct FST_AnimalSpawnerArray>* M_PtrGetSpawnPointsWildAnimalCategorized();
	void M_SetSpawnPointsWildAnimalCategorized(const TMap<TEnumAsByte<E_AnimalType>, struct FST_AnimalSpawnerArray>& value);

	//TAssetPtr<class FNone_513>	AnimalTypesToDisable;		//Offset: 904	Size: 80	Flags: Edit, BlueprintVisible
	TAssetPtr<class FNone_513> M_GetAnimalTypesToDisable() const;
	TAssetPtr<class FNone_513>* M_PtrGetAnimalTypesToDisable();
	void M_SetAnimalTypesToDisable(const TAssetPtr<class FNone_513>& value);

	//TMap<TEnumAsByte<E_FishPoolType>, struct FST_FishSpawnerArray>	SpawnPointsFishCategorized;		//Offset: 984	Size: 80	Flags: Edit, BlueprintVisible
	TMap<TEnumAsByte<E_FishPoolType>, struct FST_FishSpawnerArray> M_GetSpawnPointsFishCategorized() const;
	TMap<TEnumAsByte<E_FishPoolType>, struct FST_FishSpawnerArray>* M_PtrGetSpawnPointsFishCategorized();
	void M_SetSpawnPointsFishCategorized(const TMap<TEnumAsByte<E_FishPoolType>, struct FST_FishSpawnerArray>& value);

	//TArray<class ABP_SpawnPointWildAnimal_C*>	UncoveredSpawners;		//Offset: 1064	Size: 16	Flags: Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance
	TArray<class ABP_SpawnPointWildAnimal_C*> M_GetUncoveredSpawners() const;
	TArray<class ABP_SpawnPointWildAnimal_C*>* M_PtrGetUncoveredSpawners();
	void M_SetUncoveredSpawners(const TArray<class ABP_SpawnPointWildAnimal_C*>& value);

	//TArray<class ABP_Flock_Fish_C*>	UncoveredFishSpawners;		//Offset: 1080	Size: 16	Flags: Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance
	TArray<class ABP_Flock_Fish_C*> M_GetUncoveredFishSpawners() const;
	TArray<class ABP_Flock_Fish_C*>* M_PtrGetUncoveredFishSpawners();
	void M_SetUncoveredFishSpawners(const TArray<class ABP_Flock_Fish_C*>& value);

	//class UMultiThreadTask*	CheckAnimals_Task;		//Offset: 1096	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UMultiThreadTask* M_GetCheckAnimals_Task() const;
	class UMultiThreadTask** M_PtrGetCheckAnimals_Task();
	void M_SetCheckAnimals_Task(const class UMultiThreadTask*& value);

	//TAssetPtr<class FNone_513>	SpawnersToUncover;		//Offset: 1104	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TAssetPtr<class FNone_513> M_GetSpawnersToUncover() const;
	TAssetPtr<class FNone_513>* M_PtrGetSpawnersToUncover();
	void M_SetSpawnersToUncover(const TAssetPtr<class FNone_513>& value);

	//TAssetPtr<class FNone_513>	SpawnersToActivate;		//Offset: 1184	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TAssetPtr<class FNone_513> M_GetSpawnersToActivate() const;
	TAssetPtr<class FNone_513>* M_PtrGetSpawnersToActivate();
	void M_SetSpawnersToActivate(const TAssetPtr<class FNone_513>& value);

	//TAssetPtr<class FNone_513>	SpawnersToDeactivate;		//Offset: 1264	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TAssetPtr<class FNone_513> M_GetSpawnersToDeactivate() const;
	TAssetPtr<class FNone_513>* M_PtrGetSpawnersToDeactivate();
	void M_SetSpawnersToDeactivate(const TAssetPtr<class FNone_513>& value);

	//TAssetPtr<class FNone_513>	FlocksToUncover;		//Offset: 1344	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TAssetPtr<class FNone_513> M_GetFlocksToUncover() const;
	TAssetPtr<class FNone_513>* M_PtrGetFlocksToUncover();
	void M_SetFlocksToUncover(const TAssetPtr<class FNone_513>& value);

	//TAssetPtr<class FNone_513>	FlocksToActivate;		//Offset: 1424	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TAssetPtr<class FNone_513> M_GetFlocksToActivate() const;
	TAssetPtr<class FNone_513>* M_PtrGetFlocksToActivate();
	void M_SetFlocksToActivate(const TAssetPtr<class FNone_513>& value);

	//TAssetPtr<class FNone_513>	FlocksToDeactivate;		//Offset: 1504	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TAssetPtr<class FNone_513> M_GetFlocksToDeactivate() const;
	TAssetPtr<class FNone_513>* M_PtrGetFlocksToDeactivate();
	void M_SetFlocksToDeactivate(const TAssetPtr<class FNone_513>& value);

	//class UMultiTaskMutex*	CheckAnimals_Mutex;		//Offset: 1584	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UMultiTaskMutex* M_GetCheckAnimals_Mutex() const;
	class UMultiTaskMutex** M_PtrGetCheckAnimals_Mutex();
	void M_SetCheckAnimals_Mutex(const class UMultiTaskMutex*& value);

	//bool	ShowVerboseInfo;		//Offset: 1592	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetShowVerboseInfo() const;
	bool* M_PtrGetShowVerboseInfo();
	void M_SetShowVerboseInfo(const bool& value);

	//TArray<struct FST_MultiplayerAnimalRoutineBuilding>	RoutinesBuildings;		//Offset: 1600	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FST_MultiplayerAnimalRoutineBuilding> M_GetRoutinesBuildings() const;
	TArray<struct FST_MultiplayerAnimalRoutineBuilding>* M_PtrGetRoutinesBuildings();
	void M_SetRoutinesBuildings(const TArray<struct FST_MultiplayerAnimalRoutineBuilding>& value);

	//struct FTimerHandle	MultiplayerAnimalsUpdateTimer;		//Offset: 1616	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetMultiplayerAnimalsUpdateTimer() const;
	struct FTimerHandle* M_PtrGetMultiplayerAnimalsUpdateTimer();
	void M_SetMultiplayerAnimalsUpdateTimer(const struct FTimerHandle& value);

	//float	MinDistanceFromPlayersToUpdateAnimals;		//Offset: 1624	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMinDistanceFromPlayersToUpdateAnimals() const;
	float* M_PtrGetMinDistanceFromPlayersToUpdateAnimals();
	void M_SetMinDistanceFromPlayersToUpdateAnimals(const float& value);

	//float	MinDistanceFromPlayersToUpdateAnimalsIfNotLooking;		//Offset: 1628	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMinDistanceFromPlayersToUpdateAnimalsIfNotLooking() const;
	float* M_PtrGetMinDistanceFromPlayersToUpdateAnimalsIfNotLooking();
	void M_SetMinDistanceFromPlayersToUpdateAnimalsIfNotLooking(const float& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimalsManager.BP_AnimalsManager_C");
		return ptr;
	}

#pragma region Functions
	void ExecuteUbergraph_BP_AnimalsManager(int32_t EntryPoint);

	void UpdateMultiplayerAnimals();

	void UpdateSpawners_Complete();

	void StartAnimalsManager(bool LoadGame, bool MainMenu);

	void Init();

	void CheckAnimalsThread();

	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);

	void UpdateOnSeasonChanged();

	void ReceiveBeginPlay();

	void CheckAnimals();

	void StopCheckAnimals();

	void SetNumberOfAnimalsInSpawner(class ABP_SpawnPointWildAnimal_C* SpawnPoint);

	void SetNumberOfAnimalsInSpawners();

	void SpawnHusbandryAnimals(struct FName Name, int32_t Count, TEnumAsByte<E_Ownership> Ownership, bool UseTransform_Home, struct FTransform SpawnTransform, class ABP_MasterBuilding_C* Home, bool RandomAge, bool RandomVariation, int32_t Variation, TArray<class ABP_AnimalBase_C*>* SpawnedAnimals);

	void SpawnHusbandryAnimal(struct FName Name, TEnumAsByte<E_Ownership> Ownership, bool UseTransform_Home, struct FTransform SpawnTransform, class ABP_MasterBuilding_C* Home, bool RandomAge, bool RandomVariation, int32_t Variation, bool Save, bool* Success, class ABP_AnimalBase_C** Actor);

	void RefreshWildAnimalsArray();

	void RemoveRandomCountOfHusbandryAnimalsOnEvent(int32_t MinNumberOfAnimals, int32_t MaxNumberOfAnimals);

	void TeleportToHome(bool SkipPlayerMount);

	void TeleportToHomeLocation(class ABP_AnimalBase_C* Animal);

	void TeleportToLocation(class ABP_AnimalBase_C* Animal, struct FVector Location);

	void LoadSaveFileIntoSystem(class USAVE_Game_C* SaveReference);

	void SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference);

	void SetNumberOfFishesInSpawner(class ABP_Flock_Fish_C* SpawnPoint);

	void SetNumberOfFishesInSpawners();

	void SpawnFishInSpawner(class ABP_Flock_Fish_C* Spawner);

	void FindClosestWildAnimalsPoints(struct FVector Location, float Radius, TArray<class ABP_SpawnPointWildAnimal_C*>* WildAnimalsPoints);

	void FindClosestFishesPoints(struct FVector Location, float Radius, TArray<class ABP_Flock_Fish_C*>* FishesPoints);

	void SpawnAnimalsToNeighborhoodBuilding(TEnumAsByte<E_Ownership> Ownership, struct FString ID, TEnumAsByte<E_AnimalType> Species, struct FName YoungFemale, int32_t YoungFemaleCount, struct FName YoungMale, int32_t YoungMaleCount, struct FName Female, int32_t FemaleCount, struct FName Male, int32_t MaleCount, TArray<class ABP_AnimalBase_C*>* SpawnedAnimals, class ABP_MasterBuilding_C** Building, bool* Success);

	void SpawnAnimalsToNeighborhoodBuildings();

	void RemoveNeighborhoodRedundantAnimals(class ABP_MasterBuilding_C* Building, struct FName Name, int32_t Count);

	void GetAnimalDataByName(struct FName AnimalName, bool* Success, struct FST_Animal* AnimalData);

	void SpawnGroundAnimalsInSpawnerFromSave(class ABP_SpawnPointWildAnimal_C* Spawner);

	void UpdateListOfSpawners();

	void CheckSpawnersID();

	void UpdateSpawners();

	void CheckAvailability();

	void SeasonalUpdateSpawners();

	void SpawnOnDemand(class ABP_SpawnPointWildAnimal_C* Spawner);

	void ReloadAfterSettingsChanged();

	void CheckIsWater(class ABP_SpawnPointWildAnimal_C* SpawnPoint);

	void DisableSpawnersOfType();

	void EnableSpawnersOfType();

	void EnableAllSpawners();

	void DisableAllSpawners();

	void LoadDataSafely(TArray<struct FString>* Data, int32_t Index, struct FString InvalidSubstitution, struct FString* LoadedData);

	void Uncover_Spawner_Animal(class ABP_SpawnPointWildAnimal_C** SpawnPointAnimal, bool* NewUncover);

	void UncoverSpawnerFish(class ABP_Flock_Fish_C** SpawnPointFish, bool* NewUncover);

	void UpdateSpawnersComplete();

	void StopAnimalsManager();

	void InitThreadTask();

	void InitializeMultiplayerAnimalRoutines(bool SpawnAnimals);

	void CalculateAnimalLocation(struct FST_MultiplayerAnimalLocation AnimalLocationData, struct FVector* Location, struct FRotator* Rotation);

	void UpdateMultiplayerAnimalsLocations(bool Force);

#pragma endregion
};
};