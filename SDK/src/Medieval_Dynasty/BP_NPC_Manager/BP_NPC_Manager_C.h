#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_NPC_Manager.BP_NPC_Manager_C
// Super: Class Engine.Actor
// Size: 1112
// Size inherited: 544
/////////////////////////////////////////////
namespace UE4 {
class ABP_NPC_Manager_C : public AActor {
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

	//bool	AddSamborFigurines;		//Offset: 560	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetAddSamborFigurines() const;
	bool* M_PtrGetAddSamborFigurines();
	void M_SetAddSamborFigurines(const bool& value);

	//TArray<struct FName>	AvailableMaleNames;		//Offset: 568	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FName> M_GetAvailableMaleNames() const;
	TArray<struct FName>* M_PtrGetAvailableMaleNames();
	void M_SetAvailableMaleNames(const TArray<struct FName>& value);

	//TArray<struct FName>	AvailableFemaleNames;		//Offset: 584	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FName> M_GetAvailableFemaleNames() const;
	TArray<struct FName>* M_PtrGetAvailableFemaleNames();
	void M_SetAvailableFemaleNames(const TArray<struct FName>& value);

	//class ABP_SystemsManager_C*	SystemsManagerReference;		//Offset: 600	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_SystemsManager_C* M_GetSystemsManagerReference() const;
	class ABP_SystemsManager_C** M_PtrGetSystemsManagerReference();
	void M_SetSystemsManagerReference(const class ABP_SystemsManager_C*& value);

	//TArray<struct FName>	BlockedNames;		//Offset: 608	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FName> M_GetBlockedNames() const;
	TArray<struct FName>* M_PtrGetBlockedNames();
	void M_SetBlockedNames(const TArray<struct FName>& value);

	//TArray<struct FText>	NewNPCs;		//Offset: 624	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FText> M_GetNewNPCs() const;
	TArray<struct FText>* M_PtrGetNewNPCs();
	void M_SetNewNPCs(const TArray<struct FText>& value);

	//TArray<struct FString>	NPCs_ID;		//Offset: 640	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FString> M_GetNPCs_ID() const;
	TArray<struct FString>* M_PtrGetNPCs_ID();
	void M_SetNPCs_ID(const TArray<struct FString>& value);

	//TArray<struct FST_NPCsPresets>	AvailableMalePresets;		//Offset: 656	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance, SaveGame
	TArray<struct FST_NPCsPresets> M_GetAvailableMalePresets() const;
	TArray<struct FST_NPCsPresets>* M_PtrGetAvailableMalePresets();
	void M_SetAvailableMalePresets(const TArray<struct FST_NPCsPresets>& value);

	//TArray<struct FST_NPCsPresets>	AvailableFemalePresets;		//Offset: 672	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance, SaveGame
	TArray<struct FST_NPCsPresets> M_GetAvailableFemalePresets() const;
	TArray<struct FST_NPCsPresets>* M_PtrGetAvailableFemalePresets();
	void M_SetAvailableFemalePresets(const TArray<struct FST_NPCsPresets>& value);

	//TArray<struct FST_NPCsPresets>	AvailableBoyPresets;		//Offset: 688	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance, SaveGame
	TArray<struct FST_NPCsPresets> M_GetAvailableBoyPresets() const;
	TArray<struct FST_NPCsPresets>* M_PtrGetAvailableBoyPresets();
	void M_SetAvailableBoyPresets(const TArray<struct FST_NPCsPresets>& value);

	//TArray<struct FST_NPCsPresets>	AvailableGirlPresets;		//Offset: 704	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance, SaveGame
	TArray<struct FST_NPCsPresets> M_GetAvailableGirlPresets() const;
	TArray<struct FST_NPCsPresets>* M_PtrGetAvailableGirlPresets();
	void M_SetAvailableGirlPresets(const TArray<struct FST_NPCsPresets>& value);

	//TArray<struct FST_NPCsPresets>	AvailableToddlerPresets;		//Offset: 720	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance, SaveGame
	TArray<struct FST_NPCsPresets> M_GetAvailableToddlerPresets() const;
	TArray<struct FST_NPCsPresets>* M_PtrGetAvailableToddlerPresets();
	void M_SetAvailableToddlerPresets(const TArray<struct FST_NPCsPresets>& value);

