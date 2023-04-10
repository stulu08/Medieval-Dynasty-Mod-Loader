#include "../SDK.h"
#include "BP_POI_Manager_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame ABP_POI_Manager_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 544);
}
struct FPointerToUberGraphFrame* ABP_POI_Manager_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 544);
}
void ABP_POI_Manager_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 544, value);
}
// Member Getter and Setter of DefaultSceneRoot
// Declaration: class USceneComponent* DefaultSceneRoot
class USceneComponent* ABP_POI_Manager_C::M_GetDefaultSceneRoot() const {
	return Read<class USceneComponent*>((byte*)this + 552);
}
class USceneComponent** ABP_POI_Manager_C::M_PtrGetDefaultSceneRoot() {
	return reinterpret_cast<class USceneComponent**>((byte*)this + 552);
}
void ABP_POI_Manager_C::M_SetDefaultSceneRoot(const class USceneComponent*& value) {
	Write((byte*)this + 552, value);
}
// Member Getter and Setter of Preview
// Declaration: bool Preview
bool ABP_POI_Manager_C::M_GetPreview() const {
	return Read<bool>((byte*)this + 560);
}
bool* ABP_POI_Manager_C::M_PtrGetPreview() {
	return reinterpret_cast<bool*>((byte*)this + 560);
}
void ABP_POI_Manager_C::M_SetPreview(const bool& value) {
	Write((byte*)this + 560, value);
}
// Member Getter and Setter of SystemsManagerReference
// Declaration: class ABP_SystemsManager_C* SystemsManagerReference
class ABP_SystemsManager_C* ABP_POI_Manager_C::M_GetSystemsManagerReference() const {
	return Read<class ABP_SystemsManager_C*>((byte*)this + 568);
}
class ABP_SystemsManager_C** ABP_POI_Manager_C::M_PtrGetSystemsManagerReference() {
	return reinterpret_cast<class ABP_SystemsManager_C**>((byte*)this + 568);
}
void ABP_POI_Manager_C::M_SetSystemsManagerReference(const class ABP_SystemsManager_C*& value) {
	Write((byte*)this + 568, value);
}
// Member Getter and Setter of POI_Spawners
// Declaration: TArray<class ABP_POI_Spawner_C*> POI_Spawners
TArray<class ABP_POI_Spawner_C*> ABP_POI_Manager_C::M_GetPOI_Spawners() const {
	return Read<TArray<class ABP_POI_Spawner_C*>>((byte*)this + 576);
}
TArray<class ABP_POI_Spawner_C*>* ABP_POI_Manager_C::M_PtrGetPOI_Spawners() {
	return reinterpret_cast<TArray<class ABP_POI_Spawner_C*>*>((byte*)this + 576);
}
void ABP_POI_Manager_C::M_SetPOI_Spawners(const TArray<class ABP_POI_Spawner_C*>& value) {
	Write((byte*)this + 576, value);
}
// Member Getter and Setter of DrawRestrictions
// Declaration: TMap<TEnumAsByte<E_POI_Type>, struct FST_DrawingSpawnersArray> DrawRestrictions
TMap<TEnumAsByte<E_POI_Type>, struct FST_DrawingSpawnersArray> ABP_POI_Manager_C::M_GetDrawRestrictions() const {
	return Read<TMap<TEnumAsByte<E_POI_Type>, struct FST_DrawingSpawnersArray>>((byte*)this + 592);
}
TMap<TEnumAsByte<E_POI_Type>, struct FST_DrawingSpawnersArray>* ABP_POI_Manager_C::M_PtrGetDrawRestrictions() {
	return reinterpret_cast<TMap<TEnumAsByte<E_POI_Type>, struct FST_DrawingSpawnersArray>*>((byte*)this + 592);
}
void ABP_POI_Manager_C::M_SetDrawRestrictions(const TMap<TEnumAsByte<E_POI_Type>, struct FST_DrawingSpawnersArray>& value) {
	Write((byte*)this + 592, value);
}
// Member Getter and Setter of MaxNumberOfActiveSpawners
// Declaration: int32_t MaxNumberOfActiveSpawners
int32_t ABP_POI_Manager_C::M_GetMaxNumberOfActiveSpawners() const {
	return Read<int32_t>((byte*)this + 672);
}
int32_t* ABP_POI_Manager_C::M_PtrGetMaxNumberOfActiveSpawners() {
	return reinterpret_cast<int32_t*>((byte*)this + 672);
}
void ABP_POI_Manager_C::M_SetMaxNumberOfActiveSpawners(const int32_t& value) {
	Write((byte*)this + 672, value);
}
// Member Getter and Setter of MaxTries
// Declaration: int32_t MaxTries
int32_t ABP_POI_Manager_C::M_GetMaxTries() const {
	return Read<int32_t>((byte*)this + 676);
}
int32_t* ABP_POI_Manager_C::M_PtrGetMaxTries() {
	return reinterpret_cast<int32_t*>((byte*)this + 676);
}
void ABP_POI_Manager_C::M_SetMaxTries(const int32_t& value) {
	Write((byte*)this + 676, value);
}
// Member Getter and Setter of SpawnersCategorized
// Declaration: TMap<class ABP_POI_Spawner_C*, TEnumAsByte<E_POI_Type>> SpawnersCategorized
TMap<class ABP_POI_Spawner_C*, TEnumAsByte<E_POI_Type>> ABP_POI_Manager_C::M_GetSpawnersCategorized() const {
	return Read<TMap<class ABP_POI_Spawner_C*, TEnumAsByte<E_POI_Type>>>((byte*)this + 680);
}
TMap<class ABP_POI_Spawner_C*, TEnumAsByte<E_POI_Type>>* ABP_POI_Manager_C::M_PtrGetSpawnersCategorized() {
	return reinterpret_cast<TMap<class ABP_POI_Spawner_C*, TEnumAsByte<E_POI_Type>>*>((byte*)this + 680);
}
void ABP_POI_Manager_C::M_SetSpawnersCategorized(const TMap<class ABP_POI_Spawner_C*, TEnumAsByte<E_POI_Type>>& value) {
	Write((byte*)this + 680, value);
}
// Member Getter and Setter of Separator
// Declaration: TArray<int32_t> Separator
TArray<int32_t> ABP_POI_Manager_C::M_GetSeparator() const {
	return Read<TArray<int32_t>>((byte*)this + 760);
}
TArray<int32_t>* ABP_POI_Manager_C::M_PtrGetSeparator() {
	return reinterpret_cast<TArray<int32_t>*>((byte*)this + 760);
}
void ABP_POI_Manager_C::M_SetSeparator(const TArray<int32_t>& value) {
	Write((byte*)this + 760, value);
}
// Member Getter and Setter of TestSave
// Declaration: TArray<struct FST_SAVE_POI> TestSave
TArray<struct FST_SAVE_POI> ABP_POI_Manager_C::M_GetTestSave() const {
	return Read<TArray<struct FST_SAVE_POI>>((byte*)this + 776);
}
TArray<struct FST_SAVE_POI>* ABP_POI_Manager_C::M_PtrGetTestSave() {
	return reinterpret_cast<TArray<struct FST_SAVE_POI>*>((byte*)this + 776);
}
void ABP_POI_Manager_C::M_SetTestSave(const TArray<struct FST_SAVE_POI>& value) {
	Write((byte*)this + 776, value);
}
// Member Getter and Setter of CategorizedSpawners
// Declaration: TMap<TEnumAsByte<E_POI_Type>, struct FST_SpawnersArray> CategorizedSpawners
TMap<TEnumAsByte<E_POI_Type>, struct FST_SpawnersArray> ABP_POI_Manager_C::M_GetCategorizedSpawners() const {
	return Read<TMap<TEnumAsByte<E_POI_Type>, struct FST_SpawnersArray>>((byte*)this + 792);
}
TMap<TEnumAsByte<E_POI_Type>, struct FST_SpawnersArray>* ABP_POI_Manager_C::M_PtrGetCategorizedSpawners() {
	return reinterpret_cast<TMap<TEnumAsByte<E_POI_Type>, struct FST_SpawnersArray>*>((byte*)this + 792);
}
void ABP_POI_Manager_C::M_SetCategorizedSpawners(const TMap<TEnumAsByte<E_POI_Type>, struct FST_SpawnersArray>& value) {
	Write((byte*)this + 792, value);
}
// Member Getter and Setter of ActiveSpawners
// Declaration: TArray<class ABP_POI_Spawner_C*> ActiveSpawners
TArray<class ABP_POI_Spawner_C*> ABP_POI_Manager_C::M_GetActiveSpawners() const {
	return Read<TArray<class ABP_POI_Spawner_C*>>((byte*)this + 872);
}
TArray<class ABP_POI_Spawner_C*>* ABP_POI_Manager_C::M_PtrGetActiveSpawners() {
	return reinterpret_cast<TArray<class ABP_POI_Spawner_C*>*>((byte*)this + 872);
}
void ABP_POI_Manager_C::M_SetActiveSpawners(const TArray<class ABP_POI_Spawner_C*>& value) {
	Write((byte*)this + 872, value);
}
// Member Getter and Setter of ActiveSpawnersHistory
// Declaration: TArray<class ABP_POI_Spawner_C*> ActiveSpawnersHistory
TArray<class ABP_POI_Spawner_C*> ABP_POI_Manager_C::M_GetActiveSpawnersHistory() const {
	return Read<TArray<class ABP_POI_Spawner_C*>>((byte*)this + 888);
}
TArray<class ABP_POI_Spawner_C*>* ABP_POI_Manager_C::M_PtrGetActiveSpawnersHistory() {
	return reinterpret_cast<TArray<class ABP_POI_Spawner_C*>*>((byte*)this + 888);
}
void ABP_POI_Manager_C::M_SetActiveSpawnersHistory(const TArray<class ABP_POI_Spawner_C*>& value) {
	Write((byte*)this + 888, value);
}
// Member Getter and Setter of LengthOfDeactivation
// Declaration: int32_t LengthOfDeactivation
int32_t ABP_POI_Manager_C::M_GetLengthOfDeactivation() const {
	return Read<int32_t>((byte*)this + 904);
}
int32_t* ABP_POI_Manager_C::M_PtrGetLengthOfDeactivation() {
	return reinterpret_cast<int32_t*>((byte*)this + 904);
}
void ABP_POI_Manager_C::M_SetLengthOfDeactivation(const int32_t& value) {
	Write((byte*)this + 904, value);
}
// Member Getter and Setter of TestSaveOnlyActive
// Declaration: TArray<struct FST_SAVE_POI_History> TestSaveOnlyActive
TArray<struct FST_SAVE_POI_History> ABP_POI_Manager_C::M_GetTestSaveOnlyActive() const {
	return Read<TArray<struct FST_SAVE_POI_History>>((byte*)this + 912);
}
TArray<struct FST_SAVE_POI_History>* ABP_POI_Manager_C::M_PtrGetTestSaveOnlyActive() {
	return reinterpret_cast<TArray<struct FST_SAVE_POI_History>*>((byte*)this + 912);
}
void ABP_POI_Manager_C::M_SetTestSaveOnlyActive(const TArray<struct FST_SAVE_POI_History>& value) {
	Write((byte*)this + 912, value);
}
// Member Getter and Setter of RestartPOI
// Declaration: bool RestartPOI
bool ABP_POI_Manager_C::M_GetRestartPOI() const {
	return Read<bool>((byte*)this + 928);
}
bool* ABP_POI_Manager_C::M_PtrGetRestartPOI() {
	return reinterpret_cast<bool*>((byte*)this + 928);
}
void ABP_POI_Manager_C::M_SetRestartPOI(const bool& value) {
	Write((byte*)this + 928, value);
}
// Member Getter and Setter of DisplayWarnings
// Declaration: bool DisplayWarnings
bool ABP_POI_Manager_C::M_GetDisplayWarnings() const {
	return Read<bool>((byte*)this + 929);
}
bool* ABP_POI_Manager_C::M_PtrGetDisplayWarnings() {
	return reinterpret_cast<bool*>((byte*)this + 929);
}
void ABP_POI_Manager_C::M_SetDisplayWarnings(const bool& value) {
	Write((byte*)this + 929, value);
}
// Member Getter and Setter of POIsPerTick
// Declaration: int32_t POIsPerTick
int32_t ABP_POI_Manager_C::M_GetPOIsPerTick() const {
	return Read<int32_t>((byte*)this + 932);
}
int32_t* ABP_POI_Manager_C::M_PtrGetPOIsPerTick() {
	return reinterpret_cast<int32_t*>((byte*)this + 932);
}
void ABP_POI_Manager_C::M_SetPOIsPerTick(const int32_t& value) {
	Write((byte*)this + 932, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BP_POI_Manager.BP_POI_Manager_C.ExecuteUbergraph_BP_POI_Manager
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_POI_Manager_C::ExecuteUbergraph_BP_POI_Manager(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.ExecuteUbergraph_BP_POI_Manager");

	struct ABP_POI_Manager_C_ExecuteUbergraph_BP_POI_Manager_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	ABP_POI_Manager_C_ExecuteUbergraph_BP_POI_Manager_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Manager.BP_POI_Manager_C.LoadSpawnersAsync
// Flags: HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveMap	Type: TMap<struct FGuid, struct FST_SAVE_POI>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: SaveMapOnlyActive	Type: TMap<struct FGuid, struct FST_SAVE_POI_History>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Task	Type: class UMultiTaskBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_POI_Manager_C::LoadSpawnersAsync(const TMap<struct FGuid, struct FST_SAVE_POI>& SaveMap, const TMap<struct FGuid, struct FST_SAVE_POI_History>& SaveMapOnlyActive, class UMultiTaskBase* Task) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.LoadSpawnersAsync");

	struct ABP_POI_Manager_C_LoadSpawnersAsync_Params {
		TMap<struct FGuid, struct FST_SAVE_POI> SaveMap;			//Offset: 0 | ElementSize: 80
		TMap<struct FGuid, struct FST_SAVE_POI_History> SaveMapOnlyActive;			//Offset: 80 | ElementSize: 80
		class UMultiTaskBase* Task;			//Offset: 160 | ElementSize: 8
	};
	ABP_POI_Manager_C_LoadSpawnersAsync_Params params;
	params.SaveMap = SaveMap;
	params.SaveMapOnlyActive = SaveMapOnlyActive;
	params.Task = Task;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Manager.BP_POI_Manager_C.StartPOISystem
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: LoadGame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: MainMenu	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_POI_Manager_C::StartPOISystem(bool LoadGame, bool MainMenu) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.StartPOISystem");

	struct ABP_POI_Manager_C_StartPOISystem_Params {
		bool LoadGame;			//Offset: 0 | ElementSize: 1
		bool MainMenu;			//Offset: 1 | ElementSize: 1
	};
	ABP_POI_Manager_C_StartPOISystem_Params params;
	params.LoadGame = LoadGame;
	params.MainMenu = MainMenu;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Manager.BP_POI_Manager_C.SpawnAllActiveSpawners
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Manager_C::SpawnAllActiveSpawners() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.SpawnAllActiveSpawners");

	struct ABP_POI_Manager_C_SpawnAllActiveSpawners_Params {
	};
	ABP_POI_Manager_C_SpawnAllActiveSpawners_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Manager.BP_POI_Manager_C.SaveSpawners
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveGame	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_POI_Manager_C::SaveSpawners(class USAVE_Game_C* SaveGame) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.SaveSpawners");

	struct ABP_POI_Manager_C_SaveSpawners_Params {
		class USAVE_Game_C* SaveGame;			//Offset: 0 | ElementSize: 8
	};
	ABP_POI_Manager_C_SaveSpawners_Params params;
	params.SaveGame = SaveGame;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Manager.BP_POI_Manager_C.LoadSpawners
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Task	Type: class UMultiTaskBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_POI_Manager_C::LoadSpawners(class USAVE_Game_C* SaveReference, class UMultiTaskBase* Task) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.LoadSpawners");

	struct ABP_POI_Manager_C_LoadSpawners_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
		class UMultiTaskBase* Task;			//Offset: 8 | ElementSize: 8
	};
	ABP_POI_Manager_C_LoadSpawners_Params params;
	params.SaveReference = SaveReference;
	params.Task = Task;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Manager.BP_POI_Manager_C.SpawnRandom
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Manager_C::SpawnRandom() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.SpawnRandom");

	struct ABP_POI_Manager_C_SpawnRandom_Params {
	};
	ABP_POI_Manager_C_SpawnRandom_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Manager.BP_POI_Manager_C.SpawnCategoryRestricted
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Manager_C::SpawnCategoryRestricted() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.SpawnCategoryRestricted");

	struct ABP_POI_Manager_C_SpawnCategoryRestricted_Params {
	};
	ABP_POI_Manager_C_SpawnCategoryRestricted_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Manager.BP_POI_Manager_C.CheckRestrictions
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Restrictions	Type: TArray<struct FST_DrawingSpawners>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: SpawnerType	Type: TEnumAsByte<E_POI_Type>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Type	Type: TEnumAsByte<E_POI_Type>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NumberOfSpawners	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_POI_Manager_C::CheckRestrictions(TArray<struct FST_DrawingSpawners>* Restrictions, const TEnumAsByte<E_POI_Type>& SpawnerType, const TEnumAsByte<E_POI_Type> Type, int32_t* NumberOfSpawners) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.CheckRestrictions");

	struct ABP_POI_Manager_C_CheckRestrictions_Params {
		TArray<struct FST_DrawingSpawners> Restrictions;			//Offset: 0 | ElementSize: 16
		TEnumAsByte<E_POI_Type> SpawnerType;			//Offset: 16 | ElementSize: 1
		TEnumAsByte<E_POI_Type> Type;			//Offset: 17 | ElementSize: 1
		int32_t NumberOfSpawners;			//Offset: 20 | ElementSize: 4
	};
	ABP_POI_Manager_C_CheckRestrictions_Params params;
	params.SpawnerType = SpawnerType;
	params.Type = Type;

	UObject::ProcessEvent(fn, &params);
	if (Restrictions != nullptr)
		*Restrictions = params.Restrictions;
	if (NumberOfSpawners != nullptr)
		*NumberOfSpawners = params.NumberOfSpawners;
}

/////////////////////////////////////////////
// Function BP_POI_Manager.BP_POI_Manager_C.Init
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Manager_C::Init() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.Init");

	struct ABP_POI_Manager_C_Init_Params {
	};
	ABP_POI_Manager_C_Init_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Manager.BP_POI_Manager_C.InitCategory
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Spawners	Type: TArray<class ABP_POI_Spawner_C*>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Type	Type: TArray<TEnumAsByte<E_POI_Type>>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: TypeIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_POI_Manager_C::InitCategory(TArray<class ABP_POI_Spawner_C*>* Spawners, TArray<TEnumAsByte<E_POI_Type>>* Type, int32_t TypeIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.InitCategory");

	struct ABP_POI_Manager_C_InitCategory_Params {
		TArray<class ABP_POI_Spawner_C*> Spawners;			//Offset: 0 | ElementSize: 16
		TArray<TEnumAsByte<E_POI_Type>> Type;			//Offset: 16 | ElementSize: 16
		int32_t TypeIndex;			//Offset: 32 | ElementSize: 4
	};
	ABP_POI_Manager_C_InitCategory_Params params;
	params.TypeIndex = TypeIndex;

	UObject::ProcessEvent(fn, &params);
	if (Spawners != nullptr)
		*Spawners = params.Spawners;
	if (Type != nullptr)
		*Type = params.Type;
}

/////////////////////////////////////////////
// Function BP_POI_Manager.BP_POI_Manager_C.SpawnCategory
// Flags: Private, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: SpawnerCategory	Type: TArray<TEnumAsByte<E_POI_Type>>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: L_Spawners	Type: TArray<class ABP_POI_Spawner_C*>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: DrawMap	Type: TMap<TEnumAsByte<E_POI_Type>, int32_t>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: RestrictionNumber	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_POI_Manager_C::SpawnCategory(TArray<TEnumAsByte<E_POI_Type>>* SpawnerCategory, TArray<class ABP_POI_Spawner_C*>* L_Spawners, const TMap<TEnumAsByte<E_POI_Type>, int32_t>& DrawMap, int32_t RestrictionNumber) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.SpawnCategory");

	struct ABP_POI_Manager_C_SpawnCategory_Params {
		TArray<TEnumAsByte<E_POI_Type>> SpawnerCategory;			//Offset: 0 | ElementSize: 16
		TArray<class ABP_POI_Spawner_C*> L_Spawners;			//Offset: 16 | ElementSize: 16
		TMap<TEnumAsByte<E_POI_Type>, int32_t> DrawMap;			//Offset: 32 | ElementSize: 80
		int32_t RestrictionNumber;			//Offset: 112 | ElementSize: 4
	};
	ABP_POI_Manager_C_SpawnCategory_Params params;
	params.DrawMap = DrawMap;
	params.RestrictionNumber = RestrictionNumber;

	UObject::ProcessEvent(fn, &params);
	if (SpawnerCategory != nullptr)
		*SpawnerCategory = params.SpawnerCategory;
	if (L_Spawners != nullptr)
		*L_Spawners = params.L_Spawners;
}

