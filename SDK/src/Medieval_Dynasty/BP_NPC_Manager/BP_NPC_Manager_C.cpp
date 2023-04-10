#include "../SDK.h"
#include "BP_NPC_Manager_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame ABP_NPC_Manager_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 544);
}
struct FPointerToUberGraphFrame* ABP_NPC_Manager_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 544);
}
void ABP_NPC_Manager_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 544, value);
}
// Member Getter and Setter of DefaultSceneRoot
// Declaration: class USceneComponent* DefaultSceneRoot
class USceneComponent* ABP_NPC_Manager_C::M_GetDefaultSceneRoot() const {
	return Read<class USceneComponent*>((byte*)this + 552);
}
class USceneComponent** ABP_NPC_Manager_C::M_PtrGetDefaultSceneRoot() {
	return reinterpret_cast<class USceneComponent**>((byte*)this + 552);
}
void ABP_NPC_Manager_C::M_SetDefaultSceneRoot(const class USceneComponent*& value) {
	Write((byte*)this + 552, value);
}
// Member Getter and Setter of AddSamborFigurines
// Declaration: bool AddSamborFigurines
bool ABP_NPC_Manager_C::M_GetAddSamborFigurines() const {
	return Read<bool>((byte*)this + 560);
}
bool* ABP_NPC_Manager_C::M_PtrGetAddSamborFigurines() {
	return reinterpret_cast<bool*>((byte*)this + 560);
}
void ABP_NPC_Manager_C::M_SetAddSamborFigurines(const bool& value) {
	Write((byte*)this + 560, value);
}
// Member Getter and Setter of AvailableMaleNames
// Declaration: TArray<struct FName> AvailableMaleNames
TArray<struct FName> ABP_NPC_Manager_C::M_GetAvailableMaleNames() const {
	return Read<TArray<struct FName>>((byte*)this + 568);
}
TArray<struct FName>* ABP_NPC_Manager_C::M_PtrGetAvailableMaleNames() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 568);
}
void ABP_NPC_Manager_C::M_SetAvailableMaleNames(const TArray<struct FName>& value) {
	Write((byte*)this + 568, value);
}
// Member Getter and Setter of AvailableFemaleNames
// Declaration: TArray<struct FName> AvailableFemaleNames
TArray<struct FName> ABP_NPC_Manager_C::M_GetAvailableFemaleNames() const {
	return Read<TArray<struct FName>>((byte*)this + 584);
}
TArray<struct FName>* ABP_NPC_Manager_C::M_PtrGetAvailableFemaleNames() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 584);
}
void ABP_NPC_Manager_C::M_SetAvailableFemaleNames(const TArray<struct FName>& value) {
	Write((byte*)this + 584, value);
}
// Member Getter and Setter of SystemsManagerReference
// Declaration: class ABP_SystemsManager_C* SystemsManagerReference
class ABP_SystemsManager_C* ABP_NPC_Manager_C::M_GetSystemsManagerReference() const {
	return Read<class ABP_SystemsManager_C*>((byte*)this + 600);
}
class ABP_SystemsManager_C** ABP_NPC_Manager_C::M_PtrGetSystemsManagerReference() {
	return reinterpret_cast<class ABP_SystemsManager_C**>((byte*)this + 600);
}
void ABP_NPC_Manager_C::M_SetSystemsManagerReference(const class ABP_SystemsManager_C*& value) {
	Write((byte*)this + 600, value);
}
// Member Getter and Setter of BlockedNames
// Declaration: TArray<struct FName> BlockedNames
TArray<struct FName> ABP_NPC_Manager_C::M_GetBlockedNames() const {
	return Read<TArray<struct FName>>((byte*)this + 608);
}
TArray<struct FName>* ABP_NPC_Manager_C::M_PtrGetBlockedNames() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 608);
}
void ABP_NPC_Manager_C::M_SetBlockedNames(const TArray<struct FName>& value) {
	Write((byte*)this + 608, value);
}
// Member Getter and Setter of NewNPCs
// Declaration: TArray<struct FText> NewNPCs
TArray<struct FText> ABP_NPC_Manager_C::M_GetNewNPCs() const {
	return Read<TArray<struct FText>>((byte*)this + 624);
}
TArray<struct FText>* ABP_NPC_Manager_C::M_PtrGetNewNPCs() {
	return reinterpret_cast<TArray<struct FText>*>((byte*)this + 624);
}
void ABP_NPC_Manager_C::M_SetNewNPCs(const TArray<struct FText>& value) {
	Write((byte*)this + 624, value);
}
// Member Getter and Setter of NPCs_ID
// Declaration: TArray<struct FString> NPCs_ID
TArray<struct FString> ABP_NPC_Manager_C::M_GetNPCs_ID() const {
	return Read<TArray<struct FString>>((byte*)this + 640);
}
TArray<struct FString>* ABP_NPC_Manager_C::M_PtrGetNPCs_ID() {
	return reinterpret_cast<TArray<struct FString>*>((byte*)this + 640);
}
void ABP_NPC_Manager_C::M_SetNPCs_ID(const TArray<struct FString>& value) {
	Write((byte*)this + 640, value);
}
// Member Getter and Setter of AvailableMalePresets
// Declaration: TArray<struct FST_NPCsPresets> AvailableMalePresets
TArray<struct FST_NPCsPresets> ABP_NPC_Manager_C::M_GetAvailableMalePresets() const {
	return Read<TArray<struct FST_NPCsPresets>>((byte*)this + 656);
}
TArray<struct FST_NPCsPresets>* ABP_NPC_Manager_C::M_PtrGetAvailableMalePresets() {
	return reinterpret_cast<TArray<struct FST_NPCsPresets>*>((byte*)this + 656);
}
void ABP_NPC_Manager_C::M_SetAvailableMalePresets(const TArray<struct FST_NPCsPresets>& value) {
	Write((byte*)this + 656, value);
}
// Member Getter and Setter of AvailableFemalePresets
// Declaration: TArray<struct FST_NPCsPresets> AvailableFemalePresets
TArray<struct FST_NPCsPresets> ABP_NPC_Manager_C::M_GetAvailableFemalePresets() const {
	return Read<TArray<struct FST_NPCsPresets>>((byte*)this + 672);
}
TArray<struct FST_NPCsPresets>* ABP_NPC_Manager_C::M_PtrGetAvailableFemalePresets() {
	return reinterpret_cast<TArray<struct FST_NPCsPresets>*>((byte*)this + 672);
}
void ABP_NPC_Manager_C::M_SetAvailableFemalePresets(const TArray<struct FST_NPCsPresets>& value) {
	Write((byte*)this + 672, value);
}
// Member Getter and Setter of AvailableBoyPresets
// Declaration: TArray<struct FST_NPCsPresets> AvailableBoyPresets
TArray<struct FST_NPCsPresets> ABP_NPC_Manager_C::M_GetAvailableBoyPresets() const {
	return Read<TArray<struct FST_NPCsPresets>>((byte*)this + 688);
}
TArray<struct FST_NPCsPresets>* ABP_NPC_Manager_C::M_PtrGetAvailableBoyPresets() {
	return reinterpret_cast<TArray<struct FST_NPCsPresets>*>((byte*)this + 688);
}
void ABP_NPC_Manager_C::M_SetAvailableBoyPresets(const TArray<struct FST_NPCsPresets>& value) {
	Write((byte*)this + 688, value);
}
// Member Getter and Setter of AvailableGirlPresets
// Declaration: TArray<struct FST_NPCsPresets> AvailableGirlPresets
TArray<struct FST_NPCsPresets> ABP_NPC_Manager_C::M_GetAvailableGirlPresets() const {
	return Read<TArray<struct FST_NPCsPresets>>((byte*)this + 704);
}
TArray<struct FST_NPCsPresets>* ABP_NPC_Manager_C::M_PtrGetAvailableGirlPresets() {
	return reinterpret_cast<TArray<struct FST_NPCsPresets>*>((byte*)this + 704);
}
void ABP_NPC_Manager_C::M_SetAvailableGirlPresets(const TArray<struct FST_NPCsPresets>& value) {
	Write((byte*)this + 704, value);
}
// Member Getter and Setter of AvailableToddlerPresets
// Declaration: TArray<struct FST_NPCsPresets> AvailableToddlerPresets
TArray<struct FST_NPCsPresets> ABP_NPC_Manager_C::M_GetAvailableToddlerPresets() const {
	return Read<TArray<struct FST_NPCsPresets>>((byte*)this + 720);
}
TArray<struct FST_NPCsPresets>* ABP_NPC_Manager_C::M_PtrGetAvailableToddlerPresets() {
	return reinterpret_cast<TArray<struct FST_NPCsPresets>*>((byte*)this + 720);
}
void ABP_NPC_Manager_C::M_SetAvailableToddlerPresets(const TArray<struct FST_NPCsPresets>& value) {
	Write((byte*)this + 720, value);
}
// Member Getter and Setter of NPCsThatLeft
// Declaration: TArray<class AActor*> NPCsThatLeft
TArray<class AActor*> ABP_NPC_Manager_C::M_GetNPCsThatLeft() const {
	return Read<TArray<class AActor*>>((byte*)this + 736);
}
TArray<class AActor*>* ABP_NPC_Manager_C::M_PtrGetNPCsThatLeft() {
	return reinterpret_cast<TArray<class AActor*>*>((byte*)this + 736);
}
void ABP_NPC_Manager_C::M_SetNPCsThatLeft(const TArray<class AActor*>& value) {
	Write((byte*)this + 736, value);
}
// Member Getter and Setter of NeighboursHouses
// Declaration: TArray<class AActor*> NeighboursHouses
TArray<class AActor*> ABP_NPC_Manager_C::M_GetNeighboursHouses() const {
	return Read<TArray<class AActor*>>((byte*)this + 752);
}
TArray<class AActor*>* ABP_NPC_Manager_C::M_PtrGetNeighboursHouses() {
	return reinterpret_cast<TArray<class AActor*>*>((byte*)this + 752);
}
void ABP_NPC_Manager_C::M_SetNeighboursHouses(const TArray<class AActor*>& value) {
	Write((byte*)this + 752, value);
}
// Member Getter and Setter of DeadNPCs
// Declaration: TMap<struct FString, class AActor*> DeadNPCs
TMap<struct FString, class AActor*> ABP_NPC_Manager_C::M_GetDeadNPCs() const {
	return Read<TMap<struct FString, class AActor*>>((byte*)this + 768);
}
TMap<struct FString, class AActor*>* ABP_NPC_Manager_C::M_PtrGetDeadNPCs() {
	return reinterpret_cast<TMap<struct FString, class AActor*>*>((byte*)this + 768);
}
void ABP_NPC_Manager_C::M_SetDeadNPCs(const TMap<struct FString, class AActor*>& value) {
	Write((byte*)this + 768, value);
}
// Member Getter and Setter of SpecialNPCDialogues
// Declaration: TMap<struct FString, TAssetPtr<class UDialogue>> SpecialNPCDialogues
TMap<struct FString, TAssetPtr<class UDialogue>> ABP_NPC_Manager_C::M_GetSpecialNPCDialogues() const {
	return Read<TMap<struct FString, TAssetPtr<class UDialogue>>>((byte*)this + 848);
}
TMap<struct FString, TAssetPtr<class UDialogue>>* ABP_NPC_Manager_C::M_PtrGetSpecialNPCDialogues() {
	return reinterpret_cast<TMap<struct FString, TAssetPtr<class UDialogue>>*>((byte*)this + 848);
}
void ABP_NPC_Manager_C::M_SetSpecialNPCDialogues(const TMap<struct FString, TAssetPtr<class UDialogue>>& value) {
	Write((byte*)this + 848, value);
}
// Member Getter and Setter of SpecialQuestRecruitNPCDialogues
// Declaration: TMap<struct FString, TAssetPtr<class UDialogue>> SpecialQuestRecruitNPCDialogues
TMap<struct FString, TAssetPtr<class UDialogue>> ABP_NPC_Manager_C::M_GetSpecialQuestRecruitNPCDialogues() const {
	return Read<TMap<struct FString, TAssetPtr<class UDialogue>>>((byte*)this + 928);
}
TMap<struct FString, TAssetPtr<class UDialogue>>* ABP_NPC_Manager_C::M_PtrGetSpecialQuestRecruitNPCDialogues() {
	return reinterpret_cast<TMap<struct FString, TAssetPtr<class UDialogue>>*>((byte*)this + 928);
}
void ABP_NPC_Manager_C::M_SetSpecialQuestRecruitNPCDialogues(const TMap<struct FString, TAssetPtr<class UDialogue>>& value) {
	Write((byte*)this + 928, value);
}
// Member Getter and Setter of NewNeighboursDTHandler
// Declaration: TArray<struct FDataTableRowHandle> NewNeighboursDTHandler
TArray<struct FDataTableRowHandle> ABP_NPC_Manager_C::M_GetNewNeighboursDTHandler() const {
	return Read<TArray<struct FDataTableRowHandle>>((byte*)this + 1008);
}
TArray<struct FDataTableRowHandle>* ABP_NPC_Manager_C::M_PtrGetNewNeighboursDTHandler() {
	return reinterpret_cast<TArray<struct FDataTableRowHandle>*>((byte*)this + 1008);
}
void ABP_NPC_Manager_C::M_SetNewNeighboursDTHandler(const TArray<struct FDataTableRowHandle>& value) {
	Write((byte*)this + 1008, value);
}
// Member Getter and Setter of IterationsPerTick
// Declaration: int32_t IterationsPerTick
int32_t ABP_NPC_Manager_C::M_GetIterationsPerTick() const {
	return Read<int32_t>((byte*)this + 1024);
}
int32_t* ABP_NPC_Manager_C::M_PtrGetIterationsPerTick() {
	return reinterpret_cast<int32_t*>((byte*)this + 1024);
}
void ABP_NPC_Manager_C::M_SetIterationsPerTick(const int32_t& value) {
	Write((byte*)this + 1024, value);
}
// Member Getter and Setter of PresetsPerVillage
// Declaration: TMap<TEnumAsByte<E_Ownership>, struct Falb_Array_Name> PresetsPerVillage
TMap<TEnumAsByte<E_Ownership>, struct Falb_Array_Name> ABP_NPC_Manager_C::M_GetPresetsPerVillage() const {
	return Read<TMap<TEnumAsByte<E_Ownership>, struct Falb_Array_Name>>((byte*)this + 1032);
}
TMap<TEnumAsByte<E_Ownership>, struct Falb_Array_Name>* ABP_NPC_Manager_C::M_PtrGetPresetsPerVillage() {
	return reinterpret_cast<TMap<TEnumAsByte<E_Ownership>, struct Falb_Array_Name>*>((byte*)this + 1032);
}
void ABP_NPC_Manager_C::M_SetPresetsPerVillage(const TMap<TEnumAsByte<E_Ownership>, struct Falb_Array_Name>& value) {
	Write((byte*)this + 1032, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.ExecuteUbergraph_BP_NPC_Manager
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::ExecuteUbergraph_BP_NPC_Manager(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.ExecuteUbergraph_BP_NPC_Manager");

	struct ABP_NPC_Manager_C_ExecuteUbergraph_BP_NPC_Manager_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	ABP_NPC_Manager_C_ExecuteUbergraph_BP_NPC_Manager_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.StartNPCManager Async
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: LoadGame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: MainMenu	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Task	Type: class UMultiTaskBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::StartNPCManager_Async(bool LoadGame, bool MainMenu, class UMultiTaskBase* Task) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.StartNPCManager Async");

	struct ABP_NPC_Manager_C_StartNPCManager_Async_Params {
		bool LoadGame;			//Offset: 0 | ElementSize: 1
		bool MainMenu;			//Offset: 1 | ElementSize: 1
		class UMultiTaskBase* Task;			//Offset: 8 | ElementSize: 8
	};
	ABP_NPC_Manager_C_StartNPCManager_Async_Params params;
	params.LoadGame = LoadGame;
	params.MainMenu = MainMenu;
	params.Task = Task;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.OnTimeOfDayChanged
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: TimeOfDay	Type: TEnumAsByte<E_TimeOfDay>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::OnTimeOfDayChanged(TEnumAsByte<E_TimeOfDay> TimeOfDay) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.OnTimeOfDayChanged");

	struct ABP_NPC_Manager_C_OnTimeOfDayChanged_Params {
		TEnumAsByte<E_TimeOfDay> TimeOfDay;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_Manager_C_OnTimeOfDayChanged_Params params;
	params.TimeOfDay = TimeOfDay;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.OnDaySkip
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::OnDaySkip() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.OnDaySkip");

	struct ABP_NPC_Manager_C_OnDaySkip_Params {
	};
	ABP_NPC_Manager_C_OnDaySkip_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.OnSeasonChanged
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::OnSeasonChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.OnSeasonChanged");

	struct ABP_NPC_Manager_C_OnSeasonChanged_Params {
	};
	ABP_NPC_Manager_C_OnSeasonChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.ReceiveBeginPlay
// Flags: Event, Protected, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.ReceiveBeginPlay");

	struct ABP_NPC_Manager_C_ReceiveBeginPlay_Params {
	};
	ABP_NPC_Manager_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.RandomName
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Sex	Type: TEnumAsByte<E_Sex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NameHandle	Type: struct FDataTableRowHandle	Flags: Parm, OutParm, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Manager_C::RandomName(TEnumAsByte<E_Sex> Sex, struct FDataTableRowHandle* NameHandle) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.RandomName");

	struct ABP_NPC_Manager_C_RandomName_Params {
		TEnumAsByte<E_Sex> Sex;			//Offset: 0 | ElementSize: 1
		struct FDataTableRowHandle NameHandle;			//Offset: 8 | ElementSize: 16
	};
	ABP_NPC_Manager_C_RandomName_Params params;
	params.Sex = Sex;

	UObject::ProcessEvent(fn, &params);
	if (NameHandle != nullptr)
		*NameHandle = params.NameHandle;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.RandomSex
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Sex	Type: TEnumAsByte<E_Sex>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::RandomSex(TEnumAsByte<E_Sex>* Sex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.RandomSex");

	struct ABP_NPC_Manager_C_RandomSex_Params {
		TEnumAsByte<E_Sex> Sex;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_Manager_C_RandomSex_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Sex != nullptr)
		*Sex = params.Sex;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.InitAvailableNames
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::InitAvailableNames() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.InitAvailableNames");

	struct ABP_NPC_Manager_C_InitAvailableNames_Params {
	};
	ABP_NPC_Manager_C_InitAvailableNames_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.AddNameToAvailableNamesArray
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: Sex	Type: TEnumAsByte<E_Sex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::AddNameToAvailableNamesArray(struct FString NPC_ID, TEnumAsByte<E_Sex> Sex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.AddNameToAvailableNamesArray");

	struct ABP_NPC_Manager_C_AddNameToAvailableNamesArray_Params {
		struct FString NPC_ID;			//Offset: 0 | ElementSize: 16
		TEnumAsByte<E_Sex> Sex;			//Offset: 16 | ElementSize: 1
	};
	ABP_NPC_Manager_C_AddNameToAvailableNamesArray_Params params;
	params.NPC_ID = NPC_ID;
	params.Sex = Sex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnNPC
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: NPC_Structure	Type: struct FST_CustomNPC	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: IsCustomNPC	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IsNewNeighbour	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: LoadGame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Birth	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: NPC	Type: class ABP_NPC_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SpawnNPC(struct FString ID, struct FST_CustomNPC NPC_Structure, bool IsCustomNPC, bool IsNewNeighbour, bool LoadGame, bool Birth, bool* Success, class ABP_NPC_C** NPC) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnNPC");

	struct ABP_NPC_Manager_C_SpawnNPC_Params {
		struct FString ID;			//Offset: 0 | ElementSize: 16
		struct FST_CustomNPC NPC_Structure;			//Offset: 16 | ElementSize: 256
		bool IsCustomNPC;			//Offset: 272 | ElementSize: 1
		bool IsNewNeighbour;			//Offset: 273 | ElementSize: 1
		bool LoadGame;			//Offset: 274 | ElementSize: 1
		bool Birth;			//Offset: 275 | ElementSize: 1
		bool Success;			//Offset: 276 | ElementSize: 1
		class ABP_NPC_C* NPC;			//Offset: 280 | ElementSize: 8
	};
	ABP_NPC_Manager_C_SpawnNPC_Params params;
	params.ID = ID;
	params.NPC_Structure = NPC_Structure;
	params.IsCustomNPC = IsCustomNPC;
	params.IsNewNeighbour = IsNewNeighbour;
	params.LoadGame = LoadGame;
	params.Birth = Birth;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (NPC != nullptr)
		*NPC = params.NPC;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.CheckNPC_ID
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_ID	Type: struct FString	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash
// Name: New_NPC_ID	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::CheckNPC_ID(const struct FString& NPC_ID, struct FString* New_NPC_ID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.CheckNPC_ID");

	struct ABP_NPC_Manager_C_CheckNPC_ID_Params {
		struct FString NPC_ID;			//Offset: 0 | ElementSize: 16
		struct FString New_NPC_ID;			//Offset: 16 | ElementSize: 16
	};
	ABP_NPC_Manager_C_CheckNPC_ID_Params params;
	params.NPC_ID = NPC_ID;

	UObject::ProcessEvent(fn, &params);
	if (New_NPC_ID != nullptr)
		*New_NPC_ID = params.New_NPC_ID;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SetNPCRelations
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_Structure	Type: struct FST_CustomNPC	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NPC_ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: CharacterType	Type: TEnumAsByte<E_CharacterType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SetNPCRelations(const struct FST_CustomNPC& NPC_Structure, class ABP_NPC_C* NPCReference, struct FString NPC_ID, TEnumAsByte<E_CharacterType> CharacterType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SetNPCRelations");

	struct ABP_NPC_Manager_C_SetNPCRelations_Params {
		struct FST_CustomNPC NPC_Structure;			//Offset: 0 | ElementSize: 256
		class ABP_NPC_C* NPCReference;			//Offset: 256 | ElementSize: 8
		struct FString NPC_ID;			//Offset: 264 | ElementSize: 16
		TEnumAsByte<E_CharacterType> CharacterType;			//Offset: 280 | ElementSize: 1
	};
	ABP_NPC_Manager_C_SetNPCRelations_Params params;
	params.NPC_Structure = NPC_Structure;
	params.NPCReference = NPCReference;
	params.NPC_ID = NPC_ID;
	params.CharacterType = CharacterType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.TeleportToHouse
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerIncluded	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Manager_C::TeleportToHouse(bool PlayerIncluded) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.TeleportToHouse");

	struct ABP_NPC_Manager_C_TeleportToHouse_Params {
		bool PlayerIncluded;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_Manager_C_TeleportToHouse_Params params;
	params.PlayerIncluded = PlayerIncluded;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.Init
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::Init() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.Init");

	struct ABP_NPC_Manager_C_Init_Params {
	};
	ABP_NPC_Manager_C_Init_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.ResetIllness
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::ResetIllness(class ABP_BaseCharacter_C* BaseCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.ResetIllness");

	struct ABP_NPC_Manager_C_ResetIllness_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_Manager_C_ResetIllness_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnNeighbours
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SpawnNeighbours() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnNeighbours");

	struct ABP_NPC_Manager_C_SpawnNeighbours_Params {
	};
	ABP_NPC_Manager_C_SpawnNeighbours_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnNewNeighbours
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SpawnNewNeighbours() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnNewNeighbours");

	struct ABP_NPC_Manager_C_SpawnNewNeighbours_Params {
	};
	ABP_NPC_Manager_C_SpawnNewNeighbours_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnRandomNPC
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SpawnRandomNPC() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnRandomNPC");

	struct ABP_NPC_Manager_C_SpawnRandomNPC_Params {
	};
	ABP_NPC_Manager_C_SpawnRandomNPC_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.StartNPCManager
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: LoadGame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: MainMenu	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Manager_C::StartNPCManager(bool LoadGame, bool MainMenu) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.StartNPCManager");

	struct ABP_NPC_Manager_C_StartNPCManager_Params {
		bool LoadGame;			//Offset: 0 | ElementSize: 1
		bool MainMenu;			//Offset: 1 | ElementSize: 1
	};
	ABP_NPC_Manager_C_StartNPCManager_Params params;
	params.LoadGame = LoadGame;
	params.MainMenu = MainMenu;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.AddItemsToNeighborhoodBuildings
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::AddItemsToNeighborhoodBuildings() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.AddItemsToNeighborhoodBuildings");

	struct ABP_NPC_Manager_C_AddItemsToNeighborhoodBuildings_Params {
	};
	ABP_NPC_Manager_C_AddItemsToNeighborhoodBuildings_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.ResetItemsInNeighborhoodBuildings
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::ResetItemsInNeighborhoodBuildings() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.ResetItemsInNeighborhoodBuildings");

	struct ABP_NPC_Manager_C_ResetItemsInNeighborhoodBuildings_Params {
	};
	ABP_NPC_Manager_C_ResetItemsInNeighborhoodBuildings_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.LoadSaveFileIntoSystem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::LoadSaveFileIntoSystem(class USAVE_Game_C* SaveReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.LoadSaveFileIntoSystem");

	struct ABP_NPC_Manager_C_LoadSaveFileIntoSystem_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_Manager_C_LoadSaveFileIntoSystem_Params params;
	params.SaveReference = SaveReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SaveDataFromSystemToFile
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SaveDataFromSystemToFile");

	struct ABP_NPC_Manager_C_SaveDataFromSystemToFile_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_Manager_C_SaveDataFromSystemToFile_Params params;
	params.SaveReference = SaveReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.RandomizeCharacterMeshes
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: AnimClass	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CharacterType	Type: TEnumAsByte<E_CharacterType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NPC_Reference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: KeepHead	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: LoadGame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Manager_C::RandomizeCharacterMeshes(class UObject* AnimClass, TEnumAsByte<E_CharacterType> CharacterType, class ABP_NPC_C* NPC_Reference, bool KeepHead, bool LoadGame, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.RandomizeCharacterMeshes");

	struct ABP_NPC_Manager_C_RandomizeCharacterMeshes_Params {
		class UObject* AnimClass;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_CharacterType> CharacterType;			//Offset: 8 | ElementSize: 1
		class ABP_NPC_C* NPC_Reference;			//Offset: 16 | ElementSize: 8
		bool KeepHead;			//Offset: 24 | ElementSize: 1
		bool LoadGame;			//Offset: 25 | ElementSize: 1
		bool Success;			//Offset: 26 | ElementSize: 1
	};
	ABP_NPC_Manager_C_RandomizeCharacterMeshes_Params params;
	params.AnimClass = AnimClass;
	params.CharacterType = CharacterType;
	params.NPC_Reference = NPC_Reference;
	params.KeepHead = KeepHead;
	params.LoadGame = LoadGame;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SetCustomCharacterMeshes
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: AnimClass	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CharacterType	Type: TEnumAsByte<E_CharacterType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NPC_Reference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: LoadGame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SetCustomCharacterMeshes(class UObject* AnimClass, TEnumAsByte<E_CharacterType> CharacterType, class ABP_NPC_C* NPC_Reference, bool LoadGame) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SetCustomCharacterMeshes");

	struct ABP_NPC_Manager_C_SetCustomCharacterMeshes_Params {
		class UObject* AnimClass;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_CharacterType> CharacterType;			//Offset: 8 | ElementSize: 1
		class ABP_NPC_C* NPC_Reference;			//Offset: 16 | ElementSize: 8
		bool LoadGame;			//Offset: 24 | ElementSize: 1
	};
	ABP_NPC_Manager_C_SetCustomCharacterMeshes_Params params;
	params.AnimClass = AnimClass;
	params.CharacterType = CharacterType;
	params.NPC_Reference = NPC_Reference;
	params.LoadGame = LoadGame;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.LoadCharacterMeshes
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: BodyPartsIndexes	Type: TMap<TEnumAsByte<E_BodyParts>, int32_t>	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Manager_C::LoadCharacterMeshes(TMap<TEnumAsByte<E_BodyParts>, int32_t> BodyPartsIndexes, class ABP_NPC_C* NPCReference, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.LoadCharacterMeshes");

	struct ABP_NPC_Manager_C_LoadCharacterMeshes_Params {
		TMap<TEnumAsByte<E_BodyParts>, int32_t> BodyPartsIndexes;			//Offset: 0 | ElementSize: 80
		class ABP_NPC_C* NPCReference;			//Offset: 80 | ElementSize: 8
		bool Success;			//Offset: 88 | ElementSize: 1
	};
	ABP_NPC_Manager_C_LoadCharacterMeshes_Params params;
	params.BodyPartsIndexes = BodyPartsIndexes;
	params.NPCReference = NPCReference;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.Spawn Child
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TransformLocation	Type: struct FTransform	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor
// Name: MotherID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: MustBeMale	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Birth	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Succes	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Manager_C::Spawn_Child(TEnumAsByte<E_Ownership> Ownership, struct FTransform TransformLocation, struct FString MotherID, bool MustBeMale, bool Birth, bool* Succes) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.Spawn Child");

	struct ABP_NPC_Manager_C_Spawn_Child_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
		struct FTransform TransformLocation;			//Offset: 16 | ElementSize: 48
		struct FString MotherID;			//Offset: 64 | ElementSize: 16
		bool MustBeMale;			//Offset: 80 | ElementSize: 1
		bool Birth;			//Offset: 81 | ElementSize: 1
		bool Succes;			//Offset: 82 | ElementSize: 1
	};
	ABP_NPC_Manager_C_Spawn_Child_Params params;
	params.Ownership = Ownership;
	params.TransformLocation = TransformLocation;
	params.MotherID = MotherID;
	params.MustBeMale = MustBeMale;
	params.Birth = Birth;

	UObject::ProcessEvent(fn, &params);
	if (Succes != nullptr)
		*Succes = params.Succes;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SelectMeshesForNPCGen
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: NPCMeshes	Type: struct FST_NPCMeshesGen	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: NPC_Reference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: KeepHead	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: BodyPartsMeshes	Type: TMap<TEnumAsByte<E_BodyParts>, class USkeletalMesh*>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SelectMeshesForNPCGen(struct FST_NPCMeshesGen NPCMeshes, class ABP_NPC_C* NPC_Reference, bool KeepHead, TMap<TEnumAsByte<E_BodyParts>, class USkeletalMesh*>* BodyPartsMeshes) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SelectMeshesForNPCGen");

	struct ABP_NPC_Manager_C_SelectMeshesForNPCGen_Params {
		struct FST_NPCMeshesGen NPCMeshes;			//Offset: 0 | ElementSize: 128
		class ABP_NPC_C* NPC_Reference;			//Offset: 128 | ElementSize: 8
		bool KeepHead;			//Offset: 136 | ElementSize: 1
		TMap<TEnumAsByte<E_BodyParts>, class USkeletalMesh*> BodyPartsMeshes;			//Offset: 144 | ElementSize: 80
	};
	ABP_NPC_Manager_C_SelectMeshesForNPCGen_Params params;
	params.NPCMeshes = NPCMeshes;
	params.NPC_Reference = NPC_Reference;
	params.KeepHead = KeepHead;

	UObject::ProcessEvent(fn, &params);
	if (BodyPartsMeshes != nullptr)
		*BodyPartsMeshes = params.BodyPartsMeshes;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SortMeshes
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCMeshes	Type: struct FST_NPCMeshesGen	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Season	Type: TEnumAsByte<E_Seasons>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SortedNPCMeshes	Type: struct FST_NPCMeshesGen	Flags: Parm, OutParm, HasGetValueTypeHash
// Name: SortedIndexes	Type: TArray<struct FST_ArrayOfArraysInt>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SortMeshes(struct FST_NPCMeshesGen NPCMeshes, TEnumAsByte<E_Profession> Profession, TEnumAsByte<E_Seasons> Season, struct FST_NPCMeshesGen* SortedNPCMeshes, TArray<struct FST_ArrayOfArraysInt>* SortedIndexes) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SortMeshes");

	struct ABP_NPC_Manager_C_SortMeshes_Params {
		struct FST_NPCMeshesGen NPCMeshes;			//Offset: 0 | ElementSize: 128
		TEnumAsByte<E_Profession> Profession;			//Offset: 128 | ElementSize: 1
		TEnumAsByte<E_Seasons> Season;			//Offset: 129 | ElementSize: 1
		struct FST_NPCMeshesGen SortedNPCMeshes;			//Offset: 136 | ElementSize: 128
		TArray<struct FST_ArrayOfArraysInt> SortedIndexes;			//Offset: 264 | ElementSize: 16
	};
	ABP_NPC_Manager_C_SortMeshes_Params params;
	params.NPCMeshes = NPCMeshes;
	params.Profession = Profession;
	params.Season = Season;

	UObject::ProcessEvent(fn, &params);
	if (SortedNPCMeshes != nullptr)
		*SortedNPCMeshes = params.SortedNPCMeshes;
	if (SortedIndexes != nullptr)
		*SortedIndexes = params.SortedIndexes;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.MeshGenSorter
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ArrayToSort	Type: TArray<struct FST_NPCsGenMeshSettings>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Season	Type: TEnumAsByte<E_Seasons>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SortedArray	Type: TArray<struct FST_NPCsGenMeshSettings>	Flags: Parm, OutParm
// Name: SortedIndexes	Type: TArray<int32_t>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::MeshGenSorter(TArray<struct FST_NPCsGenMeshSettings>* ArrayToSort, TEnumAsByte<E_Profession> Profession, TEnumAsByte<E_Seasons> Season, TArray<struct FST_NPCsGenMeshSettings>* SortedArray, TArray<int32_t>* SortedIndexes) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.MeshGenSorter");

	struct ABP_NPC_Manager_C_MeshGenSorter_Params {
		TArray<struct FST_NPCsGenMeshSettings> ArrayToSort;			//Offset: 0 | ElementSize: 16
		TEnumAsByte<E_Profession> Profession;			//Offset: 16 | ElementSize: 1
		TEnumAsByte<E_Seasons> Season;			//Offset: 17 | ElementSize: 1
		TArray<struct FST_NPCsGenMeshSettings> SortedArray;			//Offset: 24 | ElementSize: 16
		TArray<int32_t> SortedIndexes;			//Offset: 40 | ElementSize: 16
	};
	ABP_NPC_Manager_C_MeshGenSorter_Params params;
	params.Profession = Profession;
	params.Season = Season;

	UObject::ProcessEvent(fn, &params);
	if (ArrayToSort != nullptr)
		*ArrayToSort = params.ArrayToSort;
	if (SortedArray != nullptr)
		*SortedArray = params.SortedArray;
	if (SortedIndexes != nullptr)
		*SortedIndexes = params.SortedIndexes;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.GetRandomIndexesFromNPCMeshesGen
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCMeshes	Type: struct FST_NPCMeshesGen	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: SortedIndexes	Type: TArray<struct FST_ArrayOfArraysInt>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: BodyPartsIndexes	Type: TMap<TEnumAsByte<E_BodyParts>, int32_t>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::GetRandomIndexesFromNPCMeshesGen(struct FST_NPCMeshesGen NPCMeshes, TArray<struct FST_ArrayOfArraysInt>* SortedIndexes, TMap<TEnumAsByte<E_BodyParts>, int32_t>* BodyPartsIndexes) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.GetRandomIndexesFromNPCMeshesGen");

	struct ABP_NPC_Manager_C_GetRandomIndexesFromNPCMeshesGen_Params {
		struct FST_NPCMeshesGen NPCMeshes;			//Offset: 0 | ElementSize: 128
		TArray<struct FST_ArrayOfArraysInt> SortedIndexes;			//Offset: 128 | ElementSize: 16
		TMap<TEnumAsByte<E_BodyParts>, int32_t> BodyPartsIndexes;			//Offset: 144 | ElementSize: 80
	};
	ABP_NPC_Manager_C_GetRandomIndexesFromNPCMeshesGen_Params params;
	params.NPCMeshes = NPCMeshes;

	UObject::ProcessEvent(fn, &params);
	if (SortedIndexes != nullptr)
		*SortedIndexes = params.SortedIndexes;
	if (BodyPartsIndexes != nullptr)
		*BodyPartsIndexes = params.BodyPartsIndexes;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.GetMeshesByIndexesFromNPCMeshesGen
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCMeshes	Type: struct FST_NPCMeshesGen	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: BodyPartsIndexes	Type: TMap<TEnumAsByte<E_BodyParts>, int32_t>	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: BodyPartsMeshes	Type: TMap<TEnumAsByte<E_BodyParts>, class USkeletalMesh*>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::GetMeshesByIndexesFromNPCMeshesGen(struct FST_NPCMeshesGen NPCMeshes, TMap<TEnumAsByte<E_BodyParts>, int32_t> BodyPartsIndexes, TMap<TEnumAsByte<E_BodyParts>, class USkeletalMesh*>* BodyPartsMeshes) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.GetMeshesByIndexesFromNPCMeshesGen");

	struct ABP_NPC_Manager_C_GetMeshesByIndexesFromNPCMeshesGen_Params {
		struct FST_NPCMeshesGen NPCMeshes;			//Offset: 0 | ElementSize: 128
		TMap<TEnumAsByte<E_BodyParts>, int32_t> BodyPartsIndexes;			//Offset: 128 | ElementSize: 80
		TMap<TEnumAsByte<E_BodyParts>, class USkeletalMesh*> BodyPartsMeshes;			//Offset: 208 | ElementSize: 80
	};
	ABP_NPC_Manager_C_GetMeshesByIndexesFromNPCMeshesGen_Params params;
	params.NPCMeshes = NPCMeshes;
	params.BodyPartsIndexes = BodyPartsIndexes;

	UObject::ProcessEvent(fn, &params);
	if (BodyPartsMeshes != nullptr)
		*BodyPartsMeshes = params.BodyPartsMeshes;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.NakedNPCPrevention
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCMeshes	Type: struct FST_NPCMeshesGen	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BodyParts	Type: TMap<TEnumAsByte<E_BodyParts>, int32_t>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::NakedNPCPrevention(struct FST_NPCMeshesGen NPCMeshes, class ABP_NPC_C* NPCReference, TMap<TEnumAsByte<E_BodyParts>, int32_t>* BodyParts) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.NakedNPCPrevention");

	struct ABP_NPC_Manager_C_NakedNPCPrevention_Params {
		struct FST_NPCMeshesGen NPCMeshes;			//Offset: 0 | ElementSize: 128
		class ABP_NPC_C* NPCReference;			//Offset: 128 | ElementSize: 8
		TMap<TEnumAsByte<E_BodyParts>, int32_t> BodyParts;			//Offset: 136 | ElementSize: 80
	};
	ABP_NPC_Manager_C_NakedNPCPrevention_Params params;
	params.NPCMeshes = NPCMeshes;
	params.NPCReference = NPCReference;

	UObject::ProcessEvent(fn, &params);
	if (BodyParts != nullptr)
		*BodyParts = params.BodyParts;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.InitializePresetTables
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::InitializePresetTables() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.InitializePresetTables");

	struct ABP_NPC_Manager_C_InitializePresetTables_Params {
	};
	ABP_NPC_Manager_C_InitializePresetTables_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SelectPresetsForNPC
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_Reference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SelectPresetsForNPC(class ABP_NPC_C* NPC_Reference, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SelectPresetsForNPC");

	struct ABP_NPC_Manager_C_SelectPresetsForNPC_Params {
		class ABP_NPC_C* NPC_Reference;			//Offset: 0 | ElementSize: 8
		bool Success;			//Offset: 8 | ElementSize: 1
	};
	ABP_NPC_Manager_C_SelectPresetsForNPC_Params params;
	params.NPC_Reference = NPC_Reference;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.LoadPresetTables
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: AvailableMalePresets	Type: TArray<struct FString>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: AvailableFemalePresets	Type: TArray<struct FString>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: AvailableBoyPresets	Type: TArray<struct FString>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: AvailableGirlPresets	Type: TArray<struct FString>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: AvailableToddlerPresets	Type: TArray<struct FString>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::LoadPresetTables(TArray<struct FString>* AvailableMalePresets, TArray<struct FString>* AvailableFemalePresets, TArray<struct FString>* AvailableBoyPresets, TArray<struct FString>* AvailableGirlPresets, TArray<struct FString>* AvailableToddlerPresets) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.LoadPresetTables");

	struct ABP_NPC_Manager_C_LoadPresetTables_Params {
		TArray<struct FString> AvailableMalePresets;			//Offset: 0 | ElementSize: 16
		TArray<struct FString> AvailableFemalePresets;			//Offset: 16 | ElementSize: 16
		TArray<struct FString> AvailableBoyPresets;			//Offset: 32 | ElementSize: 16
		TArray<struct FString> AvailableGirlPresets;			//Offset: 48 | ElementSize: 16
		TArray<struct FString> AvailableToddlerPresets;			//Offset: 64 | ElementSize: 16
	};
	ABP_NPC_Manager_C_LoadPresetTables_Params params;

	UObject::ProcessEvent(fn, &params);
	if (AvailableMalePresets != nullptr)
		*AvailableMalePresets = params.AvailableMalePresets;
	if (AvailableFemalePresets != nullptr)
		*AvailableFemalePresets = params.AvailableFemalePresets;
	if (AvailableBoyPresets != nullptr)
		*AvailableBoyPresets = params.AvailableBoyPresets;
	if (AvailableGirlPresets != nullptr)
		*AvailableGirlPresets = params.AvailableGirlPresets;
	if (AvailableToddlerPresets != nullptr)
		*AvailableToddlerPresets = params.AvailableToddlerPresets;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.GetPresetsForProfession
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ProfessionOut	Type: TEnumAsByte<E_Profession>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PresetsForProfession	Type: struct FST_NPCSeasonClothing	Flags: Parm, OutParm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::GetPresetsForProfession(class ABP_NPC_C* NPCReference, TEnumAsByte<E_Profession> Profession, TEnumAsByte<E_Profession>* ProfessionOut, struct FST_NPCSeasonClothing* PresetsForProfession) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.GetPresetsForProfession");

	struct ABP_NPC_Manager_C_GetPresetsForProfession_Params {
		class ABP_NPC_C* NPCReference;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_Profession> Profession;			//Offset: 8 | ElementSize: 1
		TEnumAsByte<E_Profession> ProfessionOut;			//Offset: 9 | ElementSize: 1
		struct FST_NPCSeasonClothing PresetsForProfession;			//Offset: 16 | ElementSize: 80
	};
	ABP_NPC_Manager_C_GetPresetsForProfession_Params params;
	params.NPCReference = NPCReference;
	params.Profession = Profession;

	UObject::ProcessEvent(fn, &params);
	if (ProfessionOut != nullptr)
		*ProfessionOut = params.ProfessionOut;
	if (PresetsForProfession != nullptr)
		*PresetsForProfession = params.PresetsForProfession;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.GetNPCPresets
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: DataTable	Type: class UDataTable*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Presets	Type: TArray<struct FST_NPCsPresets>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::GetNPCPresets(class UDataTable* DataTable, TArray<struct FST_NPCsPresets>* Presets) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.GetNPCPresets");

	struct ABP_NPC_Manager_C_GetNPCPresets_Params {
		class UDataTable* DataTable;			//Offset: 0 | ElementSize: 8
		TArray<struct FST_NPCsPresets> Presets;			//Offset: 8 | ElementSize: 16
	};
	ABP_NPC_Manager_C_GetNPCPresets_Params params;
	params.DataTable = DataTable;

	UObject::ProcessEvent(fn, &params);
	if (Presets != nullptr)
		*Presets = params.Presets;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SortByProfession
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ArrayToSort	Type: TArray<struct FST_NPCsPresets>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SortedArray	Type: TArray<struct FST_NPCsPresets>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SortByProfession(TArray<struct FST_NPCsPresets>* ArrayToSort, const TEnumAsByte<E_Profession>& Profession, TArray<struct FST_NPCsPresets>* SortedArray) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SortByProfession");

	struct ABP_NPC_Manager_C_SortByProfession_Params {
		TArray<struct FST_NPCsPresets> ArrayToSort;			//Offset: 0 | ElementSize: 16
		TEnumAsByte<E_Profession> Profession;			//Offset: 16 | ElementSize: 1
		TArray<struct FST_NPCsPresets> SortedArray;			//Offset: 24 | ElementSize: 16
	};
	ABP_NPC_Manager_C_SortByProfession_Params params;
	params.Profession = Profession;

	UObject::ProcessEvent(fn, &params);
	if (ArrayToSort != nullptr)
		*ArrayToSort = params.ArrayToSort;
	if (SortedArray != nullptr)
		*SortedArray = params.SortedArray;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SortBySeason
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ArrayToSort	Type: TArray<struct FST_NPCsPresets>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Season	Type: TEnumAsByte<E_Seasons>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SortedArray	Type: TArray<struct FST_NPCsPresets>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SortBySeason(TArray<struct FST_NPCsPresets>* ArrayToSort, const TEnumAsByte<E_Seasons>& Season, TArray<struct FST_NPCsPresets>* SortedArray) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SortBySeason");

	struct ABP_NPC_Manager_C_SortBySeason_Params {
		TArray<struct FST_NPCsPresets> ArrayToSort;			//Offset: 0 | ElementSize: 16
		TEnumAsByte<E_Seasons> Season;			//Offset: 16 | ElementSize: 1
		TArray<struct FST_NPCsPresets> SortedArray;			//Offset: 24 | ElementSize: 16
	};
	ABP_NPC_Manager_C_SortBySeason_Params params;
	params.Season = Season;

	UObject::ProcessEvent(fn, &params);
	if (ArrayToSort != nullptr)
		*ArrayToSort = params.ArrayToSort;
	if (SortedArray != nullptr)
		*SortedArray = params.SortedArray;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.GetPresetDataTableForNPC
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: NPCReference	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: class UDataTable*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
class UDataTable* ABP_NPC_Manager_C::GetPresetDataTableForNPC(class ABP_BaseCharacter_C* NPCReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.GetPresetDataTableForNPC");

	struct ABP_NPC_Manager_C_GetPresetDataTableForNPC_Params {
		class ABP_BaseCharacter_C* NPCReference;			//Offset: 0 | ElementSize: 8
		class UDataTable* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	ABP_NPC_Manager_C_GetPresetDataTableForNPC_Params params;
	params.NPCReference = NPCReference;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SelectHeadAndHair
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SelectHeadAndHair(class ABP_NPC_C* NPCReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SelectHeadAndHair");

	struct ABP_NPC_Manager_C_SelectHeadAndHair_Params {
		class ABP_NPC_C* NPCReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_Manager_C_SelectHeadAndHair_Params params;
	params.NPCReference = NPCReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.VerifyNPCPresets
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Manager_C::VerifyNPCPresets(class ABP_NPC_C* NPCReference, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.VerifyNPCPresets");

	struct ABP_NPC_Manager_C_VerifyNPCPresets_Params {
		class ABP_NPC_C* NPCReference;			//Offset: 0 | ElementSize: 8
		bool Success;			//Offset: 8 | ElementSize: 1
	};
	ABP_NPC_Manager_C_VerifyNPCPresets_Params params;
	params.NPCReference = NPCReference;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.GetPresetByProfessionAndSeason
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Season	Type: TEnumAsByte<E_Seasons>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ProfessionOut	Type: TEnumAsByte<E_Profession>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SeasonOut	Type: TEnumAsByte<E_Seasons>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PresetID	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::GetPresetByProfessionAndSeason(class ABP_NPC_C* NPCReference, TEnumAsByte<E_Profession> Profession, TEnumAsByte<E_Seasons> Season, TEnumAsByte<E_Profession>* ProfessionOut, TEnumAsByte<E_Seasons>* SeasonOut, struct FName* PresetID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.GetPresetByProfessionAndSeason");

	struct ABP_NPC_Manager_C_GetPresetByProfessionAndSeason_Params {
		class ABP_NPC_C* NPCReference;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_Profession> Profession;			//Offset: 8 | ElementSize: 1
		TEnumAsByte<E_Seasons> Season;			//Offset: 9 | ElementSize: 1
		TEnumAsByte<E_Profession> ProfessionOut;			//Offset: 10 | ElementSize: 1
		TEnumAsByte<E_Seasons> SeasonOut;			//Offset: 11 | ElementSize: 1
		struct FName PresetID;			//Offset: 12 | ElementSize: 8
	};
	ABP_NPC_Manager_C_GetPresetByProfessionAndSeason_Params params;
	params.NPCReference = NPCReference;
	params.Profession = Profession;
	params.Season = Season;

	UObject::ProcessEvent(fn, &params);
	if (ProfessionOut != nullptr)
		*ProfessionOut = params.ProfessionOut;
	if (SeasonOut != nullptr)
		*SeasonOut = params.SeasonOut;
	if (PresetID != nullptr)
		*PresetID = params.PresetID;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.VerifyAvailablePresets
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: DataTable	Type: class UDataTable*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ArrayToVerify	Type: TArray<struct FST_NPCsPresets>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::VerifyAvailablePresets(class UDataTable* DataTable, TArray<struct FST_NPCsPresets>* ArrayToVerify) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.VerifyAvailablePresets");

	struct ABP_NPC_Manager_C_VerifyAvailablePresets_Params {
		class UDataTable* DataTable;			//Offset: 0 | ElementSize: 8
		TArray<struct FST_NPCsPresets> ArrayToVerify;			//Offset: 8 | ElementSize: 16
	};
	ABP_NPC_Manager_C_VerifyAvailablePresets_Params params;
	params.DataTable = DataTable;

	UObject::ProcessEvent(fn, &params);
	if (ArrayToVerify != nullptr)
		*ArrayToVerify = params.ArrayToVerify;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.CheckIsNeighbours
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::CheckIsNeighbours() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.CheckIsNeighbours");

	struct ABP_NPC_Manager_C_CheckIsNeighbours_Params {
	};
	ABP_NPC_Manager_C_CheckIsNeighbours_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SetNPC_NightPatrol
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SetNPC_NightPatrol() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SetNPC_NightPatrol");

	struct ABP_NPC_Manager_C_SetNPC_NightPatrol_Params {
	};
	ABP_NPC_Manager_C_SetNPC_NightPatrol_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnHerald
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC	Type: class ABP_NPC_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SpawnHerald(class ABP_NPC_C** NPC) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnHerald");

	struct ABP_NPC_Manager_C_SpawnHerald_Params {
		class ABP_NPC_C* NPC;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_Manager_C_SpawnHerald_Params params;

	UObject::ProcessEvent(fn, &params);
	if (NPC != nullptr)
		*NPC = params.NPC;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.GetPresetByProfessionSeasonAndWealth
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Season	Type: TEnumAsByte<E_Seasons>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Wealth	Type: TEnumAsByte<E_Wealth>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ProfessionOut	Type: TEnumAsByte<E_Profession>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SeasonOut	Type: TEnumAsByte<E_Seasons>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WealthOut	Type: TEnumAsByte<E_Wealth>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PresetID	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::GetPresetByProfessionSeasonAndWealth(class ABP_NPC_C* NPCReference, TEnumAsByte<E_Profession> Profession, TEnumAsByte<E_Seasons> Season, TEnumAsByte<E_Wealth> Wealth, TEnumAsByte<E_Profession>* ProfessionOut, TEnumAsByte<E_Seasons>* SeasonOut, TEnumAsByte<E_Wealth>* WealthOut, struct FName* PresetID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.GetPresetByProfessionSeasonAndWealth");

	struct ABP_NPC_Manager_C_GetPresetByProfessionSeasonAndWealth_Params {
		class ABP_NPC_C* NPCReference;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<E_Profession> Profession;			//Offset: 8 | ElementSize: 1
		TEnumAsByte<E_Seasons> Season;			//Offset: 9 | ElementSize: 1
		TEnumAsByte<E_Wealth> Wealth;			//Offset: 10 | ElementSize: 1
		TEnumAsByte<E_Profession> ProfessionOut;			//Offset: 11 | ElementSize: 1
		TEnumAsByte<E_Seasons> SeasonOut;			//Offset: 12 | ElementSize: 1
		TEnumAsByte<E_Wealth> WealthOut;			//Offset: 13 | ElementSize: 1
		struct FName PresetID;			//Offset: 16 | ElementSize: 8
	};
	ABP_NPC_Manager_C_GetPresetByProfessionSeasonAndWealth_Params params;
	params.NPCReference = NPCReference;
	params.Profession = Profession;
	params.Season = Season;
	params.Wealth = Wealth;

	UObject::ProcessEvent(fn, &params);
	if (ProfessionOut != nullptr)
		*ProfessionOut = params.ProfessionOut;
	if (SeasonOut != nullptr)
		*SeasonOut = params.SeasonOut;
	if (WealthOut != nullptr)
		*WealthOut = params.WealthOut;
	if (PresetID != nullptr)
		*PresetID = params.PresetID;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SortByWealth
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ArrayToSort	Type: TArray<struct FST_NPCsPresets>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Wealth	Type: TEnumAsByte<E_Wealth>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SortedArray	Type: TArray<struct FST_NPCsPresets>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SortByWealth(TArray<struct FST_NPCsPresets>* ArrayToSort, const TEnumAsByte<E_Wealth>& Wealth, TArray<struct FST_NPCsPresets>* SortedArray) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SortByWealth");

	struct ABP_NPC_Manager_C_SortByWealth_Params {
		TArray<struct FST_NPCsPresets> ArrayToSort;			//Offset: 0 | ElementSize: 16
		TEnumAsByte<E_Wealth> Wealth;			//Offset: 16 | ElementSize: 1
		TArray<struct FST_NPCsPresets> SortedArray;			//Offset: 24 | ElementSize: 16
	};
	ABP_NPC_Manager_C_SortByWealth_Params params;
	params.Wealth = Wealth;

	UObject::ProcessEvent(fn, &params);
	if (ArrayToSort != nullptr)
		*ArrayToSort = params.ArrayToSort;
	if (SortedArray != nullptr)
		*SortedArray = params.SortedArray;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.UpdateVendors
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::UpdateVendors() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.UpdateVendors");

	struct ABP_NPC_Manager_C_UpdateVendors_Params {
	};
	ABP_NPC_Manager_C_UpdateVendors_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.VerifyNPCHeadAndHair
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::VerifyNPCHeadAndHair(class ABP_NPC_C* NPCReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.VerifyNPCHeadAndHair");

	struct ABP_NPC_Manager_C_VerifyNPCHeadAndHair_Params {
		class ABP_NPC_C* NPCReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_Manager_C_VerifyNPCHeadAndHair_Params params;
	params.NPCReference = NPCReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnGiftVendor
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: TransformLocation	Type: struct FTransform	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor
// Name: VendorCategory	Type: struct FDataTableRowHandle	Flags: BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor
// Name: NPC	Type: class ABP_NPC_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SpawnGiftVendor(struct FTransform TransformLocation, struct FDataTableRowHandle VendorCategory, class ABP_NPC_C** NPC) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnGiftVendor");

	struct ABP_NPC_Manager_C_SpawnGiftVendor_Params {
		struct FTransform TransformLocation;			//Offset: 0 | ElementSize: 48
		struct FDataTableRowHandle VendorCategory;			//Offset: 48 | ElementSize: 16
		class ABP_NPC_C* NPC;			//Offset: 64 | ElementSize: 8
	};
	ABP_NPC_Manager_C_SpawnGiftVendor_Params params;
	params.TransformLocation = TransformLocation;
	params.VendorCategory = VendorCategory;

	UObject::ProcessEvent(fn, &params);
	if (NPC != nullptr)
		*NPC = params.NPC;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnQuestNPC
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: RowName	Type: struct FDataTableRowHandle	Flags: BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor
// Name: NPC_Parameters	Type: struct FST_SimpleNPC	Flags: BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash
// Name: NPC	Type: class ABP_NPC_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SpawnQuestNPC(struct FDataTableRowHandle RowName, struct FST_SimpleNPC NPC_Parameters, class ABP_NPC_C** NPC) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnQuestNPC");

	struct ABP_NPC_Manager_C_SpawnQuestNPC_Params {
		struct FDataTableRowHandle RowName;			//Offset: 0 | ElementSize: 16
		struct FST_SimpleNPC NPC_Parameters;			//Offset: 16 | ElementSize: 96
		class ABP_NPC_C* NPC;			//Offset: 112 | ElementSize: 8
	};
	ABP_NPC_Manager_C_SpawnQuestNPC_Params params;
	params.RowName = RowName;
	params.NPC_Parameters = NPC_Parameters;

	UObject::ProcessEvent(fn, &params);
	if (NPC != nullptr)
		*NPC = params.NPC;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnWaggoner
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SpawnWaggoner(TEnumAsByte<E_Ownership> Ownership) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnWaggoner");

	struct ABP_NPC_Manager_C_SpawnWaggoner_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_Manager_C_SpawnWaggoner_Params params;
	params.Ownership = Ownership;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnNPC_FromSpawner
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_Parameters	Type: struct FST_SimpleNPC	Flags: BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash
// Name: LoadGame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: NPC	Type: class ABP_NPC_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SpawnNPC_FromSpawner(struct FST_SimpleNPC NPC_Parameters, bool LoadGame, class ABP_NPC_C** NPC) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SpawnNPC_FromSpawner");

	struct ABP_NPC_Manager_C_SpawnNPC_FromSpawner_Params {
		struct FST_SimpleNPC NPC_Parameters;			//Offset: 0 | ElementSize: 96
		bool LoadGame;			//Offset: 96 | ElementSize: 1
		class ABP_NPC_C* NPC;			//Offset: 104 | ElementSize: 8
	};
	ABP_NPC_Manager_C_SpawnNPC_FromSpawner_Params params;
	params.NPC_Parameters = NPC_Parameters;
	params.LoadGame = LoadGame;

	UObject::ProcessEvent(fn, &params);
	if (NPC != nullptr)
		*NPC = params.NPC;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.NeighboursDeath
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_Reference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::NeighboursDeath(class ABP_NPC_C* NPC_Reference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.NeighboursDeath");

	struct ABP_NPC_Manager_C_NeighboursDeath_Params {
		class ABP_NPC_C* NPC_Reference;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_Manager_C_NeighboursDeath_Params params;
	params.NPC_Reference = NPC_Reference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.UpdateNPCsOnSeasonChanged
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::UpdateNPCsOnSeasonChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.UpdateNPCsOnSeasonChanged");

	struct ABP_NPC_Manager_C_UpdateNPCsOnSeasonChanged_Params {
	};
	ABP_NPC_Manager_C_UpdateNPCsOnSeasonChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.NPCsDeath
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::NPCsDeath() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.NPCsDeath");

	struct ABP_NPC_Manager_C_NPCsDeath_Params {
	};
	ABP_NPC_Manager_C_NPCsDeath_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.SetNeighboursRelations
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::SetNeighboursRelations() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SetNeighboursRelations");

	struct ABP_NPC_Manager_C_SetNeighboursRelations_Params {
	};
	ABP_NPC_Manager_C_SetNeighboursRelations_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.DestroyHerald
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::DestroyHerald(struct FString NPC_ID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.DestroyHerald");

	struct ABP_NPC_Manager_C_DestroyHerald_Params {
		struct FString NPC_ID;			//Offset: 0 | ElementSize: 16
	};
	ABP_NPC_Manager_C_DestroyHerald_Params params;
	params.NPC_ID = NPC_ID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.DestroyQuestNPC
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: RowName	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::DestroyQuestNPC(struct FString RowName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.DestroyQuestNPC");

	struct ABP_NPC_Manager_C_DestroyQuestNPC_Params {
		struct FString RowName;			//Offset: 0 | ElementSize: 16
	};
	ABP_NPC_Manager_C_DestroyQuestNPC_Params params;
	params.RowName = RowName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.ReloadNeighbours
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::ReloadNeighbours() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.ReloadNeighbours");

	struct ABP_NPC_Manager_C_ReloadNeighbours_Params {
	};
	ABP_NPC_Manager_C_ReloadNeighbours_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.AddNPCsThatLeft
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC	Type: class AActor*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::AddNPCsThatLeft(class AActor*& NPC) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.AddNPCsThatLeft");

	struct ABP_NPC_Manager_C_AddNPCsThatLeft_Params {
		class AActor* NPC;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_Manager_C_AddNPCsThatLeft_Params params;
	params.NPC = NPC;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.RemoveNPCsThatLeft
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC	Type: class AActor*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::RemoveNPCsThatLeft(class AActor*& NPC) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.RemoveNPCsThatLeft");

	struct ABP_NPC_Manager_C_RemoveNPCsThatLeft_Params {
		class AActor* NPC;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_Manager_C_RemoveNPCsThatLeft_Params params;
	params.NPC = NPC;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.DestroyNPCsThatLeftOnSkip
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::DestroyNPCsThatLeftOnSkip() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.DestroyNPCsThatLeftOnSkip");

	struct ABP_NPC_Manager_C_DestroyNPCsThatLeftOnSkip_Params {
	};
	ABP_NPC_Manager_C_DestroyNPCsThatLeftOnSkip_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.UpdateWaggoners
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_NPC_Manager_C::UpdateWaggoners() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.UpdateWaggoners");

	struct ABP_NPC_Manager_C_UpdateWaggoners_Params {
	};
	ABP_NPC_Manager_C_UpdateWaggoners_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.AddToysToNeighboursKids
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: AddSamborFigurines	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_NPC_Manager_C::AddToysToNeighboursKids(bool AddSamborFigurines) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.AddToysToNeighboursKids");

	struct ABP_NPC_Manager_C_AddToysToNeighboursKids_Params {
		bool AddSamborFigurines;			//Offset: 0 | ElementSize: 1
	};
	ABP_NPC_Manager_C_AddToysToNeighboursKids_Params params;
	params.AddSamborFigurines = AddSamborFigurines;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.RemovePresetFromPool
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PresetToRemove	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::RemovePresetFromPool(class ABP_NPC_C* NPC, struct FName PresetToRemove) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.RemovePresetFromPool");

	struct ABP_NPC_Manager_C_RemovePresetFromPool_Params {
		class ABP_NPC_C* NPC;			//Offset: 0 | ElementSize: 8
		struct FName PresetToRemove;			//Offset: 8 | ElementSize: 8
	};
	ABP_NPC_Manager_C_RemovePresetFromPool_Params params;
	params.NPC = NPC;
	params.PresetToRemove = PresetToRemove;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.RefillPresetTable
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Array	Type: TArray<struct FST_NPCsPresets>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: NPCReference	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::RefillPresetTable(TArray<struct FST_NPCsPresets>* Array, class ABP_BaseCharacter_C* NPCReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.RefillPresetTable");

	struct ABP_NPC_Manager_C_RefillPresetTable_Params {
		TArray<struct FST_NPCsPresets> Array;			//Offset: 0 | ElementSize: 16
		class ABP_BaseCharacter_C* NPCReference;			//Offset: 16 | ElementSize: 8
	};
	ABP_NPC_Manager_C_RefillPresetTable_Params params;
	params.NPCReference = NPCReference;

	UObject::ProcessEvent(fn, &params);
	if (Array != nullptr)
		*Array = params.Array;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.FilterPresets
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Presets	Type: TArray<struct FST_NPCsPresets>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FilteredArray	Type: TArray<struct FST_NPCsPresets>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::FilterPresets(TArray<struct FST_NPCsPresets>* Presets, class ABP_NPC_C* NPCReference, TArray<struct FST_NPCsPresets>* FilteredArray) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.FilterPresets");

	struct ABP_NPC_Manager_C_FilterPresets_Params {
		TArray<struct FST_NPCsPresets> Presets;			//Offset: 0 | ElementSize: 16
		class ABP_NPC_C* NPCReference;			//Offset: 16 | ElementSize: 8
		TArray<struct FST_NPCsPresets> FilteredArray;			//Offset: 24 | ElementSize: 16
	};
	ABP_NPC_Manager_C_FilterPresets_Params params;
	params.NPCReference = NPCReference;

	UObject::ProcessEvent(fn, &params);
	if (Presets != nullptr)
		*Presets = params.Presets;
	if (FilteredArray != nullptr)
		*FilteredArray = params.FilteredArray;
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.UpdatePresetsPerVillage
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCReference	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PresetToAdd	Type: struct FName	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::UpdatePresetsPerVillage(class ABP_BaseCharacter_C* NPCReference, const struct FName& PresetToAdd) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.UpdatePresetsPerVillage");

	struct ABP_NPC_Manager_C_UpdatePresetsPerVillage_Params {
		class ABP_BaseCharacter_C* NPCReference;			//Offset: 0 | ElementSize: 8
		struct FName PresetToAdd;			//Offset: 8 | ElementSize: 8
	};
	ABP_NPC_Manager_C_UpdatePresetsPerVillage_Params params;
	params.NPCReference = NPCReference;
	params.PresetToAdd = PresetToAdd;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.RemovePresetsPerVillage
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCReference	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_NPC_Manager_C::RemovePresetsPerVillage(class ABP_BaseCharacter_C* NPCReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.RemovePresetsPerVillage");

	struct ABP_NPC_Manager_C_RemovePresetsPerVillage_Params {
		class ABP_BaseCharacter_C* NPCReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_NPC_Manager_C_RemovePresetsPerVillage_Params params;
	params.NPCReference = NPCReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_NPC_Manager.BP_NPC_Manager_C.LoadUsedPresets
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: UsedPresets	Type: TMap<unsigned char, struct Falb_Array_Name>	Flags: BlueprintVisible, BlueprintReadOnly, Parm
/////////////////////////////////////////////
void ABP_NPC_Manager_C::LoadUsedPresets(TMap<unsigned char, struct Falb_Array_Name> UsedPresets) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.LoadUsedPresets");

	struct ABP_NPC_Manager_C_LoadUsedPresets_Params {
		TMap<unsigned char, struct Falb_Array_Name> UsedPresets;			//Offset: 0 | ElementSize: 80
	};
	ABP_NPC_Manager_C_LoadUsedPresets_Params params;
	params.UsedPresets = UsedPresets;

	UObject::ProcessEvent(fn, &params);
}

#pragma endregion
}