#include "../SDK.h"
#include "BP_AnimalsManager_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame ABP_AnimalsManager_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 544);
}
struct FPointerToUberGraphFrame* ABP_AnimalsManager_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 544);
}
void ABP_AnimalsManager_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 544, value);
}
// Member Getter and Setter of DefaultSceneRoot
// Declaration: class USceneComponent* DefaultSceneRoot
class USceneComponent* ABP_AnimalsManager_C::M_GetDefaultSceneRoot() const {
	return Read<class USceneComponent*>((byte*)this + 552);
}
class USceneComponent** ABP_AnimalsManager_C::M_PtrGetDefaultSceneRoot() {
	return reinterpret_cast<class USceneComponent**>((byte*)this + 552);
}
void ABP_AnimalsManager_C::M_SetDefaultSceneRoot(const class USceneComponent*& value) {
	Write((byte*)this + 552, value);
}
// Member Getter and Setter of SystemsManagerReference
// Declaration: class ABP_SystemsManager_C* SystemsManagerReference
class ABP_SystemsManager_C* ABP_AnimalsManager_C::M_GetSystemsManagerReference() const {
	return Read<class ABP_SystemsManager_C*>((byte*)this + 560);
}
class ABP_SystemsManager_C** ABP_AnimalsManager_C::M_PtrGetSystemsManagerReference() {
	return reinterpret_cast<class ABP_SystemsManager_C**>((byte*)this + 560);
}
void ABP_AnimalsManager_C::M_SetSystemsManagerReference(const class ABP_SystemsManager_C*& value) {
	Write((byte*)this + 560, value);
}
// Member Getter and Setter of AnimalThreadPool
// Declaration: class UMultiTaskThreadPool* AnimalThreadPool
class UMultiTaskThreadPool* ABP_AnimalsManager_C::M_GetAnimalThreadPool() const {
	return Read<class UMultiTaskThreadPool*>((byte*)this + 568);
}
class UMultiTaskThreadPool** ABP_AnimalsManager_C::M_PtrGetAnimalThreadPool() {
	return reinterpret_cast<class UMultiTaskThreadPool**>((byte*)this + 568);
}
void ABP_AnimalsManager_C::M_SetAnimalThreadPool(const class UMultiTaskThreadPool*& value) {
	Write((byte*)this + 568, value);
}
// Member Getter and Setter of WildAnimals
// Declaration: TArray<class ABP_AnimalBase_C*> WildAnimals
TArray<class ABP_AnimalBase_C*> ABP_AnimalsManager_C::M_GetWildAnimals() const {
	return Read<TArray<class ABP_AnimalBase_C*>>((byte*)this + 576);
}
TArray<class ABP_AnimalBase_C*>* ABP_AnimalsManager_C::M_PtrGetWildAnimals() {
	return reinterpret_cast<TArray<class ABP_AnimalBase_C*>*>((byte*)this + 576);
}
void ABP_AnimalsManager_C::M_SetWildAnimals(const TArray<class ABP_AnimalBase_C*>& value) {
	Write((byte*)this + 576, value);
}
// Member Getter and Setter of TimerCheckAnimals
// Declaration: struct FTimerHandle TimerCheckAnimals
struct FTimerHandle ABP_AnimalsManager_C::M_GetTimerCheckAnimals() const {
	return Read<struct FTimerHandle>((byte*)this + 592);
}
struct FTimerHandle* ABP_AnimalsManager_C::M_PtrGetTimerCheckAnimals() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 592);
}
void ABP_AnimalsManager_C::M_SetTimerCheckAnimals(const struct FTimerHandle& value) {
	Write((byte*)this + 592, value);
}
// Member Getter and Setter of CheckAnimalsUpdateDelay
// Declaration: float CheckAnimalsUpdateDelay
float ABP_AnimalsManager_C::M_GetCheckAnimalsUpdateDelay() const {
	return Read<float>((byte*)this + 600);
}
float* ABP_AnimalsManager_C::M_PtrGetCheckAnimalsUpdateDelay() {
	return reinterpret_cast<float*>((byte*)this + 600);
}
void ABP_AnimalsManager_C::M_SetCheckAnimalsUpdateDelay(const float& value) {
	Write((byte*)this + 600, value);
}
// Member Getter and Setter of SpawnPointsWildAnimal
// Declaration: TArray<class ABP_SpawnPointWildAnimal_C*> SpawnPointsWildAnimal
TArray<class ABP_SpawnPointWildAnimal_C*> ABP_AnimalsManager_C::M_GetSpawnPointsWildAnimal() const {
	return Read<TArray<class ABP_SpawnPointWildAnimal_C*>>((byte*)this + 608);
}
TArray<class ABP_SpawnPointWildAnimal_C*>* ABP_AnimalsManager_C::M_PtrGetSpawnPointsWildAnimal() {
	return reinterpret_cast<TArray<class ABP_SpawnPointWildAnimal_C*>*>((byte*)this + 608);
}
void ABP_AnimalsManager_C::M_SetSpawnPointsWildAnimal(const TArray<class ABP_SpawnPointWildAnimal_C*>& value) {
	Write((byte*)this + 608, value);
}
// Member Getter and Setter of DistanceOfBrainActivity
// Declaration: float DistanceOfBrainActivity
float ABP_AnimalsManager_C::M_GetDistanceOfBrainActivity() const {
	return Read<float>((byte*)this + 624);
}
float* ABP_AnimalsManager_C::M_PtrGetDistanceOfBrainActivity() {
	return reinterpret_cast<float*>((byte*)this + 624);
}
void ABP_AnimalsManager_C::M_SetDistanceOfBrainActivity(const float& value) {
	Write((byte*)this + 624, value);
}
// Member Getter and Setter of DistanceOfBrainActivitySquared
// Declaration: float DistanceOfBrainActivitySquared
float ABP_AnimalsManager_C::M_GetDistanceOfBrainActivitySquared() const {
	return Read<float>((byte*)this + 628);
}
float* ABP_AnimalsManager_C::M_PtrGetDistanceOfBrainActivitySquared() {
	return reinterpret_cast<float*>((byte*)this + 628);
}
void ABP_AnimalsManager_C::M_SetDistanceOfBrainActivitySquared(const float& value) {
	Write((byte*)this + 628, value);
}
// Member Getter and Setter of HusbandryAnimalsRemovedByEvent
// Declaration: TMap<TEnumAsByte<E_AnimalType>, int32_t> HusbandryAnimalsRemovedByEvent
TMap<TEnumAsByte<E_AnimalType>, int32_t> ABP_AnimalsManager_C::M_GetHusbandryAnimalsRemovedByEvent() const {
	return Read<TMap<TEnumAsByte<E_AnimalType>, int32_t>>((byte*)this + 632);
}
TMap<TEnumAsByte<E_AnimalType>, int32_t>* ABP_AnimalsManager_C::M_PtrGetHusbandryAnimalsRemovedByEvent() {
	return reinterpret_cast<TMap<TEnumAsByte<E_AnimalType>, int32_t>*>((byte*)this + 632);
}
void ABP_AnimalsManager_C::M_SetHusbandryAnimalsRemovedByEvent(const TMap<TEnumAsByte<E_AnimalType>, int32_t>& value) {
	Write((byte*)this + 632, value);
}
// Member Getter and Setter of ShowDebugInfo
// Declaration: bool ShowDebugInfo
bool ABP_AnimalsManager_C::M_GetShowDebugInfo() const {
	return Read<bool>((byte*)this + 712);
}
bool* ABP_AnimalsManager_C::M_PtrGetShowDebugInfo() {
	return reinterpret_cast<bool*>((byte*)this + 712);
}
void ABP_AnimalsManager_C::M_SetShowDebugInfo(const bool& value) {
	Write((byte*)this + 712, value);
}
// Member Getter and Setter of AllowSpawnAnimals
// Declaration: bool AllowSpawnAnimals
bool ABP_AnimalsManager_C::M_GetAllowSpawnAnimals() const {
	return Read<bool>((byte*)this + 713);
}
bool* ABP_AnimalsManager_C::M_PtrGetAllowSpawnAnimals() {
	return reinterpret_cast<bool*>((byte*)this + 713);
}
void ABP_AnimalsManager_C::M_SetAllowSpawnAnimals(const bool& value) {
	Write((byte*)this + 713, value);
}
// Member Getter and Setter of Birds
// Declaration: bool Birds
bool ABP_AnimalsManager_C::M_GetBirds() const {
	return Read<bool>((byte*)this + 714);
}
bool* ABP_AnimalsManager_C::M_PtrGetBirds() {
	return reinterpret_cast<bool*>((byte*)this + 714);
}
void ABP_AnimalsManager_C::M_SetBirds(const bool& value) {
	Write((byte*)this + 714, value);
}
// Member Getter and Setter of AnimalsDamageMultiplier
// Declaration: float AnimalsDamageMultiplier
float ABP_AnimalsManager_C::M_GetAnimalsDamageMultiplier() const {
	return Read<float>((byte*)this + 716);
}
float* ABP_AnimalsManager_C::M_PtrGetAnimalsDamageMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 716);
}
void ABP_AnimalsManager_C::M_SetAnimalsDamageMultiplier(const float& value) {
	Write((byte*)this + 716, value);
}
// Member Getter and Setter of AnimalsHPMultiplier
// Declaration: float AnimalsHPMultiplier
float ABP_AnimalsManager_C::M_GetAnimalsHPMultiplier() const {
	return Read<float>((byte*)this + 720);
}
float* ABP_AnimalsManager_C::M_PtrGetAnimalsHPMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 720);
}
void ABP_AnimalsManager_C::M_SetAnimalsHPMultiplier(const float& value) {
	Write((byte*)this + 720, value);
}
// Member Getter and Setter of SpawnPointsFishes
// Declaration: TArray<class ABP_Flock_Fish_C*> SpawnPointsFishes
TArray<class ABP_Flock_Fish_C*> ABP_AnimalsManager_C::M_GetSpawnPointsFishes() const {
	return Read<TArray<class ABP_Flock_Fish_C*>>((byte*)this + 728);
}
TArray<class ABP_Flock_Fish_C*>* ABP_AnimalsManager_C::M_PtrGetSpawnPointsFishes() {
	return reinterpret_cast<TArray<class ABP_Flock_Fish_C*>*>((byte*)this + 728);
}
void ABP_AnimalsManager_C::M_SetSpawnPointsFishes(const TArray<class ABP_Flock_Fish_C*>& value) {
	Write((byte*)this + 728, value);
}
// Member Getter and Setter of WasAnimalSpawnUncovered
// Declaration: TMap<TEnumAsByte<E_AnimalType>, bool> WasAnimalSpawnUncovered
TMap<TEnumAsByte<E_AnimalType>, bool> ABP_AnimalsManager_C::M_GetWasAnimalSpawnUncovered() const {
	return Read<TMap<TEnumAsByte<E_AnimalType>, bool>>((byte*)this + 744);
}
TMap<TEnumAsByte<E_AnimalType>, bool>* ABP_AnimalsManager_C::M_PtrGetWasAnimalSpawnUncovered() {
	return reinterpret_cast<TMap<TEnumAsByte<E_AnimalType>, bool>*>((byte*)this + 744);
}
void ABP_AnimalsManager_C::M_SetWasAnimalSpawnUncovered(const TMap<TEnumAsByte<E_AnimalType>, bool>& value) {
	Write((byte*)this + 744, value);
}
// Member Getter and Setter of SpawnPointsWildAnimalCategorized
// Declaration: TMap<TEnumAsByte<E_AnimalType>, struct FST_AnimalSpawnerArray> SpawnPointsWildAnimalCategorized
TMap<TEnumAsByte<E_AnimalType>, struct FST_AnimalSpawnerArray> ABP_AnimalsManager_C::M_GetSpawnPointsWildAnimalCategorized() const {
	return Read<TMap<TEnumAsByte<E_AnimalType>, struct FST_AnimalSpawnerArray>>((byte*)this + 824);
}
TMap<TEnumAsByte<E_AnimalType>, struct FST_AnimalSpawnerArray>* ABP_AnimalsManager_C::M_PtrGetSpawnPointsWildAnimalCategorized() {
	return reinterpret_cast<TMap<TEnumAsByte<E_AnimalType>, struct FST_AnimalSpawnerArray>*>((byte*)this + 824);
}
void ABP_AnimalsManager_C::M_SetSpawnPointsWildAnimalCategorized(const TMap<TEnumAsByte<E_AnimalType>, struct FST_AnimalSpawnerArray>& value) {
	Write((byte*)this + 824, value);
}
// Member Getter and Setter of AnimalTypesToDisable
// Declaration: TAssetPtr<class FNone_513> AnimalTypesToDisable
TAssetPtr<class FNone_513> ABP_AnimalsManager_C::M_GetAnimalTypesToDisable() const {
	return Read<TAssetPtr<class FNone_513>>((byte*)this + 904);
}
TAssetPtr<class FNone_513>* ABP_AnimalsManager_C::M_PtrGetAnimalTypesToDisable() {
	return reinterpret_cast<TAssetPtr<class FNone_513>*>((byte*)this + 904);
}
void ABP_AnimalsManager_C::M_SetAnimalTypesToDisable(const TAssetPtr<class FNone_513>& value) {
	Write((byte*)this + 904, value);
}
// Member Getter and Setter of SpawnPointsFishCategorized
// Declaration: TMap<TEnumAsByte<E_FishPoolType>, struct FST_FishSpawnerArray> SpawnPointsFishCategorized
TMap<TEnumAsByte<E_FishPoolType>, struct FST_FishSpawnerArray> ABP_AnimalsManager_C::M_GetSpawnPointsFishCategorized() const {
	return Read<TMap<TEnumAsByte<E_FishPoolType>, struct FST_FishSpawnerArray>>((byte*)this + 984);
}
TMap<TEnumAsByte<E_FishPoolType>, struct FST_FishSpawnerArray>* ABP_AnimalsManager_C::M_PtrGetSpawnPointsFishCategorized() {
	return reinterpret_cast<TMap<TEnumAsByte<E_FishPoolType>, struct FST_FishSpawnerArray>*>((byte*)this + 984);
}
void ABP_AnimalsManager_C::M_SetSpawnPointsFishCategorized(const TMap<TEnumAsByte<E_FishPoolType>, struct FST_FishSpawnerArray>& value) {
	Write((byte*)this + 984, value);
}
// Member Getter and Setter of UncoveredSpawners
// Declaration: TArray<class ABP_SpawnPointWildAnimal_C*> UncoveredSpawners
TArray<class ABP_SpawnPointWildAnimal_C*> ABP_AnimalsManager_C::M_GetUncoveredSpawners() const {
	return Read<TArray<class ABP_SpawnPointWildAnimal_C*>>((byte*)this + 1064);
}
TArray<class ABP_SpawnPointWildAnimal_C*>* ABP_AnimalsManager_C::M_PtrGetUncoveredSpawners() {
	return reinterpret_cast<TArray<class ABP_SpawnPointWildAnimal_C*>*>((byte*)this + 1064);
}
void ABP_AnimalsManager_C::M_SetUncoveredSpawners(const TArray<class ABP_SpawnPointWildAnimal_C*>& value) {
	Write((byte*)this + 1064, value);
}
// Member Getter and Setter of UncoveredFishSpawners
// Declaration: TArray<class ABP_Flock_Fish_C*> UncoveredFishSpawners
TArray<class ABP_Flock_Fish_C*> ABP_AnimalsManager_C::M_GetUncoveredFishSpawners() const {
	return Read<TArray<class ABP_Flock_Fish_C*>>((byte*)this + 1080);
}
TArray<class ABP_Flock_Fish_C*>* ABP_AnimalsManager_C::M_PtrGetUncoveredFishSpawners() {
	return reinterpret_cast<TArray<class ABP_Flock_Fish_C*>*>((byte*)this + 1080);
}
void ABP_AnimalsManager_C::M_SetUncoveredFishSpawners(const TArray<class ABP_Flock_Fish_C*>& value) {
	Write((byte*)this + 1080, value);
}
// Member Getter and Setter of CheckAnimals_Task
// Declaration: class UMultiThreadTask* CheckAnimals_Task
class UMultiThreadTask* ABP_AnimalsManager_C::M_GetCheckAnimals_Task() const {
	return Read<class UMultiThreadTask*>((byte*)this + 1096);
}
class UMultiThreadTask** ABP_AnimalsManager_C::M_PtrGetCheckAnimals_Task() {
	return reinterpret_cast<class UMultiThreadTask**>((byte*)this + 1096);
}
void ABP_AnimalsManager_C::M_SetCheckAnimals_Task(const class UMultiThreadTask*& value) {
	Write((byte*)this + 1096, value);
}
// Member Getter and Setter of SpawnersToUncover
// Declaration: TAssetPtr<class FNone_513> SpawnersToUncover
TAssetPtr<class FNone_513> ABP_AnimalsManager_C::M_GetSpawnersToUncover() const {
	return Read<TAssetPtr<class FNone_513>>((byte*)this + 1104);
}
TAssetPtr<class FNone_513>* ABP_AnimalsManager_C::M_PtrGetSpawnersToUncover() {
	return reinterpret_cast<TAssetPtr<class FNone_513>*>((byte*)this + 1104);
}
void ABP_AnimalsManager_C::M_SetSpawnersToUncover(const TAssetPtr<class FNone_513>& value) {
	Write((byte*)this + 1104, value);
}
// Member Getter and Setter of SpawnersToActivate
// Declaration: TAssetPtr<class FNone_513> SpawnersToActivate
TAssetPtr<class FNone_513> ABP_AnimalsManager_C::M_GetSpawnersToActivate() const {
	return Read<TAssetPtr<class FNone_513>>((byte*)this + 1184);
}
TAssetPtr<class FNone_513>* ABP_AnimalsManager_C::M_PtrGetSpawnersToActivate() {
	return reinterpret_cast<TAssetPtr<class FNone_513>*>((byte*)this + 1184);
}
void ABP_AnimalsManager_C::M_SetSpawnersToActivate(const TAssetPtr<class FNone_513>& value) {
	Write((byte*)this + 1184, value);
}
// Member Getter and Setter of SpawnersToDeactivate
// Declaration: TAssetPtr<class FNone_513> SpawnersToDeactivate
TAssetPtr<class FNone_513> ABP_AnimalsManager_C::M_GetSpawnersToDeactivate() const {
	return Read<TAssetPtr<class FNone_513>>((byte*)this + 1264);
}
TAssetPtr<class FNone_513>* ABP_AnimalsManager_C::M_PtrGetSpawnersToDeactivate() {
	return reinterpret_cast<TAssetPtr<class FNone_513>*>((byte*)this + 1264);
}
void ABP_AnimalsManager_C::M_SetSpawnersToDeactivate(const TAssetPtr<class FNone_513>& value) {
	Write((byte*)this + 1264, value);
}
// Member Getter and Setter of FlocksToUncover
// Declaration: TAssetPtr<class FNone_513> FlocksToUncover
TAssetPtr<class FNone_513> ABP_AnimalsManager_C::M_GetFlocksToUncover() const {
	return Read<TAssetPtr<class FNone_513>>((byte*)this + 1344);
}
TAssetPtr<class FNone_513>* ABP_AnimalsManager_C::M_PtrGetFlocksToUncover() {
	return reinterpret_cast<TAssetPtr<class FNone_513>*>((byte*)this + 1344);
}
void ABP_AnimalsManager_C::M_SetFlocksToUncover(const TAssetPtr<class FNone_513>& value) {
	Write((byte*)this + 1344, value);
}
// Member Getter and Setter of FlocksToActivate
// Declaration: TAssetPtr<class FNone_513> FlocksToActivate
TAssetPtr<class FNone_513> ABP_AnimalsManager_C::M_GetFlocksToActivate() const {
	return Read<TAssetPtr<class FNone_513>>((byte*)this + 1424);
}
TAssetPtr<class FNone_513>* ABP_AnimalsManager_C::M_PtrGetFlocksToActivate() {
	return reinterpret_cast<TAssetPtr<class FNone_513>*>((byte*)this + 1424);
}
void ABP_AnimalsManager_C::M_SetFlocksToActivate(const TAssetPtr<class FNone_513>& value) {
	Write((byte*)this + 1424, value);
}
// Member Getter and Setter of FlocksToDeactivate
// Declaration: TAssetPtr<class FNone_513> FlocksToDeactivate
TAssetPtr<class FNone_513> ABP_AnimalsManager_C::M_GetFlocksToDeactivate() const {
	return Read<TAssetPtr<class FNone_513>>((byte*)this + 1504);
}
TAssetPtr<class FNone_513>* ABP_AnimalsManager_C::M_PtrGetFlocksToDeactivate() {
	return reinterpret_cast<TAssetPtr<class FNone_513>*>((byte*)this + 1504);
}
void ABP_AnimalsManager_C::M_SetFlocksToDeactivate(const TAssetPtr<class FNone_513>& value) {
	Write((byte*)this + 1504, value);
}
// Member Getter and Setter of CheckAnimals_Mutex
// Declaration: class UMultiTaskMutex* CheckAnimals_Mutex
class UMultiTaskMutex* ABP_AnimalsManager_C::M_GetCheckAnimals_Mutex() const {
	return Read<class UMultiTaskMutex*>((byte*)this + 1584);
}
class UMultiTaskMutex** ABP_AnimalsManager_C::M_PtrGetCheckAnimals_Mutex() {
	return reinterpret_cast<class UMultiTaskMutex**>((byte*)this + 1584);
}
void ABP_AnimalsManager_C::M_SetCheckAnimals_Mutex(const class UMultiTaskMutex*& value) {
	Write((byte*)this + 1584, value);
}
// Member Getter and Setter of ShowVerboseInfo
// Declaration: bool ShowVerboseInfo
bool ABP_AnimalsManager_C::M_GetShowVerboseInfo() const {
	return Read<bool>((byte*)this + 1592);
}
bool* ABP_AnimalsManager_C::M_PtrGetShowVerboseInfo() {
	return reinterpret_cast<bool*>((byte*)this + 1592);
}
void ABP_AnimalsManager_C::M_SetShowVerboseInfo(const bool& value) {
	Write((byte*)this + 1592, value);
}
// Member Getter and Setter of RoutinesBuildings
// Declaration: TArray<struct FST_MultiplayerAnimalRoutineBuilding> RoutinesBuildings
TArray<struct FST_MultiplayerAnimalRoutineBuilding> ABP_AnimalsManager_C::M_GetRoutinesBuildings() const {
	return Read<TArray<struct FST_MultiplayerAnimalRoutineBuilding>>((byte*)this + 1600);
}
TArray<struct FST_MultiplayerAnimalRoutineBuilding>* ABP_AnimalsManager_C::M_PtrGetRoutinesBuildings() {
	return reinterpret_cast<TArray<struct FST_MultiplayerAnimalRoutineBuilding>*>((byte*)this + 1600);
}
void ABP_AnimalsManager_C::M_SetRoutinesBuildings(const TArray<struct FST_MultiplayerAnimalRoutineBuilding>& value) {
	Write((byte*)this + 1600, value);
}
// Member Getter and Setter of MultiplayerAnimalsUpdateTimer
// Declaration: struct FTimerHandle MultiplayerAnimalsUpdateTimer
struct FTimerHandle ABP_AnimalsManager_C::M_GetMultiplayerAnimalsUpdateTimer() const {
	return Read<struct FTimerHandle>((byte*)this + 1616);
}
struct FTimerHandle* ABP_AnimalsManager_C::M_PtrGetMultiplayerAnimalsUpdateTimer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 1616);
}
void ABP_AnimalsManager_C::M_SetMultiplayerAnimalsUpdateTimer(const struct FTimerHandle& value) {
	Write((byte*)this + 1616, value);
}
// Member Getter and Setter of MinDistanceFromPlayersToUpdateAnimals
// Declaration: float MinDistanceFromPlayersToUpdateAnimals
float ABP_AnimalsManager_C::M_GetMinDistanceFromPlayersToUpdateAnimals() const {
	return Read<float>((byte*)this + 1624);
}
float* ABP_AnimalsManager_C::M_PtrGetMinDistanceFromPlayersToUpdateAnimals() {
	return reinterpret_cast<float*>((byte*)this + 1624);
}
void ABP_AnimalsManager_C::M_SetMinDistanceFromPlayersToUpdateAnimals(const float& value) {
	Write((byte*)this + 1624, value);
}
// Member Getter and Setter of MinDistanceFromPlayersToUpdateAnimalsIfNotLooking
// Declaration: float MinDistanceFromPlayersToUpdateAnimalsIfNotLooking
float ABP_AnimalsManager_C::M_GetMinDistanceFromPlayersToUpdateAnimalsIfNotLooking() const {
	return Read<float>((byte*)this + 1628);
}
float* ABP_AnimalsManager_C::M_PtrGetMinDistanceFromPlayersToUpdateAnimalsIfNotLooking() {
	return reinterpret_cast<float*>((byte*)this + 1628);
}
void ABP_AnimalsManager_C::M_SetMinDistanceFromPlayersToUpdateAnimalsIfNotLooking(const float& value) {
	Write((byte*)this + 1628, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.ExecuteUbergraph_BP_AnimalsManager
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalsManager_C::ExecuteUbergraph_BP_AnimalsManager(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.ExecuteUbergraph_BP_AnimalsManager");

	struct ABP_AnimalsManager_C_ExecuteUbergraph_BP_AnimalsManager_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	ABP_AnimalsManager_C_ExecuteUbergraph_BP_AnimalsManager_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.UpdateMultiplayerAnimals
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalsManager_C::UpdateMultiplayerAnimals() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.UpdateMultiplayerAnimals");

	struct ABP_AnimalsManager_C_UpdateMultiplayerAnimals_Params {
	};
	ABP_AnimalsManager_C_UpdateMultiplayerAnimals_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.UpdateSpawners_Complete
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalsManager_C::UpdateSpawners_Complete() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.UpdateSpawners_Complete");

	struct ABP_AnimalsManager_C_UpdateSpawners_Complete_Params {
	};
	ABP_AnimalsManager_C_UpdateSpawners_Complete_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.StartAnimalsManager
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: LoadGame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: MainMenu	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalsManager_C::StartAnimalsManager(bool LoadGame, bool MainMenu) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.StartAnimalsManager");

	struct ABP_AnimalsManager_C_StartAnimalsManager_Params {
		bool LoadGame;			//Offset: 0 | ElementSize: 1
		bool MainMenu;			//Offset: 1 | ElementSize: 1
	};
	ABP_AnimalsManager_C_StartAnimalsManager_Params params;
	params.LoadGame = LoadGame;
	params.MainMenu = MainMenu;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.Init
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalsManager_C::Init() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.Init");

	struct ABP_AnimalsManager_C_Init_Params {
	};
	ABP_AnimalsManager_C_Init_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.CheckAnimalsThread
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalsManager_C::CheckAnimalsThread() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.CheckAnimalsThread");

	struct ABP_AnimalsManager_C_CheckAnimalsThread_Params {
	};
	ABP_AnimalsManager_C_CheckAnimalsThread_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.ReceiveEndPlay
// Flags: Event, Protected, BlueprintEvent
// Params:
// Name: EndPlayReason	Type: TEnumAsByte<EEndPlayReason>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalsManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.ReceiveEndPlay");

	struct ABP_AnimalsManager_C_ReceiveEndPlay_Params {
		TEnumAsByte<EEndPlayReason> EndPlayReason;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalsManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.UpdateOnSeasonChanged
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalsManager_C::UpdateOnSeasonChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.UpdateOnSeasonChanged");

	struct ABP_AnimalsManager_C_UpdateOnSeasonChanged_Params {
	};
	ABP_AnimalsManager_C_UpdateOnSeasonChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.ReceiveBeginPlay
// Flags: Event, Protected, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalsManager_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.ReceiveBeginPlay");

	struct ABP_AnimalsManager_C_ReceiveBeginPlay_Params {
	};
	ABP_AnimalsManager_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.CheckAnimals
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalsManager_C::CheckAnimals() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.CheckAnimals");

	struct ABP_AnimalsManager_C_CheckAnimals_Params {
	};
	ABP_AnimalsManager_C_CheckAnimals_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.StopCheckAnimals
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalsManager_C::StopCheckAnimals() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.StopCheckAnimals");

	struct ABP_AnimalsManager_C_StopCheckAnimals_Params {
	};
	ABP_AnimalsManager_C_StopCheckAnimals_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.SetNumberOfAnimalsInSpawner
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SpawnPoint	Type: class ABP_SpawnPointWildAnimal_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalsManager_C::SetNumberOfAnimalsInSpawner(class ABP_SpawnPointWildAnimal_C* SpawnPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.SetNumberOfAnimalsInSpawner");

	struct ABP_AnimalsManager_C_SetNumberOfAnimalsInSpawner_Params {
		class ABP_SpawnPointWildAnimal_C* SpawnPoint;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalsManager_C_SetNumberOfAnimalsInSpawner_Params params;
	params.SpawnPoint = SpawnPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.SetNumberOfAnimalsInSpawners
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalsManager_C::SetNumberOfAnimalsInSpawners() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.SetNumberOfAnimalsInSpawners");

	struct ABP_AnimalsManager_C_SetNumberOfAnimalsInSpawners_Params {
	};
	ABP_AnimalsManager_C_SetNumberOfAnimalsInSpawners_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.SpawnHusbandryAnimals
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Name	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Count	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: UseTransform_Home	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SpawnTransform	Type: struct FTransform	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor
// Name: Home	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: RandomAge	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: RandomVariation	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Variation	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SpawnedAnimals	Type: TArray<class ABP_AnimalBase_C*>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_AnimalsManager_C::SpawnHusbandryAnimals(struct FName Name, int32_t Count, TEnumAsByte<E_Ownership> Ownership, bool UseTransform_Home, struct FTransform SpawnTransform, class ABP_MasterBuilding_C* Home, bool RandomAge, bool RandomVariation, int32_t Variation, TArray<class ABP_AnimalBase_C*>* SpawnedAnimals) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.SpawnHusbandryAnimals");

	struct ABP_AnimalsManager_C_SpawnHusbandryAnimals_Params {
		struct FName Name;			//Offset: 0 | ElementSize: 8
		int32_t Count;			//Offset: 8 | ElementSize: 4
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 12 | ElementSize: 1
		bool UseTransform_Home;			//Offset: 13 | ElementSize: 1
		struct FTransform SpawnTransform;			//Offset: 16 | ElementSize: 48
		class ABP_MasterBuilding_C* Home;			//Offset: 64 | ElementSize: 8
		bool RandomAge;			//Offset: 72 | ElementSize: 1
		bool RandomVariation;			//Offset: 73 | ElementSize: 1
		int32_t Variation;			//Offset: 76 | ElementSize: 4
		TArray<class ABP_AnimalBase_C*> SpawnedAnimals;			//Offset: 80 | ElementSize: 16
	};
	ABP_AnimalsManager_C_SpawnHusbandryAnimals_Params params;
	params.Name = Name;
	params.Count = Count;
	params.Ownership = Ownership;
	params.UseTransform_Home = UseTransform_Home;
	params.SpawnTransform = SpawnTransform;
	params.Home = Home;
	params.RandomAge = RandomAge;
	params.RandomVariation = RandomVariation;
	params.Variation = Variation;

	UObject::ProcessEvent(fn, &params);
	if (SpawnedAnimals != nullptr)
		*SpawnedAnimals = params.SpawnedAnimals;
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.SpawnHusbandryAnimal
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Name	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: UseTransform_Home	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SpawnTransform	Type: struct FTransform	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor
// Name: Home	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: RandomAge	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: RandomVariation	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Variation	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Save	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Actor	Type: class ABP_AnimalBase_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalsManager_C::SpawnHusbandryAnimal(struct FName Name, TEnumAsByte<E_Ownership> Ownership, bool UseTransform_Home, struct FTransform SpawnTransform, class ABP_MasterBuilding_C* Home, bool RandomAge, bool RandomVariation, int32_t Variation, bool Save, bool* Success, class ABP_AnimalBase_C** Actor) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.SpawnHusbandryAnimal");

	struct ABP_AnimalsManager_C_SpawnHusbandryAnimal_Params {
		struct FName Name;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 8 | ElementSize: 1
		bool UseTransform_Home;			//Offset: 9 | ElementSize: 1
		struct FTransform SpawnTransform;			//Offset: 16 | ElementSize: 48
		class ABP_MasterBuilding_C* Home;			//Offset: 64 | ElementSize: 8
		bool RandomAge;			//Offset: 72 | ElementSize: 1
		bool RandomVariation;			//Offset: 73 | ElementSize: 1
		int32_t Variation;			//Offset: 76 | ElementSize: 4
		bool Save;			//Offset: 80 | ElementSize: 1
		bool Success;			//Offset: 81 | ElementSize: 1
		class ABP_AnimalBase_C* Actor;			//Offset: 88 | ElementSize: 8
	};
	ABP_AnimalsManager_C_SpawnHusbandryAnimal_Params params;
	params.Name = Name;
	params.Ownership = Ownership;
	params.UseTransform_Home = UseTransform_Home;
	params.SpawnTransform = SpawnTransform;
	params.Home = Home;
	params.RandomAge = RandomAge;
	params.RandomVariation = RandomVariation;
	params.Variation = Variation;
	params.Save = Save;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (Actor != nullptr)
		*Actor = params.Actor;
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.RefreshWildAnimalsArray
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalsManager_C::RefreshWildAnimalsArray() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.RefreshWildAnimalsArray");

	struct ABP_AnimalsManager_C_RefreshWildAnimalsArray_Params {
	};
	ABP_AnimalsManager_C_RefreshWildAnimalsArray_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.RemoveRandomCountOfHusbandryAnimalsOnEvent
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: MinNumberOfAnimals	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MaxNumberOfAnimals	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalsManager_C::RemoveRandomCountOfHusbandryAnimalsOnEvent(int32_t MinNumberOfAnimals, int32_t MaxNumberOfAnimals) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.RemoveRandomCountOfHusbandryAnimalsOnEvent");

	struct ABP_AnimalsManager_C_RemoveRandomCountOfHusbandryAnimalsOnEvent_Params {
		int32_t MinNumberOfAnimals;			//Offset: 0 | ElementSize: 4
		int32_t MaxNumberOfAnimals;			//Offset: 4 | ElementSize: 4
	};
	ABP_AnimalsManager_C_RemoveRandomCountOfHusbandryAnimalsOnEvent_Params params;
	params.MinNumberOfAnimals = MinNumberOfAnimals;
	params.MaxNumberOfAnimals = MaxNumberOfAnimals;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.TeleportToHome
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SkipPlayerMount	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalsManager_C::TeleportToHome(bool SkipPlayerMount) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.TeleportToHome");

	struct ABP_AnimalsManager_C_TeleportToHome_Params {
		bool SkipPlayerMount;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalsManager_C_TeleportToHome_Params params;
	params.SkipPlayerMount = SkipPlayerMount;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.TeleportToHomeLocation
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Animal	Type: class ABP_AnimalBase_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalsManager_C::TeleportToHomeLocation(class ABP_AnimalBase_C* Animal) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.TeleportToHomeLocation");

	struct ABP_AnimalsManager_C_TeleportToHomeLocation_Params {
		class ABP_AnimalBase_C* Animal;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalsManager_C_TeleportToHomeLocation_Params params;
	params.Animal = Animal;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.TeleportToLocation
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Animal	Type: class ABP_AnimalBase_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Location	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalsManager_C::TeleportToLocation(class ABP_AnimalBase_C* Animal, struct FVector Location) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.TeleportToLocation");

	struct ABP_AnimalsManager_C_TeleportToLocation_Params {
		class ABP_AnimalBase_C* Animal;			//Offset: 0 | ElementSize: 8
		struct FVector Location;			//Offset: 8 | ElementSize: 12
	};
	ABP_AnimalsManager_C_TeleportToLocation_Params params;
	params.Animal = Animal;
	params.Location = Location;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.LoadSaveFileIntoSystem
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalsManager_C::LoadSaveFileIntoSystem(class USAVE_Game_C* SaveReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.LoadSaveFileIntoSystem");

	struct ABP_AnimalsManager_C_LoadSaveFileIntoSystem_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalsManager_C_LoadSaveFileIntoSystem_Params params;
	params.SaveReference = SaveReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.SaveDataFromSystemToFile
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalsManager_C::SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.SaveDataFromSystemToFile");

	struct ABP_AnimalsManager_C_SaveDataFromSystemToFile_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalsManager_C_SaveDataFromSystemToFile_Params params;
	params.SaveReference = SaveReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.SetNumberOfFishesInSpawner
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SpawnPoint	Type: class ABP_Flock_Fish_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalsManager_C::SetNumberOfFishesInSpawner(class ABP_Flock_Fish_C* SpawnPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.SetNumberOfFishesInSpawner");

	struct ABP_AnimalsManager_C_SetNumberOfFishesInSpawner_Params {
		class ABP_Flock_Fish_C* SpawnPoint;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalsManager_C_SetNumberOfFishesInSpawner_Params params;
	params.SpawnPoint = SpawnPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.SetNumberOfFishesInSpawners
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalsManager_C::SetNumberOfFishesInSpawners() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.SetNumberOfFishesInSpawners");

	struct ABP_AnimalsManager_C_SetNumberOfFishesInSpawners_Params {
	};
	ABP_AnimalsManager_C_SetNumberOfFishesInSpawners_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.SpawnFishInSpawner
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Spawner	Type: class ABP_Flock_Fish_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalsManager_C::SpawnFishInSpawner(class ABP_Flock_Fish_C* Spawner) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.SpawnFishInSpawner");

	struct ABP_AnimalsManager_C_SpawnFishInSpawner_Params {
		class ABP_Flock_Fish_C* Spawner;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalsManager_C_SpawnFishInSpawner_Params params;
	params.Spawner = Spawner;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.FindClosestWildAnimalsPoints
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Location	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Radius	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WildAnimalsPoints	Type: TArray<class ABP_SpawnPointWildAnimal_C*>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_AnimalsManager_C::FindClosestWildAnimalsPoints(struct FVector Location, float Radius, TArray<class ABP_SpawnPointWildAnimal_C*>* WildAnimalsPoints) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.FindClosestWildAnimalsPoints");

	struct ABP_AnimalsManager_C_FindClosestWildAnimalsPoints_Params {
		struct FVector Location;			//Offset: 0 | ElementSize: 12
		float Radius;			//Offset: 12 | ElementSize: 4
		TArray<class ABP_SpawnPointWildAnimal_C*> WildAnimalsPoints;			//Offset: 16 | ElementSize: 16
	};
	ABP_AnimalsManager_C_FindClosestWildAnimalsPoints_Params params;
	params.Location = Location;
	params.Radius = Radius;

	UObject::ProcessEvent(fn, &params);
	if (WildAnimalsPoints != nullptr)
		*WildAnimalsPoints = params.WildAnimalsPoints;
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.FindClosestFishesPoints
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Location	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Radius	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FishesPoints	Type: TArray<class ABP_Flock_Fish_C*>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_AnimalsManager_C::FindClosestFishesPoints(struct FVector Location, float Radius, TArray<class ABP_Flock_Fish_C*>* FishesPoints) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.FindClosestFishesPoints");

	struct ABP_AnimalsManager_C_FindClosestFishesPoints_Params {
		struct FVector Location;			//Offset: 0 | ElementSize: 12
		float Radius;			//Offset: 12 | ElementSize: 4
		TArray<class ABP_Flock_Fish_C*> FishesPoints;			//Offset: 16 | ElementSize: 16
	};
	ABP_AnimalsManager_C_FindClosestFishesPoints_Params params;
	params.Location = Location;
	params.Radius = Radius;

	UObject::ProcessEvent(fn, &params);
	if (FishesPoints != nullptr)
		*FishesPoints = params.FishesPoints;
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.SpawnAnimalsToNeighborhoodBuilding
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: Species	Type: TEnumAsByte<E_AnimalType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: YoungFemale	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: YoungFemaleCount	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: YoungMale	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: YoungMaleCount	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Female	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FemaleCount	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Male	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MaleCount	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SpawnedAnimals	Type: TArray<class ABP_AnimalBase_C*>	Flags: Parm, OutParm
// Name: Building	Type: class ABP_MasterBuilding_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalsManager_C::SpawnAnimalsToNeighborhoodBuilding(TEnumAsByte<E_Ownership> Ownership, struct FString ID, TEnumAsByte<E_AnimalType> Species, struct FName YoungFemale, int32_t YoungFemaleCount, struct FName YoungMale, int32_t YoungMaleCount, struct FName Female, int32_t FemaleCount, struct FName Male, int32_t MaleCount, TArray<class ABP_AnimalBase_C*>* SpawnedAnimals, class ABP_MasterBuilding_C** Building, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.SpawnAnimalsToNeighborhoodBuilding");

	struct ABP_AnimalsManager_C_SpawnAnimalsToNeighborhoodBuilding_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
		struct FString ID;			//Offset: 8 | ElementSize: 16
		TEnumAsByte<E_AnimalType> Species;			//Offset: 24 | ElementSize: 1
		struct FName YoungFemale;			//Offset: 28 | ElementSize: 8
		int32_t YoungFemaleCount;			//Offset: 36 | ElementSize: 4
		struct FName YoungMale;			//Offset: 40 | ElementSize: 8
		int32_t YoungMaleCount;			//Offset: 48 | ElementSize: 4
		struct FName Female;			//Offset: 52 | ElementSize: 8
		int32_t FemaleCount;			//Offset: 60 | ElementSize: 4
		struct FName Male;			//Offset: 64 | ElementSize: 8
		int32_t MaleCount;			//Offset: 72 | ElementSize: 4
		TArray<class ABP_AnimalBase_C*> SpawnedAnimals;			//Offset: 80 | ElementSize: 16
		class ABP_MasterBuilding_C* Building;			//Offset: 96 | ElementSize: 8
		bool Success;			//Offset: 104 | ElementSize: 1
	};
	ABP_AnimalsManager_C_SpawnAnimalsToNeighborhoodBuilding_Params params;
	params.Ownership = Ownership;
	params.ID = ID;
	params.Species = Species;
	params.YoungFemale = YoungFemale;
	params.YoungFemaleCount = YoungFemaleCount;
	params.YoungMale = YoungMale;
	params.YoungMaleCount = YoungMaleCount;
	params.Female = Female;
	params.FemaleCount = FemaleCount;
	params.Male = Male;
	params.MaleCount = MaleCount;

	UObject::ProcessEvent(fn, &params);
	if (SpawnedAnimals != nullptr)
		*SpawnedAnimals = params.SpawnedAnimals;
	if (Building != nullptr)
		*Building = params.Building;
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.SpawnAnimalsToNeighborhoodBuildings
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalsManager_C::SpawnAnimalsToNeighborhoodBuildings() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.SpawnAnimalsToNeighborhoodBuildings");

	struct ABP_AnimalsManager_C_SpawnAnimalsToNeighborhoodBuildings_Params {
	};
	ABP_AnimalsManager_C_SpawnAnimalsToNeighborhoodBuildings_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.RemoveNeighborhoodRedundantAnimals
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Building	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Name	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Count	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalsManager_C::RemoveNeighborhoodRedundantAnimals(class ABP_MasterBuilding_C* Building, struct FName Name, int32_t Count) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.RemoveNeighborhoodRedundantAnimals");

	struct ABP_AnimalsManager_C_RemoveNeighborhoodRedundantAnimals_Params {
		class ABP_MasterBuilding_C* Building;			//Offset: 0 | ElementSize: 8
		struct FName Name;			//Offset: 8 | ElementSize: 8
		int32_t Count;			//Offset: 16 | ElementSize: 4
	};
	ABP_AnimalsManager_C_RemoveNeighborhoodRedundantAnimals_Params params;
	params.Building = Building;
	params.Name = Name;
	params.Count = Count;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.GetAnimalDataByName
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: AnimalName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: AnimalData	Type: struct FST_Animal	Flags: Parm, OutParm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalsManager_C::GetAnimalDataByName(struct FName AnimalName, bool* Success, struct FST_Animal* AnimalData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.GetAnimalDataByName");

	struct ABP_AnimalsManager_C_GetAnimalDataByName_Params {
		struct FName AnimalName;			//Offset: 0 | ElementSize: 8
		bool Success;			//Offset: 8 | ElementSize: 1
		struct FST_Animal AnimalData;			//Offset: 16 | ElementSize: 272
	};
	ABP_AnimalsManager_C_GetAnimalDataByName_Params params;
	params.AnimalName = AnimalName;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (AnimalData != nullptr)
		*AnimalData = params.AnimalData;
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.SpawnGroundAnimalsInSpawnerFromSave
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Spawner	Type: class ABP_SpawnPointWildAnimal_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalsManager_C::SpawnGroundAnimalsInSpawnerFromSave(class ABP_SpawnPointWildAnimal_C* Spawner) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.SpawnGroundAnimalsInSpawnerFromSave");

	struct ABP_AnimalsManager_C_SpawnGroundAnimalsInSpawnerFromSave_Params {
		class ABP_SpawnPointWildAnimal_C* Spawner;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalsManager_C_SpawnGroundAnimalsInSpawnerFromSave_Params params;
	params.Spawner = Spawner;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.UpdateListOfSpawners
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalsManager_C::UpdateListOfSpawners() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.UpdateListOfSpawners");

	struct ABP_AnimalsManager_C_UpdateListOfSpawners_Params {
	};
	ABP_AnimalsManager_C_UpdateListOfSpawners_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.CheckSpawnersID
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalsManager_C::CheckSpawnersID() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.CheckSpawnersID");

	struct ABP_AnimalsManager_C_CheckSpawnersID_Params {
	};
	ABP_AnimalsManager_C_CheckSpawnersID_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.UpdateSpawners
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalsManager_C::UpdateSpawners() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.UpdateSpawners");

	struct ABP_AnimalsManager_C_UpdateSpawners_Params {
	};
	ABP_AnimalsManager_C_UpdateSpawners_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.CheckAvailability
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalsManager_C::CheckAvailability() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.CheckAvailability");

	struct ABP_AnimalsManager_C_CheckAvailability_Params {
	};
	ABP_AnimalsManager_C_CheckAvailability_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.SeasonalUpdateSpawners
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalsManager_C::SeasonalUpdateSpawners() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.SeasonalUpdateSpawners");

	struct ABP_AnimalsManager_C_SeasonalUpdateSpawners_Params {
	};
	ABP_AnimalsManager_C_SeasonalUpdateSpawners_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.SpawnOnDemand
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Spawner	Type: class ABP_SpawnPointWildAnimal_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalsManager_C::SpawnOnDemand(class ABP_SpawnPointWildAnimal_C* Spawner) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.SpawnOnDemand");

	struct ABP_AnimalsManager_C_SpawnOnDemand_Params {
		class ABP_SpawnPointWildAnimal_C* Spawner;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalsManager_C_SpawnOnDemand_Params params;
	params.Spawner = Spawner;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.ReloadAfterSettingsChanged
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalsManager_C::ReloadAfterSettingsChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.ReloadAfterSettingsChanged");

	struct ABP_AnimalsManager_C_ReloadAfterSettingsChanged_Params {
	};
	ABP_AnimalsManager_C_ReloadAfterSettingsChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.CheckIsWater
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SpawnPoint	Type: class ABP_SpawnPointWildAnimal_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalsManager_C::CheckIsWater(class ABP_SpawnPointWildAnimal_C* SpawnPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.CheckIsWater");

	struct ABP_AnimalsManager_C_CheckIsWater_Params {
		class ABP_SpawnPointWildAnimal_C* SpawnPoint;			//Offset: 0 | ElementSize: 8
	};
	ABP_AnimalsManager_C_CheckIsWater_Params params;
	params.SpawnPoint = SpawnPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.DisableSpawnersOfType
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalsManager_C::DisableSpawnersOfType() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.DisableSpawnersOfType");

	struct ABP_AnimalsManager_C_DisableSpawnersOfType_Params {
	};
	ABP_AnimalsManager_C_DisableSpawnersOfType_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.EnableSpawnersOfType
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalsManager_C::EnableSpawnersOfType() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.EnableSpawnersOfType");

	struct ABP_AnimalsManager_C_EnableSpawnersOfType_Params {
	};
	ABP_AnimalsManager_C_EnableSpawnersOfType_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.EnableAllSpawners
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalsManager_C::EnableAllSpawners() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.EnableAllSpawners");

	struct ABP_AnimalsManager_C_EnableAllSpawners_Params {
	};
	ABP_AnimalsManager_C_EnableAllSpawners_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.DisableAllSpawners
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalsManager_C::DisableAllSpawners() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.DisableAllSpawners");

	struct ABP_AnimalsManager_C_DisableAllSpawners_Params {
	};
	ABP_AnimalsManager_C_DisableAllSpawners_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.LoadDataSafely
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Data	Type: TArray<struct FString>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Index	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InvalidSubstitution	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: LoadedData	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_AnimalsManager_C::LoadDataSafely(TArray<struct FString>* Data, int32_t Index, struct FString InvalidSubstitution, struct FString* LoadedData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.LoadDataSafely");

	struct ABP_AnimalsManager_C_LoadDataSafely_Params {
		TArray<struct FString> Data;			//Offset: 0 | ElementSize: 16
		int32_t Index;			//Offset: 16 | ElementSize: 4
		struct FString InvalidSubstitution;			//Offset: 24 | ElementSize: 16
		struct FString LoadedData;			//Offset: 40 | ElementSize: 16
	};
	ABP_AnimalsManager_C_LoadDataSafely_Params params;
	params.Index = Index;
	params.InvalidSubstitution = InvalidSubstitution;

	UObject::ProcessEvent(fn, &params);
	if (Data != nullptr)
		*Data = params.Data;
	if (LoadedData != nullptr)
		*LoadedData = params.LoadedData;
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.Uncover Spawner Animal
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: SpawnPointAnimal	Type: class ABP_SpawnPointWildAnimal_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewUncover	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalsManager_C::Uncover_Spawner_Animal(class ABP_SpawnPointWildAnimal_C** SpawnPointAnimal, bool* NewUncover) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.Uncover Spawner Animal");

	struct ABP_AnimalsManager_C_Uncover_Spawner_Animal_Params {
		class ABP_SpawnPointWildAnimal_C* SpawnPointAnimal;			//Offset: 0 | ElementSize: 8
		bool NewUncover;			//Offset: 8 | ElementSize: 1
	};
	ABP_AnimalsManager_C_Uncover_Spawner_Animal_Params params;

	UObject::ProcessEvent(fn, &params);
	if (SpawnPointAnimal != nullptr)
		*SpawnPointAnimal = params.SpawnPointAnimal;
	if (NewUncover != nullptr)
		*NewUncover = params.NewUncover;
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.UncoverSpawnerFish
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: SpawnPointFish	Type: class ABP_Flock_Fish_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NewUncover	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalsManager_C::UncoverSpawnerFish(class ABP_Flock_Fish_C** SpawnPointFish, bool* NewUncover) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.UncoverSpawnerFish");

	struct ABP_AnimalsManager_C_UncoverSpawnerFish_Params {
		class ABP_Flock_Fish_C* SpawnPointFish;			//Offset: 0 | ElementSize: 8
		bool NewUncover;			//Offset: 8 | ElementSize: 1
	};
	ABP_AnimalsManager_C_UncoverSpawnerFish_Params params;

	UObject::ProcessEvent(fn, &params);
	if (SpawnPointFish != nullptr)
		*SpawnPointFish = params.SpawnPointFish;
	if (NewUncover != nullptr)
		*NewUncover = params.NewUncover;
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.UpdateSpawnersComplete
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalsManager_C::UpdateSpawnersComplete() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.UpdateSpawnersComplete");

	struct ABP_AnimalsManager_C_UpdateSpawnersComplete_Params {
	};
	ABP_AnimalsManager_C_UpdateSpawnersComplete_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.StopAnimalsManager
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalsManager_C::StopAnimalsManager() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.StopAnimalsManager");

	struct ABP_AnimalsManager_C_StopAnimalsManager_Params {
	};
	ABP_AnimalsManager_C_StopAnimalsManager_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.InitThreadTask
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_AnimalsManager_C::InitThreadTask() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.InitThreadTask");

	struct ABP_AnimalsManager_C_InitThreadTask_Params {
	};
	ABP_AnimalsManager_C_InitThreadTask_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.InitializeMultiplayerAnimalRoutines
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SpawnAnimals	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalsManager_C::InitializeMultiplayerAnimalRoutines(bool SpawnAnimals) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.InitializeMultiplayerAnimalRoutines");

	struct ABP_AnimalsManager_C_InitializeMultiplayerAnimalRoutines_Params {
		bool SpawnAnimals;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalsManager_C_InitializeMultiplayerAnimalRoutines_Params params;
	params.SpawnAnimals = SpawnAnimals;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.CalculateAnimalLocation
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: AnimalLocationData	Type: struct FST_MultiplayerAnimalLocation	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Location	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Rotation	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalsManager_C::CalculateAnimalLocation(struct FST_MultiplayerAnimalLocation AnimalLocationData, struct FVector* Location, struct FRotator* Rotation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.CalculateAnimalLocation");

	struct ABP_AnimalsManager_C_CalculateAnimalLocation_Params {
		struct FST_MultiplayerAnimalLocation AnimalLocationData;			//Offset: 0 | ElementSize: 32
		struct FVector Location;			//Offset: 32 | ElementSize: 12
		struct FRotator Rotation;			//Offset: 44 | ElementSize: 12
	};
	ABP_AnimalsManager_C_CalculateAnimalLocation_Params params;
	params.AnimalLocationData = AnimalLocationData;

	UObject::ProcessEvent(fn, &params);
	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}

/////////////////////////////////////////////
// Function BP_AnimalsManager.BP_AnimalsManager_C.UpdateMultiplayerAnimalsLocations
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Force	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_AnimalsManager_C::UpdateMultiplayerAnimalsLocations(bool Force) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalsManager.BP_AnimalsManager_C.UpdateMultiplayerAnimalsLocations");

	struct ABP_AnimalsManager_C_UpdateMultiplayerAnimalsLocations_Params {
		bool Force;			//Offset: 0 | ElementSize: 1
	};
	ABP_AnimalsManager_C_UpdateMultiplayerAnimalsLocations_Params params;
	params.Force = Force;

	UObject::ProcessEvent(fn, &params);
}

#pragma endregion
}