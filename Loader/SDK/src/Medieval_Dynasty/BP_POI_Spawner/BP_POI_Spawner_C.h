#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_POI_Spawner.BP_POI_Spawner_C
// Super: Class Engine.Actor
// Size: 1104
// Size inherited: 544
/////////////////////////////////////////////
namespace UE4 {
class ABP_POI_Spawner_C : public AActor {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 544	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//class UBillboardComponent*	DebugIcon;		//Offset: 552	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBillboardComponent* M_GetDebugIcon() const;
	class UBillboardComponent** M_PtrGetDebugIcon();
	void M_SetDebugIcon(const class UBillboardComponent*& value);

	//class UTextRenderComponent*	TextRender;		//Offset: 560	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UTextRenderComponent* M_GetTextRender() const;
	class UTextRenderComponent** M_PtrGetTextRender();
	void M_SetTextRender(const class UTextRenderComponent*& value);

	//class UBillboardComponent*	SpawnPointsDummy;		//Offset: 568	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UBillboardComponent* M_GetSpawnPointsDummy() const;
	class UBillboardComponent** M_PtrGetSpawnPointsDummy();
	void M_SetSpawnPointsDummy(const class UBillboardComponent*& value);

	//class USphereComponent*	SpawnerSphere;		//Offset: 576	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class USphereComponent* M_GetSpawnerSphere() const;
	class USphereComponent** M_PtrGetSpawnerSphere();
	void M_SetSpawnerSphere(const class USphereComponent*& value);

	//class USceneComponent*	DefaultSceneRoot;		//Offset: 584	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class USceneComponent* M_GetDefaultSceneRoot() const;
	class USceneComponent** M_PtrGetDefaultSceneRoot();
	void M_SetDefaultSceneRoot(const class USceneComponent*& value);

	//struct FGuid	ID;		//Offset: 592	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FGuid M_GetID() const;
	struct FGuid* M_PtrGetID();
	void M_SetID(const struct FGuid& value);

	//TMap<class AActor*, struct FST_Helper_Spawner_Indices>	SpawnedActors;		//Offset: 608	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TMap<class AActor*, struct FST_Helper_Spawner_Indices> M_GetSpawnedActors() const;
	TMap<class AActor*, struct FST_Helper_Spawner_Indices>* M_PtrGetSpawnedActors();
	void M_SetSpawnedActors(const TMap<class AActor*, struct FST_Helper_Spawner_Indices>& value);

	//bool	bPreview;		//Offset: 688	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetbPreview() const;
	bool* M_PtrGetbPreview();
	void M_SetbPreview(const bool& value);

	//bool	Available;		//Offset: 689	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetAvailable() const;
	bool* M_PtrGetAvailable();
	void M_SetAvailable(const bool& value);

	//bool	Active;		//Offset: 690	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetActive() const;
	bool* M_PtrGetActive();
	void M_SetActive(const bool& value);

	//bool	MarkedForSpawn;		//Offset: 691	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetMarkedForSpawn() const;
	bool* M_PtrGetMarkedForSpawn();
	void M_SetMarkedForSpawn(const bool& value);

	//bool	MarkedForDespawn;		//Offset: 692	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetMarkedForDespawn() const;
	bool* M_PtrGetMarkedForDespawn();
	void M_SetMarkedForDespawn(const bool& value);

	//TEnumAsByte<E_POI_Type>	SpawnerType;		//Offset: 693	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_POI_Type> M_GetSpawnerType() const;
	TEnumAsByte<E_POI_Type>* M_PtrGetSpawnerType();
	void M_SetSpawnerType(const TEnumAsByte<E_POI_Type>& value);

	//TArray<class ABP_POI_Spawner_C*>	MutuallyExclusivePOIs;		//Offset: 696	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate
	TArray<class ABP_POI_Spawner_C*> M_GetMutuallyExclusivePOIs() const;
	TArray<class ABP_POI_Spawner_C*>* M_PtrGetMutuallyExclusivePOIs();
	void M_SetMutuallyExclusivePOIs(const TArray<class ABP_POI_Spawner_C*>& value);