	//TArray<class AActor*>	NPCsThatLeft;		//Offset: 736	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TArray<class AActor*> M_GetNPCsThatLeft() const;
	TArray<class AActor*>* M_PtrGetNPCsThatLeft();
	void M_SetNPCsThatLeft(const TArray<class AActor*>& value);

	//TArray<class AActor*>	NeighboursHouses;		//Offset: 752	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TArray<class AActor*> M_GetNeighboursHouses() const;
	TArray<class AActor*>* M_PtrGetNeighboursHouses();
	void M_SetNeighboursHouses(const TArray<class AActor*>& value);

	//TMap<struct FString, class AActor*>	DeadNPCs;		//Offset: 768	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<struct FString, class AActor*> M_GetDeadNPCs() const;
	TMap<struct FString, class AActor*>* M_PtrGetDeadNPCs();
	void M_SetDeadNPCs(const TMap<struct FString, class AActor*>& value);

	//TMap<struct FString, TAssetPtr<class UDialogue>>	SpecialNPCDialogues;		//Offset: 848	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<struct FString, TAssetPtr<class UDialogue>> M_GetSpecialNPCDialogues() const;
	TMap<struct FString, TAssetPtr<class UDialogue>>* M_PtrGetSpecialNPCDialogues();
	void M_SetSpecialNPCDialogues(const TMap<struct FString, TAssetPtr<class UDialogue>>& value);

	//TMap<struct FString, TAssetPtr<class UDialogue>>	SpecialQuestRecruitNPCDialogues;		//Offset: 928	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<struct FString, TAssetPtr<class UDialogue>> M_GetSpecialQuestRecruitNPCDialogues() const;
	TMap<struct FString, TAssetPtr<class UDialogue>>* M_PtrGetSpecialQuestRecruitNPCDialogues();
	void M_SetSpecialQuestRecruitNPCDialogues(const TMap<struct FString, TAssetPtr<class UDialogue>>& value);

	//TArray<struct FDataTableRowHandle>	NewNeighboursDTHandler;		//Offset: 1008	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FDataTableRowHandle> M_GetNewNeighboursDTHandler() const;
	TArray<struct FDataTableRowHandle>* M_PtrGetNewNeighboursDTHandler();
	void M_SetNewNeighboursDTHandler(const TArray<struct FDataTableRowHandle>& value);

	//int32_t	IterationsPerTick;		//Offset: 1024	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetIterationsPerTick() const;
	int32_t* M_PtrGetIterationsPerTick();
	void M_SetIterationsPerTick(const int32_t& value);

	//TMap<TEnumAsByte<E_Ownership>, struct Falb_Array_Name>	PresetsPerVillage;		//Offset: 1032	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<TEnumAsByte<E_Ownership>, struct Falb_Array_Name> M_GetPresetsPerVillage() const;
	TMap<TEnumAsByte<E_Ownership>, struct Falb_Array_Name>* M_PtrGetPresetsPerVillage();
	void M_SetPresetsPerVillage(const TMap<TEnumAsByte<E_Ownership>, struct Falb_Array_Name>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NPC_Manager.BP_NPC_Manager_C");
		return ptr;
	}

#pragma region Functions
	void ExecuteUbergraph_BP_NPC_Manager(int32_t EntryPoint);

	void StartNPCManager_Async(bool LoadGame, bool MainMenu, class UMultiTaskBase* Task);

	void OnTimeOfDayChanged(TEnumAsByte<E_TimeOfDay> TimeOfDay);

	void OnDaySkip();

	void OnSeasonChanged();

	void ReceiveBeginPlay();

	void RandomName(TEnumAsByte<E_Sex> Sex, struct FDataTableRowHandle* NameHandle);

	void RandomSex(TEnumAsByte<E_Sex>* Sex);

	void InitAvailableNames();

	void AddNameToAvailableNamesArray(struct FString NPC_ID, TEnumAsByte<E_Sex> Sex);

	void SpawnNPC(struct FString ID, struct FST_CustomNPC NPC_Structure, bool IsCustomNPC, bool IsNewNeighbour, bool LoadGame, bool Birth, bool* Success, class ABP_NPC_C** NPC);