/////////////////////////////////////////////
// Function BP_POI_Manager.BP_POI_Manager_C.Despawn
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Spawner	Type: class ABP_POI_Spawner_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Despawned	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_POI_Manager_C::Despawn(class ABP_POI_Spawner_C* Spawner, bool* Despawned) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.Despawn");

	struct ABP_POI_Manager_C_Despawn_Params {
		class ABP_POI_Spawner_C* Spawner;			//Offset: 0 | ElementSize: 8
		bool Despawned;			//Offset: 8 | ElementSize: 1
	};
	ABP_POI_Manager_C_Despawn_Params params;
	params.Spawner = Spawner;

	UObject::ProcessEvent(fn, &params);
	if (Despawned != nullptr)
		*Despawned = params.Despawned;
}

/////////////////////////////////////////////
// Function BP_POI_Manager.BP_POI_Manager_C.DespawnAll
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Manager_C::DespawnAll() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.DespawnAll");

	struct ABP_POI_Manager_C_DespawnAll_Params {
	};
	ABP_POI_Manager_C_DespawnAll_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Manager.BP_POI_Manager_C.UpdatePOI_Array
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Manager_C::UpdatePOI_Array() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.UpdatePOI_Array");

	struct ABP_POI_Manager_C_UpdatePOI_Array_Params {
	};
	ABP_POI_Manager_C_UpdatePOI_Array_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Manager.BP_POI_Manager_C.POI_EnablePreviewAll
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Manager_C::POI_EnablePreviewAll() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.POI_EnablePreviewAll");

	struct ABP_POI_Manager_C_POI_EnablePreviewAll_Params {
	};
	ABP_POI_Manager_C_POI_EnablePreviewAll_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Manager.BP_POI_Manager_C.POI_DisablePreviewAll
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Manager_C::POI_DisablePreviewAll() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.POI_DisablePreviewAll");

	struct ABP_POI_Manager_C_POI_DisablePreviewAll_Params {
	};
	ABP_POI_Manager_C_POI_DisablePreviewAll_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Manager.BP_POI_Manager_C.POI_CheckAvailability
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Manager_C::POI_CheckAvailability() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.POI_CheckAvailability");

	struct ABP_POI_Manager_C_POI_CheckAvailability_Params {
	};
	ABP_POI_Manager_C_POI_CheckAvailability_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Manager.BP_POI_Manager_C.CheckPOI_ID
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Manager_C::CheckPOI_ID() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.CheckPOI_ID");

	struct ABP_POI_Manager_C_CheckPOI_ID_Params {
	};
	ABP_POI_Manager_C_CheckPOI_ID_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Manager.BP_POI_Manager_C.CheckForPotentialErrors
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Manager_C::CheckForPotentialErrors() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.CheckForPotentialErrors");

	struct ABP_POI_Manager_C_CheckForPotentialErrors_Params {
	};
	ABP_POI_Manager_C_CheckForPotentialErrors_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Manager.BP_POI_Manager_C.ReloadAfterSettingsChanged
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_POI_Manager_C::ReloadAfterSettingsChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.ReloadAfterSettingsChanged");

	struct ABP_POI_Manager_C_ReloadAfterSettingsChanged_Params {
	};
	ABP_POI_Manager_C_ReloadAfterSettingsChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_POI_Manager.BP_POI_Manager_C.FindClosestAvailablePOIofType
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: POIType	Type: TEnumAsByte<E_POI_Type>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SearchPoint	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ClosestPOI	Type: class ABP_POI_Spawner_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WasFound	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_POI_Manager_C::FindClosestAvailablePOIofType(TEnumAsByte<E_POI_Type> POIType, struct FVector SearchPoint, class ABP_POI_Spawner_C** ClosestPOI, bool* WasFound) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.FindClosestAvailablePOIofType");

	struct ABP_POI_Manager_C_FindClosestAvailablePOIofType_Params {
		TEnumAsByte<E_POI_Type> POIType;			//Offset: 0 | ElementSize: 1
		struct FVector SearchPoint;			//Offset: 4 | ElementSize: 12
		class ABP_POI_Spawner_C* ClosestPOI;			//Offset: 16 | ElementSize: 8
		bool WasFound;			//Offset: 24 | ElementSize: 1
	};
	ABP_POI_Manager_C_FindClosestAvailablePOIofType_Params params;
	params.POIType = POIType;
	params.SearchPoint = SearchPoint;

	UObject::ProcessEvent(fn, &params);
	if (ClosestPOI != nullptr)
		*ClosestPOI = params.ClosestPOI;
	if (WasFound != nullptr)
		*WasFound = params.WasFound;
}