	//float	Radius;		//Offset: 712	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetRadius() const;
	float* M_PtrGetRadius();
	void M_SetRadius(const float& value);

	//float	SpawnRadious;		//Offset: 716	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSpawnRadious() const;
	float* M_PtrGetSpawnRadious();
	void M_SetSpawnRadious(const float& value);

	//TArray<struct FST_Spawner_NPC>	NPCs;		//Offset: 720	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_Spawner_NPC> M_GetNPCs() const;
	TArray<struct FST_Spawner_NPC>* M_PtrGetNPCs();
	void M_SetNPCs(const TArray<struct FST_Spawner_NPC>& value);

	//TArray<struct FST_Spawner_Animal>	Animals;		//Offset: 736	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_Spawner_Animal> M_GetAnimals() const;
	TArray<struct FST_Spawner_Animal>* M_PtrGetAnimals();
	void M_SetAnimals(const TArray<struct FST_Spawner_Animal>& value);

	//TArray<struct FST_Spawner_Item>	Items;		//Offset: 752	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_Spawner_Item> M_GetItems() const;
	TArray<struct FST_Spawner_Item>* M_PtrGetItems();
	void M_SetItems(const TArray<struct FST_Spawner_Item>& value);

	//TArray<struct FST_Spawner_ItemContainer>	ChestItems;		//Offset: 768	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_Spawner_ItemContainer> M_GetChestItems() const;
	TArray<struct FST_Spawner_ItemContainer>* M_PtrGetChestItems();
	void M_SetChestItems(const TArray<struct FST_Spawner_ItemContainer>& value);

	//bool	Permanent;		//Offset: 784	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetPermanent() const;
	bool* M_PtrGetPermanent();
	void M_SetPermanent(const bool& value);

	//bool	ActivateOnNewGameStart;		//Offset: 785	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetActivateOnNewGameStart() const;
	bool* M_PtrGetActivateOnNewGameStart();
	void M_SetActivateOnNewGameStart(const bool& value);

	//int32_t	NumberOfSeasonsMin;		//Offset: 788	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetNumberOfSeasonsMin() const;
	int32_t* M_PtrGetNumberOfSeasonsMin();
	void M_SetNumberOfSeasonsMin(const int32_t& value);

	//int32_t	NumberOfSeasonsMax;		//Offset: 792	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetNumberOfSeasonsMax() const;
	int32_t* M_PtrGetNumberOfSeasonsMax();
	void M_SetNumberOfSeasonsMax(const int32_t& value);

	//int32_t	NumberOfInactivityMin;		//Offset: 796	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetNumberOfInactivityMin() const;
	int32_t* M_PtrGetNumberOfInactivityMin();
	void M_SetNumberOfInactivityMin(const int32_t& value);

	//int32_t	NumberOfInactivityMax;		//Offset: 800	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetNumberOfInactivityMax() const;
	int32_t* M_PtrGetNumberOfInactivityMax();
	void M_SetNumberOfInactivityMax(const int32_t& value);

	//TAssetPtr<class FNone_513>	SeasonsAvailable;		//Offset: 808	Size: 80	Flags: Edit, BlueprintVisible
	TAssetPtr<class FNone_513> M_GetSeasonsAvailable() const;
	TAssetPtr<class FNone_513>* M_PtrGetSeasonsAvailable();
	void M_SetSeasonsAvailable(const TAssetPtr<class FNone_513>& value);

	//bool	bRefreshBP;		//Offset: 888	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetbRefreshBP() const;
	bool* M_PtrGetbRefreshBP();
	void M_SetbRefreshBP(const bool& value);

	//TArray<struct FST_Spawner_Furniture>	Furnitures;		//Offset: 896	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_Spawner_Furniture> M_GetFurnitures() const;
	TArray<struct FST_Spawner_Furniture>* M_PtrGetFurnitures();
	void M_SetFurnitures(const TArray<struct FST_Spawner_Furniture>& value);

