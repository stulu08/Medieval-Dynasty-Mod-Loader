#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_DataManager.BP_DataManager_C
// Super: Class Engine.Actor
// Size: 856
// Size inherited: 544
/////////////////////////////////////////////
namespace UE4 {
class ABP_DataManager_C : public AActor {
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

	//TArray<struct FST_BuildingList>	ListOfBuildings;		//Offset: 560	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FST_BuildingList> M_GetListOfBuildings() const;
	TArray<struct FST_BuildingList>* M_PtrGetListOfBuildings();
	void M_SetListOfBuildings(const TArray<struct FST_BuildingList>& value);

	//class ABP_SystemsManager_C*	SystemsManagerReference;		//Offset: 576	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_SystemsManager_C* M_GetSystemsManagerReference() const;
	class ABP_SystemsManager_C** M_PtrGetSystemsManagerReference();
	void M_SetSystemsManagerReference(const class ABP_SystemsManager_C*& value);

	//bool	ShowLogs;		//Offset: 584	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetShowLogs() const;
	bool* M_PtrGetShowLogs();
	void M_SetShowLogs(const bool& value);

	//TArray<struct FST_FurnitureList>	ListOfFurniture;		//Offset: 592	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FST_FurnitureList> M_GetListOfFurniture() const;
	TArray<struct FST_FurnitureList>* M_PtrGetListOfFurniture();
	void M_SetListOfFurniture(const TArray<struct FST_FurnitureList>& value);

	//TArray<struct FST_FieldList>	ListOfFields;		//Offset: 608	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FST_FieldList> M_GetListOfFields() const;
	TArray<struct FST_FieldList>* M_PtrGetListOfFields();
	void M_SetListOfFields(const TArray<struct FST_FieldList>& value);

	//TArray<struct FST_CharacterList>	ListOfNPC;		//Offset: 624	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FST_CharacterList> M_GetListOfNPC() const;
	TArray<struct FST_CharacterList>* M_PtrGetListOfNPC();
	void M_SetListOfNPC(const TArray<struct FST_CharacterList>& value);

	//TArray<struct FST_AnimalList>	ListOfAnimal;		//Offset: 640	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FST_AnimalList> M_GetListOfAnimal() const;
	TArray<struct FST_AnimalList>* M_PtrGetListOfAnimal();
	void M_SetListOfAnimal(const TArray<struct FST_AnimalList>& value);

	//TArray<struct FST_SplineStructureList>	ListOfSplineStructures;		//Offset: 656	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FST_SplineStructureList> M_GetListOfSplineStructures() const;
	TArray<struct FST_SplineStructureList>* M_PtrGetListOfSplineStructures();
	void M_SetListOfSplineStructures(const TArray<struct FST_SplineStructureList>& value);

	//TAssetPtr<class FOnPlayerPopulationChange__DelegateSignature>	OnPlayerPopulationChange;		//Offset: 672	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnPlayerPopulationChange__DelegateSignature> M_GetOnPlayerPopulationChange() const;
	TAssetPtr<class FOnPlayerPopulationChange__DelegateSignature>* M_PtrGetOnPlayerPopulationChange();
	void M_SetOnPlayerPopulationChange(const TAssetPtr<class FOnPlayerPopulationChange__DelegateSignature>& value);

	//TAssetPtr<class FOnPlayerBuildingsChange__DelegateSignature>	OnPlayerBuildingsChange;		//Offset: 688	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnPlayerBuildingsChange__DelegateSignature> M_GetOnPlayerBuildingsChange() const;
	TAssetPtr<class FOnPlayerBuildingsChange__DelegateSignature>* M_PtrGetOnPlayerBuildingsChange();
	void M_SetOnPlayerBuildingsChange(const TAssetPtr<class FOnPlayerBuildingsChange__DelegateSignature>& value);

	//TAssetPtr<class FOnPlayerAnimalsChange__DelegateSignature>	OnPlayerAnimalsChange;		//Offset: 704	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnPlayerAnimalsChange__DelegateSignature> M_GetOnPlayerAnimalsChange() const;
	TAssetPtr<class FOnPlayerAnimalsChange__DelegateSignature>* M_PtrGetOnPlayerAnimalsChange();
	void M_SetOnPlayerAnimalsChange(const TAssetPtr<class FOnPlayerAnimalsChange__DelegateSignature>& value);