/////////////////////////////////////////////
// Function BP_POI_Manager.BP_POI_Manager_C.FindClosestBanditPOIForQuest
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SearchPoint	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ClosestPOI	Type: class ABP_POI_Spawner_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WasFound	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_POI_Manager_C::FindClosestBanditPOIForQuest(struct FVector SearchPoint, class ABP_POI_Spawner_C** ClosestPOI, bool* WasFound) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.FindClosestBanditPOIForQuest");

	struct ABP_POI_Manager_C_FindClosestBanditPOIForQuest_Params {
		struct FVector SearchPoint;			//Offset: 0 | ElementSize: 12
		class ABP_POI_Spawner_C* ClosestPOI;			//Offset: 16 | ElementSize: 8
		bool WasFound;			//Offset: 24 | ElementSize: 1
	};
	ABP_POI_Manager_C_FindClosestBanditPOIForQuest_Params params;
	params.SearchPoint = SearchPoint;

	UObject::ProcessEvent(fn, &params);
	if (ClosestPOI != nullptr)
		*ClosestPOI = params.ClosestPOI;
	if (WasFound != nullptr)
		*WasFound = params.WasFound;
}

/////////////////////////////////////////////
// Function BP_POI_Manager.BP_POI_Manager_C.Force Spawn
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: POI	Type: class ABP_POI_Spawner_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Respawn	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_POI_Manager_C::Force_Spawn(class ABP_POI_Spawner_C* POI, bool Respawn) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Manager.BP_POI_Manager_C.Force Spawn");

	struct ABP_POI_Manager_C_Force_Spawn_Params {
		class ABP_POI_Spawner_C* POI;			//Offset: 0 | ElementSize: 8
		bool Respawn;			//Offset: 8 | ElementSize: 1
	};
	ABP_POI_Manager_C_Force_Spawn_Params params;
	params.POI = POI;
	params.Respawn = Respawn;

	UObject::ProcessEvent(fn, &params);
}

#pragma endregion
}