	void CheckNPC_ID(const struct FString& NPC_ID, struct FString* New_NPC_ID);

	void SetNPCRelations(const struct FST_CustomNPC& NPC_Structure, class ABP_NPC_C* NPCReference, struct FString NPC_ID, TEnumAsByte<E_CharacterType> CharacterType);

	void TeleportToHouse(bool PlayerIncluded);

	void Init();

	void ResetIllness(class ABP_BaseCharacter_C* BaseCharacter);

	void SpawnNeighbours();

	void SpawnNewNeighbours();

	void SpawnRandomNPC();

	void StartNPCManager(bool LoadGame, bool MainMenu);

	void AddItemsToNeighborhoodBuildings();

	void ResetItemsInNeighborhoodBuildings();

	void LoadSaveFileIntoSystem(class USAVE_Game_C* SaveReference);

	void SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference);

	void RandomizeCharacterMeshes(class UObject* AnimClass, TEnumAsByte<E_CharacterType> CharacterType, class ABP_NPC_C* NPC_Reference, bool KeepHead, bool LoadGame, bool* Success);

	void SetCustomCharacterMeshes(class UObject* AnimClass, TEnumAsByte<E_CharacterType> CharacterType, class ABP_NPC_C* NPC_Reference, bool LoadGame);

	void LoadCharacterMeshes(TMap<TEnumAsByte<E_BodyParts>, int32_t> BodyPartsIndexes, class ABP_NPC_C* NPCReference, bool* Success);

	void Spawn_Child(TEnumAsByte<E_Ownership> Ownership, struct FTransform TransformLocation, struct FString MotherID, bool MustBeMale, bool Birth, bool* Succes);

	void SelectMeshesForNPCGen(struct FST_NPCMeshesGen NPCMeshes, class ABP_NPC_C* NPC_Reference, bool KeepHead, TMap<TEnumAsByte<E_BodyParts>, class USkeletalMesh*>* BodyPartsMeshes);

	void SortMeshes(struct FST_NPCMeshesGen NPCMeshes, TEnumAsByte<E_Profession> Profession, TEnumAsByte<E_Seasons> Season, struct FST_NPCMeshesGen* SortedNPCMeshes, TArray<struct FST_ArrayOfArraysInt>* SortedIndexes);

	void MeshGenSorter(TArray<struct FST_NPCsGenMeshSettings>* ArrayToSort, TEnumAsByte<E_Profession> Profession, TEnumAsByte<E_Seasons> Season, TArray<struct FST_NPCsGenMeshSettings>* SortedArray, TArray<int32_t>* SortedIndexes);

	void GetRandomIndexesFromNPCMeshesGen(struct FST_NPCMeshesGen NPCMeshes, TArray<struct FST_ArrayOfArraysInt>* SortedIndexes, TMap<TEnumAsByte<E_BodyParts>, int32_t>* BodyPartsIndexes);

	void GetMeshesByIndexesFromNPCMeshesGen(struct FST_NPCMeshesGen NPCMeshes, TMap<TEnumAsByte<E_BodyParts>, int32_t> BodyPartsIndexes, TMap<TEnumAsByte<E_BodyParts>, class USkeletalMesh*>* BodyPartsMeshes);

	void NakedNPCPrevention(struct FST_NPCMeshesGen NPCMeshes, class ABP_NPC_C* NPCReference, TMap<TEnumAsByte<E_BodyParts>, int32_t>* BodyParts);

	void InitializePresetTables();

	void SelectPresetsForNPC(class ABP_NPC_C* NPC_Reference, bool* Success);

	void LoadPresetTables(TArray<struct FString>* AvailableMalePresets, TArray<struct FString>* AvailableFemalePresets, TArray<struct FString>* AvailableBoyPresets, TArray<struct FString>* AvailableGirlPresets, TArray<struct FString>* AvailableToddlerPresets);

	void GetPresetsForProfession(class ABP_NPC_C* NPCReference, TEnumAsByte<E_Profession> Profession, TEnumAsByte<E_Profession>* ProfessionOut, struct FST_NPCSeasonClothing* PresetsForProfession);