	//TArray<struct FGuid>	ChangedItems;		//Offset: 720	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FGuid> M_GetChangedItems() const;
	TArray<struct FGuid>* M_PtrGetChangedItems();
	void M_SetChangedItems(const TArray<struct FGuid>& value);

	//TArray<struct FST_RoadList>	ListOfRoads;		//Offset: 736	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FST_RoadList> M_GetListOfRoads() const;
	TArray<struct FST_RoadList>* M_PtrGetListOfRoads();
	void M_SetListOfRoads(const TArray<struct FST_RoadList>& value);

	//TArray<class ABP_BuildingRestrictionArea_C*>	RestrictionAreas;		//Offset: 752	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate
	TArray<class ABP_BuildingRestrictionArea_C*> M_GetRestrictionAreas() const;
	TArray<class ABP_BuildingRestrictionArea_C*>* M_PtrGetRestrictionAreas();
	void M_SetRestrictionAreas(const TArray<class ABP_BuildingRestrictionArea_C*>& value);

	//TArray<struct FST_GateList>	ListOfGates;		//Offset: 768	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FST_GateList> M_GetListOfGates() const;
	TArray<struct FST_GateList>* M_PtrGetListOfGates();
	void M_SetListOfGates(const TArray<struct FST_GateList>& value);

	//class UTask_CalculateBoostDistance_C*	NpcsBoostTask;		//Offset: 784	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UTask_CalculateBoostDistance_C* M_GetNpcsBoostTask() const;
	class UTask_CalculateBoostDistance_C** M_PtrGetNpcsBoostTask();
	void M_SetNpcsBoostTask(const class UTask_CalculateBoostDistance_C*& value);

	//class UTask_CalculateBoostDistance_Async_C*	AsyncBoostTask;		//Offset: 792	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UTask_CalculateBoostDistance_Async_C* M_GetAsyncBoostTask() const;
	class UTask_CalculateBoostDistance_Async_C** M_PtrGetAsyncBoostTask();
	void M_SetAsyncBoostTask(const class UTask_CalculateBoostDistance_Async_C*& value);

	//int32_t	NPCsPerTick;		//Offset: 800	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetNPCsPerTick() const;
	int32_t* M_PtrGetNPCsPerTick();
	void M_SetNPCsPerTick(const int32_t& value);

	//int32_t	AnimalsPerTick;		//Offset: 804	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetAnimalsPerTick() const;
	int32_t* M_PtrGetAnimalsPerTick();
	void M_SetAnimalsPerTick(const int32_t& value);

	//int32_t	PlayerBuildingsPerTick;		//Offset: 808	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetPlayerBuildingsPerTick() const;
	int32_t* M_PtrGetPlayerBuildingsPerTick();
	void M_SetPlayerBuildingsPerTick(const int32_t& value);

	//int32_t	FieldsOrchardsPerTick;		//Offset: 812	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetFieldsOrchardsPerTick() const;
	int32_t* M_PtrGetFieldsOrchardsPerTick();
	void M_SetFieldsOrchardsPerTick(const int32_t& value);

	//int32_t	SplinesPerTick;		//Offset: 816	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetSplinesPerTick() const;
	int32_t* M_PtrGetSplinesPerTick();
	void M_SetSplinesPerTick(const int32_t& value);

	//int32_t	FurnituresPerTick;		//Offset: 820	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetFurnituresPerTick() const;
	int32_t* M_PtrGetFurnituresPerTick();
	void M_SetFurnituresPerTick(const int32_t& value);

	//int32_t	RoadsPerTick;		//Offset: 824	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetRoadsPerTick() const;
	int32_t* M_PtrGetRoadsPerTick();
	void M_SetRoadsPerTick(const int32_t& value);

	//int32_t	GatesPerTick;		//Offset: 828	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetGatesPerTick() const;
	int32_t* M_PtrGetGatesPerTick();
	void M_SetGatesPerTick(const int32_t& value);

