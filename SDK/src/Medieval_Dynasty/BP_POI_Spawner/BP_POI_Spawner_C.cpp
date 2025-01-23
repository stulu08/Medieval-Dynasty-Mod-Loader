#include "../SDK.h"
#include "BP_POI_Spawner_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame ABP_POI_Spawner_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 544);
}
struct FPointerToUberGraphFrame* ABP_POI_Spawner_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 544);
}
void ABP_POI_Spawner_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 544, value);
}
// Member Getter and Setter of DebugIcon
// Declaration: class UBillboardComponent* DebugIcon
class UBillboardComponent* ABP_POI_Spawner_C::M_GetDebugIcon() const {
	return Read<class UBillboardComponent*>((byte*)this + 552);
}
class UBillboardComponent** ABP_POI_Spawner_C::M_PtrGetDebugIcon() {
	return reinterpret_cast<class UBillboardComponent**>((byte*)this + 552);
}
void ABP_POI_Spawner_C::M_SetDebugIcon(const class UBillboardComponent*& value) {
	Write((byte*)this + 552, value);
}
// Member Getter and Setter of TextRender
// Declaration: class UTextRenderComponent* TextRender
class UTextRenderComponent* ABP_POI_Spawner_C::M_GetTextRender() const {
	return Read<class UTextRenderComponent*>((byte*)this + 560);
}
class UTextRenderComponent** ABP_POI_Spawner_C::M_PtrGetTextRender() {
	return reinterpret_cast<class UTextRenderComponent**>((byte*)this + 560);
}
void ABP_POI_Spawner_C::M_SetTextRender(const class UTextRenderComponent*& value) {
	Write((byte*)this + 560, value);
}
// Member Getter and Setter of SpawnPointsDummy
// Declaration: class UBillboardComponent* SpawnPointsDummy
class UBillboardComponent* ABP_POI_Spawner_C::M_GetSpawnPointsDummy() const {
	return Read<class UBillboardComponent*>((byte*)this + 568);
}
class UBillboardComponent** ABP_POI_Spawner_C::M_PtrGetSpawnPointsDummy() {
	return reinterpret_cast<class UBillboardComponent**>((byte*)this + 568);
}
void ABP_POI_Spawner_C::M_SetSpawnPointsDummy(const class UBillboardComponent*& value) {
	Write((byte*)this + 568, value);
}
// Member Getter and Setter of SpawnerSphere
// Declaration: class USphereComponent* SpawnerSphere
class USphereComponent* ABP_POI_Spawner_C::M_GetSpawnerSphere() const {
	return Read<class USphereComponent*>((byte*)this + 576);
}
class USphereComponent** ABP_POI_Spawner_C::M_PtrGetSpawnerSphere() {
	return reinterpret_cast<class USphereComponent**>((byte*)this + 576);
}
void ABP_POI_Spawner_C::M_SetSpawnerSphere(const class USphereComponent*& value) {
	Write((byte*)this + 576, value);
}
// Member Getter and Setter of DefaultSceneRoot
// Declaration: class USceneComponent* DefaultSceneRoot
class USceneComponent* ABP_POI_Spawner_C::M_GetDefaultSceneRoot() const {
	return Read<class USceneComponent*>((byte*)this + 584);
}
class USceneComponent** ABP_POI_Spawner_C::M_PtrGetDefaultSceneRoot() {
	return reinterpret_cast<class USceneComponent**>((byte*)this + 584);
}
void ABP_POI_Spawner_C::M_SetDefaultSceneRoot(const class USceneComponent*& value) {
	Write((byte*)this + 584, value);
}
// Member Getter and Setter of ID
// Declaration: struct FGuid ID
struct FGuid ABP_POI_Spawner_C::M_GetID() const {
	return Read<struct FGuid>((byte*)this + 592);
}
struct FGuid* ABP_POI_Spawner_C::M_PtrGetID() {
	return reinterpret_cast<struct FGuid*>((byte*)this + 592);
}
void ABP_POI_Spawner_C::M_SetID(const struct FGuid& value) {
	Write((byte*)this + 592, value);
}
// Member Getter and Setter of SpawnedActors
// Declaration: TMap<class AActor*, struct FST_Helper_Spawner_Indices> SpawnedActors
TMap<class AActor*, struct FST_Helper_Spawner_Indices> ABP_POI_Spawner_C::M_GetSpawnedActors() const {
	return Read<TMap<class AActor*, struct FST_Helper_Spawner_Indices>>((byte*)this + 608);
}
TMap<class AActor*, struct FST_Helper_Spawner_Indices>* ABP_POI_Spawner_C::M_PtrGetSpawnedActors() {
	return reinterpret_cast<TMap<class AActor*, struct FST_Helper_Spawner_Indices>*>((byte*)this + 608);
}
void ABP_POI_Spawner_C::M_SetSpawnedActors(const TMap<class AActor*, struct FST_Helper_Spawner_Indices>& value) {
	Write((byte*)this + 608, value);
}
// Member Getter and Setter of bPreview
// Declaration: bool bPreview
bool ABP_POI_Spawner_C::M_GetbPreview() const {
	return Read<bool>((byte*)this + 688);
}
bool* ABP_POI_Spawner_C::M_PtrGetbPreview() {
	return reinterpret_cast<bool*>((byte*)this + 688);
}
void ABP_POI_Spawner_C::M_SetbPreview(const bool& value) {
	Write((byte*)this + 688, value);
}
// Member Getter and Setter of Available
// Declaration: bool Available
bool ABP_POI_Spawner_C::M_GetAvailable() const {
	return Read<bool>((byte*)this + 689);
}
bool* ABP_POI_Spawner_C::M_PtrGetAvailable() {
	return reinterpret_cast<bool*>((byte*)this + 689);
}
void ABP_POI_Spawner_C::M_SetAvailable(const bool& value) {
	Write((byte*)this + 689, value);
}
// Member Getter and Setter of Active
// Declaration: bool Active
bool ABP_POI_Spawner_C::M_GetActive() const {
	return Read<bool>((byte*)this + 690);
}
bool* ABP_POI_Spawner_C::M_PtrGetActive() {
	return reinterpret_cast<bool*>((byte*)this + 690);
}
void ABP_POI_Spawner_C::M_SetActive(const bool& value) {
	Write((byte*)this + 690, value);
}
// Member Getter and Setter of MarkedForSpawn
// Declaration: bool MarkedForSpawn
bool ABP_POI_Spawner_C::M_GetMarkedForSpawn() const {
	return Read<bool>((byte*)this + 691);
}
bool* ABP_POI_Spawner_C::M_PtrGetMarkedForSpawn() {
	return reinterpret_cast<bool*>((byte*)this + 691);
}
void ABP_POI_Spawner_C::M_SetMarkedForSpawn(const bool& value) {
	Write((byte*)this + 691, value);
}
// Member Getter and Setter of MarkedForDespawn
// Declaration: bool MarkedForDespawn
bool ABP_POI_Spawner_C::M_GetMarkedForDespawn() const {
	return Read<bool>((byte*)this + 692);
}
bool* ABP_POI_Spawner_C::M_PtrGetMarkedForDespawn() {
	return reinterpret_cast<bool*>((byte*)this + 692);
}
void ABP_POI_Spawner_C::M_SetMarkedForDespawn(const bool& value) {
	Write((byte*)this + 692, value);
}
// Member Getter and Setter of SpawnerType
// Declaration: TEnumAsByte<E_POI_Type> SpawnerType
TEnumAsByte<E_POI_Type> ABP_POI_Spawner_C::M_GetSpawnerType() const {
	return Read<TEnumAsByte<E_POI_Type>>((byte*)this + 693);
}
TEnumAsByte<E_POI_Type>* ABP_POI_Spawner_C::M_PtrGetSpawnerType() {
	return reinterpret_cast<TEnumAsByte<E_POI_Type>*>((byte*)this + 693);
}
void ABP_POI_Spawner_C::M_SetSpawnerType(const TEnumAsByte<E_POI_Type>& value) {
	Write((byte*)this + 693, value);
}
// Member Getter and Setter of MutuallyExclusivePOIs
// Declaration: TArray<class ABP_POI_Spawner_C*> MutuallyExclusivePOIs
TArray<class ABP_POI_Spawner_C*> ABP_POI_Spawner_C::M_GetMutuallyExclusivePOIs() const {
	return Read<TArray<class ABP_POI_Spawner_C*>>((byte*)this + 696);
}
TArray<class ABP_POI_Spawner_C*>* ABP_POI_Spawner_C::M_PtrGetMutuallyExclusivePOIs() {
	return reinterpret_cast<TArray<class ABP_POI_Spawner_C*>*>((byte*)this + 696);
}
void ABP_POI_Spawner_C::M_SetMutuallyExclusivePOIs(const TArray<class ABP_POI_Spawner_C*>& value) {
	Write((byte*)this + 696, value);
}
// Member Getter and Setter of Radius
// Declaration: float Radius
float ABP_POI_Spawner_C::M_GetRadius() const {
	return Read<float>((byte*)this + 712);
}
float* ABP_POI_Spawner_C::M_PtrGetRadius() {
	return reinterpret_cast<float*>((byte*)this + 712);
}
void ABP_POI_Spawner_C::M_SetRadius(const float& value) {
	Write((byte*)this + 712, value);
}
// Member Getter and Setter of SpawnRadious
// Declaration: float SpawnRadious
float ABP_POI_Spawner_C::M_GetSpawnRadious() const {
	return Read<float>((byte*)this + 716);
}
float* ABP_POI_Spawner_C::M_PtrGetSpawnRadious() {
	return reinterpret_cast<float*>((byte*)this + 716);
}
void ABP_POI_Spawner_C::M_SetSpawnRadious(const float& value) {
	Write((byte*)this + 716, value);
}
// Member Getter and Setter of NPCs
// Declaration: TArray<struct FST_Spawner_NPC> NPCs
TArray<struct FST_Spawner_NPC> ABP_POI_Spawner_C::M_GetNPCs() const {
	return Read<TArray<struct FST_Spawner_NPC>>((byte*)this + 720);
}
TArray<struct FST_Spawner_NPC>* ABP_POI_Spawner_C::M_PtrGetNPCs() {
	return reinterpret_cast<TArray<struct FST_Spawner_NPC>*>((byte*)this + 720);
}
void ABP_POI_Spawner_C::M_SetNPCs(const TArray<struct FST_Spawner_NPC>& value) {
	Write((byte*)this + 720, value);
}
// Member Getter and Setter of Animals
// Declaration: TArray<struct FST_Spawner_Animal> Animals
TArray<struct FST_Spawner_Animal> ABP_POI_Spawner_C::M_GetAnimals() const {
	return Read<TArray<struct FST_Spawner_Animal>>((byte*)this + 736);
}
TArray<struct FST_Spawner_Animal>* ABP_POI_Spawner_C::M_PtrGetAnimals() {
	return reinterpret_cast<TArray<struct FST_Spawner_Animal>*>((byte*)this + 736);
}
void ABP_POI_Spawner_C::M_SetAnimals(const TArray<struct FST_Spawner_Animal>& value) {
	Write((byte*)this + 736, value);
}
// Member Getter and Setter of Items
// Declaration: TArray<struct FST_Spawner_Item> Items
TArray<struct FST_Spawner_Item> ABP_POI_Spawner_C::M_GetItems() const {
	return Read<TArray<struct FST_Spawner_Item>>((byte*)this + 752);
}
TArray<struct FST_Spawner_Item>* ABP_POI_Spawner_C::M_PtrGetItems() {
	return reinterpret_cast<TArray<struct FST_Spawner_Item>*>((byte*)this + 752);
}
void ABP_POI_Spawner_C::M_SetItems(const TArray<struct FST_Spawner_Item>& value) {
	Write((byte*)this + 752, value);
}
// Member Getter and Setter of ChestItems
// Declaration: TArray<struct FST_Spawner_ItemContainer> ChestItems
TArray<struct FST_Spawner_ItemContainer> ABP_POI_Spawner_C::M_GetChestItems() const {
	return Read<TArray<struct FST_Spawner_ItemContainer>>((byte*)this + 768);
}
TArray<struct FST_Spawner_ItemContainer>* ABP_POI_Spawner_C::M_PtrGetChestItems() {
	return reinterpret_cast<TArray<struct FST_Spawner_ItemContainer>*>((byte*)this + 768);
}
void ABP_POI_Spawner_C::M_SetChestItems(const TArray<struct FST_Spawner_ItemContainer>& value) {
	Write((byte*)this + 768, value);
}
// Member Getter and Setter of Permanent
// Declaration: bool Permanent
bool ABP_POI_Spawner_C::M_GetPermanent() const {
	return Read<bool>((byte*)this + 784);
}
bool* ABP_POI_Spawner_C::M_PtrGetPermanent() {
	return reinterpret_cast<bool*>((byte*)this + 784);
}
void ABP_POI_Spawner_C::M_SetPermanent(const bool& value) {
	Write((byte*)this + 784, value);
}
// Member Getter and Setter of ActivateOnNewGameStart
// Declaration: bool ActivateOnNewGameStart
bool ABP_POI_Spawner_C::M_GetActivateOnNewGameStart() const {
	return Read<bool>((byte*)this + 785);
}
bool* ABP_POI_Spawner_C::M_PtrGetActivateOnNewGameStart() {
	return reinterpret_cast<bool*>((byte*)this + 785);
}
void ABP_POI_Spawner_C::M_SetActivateOnNewGameStart(const bool& value) {
	Write((byte*)this + 785, value);
}
// Member Getter and Setter of NumberOfSeasonsMin
// Declaration: int32_t NumberOfSeasonsMin
int32_t ABP_POI_Spawner_C::M_GetNumberOfSeasonsMin() const {
	return Read<int32_t>((byte*)this + 788);
}
int32_t* ABP_POI_Spawner_C::M_PtrGetNumberOfSeasonsMin() {
	return reinterpret_cast<int32_t*>((byte*)this + 788);
}
void ABP_POI_Spawner_C::M_SetNumberOfSeasonsMin(const int32_t& value) {
	Write((byte*)this + 788, value);
}
// Member Getter and Setter of NumberOfSeasonsMax
// Declaration: int32_t NumberOfSeasonsMax
int32_t ABP_POI_Spawner_C::M_GetNumberOfSeasonsMax() const {
	return Read<int32_t>((byte*)this + 792);
}
int32_t* ABP_POI_Spawner_C::M_PtrGetNumberOfSeasonsMax() {
	return reinterpret_cast<int32_t*>((byte*)this + 792);
}
void ABP_POI_Spawner_C::M_SetNumberOfSeasonsMax(const int32_t& value) {
	Write((byte*)this + 792, value);
}
// Member Getter and Setter of NumberOfInactivityMin
// Declaration: int32_t NumberOfInactivityMin
int32_t ABP_POI_Spawner_C::M_GetNumberOfInactivityMin() const {
	return Read<int32_t>((byte*)this + 796);
}
int32_t* ABP_POI_Spawner_C::M_PtrGetNumberOfInactivityMin() {
	return reinterpret_cast<int32_t*>((byte*)this + 796);
}
void ABP_POI_Spawner_C::M_SetNumberOfInactivityMin(const int32_t& value) {
	Write((byte*)this + 796, value);
}
// Member Getter and Setter of NumberOfInactivityMax
// Declaration: int32_t NumberOfInactivityMax
int32_t ABP_POI_Spawner_C::M_GetNumberOfInactivityMax() const {
	return Read<int32_t>((byte*)this + 800);
}
int32_t* ABP_POI_Spawner_C::M_PtrGetNumberOfInactivityMax() {
	return reinterpret_cast<int32_t*>((byte*)this + 800);
}
void ABP_POI_Spawner_C::M_SetNumberOfInactivityMax(const int32_t& value) {
	Write((byte*)this + 800, value);
}
// Member Getter and Setter of SeasonsAvailable
// Declaration: TAssetPtr<class FNone_513> SeasonsAvailable
TAssetPtr<class FNone_513> ABP_POI_Spawner_C::M_GetSeasonsAvailable() const {
	return Read<TAssetPtr<class FNone_513>>((byte*)this + 808);
}
TAssetPtr<class FNone_513>* ABP_POI_Spawner_C::M_PtrGetSeasonsAvailable() {
	return reinterpret_cast<TAssetPtr<class FNone_513>*>((byte*)this + 808);
}
void ABP_POI_Spawner_C::M_SetSeasonsAvailable(const TAssetPtr<class FNone_513>& value) {
	Write((byte*)this + 808, value);
}
// Member Getter and Setter of bRefreshBP
// Declaration: bool bRefreshBP
bool ABP_POI_Spawner_C::M_GetbRefreshBP() const {
	return Read<bool>((byte*)this + 888);
}
bool* ABP_POI_Spawner_C::M_PtrGetbRefreshBP() {
	return reinterpret_cast<bool*>((byte*)this + 888);
}
void ABP_POI_Spawner_C::M_SetbRefreshBP(const bool& value) {
	Write((byte*)this + 888, value);
}
// Member Getter and Setter of Furnitures
// Declaration: TArray<struct FST_Spawner_Furniture> Furnitures
TArray<struct FST_Spawner_Furniture> ABP_POI_Spawner_C::M_GetFurnitures() const {
	return Read<TArray<struct FST_Spawner_Furniture>>((byte*)this + 896);
}
TArray<struct FST_Spawner_Furniture>* ABP_POI_Spawner_C::M_PtrGetFurnitures() {
	return reinterpret_cast<TArray<struct FST_Spawner_Furniture>*>((byte*)this + 896);
}
void ABP_POI_Spawner_C::M_SetFurnitures(const TArray<struct FST_Spawner_Furniture>& value) {
	Write((byte*)this + 896, value);
}
// Member Getter and Setter of Meshes
// Declaration: TArray<struct FST_Spawner_Mesh> Meshes
TArray<struct FST_Spawner_Mesh> ABP_POI_Spawner_C::M_GetMeshes() const {
	return Read<TArray<struct FST_Spawner_Mesh>>((byte*)this + 912);
}
TArray<struct FST_Spawner_Mesh>* ABP_POI_Spawner_C::M_PtrGetMeshes() {
	return reinterpret_cast<TArray<struct FST_Spawner_Mesh>*>((byte*)this + 912);
}
void ABP_POI_Spawner_C::M_SetMeshes(const TArray<struct FST_Spawner_Mesh>& value) {
	Write((byte*)this + 912, value);
}
// Member Getter and Setter of Decals
// Declaration: TArray<struct FST_Spawner_Decal> Decals
TArray<struct FST_Spawner_Decal> ABP_POI_Spawner_C::M_GetDecals() const {
	return Read<TArray<struct FST_Spawner_Decal>>((byte*)this + 928);
}
TArray<struct FST_Spawner_Decal>* ABP_POI_Spawner_C::M_PtrGetDecals() {
	return reinterpret_cast<TArray<struct FST_Spawner_Decal>*>((byte*)this + 928);
}
void ABP_POI_Spawner_C::M_SetDecals(const TArray<struct FST_Spawner_Decal>& value) {
	Write((byte*)this + 928, value);
}
// Member Getter and Setter of CollectableFurnitures
// Declaration: TArray<struct FST_Spawner_CollectableFurniture> CollectableFurnitures
TArray<struct FST_Spawner_CollectableFurniture> ABP_POI_Spawner_C::M_GetCollectableFurnitures() const {
	return Read<TArray<struct FST_Spawner_CollectableFurniture>>((byte*)this + 944);
}
TArray<struct FST_Spawner_CollectableFurniture>* ABP_POI_Spawner_C::M_PtrGetCollectableFurnitures() {
	return reinterpret_cast<TArray<struct FST_Spawner_CollectableFurniture>*>((byte*)this + 944);
}
void ABP_POI_Spawner_C::M_SetCollectableFurnitures(const TArray<struct FST_Spawner_CollectableFurniture>& value) {
	Write((byte*)this + 944, value);
}
// Member Getter and Setter of AnimatedMeshes
// Declaration: TArray<struct FST_Spawner_AnimatedMesh> AnimatedMeshes
TArray<struct FST_Spawner_AnimatedMesh> ABP_POI_Spawner_C::M_GetAnimatedMeshes() const {
	return Read<TArray<struct FST_Spawner_AnimatedMesh>>((byte*)this + 960);
}
TArray<struct FST_Spawner_AnimatedMesh>* ABP_POI_Spawner_C::M_PtrGetAnimatedMeshes() {
	return reinterpret_cast<TArray<struct FST_Spawner_AnimatedMesh>*>((byte*)this + 960);
}
void ABP_POI_Spawner_C::M_SetAnimatedMeshes(const TArray<struct FST_Spawner_AnimatedMesh>& value) {
	Write((byte*)this + 960, value);
}
// Member Getter and Setter of TalkToActors
// Declaration: TArray<struct FST_Spawner_TalkToActor> TalkToActors
TArray<struct FST_Spawner_TalkToActor> ABP_POI_Spawner_C::M_GetTalkToActors() const {
	return Read<TArray<struct FST_Spawner_TalkToActor>>((byte*)this + 976);
}
TArray<struct FST_Spawner_TalkToActor>* ABP_POI_Spawner_C::M_PtrGetTalkToActors() {
	return reinterpret_cast<TArray<struct FST_Spawner_TalkToActor>*>((byte*)this + 976);
}
void ABP_POI_Spawner_C::M_SetTalkToActors(const TArray<struct FST_Spawner_TalkToActor>& value) {
	Write((byte*)this + 976, value);
}
// Member Getter and Setter of Triggers
// Declaration: TArray<struct FST_Spawner_Trigger> Triggers
TArray<struct FST_Spawner_Trigger> ABP_POI_Spawner_C::M_GetTriggers() const {
	return Read<TArray<struct FST_Spawner_Trigger>>((byte*)this + 992);
}
TArray<struct FST_Spawner_Trigger>* ABP_POI_Spawner_C::M_PtrGetTriggers() {
	return reinterpret_cast<TArray<struct FST_Spawner_Trigger>*>((byte*)this + 992);
}
void ABP_POI_Spawner_C::M_SetTriggers(const TArray<struct FST_Spawner_Trigger>& value) {
	Write((byte*)this + 992, value);
}
// Member Getter and Setter of BPs
// Declaration: TArray<struct FST_Spawner_BP> BPs
TArray<struct FST_Spawner_BP> ABP_POI_Spawner_C::M_GetBPs() const {
	return Read<TArray<struct FST_Spawner_BP>>((byte*)this + 1008);
}
TArray<struct FST_Spawner_BP>* ABP_POI_Spawner_C::M_PtrGetBPs() {
	return reinterpret_cast<TArray<struct FST_Spawner_BP>*>((byte*)this + 1008);
}
void ABP_POI_Spawner_C::M_SetBPs(const TArray<struct FST_Spawner_BP>& value) {
	Write((byte*)this + 1008, value);
}
// Member Getter and Setter of Custom
// Declaration: TArray<class AActor*> Custom
TArray<class AActor*> ABP_POI_Spawner_C::M_GetCustom() const {
	return Read<TArray<class AActor*>>((byte*)this + 1024);
}
TArray<class AActor*>* ABP_POI_Spawner_C::M_PtrGetCustom() {
	return reinterpret_cast<TArray<class AActor*>*>((byte*)this + 1024);
}
void ABP_POI_Spawner_C::M_SetCustom(const TArray<class AActor*>& value) {
	Write((byte*)this + 1024, value);
}
// Member Getter and Setter of bPreviewInGame
// Declaration: bool bPreviewInGame
bool ABP_POI_Spawner_C::M_GetbPreviewInGame() const {
	return Read<bool>((byte*)this + 1040);
}
bool* ABP_POI_Spawner_C::M_PtrGetbPreviewInGame() {
	return reinterpret_cast<bool*>((byte*)this + 1040);
}
void ABP_POI_Spawner_C::M_SetbPreviewInGame(const bool& value) {
	Write((byte*)this + 1040, value);
}
// Member Getter and Setter of ChosenFromExclusiveTable
// Declaration: bool ChosenFromExclusiveTable
bool ABP_POI_Spawner_C::M_GetChosenFromExclusiveTable() const {
	return Read<bool>((byte*)this + 1041);
}
bool* ABP_POI_Spawner_C::M_PtrGetChosenFromExclusiveTable() {
	return reinterpret_cast<bool*>((byte*)this + 1041);
}
void ABP_POI_Spawner_C::M_SetChosenFromExclusiveTable(const bool& value) {
	Write((byte*)this + 1041, value);
}
// Member Getter and Setter of NumberOfSeasonsInGame
// Declaration: int32_t NumberOfSeasonsInGame
int32_t ABP_POI_Spawner_C::M_GetNumberOfSeasonsInGame() const {
	return Read<int32_t>((byte*)this + 1044);
}
int32_t* ABP_POI_Spawner_C::M_PtrGetNumberOfSeasonsInGame() {
	return reinterpret_cast<int32_t*>((byte*)this + 1044);
}
void ABP_POI_Spawner_C::M_SetNumberOfSeasonsInGame(const int32_t& value) {
	Write((byte*)this + 1044, value);
}
// Member Getter and Setter of IgnoreAvailabilityCheckBuildings
// Declaration: bool IgnoreAvailabilityCheckBuildings
bool ABP_POI_Spawner_C::M_GetIgnoreAvailabilityCheckBuildings() const {
	return Read<bool>((byte*)this + 1048);
}
bool* ABP_POI_Spawner_C::M_PtrGetIgnoreAvailabilityCheckBuildings() {
	return reinterpret_cast<bool*>((byte*)this + 1048);
}
void ABP_POI_Spawner_C::M_SetIgnoreAvailabilityCheckBuildings(const bool& value) {
	Write((byte*)this + 1048, value);
}
// Member Getter and Setter of TextRenderSize
// Declaration: float TextRenderSize
float ABP_POI_Spawner_C::M_GetTextRenderSize() const {
	return Read<float>((byte*)this + 1052);
}
float* ABP_POI_Spawner_C::M_PtrGetTextRenderSize() {
	return reinterpret_cast<float*>((byte*)this + 1052);
}
void ABP_POI_Spawner_C::M_SetTextRenderSize(const float& value) {
	Write((byte*)this + 1052, value);
}
// Member Getter and Setter of CustomDescription
// Declaration: struct FString CustomDescription
struct FString ABP_POI_Spawner_C::M_GetCustomDescription() const {
	return Read<struct FString>((byte*)this + 1056);
}
struct FString* ABP_POI_Spawner_C::M_PtrGetCustomDescription() {
	return reinterpret_cast<struct FString*>((byte*)this + 1056);
}
void ABP_POI_Spawner_C::M_SetCustomDescription(const struct FString& value) {
	Write((byte*)this + 1056, value);
}
// Member Getter and Setter of NumberOfSeasonsToBeInactive
// Declaration: int32_t NumberOfSeasonsToBeInactive
int32_t ABP_POI_Spawner_C::M_GetNumberOfSeasonsToBeInactive() const {
	return Read<int32_t>((byte*)this + 1072);
}
int32_t* ABP_POI_Spawner_C::M_PtrGetNumberOfSeasonsToBeInactive() {
	return reinterpret_cast<int32_t*>((byte*)this + 1072);
}
void ABP_POI_Spawner_C::M_SetNumberOfSeasonsToBeInactive(const int32_t& value) {
	Write((byte*)this + 1072, value);
}
// Member Getter and Setter of OverriteInactiveSeasons
// Declaration: bool OverriteInactiveSeasons
bool ABP_POI_Spawner_C::M_GetOverriteInactiveSeasons() const {
	return Read<bool>((byte*)this + 1076);
}
bool* ABP_POI_Spawner_C::M_PtrGetOverriteInactiveSeasons() {
	return reinterpret_cast<bool*>((byte*)this + 1076);
}
void ABP_POI_Spawner_C::M_SetOverriteInactiveSeasons(const bool& value) {
	Write((byte*)this + 1076, value);
}
// Member Getter and Setter of PreviewActors
// Declaration: TArray<class UChildActorComponent*> PreviewActors
TArray<class UChildActorComponent*> ABP_POI_Spawner_C::M_GetPreviewActors() const {
	return Read<TArray<class UChildActorComponent*>>((byte*)this + 1080);
}
TArray<class UChildActorComponent*>* ABP_POI_Spawner_C::M_PtrGetPreviewActors() {
	return reinterpret_cast<TArray<class UChildActorComponent*>*>((byte*)this + 1080);
}
void ABP_POI_Spawner_C::M_SetPreviewActors(const TArray<class UChildActorComponent*>& value) {
	Write((byte*)this + 1080, value);
}
// Member Getter and Setter of POIPreviewManager
// Declaration: class AActor* POIPreviewManager
class AActor* ABP_POI_Spawner_C::M_GetPOIPreviewManager() const {
	return Read<class AActor*>((byte*)this + 1096);
}
class AActor** ABP_POI_Spawner_C::M_PtrGetPOIPreviewManager() {
	return reinterpret_cast<class AActor**>((byte*)this + 1096);
}
void ABP_POI_Spawner_C::M_SetPOIPreviewManager(const class AActor*& value) {
	Write((byte*)this + 1096, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.ExecuteUbergraph_BP_POI_Spawner
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_POI_Spawner_C::ExecuteUbergraph_BP_POI_Spawner(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.ExecuteUbergraph_BP_POI_Spawner");

	struct ABP_POI_Spawner_C_ExecuteUbergraph_BP_POI_Spawner_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	ABP_POI_Spawner_C_ExecuteUbergraph_BP_POI_Spawner_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.POI_OnActorDeath
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Spawner_C::POI_OnActorDeath() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.POI_OnActorDeath");

	struct ABP_POI_Spawner_C_POI_OnActorDeath_Params {
	};
	ABP_POI_Spawner_C_POI_OnActorDeath_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.DebugDisplaySpawnRadius
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Spawner_C::DebugDisplaySpawnRadius() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.DebugDisplaySpawnRadius");

	struct ABP_POI_Spawner_C_DebugDisplaySpawnRadius_Params {
	};
	ABP_POI_Spawner_C_DebugDisplaySpawnRadius_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.ReceiveBeginPlay
// Flags: Event, Protected, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Spawner_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.ReceiveBeginPlay");

	struct ABP_POI_Spawner_C_ReceiveBeginPlay_Params {
	};
	ABP_POI_Spawner_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.Preview
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Spawner_C::Preview() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.Preview");

	struct ABP_POI_Spawner_C_Preview_Params {
	};
	ABP_POI_Spawner_C_Preview_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.ClearSpawnerSettings
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Spawner_C::ClearSpawnerSettings() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.ClearSpawnerSettings");

	struct ABP_POI_Spawner_C_ClearSpawnerSettings_Params {
	};
	ABP_POI_Spawner_C_ClearSpawnerSettings_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.DisplayPreview
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: POI	Type: class ABP_POI_Spawner_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_POI_Spawner_C::DisplayPreview(class ABP_POI_Spawner_C* POI) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.DisplayPreview");

	struct ABP_POI_Spawner_C_DisplayPreview_Params {
		class ABP_POI_Spawner_C* POI;			//Offset: 0 | ElementSize: 8
	};
	ABP_POI_Spawner_C_DisplayPreview_Params params;
	params.POI = POI;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.UserConstructionScript
// Flags: Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Spawner_C::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.UserConstructionScript");

	struct ABP_POI_Spawner_C_UserConstructionScript_Params {
	};
	ABP_POI_Spawner_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.Init
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Spawner_C::Init() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.Init");

	struct ABP_POI_Spawner_C_Init_Params {
	};
	ABP_POI_Spawner_C_Init_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.CheckAvailability
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: CurrentSeason	Type: TEnumAsByte<E_Seasons>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Debug	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Available	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_POI_Spawner_C::CheckAvailability(TEnumAsByte<E_Seasons>* CurrentSeason, bool Debug, bool* Available) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.CheckAvailability");

	struct ABP_POI_Spawner_C_CheckAvailability_Params {
		TEnumAsByte<E_Seasons> CurrentSeason;			//Offset: 0 | ElementSize: 1
		bool Debug;			//Offset: 1 | ElementSize: 1
		bool Available;			//Offset: 2 | ElementSize: 1
	};
	ABP_POI_Spawner_C_CheckAvailability_Params params;
	params.Debug = Debug;

	UObject::ProcessEvent(fn, &params);
	if (CurrentSeason != nullptr)
		*CurrentSeason = params.CurrentSeason;
	if (Available != nullptr)
		*Available = params.Available;
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.Spawn
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SystemsManagerReference	Type: class ABP_SystemsManager_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_POI_Spawner_C::Spawn(class ABP_SystemsManager_C** SystemsManagerReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.Spawn");

	struct ABP_POI_Spawner_C_Spawn_Params {
		class ABP_SystemsManager_C* SystemsManagerReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_POI_Spawner_C_Spawn_Params params;

	UObject::ProcessEvent(fn, &params);
	if (SystemsManagerReference != nullptr)
		*SystemsManagerReference = params.SystemsManagerReference;
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnFromSave
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SystemsManagerReference	Type: class ABP_SystemsManager_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Spawns	Type: TArray<struct FST_Helper_Spawner_Indices>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Container	Type: TMap<int32_t, struct FST_InventoryItemsArray>	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: Animal	Type: TArray<struct FST_SAVE_Spawner_Animal>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Item	Type: TArray<struct FST_SAVE_Spawner_Item>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: NPC	Type: TArray<struct FST_SAVE_Spawner_NPC>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: CollFrt	Type: TArray<struct FST_SAVE_Spawner_CollectableFurniture>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: TTAs	Type: TArray<bool>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Triggers	Type: TArray<bool>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: GenericBPs	Type: TArray<struct FPoiObjectData>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_POI_Spawner_C::SpawnFromSave(class ABP_SystemsManager_C** SystemsManagerReference, TArray<struct FST_Helper_Spawner_Indices>* Spawns, TMap<int32_t, struct FST_InventoryItemsArray> Container, TArray<struct FST_SAVE_Spawner_Animal>* Animal, TArray<struct FST_SAVE_Spawner_Item>* Item, TArray<struct FST_SAVE_Spawner_NPC>* NPC, TArray<struct FST_SAVE_Spawner_CollectableFurniture>* CollFrt, TArray<bool>* TTAs, TArray<bool>* Triggers, TArray<struct FPoiObjectData>* GenericBPs) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnFromSave");

	struct ABP_POI_Spawner_C_SpawnFromSave_Params {
		class ABP_SystemsManager_C* SystemsManagerReference;			//Offset: 0 | ElementSize: 8
		TArray<struct FST_Helper_Spawner_Indices> Spawns;			//Offset: 8 | ElementSize: 16
		TMap<int32_t, struct FST_InventoryItemsArray> Container;			//Offset: 24 | ElementSize: 80
		TArray<struct FST_SAVE_Spawner_Animal> Animal;			//Offset: 104 | ElementSize: 16
		TArray<struct FST_SAVE_Spawner_Item> Item;			//Offset: 120 | ElementSize: 16
		TArray<struct FST_SAVE_Spawner_NPC> NPC;			//Offset: 136 | ElementSize: 16
		TArray<struct FST_SAVE_Spawner_CollectableFurniture> CollFrt;			//Offset: 152 | ElementSize: 16
		TArray<bool> TTAs;			//Offset: 168 | ElementSize: 16
		TArray<bool> Triggers;			//Offset: 184 | ElementSize: 16
		TArray<struct FPoiObjectData> GenericBPs;			//Offset: 200 | ElementSize: 16
	};
	ABP_POI_Spawner_C_SpawnFromSave_Params params;
	params.Container = Container;

	UObject::ProcessEvent(fn, &params);
	if (SystemsManagerReference != nullptr)
		*SystemsManagerReference = params.SystemsManagerReference;
	if (Spawns != nullptr)
		*Spawns = params.Spawns;
	if (Animal != nullptr)
		*Animal = params.Animal;
	if (Item != nullptr)
		*Item = params.Item;
	if (NPC != nullptr)
		*NPC = params.NPC;
	if (CollFrt != nullptr)
		*CollFrt = params.CollFrt;
	if (TTAs != nullptr)
		*TTAs = params.TTAs;
	if (Triggers != nullptr)
		*Triggers = params.Triggers;
	if (GenericBPs != nullptr)
		*GenericBPs = params.GenericBPs;
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.ClearSpawns
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Spawner_C::ClearSpawns() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.ClearSpawns");

	struct ABP_POI_Spawner_C_ClearSpawns_Params {
	};
	ABP_POI_Spawner_C_ClearSpawns_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnAnimal
// Flags: Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: What	Type: struct FST_Animal	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: WhatClass	Type: class ABP_AnimalBase_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Place	Type: struct FTransform	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor
// Name: SystemsManagerReference	Type: class ABP_SystemsManager_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Index	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HP	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Poisoned	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Poison	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InitialSpawnDead	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_POI_Spawner_C::SpawnAnimal(struct FST_Animal What, class ABP_AnimalBase_C* WhatClass, struct FTransform Place, class ABP_SystemsManager_C** SystemsManagerReference, int32_t Index, float HP, bool Poisoned, float Poison, bool InitialSpawnDead) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnAnimal");

	struct ABP_POI_Spawner_C_SpawnAnimal_Params {
		struct FST_Animal What;			//Offset: 0 | ElementSize: 272
		class ABP_AnimalBase_C* WhatClass;			//Offset: 272 | ElementSize: 8
		struct FTransform Place;			//Offset: 288 | ElementSize: 48
		class ABP_SystemsManager_C* SystemsManagerReference;			//Offset: 336 | ElementSize: 8
		int32_t Index;			//Offset: 344 | ElementSize: 4
		float HP;			//Offset: 348 | ElementSize: 4
		bool Poisoned;			//Offset: 352 | ElementSize: 1
		float Poison;			//Offset: 356 | ElementSize: 4
		bool InitialSpawnDead;			//Offset: 360 | ElementSize: 1
	};
	ABP_POI_Spawner_C_SpawnAnimal_Params params;
	params.What = What;
	params.WhatClass = WhatClass;
	params.Place = Place;
	params.Index = Index;
	params.HP = HP;
	params.Poisoned = Poisoned;
	params.Poison = Poison;
	params.InitialSpawnDead = InitialSpawnDead;

	UObject::ProcessEvent(fn, &params);
	if (SystemsManagerReference != nullptr)
		*SystemsManagerReference = params.SystemsManagerReference;
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnNPC
// Flags: Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_Data	Type: struct FST_Spawner_NPC	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: SystemsManagerReference	Type: class ABP_SystemsManager_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Index	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_POI_Spawner_C::SpawnNPC(struct FST_Spawner_NPC NPC_Data, class ABP_SystemsManager_C** SystemsManagerReference, int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnNPC");

	struct ABP_POI_Spawner_C_SpawnNPC_Params {
		struct FST_Spawner_NPC NPC_Data;			//Offset: 0 | ElementSize: 224
		class ABP_SystemsManager_C* SystemsManagerReference;			//Offset: 224 | ElementSize: 8
		int32_t Index;			//Offset: 232 | ElementSize: 4
	};
	ABP_POI_Spawner_C_SpawnNPC_Params params;
	params.NPC_Data = NPC_Data;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
	if (SystemsManagerReference != nullptr)
		*SystemsManagerReference = params.SystemsManagerReference;
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnItem
// Flags: Protected, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: What	Type: struct FDataTableRowHandle	Flags: BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor
// Name: HowMuch	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Place	Type: struct FTransform	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor
// Name: Index	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Condition	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Physics	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_POI_Spawner_C::SpawnItem(struct FDataTableRowHandle What, int32_t HowMuch, struct FTransform Place, int32_t Index, float Condition, bool Physics, TEnumAsByte<E_Ownership> Ownership) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnItem");

	struct ABP_POI_Spawner_C_SpawnItem_Params {
		struct FDataTableRowHandle What;			//Offset: 0 | ElementSize: 16
		int32_t HowMuch;			//Offset: 16 | ElementSize: 4
		struct FTransform Place;			//Offset: 32 | ElementSize: 48
		int32_t Index;			//Offset: 80 | ElementSize: 4
		float Condition;			//Offset: 84 | ElementSize: 4
		bool Physics;			//Offset: 88 | ElementSize: 1
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 89 | ElementSize: 1
	};
	ABP_POI_Spawner_C_SpawnItem_Params params;
	params.What = What;
	params.HowMuch = HowMuch;
	params.Place = Place;
	params.Index = Index;
	params.Condition = Condition;
	params.Physics = Physics;
	params.Ownership = Ownership;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnFurniture
// Flags: Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Furniture	Type: struct FDataTableRowHandle	Flags: BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Place	Type: struct FTransform	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor
// Name: SystemsManagerReference	Type: class ABP_SystemsManager_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Index	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_POI_Spawner_C::SpawnFurniture(struct FDataTableRowHandle Furniture, TEnumAsByte<E_Ownership> Ownership, struct FTransform Place, class ABP_SystemsManager_C** SystemsManagerReference, int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnFurniture");

	struct ABP_POI_Spawner_C_SpawnFurniture_Params {
		struct FDataTableRowHandle Furniture;			//Offset: 0 | ElementSize: 16
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 16 | ElementSize: 1
		struct FTransform Place;			//Offset: 32 | ElementSize: 48
		class ABP_SystemsManager_C* SystemsManagerReference;			//Offset: 80 | ElementSize: 8
		int32_t Index;			//Offset: 88 | ElementSize: 4
	};
	ABP_POI_Spawner_C_SpawnFurniture_Params params;
	params.Furniture = Furniture;
	params.Ownership = Ownership;
	params.Place = Place;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
	if (SystemsManagerReference != nullptr)
		*SystemsManagerReference = params.SystemsManagerReference;
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnMesh
// Flags: Protected, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Mesh	Type: class UStaticMesh*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Place	Type: struct FTransform	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor
// Name: Index	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_POI_Spawner_C::SpawnMesh(class UStaticMesh* Mesh, struct FTransform Place, int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnMesh");

	struct ABP_POI_Spawner_C_SpawnMesh_Params {
		class UStaticMesh* Mesh;			//Offset: 0 | ElementSize: 8
		struct FTransform Place;			//Offset: 16 | ElementSize: 48
		int32_t Index;			//Offset: 64 | ElementSize: 4
	};
	ABP_POI_Spawner_C_SpawnMesh_Params params;
	params.Mesh = Mesh;
	params.Place = Place;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.AddNPC
// Flags: Protected, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Spawner_C::AddNPC() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.AddNPC");

	struct ABP_POI_Spawner_C_AddNPC_Params {
	};
	ABP_POI_Spawner_C_AddNPC_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.AddAnimal
// Flags: Protected, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Spawner_C::AddAnimal() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.AddAnimal");

	struct ABP_POI_Spawner_C_AddAnimal_Params {
	};
	ABP_POI_Spawner_C_AddAnimal_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.AddItem
// Flags: Protected, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Spawner_C::AddItem() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.AddItem");

	struct ABP_POI_Spawner_C_AddItem_Params {
	};
	ABP_POI_Spawner_C_AddItem_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.DisplayArrows
// Flags: Protected, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Spawner_C::DisplayArrows() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.DisplayArrows");

	struct ABP_POI_Spawner_C_DisplayArrows_Params {
	};
	ABP_POI_Spawner_C_DisplayArrows_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.AddContainer
// Flags: Protected, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Spawner_C::AddContainer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.AddContainer");

	struct ABP_POI_Spawner_C_AddContainer_Params {
	};
	ABP_POI_Spawner_C_AddContainer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.AddFurniture
// Flags: Protected, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Spawner_C::AddFurniture() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.AddFurniture");

	struct ABP_POI_Spawner_C_AddFurniture_Params {
	};
	ABP_POI_Spawner_C_AddFurniture_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.AddMesh
// Flags: Protected, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Spawner_C::AddMesh() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.AddMesh");

	struct ABP_POI_Spawner_C_AddMesh_Params {
	};
	ABP_POI_Spawner_C_AddMesh_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnMeshes
// Flags: Protected, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Spawner_C::SpawnMeshes() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnMeshes");

	struct ABP_POI_Spawner_C_SpawnMeshes_Params {
	};
	ABP_POI_Spawner_C_SpawnMeshes_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnChestWithItems
// Flags: Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Place	Type: struct FTransform	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor
// Name: V_ChestItems	Type: TArray<struct FST_Spawner_ContainerItemPreset>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: TypeOfContainer	Type: class ABP_MasterFurniture_Container_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SystemsManagerReference	Type: class ABP_SystemsManager_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Index	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_POI_Spawner_C::SpawnChestWithItems(struct FTransform Place, TArray<struct FST_Spawner_ContainerItemPreset>* V_ChestItems, class ABP_MasterFurniture_Container_C* TypeOfContainer, class ABP_SystemsManager_C** SystemsManagerReference, int32_t Index, TEnumAsByte<E_Ownership> Ownership) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnChestWithItems");

	struct ABP_POI_Spawner_C_SpawnChestWithItems_Params {
		struct FTransform Place;			//Offset: 0 | ElementSize: 48
		TArray<struct FST_Spawner_ContainerItemPreset> V_ChestItems;			//Offset: 48 | ElementSize: 16
		class ABP_MasterFurniture_Container_C* TypeOfContainer;			//Offset: 64 | ElementSize: 8
		class ABP_SystemsManager_C* SystemsManagerReference;			//Offset: 72 | ElementSize: 8
		int32_t Index;			//Offset: 80 | ElementSize: 4
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 84 | ElementSize: 1
	};
	ABP_POI_Spawner_C_SpawnChestWithItems_Params params;
	params.Place = Place;
	params.TypeOfContainer = TypeOfContainer;
	params.Index = Index;
	params.Ownership = Ownership;

	UObject::ProcessEvent(fn, &params);
	if (V_ChestItems != nullptr)
		*V_ChestItems = params.V_ChestItems;
	if (SystemsManagerReference != nullptr)
		*SystemsManagerReference = params.SystemsManagerReference;
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnDecal
// Flags: Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SpawnerDecal	Type: struct FST_Spawner_Decal	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Index	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_POI_Spawner_C::SpawnDecal(const struct FST_Spawner_Decal& SpawnerDecal, int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnDecal");

	struct ABP_POI_Spawner_C_SpawnDecal_Params {
		struct FST_Spawner_Decal SpawnerDecal;			//Offset: 0 | ElementSize: 64
		int32_t Index;			//Offset: 64 | ElementSize: 4
	};
	ABP_POI_Spawner_C_SpawnDecal_Params params;
	params.SpawnerDecal = SpawnerDecal;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnCollectableFurniture
// Flags: Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SpawnerFurniture	Type: struct FST_Spawner_CollectableFurniture	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash
// Name: Collected	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SysMngr	Type: class ABP_SystemsManager_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Index	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_POI_Spawner_C::SpawnCollectableFurniture(const struct FST_Spawner_CollectableFurniture& SpawnerFurniture, bool Collected, class ABP_SystemsManager_C** SysMngr, int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnCollectableFurniture");

	struct ABP_POI_Spawner_C_SpawnCollectableFurniture_Params {
		struct FST_Spawner_CollectableFurniture SpawnerFurniture;			//Offset: 0 | ElementSize: 112
		bool Collected;			//Offset: 112 | ElementSize: 1
		class ABP_SystemsManager_C* SysMngr;			//Offset: 120 | ElementSize: 8
		int32_t Index;			//Offset: 128 | ElementSize: 4
	};
	ABP_POI_Spawner_C_SpawnCollectableFurniture_Params params;
	params.SpawnerFurniture = SpawnerFurniture;
	params.Collected = Collected;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
	if (SysMngr != nullptr)
		*SysMngr = params.SysMngr;
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnAnimatedMeshes
// Flags: Protected, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Spawner_C::SpawnAnimatedMeshes() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnAnimatedMeshes");

	struct ABP_POI_Spawner_C_SpawnAnimatedMeshes_Params {
	};
	ABP_POI_Spawner_C_SpawnAnimatedMeshes_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnTalkToActor
// Flags: Protected, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: TTA	Type: struct FST_Spawner_TalkToActor	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: InteractionEnabled	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Index	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_POI_Spawner_C::SpawnTalkToActor(struct FST_Spawner_TalkToActor TTA, bool InteractionEnabled, int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnTalkToActor");

	struct ABP_POI_Spawner_C_SpawnTalkToActor_Params {
		struct FST_Spawner_TalkToActor TTA;			//Offset: 0 | ElementSize: 160
		bool InteractionEnabled;			//Offset: 160 | ElementSize: 1
		int32_t Index;			//Offset: 164 | ElementSize: 4
	};
	ABP_POI_Spawner_C_SpawnTalkToActor_Params params;
	params.TTA = TTA;
	params.InteractionEnabled = InteractionEnabled;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnTrigger
// Flags: Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: TriggerSettings	Type: struct FST_Spawner_Trigger	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AlreadyFired	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SysManager	Type: class ABP_SystemsManager_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Index	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_POI_Spawner_C::SpawnTrigger(struct FST_Spawner_Trigger TriggerSettings, bool AlreadyFired, class ABP_SystemsManager_C** SysManager, int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnTrigger");

	struct ABP_POI_Spawner_C_SpawnTrigger_Params {
		struct FST_Spawner_Trigger TriggerSettings;			//Offset: 0 | ElementSize: 80
		bool AlreadyFired;			//Offset: 80 | ElementSize: 1
		class ABP_SystemsManager_C* SysManager;			//Offset: 88 | ElementSize: 8
		int32_t Index;			//Offset: 96 | ElementSize: 4
	};
	ABP_POI_Spawner_C_SpawnTrigger_Params params;
	params.TriggerSettings = TriggerSettings;
	params.AlreadyFired = AlreadyFired;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
	if (SysManager != nullptr)
		*SysManager = params.SysManager;
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnBlueprints
// Flags: Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SpawnerBP	Type: struct FST_Spawner_BP	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash
// Name: Index	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_POI_Spawner_C::SpawnBlueprints(const struct FST_Spawner_BP& SpawnerBP, int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnBlueprints");

	struct ABP_POI_Spawner_C_SpawnBlueprints_Params {
		struct FST_Spawner_BP SpawnerBP;			//Offset: 0 | ElementSize: 96
		int32_t Index;			//Offset: 96 | ElementSize: 4
	};
	ABP_POI_Spawner_C_SpawnBlueprints_Params params;
	params.SpawnerBP = SpawnerBP;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnCustom
// Flags: Protected, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Actor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Index	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_POI_Spawner_C::SpawnCustom(class AActor* Actor, int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnCustom");

	struct ABP_POI_Spawner_C_SpawnCustom_Params {
		class AActor* Actor;			//Offset: 0 | ElementSize: 8
		int32_t Index;			//Offset: 8 | ElementSize: 4
	};
	ABP_POI_Spawner_C_SpawnCustom_Params params;
	params.Actor = Actor;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.RollNumberOfSeasons
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Spawner_C::RollNumberOfSeasons() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.RollNumberOfSeasons");

	struct ABP_POI_Spawner_C_RollNumberOfSeasons_Params {
	};
	ABP_POI_Spawner_C_RollNumberOfSeasons_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnNPC_Save
// Flags: Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Who	Type: struct FST_SAVE_Spawner_NPC	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: WhoFromSpawner	Type: struct FST_Spawner_NPC	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: SystemsManagerReference	Type: class ABP_SystemsManager_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_POI_Spawner_C::SpawnNPC_Save(struct FST_SAVE_Spawner_NPC Who, struct FST_Spawner_NPC WhoFromSpawner, class ABP_SystemsManager_C** SystemsManagerReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnNPC_Save");

	struct ABP_POI_Spawner_C_SpawnNPC_Save_Params {
		struct FST_SAVE_Spawner_NPC Who;			//Offset: 0 | ElementSize: 312
		struct FST_Spawner_NPC WhoFromSpawner;			//Offset: 320 | ElementSize: 224
		class ABP_SystemsManager_C* SystemsManagerReference;			//Offset: 544 | ElementSize: 8
	};
	ABP_POI_Spawner_C_SpawnNPC_Save_Params params;
	params.Who = Who;
	params.WhoFromSpawner = WhoFromSpawner;

	UObject::ProcessEvent(fn, &params);
	if (SystemsManagerReference != nullptr)
		*SystemsManagerReference = params.SystemsManagerReference;
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnChestWithItems_Save
// Flags: Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Place	Type: struct FTransform	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor
// Name: V_ChestItems	Type: TArray<struct FST_ItemInventorys>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: TypeOfContainer	Type: class ABP_MasterFurniture_Container_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SystemsManagerReference	Type: class ABP_SystemsManager_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Index	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_POI_Spawner_C::SpawnChestWithItems_Save(struct FTransform Place, TArray<struct FST_ItemInventorys>* V_ChestItems, class ABP_MasterFurniture_Container_C* TypeOfContainer, class ABP_SystemsManager_C** SystemsManagerReference, int32_t Index, TEnumAsByte<E_Ownership> Ownership) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnChestWithItems_Save");

	struct ABP_POI_Spawner_C_SpawnChestWithItems_Save_Params {
		struct FTransform Place;			//Offset: 0 | ElementSize: 48
		TArray<struct FST_ItemInventorys> V_ChestItems;			//Offset: 48 | ElementSize: 16
		class ABP_MasterFurniture_Container_C* TypeOfContainer;			//Offset: 64 | ElementSize: 8
		class ABP_SystemsManager_C* SystemsManagerReference;			//Offset: 72 | ElementSize: 8
		int32_t Index;			//Offset: 80 | ElementSize: 4
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 84 | ElementSize: 1
	};
	ABP_POI_Spawner_C_SpawnChestWithItems_Save_Params params;
	params.Place = Place;
	params.TypeOfContainer = TypeOfContainer;
	params.Index = Index;
	params.Ownership = Ownership;

	UObject::ProcessEvent(fn, &params);
	if (V_ChestItems != nullptr)
		*V_ChestItems = params.V_ChestItems;
	if (SystemsManagerReference != nullptr)
		*SystemsManagerReference = params.SystemsManagerReference;
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.AddDecal
// Flags: Protected, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Spawner_C::AddDecal() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.AddDecal");

	struct ABP_POI_Spawner_C_AddDecal_Params {
	};
	ABP_POI_Spawner_C_AddDecal_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.ReloadAfterSettingsChange
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: GameMode	Type: class AGM_MedievalDynasty_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_POI_Spawner_C::ReloadAfterSettingsChange(class AGM_MedievalDynasty_C** GameMode) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.ReloadAfterSettingsChange");

	struct ABP_POI_Spawner_C_ReloadAfterSettingsChange_Params {
		class AGM_MedievalDynasty_C* GameMode;			//Offset: 0 | ElementSize: 8
	};
	ABP_POI_Spawner_C_ReloadAfterSettingsChange_Params params;

	UObject::ProcessEvent(fn, &params);
	if (GameMode != nullptr)
		*GameMode = params.GameMode;
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.AddCollectibleFurniture
// Flags: Protected, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Spawner_C::AddCollectibleFurniture() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.AddCollectibleFurniture");

	struct ABP_POI_Spawner_C_AddCollectibleFurniture_Params {
	};
	ABP_POI_Spawner_C_AddCollectibleFurniture_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.OnBanditDeath
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Spawner_C::OnBanditDeath() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.OnBanditDeath");

	struct ABP_POI_Spawner_C_OnBanditDeath_Params {
	};
	ABP_POI_Spawner_C_OnBanditDeath_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.ChooseMutuallyExclusivePOI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Spawner_C::ChooseMutuallyExclusivePOI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.ChooseMutuallyExclusivePOI");

	struct ABP_POI_Spawner_C_ChooseMutuallyExclusivePOI_Params {
	};
	ABP_POI_Spawner_C_ChooseMutuallyExclusivePOI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.ResetChosenExclusive
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Spawner_C::ResetChosenExclusive() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.ResetChosenExclusive");

	struct ABP_POI_Spawner_C_ResetChosenExclusive_Params {
	};
	ABP_POI_Spawner_C_ResetChosenExclusive_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.AddAnimatedMesh
// Flags: Protected, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Spawner_C::AddAnimatedMesh() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.AddAnimatedMesh");

	struct ABP_POI_Spawner_C_AddAnimatedMesh_Params {
	};
	ABP_POI_Spawner_C_AddAnimatedMesh_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.TryOverrideInactivityTime
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewTime	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_POI_Spawner_C::TryOverrideInactivityTime(int32_t NewTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.TryOverrideInactivityTime");

	struct ABP_POI_Spawner_C_TryOverrideInactivityTime_Params {
		int32_t NewTime;			//Offset: 0 | ElementSize: 4
	};
	ABP_POI_Spawner_C_TryOverrideInactivityTime_Params params;
	params.NewTime = NewTime;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.MarkForSpawn
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Spawner_C::MarkForSpawn() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.MarkForSpawn");

	struct ABP_POI_Spawner_C_MarkForSpawn_Params {
	};
	ABP_POI_Spawner_C_MarkForSpawn_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.Set Marked for Spawn
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Marked	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_POI_Spawner_C::Set_Marked_for_Spawn(bool Marked) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.Set Marked for Spawn");

	struct ABP_POI_Spawner_C_Set_Marked_for_Spawn_Params {
		bool Marked;			//Offset: 0 | ElementSize: 1
	};
	ABP_POI_Spawner_C_Set_Marked_for_Spawn_Params params;
	params.Marked = Marked;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.IsMarkedForSpawn
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: MarkedForSpawning	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_POI_Spawner_C::IsMarkedForSpawn(bool* MarkedForSpawning) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.IsMarkedForSpawn");

	struct ABP_POI_Spawner_C_IsMarkedForSpawn_Params {
		bool MarkedForSpawning;			//Offset: 0 | ElementSize: 1
	};
	ABP_POI_Spawner_C_IsMarkedForSpawn_Params params;

	UObject::ProcessEvent(fn, &params);
	if (MarkedForSpawning != nullptr)
		*MarkedForSpawning = params.MarkedForSpawning;
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.ActivatePOI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Spawner_C::ActivatePOI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.ActivatePOI");

	struct ABP_POI_Spawner_C_ActivatePOI_Params {
	};
	ABP_POI_Spawner_C_ActivatePOI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.GetSpawnRadius
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: SpawnRadious	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_POI_Spawner_C::GetSpawnRadius(float* SpawnRadious) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.GetSpawnRadius");

	struct ABP_POI_Spawner_C_GetSpawnRadius_Params {
		float SpawnRadious;			//Offset: 0 | ElementSize: 4
	};
	ABP_POI_Spawner_C_GetSpawnRadius_Params params;

	UObject::ProcessEvent(fn, &params);
	if (SpawnRadious != nullptr)
		*SpawnRadious = params.SpawnRadious;
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.TryRemoveActorReference
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ActorRef	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Removed	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_POI_Spawner_C::TryRemoveActorReference(class AActor** ActorRef, bool* Removed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.TryRemoveActorReference");

	struct ABP_POI_Spawner_C_TryRemoveActorReference_Params {
		class AActor* ActorRef;			//Offset: 0 | ElementSize: 8
		bool Removed;			//Offset: 8 | ElementSize: 1
	};
	ABP_POI_Spawner_C_TryRemoveActorReference_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ActorRef != nullptr)
		*ActorRef = params.ActorRef;
	if (Removed != nullptr)
		*Removed = params.Removed;
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.AddTalkToActor
// Flags: Protected, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Spawner_C::AddTalkToActor() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.AddTalkToActor");

	struct ABP_POI_Spawner_C_AddTalkToActor_Params {
	};
	ABP_POI_Spawner_C_AddTalkToActor_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.AddTrigger
// Flags: Protected, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Spawner_C::AddTrigger() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.AddTrigger");

	struct ABP_POI_Spawner_C_AddTrigger_Params {
	};
	ABP_POI_Spawner_C_AddTrigger_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.AddBP
// Flags: Protected, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Spawner_C::AddBP() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.AddBP");

	struct ABP_POI_Spawner_C_AddBP_Params {
	};
	ABP_POI_Spawner_C_AddBP_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.MakeSpawnTransform
// Flags: Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: FromPoiTransform	Type: struct FTransform	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor
// Name: WorldSpawnTransform	Type: struct FTransform	Flags: Parm, OutParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_POI_Spawner_C::MakeSpawnTransform(const struct FTransform& FromPoiTransform, struct FTransform* WorldSpawnTransform) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.MakeSpawnTransform");

	struct ABP_POI_Spawner_C_MakeSpawnTransform_Params {
		struct FTransform FromPoiTransform;			//Offset: 0 | ElementSize: 48
		struct FTransform WorldSpawnTransform;			//Offset: 48 | ElementSize: 48
	};
	ABP_POI_Spawner_C_MakeSpawnTransform_Params params;
	params.FromPoiTransform = FromPoiTransform;

	UObject::ProcessEvent(fn, &params);
	if (WorldSpawnTransform != nullptr)
		*WorldSpawnTransform = params.WorldSpawnTransform;
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnBlueprints_Save
// Flags: Protected, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveData	Type: struct FPoiObjectData	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: Index	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_POI_Spawner_C::SpawnBlueprints_Save(struct FPoiObjectData SaveData, int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnBlueprints_Save");

	struct ABP_POI_Spawner_C_SpawnBlueprints_Save_Params {
		struct FPoiObjectData SaveData;			//Offset: 0 | ElementSize: 24
		int32_t Index;			//Offset: 24 | ElementSize: 4
	};
	ABP_POI_Spawner_C_SpawnBlueprints_Save_Params params;
	params.SaveData = SaveData;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.AreNPCsDead
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: AllNpcsDead	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_POI_Spawner_C::AreNPCsDead(bool* AllNpcsDead) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.AreNPCsDead");

	struct ABP_POI_Spawner_C_AreNPCsDead_Params {
		bool AllNpcsDead;			//Offset: 0 | ElementSize: 1
	};
	ABP_POI_Spawner_C_AreNPCsDead_Params params;

	UObject::ProcessEvent(fn, &params);
	if (AllNpcsDead != nullptr)
		*AllNpcsDead = params.AllNpcsDead;
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.SetupStaticMeshActorReplication
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
// Name: SpawnedActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_POI_Spawner_C::SetupStaticMeshActorReplication(class AActor* SpawnedActor) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.SetupStaticMeshActorReplication");

	struct ABP_POI_Spawner_C_SetupStaticMeshActorReplication_Params {
		class AActor* SpawnedActor;			//Offset: 0 | ElementSize: 8
	};
	ABP_POI_Spawner_C_SetupStaticMeshActorReplication_Params params;
	params.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.POI_GetActorsOfType
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ActorsTypes	Type: TEnumAsByte<E_ActorType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Actors	Type: TArray<class AActor*>	Flags: Parm, OutParm
// Name: FoundAny	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_POI_Spawner_C::POI_GetActorsOfType(TEnumAsByte<E_ActorType> ActorsTypes, TArray<class AActor*>* Actors, bool* FoundAny) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.POI_GetActorsOfType");

	struct ABP_POI_Spawner_C_POI_GetActorsOfType_Params {
		TEnumAsByte<E_ActorType> ActorsTypes;			//Offset: 0 | ElementSize: 1
		TArray<class AActor*> Actors;			//Offset: 8 | ElementSize: 16
		bool FoundAny;			//Offset: 24 | ElementSize: 1
	};
	ABP_POI_Spawner_C_POI_GetActorsOfType_Params params;
	params.ActorsTypes = ActorsTypes;

	UObject::ProcessEvent(fn, &params);
	if (Actors != nullptr)
		*Actors = params.Actors;
	if (FoundAny != nullptr)
		*FoundAny = params.FoundAny;
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.POI_GetRandomSpawnPoint
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: POI_ActorType	Type: TEnumAsByte<E_ActorType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SpawnPoint	Type: struct FTransform	Flags: Parm, OutParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_POI_Spawner_C::POI_GetRandomSpawnPoint(TEnumAsByte<E_ActorType> POI_ActorType, bool* Success, struct FTransform* SpawnPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.POI_GetRandomSpawnPoint");

	struct ABP_POI_Spawner_C_POI_GetRandomSpawnPoint_Params {
		TEnumAsByte<E_ActorType> POI_ActorType;			//Offset: 0 | ElementSize: 1
		bool Success;			//Offset: 1 | ElementSize: 1
		struct FTransform SpawnPoint;			//Offset: 16 | ElementSize: 48
	};
	ABP_POI_Spawner_C_POI_GetRandomSpawnPoint_Params params;
	params.POI_ActorType = POI_ActorType;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (SpawnPoint != nullptr)
		*SpawnPoint = params.SpawnPoint;
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.GetPOITTAData_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Index	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TTAData	Type: struct FST_Spawner_TalkToActor	Flags: Parm, OutParm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_POI_Spawner_C::GetPOITTAData_BPI(int32_t Index, struct FST_Spawner_TalkToActor* TTAData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.GetPOITTAData_BPI");

	struct ABP_POI_Spawner_C_GetPOITTAData_BPI_Params {
		int32_t Index;			//Offset: 0 | ElementSize: 4
		struct FST_Spawner_TalkToActor TTAData;			//Offset: 16 | ElementSize: 160
	};
	ABP_POI_Spawner_C_GetPOITTAData_BPI_Params params;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
	if (TTAData != nullptr)
		*TTAData = params.TTAData;
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.SaveGenericBP
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: InObject	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: itsIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: outSerialized	Type: struct FPoiObjectData	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_POI_Spawner_C::SaveGenericBP(class UObject** InObject, int32_t itsIndex, bool* Success, struct FPoiObjectData* outSerialized) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.SaveGenericBP");

	struct ABP_POI_Spawner_C_SaveGenericBP_Params {
		class UObject* InObject;			//Offset: 0 | ElementSize: 8
		int32_t itsIndex;			//Offset: 8 | ElementSize: 4
		bool Success;			//Offset: 12 | ElementSize: 1
		struct FPoiObjectData outSerialized;			//Offset: 16 | ElementSize: 24
	};
	ABP_POI_Spawner_C_SaveGenericBP_Params params;
	params.itsIndex = itsIndex;

	UObject::ProcessEvent(fn, &params);
	if (InObject != nullptr)
		*InObject = params.InObject;
	if (Success != nullptr)
		*Success = params.Success;
	if (outSerialized != nullptr)
		*outSerialized = params.outSerialized;
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.LoadGenericBP
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: inSerialized	Type: struct FPoiObjectData	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: outObject	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_POI_Spawner_C::LoadGenericBP(struct FPoiObjectData* inSerialized, bool* Success, class UObject** outObject) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.LoadGenericBP");

	struct ABP_POI_Spawner_C_LoadGenericBP_Params {
		struct FPoiObjectData inSerialized;			//Offset: 0 | ElementSize: 24
		bool Success;			//Offset: 24 | ElementSize: 1
		class UObject* outObject;			//Offset: 32 | ElementSize: 8
	};
	ABP_POI_Spawner_C_LoadGenericBP_Params params;

	UObject::ProcessEvent(fn, &params);
	if (inSerialized != nullptr)
		*inSerialized = params.inSerialized;
	if (Success != nullptr)
		*Success = params.Success;
	if (outObject != nullptr)
		*outObject = params.outObject;
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.GetPoiBpSaveObject
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ObjectToSave	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_POI_Spawner_C::GetPoiBpSaveObject(class UObject** ObjectToSave) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.GetPoiBpSaveObject");

	struct ABP_POI_Spawner_C_GetPoiBpSaveObject_Params {
		class UObject* ObjectToSave;			//Offset: 0 | ElementSize: 8
	};
	ABP_POI_Spawner_C_GetPoiBpSaveObject_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ObjectToSave != nullptr)
		*ObjectToSave = params.ObjectToSave;
}

/////////////////////////////////////////////
// Function BP_POI_Spawner.BP_POI_Spawner_C.ApplyPoiBpSerialization
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Data	Type: TArray<unsigned char>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_POI_Spawner_C::ApplyPoiBpSerialization(const TArray<unsigned char>& Data, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.ApplyPoiBpSerialization");

	struct ABP_POI_Spawner_C_ApplyPoiBpSerialization_Params {
		TArray<unsigned char> Data;			//Offset: 0 | ElementSize: 16
		bool Success;			//Offset: 16 | ElementSize: 1
	};
	ABP_POI_Spawner_C_ApplyPoiBpSerialization_Params params;
	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

#pragma endregion
}