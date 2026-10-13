#include "../SDK.h"
#include "BP_DataManager_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame ABP_DataManager_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 544);
}
struct FPointerToUberGraphFrame* ABP_DataManager_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 544);
}
void ABP_DataManager_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 544, value);
}
// Member Getter and Setter of DefaultSceneRoot
// Declaration: class USceneComponent* DefaultSceneRoot
class USceneComponent* ABP_DataManager_C::M_GetDefaultSceneRoot() const {
	return Read<class USceneComponent*>((byte*)this + 552);
}
class USceneComponent** ABP_DataManager_C::M_PtrGetDefaultSceneRoot() {
	return reinterpret_cast<class USceneComponent**>((byte*)this + 552);
}
void ABP_DataManager_C::M_SetDefaultSceneRoot(const class USceneComponent*& value) {
	Write((byte*)this + 552, value);
}
// Member Getter and Setter of ListOfBuildings
// Declaration: TArray<struct FST_BuildingList> ListOfBuildings
TArray<struct FST_BuildingList> ABP_DataManager_C::M_GetListOfBuildings() const {
	return Read<TArray<struct FST_BuildingList>>((byte*)this + 560);
}
TArray<struct FST_BuildingList>* ABP_DataManager_C::M_PtrGetListOfBuildings() {
	return reinterpret_cast<TArray<struct FST_BuildingList>*>((byte*)this + 560);
}
void ABP_DataManager_C::M_SetListOfBuildings(const TArray<struct FST_BuildingList>& value) {
	Write((byte*)this + 560, value);
}
// Member Getter and Setter of SystemsManagerReference
// Declaration: class ABP_SystemsManager_C* SystemsManagerReference
class ABP_SystemsManager_C* ABP_DataManager_C::M_GetSystemsManagerReference() const {
	return Read<class ABP_SystemsManager_C*>((byte*)this + 576);
}
class ABP_SystemsManager_C** ABP_DataManager_C::M_PtrGetSystemsManagerReference() {
	return reinterpret_cast<class ABP_SystemsManager_C**>((byte*)this + 576);
}
void ABP_DataManager_C::M_SetSystemsManagerReference(const class ABP_SystemsManager_C*& value) {
	Write((byte*)this + 576, value);
}
// Member Getter and Setter of TalkToActorsArray
// Declaration: TMap<struct FString, class ABP_TalkToActor_C*> TalkToActorsArray
TMap<struct FString, class ABP_TalkToActor_C*> ABP_DataManager_C::M_GetTalkToActorsArray() const {
	return Read<TMap<struct FString, class ABP_TalkToActor_C*>>((byte*)this + 584);
}
TMap<struct FString, class ABP_TalkToActor_C*>* ABP_DataManager_C::M_PtrGetTalkToActorsArray() {
	return reinterpret_cast<TMap<struct FString, class ABP_TalkToActor_C*>*>((byte*)this + 584);
}
void ABP_DataManager_C::M_SetTalkToActorsArray(const TMap<struct FString, class ABP_TalkToActor_C*>& value) {
	Write((byte*)this + 584, value);
}
// Member Getter and Setter of ShowLogs
// Declaration: bool ShowLogs
bool ABP_DataManager_C::M_GetShowLogs() const {
	return Read<bool>((byte*)this + 664);
}
bool* ABP_DataManager_C::M_PtrGetShowLogs() {
	return reinterpret_cast<bool*>((byte*)this + 664);
}
void ABP_DataManager_C::M_SetShowLogs(const bool& value) {
	Write((byte*)this + 664, value);
}
// Member Getter and Setter of ListOfFurniture
// Declaration: TArray<struct FST_FurnitureList> ListOfFurniture
TArray<struct FST_FurnitureList> ABP_DataManager_C::M_GetListOfFurniture() const {
	return Read<TArray<struct FST_FurnitureList>>((byte*)this + 672);
}
TArray<struct FST_FurnitureList>* ABP_DataManager_C::M_PtrGetListOfFurniture() {
	return reinterpret_cast<TArray<struct FST_FurnitureList>*>((byte*)this + 672);
}
void ABP_DataManager_C::M_SetListOfFurniture(const TArray<struct FST_FurnitureList>& value) {
	Write((byte*)this + 672, value);
}
// Member Getter and Setter of ListOfFields
// Declaration: TArray<struct FST_FieldList> ListOfFields
TArray<struct FST_FieldList> ABP_DataManager_C::M_GetListOfFields() const {
	return Read<TArray<struct FST_FieldList>>((byte*)this + 688);
}
TArray<struct FST_FieldList>* ABP_DataManager_C::M_PtrGetListOfFields() {
	return reinterpret_cast<TArray<struct FST_FieldList>*>((byte*)this + 688);
}
void ABP_DataManager_C::M_SetListOfFields(const TArray<struct FST_FieldList>& value) {
	Write((byte*)this + 688, value);
}
// Member Getter and Setter of ListOfNPC
// Declaration: TArray<struct FST_CharacterList> ListOfNPC
TArray<struct FST_CharacterList> ABP_DataManager_C::M_GetListOfNPC() const {
	return Read<TArray<struct FST_CharacterList>>((byte*)this + 704);
}
TArray<struct FST_CharacterList>* ABP_DataManager_C::M_PtrGetListOfNPC() {
	return reinterpret_cast<TArray<struct FST_CharacterList>*>((byte*)this + 704);
}
void ABP_DataManager_C::M_SetListOfNPC(const TArray<struct FST_CharacterList>& value) {
	Write((byte*)this + 704, value);
}
// Member Getter and Setter of ListOfAnimal
// Declaration: TArray<struct FST_AnimalList> ListOfAnimal
TArray<struct FST_AnimalList> ABP_DataManager_C::M_GetListOfAnimal() const {
	return Read<TArray<struct FST_AnimalList>>((byte*)this + 720);
}
TArray<struct FST_AnimalList>* ABP_DataManager_C::M_PtrGetListOfAnimal() {
	return reinterpret_cast<TArray<struct FST_AnimalList>*>((byte*)this + 720);
}
void ABP_DataManager_C::M_SetListOfAnimal(const TArray<struct FST_AnimalList>& value) {
	Write((byte*)this + 720, value);
}
// Member Getter and Setter of ListOfSplineStructures
// Declaration: TArray<struct FST_SplineStructureList> ListOfSplineStructures
TArray<struct FST_SplineStructureList> ABP_DataManager_C::M_GetListOfSplineStructures() const {
	return Read<TArray<struct FST_SplineStructureList>>((byte*)this + 736);
}
TArray<struct FST_SplineStructureList>* ABP_DataManager_C::M_PtrGetListOfSplineStructures() {
	return reinterpret_cast<TArray<struct FST_SplineStructureList>*>((byte*)this + 736);
}
void ABP_DataManager_C::M_SetListOfSplineStructures(const TArray<struct FST_SplineStructureList>& value) {
	Write((byte*)this + 736, value);
}
// Member Getter and Setter of OnPlayerPopulationChange
// Declaration: TAssetPtr<class FOnPlayerPopulationChange__DelegateSignature> OnPlayerPopulationChange
TAssetPtr<class FOnPlayerPopulationChange__DelegateSignature> ABP_DataManager_C::M_GetOnPlayerPopulationChange() const {
	return Read<TAssetPtr<class FOnPlayerPopulationChange__DelegateSignature>>((byte*)this + 752);
}
TAssetPtr<class FOnPlayerPopulationChange__DelegateSignature>* ABP_DataManager_C::M_PtrGetOnPlayerPopulationChange() {
	return reinterpret_cast<TAssetPtr<class FOnPlayerPopulationChange__DelegateSignature>*>((byte*)this + 752);
}
void ABP_DataManager_C::M_SetOnPlayerPopulationChange(const TAssetPtr<class FOnPlayerPopulationChange__DelegateSignature>& value) {
	Write((byte*)this + 752, value);
}
// Member Getter and Setter of OnPlayerBuildingsChange
// Declaration: TAssetPtr<class FOnPlayerBuildingsChange__DelegateSignature> OnPlayerBuildingsChange
TAssetPtr<class FOnPlayerBuildingsChange__DelegateSignature> ABP_DataManager_C::M_GetOnPlayerBuildingsChange() const {
	return Read<TAssetPtr<class FOnPlayerBuildingsChange__DelegateSignature>>((byte*)this + 768);
}
TAssetPtr<class FOnPlayerBuildingsChange__DelegateSignature>* ABP_DataManager_C::M_PtrGetOnPlayerBuildingsChange() {
	return reinterpret_cast<TAssetPtr<class FOnPlayerBuildingsChange__DelegateSignature>*>((byte*)this + 768);
}
void ABP_DataManager_C::M_SetOnPlayerBuildingsChange(const TAssetPtr<class FOnPlayerBuildingsChange__DelegateSignature>& value) {
	Write((byte*)this + 768, value);
}
// Member Getter and Setter of OnPlayerAnimalsChange
// Declaration: TAssetPtr<class FOnPlayerAnimalsChange__DelegateSignature> OnPlayerAnimalsChange
TAssetPtr<class FOnPlayerAnimalsChange__DelegateSignature> ABP_DataManager_C::M_GetOnPlayerAnimalsChange() const {
	return Read<TAssetPtr<class FOnPlayerAnimalsChange__DelegateSignature>>((byte*)this + 784);
}
TAssetPtr<class FOnPlayerAnimalsChange__DelegateSignature>* ABP_DataManager_C::M_PtrGetOnPlayerAnimalsChange() {
	return reinterpret_cast<TAssetPtr<class FOnPlayerAnimalsChange__DelegateSignature>*>((byte*)this + 784);
}
void ABP_DataManager_C::M_SetOnPlayerAnimalsChange(const TAssetPtr<class FOnPlayerAnimalsChange__DelegateSignature>& value) {
	Write((byte*)this + 784, value);
}
// Member Getter and Setter of ChangedItems
// Declaration: TArray<struct FGuid> ChangedItems
TArray<struct FGuid> ABP_DataManager_C::M_GetChangedItems() const {
	return Read<TArray<struct FGuid>>((byte*)this + 800);
}
TArray<struct FGuid>* ABP_DataManager_C::M_PtrGetChangedItems() {
	return reinterpret_cast<TArray<struct FGuid>*>((byte*)this + 800);
}
void ABP_DataManager_C::M_SetChangedItems(const TArray<struct FGuid>& value) {
	Write((byte*)this + 800, value);
}
// Member Getter and Setter of ListOfRoads
// Declaration: TArray<struct FST_RoadList> ListOfRoads
TArray<struct FST_RoadList> ABP_DataManager_C::M_GetListOfRoads() const {
	return Read<TArray<struct FST_RoadList>>((byte*)this + 816);
}
TArray<struct FST_RoadList>* ABP_DataManager_C::M_PtrGetListOfRoads() {
	return reinterpret_cast<TArray<struct FST_RoadList>*>((byte*)this + 816);
}
void ABP_DataManager_C::M_SetListOfRoads(const TArray<struct FST_RoadList>& value) {
	Write((byte*)this + 816, value);
}
// Member Getter and Setter of RestrictionAreas
// Declaration: TArray<class ABP_BuildingRestrictionArea_C*> RestrictionAreas
TArray<class ABP_BuildingRestrictionArea_C*> ABP_DataManager_C::M_GetRestrictionAreas() const {
	return Read<TArray<class ABP_BuildingRestrictionArea_C*>>((byte*)this + 832);
}
TArray<class ABP_BuildingRestrictionArea_C*>* ABP_DataManager_C::M_PtrGetRestrictionAreas() {
	return reinterpret_cast<TArray<class ABP_BuildingRestrictionArea_C*>*>((byte*)this + 832);
}
void ABP_DataManager_C::M_SetRestrictionAreas(const TArray<class ABP_BuildingRestrictionArea_C*>& value) {
	Write((byte*)this + 832, value);
}
// Member Getter and Setter of ListOfGates
// Declaration: TArray<struct FST_GateList> ListOfGates
TArray<struct FST_GateList> ABP_DataManager_C::M_GetListOfGates() const {
	return Read<TArray<struct FST_GateList>>((byte*)this + 848);
}
TArray<struct FST_GateList>* ABP_DataManager_C::M_PtrGetListOfGates() {
	return reinterpret_cast<TArray<struct FST_GateList>*>((byte*)this + 848);
}
void ABP_DataManager_C::M_SetListOfGates(const TArray<struct FST_GateList>& value) {
	Write((byte*)this + 848, value);
}
// Member Getter and Setter of NpcsBoostTask
// Declaration: class UTask_CalculateBoostDistance_C* NpcsBoostTask
class UTask_CalculateBoostDistance_C* ABP_DataManager_C::M_GetNpcsBoostTask() const {
	return Read<class UTask_CalculateBoostDistance_C*>((byte*)this + 864);
}
class UTask_CalculateBoostDistance_C** ABP_DataManager_C::M_PtrGetNpcsBoostTask() {
	return reinterpret_cast<class UTask_CalculateBoostDistance_C**>((byte*)this + 864);
}
void ABP_DataManager_C::M_SetNpcsBoostTask(const class UTask_CalculateBoostDistance_C*& value) {
	Write((byte*)this + 864, value);
}
// Member Getter and Setter of AsyncBoostTask
// Declaration: class UTask_CalculateBoostDistance_Async_C* AsyncBoostTask
class UTask_CalculateBoostDistance_Async_C* ABP_DataManager_C::M_GetAsyncBoostTask() const {
	return Read<class UTask_CalculateBoostDistance_Async_C*>((byte*)this + 872);
}
class UTask_CalculateBoostDistance_Async_C** ABP_DataManager_C::M_PtrGetAsyncBoostTask() {
	return reinterpret_cast<class UTask_CalculateBoostDistance_Async_C**>((byte*)this + 872);
}
void ABP_DataManager_C::M_SetAsyncBoostTask(const class UTask_CalculateBoostDistance_Async_C*& value) {
	Write((byte*)this + 872, value);
}
// Member Getter and Setter of NPCsPerTick
// Declaration: int32_t NPCsPerTick
int32_t ABP_DataManager_C::M_GetNPCsPerTick() const {
	return Read<int32_t>((byte*)this + 880);
}
int32_t* ABP_DataManager_C::M_PtrGetNPCsPerTick() {
	return reinterpret_cast<int32_t*>((byte*)this + 880);
}
void ABP_DataManager_C::M_SetNPCsPerTick(const int32_t& value) {
	Write((byte*)this + 880, value);
}
// Member Getter and Setter of AnimalsPerTick
// Declaration: int32_t AnimalsPerTick
int32_t ABP_DataManager_C::M_GetAnimalsPerTick() const {
	return Read<int32_t>((byte*)this + 884);
}
int32_t* ABP_DataManager_C::M_PtrGetAnimalsPerTick() {
	return reinterpret_cast<int32_t*>((byte*)this + 884);
}
void ABP_DataManager_C::M_SetAnimalsPerTick(const int32_t& value) {
	Write((byte*)this + 884, value);
}
// Member Getter and Setter of PlayerBuildingsPerTick
// Declaration: int32_t PlayerBuildingsPerTick
int32_t ABP_DataManager_C::M_GetPlayerBuildingsPerTick() const {
	return Read<int32_t>((byte*)this + 888);
}
int32_t* ABP_DataManager_C::M_PtrGetPlayerBuildingsPerTick() {
	return reinterpret_cast<int32_t*>((byte*)this + 888);
}
void ABP_DataManager_C::M_SetPlayerBuildingsPerTick(const int32_t& value) {
	Write((byte*)this + 888, value);
}
// Member Getter and Setter of FieldsOrchardsPerTick
// Declaration: int32_t FieldsOrchardsPerTick
int32_t ABP_DataManager_C::M_GetFieldsOrchardsPerTick() const {
	return Read<int32_t>((byte*)this + 892);
}
int32_t* ABP_DataManager_C::M_PtrGetFieldsOrchardsPerTick() {
	return reinterpret_cast<int32_t*>((byte*)this + 892);
}
void ABP_DataManager_C::M_SetFieldsOrchardsPerTick(const int32_t& value) {
	Write((byte*)this + 892, value);
}
// Member Getter and Setter of SplinesPerTick
// Declaration: int32_t SplinesPerTick
int32_t ABP_DataManager_C::M_GetSplinesPerTick() const {
	return Read<int32_t>((byte*)this + 896);
}
int32_t* ABP_DataManager_C::M_PtrGetSplinesPerTick() {
	return reinterpret_cast<int32_t*>((byte*)this + 896);
}
void ABP_DataManager_C::M_SetSplinesPerTick(const int32_t& value) {
	Write((byte*)this + 896, value);
}
// Member Getter and Setter of FurnituresPerTick
// Declaration: int32_t FurnituresPerTick
int32_t ABP_DataManager_C::M_GetFurnituresPerTick() const {
	return Read<int32_t>((byte*)this + 900);
}
int32_t* ABP_DataManager_C::M_PtrGetFurnituresPerTick() {
	return reinterpret_cast<int32_t*>((byte*)this + 900);
}
void ABP_DataManager_C::M_SetFurnituresPerTick(const int32_t& value) {
	Write((byte*)this + 900, value);
}
// Member Getter and Setter of RoadsPerTick
// Declaration: int32_t RoadsPerTick
int32_t ABP_DataManager_C::M_GetRoadsPerTick() const {
	return Read<int32_t>((byte*)this + 904);
}
int32_t* ABP_DataManager_C::M_PtrGetRoadsPerTick() {
	return reinterpret_cast<int32_t*>((byte*)this + 904);
}
void ABP_DataManager_C::M_SetRoadsPerTick(const int32_t& value) {
	Write((byte*)this + 904, value);
}
// Member Getter and Setter of GatesPerTick
// Declaration: int32_t GatesPerTick
int32_t ABP_DataManager_C::M_GetGatesPerTick() const {
	return Read<int32_t>((byte*)this + 908);
}
int32_t* ABP_DataManager_C::M_PtrGetGatesPerTick() {
	return reinterpret_cast<int32_t*>((byte*)this + 908);
}
void ABP_DataManager_C::M_SetGatesPerTick(const int32_t& value) {
	Write((byte*)this + 908, value);
}
// Member Getter and Setter of PlatformsPerTick
// Declaration: int32_t PlatformsPerTick
int32_t ABP_DataManager_C::M_GetPlatformsPerTick() const {
	return Read<int32_t>((byte*)this + 912);
}
int32_t* ABP_DataManager_C::M_PtrGetPlatformsPerTick() {
	return reinterpret_cast<int32_t*>((byte*)this + 912);
}
void ABP_DataManager_C::M_SetPlatformsPerTick(const int32_t& value) {
	Write((byte*)this + 912, value);
}
// Member Getter and Setter of ItemsPerTick
// Declaration: int32_t ItemsPerTick
int32_t ABP_DataManager_C::M_GetItemsPerTick() const {
	return Read<int32_t>((byte*)this + 916);
}
int32_t* ABP_DataManager_C::M_PtrGetItemsPerTick() {
	return reinterpret_cast<int32_t*>((byte*)this + 916);
}
void ABP_DataManager_C::M_SetItemsPerTick(const int32_t& value) {
	Write((byte*)this + 916, value);
}
// Member Getter and Setter of ListOfPlatforms
// Declaration: TArray<struct FST_PlatformList> ListOfPlatforms
TArray<struct FST_PlatformList> ABP_DataManager_C::M_GetListOfPlatforms() const {
	return Read<TArray<struct FST_PlatformList>>((byte*)this + 920);
}
TArray<struct FST_PlatformList>* ABP_DataManager_C::M_PtrGetListOfPlatforms() {
	return reinterpret_cast<TArray<struct FST_PlatformList>*>((byte*)this + 920);
}
void ABP_DataManager_C::M_SetListOfPlatforms(const TArray<struct FST_PlatformList>& value) {
	Write((byte*)this + 920, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.OnPlayerPopulationChange__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_DataManager_C::OnPlayerPopulationChange__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.OnPlayerPopulationChange__DelegateSignature");

	struct ABP_DataManager_C_OnPlayerPopulationChange__DelegateSignature_Params {
	};
	ABP_DataManager_C_OnPlayerPopulationChange__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.OnPlayerBuildingsChange__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_DataManager_C::OnPlayerBuildingsChange__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.OnPlayerBuildingsChange__DelegateSignature");

	struct ABP_DataManager_C_OnPlayerBuildingsChange__DelegateSignature_Params {
	};
	ABP_DataManager_C_OnPlayerBuildingsChange__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.OnPlayerAnimalsChange__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_DataManager_C::OnPlayerAnimalsChange__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.OnPlayerAnimalsChange__DelegateSignature");

	struct ABP_DataManager_C_OnPlayerAnimalsChange__DelegateSignature_Params {
	};
	ABP_DataManager_C_OnPlayerAnimalsChange__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.ExecuteUbergraph_BP_DataManager
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::ExecuteUbergraph_BP_DataManager(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.ExecuteUbergraph_BP_DataManager");

	struct ABP_DataManager_C_ExecuteUbergraph_BP_DataManager_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	ABP_DataManager_C_ExecuteUbergraph_BP_DataManager_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.StartDistanceCheckTask
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_DataManager_C::StartDistanceCheckTask() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.StartDistanceCheckTask");

	struct ABP_DataManager_C_StartDistanceCheckTask_Params {
	};
	ABP_DataManager_C_StartDistanceCheckTask_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.ReceiveEndPlay
// Flags: Event, Protected, BlueprintEvent
// Params:
// Name: EndPlayReason	Type: TEnumAsByte<EEndPlayReason>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.ReceiveEndPlay");

	struct ABP_DataManager_C_ReceiveEndPlay_Params {
		TEnumAsByte<EEndPlayReason> EndPlayReason;			//Offset: 0 | ElementSize: 1
	};
	ABP_DataManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.ReceiveBeginPlay
// Flags: Event, Protected, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_DataManager_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.ReceiveBeginPlay");

	struct ABP_DataManager_C_ReceiveBeginPlay_Params {
	};
	ABP_DataManager_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.LoadPlatforms
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Save	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Task	Type: class UMultiTaskBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::LoadPlatforms(class USAVE_Game_C* Save, class UMultiTaskBase* Task) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.LoadPlatforms");

	struct ABP_DataManager_C_LoadPlatforms_Params {
		class USAVE_Game_C* Save;			//Offset: 0 | ElementSize: 8
		class UMultiTaskBase* Task;			//Offset: 8 | ElementSize: 8
	};
	ABP_DataManager_C_LoadPlatforms_Params params;
	params.Save = Save;
	params.Task = Task;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.LoadItems
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Save	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Task	Type: class UMultiTaskBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::LoadItems(class USAVE_Game_C* Save, class UMultiTaskBase* Task) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.LoadItems");

	struct ABP_DataManager_C_LoadItems_Params {
		class USAVE_Game_C* Save;			//Offset: 0 | ElementSize: 8
		class UMultiTaskBase* Task;			//Offset: 8 | ElementSize: 8
	};
	ABP_DataManager_C_LoadItems_Params params;
	params.Save = Save;
	params.Task = Task;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.LoadFurniture
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Save	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Task	Type: class UMultiTaskBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::LoadFurniture(class USAVE_Game_C* Save, class UMultiTaskBase* Task) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.LoadFurniture");

	struct ABP_DataManager_C_LoadFurniture_Params {
		class USAVE_Game_C* Save;			//Offset: 0 | ElementSize: 8
		class UMultiTaskBase* Task;			//Offset: 8 | ElementSize: 8
	};
	ABP_DataManager_C_LoadFurniture_Params params;
	params.Save = Save;
	params.Task = Task;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.LoadGates
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Save	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Task	Type: class UMultiTaskBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::LoadGates(class USAVE_Game_C* Save, class UMultiTaskBase* Task) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.LoadGates");

	struct ABP_DataManager_C_LoadGates_Params {
		class USAVE_Game_C* Save;			//Offset: 0 | ElementSize: 8
		class UMultiTaskBase* Task;			//Offset: 8 | ElementSize: 8
	};
	ABP_DataManager_C_LoadGates_Params params;
	params.Save = Save;
	params.Task = Task;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.LoadRoads
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Save	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Task	Type: class UMultiTaskBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Old	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_DataManager_C::LoadRoads(class USAVE_Game_C* Save, class UMultiTaskBase* Task, bool Old) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.LoadRoads");

	struct ABP_DataManager_C_LoadRoads_Params {
		class USAVE_Game_C* Save;			//Offset: 0 | ElementSize: 8
		class UMultiTaskBase* Task;			//Offset: 8 | ElementSize: 8
		bool Old;			//Offset: 16 | ElementSize: 1
	};
	ABP_DataManager_C_LoadRoads_Params params;
	params.Save = Save;
	params.Task = Task;
	params.Old = Old;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.LoadSplines
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Save	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Task	Type: class UMultiTaskBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Old	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_DataManager_C::LoadSplines(class USAVE_Game_C* Save, class UMultiTaskBase* Task, bool Old) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.LoadSplines");

	struct ABP_DataManager_C_LoadSplines_Params {
		class USAVE_Game_C* Save;			//Offset: 0 | ElementSize: 8
		class UMultiTaskBase* Task;			//Offset: 8 | ElementSize: 8
		bool Old;			//Offset: 16 | ElementSize: 1
	};
	ABP_DataManager_C_LoadSplines_Params params;
	params.Save = Save;
	params.Task = Task;
	params.Old = Old;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.LoadFieldsOrchards
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Save	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Task	Type: class UMultiTaskBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::LoadFieldsOrchards(class USAVE_Game_C* Save, class UMultiTaskBase* Task) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.LoadFieldsOrchards");

	struct ABP_DataManager_C_LoadFieldsOrchards_Params {
		class USAVE_Game_C* Save;			//Offset: 0 | ElementSize: 8
		class UMultiTaskBase* Task;			//Offset: 8 | ElementSize: 8
	};
	ABP_DataManager_C_LoadFieldsOrchards_Params params;
	params.Save = Save;
	params.Task = Task;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.LoadPlayerBuildings
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Save	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Task	Type: class UMultiTaskBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::LoadPlayerBuildings(class USAVE_Game_C* Save, class UMultiTaskBase* Task) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.LoadPlayerBuildings");

	struct ABP_DataManager_C_LoadPlayerBuildings_Params {
		class USAVE_Game_C* Save;			//Offset: 0 | ElementSize: 8
		class UMultiTaskBase* Task;			//Offset: 8 | ElementSize: 8
	};
	ABP_DataManager_C_LoadPlayerBuildings_Params params;
	params.Save = Save;
	params.Task = Task;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.LoadAnimals
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Save	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Task	Type: class UMultiTaskBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::LoadAnimals(class USAVE_Game_C* Save, class UMultiTaskBase* Task) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.LoadAnimals");

	struct ABP_DataManager_C_LoadAnimals_Params {
		class USAVE_Game_C* Save;			//Offset: 0 | ElementSize: 8
		class UMultiTaskBase* Task;			//Offset: 8 | ElementSize: 8
	};
	ABP_DataManager_C_LoadAnimals_Params params;
	params.Save = Save;
	params.Task = Task;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.LoadNPCs
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Save	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Task	Type: class UMultiTaskBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::LoadNPCs(class USAVE_Game_C* Save, class UMultiTaskBase* Task) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.LoadNPCs");

	struct ABP_DataManager_C_LoadNPCs_Params {
		class USAVE_Game_C* Save;			//Offset: 0 | ElementSize: 8
		class UMultiTaskBase* Task;			//Offset: 8 | ElementSize: 8
	};
	ABP_DataManager_C_LoadNPCs_Params params;
	params.Save = Save;
	params.Task = Task;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.AddBuilding
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Building	Type: class ABP_MasterBuilding_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::AddBuilding(TEnumAsByte<E_Ownership> Ownership, class ABP_MasterBuilding_C*& Building) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.AddBuilding");

	struct ABP_DataManager_C_AddBuilding_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
		class ABP_MasterBuilding_C* Building;			//Offset: 8 | ElementSize: 8
	};
	ABP_DataManager_C_AddBuilding_Params params;
	params.Ownership = Ownership;
	params.Building = Building;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.RemoveBuilding
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Building	Type: class ABP_MasterBuilding_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::RemoveBuilding(class ABP_MasterBuilding_C*& Building) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.RemoveBuilding");

	struct ABP_DataManager_C_RemoveBuilding_Params {
		class ABP_MasterBuilding_C* Building;			//Offset: 0 | ElementSize: 8
	};
	ABP_DataManager_C_RemoveBuilding_Params params;
	params.Building = Building;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.SwapBuilding
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: to	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Building	Type: class ABP_MasterBuilding_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::SwapBuilding(TEnumAsByte<E_Ownership> to, class ABP_MasterBuilding_C*& Building) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.SwapBuilding");

	struct ABP_DataManager_C_SwapBuilding_Params {
		TEnumAsByte<E_Ownership> to;			//Offset: 0 | ElementSize: 1
		class ABP_MasterBuilding_C* Building;			//Offset: 8 | ElementSize: 8
	};
	ABP_DataManager_C_SwapBuilding_Params params;
	params.to = to;
	params.Building = Building;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.DamageBuildings
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NumberOfBuildings	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DestructionIntensity	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Buildings	Type: TArray<class ABP_MasterBuilding_C*>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_DataManager_C::DamageBuildings(TEnumAsByte<E_Ownership> Ownership, int32_t NumberOfBuildings, float DestructionIntensity, TArray<class ABP_MasterBuilding_C*>* Buildings) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.DamageBuildings");

	struct ABP_DataManager_C_DamageBuildings_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
		int32_t NumberOfBuildings;			//Offset: 4 | ElementSize: 4
		float DestructionIntensity;			//Offset: 8 | ElementSize: 4
		TArray<class ABP_MasterBuilding_C*> Buildings;			//Offset: 16 | ElementSize: 16
	};
	ABP_DataManager_C_DamageBuildings_Params params;
	params.Ownership = Ownership;
	params.NumberOfBuildings = NumberOfBuildings;
	params.DestructionIntensity = DestructionIntensity;

	UObject::ProcessEvent(fn, &params);
	if (Buildings != nullptr)
		*Buildings = params.Buildings;
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.AddField
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Field	Type: class ABP_MasterField_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::AddField(TEnumAsByte<E_Ownership> Ownership, class ABP_MasterField_C*& Field) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.AddField");

	struct ABP_DataManager_C_AddField_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
		class ABP_MasterField_C* Field;			//Offset: 8 | ElementSize: 8
	};
	ABP_DataManager_C_AddField_Params params;
	params.Ownership = Ownership;
	params.Field = Field;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.RemoveField
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Field	Type: class ABP_MasterField_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::RemoveField(class ABP_MasterField_C*& Field) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.RemoveField");

	struct ABP_DataManager_C_RemoveField_Params {
		class ABP_MasterField_C* Field;			//Offset: 0 | ElementSize: 8
	};
	ABP_DataManager_C_RemoveField_Params params;
	params.Field = Field;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.SwapField
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: to	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NPC	Type: class ABP_MasterField_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::SwapField(TEnumAsByte<E_Ownership> to, class ABP_MasterField_C*& NPC) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.SwapField");

	struct ABP_DataManager_C_SwapField_Params {
		TEnumAsByte<E_Ownership> to;			//Offset: 0 | ElementSize: 1
		class ABP_MasterField_C* NPC;			//Offset: 8 | ElementSize: 8
	};
	ABP_DataManager_C_SwapField_Params params;
	params.to = to;
	params.NPC = NPC;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.SeasonalUpdateFields
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_DataManager_C::SeasonalUpdateFields() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.SeasonalUpdateFields");

	struct ABP_DataManager_C_SeasonalUpdateFields_Params {
	};
	ABP_DataManager_C_SeasonalUpdateFields_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.DamageFields
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NumberOfFieldsToDamage	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Intensity	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamagedFields	Type: TArray<class ABP_MasterField_C*>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_DataManager_C::DamageFields(TEnumAsByte<E_Ownership> Ownership, int32_t NumberOfFieldsToDamage, float Intensity, TArray<class ABP_MasterField_C*>* DamagedFields) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.DamageFields");

	struct ABP_DataManager_C_DamageFields_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
		int32_t NumberOfFieldsToDamage;			//Offset: 4 | ElementSize: 4
		float Intensity;			//Offset: 8 | ElementSize: 4
		TArray<class ABP_MasterField_C*> DamagedFields;			//Offset: 16 | ElementSize: 16
	};
	ABP_DataManager_C_DamageFields_Params params;
	params.Ownership = Ownership;
	params.NumberOfFieldsToDamage = NumberOfFieldsToDamage;
	params.Intensity = Intensity;

	UObject::ProcessEvent(fn, &params);
	if (DamagedFields != nullptr)
		*DamagedFields = params.DamagedFields;
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.UpdateBuildingsRelations
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::UpdateBuildingsRelations(TEnumAsByte<E_Ownership> Ownership) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.UpdateBuildingsRelations");

	struct ABP_DataManager_C_UpdateBuildingsRelations_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
	};
	ABP_DataManager_C_UpdateBuildingsRelations_Params params;
	params.Ownership = Ownership;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.SortDependentFields
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Building	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Distance	Type: TArray<float>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_DataManager_C::SortDependentFields(class ABP_MasterBuilding_C* Building, TArray<float>* Distance) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.SortDependentFields");

	struct ABP_DataManager_C_SortDependentFields_Params {
		class ABP_MasterBuilding_C* Building;			//Offset: 0 | ElementSize: 8
		TArray<float> Distance;			//Offset: 8 | ElementSize: 16
	};
	ABP_DataManager_C_SortDependentFields_Params params;
	params.Building = Building;

	UObject::ProcessEvent(fn, &params);
	if (Distance != nullptr)
		*Distance = params.Distance;
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.AddFurniture
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Furniture	Type: class ABP_MasterFurniture_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::AddFurniture(TEnumAsByte<E_Ownership> Ownership, class ABP_MasterFurniture_C*& Furniture) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.AddFurniture");

	struct ABP_DataManager_C_AddFurniture_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
		class ABP_MasterFurniture_C* Furniture;			//Offset: 8 | ElementSize: 8
	};
	ABP_DataManager_C_AddFurniture_Params params;
	params.Ownership = Ownership;
	params.Furniture = Furniture;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.RemoveFurniture
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Furniture	Type: class ABP_MasterFurniture_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::RemoveFurniture(class ABP_MasterFurniture_C*& Furniture) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.RemoveFurniture");

	struct ABP_DataManager_C_RemoveFurniture_Params {
		class ABP_MasterFurniture_C* Furniture;			//Offset: 0 | ElementSize: 8
	};
	ABP_DataManager_C_RemoveFurniture_Params params;
	params.Furniture = Furniture;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.SwapFurniture
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: to	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Furniture	Type: class ABP_MasterFurniture_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::SwapFurniture(TEnumAsByte<E_Ownership> to, class ABP_MasterFurniture_C*& Furniture) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.SwapFurniture");

	struct ABP_DataManager_C_SwapFurniture_Params {
		TEnumAsByte<E_Ownership> to;			//Offset: 0 | ElementSize: 1
		class ABP_MasterFurniture_C* Furniture;			//Offset: 8 | ElementSize: 8
	};
	ABP_DataManager_C_SwapFurniture_Params params;
	params.to = to;
	params.Furniture = Furniture;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.GetBuildings
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BuildingCategory	Type: TEnumAsByte<E_Buildings>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BuildingStatus	Type: TEnumAsByte<E_BuildingStatus>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ListOfBuildings	Type: TArray<class ABP_MasterBuilding_C*>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_DataManager_C::GetBuildings(TEnumAsByte<E_Ownership> Ownership, TEnumAsByte<E_Buildings> BuildingCategory, TEnumAsByte<E_BuildingStatus> BuildingStatus, bool* Success, TArray<class ABP_MasterBuilding_C*>* ListOfBuildings) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.GetBuildings");

	struct ABP_DataManager_C_GetBuildings_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_Buildings> BuildingCategory;			//Offset: 1 | ElementSize: 1
		TEnumAsByte<E_BuildingStatus> BuildingStatus;			//Offset: 2 | ElementSize: 1
		bool Success;			//Offset: 3 | ElementSize: 1
		TArray<class ABP_MasterBuilding_C*> ListOfBuildings;			//Offset: 8 | ElementSize: 16
	};
	ABP_DataManager_C_GetBuildings_Params params;
	params.Ownership = Ownership;
	params.BuildingCategory = BuildingCategory;
	params.BuildingStatus = BuildingStatus;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (ListOfBuildings != nullptr)
		*ListOfBuildings = params.ListOfBuildings;
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.GetFurniture
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FurnitureCategory	Type: TEnumAsByte<E_FurnitureCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Furniture	Type: TArray<class ABP_MasterFurniture_C*>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_DataManager_C::GetFurniture(TEnumAsByte<E_Ownership> Ownership, TEnumAsByte<E_FurnitureCategories> FurnitureCategory, bool* Success, TArray<class ABP_MasterFurniture_C*>* Furniture) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.GetFurniture");

	struct ABP_DataManager_C_GetFurniture_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_FurnitureCategories> FurnitureCategory;			//Offset: 1 | ElementSize: 1
		bool Success;			//Offset: 2 | ElementSize: 1
		TArray<class ABP_MasterFurniture_C*> Furniture;			//Offset: 8 | ElementSize: 16
	};
	ABP_DataManager_C_GetFurniture_Params params;
	params.Ownership = Ownership;
	params.FurnitureCategory = FurnitureCategory;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (Furniture != nullptr)
		*Furniture = params.Furniture;
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.GetFields
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FieldCategory	Type: TEnumAsByte<E_FieldCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Fields	Type: TArray<class ABP_MasterField_C*>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_DataManager_C::GetFields(TEnumAsByte<E_Ownership> Ownership, TEnumAsByte<E_FieldCategories> FieldCategory, bool* Success, TArray<class ABP_MasterField_C*>* Fields) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.GetFields");

	struct ABP_DataManager_C_GetFields_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_FieldCategories> FieldCategory;			//Offset: 1 | ElementSize: 1
		bool Success;			//Offset: 2 | ElementSize: 1
		TArray<class ABP_MasterField_C*> Fields;			//Offset: 8 | ElementSize: 16
	};
	ABP_DataManager_C_GetFields_Params params;
	params.Ownership = Ownership;
	params.FieldCategory = FieldCategory;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (Fields != nullptr)
		*Fields = params.Fields;
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.FindField
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Location	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OnlyCheck	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: CheckDistance	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IgnoreLocationType	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Field	Type: class ABP_MasterField_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Chunk	Type: struct FST_ChunkData	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_DataManager_C::FindField(struct FVector Location, bool OnlyCheck, float CheckDistance, TEnumAsByte<E_Ownership> Ownership, bool IgnoreLocationType, bool* Success, class ABP_MasterField_C** Field, struct FST_ChunkData* Chunk) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.FindField");

	struct ABP_DataManager_C_FindField_Params {
		struct FVector Location;			//Offset: 0 | ElementSize: 12
		bool OnlyCheck;			//Offset: 12 | ElementSize: 1
		float CheckDistance;			//Offset: 16 | ElementSize: 4
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 20 | ElementSize: 1
		bool IgnoreLocationType;			//Offset: 21 | ElementSize: 1
		bool Success;			//Offset: 22 | ElementSize: 1
		class ABP_MasterField_C* Field;			//Offset: 24 | ElementSize: 8
		struct FST_ChunkData Chunk;			//Offset: 32 | ElementSize: 112
	};
	ABP_DataManager_C_FindField_Params params;
	params.Location = Location;
	params.OnlyCheck = OnlyCheck;
	params.CheckDistance = CheckDistance;
	params.Ownership = Ownership;
	params.IgnoreLocationType = IgnoreLocationType;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (Field != nullptr)
		*Field = params.Field;
	if (Chunk != nullptr)
		*Chunk = params.Chunk;
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.AddNPC
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC	Type: class ABP_NPC_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::AddNPC(class ABP_NPC_C*& NPC) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.AddNPC");

	struct ABP_DataManager_C_AddNPC_Params {
		class ABP_NPC_C* NPC;			//Offset: 0 | ElementSize: 8
	};
	ABP_DataManager_C_AddNPC_Params params;
	params.NPC = NPC;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.RemoveNPC
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC	Type: class ABP_NPC_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::RemoveNPC(class ABP_NPC_C*& NPC) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.RemoveNPC");

	struct ABP_DataManager_C_RemoveNPC_Params {
		class ABP_NPC_C* NPC;			//Offset: 0 | ElementSize: 8
	};
	ABP_DataManager_C_RemoveNPC_Params params;
	params.NPC = NPC;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.RemoveNPCFromOtherOwnerships
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC	Type: class ABP_NPC_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::RemoveNPCFromOtherOwnerships(class ABP_NPC_C*& NPC) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.RemoveNPCFromOtherOwnerships");

	struct ABP_DataManager_C_RemoveNPCFromOtherOwnerships_Params {
		class ABP_NPC_C* NPC;			//Offset: 0 | ElementSize: 8
	};
	ABP_DataManager_C_RemoveNPCFromOtherOwnerships_Params params;
	params.NPC = NPC;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.SwapNPC
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: to	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NPC	Type: class ABP_NPC_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::SwapNPC(TEnumAsByte<E_Ownership> to, class ABP_NPC_C*& NPC) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.SwapNPC");

	struct ABP_DataManager_C_SwapNPC_Params {
		TEnumAsByte<E_Ownership> to;			//Offset: 0 | ElementSize: 1
		class ABP_NPC_C* NPC;			//Offset: 8 | ElementSize: 8
	};
	ABP_DataManager_C_SwapNPC_Params params;
	params.to = to;
	params.NPC = NPC;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.GetNPCs
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: NPCs	Type: TArray<class ABP_NPC_C*>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_DataManager_C::GetNPCs(TEnumAsByte<E_Ownership> Ownership, bool* Success, TArray<class ABP_NPC_C*>* NPCs) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.GetNPCs");

	struct ABP_DataManager_C_GetNPCs_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
		bool Success;			//Offset: 1 | ElementSize: 1
		TArray<class ABP_NPC_C*> NPCs;			//Offset: 8 | ElementSize: 16
	};
	ABP_DataManager_C_GetNPCs_Params params;
	params.Ownership = Ownership;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (NPCs != nullptr)
		*NPCs = params.NPCs;
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.GetAllBuildings
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: BuildingCategory	Type: TEnumAsByte<E_Buildings>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BuildingStatus	Type: TEnumAsByte<E_BuildingStatus>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: ListOfBuildings	Type: TArray<class ABP_MasterBuilding_C*>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_DataManager_C::GetAllBuildings(TEnumAsByte<E_Buildings> BuildingCategory, TEnumAsByte<E_BuildingStatus> BuildingStatus, bool* Success, TArray<class ABP_MasterBuilding_C*>* ListOfBuildings) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.GetAllBuildings");

	struct ABP_DataManager_C_GetAllBuildings_Params {
		TEnumAsByte<E_Buildings> BuildingCategory;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_BuildingStatus> BuildingStatus;			//Offset: 1 | ElementSize: 1
		bool Success;			//Offset: 2 | ElementSize: 1
		TArray<class ABP_MasterBuilding_C*> ListOfBuildings;			//Offset: 8 | ElementSize: 16
	};
	ABP_DataManager_C_GetAllBuildings_Params params;
	params.BuildingCategory = BuildingCategory;
	params.BuildingStatus = BuildingStatus;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (ListOfBuildings != nullptr)
		*ListOfBuildings = params.ListOfBuildings;
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.GetBuildingByID
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: IgnoreOwnership	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Building	Type: class ABP_MasterBuilding_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::GetBuildingByID(TEnumAsByte<E_Ownership> Ownership, struct FString ID, bool IgnoreOwnership, bool* Success, class ABP_MasterBuilding_C** Building) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.GetBuildingByID");

	struct ABP_DataManager_C_GetBuildingByID_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
		struct FString ID;			//Offset: 8 | ElementSize: 16
		bool IgnoreOwnership;			//Offset: 24 | ElementSize: 1
		bool Success;			//Offset: 25 | ElementSize: 1
		class ABP_MasterBuilding_C* Building;			//Offset: 32 | ElementSize: 8
	};
	ABP_DataManager_C_GetBuildingByID_Params params;
	params.Ownership = Ownership;
	params.ID = ID;
	params.IgnoreOwnership = IgnoreOwnership;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (Building != nullptr)
		*Building = params.Building;
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.GetAllNPCs
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: OwnershipsToIgnore	Type: TArray<TEnumAsByte<E_Ownership>>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: NPCs	Type: TArray<class ABP_NPC_C*>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_DataManager_C::GetAllNPCs(TArray<TEnumAsByte<E_Ownership>>* OwnershipsToIgnore, bool* Success, TArray<class ABP_NPC_C*>* NPCs) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.GetAllNPCs");

	struct ABP_DataManager_C_GetAllNPCs_Params {
		TArray<TEnumAsByte<E_Ownership>> OwnershipsToIgnore;			//Offset: 0 | ElementSize: 16
		bool Success;			//Offset: 16 | ElementSize: 1
		TArray<class ABP_NPC_C*> NPCs;			//Offset: 24 | ElementSize: 16
	};
	ABP_DataManager_C_GetAllNPCs_Params params;

	UObject::ProcessEvent(fn, &params);
	if (OwnershipsToIgnore != nullptr)
		*OwnershipsToIgnore = params.OwnershipsToIgnore;
	if (Success != nullptr)
		*Success = params.Success;
	if (NPCs != nullptr)
		*NPCs = params.NPCs;
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.GetNPCByID
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: IgnoreOwnership	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: NPCs	Type: class ABP_NPC_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::GetNPCByID(TEnumAsByte<E_Ownership> Ownership, struct FString ID, bool IgnoreOwnership, bool* Success, class ABP_NPC_C** NPCs) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.GetNPCByID");

	struct ABP_DataManager_C_GetNPCByID_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
		struct FString ID;			//Offset: 8 | ElementSize: 16
		bool IgnoreOwnership;			//Offset: 24 | ElementSize: 1
		bool Success;			//Offset: 25 | ElementSize: 1
		class ABP_NPC_C* NPCs;			//Offset: 32 | ElementSize: 8
	};
	ABP_DataManager_C_GetNPCByID_Params params;
	params.Ownership = Ownership;
	params.ID = ID;
	params.IgnoreOwnership = IgnoreOwnership;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (NPCs != nullptr)
		*NPCs = params.NPCs;
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.AddAnimal
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Animal	Type: class ABP_AnimalBase_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::AddAnimal(TEnumAsByte<E_Ownership> Ownership, class ABP_AnimalBase_C*& Animal) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.AddAnimal");

	struct ABP_DataManager_C_AddAnimal_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
		class ABP_AnimalBase_C* Animal;			//Offset: 8 | ElementSize: 8
	};
	ABP_DataManager_C_AddAnimal_Params params;
	params.Ownership = Ownership;
	params.Animal = Animal;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.RemoveAnimal
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Animal	Type: class ABP_AnimalBase_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::RemoveAnimal(class ABP_AnimalBase_C*& Animal) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.RemoveAnimal");

	struct ABP_DataManager_C_RemoveAnimal_Params {
		class ABP_AnimalBase_C* Animal;			//Offset: 0 | ElementSize: 8
	};
	ABP_DataManager_C_RemoveAnimal_Params params;
	params.Animal = Animal;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.SwapAnimal
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: to	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Animal	Type: class ABP_AnimalBase_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::SwapAnimal(TEnumAsByte<E_Ownership> to, class ABP_AnimalBase_C*& Animal) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.SwapAnimal");

	struct ABP_DataManager_C_SwapAnimal_Params {
		TEnumAsByte<E_Ownership> to;			//Offset: 0 | ElementSize: 1
		class ABP_AnimalBase_C* Animal;			//Offset: 8 | ElementSize: 8
	};
	ABP_DataManager_C_SwapAnimal_Params params;
	params.to = to;
	params.Animal = Animal;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.GetAnimals
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IgnoreCategory	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: AnimalCategory	Type: TEnumAsByte<E_AnimalType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Animals	Type: TArray<class ABP_AnimalBase_C*>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_DataManager_C::GetAnimals(TEnumAsByte<E_Ownership> Ownership, bool IgnoreCategory, TEnumAsByte<E_AnimalType> AnimalCategory, bool* Success, TArray<class ABP_AnimalBase_C*>* Animals) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.GetAnimals");

	struct ABP_DataManager_C_GetAnimals_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
		bool IgnoreCategory;			//Offset: 1 | ElementSize: 1
		TEnumAsByte<E_AnimalType> AnimalCategory;			//Offset: 2 | ElementSize: 1
		bool Success;			//Offset: 3 | ElementSize: 1
		TArray<class ABP_AnimalBase_C*> Animals;			//Offset: 8 | ElementSize: 16
	};
	ABP_DataManager_C_GetAnimals_Params params;
	params.Ownership = Ownership;
	params.IgnoreCategory = IgnoreCategory;
	params.AnimalCategory = AnimalCategory;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (Animals != nullptr)
		*Animals = params.Animals;
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.AddSplineStructure
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SplineStructure	Type: class ABP_MasterSplineStructure_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Index	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::AddSplineStructure(TEnumAsByte<E_Ownership> Ownership, class ABP_MasterSplineStructure_C*& SplineStructure, int32_t* Index) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.AddSplineStructure");

	struct ABP_DataManager_C_AddSplineStructure_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
		class ABP_MasterSplineStructure_C* SplineStructure;			//Offset: 8 | ElementSize: 8
		int32_t Index;			//Offset: 16 | ElementSize: 4
	};
	ABP_DataManager_C_AddSplineStructure_Params params;
	params.Ownership = Ownership;
	params.SplineStructure = SplineStructure;

	UObject::ProcessEvent(fn, &params);
	if (Index != nullptr)
		*Index = params.Index;
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.RemoveSplineStructure
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: SplineStructure	Type: class ABP_MasterSplineStructure_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::RemoveSplineStructure(class ABP_MasterSplineStructure_C*& SplineStructure) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.RemoveSplineStructure");

	struct ABP_DataManager_C_RemoveSplineStructure_Params {
		class ABP_MasterSplineStructure_C* SplineStructure;			//Offset: 0 | ElementSize: 8
	};
	ABP_DataManager_C_RemoveSplineStructure_Params params;
	params.SplineStructure = SplineStructure;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.SwapSplineStructure
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: to	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SplineStructure	Type: class ABP_MasterSplineStructure_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::SwapSplineStructure(TEnumAsByte<E_Ownership> to, class ABP_MasterSplineStructure_C*& SplineStructure) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.SwapSplineStructure");

	struct ABP_DataManager_C_SwapSplineStructure_Params {
		TEnumAsByte<E_Ownership> to;			//Offset: 0 | ElementSize: 1
		class ABP_MasterSplineStructure_C* SplineStructure;			//Offset: 8 | ElementSize: 8
	};
	ABP_DataManager_C_SwapSplineStructure_Params params;
	params.to = to;
	params.SplineStructure = SplineStructure;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.GetSplineStructure
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SplineStructures	Type: TArray<class ABP_MasterSplineStructure_C*>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_DataManager_C::GetSplineStructure(TEnumAsByte<E_Ownership> Ownership, bool* Success, TArray<class ABP_MasterSplineStructure_C*>* SplineStructures) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.GetSplineStructure");

	struct ABP_DataManager_C_GetSplineStructure_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
		bool Success;			//Offset: 1 | ElementSize: 1
		TArray<class ABP_MasterSplineStructure_C*> SplineStructures;			//Offset: 8 | ElementSize: 16
	};
	ABP_DataManager_C_GetSplineStructure_Params params;
	params.Ownership = Ownership;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (SplineStructures != nullptr)
		*SplineStructures = params.SplineStructures;
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.Init
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_DataManager_C::Init() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.Init");

	struct ABP_DataManager_C_Init_Params {
	};
	ABP_DataManager_C_Init_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.CheckForAnimal
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Animal	Type: class ABP_AnimalBase_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_DataManager_C::CheckForAnimal(class ABP_AnimalBase_C* Animal, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.CheckForAnimal");

	struct ABP_DataManager_C_CheckForAnimal_Params {
		class ABP_AnimalBase_C* Animal;			//Offset: 0 | ElementSize: 8
		bool Success;			//Offset: 8 | ElementSize: 1
	};
	ABP_DataManager_C_CheckForAnimal_Params params;
	params.Animal = Animal;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.UpdateSeasonalItems
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_DataManager_C::UpdateSeasonalItems() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.UpdateSeasonalItems");

	struct ABP_DataManager_C_UpdateSeasonalItems_Params {
	};
	ABP_DataManager_C_UpdateSeasonalItems_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_Buildings
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Task	Type: class UMultiTaskBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::LoadSaveFileIntoSystem_Buildings(class USAVE_Game_C* SaveReference, class UMultiTaskBase* Task) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_Buildings");

	struct ABP_DataManager_C_LoadSaveFileIntoSystem_Buildings_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
		class UMultiTaskBase* Task;			//Offset: 8 | ElementSize: 8
	};
	ABP_DataManager_C_LoadSaveFileIntoSystem_Buildings_Params params;
	params.SaveReference = SaveReference;
	params.Task = Task;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.FindBuildingWithAvailableSpace
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BuildingCategory	Type: TEnumAsByte<E_Buildings>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BuildingStatus	Type: TEnumAsByte<E_BuildingStatus>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FullyEmpty	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: NoFamilyInside	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: sex	Type: TEnumAsByte<E_Sex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsAvailable	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Building	Type: class ABP_MasterBuilding_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::FindBuildingWithAvailableSpace(TEnumAsByte<E_Ownership> Ownership, TEnumAsByte<E_Buildings> BuildingCategory, TEnumAsByte<E_BuildingStatus> BuildingStatus, bool FullyEmpty, bool NoFamilyInside, TEnumAsByte<E_Sex> sex, bool* IsAvailable, class ABP_MasterBuilding_C** Building) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.FindBuildingWithAvailableSpace");

	struct ABP_DataManager_C_FindBuildingWithAvailableSpace_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_Buildings> BuildingCategory;			//Offset: 1 | ElementSize: 1
		TEnumAsByte<E_BuildingStatus> BuildingStatus;			//Offset: 2 | ElementSize: 1
		bool FullyEmpty;			//Offset: 3 | ElementSize: 1
		bool NoFamilyInside;			//Offset: 4 | ElementSize: 1
		TEnumAsByte<E_Sex> sex;			//Offset: 5 | ElementSize: 1
		bool IsAvailable;			//Offset: 6 | ElementSize: 1
		class ABP_MasterBuilding_C* Building;			//Offset: 8 | ElementSize: 8
	};
	ABP_DataManager_C_FindBuildingWithAvailableSpace_Params params;
	params.Ownership = Ownership;
	params.BuildingCategory = BuildingCategory;
	params.BuildingStatus = BuildingStatus;
	params.FullyEmpty = FullyEmpty;
	params.NoFamilyInside = NoFamilyInside;
	params.sex = sex;

	UObject::ProcessEvent(fn, &params);
	if (IsAvailable != nullptr)
		*IsAvailable = params.IsAvailable;
	if (Building != nullptr)
		*Building = params.Building;
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.GetFurnitureByDistance
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FurnitureCategory	Type: TEnumAsByte<E_FurnitureCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MustBeSittingFurniture	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IgnoreOwnership	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: OnlyNonPlayerVillages	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: StartLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CheckOccupy	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: FurnitureToIgnore	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Furniture	Type: class ABP_MasterFurniture_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::GetFurnitureByDistance(TEnumAsByte<E_Ownership> Ownership, TEnumAsByte<E_FurnitureCategories> FurnitureCategory, bool MustBeSittingFurniture, bool IgnoreOwnership, bool OnlyNonPlayerVillages, struct FVector StartLocation, bool CheckOccupy, class AActor* FurnitureToIgnore, bool* Success, class ABP_MasterFurniture_C** Furniture) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.GetFurnitureByDistance");

	struct ABP_DataManager_C_GetFurnitureByDistance_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_FurnitureCategories> FurnitureCategory;			//Offset: 1 | ElementSize: 1
		bool MustBeSittingFurniture;			//Offset: 2 | ElementSize: 1
		bool IgnoreOwnership;			//Offset: 3 | ElementSize: 1
		bool OnlyNonPlayerVillages;			//Offset: 4 | ElementSize: 1
		struct FVector StartLocation;			//Offset: 8 | ElementSize: 12
		bool CheckOccupy;			//Offset: 20 | ElementSize: 1
		class AActor* FurnitureToIgnore;			//Offset: 24 | ElementSize: 8
		bool Success;			//Offset: 32 | ElementSize: 1
		class ABP_MasterFurniture_C* Furniture;			//Offset: 40 | ElementSize: 8
	};
	ABP_DataManager_C_GetFurnitureByDistance_Params params;
	params.Ownership = Ownership;
	params.FurnitureCategory = FurnitureCategory;
	params.MustBeSittingFurniture = MustBeSittingFurniture;
	params.IgnoreOwnership = IgnoreOwnership;
	params.OnlyNonPlayerVillages = OnlyNonPlayerVillages;
	params.StartLocation = StartLocation;
	params.CheckOccupy = CheckOccupy;
	params.FurnitureToIgnore = FurnitureToIgnore;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (Furniture != nullptr)
		*Furniture = params.Furniture;
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.GetRandomFurniture
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FurnitureCategory	Type: TEnumAsByte<E_FurnitureCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MustBeSittingFurniture	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IgnoreOwnership	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: CheckOccupy	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: StartLocation	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Range	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FurnitureToIgnore	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Furniture	Type: class ABP_MasterFurniture_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::GetRandomFurniture(TEnumAsByte<E_Ownership> Ownership, TEnumAsByte<E_FurnitureCategories> FurnitureCategory, bool MustBeSittingFurniture, bool IgnoreOwnership, bool CheckOccupy, struct FVector StartLocation, float Range, class AActor* FurnitureToIgnore, bool* Success, class ABP_MasterFurniture_C** Furniture) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.GetRandomFurniture");

	struct ABP_DataManager_C_GetRandomFurniture_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_FurnitureCategories> FurnitureCategory;			//Offset: 1 | ElementSize: 1
		bool MustBeSittingFurniture;			//Offset: 2 | ElementSize: 1
		bool IgnoreOwnership;			//Offset: 3 | ElementSize: 1
		bool CheckOccupy;			//Offset: 4 | ElementSize: 1
		struct FVector StartLocation;			//Offset: 8 | ElementSize: 12
		float Range;			//Offset: 20 | ElementSize: 4
		class AActor* FurnitureToIgnore;			//Offset: 24 | ElementSize: 8
		bool Success;			//Offset: 32 | ElementSize: 1
		class ABP_MasterFurniture_C* Furniture;			//Offset: 40 | ElementSize: 8
	};
	ABP_DataManager_C_GetRandomFurniture_Params params;
	params.Ownership = Ownership;
	params.FurnitureCategory = FurnitureCategory;
	params.MustBeSittingFurniture = MustBeSittingFurniture;
	params.IgnoreOwnership = IgnoreOwnership;
	params.CheckOccupy = CheckOccupy;
	params.StartLocation = StartLocation;
	params.Range = Range;
	params.FurnitureToIgnore = FurnitureToIgnore;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (Furniture != nullptr)
		*Furniture = params.Furniture;
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.ChangeItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Guid	Type: struct FGuid	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::ChangeItem(struct FGuid Guid) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.ChangeItem");

	struct ABP_DataManager_C_ChangeItem_Params {
		struct FGuid Guid;			//Offset: 0 | ElementSize: 16
	};
	ABP_DataManager_C_ChangeItem_Params params;
	params.Guid = Guid;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.CheckPlayerFamiliesHouse
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveGameVersion	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::CheckPlayerFamiliesHouse(struct FString SaveGameVersion) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.CheckPlayerFamiliesHouse");

	struct ABP_DataManager_C_CheckPlayerFamiliesHouse_Params {
		struct FString SaveGameVersion;			//Offset: 0 | ElementSize: 16
	};
	ABP_DataManager_C_CheckPlayerFamiliesHouse_Params params;
	params.SaveGameVersion = SaveGameVersion;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.FixPlayerFamily
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Save_Game_Version	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::FixPlayerFamily(struct FString Save_Game_Version) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.FixPlayerFamily");

	struct ABP_DataManager_C_FixPlayerFamily_Params {
		struct FString Save_Game_Version;			//Offset: 0 | ElementSize: 16
	};
	ABP_DataManager_C_FixPlayerFamily_Params params;
	params.Save_Game_Version = Save_Game_Version;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.CheckHeirsAreMale
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveGameVersion	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: CharacterReference	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::CheckHeirsAreMale(struct FString SaveGameVersion, class ABP_BaseCharacter_C* CharacterReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.CheckHeirsAreMale");

	struct ABP_DataManager_C_CheckHeirsAreMale_Params {
		struct FString SaveGameVersion;			//Offset: 0 | ElementSize: 16
		class ABP_BaseCharacter_C* CharacterReference;			//Offset: 16 | ElementSize: 8
	};
	ABP_DataManager_C_CheckHeirsAreMale_Params params;
	params.SaveGameVersion = SaveGameVersion;
	params.CharacterReference = CharacterReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_NPCBuildings
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::LoadSaveFileIntoSystem_NPCBuildings(class USAVE_Game_C* SaveReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_NPCBuildings");

	struct ABP_DataManager_C_LoadSaveFileIntoSystem_NPCBuildings_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_DataManager_C_LoadSaveFileIntoSystem_NPCBuildings_Params params;
	params.SaveReference = SaveReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_CropsFinish
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_DataManager_C::LoadSaveFileIntoSystem_CropsFinish() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_CropsFinish");

	struct ABP_DataManager_C_LoadSaveFileIntoSystem_CropsFinish_Params {
	};
	ABP_DataManager_C_LoadSaveFileIntoSystem_CropsFinish_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_UpdateRelations
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_DataManager_C::LoadSaveFileIntoSystem_UpdateRelations() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_UpdateRelations");

	struct ABP_DataManager_C_LoadSaveFileIntoSystem_UpdateRelations_Params {
	};
	ABP_DataManager_C_LoadSaveFileIntoSystem_UpdateRelations_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_SplineStructure
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Task	Type: class UMultiTaskBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::LoadSaveFileIntoSystem_SplineStructure(class USAVE_Game_C* SaveReference, class UMultiTaskBase* Task) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_SplineStructure");

	struct ABP_DataManager_C_LoadSaveFileIntoSystem_SplineStructure_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
		class UMultiTaskBase* Task;			//Offset: 8 | ElementSize: 8
	};
	ABP_DataManager_C_LoadSaveFileIntoSystem_SplineStructure_Params params;
	params.SaveReference = SaveReference;
	params.Task = Task;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_Fields_Orchards
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Task	Type: class UMultiTaskBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::LoadSaveFileIntoSystem_Fields_Orchards(class USAVE_Game_C* SaveReference, class UMultiTaskBase* Task) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_Fields_Orchards");

	struct ABP_DataManager_C_LoadSaveFileIntoSystem_Fields_Orchards_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
		class UMultiTaskBase* Task;			//Offset: 8 | ElementSize: 8
	};
	ABP_DataManager_C_LoadSaveFileIntoSystem_Fields_Orchards_Params params;
	params.SaveReference = SaveReference;
	params.Task = Task;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_Gates
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Task	Type: class UMultiTaskBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::LoadSaveFileIntoSystem_Gates(class USAVE_Game_C* SaveReference, class UMultiTaskBase* Task) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_Gates");

	struct ABP_DataManager_C_LoadSaveFileIntoSystem_Gates_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
		class UMultiTaskBase* Task;			//Offset: 8 | ElementSize: 8
	};
	ABP_DataManager_C_LoadSaveFileIntoSystem_Gates_Params params;
	params.SaveReference = SaveReference;
	params.Task = Task;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_Platforms
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Task	Type: class UMultiTaskBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::LoadSaveFileIntoSystem_Platforms(class USAVE_Game_C* SaveReference, class UMultiTaskBase* Task) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_Platforms");

	struct ABP_DataManager_C_LoadSaveFileIntoSystem_Platforms_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
		class UMultiTaskBase* Task;			//Offset: 8 | ElementSize: 8
	};
	ABP_DataManager_C_LoadSaveFileIntoSystem_Platforms_Params params;
	params.SaveReference = SaveReference;
	params.Task = Task;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_Roads
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Task	Type: class UMultiTaskBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::LoadSaveFileIntoSystem_Roads(class USAVE_Game_C* SaveReference, class UMultiTaskBase* Task) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_Roads");

	struct ABP_DataManager_C_LoadSaveFileIntoSystem_Roads_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
		class UMultiTaskBase* Task;			//Offset: 8 | ElementSize: 8
	};
	ABP_DataManager_C_LoadSaveFileIntoSystem_Roads_Params params;
	params.SaveReference = SaveReference;
	params.Task = Task;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_Furniture
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Task	Type: class UMultiTaskBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::LoadSaveFileIntoSystem_Furniture(class USAVE_Game_C* SaveReference, class UMultiTaskBase* Task) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_Furniture");

	struct ABP_DataManager_C_LoadSaveFileIntoSystem_Furniture_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
		class UMultiTaskBase* Task;			//Offset: 8 | ElementSize: 8
	};
	ABP_DataManager_C_LoadSaveFileIntoSystem_Furniture_Params params;
	params.SaveReference = SaveReference;
	params.Task = Task;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_NPC
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TaskToResume	Type: class UMultiTaskBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::LoadSaveFileIntoSystem_NPC(class USAVE_Game_C* SaveReference, class UMultiTaskBase* TaskToResume) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_NPC");

	struct ABP_DataManager_C_LoadSaveFileIntoSystem_NPC_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
		class UMultiTaskBase* TaskToResume;			//Offset: 8 | ElementSize: 8
	};
	ABP_DataManager_C_LoadSaveFileIntoSystem_NPC_Params params;
	params.SaveReference = SaveReference;
	params.TaskToResume = TaskToResume;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_Animals
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TaskToResume	Type: class UMultiTaskBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::LoadSaveFileIntoSystem_Animals(class USAVE_Game_C* SaveReference, class UMultiTaskBase* TaskToResume) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_Animals");

	struct ABP_DataManager_C_LoadSaveFileIntoSystem_Animals_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
		class UMultiTaskBase* TaskToResume;			//Offset: 8 | ElementSize: 8
	};
	ABP_DataManager_C_LoadSaveFileIntoSystem_Animals_Params params;
	params.SaveReference = SaveReference;
	params.TaskToResume = TaskToResume;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_Others
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Task	Type: class UMultiTaskBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::LoadSaveFileIntoSystem_Others(class USAVE_Game_C* SaveReference, class UMultiTaskBase* Task) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_Others");

	struct ABP_DataManager_C_LoadSaveFileIntoSystem_Others_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
		class UMultiTaskBase* Task;			//Offset: 8 | ElementSize: 8
	};
	ABP_DataManager_C_LoadSaveFileIntoSystem_Others_Params params;
	params.SaveReference = SaveReference;
	params.Task = Task;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.SaveDataFromSystemToFile
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.SaveDataFromSystemToFile");

	struct ABP_DataManager_C_SaveDataFromSystemToFile_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_DataManager_C_SaveDataFromSystemToFile_Params params;
	params.SaveReference = SaveReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.AddRoad
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Road	Type: class ABP_MasterRoadSpline_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::AddRoad(TEnumAsByte<E_Ownership> Ownership, class ABP_MasterRoadSpline_C*& Road) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.AddRoad");

	struct ABP_DataManager_C_AddRoad_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
		class ABP_MasterRoadSpline_C* Road;			//Offset: 8 | ElementSize: 8
	};
	ABP_DataManager_C_AddRoad_Params params;
	params.Ownership = Ownership;
	params.Road = Road;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.RemoveRoad
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Road	Type: class ABP_MasterRoadSpline_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::RemoveRoad(class ABP_MasterRoadSpline_C*& Road) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.RemoveRoad");

	struct ABP_DataManager_C_RemoveRoad_Params {
		class ABP_MasterRoadSpline_C* Road;			//Offset: 0 | ElementSize: 8
	};
	ABP_DataManager_C_RemoveRoad_Params params;
	params.Road = Road;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.RefreshRoads
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Location	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CheckDistance	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IgnoreLocationType	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_DataManager_C::RefreshRoads(struct FVector Location, float CheckDistance, TEnumAsByte<E_Ownership> Ownership, bool IgnoreLocationType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.RefreshRoads");

	struct ABP_DataManager_C_RefreshRoads_Params {
		struct FVector Location;			//Offset: 0 | ElementSize: 12
		float CheckDistance;			//Offset: 12 | ElementSize: 4
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 16 | ElementSize: 1
		bool IgnoreLocationType;			//Offset: 17 | ElementSize: 1
	};
	ABP_DataManager_C_RefreshRoads_Params params;
	params.Location = Location;
	params.CheckDistance = CheckDistance;
	params.Ownership = Ownership;
	params.IgnoreLocationType = IgnoreLocationType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.CheckWaggoners
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveGameVersion	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::CheckWaggoners(struct FString SaveGameVersion) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.CheckWaggoners");

	struct ABP_DataManager_C_CheckWaggoners_Params {
		struct FString SaveGameVersion;			//Offset: 0 | ElementSize: 16
	};
	ABP_DataManager_C_CheckWaggoners_Params params;
	params.SaveGameVersion = SaveGameVersion;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.VendorCategorySettings
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: VendorCategoryName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsVendor	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OutsideNPCType	Type: TEnumAsByte<E_OutsideNPCTypes>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NPC_RowName	Type: struct FDataTableRowHandle	Flags: BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor
// Name: NPC_DT_Handler	Type: struct FDataTableRowHandle	Flags: BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor
// Name: CorrectVendor	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: VendorCategory	Type: struct FDataTableRowHandle	Flags: Parm, OutParm, NoDestructor
// Name: ResetEQ	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: CorrectProfession	Type: TEnumAsByte<E_Profession>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::VendorCategorySettings(struct FString ID, struct FName VendorCategoryName, bool IsVendor, TEnumAsByte<E_Profession> Profession, TEnumAsByte<E_Ownership> Ownership, TEnumAsByte<E_OutsideNPCTypes> OutsideNPCType, struct FDataTableRowHandle NPC_RowName, struct FDataTableRowHandle NPC_DT_Handler, bool* CorrectVendor, struct FDataTableRowHandle* VendorCategory, bool* ResetEQ, TEnumAsByte<E_Profession>* CorrectProfession) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.VendorCategorySettings");

	struct ABP_DataManager_C_VendorCategorySettings_Params {
		struct FString ID;			//Offset: 0 | ElementSize: 16
		struct FName VendorCategoryName;			//Offset: 16 | ElementSize: 8
		bool IsVendor;			//Offset: 24 | ElementSize: 1
		TEnumAsByte<E_Profession> Profession;			//Offset: 25 | ElementSize: 1
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 26 | ElementSize: 1
		TEnumAsByte<E_OutsideNPCTypes> OutsideNPCType;			//Offset: 27 | ElementSize: 1
		struct FDataTableRowHandle NPC_RowName;			//Offset: 32 | ElementSize: 16
		struct FDataTableRowHandle NPC_DT_Handler;			//Offset: 48 | ElementSize: 16
		bool CorrectVendor;			//Offset: 64 | ElementSize: 1
		struct FDataTableRowHandle VendorCategory;			//Offset: 72 | ElementSize: 16
		bool ResetEQ;			//Offset: 88 | ElementSize: 1
		TEnumAsByte<E_Profession> CorrectProfession;			//Offset: 89 | ElementSize: 1
	};
	ABP_DataManager_C_VendorCategorySettings_Params params;
	params.ID = ID;
	params.VendorCategoryName = VendorCategoryName;
	params.IsVendor = IsVendor;
	params.Profession = Profession;
	params.Ownership = Ownership;
	params.OutsideNPCType = OutsideNPCType;
	params.NPC_RowName = NPC_RowName;
	params.NPC_DT_Handler = NPC_DT_Handler;

	UObject::ProcessEvent(fn, &params);
	if (CorrectVendor != nullptr)
		*CorrectVendor = params.CorrectVendor;
	if (VendorCategory != nullptr)
		*VendorCategory = params.VendorCategory;
	if (ResetEQ != nullptr)
		*ResetEQ = params.ResetEQ;
	if (CorrectProfession != nullptr)
		*CorrectProfession = params.CorrectProfession;
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.UpdateRestrictionAreas
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_DataManager_C::UpdateRestrictionAreas() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.UpdateRestrictionAreas");

	struct ABP_DataManager_C_UpdateRestrictionAreas_Params {
	};
	ABP_DataManager_C_UpdateRestrictionAreas_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.VendorMP_CategorySettings
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: VendorCategoryName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsVendor	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: NPC_RowName	Type: struct FDataTableRowHandle	Flags: BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor
// Name: CorrectVendor	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: VendorCategory	Type: struct FDataTableRowHandle	Flags: Parm, OutParm, NoDestructor
/////////////////////////////////////////////
void ABP_DataManager_C::VendorMP_CategorySettings(struct FString ID, struct FName VendorCategoryName, bool IsVendor, struct FDataTableRowHandle NPC_RowName, bool* CorrectVendor, struct FDataTableRowHandle* VendorCategory) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.VendorMP_CategorySettings");

	struct ABP_DataManager_C_VendorMP_CategorySettings_Params {
		struct FString ID;			//Offset: 0 | ElementSize: 16
		struct FName VendorCategoryName;			//Offset: 16 | ElementSize: 8
		bool IsVendor;			//Offset: 24 | ElementSize: 1
		struct FDataTableRowHandle NPC_RowName;			//Offset: 32 | ElementSize: 16
		bool CorrectVendor;			//Offset: 48 | ElementSize: 1
		struct FDataTableRowHandle VendorCategory;			//Offset: 56 | ElementSize: 16
	};
	ABP_DataManager_C_VendorMP_CategorySettings_Params params;
	params.ID = ID;
	params.VendorCategoryName = VendorCategoryName;
	params.IsVendor = IsVendor;
	params.NPC_RowName = NPC_RowName;

	UObject::ProcessEvent(fn, &params);
	if (CorrectVendor != nullptr)
		*CorrectVendor = params.CorrectVendor;
	if (VendorCategory != nullptr)
		*VendorCategory = params.VendorCategory;
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.GetRandomOwnerlessNPCsCount
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: OwnershipCount	Type: TMap<TEnumAsByte<E_Ownership>, int32_t>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_DataManager_C::GetRandomOwnerlessNPCsCount(TMap<TEnumAsByte<E_Ownership>, int32_t>* OwnershipCount) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.GetRandomOwnerlessNPCsCount");

	struct ABP_DataManager_C_GetRandomOwnerlessNPCsCount_Params {
		TMap<TEnumAsByte<E_Ownership>, int32_t> OwnershipCount;			//Offset: 0 | ElementSize: 80
	};
	ABP_DataManager_C_GetRandomOwnerlessNPCsCount_Params params;

	UObject::ProcessEvent(fn, &params);
	if (OwnershipCount != nullptr)
		*OwnershipCount = params.OwnershipCount;
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.FindDuplicates_SplineStructure
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_DataManager_C::FindDuplicates_SplineStructure() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.FindDuplicates_SplineStructure");

	struct ABP_DataManager_C_FindDuplicates_SplineStructure_Params {
	};
	ABP_DataManager_C_FindDuplicates_SplineStructure_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.FindDuplicates_Building
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_DataManager_C::FindDuplicates_Building() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.FindDuplicates_Building");

	struct ABP_DataManager_C_FindDuplicates_Building_Params {
	};
	ABP_DataManager_C_FindDuplicates_Building_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.FindDuplicates_Field
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_DataManager_C::FindDuplicates_Field() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.FindDuplicates_Field");

	struct ABP_DataManager_C_FindDuplicates_Field_Params {
	};
	ABP_DataManager_C_FindDuplicates_Field_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.FindDuplicates_Furniture
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_DataManager_C::FindDuplicates_Furniture() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.FindDuplicates_Furniture");

	struct ABP_DataManager_C_FindDuplicates_Furniture_Params {
	};
	ABP_DataManager_C_FindDuplicates_Furniture_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.FindDuplicates_Item
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_DataManager_C::FindDuplicates_Item() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.FindDuplicates_Item");

	struct ABP_DataManager_C_FindDuplicates_Item_Params {
	};
	ABP_DataManager_C_FindDuplicates_Item_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.FindDuplicates_StaticMesh
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_DataManager_C::FindDuplicates_StaticMesh() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.FindDuplicates_StaticMesh");

	struct ABP_DataManager_C_FindDuplicates_StaticMesh_Params {
	};
	ABP_DataManager_C_FindDuplicates_StaticMesh_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.AddGate
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Gate	Type: class ABP_MasterGate_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::AddGate(TEnumAsByte<E_Ownership> Ownership, class ABP_MasterGate_C*& Gate) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.AddGate");

	struct ABP_DataManager_C_AddGate_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
		class ABP_MasterGate_C* Gate;			//Offset: 8 | ElementSize: 8
	};
	ABP_DataManager_C_AddGate_Params params;
	params.Ownership = Ownership;
	params.Gate = Gate;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.RemoveGate
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Gate	Type: class ABP_MasterGate_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::RemoveGate(class ABP_MasterGate_C*& Gate) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.RemoveGate");

	struct ABP_DataManager_C_RemoveGate_Params {
		class ABP_MasterGate_C* Gate;			//Offset: 0 | ElementSize: 8
	};
	ABP_DataManager_C_RemoveGate_Params params;
	params.Gate = Gate;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.UnoccupySlots
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_DataManager_C::UnoccupySlots() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.UnoccupySlots");

	struct ABP_DataManager_C_UnoccupySlots_Params {
	};
	ABP_DataManager_C_UnoccupySlots_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.CheckItemsID
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_DataManager_C::CheckItemsID() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.CheckItemsID");

	struct ABP_DataManager_C_CheckItemsID_Params {
	};
	ABP_DataManager_C_CheckItemsID_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.CheckCollectablesID
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_DataManager_C::CheckCollectablesID() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.CheckCollectablesID");

	struct ABP_DataManager_C_CheckCollectablesID_Params {
	};
	ABP_DataManager_C_CheckCollectablesID_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.StopDataManager
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_DataManager_C::StopDataManager() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.StopDataManager");

	struct ABP_DataManager_C_StopDataManager_Params {
	};
	ABP_DataManager_C_StopDataManager_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.CastellanFix
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: CastellanExists	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_DataManager_C::CastellanFix(bool CastellanExists) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.CastellanFix");

	struct ABP_DataManager_C_CastellanFix_Params {
		bool CastellanExists;			//Offset: 0 | ElementSize: 1
	};
	ABP_DataManager_C_CastellanFix_Params params;
	params.CastellanExists = CastellanExists;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.SpawnFurniture
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Position	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Rotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Name	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Owner	Type: unsigned char	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Tags	Type: TArray<struct FName>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Furniture	Type: class ABP_MasterFurniture_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::SpawnFurniture(struct FVector Position, struct FRotator Rotation, struct FName Name, unsigned char Owner, TArray<struct FName>* Tags, class ABP_MasterFurniture_C** Furniture) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.SpawnFurniture");

	struct ABP_DataManager_C_SpawnFurniture_Params {
		struct FVector Position;			//Offset: 0 | ElementSize: 12
		struct FRotator Rotation;			//Offset: 12 | ElementSize: 12
		struct FName Name;			//Offset: 24 | ElementSize: 8
		unsigned char Owner;			//Offset: 32 | ElementSize: 1
		TArray<struct FName> Tags;			//Offset: 40 | ElementSize: 16
		class ABP_MasterFurniture_C* Furniture;			//Offset: 56 | ElementSize: 8
	};
	ABP_DataManager_C_SpawnFurniture_Params params;
	params.Position = Position;
	params.Rotation = Rotation;
	params.Name = Name;
	params.Owner = Owner;

	UObject::ProcessEvent(fn, &params);
	if (Tags != nullptr)
		*Tags = params.Tags;
	if (Furniture != nullptr)
		*Furniture = params.Furniture;
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.AddPlatform
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Platform	Type: class ABP_MasterPlatform_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::AddPlatform(TEnumAsByte<E_Ownership> Ownership, class ABP_MasterPlatform_C*& Platform) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.AddPlatform");

	struct ABP_DataManager_C_AddPlatform_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
		class ABP_MasterPlatform_C* Platform;			//Offset: 8 | ElementSize: 8
	};
	ABP_DataManager_C_AddPlatform_Params params;
	params.Ownership = Ownership;
	params.Platform = Platform;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.RemovePlatform
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Platform	Type: class ABP_MasterPlatform_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::RemovePlatform(class ABP_MasterPlatform_C*& Platform) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.RemovePlatform");

	struct ABP_DataManager_C_RemovePlatform_Params {
		class ABP_MasterPlatform_C* Platform;			//Offset: 0 | ElementSize: 8
	};
	ABP_DataManager_C_RemovePlatform_Params params;
	params.Platform = Platform;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.SwapPlatform
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: to	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Platform	Type: class ABP_MasterPlatform_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::SwapPlatform(TEnumAsByte<E_Ownership> to, class ABP_MasterPlatform_C*& Platform) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.SwapPlatform");

	struct ABP_DataManager_C_SwapPlatform_Params {
		TEnumAsByte<E_Ownership> to;			//Offset: 0 | ElementSize: 1
		class ABP_MasterPlatform_C* Platform;			//Offset: 8 | ElementSize: 8
	};
	ABP_DataManager_C_SwapPlatform_Params params;
	params.to = to;
	params.Platform = Platform;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.GetPlatform
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Platforms	Type: TArray<class ABP_MasterPlatform_C*>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_DataManager_C::GetPlatform(TEnumAsByte<E_Ownership> Ownership, bool* Success, TArray<class ABP_MasterPlatform_C*>* Platforms) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.GetPlatform");

	struct ABP_DataManager_C_GetPlatform_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
		bool Success;			//Offset: 1 | ElementSize: 1
		TArray<class ABP_MasterPlatform_C*> Platforms;			//Offset: 8 | ElementSize: 16
	};
	ABP_DataManager_C_GetPlatform_Params params;
	params.Ownership = Ownership;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (Platforms != nullptr)
		*Platforms = params.Platforms;
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.LoadDataSafely
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Data	Type: TArray<struct FString>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Index	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InvalidSubstitution	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: LoadedData	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::LoadDataSafely(const TArray<struct FString>& Data, int32_t Index, struct FString InvalidSubstitution, struct FString* LoadedData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.LoadDataSafely");

	struct ABP_DataManager_C_LoadDataSafely_Params {
		TArray<struct FString> Data;			//Offset: 0 | ElementSize: 16
		int32_t Index;			//Offset: 16 | ElementSize: 4
		struct FString InvalidSubstitution;			//Offset: 24 | ElementSize: 16
		struct FString LoadedData;			//Offset: 40 | ElementSize: 16
	};
	ABP_DataManager_C_LoadDataSafely_Params params;
	params.Data = Data;
	params.Index = Index;
	params.InvalidSubstitution = InvalidSubstitution;

	UObject::ProcessEvent(fn, &params);
	if (LoadedData != nullptr)
		*LoadedData = params.LoadedData;
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.UpdateTalkToActors
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_DataManager_C::UpdateTalkToActors() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.UpdateTalkToActors");

	struct ABP_DataManager_C_UpdateTalkToActors_Params {
	};
	ABP_DataManager_C_UpdateTalkToActors_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.GetTalkToActorsInteractable
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: TalkToActors	Type: TMap<struct FString, class ABP_TalkToActor_C*>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_DataManager_C::GetTalkToActorsInteractable(TMap<struct FString, class ABP_TalkToActor_C*>* TalkToActors) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.GetTalkToActorsInteractable");

	struct ABP_DataManager_C_GetTalkToActorsInteractable_Params {
		TMap<struct FString, class ABP_TalkToActor_C*> TalkToActors;			//Offset: 0 | ElementSize: 80
	};
	ABP_DataManager_C_GetTalkToActorsInteractable_Params params;

	UObject::ProcessEvent(fn, &params);
	if (TalkToActors != nullptr)
		*TalkToActors = params.TalkToActors;
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.GetTalkToActorsNotInteractable
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: TalkToActors	Type: TMap<struct FString, class ABP_TalkToActor_C*>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_DataManager_C::GetTalkToActorsNotInteractable(TMap<struct FString, class ABP_TalkToActor_C*>* TalkToActors) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.GetTalkToActorsNotInteractable");

	struct ABP_DataManager_C_GetTalkToActorsNotInteractable_Params {
		TMap<struct FString, class ABP_TalkToActor_C*> TalkToActors;			//Offset: 0 | ElementSize: 80
	};
	ABP_DataManager_C_GetTalkToActorsNotInteractable_Params params;

	UObject::ProcessEvent(fn, &params);
	if (TalkToActors != nullptr)
		*TalkToActors = params.TalkToActors;
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.GetTalkToActors
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: TalkToActors	Type: TMap<struct FString, class ABP_TalkToActor_C*>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_DataManager_C::GetTalkToActors(TMap<struct FString, class ABP_TalkToActor_C*>* TalkToActors) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.GetTalkToActors");

	struct ABP_DataManager_C_GetTalkToActors_Params {
		TMap<struct FString, class ABP_TalkToActor_C*> TalkToActors;			//Offset: 0 | ElementSize: 80
	};
	ABP_DataManager_C_GetTalkToActors_Params params;

	UObject::ProcessEvent(fn, &params);
	if (TalkToActors != nullptr)
		*TalkToActors = params.TalkToActors;
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.AddTalkToActor
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Actor	Type: class ABP_TalkToActor_C*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::AddTalkToActor(class ABP_TalkToActor_C*& Actor) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.AddTalkToActor");

	struct ABP_DataManager_C_AddTalkToActor_Params {
		class ABP_TalkToActor_C* Actor;			//Offset: 0 | ElementSize: 8
	};
	ABP_DataManager_C_AddTalkToActor_Params params;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.RemoveTalkToActor
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ActorId	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::RemoveTalkToActor(struct FString ActorId) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.RemoveTalkToActor");

	struct ABP_DataManager_C_RemoveTalkToActor_Params {
		struct FString ActorId;			//Offset: 0 | ElementSize: 16
	};
	ABP_DataManager_C_RemoveTalkToActor_Params params;
	params.ActorId = ActorId;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.Load Talk to Actors
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::Load_Talk_to_Actors(class USAVE_Game_C* SaveReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.Load Talk to Actors");

	struct ABP_DataManager_C_Load_Talk_to_Actors_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_DataManager_C_Load_Talk_to_Actors_Params params;
	params.SaveReference = SaveReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.GetPlayerStartTransformInSedowinsHut
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: PlayerIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Transform	Type: struct FTransform	Flags: Parm, OutParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_DataManager_C::GetPlayerStartTransformInSedowinsHut(int32_t PlayerIndex, struct FTransform* Transform) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.GetPlayerStartTransformInSedowinsHut");

	struct ABP_DataManager_C_GetPlayerStartTransformInSedowinsHut_Params {
		int32_t PlayerIndex;			//Offset: 0 | ElementSize: 4
		struct FTransform Transform;			//Offset: 16 | ElementSize: 48
	};
	ABP_DataManager_C_GetPlayerStartTransformInSedowinsHut_Params params;
	params.PlayerIndex = PlayerIndex;

	UObject::ProcessEvent(fn, &params);
	if (Transform != nullptr)
		*Transform = params.Transform;
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.UpdateSettings
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_DataManager_C::UpdateSettings() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.UpdateSettings");

	struct ABP_DataManager_C_UpdateSettings_Params {
	};
	ABP_DataManager_C_UpdateSettings_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.ConvertOldProductionDataToSeasonalProduction
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SeasonalProduction	Type: TArray<struct FST_SAVE_SeasonalProduction_Progress>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: OldProduction	Type: TArray<struct FST_SAVE_Production_Progress>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: BuildingReference	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OldSeasonalManagement	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: FinalSeasonalProduction	Type: TArray<struct FST_SAVE_SeasonalProduction_Progress>	Flags: Parm, OutParm
// Name: SeasonalManagement	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_DataManager_C::ConvertOldProductionDataToSeasonalProduction(TArray<struct FST_SAVE_SeasonalProduction_Progress>* SeasonalProduction, TArray<struct FST_SAVE_Production_Progress>* OldProduction, class ABP_MasterBuilding_C** BuildingReference, bool OldSeasonalManagement, TArray<struct FST_SAVE_SeasonalProduction_Progress>* FinalSeasonalProduction, bool* SeasonalManagement) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.ConvertOldProductionDataToSeasonalProduction");

	struct ABP_DataManager_C_ConvertOldProductionDataToSeasonalProduction_Params {
		TArray<struct FST_SAVE_SeasonalProduction_Progress> SeasonalProduction;			//Offset: 0 | ElementSize: 16
		TArray<struct FST_SAVE_Production_Progress> OldProduction;			//Offset: 16 | ElementSize: 16
		class ABP_MasterBuilding_C* BuildingReference;			//Offset: 32 | ElementSize: 8
		bool OldSeasonalManagement;			//Offset: 40 | ElementSize: 1
		TArray<struct FST_SAVE_SeasonalProduction_Progress> FinalSeasonalProduction;			//Offset: 48 | ElementSize: 16
		bool SeasonalManagement;			//Offset: 64 | ElementSize: 1
	};
	ABP_DataManager_C_ConvertOldProductionDataToSeasonalProduction_Params params;
	params.OldSeasonalManagement = OldSeasonalManagement;

	UObject::ProcessEvent(fn, &params);
	if (SeasonalProduction != nullptr)
		*SeasonalProduction = params.SeasonalProduction;
	if (OldProduction != nullptr)
		*OldProduction = params.OldProduction;
	if (BuildingReference != nullptr)
		*BuildingReference = params.BuildingReference;
	if (FinalSeasonalProduction != nullptr)
		*FinalSeasonalProduction = params.FinalSeasonalProduction;
	if (SeasonalManagement != nullptr)
		*SeasonalManagement = params.SeasonalManagement;
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.ConvertOldTradingDataToSeasonalTrading
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SeasonalProduction	Type: TArray<struct FST_SAVE_SeasonalTrade_Progress>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: OldProduction	Type: TArray<struct FST_SAVE_Trade_Progress>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: BuildingReference	Type: class ABP_MasterBuilding_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OldSeasonalManagement	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: FinalSeasonalProduction	Type: TArray<struct FST_SAVE_SeasonalTrade_Progress>	Flags: Parm, OutParm
// Name: SeasonalManagement	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_DataManager_C::ConvertOldTradingDataToSeasonalTrading(TArray<struct FST_SAVE_SeasonalTrade_Progress>* SeasonalProduction, TArray<struct FST_SAVE_Trade_Progress>* OldProduction, class ABP_MasterBuilding_C** BuildingReference, bool OldSeasonalManagement, TArray<struct FST_SAVE_SeasonalTrade_Progress>* FinalSeasonalProduction, bool* SeasonalManagement) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.ConvertOldTradingDataToSeasonalTrading");

	struct ABP_DataManager_C_ConvertOldTradingDataToSeasonalTrading_Params {
		TArray<struct FST_SAVE_SeasonalTrade_Progress> SeasonalProduction;			//Offset: 0 | ElementSize: 16
		TArray<struct FST_SAVE_Trade_Progress> OldProduction;			//Offset: 16 | ElementSize: 16
		class ABP_MasterBuilding_C* BuildingReference;			//Offset: 32 | ElementSize: 8
		bool OldSeasonalManagement;			//Offset: 40 | ElementSize: 1
		TArray<struct FST_SAVE_SeasonalTrade_Progress> FinalSeasonalProduction;			//Offset: 48 | ElementSize: 16
		bool SeasonalManagement;			//Offset: 64 | ElementSize: 1
	};
	ABP_DataManager_C_ConvertOldTradingDataToSeasonalTrading_Params params;
	params.OldSeasonalManagement = OldSeasonalManagement;

	UObject::ProcessEvent(fn, &params);
	if (SeasonalProduction != nullptr)
		*SeasonalProduction = params.SeasonalProduction;
	if (OldProduction != nullptr)
		*OldProduction = params.OldProduction;
	if (BuildingReference != nullptr)
		*BuildingReference = params.BuildingReference;
	if (FinalSeasonalProduction != nullptr)
		*FinalSeasonalProduction = params.FinalSeasonalProduction;
	if (SeasonalManagement != nullptr)
		*SeasonalManagement = params.SeasonalManagement;
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.FindQuest_Item
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_DataManager_C::FindQuest_Item() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.FindQuest_Item");

	struct ABP_DataManager_C_FindQuest_Item_Params {
	};
	ABP_DataManager_C_FindQuest_Item_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.GetNPCVendors
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: VendorNPCs	Type: TArray<class ABP_NPC_C*>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_DataManager_C::GetNPCVendors(TArray<class ABP_NPC_C*>* VendorNPCs) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.GetNPCVendors");

	struct ABP_DataManager_C_GetNPCVendors_Params {
		TArray<class ABP_NPC_C*> VendorNPCs;			//Offset: 0 | ElementSize: 16
	};
	ABP_DataManager_C_GetNPCVendors_Params params;

	UObject::ProcessEvent(fn, &params);
	if (VendorNPCs != nullptr)
		*VendorNPCs = params.VendorNPCs;
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.GetPlayerByID
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: UniqueNetID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: PlayerCharacterReference	Type: class ABP_PlayerCharacter_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::GetPlayerByID(struct FString UniqueNetID, bool* Success, class ABP_PlayerCharacter_C** PlayerCharacterReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.GetPlayerByID");

	struct ABP_DataManager_C_GetPlayerByID_Params {
		struct FString UniqueNetID;			//Offset: 0 | ElementSize: 16
		bool Success;			//Offset: 16 | ElementSize: 1
		class ABP_PlayerCharacter_C* PlayerCharacterReference;			//Offset: 24 | ElementSize: 8
	};
	ABP_DataManager_C_GetPlayerByID_Params params;
	params.UniqueNetID = UniqueNetID;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (PlayerCharacterReference != nullptr)
		*PlayerCharacterReference = params.PlayerCharacterReference;
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.GetBandNPCs
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Band	Type: TArray<class ABP_NPC_C*>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_DataManager_C::GetBandNPCs(bool* Success, TArray<class ABP_NPC_C*>* Band) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.GetBandNPCs");

	struct ABP_DataManager_C_GetBandNPCs_Params {
		bool Success;			//Offset: 0 | ElementSize: 1
		TArray<class ABP_NPC_C*> Band;			//Offset: 8 | ElementSize: 16
	};
	ABP_DataManager_C_GetBandNPCs_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (Band != nullptr)
		*Band = params.Band;
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.GetNPCWaggoners
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: WaggonerNPCs	Type: TArray<class ABP_NPC_C*>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_DataManager_C::GetNPCWaggoners(TArray<class ABP_NPC_C*>* WaggonerNPCs) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.GetNPCWaggoners");

	struct ABP_DataManager_C_GetNPCWaggoners_Params {
		TArray<class ABP_NPC_C*> WaggonerNPCs;			//Offset: 0 | ElementSize: 16
	};
	ABP_DataManager_C_GetNPCWaggoners_Params params;

	UObject::ProcessEvent(fn, &params);
	if (WaggonerNPCs != nullptr)
		*WaggonerNPCs = params.WaggonerNPCs;
}

/////////////////////////////////////////////
// Function BP_DataManager.BP_DataManager_C.ClearNPCsAffectionGiftsAndSmallTalk
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerNetID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_DataManager_C::ClearNPCsAffectionGiftsAndSmallTalk(struct FString PlayerNetID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_DataManager.BP_DataManager_C.ClearNPCsAffectionGiftsAndSmallTalk");

	struct ABP_DataManager_C_ClearNPCsAffectionGiftsAndSmallTalk_Params {
		struct FString PlayerNetID;			//Offset: 0 | ElementSize: 16
	};
	ABP_DataManager_C_ClearNPCsAffectionGiftsAndSmallTalk_Params params;
	params.PlayerNetID = PlayerNetID;

	UObject::ProcessEvent(fn, &params);
}

#pragma endregion
}