	//int32_t	ItemsPerTick;		//Offset: 832	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetItemsPerTick() const;
	int32_t* M_PtrGetItemsPerTick();
	void M_SetItemsPerTick(const int32_t& value);

	//TArray<struct FST_BridgeList>	ListOfBridges;		//Offset: 840	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FST_BridgeList> M_GetListOfBridges() const;
	TArray<struct FST_BridgeList>* M_PtrGetListOfBridges();
	void M_SetListOfBridges(const TArray<struct FST_BridgeList>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DataManager.BP_DataManager_C");
		return ptr;
	}

#pragma region Functions
	void OnPlayerPopulationChange__DelegateSignature();

	void OnPlayerBuildingsChange__DelegateSignature();

	void OnPlayerAnimalsChange__DelegateSignature();

	void ExecuteUbergraph_BP_DataManager(int32_t EntryPoint);

	void StartDistanceCheckTask();

	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);

	void ReceiveBeginPlay();

	void LoadItems(class USAVE_Game_C* Save, class UMultiTaskBase* Task);

	void LoadFurniture(class USAVE_Game_C* Save, class UMultiTaskBase* Task);

	void LoadGates(class USAVE_Game_C* Save, class UMultiTaskBase* Task);

	void LoadRoads(class USAVE_Game_C* Save, class UMultiTaskBase* Task, bool Old);

	void LoadSplines(class USAVE_Game_C* Save, class UMultiTaskBase* Task, bool Old);

	void LoadFieldsOrchards(class USAVE_Game_C* Save, class UMultiTaskBase* Task);

	void LoadPlayerBuildings(class USAVE_Game_C* Save, class UMultiTaskBase* Task);

	void LoadAnimals(class USAVE_Game_C* Save, class UMultiTaskBase* Task);

	void LoadNPCs(class USAVE_Game_C* Save, class UMultiTaskBase* Task);

	void AddBuilding(TEnumAsByte<E_Ownership> Ownership, class ABP_MasterBuilding_C*& Building);

	void RemoveBuilding(class ABP_MasterBuilding_C*& Building);

	void SwapBuilding(TEnumAsByte<E_Ownership> to, class ABP_MasterBuilding_C*& Building);

	void DamageBuildings(TEnumAsByte<E_Ownership> Ownership, int32_t NumberOfBuildings, float DestructionIntensity, TArray<class ABP_MasterBuilding_C*>* Buildings);

	void AddField(TEnumAsByte<E_Ownership> Ownership, class ABP_MasterField_C*& Field);

	void RemoveField(class ABP_MasterField_C*& Field);

	void SwapField(TEnumAsByte<E_Ownership> to, class ABP_MasterField_C*& NPC);

	void SeasonalUpdateFields();

	void DamageFields(TEnumAsByte<E_Ownership> Ownership, int32_t NumberOfFieldsToDamage, float Intensity, TArray<class ABP_MasterField_C*>* DamagedFields);

	void UpdateBuildingsRelations(TEnumAsByte<E_Ownership> Ownership);

	void SortDependentFields(class ABP_MasterBuilding_C* Building, TArray<float>* Distance);

	void AddFurniture(TEnumAsByte<E_Ownership> Ownership, class ABP_MasterFurniture_C*& Furniture);

	void RemoveFurniture(class ABP_MasterFurniture_C*& Furniture);

	void SwapFurniture(TEnumAsByte<E_Ownership> to, class ABP_MasterFurniture_C*& Furniture);

	void GetBuildings(TEnumAsByte<E_Ownership> Ownership, TEnumAsByte<E_Buildings> BuildingCategory, TEnumAsByte<E_BuildingStatus> BuildingStatus, bool* Success, TArray<class ABP_MasterBuilding_C*>* ListOfBuildings);

	void GetFurniture(TEnumAsByte<E_Ownership> Ownership, TEnumAsByte<E_FurnitureCategories> FurnitureCategory, bool* Success, TArray<class ABP_MasterFurniture_C*>* Furniture);

	void GetFields(TEnumAsByte<E_Ownership> Ownership, TEnumAsByte<E_FieldCategories> FieldCategory, bool* Success, TArray<class ABP_MasterField_C*>* Fields);

