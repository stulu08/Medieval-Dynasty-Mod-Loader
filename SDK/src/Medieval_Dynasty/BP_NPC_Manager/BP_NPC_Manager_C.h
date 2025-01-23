#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_NPC_Manager.BP_NPC_Manager_C
// Super: Class Engine.Actor
// Size: 1384
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

	//bool	IsBand;		//Offset: 561	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsBand() const;
	bool* M_PtrGetIsBand();
	void M_SetIsBand(const bool& value);

	//int32_t	GlobalNumberOfChatters;		//Offset: 564	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetGlobalNumberOfChatters() const;
	int32_t* M_PtrGetGlobalNumberOfChatters();
	void M_SetGlobalNumberOfChatters(const int32_t& value);

	//TMap<TEnumAsByte<E_Ownership>, int32_t>	VillagesNumberOfChatters;		//Offset: 568	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<TEnumAsByte<E_Ownership>, int32_t> M_GetVillagesNumberOfChatters() const;
	TMap<TEnumAsByte<E_Ownership>, int32_t>* M_PtrGetVillagesNumberOfChatters();
	void M_SetVillagesNumberOfChatters(const TMap<TEnumAsByte<E_Ownership>, int32_t>& value);

	//struct FString	NearChatterNPC_ID;		//Offset: 648	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
	struct FString M_GetNearChatterNPC_ID() const;
	struct FString* M_PtrGetNearChatterNPC_ID();
	void M_SetNearChatterNPC_ID(const struct FString& value);

	//TArray<struct FName>	AvailableMaleNames;		//Offset: 664	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FName> M_GetAvailableMaleNames() const;
	TArray<struct FName>* M_PtrGetAvailableMaleNames();
	void M_SetAvailableMaleNames(const TArray<struct FName>& value);

	//TArray<struct FName>	AvailableFemaleNames;		//Offset: 680	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FName> M_GetAvailableFemaleNames() const;
	TArray<struct FName>* M_PtrGetAvailableFemaleNames();
	void M_SetAvailableFemaleNames(const TArray<struct FName>& value);

	//class ABP_SystemsManager_C*	SystemsManagerReference;		//Offset: 696	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_SystemsManager_C* M_GetSystemsManagerReference() const;
	class ABP_SystemsManager_C** M_PtrGetSystemsManagerReference();
	void M_SetSystemsManagerReference(const class ABP_SystemsManager_C*& value);

	//TArray<struct FName>	ChattersSubCategories;		//Offset: 704	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FName> M_GetChattersSubCategories() const;
	TArray<struct FName>* M_PtrGetChattersSubCategories();
	void M_SetChattersSubCategories(const TArray<struct FName>& value);

	//TArray<struct FName>	ChattersDialoguesNames;		//Offset: 720	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FName> M_GetChattersDialoguesNames() const;
	TArray<struct FName>* M_PtrGetChattersDialoguesNames();
	void M_SetChattersDialoguesNames(const TArray<struct FName>& value);

	//TArray<struct FString>	NPCs_ID;		//Offset: 736	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FString> M_GetNPCs_ID() const;
	TArray<struct FString>* M_PtrGetNPCs_ID();
	void M_SetNPCs_ID(const TArray<struct FString>& value);

	//TArray<struct FText>	NewNPCs;		//Offset: 752	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FText> M_GetNewNPCs() const;
	TArray<struct FText>* M_PtrGetNewNPCs();
	void M_SetNewNPCs(const TArray<struct FText>& value);

	//TArray<struct FST_NPCsPresets>	AvailableMalePresets;		//Offset: 768	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance, SaveGame
	TArray<struct FST_NPCsPresets> M_GetAvailableMalePresets() const;
	TArray<struct FST_NPCsPresets>* M_PtrGetAvailableMalePresets();
	void M_SetAvailableMalePresets(const TArray<struct FST_NPCsPresets>& value);

	//TArray<struct FST_NPCsPresets>	AvailableMaleBanditPresets;		//Offset: 784	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance, SaveGame
	TArray<struct FST_NPCsPresets> M_GetAvailableMaleBanditPresets() const;
	TArray<struct FST_NPCsPresets>* M_PtrGetAvailableMaleBanditPresets();
	void M_SetAvailableMaleBanditPresets(const TArray<struct FST_NPCsPresets>& value);

	//TArray<struct FST_NPCsPresets>	AvailableFemalePresets;		//Offset: 800	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance, SaveGame
	TArray<struct FST_NPCsPresets> M_GetAvailableFemalePresets() const;
	TArray<struct FST_NPCsPresets>* M_PtrGetAvailableFemalePresets();
	void M_SetAvailableFemalePresets(const TArray<struct FST_NPCsPresets>& value);

	//TArray<struct FST_NPCsPresets>	AvailableBoyPresets;		//Offset: 816	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance, SaveGame
	TArray<struct FST_NPCsPresets> M_GetAvailableBoyPresets() const;
	TArray<struct FST_NPCsPresets>* M_PtrGetAvailableBoyPresets();
	void M_SetAvailableBoyPresets(const TArray<struct FST_NPCsPresets>& value);

	//TArray<struct FST_NPCsPresets>	AvailableGirlPresets;		//Offset: 832	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance, SaveGame
	TArray<struct FST_NPCsPresets> M_GetAvailableGirlPresets() const;
	TArray<struct FST_NPCsPresets>* M_PtrGetAvailableGirlPresets();
	void M_SetAvailableGirlPresets(const TArray<struct FST_NPCsPresets>& value);

	//TArray<struct FST_NPCsPresets>	AvailableToddlerPresets;		//Offset: 848	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance, SaveGame
	TArray<struct FST_NPCsPresets> M_GetAvailableToddlerPresets() const;
	TArray<struct FST_NPCsPresets>* M_PtrGetAvailableToddlerPresets();
	void M_SetAvailableToddlerPresets(const TArray<struct FST_NPCsPresets>& value);

	//TArray<class AActor*>	NPCsThatLeft;		//Offset: 864	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TArray<class AActor*> M_GetNPCsThatLeft() const;
	TArray<class AActor*>* M_PtrGetNPCsThatLeft();
	void M_SetNPCsThatLeft(const TArray<class AActor*>& value);

	//TArray<class AActor*>	NeighboursHouses;		//Offset: 880	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TArray<class AActor*> M_GetNeighboursHouses() const;
	TArray<class AActor*>* M_PtrGetNeighboursHouses();
	void M_SetNeighboursHouses(const TArray<class AActor*>& value);

	//TMap<TEnumAsByte<E_CharacterType>, struct Falb_Array_Name>	ChattersNamesByCharacterType;		//Offset: 896	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<TEnumAsByte<E_CharacterType>, struct Falb_Array_Name> M_GetChattersNamesByCharacterType() const;
	TMap<TEnumAsByte<E_CharacterType>, struct Falb_Array_Name>* M_PtrGetChattersNamesByCharacterType();
	void M_SetChattersNamesByCharacterType(const TMap<TEnumAsByte<E_CharacterType>, struct Falb_Array_Name>& value);

	//TMap<struct FString, class UO_TalkingNPCsManager_C*>	TalkingNPCsManagers;		//Offset: 976	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<struct FString, class UO_TalkingNPCsManager_C*> M_GetTalkingNPCsManagers() const;
	TMap<struct FString, class UO_TalkingNPCsManager_C*>* M_PtrGetTalkingNPCsManagers();
	void M_SetTalkingNPCsManagers(const TMap<struct FString, class UO_TalkingNPCsManager_C*>& value);

	//TMap<struct FString, class AActor*>	DeadNPCs;		//Offset: 1056	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<struct FString, class AActor*> M_GetDeadNPCs() const;
	TMap<struct FString, class AActor*>* M_PtrGetDeadNPCs();
	void M_SetDeadNPCs(const TMap<struct FString, class AActor*>& value);

	//TMap<struct FString, TAssetPtr<class UDialogue>>	SpecialQuestNPCDialogues;		//Offset: 1136	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<struct FString, TAssetPtr<class UDialogue>> M_GetSpecialQuestNPCDialogues() const;
	TMap<struct FString, TAssetPtr<class UDialogue>>* M_PtrGetSpecialQuestNPCDialogues();
	void M_SetSpecialQuestNPCDialogues(const TMap<struct FString, TAssetPtr<class UDialogue>>& value);

	//TArray<struct FDataTableRowHandle>	NewNeighboursDTHandler;		//Offset: 1216	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FDataTableRowHandle> M_GetNewNeighboursDTHandler() const;
	TArray<struct FDataTableRowHandle>* M_PtrGetNewNeighboursDTHandler();
	void M_SetNewNeighboursDTHandler(const TArray<struct FDataTableRowHandle>& value);

	//int32_t	IterationsPerTick;		//Offset: 1232	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetIterationsPerTick() const;
	int32_t* M_PtrGetIterationsPerTick();
	void M_SetIterationsPerTick(const int32_t& value);

	//TMap<TEnumAsByte<E_Ownership>, struct Falb_Array_Name>	PresetsPerVillage;		//Offset: 1240	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<TEnumAsByte<E_Ownership>, struct Falb_Array_Name> M_GetPresetsPerVillage() const;
	TMap<TEnumAsByte<E_Ownership>, struct Falb_Array_Name>* M_PtrGetPresetsPerVillage();
	void M_SetPresetsPerVillage(const TMap<TEnumAsByte<E_Ownership>, struct Falb_Array_Name>& value);

	//TAssetPtr<class FOnNPCDeath__DelegateSignature>	OnNPCDeath;		//Offset: 1320	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnNPCDeath__DelegateSignature> M_GetOnNPCDeath() const;
	TAssetPtr<class FOnNPCDeath__DelegateSignature>* M_PtrGetOnNPCDeath();
	void M_SetOnNPCDeath(const TAssetPtr<class FOnNPCDeath__DelegateSignature>& value);

	//TAssetPtr<class FOnNPCBirth__DelegateSignature>	OnNPCBirth;		//Offset: 1336	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnNPCBirth__DelegateSignature> M_GetOnNPCBirth() const;
	TAssetPtr<class FOnNPCBirth__DelegateSignature>* M_PtrGetOnNPCBirth();
	void M_SetOnNPCBirth(const TAssetPtr<class FOnNPCBirth__DelegateSignature>& value);

	//TAssetPtr<class FOnParentsExpectingChild__DelegateSignature>	OnParentsExpectingChild;		//Offset: 1352	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnParentsExpectingChild__DelegateSignature> M_GetOnParentsExpectingChild() const;
	TAssetPtr<class FOnParentsExpectingChild__DelegateSignature>* M_PtrGetOnParentsExpectingChild();
	void M_SetOnParentsExpectingChild(const TAssetPtr<class FOnParentsExpectingChild__DelegateSignature>& value);

	//TAssetPtr<class FOnNPCsWedding__DelegateSignature>	OnNPCsWedding;		//Offset: 1368	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnNPCsWedding__DelegateSignature> M_GetOnNPCsWedding() const;
	TAssetPtr<class FOnNPCsWedding__DelegateSignature>* M_PtrGetOnNPCsWedding();
	void M_SetOnNPCsWedding(const TAssetPtr<class FOnNPCsWedding__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NPC_Manager.BP_NPC_Manager_C");
		return ptr;
	}