	//TArray<struct FST_Spawner_Mesh>	Meshes;		//Offset: 912	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_Spawner_Mesh> M_GetMeshes() const;
	TArray<struct FST_Spawner_Mesh>* M_PtrGetMeshes();
	void M_SetMeshes(const TArray<struct FST_Spawner_Mesh>& value);

	//TArray<struct FST_Spawner_Decal>	Decals;		//Offset: 928	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_Spawner_Decal> M_GetDecals() const;
	TArray<struct FST_Spawner_Decal>* M_PtrGetDecals();
	void M_SetDecals(const TArray<struct FST_Spawner_Decal>& value);

	//TArray<struct FST_Spawner_CollectableFurniture>	CollectableFurnitures;		//Offset: 944	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_Spawner_CollectableFurniture> M_GetCollectableFurnitures() const;
	TArray<struct FST_Spawner_CollectableFurniture>* M_PtrGetCollectableFurnitures();
	void M_SetCollectableFurnitures(const TArray<struct FST_Spawner_CollectableFurniture>& value);

	//TArray<struct FST_Spawner_AnimatedMesh>	AnimatedMeshes;		//Offset: 960	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_Spawner_AnimatedMesh> M_GetAnimatedMeshes() const;
	TArray<struct FST_Spawner_AnimatedMesh>* M_PtrGetAnimatedMeshes();
	void M_SetAnimatedMeshes(const TArray<struct FST_Spawner_AnimatedMesh>& value);

	//TArray<struct FST_Spawner_TalkToActor>	TalkToActors;		//Offset: 976	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_Spawner_TalkToActor> M_GetTalkToActors() const;
	TArray<struct FST_Spawner_TalkToActor>* M_PtrGetTalkToActors();
	void M_SetTalkToActors(const TArray<struct FST_Spawner_TalkToActor>& value);

	//TArray<struct FST_Spawner_Trigger>	Triggers;		//Offset: 992	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_Spawner_Trigger> M_GetTriggers() const;
	TArray<struct FST_Spawner_Trigger>* M_PtrGetTriggers();
	void M_SetTriggers(const TArray<struct FST_Spawner_Trigger>& value);

	//TArray<struct FST_Spawner_BP>	BPs;		//Offset: 1008	Size: 16	Flags: Edit, BlueprintVisible
	TArray<struct FST_Spawner_BP> M_GetBPs() const;
	TArray<struct FST_Spawner_BP>* M_PtrGetBPs();
	void M_SetBPs(const TArray<struct FST_Spawner_BP>& value);

	//TArray<class AActor*>	Custom;		//Offset: 1024	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate
	TArray<class AActor*> M_GetCustom() const;
	TArray<class AActor*>* M_PtrGetCustom();
	void M_SetCustom(const TArray<class AActor*>& value);

	//bool	bPreviewInGame;		//Offset: 1040	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetbPreviewInGame() const;
	bool* M_PtrGetbPreviewInGame();
	void M_SetbPreviewInGame(const bool& value);

	//bool	ChosenFromExclusiveTable;		//Offset: 1041	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetChosenFromExclusiveTable() const;
	bool* M_PtrGetChosenFromExclusiveTable();
	void M_SetChosenFromExclusiveTable(const bool& value);

	//int32_t	NumberOfSeasonsInGame;		//Offset: 1044	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetNumberOfSeasonsInGame() const;
	int32_t* M_PtrGetNumberOfSeasonsInGame();
	void M_SetNumberOfSeasonsInGame(const int32_t& value);

	//bool	IgnoreAvailabilityCheckBuildings;		//Offset: 1048	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetIgnoreAvailabilityCheckBuildings() const;
	bool* M_PtrGetIgnoreAvailabilityCheckBuildings();
	void M_SetIgnoreAvailabilityCheckBuildings(const bool& value);