	void FindField(struct FVector Location, bool OnlyCheck, float CheckDistance, TEnumAsByte<E_Ownership> Ownership, bool IgnoreLocationType, bool* Success, class ABP_MasterField_C** Field, struct FST_Chunks* Chunk);

	void AddNPC(class ABP_NPC_C*& NPC);

	void RemoveNPC(class ABP_NPC_C*& NPC);

	void SwapNPC(TEnumAsByte<E_Ownership> to, class ABP_NPC_C*& NPC);

	void GetNPCs(TEnumAsByte<E_Ownership> Ownership, bool* Success, TArray<class ABP_NPC_C*>* NPCs);

	void GetAllBuildings(TEnumAsByte<E_Buildings> BuildingCategory, TEnumAsByte<E_BuildingStatus> BuildingStatus, bool* Success, TArray<class ABP_MasterBuilding_C*>* ListOfBuildings);

	void GetBuildingByID(TEnumAsByte<E_Ownership> Ownership, struct FString ID, bool IgnoreOwnership, bool* Success, class ABP_MasterBuilding_C** Building);

	void GetAllNPCs(TArray<TEnumAsByte<E_Ownership>>* OwnershipsToIgnore, bool* Success, TArray<class ABP_NPC_C*>* NPCs);

	void GetNPCByID(TEnumAsByte<E_Ownership> Ownership, struct FString ID, bool IgnoreOwnership, bool* Success, class ABP_NPC_C** NPCs);

	void AddAnimal(TEnumAsByte<E_Ownership> Ownership, class ABP_AnimalBase_C*& Animal);

	void RemoveAnimal(class ABP_AnimalBase_C*& Animal);

	void SwapAnimal(TEnumAsByte<E_Ownership> to, class ABP_AnimalBase_C*& Animal);

	void GetAnimals(TEnumAsByte<E_Ownership> Ownership, bool IgnoreCategory, TEnumAsByte<E_AnimalType> AnimalCategory, bool* Success, TArray<class ABP_AnimalBase_C*>* Animals);

	void AddSplineStructure(TEnumAsByte<E_Ownership> Ownership, class ABP_MasterSplineStructure_C*& SplineStructure);

	void RemoveSplineStructure(class ABP_MasterSplineStructure_C*& SplineStructure);

	void SwapSplineStructure(TEnumAsByte<E_Ownership> to, class ABP_MasterSplineStructure_C*& SplineStructure);

	void GetSplineStructure(TEnumAsByte<E_Ownership> Ownership, bool* Success, TArray<class ABP_MasterSplineStructure_C*>* SplineStructures);

	void Init();

	void CheckForAnimal(class ABP_AnimalBase_C* Animal, bool* Success);

	void UpdateSeasonalItems();

	void LoadSaveFileIntoSystem_Buildings(class USAVE_Game_C* SaveReference, class UMultiTaskBase* Task);

	void FindBuildingWithAvailableSpace(TEnumAsByte<E_Ownership> Ownership, TEnumAsByte<E_Buildings> BuildingCategory, TEnumAsByte<E_BuildingStatus> BuildingStatus, bool FullyEmpty, bool NoFamilyInside, TEnumAsByte<E_Sex> Sex, bool* IsAvailable, class ABP_MasterBuilding_C** Building);

	void GetFurnitureByDistance(TEnumAsByte<E_Ownership> Ownership, TEnumAsByte<E_FurnitureCategories> FurnitureCategory, bool IgnoreOwnership, bool OnlyNonPlayerVillages, struct FVector StartLocation, bool CheckOccupy, class AActor* FurnitureToIgnore, bool* Success, class ABP_MasterFurniture_C** Furniture);

	void GetRandomFurniture(TEnumAsByte<E_Ownership> Ownership, TEnumAsByte<E_FurnitureCategories> FurnitureCategory, bool IgnoreOwnership, bool CheckOccupy, struct FVector StartLocation, float Range, class AActor* FurnitureToIgnore, bool* Success, class ABP_MasterFurniture_C** Furniture);

	void ChangeItem(struct FGuid Guid);

	void CheckPlayerFamiliesHouse(struct FString SaveGameVersion);