#pragma region Functions
	void OnNPCDeath__DelegateSignature(class UObject* NPC, struct FName RelationTag);

	void OnNPCBirth__DelegateSignature(class UObject* NPC);

	void OnParentsExpectingChild__DelegateSignature(class ABP_NPC_C* Mother, class ABP_NPC_C* Father);

	void OnNPCsWedding__DelegateSignature(class ABP_NPC_C* FirstPartner, class ABP_NPC_C* SecondPartner);

	void ExecuteUbergraph_BP_NPC_Manager(int32_t EntryPoint);

	void OnSeasonChanged_Client();

	void StartNPCManager_Async(bool LoadGame, bool MainMenu, class UMultiTaskBase* Task);

	void OnTimeOfDayChanged(TEnumAsByte<E_TimeOfDay> TimeOfDay);

	void OnDaySkip();

	void OnSeasonChanged();

	void ReceiveBeginPlay();

	void RandomName(TEnumAsByte<E_Sex> sex, struct FDataTableRowHandle* NameHandle);

	void RandomSex(TEnumAsByte<E_Sex>* sex);

	void InitAvailableNames();

	void AddNameToAvailableNamesArray(struct FString NPC_ID, TEnumAsByte<E_Sex> sex);

	void SpawnNPC(struct FST_CustomNPC NPC_Structure, TEnumAsByte<E_BanditType> BanditType, bool IsCustomNPC, bool IsNewNeighbour, bool LoadGame, bool Birth, bool* Success, class ABP_NPC_C** NPC);

	void CheckNPC_ID(const struct FString& NPC_ID, struct FString* New_NPC_ID);

	void CheckVoiceID(const struct FDataTableRowHandle& NPC_RowName, struct FName VoiceID, bool IsMultiNPC, struct FName* CorrectVoiceID);

	void Set_NPCRelations(const struct FST_CustomNPC& NPC_Structure, class ABP_NPC_C* NPCReference, struct FString NPC_ID, TEnumAsByte<E_CharacterType> CharacterType);

	void SetMultiNPCRelations(struct FST_Multi_Village_NPC MultiNPC_Structure, class ABP_NPC_C* NPCReference, struct FString NPC_ID, TEnumAsByte<E_CharacterType> CharacterType);

	void TeleportToHouse(bool PlayerIncluded);

	void Init();

	void ResetIllness(class ABP_BaseCharacter_C* BaseCharacter);

	void SpawnMultiNPC(struct FST_Multi_Village_NPC NPC_Structure, bool IsCustomNPC, bool LoadGame, bool Birth, struct FName BehaviorDT, bool* Success, class ABP_NPC_C** NPC);

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

	void SpawnRandomMultiNPC();

	void SpawnChild(TEnumAsByte<E_Ownership> Ownership, struct FTransform TransformLocation, struct FString MotherID, bool MustBeMale, bool Birth, bool* Succes, class ABP_NPC_C** Child);

	void SelectMeshesForNPCGen(struct FST_NPCMeshesGen NPCMeshes, class ABP_NPC_C* NPC_Reference, bool KeepHead, TMap<TEnumAsByte<E_BodyParts>, class USkeletalMesh*>* BodyPartsMeshes);

	void SortMeshes(struct FST_NPCMeshesGen NPCMeshes, TEnumAsByte<E_Profession> Profession, TEnumAsByte<E_Seasons> Season, struct FST_NPCMeshesGen* SortedNPCMeshes, TArray<struct FST_ArrayOfArraysInt>* SortedIndexes);

	void MeshGenSorter(TArray<struct FST_NPCsGenMeshSettings>* ArrayToSort, TEnumAsByte<E_Profession> Profession, TEnumAsByte<E_Seasons> Season, TArray<struct FST_NPCsGenMeshSettings>* SortedArray, TArray<int32_t>* SortedIndexes);

	void GetRandomIndexesFromNPCMeshesGen(struct FST_NPCMeshesGen NPCMeshes, TArray<struct FST_ArrayOfArraysInt>* SortedIndexes, TMap<TEnumAsByte<E_BodyParts>, int32_t>* BodyPartsIndexes);

	void GetMeshesByIndexesFromNPCMeshesGen(struct FST_NPCMeshesGen NPCMeshes, TMap<TEnumAsByte<E_BodyParts>, int32_t> BodyPartsIndexes, TMap<TEnumAsByte<E_BodyParts>, class USkeletalMesh*>* BodyPartsMeshes);

	void NakedNPCPrevention(struct FST_NPCMeshesGen NPCMeshes, class ABP_NPC_C* NPCReference, TMap<TEnumAsByte<E_BodyParts>, int32_t>* BodyParts);

	void InitializePresetTables();

	void SelectPresetsForNPC(class ABP_NPC_C* NPC_Reference, bool* Success);

	void VerifyNPCPresets(class ABP_NPC_C* NPCReference, bool* Success);

	void LoadPresetTables(TArray<struct FString>* AvailableMalePresets, TArray<struct FString>* AvailableMaleBanditPresets, TArray<struct FString>* AvailableFemalePresets, TArray<struct FString>* AvailableBoyPresets, TArray<struct FString>* AvailableGirlPresets, TArray<struct FString>* AvailableToddlerPresets);

	void GetSeasonClothingPresetsForProfession(class ABP_NPC_C* NPCReference, TEnumAsByte<E_Profession> Profession, struct FST_NPCSeasonClothing* SeasonClothingPresets);

	class UDataTable* GetPresetDataTableForNPC(class ABP_BaseCharacter_C* NPCReference);

	void GetNPCPresets(class UDataTable* DataTable, TArray<struct FST_NPCsPresets>* Presets);

	void SortByProfession(TArray<struct FST_NPCsPresets>* ArrayToSort, const TEnumAsByte<E_Profession>& Profession, TArray<struct FST_NPCsPresets>* SortedArray)/* const*/;

	void SortBySeason(TArray<struct FST_NPCsPresets>* ArrayToSort, const TEnumAsByte<E_Seasons>& Season, TArray<struct FST_NPCsPresets>* SortedArray)/* const*/;

	void SelectHeadAndHair(class ABP_BaseCharacter_C* BaseCharacter);

	void GetPresetByProfessionSeasonCharacterType(class ABP_NPC_C* NPCReference, TEnumAsByte<E_Profession> Profession, TEnumAsByte<E_Seasons> Season, struct FName* PresetID);

	void VerifyAvailablePresets(class UDataTable* DataTable, TArray<struct FST_NPCsPresets>* ArrayToVerify);

	void CheckIsNeighbours();

	void SetNPC_NightPatrol();

	void SpawnChildForOfflineMother(TEnumAsByte<E_Ownership> Ownership, struct FString MotherID, bool MustBeMale, bool Birth, struct FString FatherID, TArray<struct FString>* SiblingsIDs, struct FString HouseID, bool* Succes, class ABP_NPC_C** Child);

	void SpawnHerald(class ABP_NPC_C** NPC);

	void GetPresetByProfessionSeasonWealthCharacterType(class ABP_NPC_C* NPCReference, TEnumAsByte<E_Profession> Profession, TEnumAsByte<E_Seasons> Season, TEnumAsByte<E_Wealth> Wealth, struct FName* PresetID);

	void FilterByWealth(TArray<struct FST_NPCsPresets>* Presets, const TEnumAsByte<E_Wealth>& Wealth, TArray<struct FST_NPCsPresets>* FilteredPresets)/* const*/;

	void UpdateVendors();

	void VerifyNPCHeadAndHair(class ABP_NPC_C* NPCReference);

	void SpawnGiftVendor(struct FTransform TransformLocation, struct FDataTableRowHandle VendorCategory, class ABP_NPC_C** NPC);

	void SpawnBand(bool* Success, TArray<class ABP_NPC_C*>* NPC);

	void SpawnQuestNPC(struct FDataTableRowHandle RowName, struct FST_SimpleNPC NPC_Parameters, class ABP_NPC_C** NPC);

	void SpawnQuestMultiNPC(struct FDataTableRowHandle RowName, struct FST_SimpleNPC NPC_Parameters, struct FString QuestID, class ABP_NPC_C** NPC);

	void SpawnWaggoner(TEnumAsByte<E_Ownership> Ownership);

	void SpawnNPC_FromSpawner(struct FGuid POI_ID, struct FString NPC_ID, struct FDataTableRowHandle NPC_Name, struct FST_SimpleNPC NPC_Parameters, bool LoadGame, struct FTransform SpawnerTransform, class ABP_NPC_C** NPC);

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

	void RefillPresetTable(TArray<struct FST_NPCsPresets>* Array, class ABP_BaseCharacter_C* BaseCharacter);

	void FindUnusedPresets(TArray<struct FST_NPCsPresets>* Presets, class ABP_BaseCharacter_C* BaseCharacter, TArray<struct FST_NPCsPresets>* UnusedPresets)/* const*/;

	void UpdatePresetsPerVillage(class ABP_BaseCharacter_C* BaseCharacter, const struct FName& PresetToAdd);

	void RemovePresetsPerVillage(class ABP_BaseCharacter_C* BaseCharacter);

	void LoadUsedPresets(TMap<unsigned char, struct Falb_Array_Name> UsedPresets);

	void IsTimeBefore(struct FST_Hour Time, struct FST_Hour TimeBefore, bool* IsBefore);

	void IsTimeEqual(struct FST_Hour Time1, struct FST_Hour Time2, bool* IsEqual);

	void IsTimeBetween(struct FST_Hour Time, struct FST_Hour TimePeriodStart, struct FST_Hour TimePeriodEnd, bool Inclusive, bool* IsBetween);

	void CheckIfChatterCanBeUsed(struct FName ChatterName, TEnumAsByte<E_CharacterType> CharacterType, bool* Success);

	void IsNotTooMuchChatters(TEnumAsByte<E_Ownership> Ownership, bool IsNear, bool* Success);

	void IncreaseNumberOfChatters(TEnumAsByte<E_Ownership> Ownership, struct FString NearNPC_ID);

	void DecreaseNumberOfChatters(TEnumAsByte<E_Ownership> Ownership, struct FString NPC_ID);

	void UpdateUsedChatters(EChatterSoundType ChatterCategory, struct FName ChatterSubCategory, const struct FName& ChatterName, TEnumAsByte<E_CharacterType> CharacterType);

	void AddTalkingNPCsManager(struct FString NPC_ID, class UO_TalkingNPCsManager_C*& TalkingNPC_Manager);

	void RemoveTalkingNPCsManager(struct FString NPC_ID);

	void CheckIfTalkingNPCsManagerExists(struct FString NPC1_ID, struct FString NPC2_ID, bool* Success, class UO_TalkingNPCsManager_C** TalkingNPCsManager);

	void FindSpecialQuestNPC_Dialogue(struct FString ID, TAssetPtr<class UDialogue>* SpecialDialogue);

	void UpdateNPCsOnSeasonChanged_Client();

	void UpdateUsedChattersDialogues(const struct FName& ChatterDialogueName);

	void GetUsedChatters(TEnumAsByte<E_CharacterType> CharacterType, TArray<struct FName>* ChattersSubCategories, TArray<struct FName>* ChattersNames);

	void ChangeTimeToString(int32_t Time, struct FString* StringTime);

	void GetID_Timestamp(struct FString* ID_Timestamp);

	void GetUsedChattersDialogues(TArray<struct FName>* ChattersDialoguesNames);

	void FindRandomChatterDialogue(EChatterDialogueType ChatterDialogueCategory, TEnumAsByte<E_CharacterType> FirstTalkerCharacterType, TEnumAsByte<E_Sex> FirstTalkerSex, TEnumAsByte<E_CharacterType> SecondTalkerCharacterType, TEnumAsByte<E_Sex> SecondTalkerSex, bool* IsDialogue, struct FString* DialogueName, int32_t* WhoStarts, TArray<struct FString>* Dialogueinfo);

	void FindRandomChatterDialogueBySubCategories(EChatterDialogueType ChatterDialogueCategory, TArray<struct FString>* ChatterDialogueSubCategories, TEnumAsByte<E_CharacterType> FirstTalkerCharacterType, TEnumAsByte<E_Sex> FirstTalkerSex, TEnumAsByte<E_CharacterType> SecondTalkerCharacterType, TEnumAsByte<E_Sex> SecondTalkerSex, bool* IsDialogue, struct FString* DialogueName, int32_t* WhoStarts, TArray<struct FString>* Dialogueinfo);

	void FindRandomBandChatterDialogue(TEnumAsByte<E_Sex> FirstTalkerSex, TEnumAsByte<E_Profession> FirstTalkerProfession, TEnumAsByte<E_Sex> SecondTalkerSex, TEnumAsByte<E_Profession> SecondTalkerProfession, bool* IsDialogue, struct FString* DialogueName, int32_t* WhoStarts, TArray<struct FString>* Dialogueinfo);

	void SetChatterDialogue(EChatterDialogueType ChatterDialogueCategory, struct FString DialogueName, TArray<struct FString>* Dialogueinfo, class ABP_NPC_C* FirstTalker, class ABP_NPC_C* SecondTalker, bool ShouldClearTalkingNPCsIDs, class UO_TalkingNPCsManager_C** TalkingNPCsManager);

	void FilterByBanditType(TArray<struct FST_NPCsPresets>* Presets, TEnumAsByte<E_BanditType> BanditType, TArray<struct FST_NPCsPresets>* FilteredPresets)/* const*/;

	void FilterByCharacterType(TArray<struct FST_NPCsPresets>* Presets, class UObject* CharacterObject, TArray<struct FST_NPCsPresets>* FilteredPresets)/* const*/;

	void GetBanditNameUsingType(TEnumAsByte<E_BanditType> BanditType, struct FText* BanditName)/* const*/;

	void InheritAppearanceParams(class ABP_NPC_C* NPCRef);

#pragma endregion
};
};