	//float	TextRenderSize;		//Offset: 1052	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTextRenderSize() const;
	float* M_PtrGetTextRenderSize();
	void M_SetTextRenderSize(const float& value);

	//struct FString	CustomDescription;		//Offset: 1056	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	struct FString M_GetCustomDescription() const;
	struct FString* M_PtrGetCustomDescription();
	void M_SetCustomDescription(const struct FString& value);

	//int32_t	NumberOfSeasonsToBeInactive;		//Offset: 1072	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetNumberOfSeasonsToBeInactive() const;
	int32_t* M_PtrGetNumberOfSeasonsToBeInactive();
	void M_SetNumberOfSeasonsToBeInactive(const int32_t& value);

	//bool	OverriteInactiveSeasons;		//Offset: 1076	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetOverriteInactiveSeasons() const;
	bool* M_PtrGetOverriteInactiveSeasons();
	void M_SetOverriteInactiveSeasons(const bool& value);

	//TArray<class UChildActorComponent*>	PreviewActors;		//Offset: 1080	Size: 16	Flags: Edit, BlueprintVisible, ContainsInstancedReference
	TArray<class UChildActorComponent*> M_GetPreviewActors() const;
	TArray<class UChildActorComponent*>* M_PtrGetPreviewActors();
	void M_SetPreviewActors(const TArray<class UChildActorComponent*>& value);

	//class AActor*	POIPreviewManager;		//Offset: 1096	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class AActor* M_GetPOIPreviewManager() const;
	class AActor** M_PtrGetPOIPreviewManager();
	void M_SetPOIPreviewManager(const class AActor*& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_POI_Spawner.BP_POI_Spawner_C");
		return ptr;
	}

#pragma region Functions
	void ExecuteUbergraph_BP_POI_Spawner(int32_t EntryPoint);

	void POI_OnActorDeath();

	void DebugDisplaySpawnRadius();

	void ReceiveBeginPlay();

	void Preview();

	void ClearSpawnerSettings();

	void DisplayPreview(class ABP_POI_Spawner_C* POI);

	void UserConstructionScript();

	void Init();

	void CheckAvailability(TEnumAsByte<E_Seasons>* CurrentSeason, bool Debug, bool* Available);

	void Spawn(class ABP_SystemsManager_C** SystemsManagerReference);

	void SpawnFromSave(class ABP_SystemsManager_C** SystemsManagerReference, TArray<struct FST_Helper_Spawner_Indices>* Spawns, TMap<int32_t, struct FST_InventoryItemsArray> Container, TArray<struct FST_SAVE_Spawner_Animal>* Animal, TArray<struct FST_SAVE_Spawner_Item>* Item, TArray<struct FST_SAVE_Spawner_NPC>* NPC, TArray<struct FST_SAVE_Spawner_CollectableFurniture>* CollFrt, TArray<bool>* TTAs, TArray<bool>* Triggers, TArray<struct FPoiObjectData>* GenericBPs);

	void ClearSpawns();

	void SpawnAnimal(struct FST_Animal What, class ABP_AnimalBase_C* WhatClass, struct FTransform Place, class ABP_SystemsManager_C** SystemsManagerReference, int32_t Index, float HP, bool Poisoned, float Poison, bool InitialSpawnDead);

	void SpawnNPC(struct FST_Spawner_NPC NPC_Data, class ABP_SystemsManager_C** SystemsManagerReference, int32_t Index);

	void SpawnItem(struct FDataTableRowHandle What, int32_t HowMuch, struct FTransform Place, int32_t Index, float Condition, bool Physics, TEnumAsByte<E_Ownership> Ownership);

	void SpawnFurniture(struct FDataTableRowHandle Furniture, TEnumAsByte<E_Ownership> Ownership, struct FTransform Place, class ABP_SystemsManager_C** SystemsManagerReference, int32_t Index);

	void SpawnMesh(class UStaticMesh* Mesh, struct FTransform Place, int32_t Index);