	void FixPlayerFamily(struct FString Save_Game_Version);

	void CheckHeirsAreMale(struct FString SaveGameVersion, class ABP_BaseCharacter_C* CharacterReference);

	void LoadSaveFileIntoSystem_NPCBuildings(class USAVE_Game_C* SaveReference);

	void LoadSaveFileIntoSystem_CropsFinish();

	void LoadSaveFileIntoSystem_UpdateRelations();

	void LoadSaveFileIntoSystem_SplineStructure(class USAVE_Game_C* SaveReference, class UMultiTaskBase* Task);

	void LoadSaveFileIntoSystem_Fields_Orchards(class USAVE_Game_C* SaveReference, class UMultiTaskBase* Task);

	void LoadSaveFileIntoSystem_Gates(class USAVE_Game_C* SaveReference, class UMultiTaskBase* Task);

	void LoadSaveFileIntoSystem_Roads(class USAVE_Game_C* SaveReference, class UMultiTaskBase* Task);

	void LoadSaveFileIntoSystem_Furniture(class USAVE_Game_C* SaveReference, class UMultiTaskBase* Task);

	void LoadSaveFileIntoSystem_NPC(class USAVE_Game_C* SaveReference, class UMultiTaskBase* TaskToResume);

	void LoadSaveFileIntoSystem_Animals(class USAVE_Game_C* SaveReference, class UMultiTaskBase* TaskToResume);

	void LoadSaveFileIntoSystem_Others(class USAVE_Game_C* SaveReference, class UMultiTaskBase* Task);

	void SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference);

	void AddRoad(TEnumAsByte<E_Ownership> Ownership, class ABP_MasterRoadSpline_C*& Road);

	void RemoveRoad(class ABP_MasterRoadSpline_C*& Road);

	void RefreshRoads(struct FVector Location, float CheckDistance, TEnumAsByte<E_Ownership> Ownership, bool IgnoreLocationType);

	void CheckWaggoners(struct FString SaveGameVersion);

	void VendorCategorySettings(struct FString ID, struct FName VendorCategoryName, bool IsVendor, TEnumAsByte<E_Profession> Profession, TEnumAsByte<E_Ownership> Ownership, TEnumAsByte<E_OutsideNPCTypes> OutsideNPCType, struct FDataTableRowHandle NPC_RowName, struct FDataTableRowHandle NPC_DT_Handler, bool* CorrectVendor, struct FDataTableRowHandle* VendorCategory, bool* ResetEQ, TEnumAsByte<E_Profession>* CorrectProfession);

	void CheckItemsID();

	void UpdateRestrictionAreas();

	void GetRandomOwnerlessNPCsCount(TMap<TEnumAsByte<E_Ownership>, int32_t>* OwnershipCount);

	void FindDuplicates_SplineStructure();

	void FindDuplicates_Building();

	void FindDuplicates_Field();

	void FindDuplicates_Furniture();

	void FindDuplicates_Item();

	void FindDuplicates_StaticMesh();

	void AddGate(TEnumAsByte<E_Ownership> Ownership, class ABP_MasterGate_C*& Gate);

	void RemoveGate(class ABP_MasterGate_C*& Gate);

	void UnoccupySlots();

	void CheckCollectablesID();

	void StopDataManager();

	void CastellanFix(bool CastellanExists);

	void SpawnFurniture(struct FVector Position, struct FRotator Rotation, struct FName Name, unsigned char Owner, TArray<struct FName>* Tags, class ABP_MasterFurniture_C** Furniture);

	void AddBridge(TEnumAsByte<E_Ownership> Ownership, class ABP_MasterBridge_C*& Bridge);

	void RemoveBridge(class ABP_MasterBridge_C*& Bridge);

	void SwapBridge(TEnumAsByte<E_Ownership> to, class ABP_MasterBridge_C*& Bridge);

	void GetBridge(TEnumAsByte<E_Ownership> Ownership, bool* Success, TArray<class ABP_MasterBridge_C*>* SplineStructures);

	void LoadDataSafely(const TArray<struct FString>& Data, int32_t Index, struct FString InvalidSubstitution, struct FString* LoadedData);

#pragma endregion
};
};