	void GetNPCPresets(class UDataTable* DataTable, TArray<struct FST_NPCsPresets>* Presets);

	void SortByProfession(TArray<struct FST_NPCsPresets>* ArrayToSort, const TEnumAsByte<E_Profession>& Profession, TArray<struct FST_NPCsPresets>* SortedArray);

	void SortBySeason(TArray<struct FST_NPCsPresets>* ArrayToSort, const TEnumAsByte<E_Seasons>& Season, TArray<struct FST_NPCsPresets>* SortedArray);

	class UDataTable* GetPresetDataTableForNPC(class ABP_BaseCharacter_C* NPCReference);

	void SelectHeadAndHair(class ABP_NPC_C* NPCReference);

	void VerifyNPCPresets(class ABP_NPC_C* NPCReference, bool* Success);

	void GetPresetByProfessionAndSeason(class ABP_NPC_C* NPCReference, TEnumAsByte<E_Profession> Profession, TEnumAsByte<E_Seasons> Season, TEnumAsByte<E_Profession>* ProfessionOut, TEnumAsByte<E_Seasons>* SeasonOut, struct FName* PresetID);

	void VerifyAvailablePresets(class UDataTable* DataTable, TArray<struct FST_NPCsPresets>* ArrayToVerify);

	void CheckIsNeighbours();

	void SetNPC_NightPatrol();

	void SpawnHerald(class ABP_NPC_C** NPC);

	void GetPresetByProfessionSeasonAndWealth(class ABP_NPC_C* NPCReference, TEnumAsByte<E_Profession> Profession, TEnumAsByte<E_Seasons> Season, TEnumAsByte<E_Wealth> Wealth, TEnumAsByte<E_Profession>* ProfessionOut, TEnumAsByte<E_Seasons>* SeasonOut, TEnumAsByte<E_Wealth>* WealthOut, struct FName* PresetID);

	void SortByWealth(TArray<struct FST_NPCsPresets>* ArrayToSort, const TEnumAsByte<E_Wealth>& Wealth, TArray<struct FST_NPCsPresets>* SortedArray);

	void UpdateVendors();

	void VerifyNPCHeadAndHair(class ABP_NPC_C* NPCReference);

	void SpawnGiftVendor(struct FTransform TransformLocation, struct FDataTableRowHandle VendorCategory, class ABP_NPC_C** NPC);

	void SpawnQuestNPC(struct FDataTableRowHandle RowName, struct FST_SimpleNPC NPC_Parameters, class ABP_NPC_C** NPC);

	void SpawnWaggoner(TEnumAsByte<E_Ownership> Ownership);

	void SpawnNPC_FromSpawner(struct FST_SimpleNPC NPC_Parameters, bool LoadGame, class ABP_NPC_C** NPC);

	void NeighboursDeath(class ABP_NPC_C* NPC_Reference);

	void UpdateNPCsOnSeasonChanged();

	void NPCsDeath();

	void SetNeighboursRelations();

	void DestroyHerald(struct FString NPC_ID);

	void DestroyQuestNPC(struct FString RowName);

	void ReloadNeighbours();

	void AddNPCsThatLeft(class AActor*& NPC);

	void RemoveNPCsThatLeft(class AActor*& NPC);

	void DestroyNPCsThatLeftOnSkip();

	void UpdateWaggoners();

	void AddToysToNeighboursKids(bool AddSamborFigurines);

	void RemovePresetFromPool(class ABP_NPC_C* NPC, struct FName PresetToRemove);

	void RefillPresetTable(TArray<struct FST_NPCsPresets>* Array, class ABP_BaseCharacter_C* NPCReference);

	void FilterPresets(TArray<struct FST_NPCsPresets>* Presets, class ABP_NPC_C* NPCReference, TArray<struct FST_NPCsPresets>* FilteredArray);

	void UpdatePresetsPerVillage(class ABP_BaseCharacter_C* NPCReference, const struct FName& PresetToAdd);

	void RemovePresetsPerVillage(class ABP_BaseCharacter_C* NPCReference);

	void LoadUsedPresets(TMap<unsigned char, struct Falb_Array_Name> UsedPresets);

#pragma endregion
};
};