	void AddNPC();

	void AddAnimal();

	void AddItem();

	void DisplayArrows();

	void AddContainer();

	void AddFurniture();

	void AddMesh();

	void SpawnMeshes();

	void SpawnChestWithItems(struct FTransform Place, TArray<struct FST_Spawner_ContainerItemPreset>* V_ChestItems, class ABP_MasterFurniture_Container_C* TypeOfContainer, class ABP_SystemsManager_C** SystemsManagerReference, int32_t Index, TEnumAsByte<E_Ownership> Ownership);

	void SpawnDecal(const struct FST_Spawner_Decal& SpawnerDecal, int32_t Index);

	void SpawnCollectableFurniture(const struct FST_Spawner_CollectableFurniture& SpawnerFurniture, bool Collected, class ABP_SystemsManager_C** SysMngr, int32_t Index);

	void SpawnAnimatedMeshes();

	void SpawnTalkToActor(struct FST_Spawner_TalkToActor TTA, bool InteractionEnabled, int32_t Index);

	void SpawnTrigger(struct FST_Spawner_Trigger TriggerSettings, bool AlreadyFired, class ABP_SystemsManager_C** SysManager, int32_t Index);

	void SpawnBlueprints(const struct FST_Spawner_BP& SpawnerBP, int32_t Index);

	void SpawnCustom(class AActor* Actor, int32_t Index);

	void RollNumberOfSeasons();

	void SpawnNPC_Save(struct FST_SAVE_Spawner_NPC Who, struct FST_Spawner_NPC WhoFromSpawner, class ABP_SystemsManager_C** SystemsManagerReference);

	void SpawnChestWithItems_Save(struct FTransform Place, TArray<struct FST_ItemInventorys>* V_ChestItems, class ABP_MasterFurniture_Container_C* TypeOfContainer, class ABP_SystemsManager_C** SystemsManagerReference, int32_t Index, TEnumAsByte<E_Ownership> Ownership);

	void AddDecal();

	void ReloadAfterSettingsChange(class AGM_MedievalDynasty_C** GameMode);

	void AddCollectibleFurniture();

	void OnBanditDeath();

	void ChooseMutuallyExclusivePOI();

	void ResetChosenExclusive();

	void AddAnimatedMesh();

	void TryOverrideInactivityTime(int32_t NewTime);

	void MarkForSpawn();

	void Set_Marked_for_Spawn(bool Marked);

	void IsMarkedForSpawn(bool* MarkedForSpawning);

	void ActivatePOI();

	void GetSpawnRadius(float* SpawnRadious);

	void TryRemoveActorReference(class AActor** ActorRef, bool* Removed);

	void AddTalkToActor();

	void AddTrigger();

	void AddBP();

	void MakeSpawnTransform(const struct FTransform& FromPoiTransform, struct FTransform* WorldSpawnTransform);

	void SpawnBlueprints_Save(struct FPoiObjectData SaveData, int32_t Index);

	void AreNPCsDead(bool* AllNpcsDead);

	void SetupStaticMeshActorReplication(class AActor* SpawnedActor);

	void POI_GetActorsOfType(TEnumAsByte<E_ActorType> ActorsTypes, TArray<class AActor*>* Actors, bool* FoundAny);

	void POI_GetRandomSpawnPoint(TEnumAsByte<E_ActorType> POI_ActorType, bool* Success, struct FTransform* SpawnPoint);

	void GetPOITTAData_BPI(int32_t Index, struct FST_Spawner_TalkToActor* TTAData);

	void SaveGenericBP(class UObject** InObject, int32_t itsIndex, bool* Success, struct FPoiObjectData* outSerialized);

	void LoadGenericBP(struct FPoiObjectData* inSerialized, bool* Success, class UObject** outObject);

	void GetPoiBpSaveObject(class UObject** ObjectToSave);

	void ApplyPoiBpSerialization(const TArray<unsigned char>& Data, bool* Success);

#pragma endregion
};
};