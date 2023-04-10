#include "../SDK.h"
#include "BP_EventManager_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame ABP_EventManager_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 544);
}
struct FPointerToUberGraphFrame* ABP_EventManager_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 544);
}
void ABP_EventManager_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 544, value);
}
// Member Getter and Setter of DefaultSceneRoot
// Declaration: class USceneComponent* DefaultSceneRoot
class USceneComponent* ABP_EventManager_C::M_GetDefaultSceneRoot() const {
	return Read<class USceneComponent*>((byte*)this + 552);
}
class USceneComponent** ABP_EventManager_C::M_PtrGetDefaultSceneRoot() {
	return reinterpret_cast<class USceneComponent**>((byte*)this + 552);
}
void ABP_EventManager_C::M_SetDefaultSceneRoot(const class USceneComponent*& value) {
	Write((byte*)this + 552, value);
}
// Member Getter and Setter of SystemsManagerReference
// Declaration: class ABP_SystemsManager_C* SystemsManagerReference
class ABP_SystemsManager_C* ABP_EventManager_C::M_GetSystemsManagerReference() const {
	return Read<class ABP_SystemsManager_C*>((byte*)this + 560);
}
class ABP_SystemsManager_C** ABP_EventManager_C::M_PtrGetSystemsManagerReference() {
	return reinterpret_cast<class ABP_SystemsManager_C**>((byte*)this + 560);
}
void ABP_EventManager_C::M_SetSystemsManagerReference(const class ABP_SystemsManager_C*& value) {
	Write((byte*)this + 560, value);
}
// Member Getter and Setter of EventQueue
// Declaration: TArray<struct FDataTableRowHandle> EventQueue
TArray<struct FDataTableRowHandle> ABP_EventManager_C::M_GetEventQueue() const {
	return Read<TArray<struct FDataTableRowHandle>>((byte*)this + 568);
}
TArray<struct FDataTableRowHandle>* ABP_EventManager_C::M_PtrGetEventQueue() {
	return reinterpret_cast<TArray<struct FDataTableRowHandle>*>((byte*)this + 568);
}
void ABP_EventManager_C::M_SetEventQueue(const TArray<struct FDataTableRowHandle>& value) {
	Write((byte*)this + 568, value);
}
// Member Getter and Setter of LastEvents
// Declaration: TArray<struct FName> LastEvents
TArray<struct FName> ABP_EventManager_C::M_GetLastEvents() const {
	return Read<TArray<struct FName>>((byte*)this + 584);
}
TArray<struct FName>* ABP_EventManager_C::M_PtrGetLastEvents() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 584);
}
void ABP_EventManager_C::M_SetLastEvents(const TArray<struct FName>& value) {
	Write((byte*)this + 584, value);
}
// Member Getter and Setter of IsEventForThisSeason
// Declaration: bool IsEventForThisSeason
bool ABP_EventManager_C::M_GetIsEventForThisSeason() const {
	return Read<bool>((byte*)this + 600);
}
bool* ABP_EventManager_C::M_PtrGetIsEventForThisSeason() {
	return reinterpret_cast<bool*>((byte*)this + 600);
}
void ABP_EventManager_C::M_SetIsEventForThisSeason(const bool& value) {
	Write((byte*)this + 600, value);
}
// Member Getter and Setter of EventNumber
// Declaration: int32_t EventNumber
int32_t ABP_EventManager_C::M_GetEventNumber() const {
	return Read<int32_t>((byte*)this + 604);
}
int32_t* ABP_EventManager_C::M_PtrGetEventNumber() {
	return reinterpret_cast<int32_t*>((byte*)this + 604);
}
void ABP_EventManager_C::M_SetEventNumber(const int32_t& value) {
	Write((byte*)this + 604, value);
}
// Member Getter and Setter of EventHappenChance
// Declaration: float EventHappenChance
float ABP_EventManager_C::M_GetEventHappenChance() const {
	return Read<float>((byte*)this + 608);
}
float* ABP_EventManager_C::M_PtrGetEventHappenChance() {
	return reinterpret_cast<float*>((byte*)this + 608);
}
void ABP_EventManager_C::M_SetEventHappenChance(const float& value) {
	Write((byte*)this + 608, value);
}
// Member Getter and Setter of EventsHistory
// Declaration: TArray<struct FST_EventHistory_Main> EventsHistory
TArray<struct FST_EventHistory_Main> ABP_EventManager_C::M_GetEventsHistory() const {
	return Read<TArray<struct FST_EventHistory_Main>>((byte*)this + 616);
}
TArray<struct FST_EventHistory_Main>* ABP_EventManager_C::M_PtrGetEventsHistory() {
	return reinterpret_cast<TArray<struct FST_EventHistory_Main>*>((byte*)this + 616);
}
void ABP_EventManager_C::M_SetEventsHistory(const TArray<struct FST_EventHistory_Main>& value) {
	Write((byte*)this + 616, value);
}
// Member Getter and Setter of SpecyficNPCs
// Declaration: TArray<class ABP_NPC_C*> SpecyficNPCs
TArray<class ABP_NPC_C*> ABP_EventManager_C::M_GetSpecyficNPCs() const {
	return Read<TArray<class ABP_NPC_C*>>((byte*)this + 632);
}
TArray<class ABP_NPC_C*>* ABP_EventManager_C::M_PtrGetSpecyficNPCs() {
	return reinterpret_cast<TArray<class ABP_NPC_C*>*>((byte*)this + 632);
}
void ABP_EventManager_C::M_SetSpecyficNPCs(const TArray<class ABP_NPC_C*>& value) {
	Write((byte*)this + 632, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.ExecuteUbergraph_BP_EventManager
// Flags: Final
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_EventManager_C::ExecuteUbergraph_BP_EventManager(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.ExecuteUbergraph_BP_EventManager");

	struct ABP_EventManager_C_ExecuteUbergraph_BP_EventManager_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	ABP_EventManager_C_ExecuteUbergraph_BP_EventManager_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.Init
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: MainMenu	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_EventManager_C::Init(bool MainMenu) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.Init");

	struct ABP_EventManager_C_Init_Params {
		bool MainMenu;			//Offset: 0 | ElementSize: 1
	};
	ABP_EventManager_C_Init_Params params;
	params.MainMenu = MainMenu;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.OnSeasonChanged
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_EventManager_C::OnSeasonChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.OnSeasonChanged");

	struct ABP_EventManager_C_OnSeasonChanged_Params {
	};
	ABP_EventManager_C_OnSeasonChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.StartEventSystem
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: LoadGame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: MainMenu	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_EventManager_C::StartEventSystem(bool LoadGame, bool MainMenu) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.StartEventSystem");

	struct ABP_EventManager_C_StartEventSystem_Params {
		bool LoadGame;			//Offset: 0 | ElementSize: 1
		bool MainMenu;			//Offset: 1 | ElementSize: 1
	};
	ABP_EventManager_C_StartEventSystem_Params params;
	params.LoadGame = LoadGame;
	params.MainMenu = MainMenu;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.AssignEventOnSeasonChange
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_EventManager_C::AssignEventOnSeasonChange() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.AssignEventOnSeasonChange");

	struct ABP_EventManager_C_AssignEventOnSeasonChange_Params {
	};
	ABP_EventManager_C_AssignEventOnSeasonChange_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.CheckEventsAvilable
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CanStart	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_EventManager_C::CheckEventsAvilable(bool* CanStart) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.CheckEventsAvilable");

	struct ABP_EventManager_C_CheckEventsAvilable_Params {
		bool CanStart;			//Offset: 0 | ElementSize: 1
	};
	ABP_EventManager_C_CheckEventsAvilable_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CanStart != nullptr)
		*CanStart = params.CanStart;
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.CheckEventCanFire
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Event	Type: struct FST_SeasonEvent	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash
// Name: CanHappen	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_EventManager_C::CheckEventCanFire(struct FST_SeasonEvent Event, bool* CanHappen) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.CheckEventCanFire");

	struct ABP_EventManager_C_CheckEventCanFire_Params {
		struct FST_SeasonEvent Event;			//Offset: 0 | ElementSize: 128
		bool CanHappen;			//Offset: 128 | ElementSize: 1
	};
	ABP_EventManager_C_CheckEventCanFire_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
	if (CanHappen != nullptr)
		*CanHappen = params.CanHappen;
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.RestrictionAnimals
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Restriction	Type: struct FST_EventRestrictions	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash
// Name: CanHappen	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_EventManager_C::RestrictionAnimals(struct FST_EventRestrictions Restriction, bool* CanHappen) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.RestrictionAnimals");

	struct ABP_EventManager_C_RestrictionAnimals_Params {
		struct FST_EventRestrictions Restriction;			//Offset: 0 | ElementSize: 432
		bool CanHappen;			//Offset: 432 | ElementSize: 1
	};
	ABP_EventManager_C_RestrictionAnimals_Params params;
	params.Restriction = Restriction;

	UObject::ProcessEvent(fn, &params);
	if (CanHappen != nullptr)
		*CanHappen = params.CanHappen;
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.RestrictionNPC
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Restriction	Type: struct FST_EventRestrictions	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash
// Name: CanHappen	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_EventManager_C::RestrictionNPC(struct FST_EventRestrictions Restriction, bool* CanHappen) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.RestrictionNPC");

	struct ABP_EventManager_C_RestrictionNPC_Params {
		struct FST_EventRestrictions Restriction;			//Offset: 0 | ElementSize: 432
		bool CanHappen;			//Offset: 432 | ElementSize: 1
	};
	ABP_EventManager_C_RestrictionNPC_Params params;
	params.Restriction = Restriction;

	UObject::ProcessEvent(fn, &params);
	if (CanHappen != nullptr)
		*CanHappen = params.CanHappen;
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.RestrictionBuildings
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Restriction	Type: struct FST_EventRestrictions	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash
// Name: CanHappen	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_EventManager_C::RestrictionBuildings(struct FST_EventRestrictions Restriction, bool* CanHappen) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.RestrictionBuildings");

	struct ABP_EventManager_C_RestrictionBuildings_Params {
		struct FST_EventRestrictions Restriction;			//Offset: 0 | ElementSize: 432
		bool CanHappen;			//Offset: 432 | ElementSize: 1
	};
	ABP_EventManager_C_RestrictionBuildings_Params params;
	params.Restriction = Restriction;

	UObject::ProcessEvent(fn, &params);
	if (CanHappen != nullptr)
		*CanHappen = params.CanHappen;
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.RestrictionFields
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Restriction	Type: struct FST_EventRestrictions	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash
// Name: CanHappen	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_EventManager_C::RestrictionFields(struct FST_EventRestrictions Restriction, bool* CanHappen) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.RestrictionFields");

	struct ABP_EventManager_C_RestrictionFields_Params {
		struct FST_EventRestrictions Restriction;			//Offset: 0 | ElementSize: 432
		bool CanHappen;			//Offset: 432 | ElementSize: 1
	};
	ABP_EventManager_C_RestrictionFields_Params params;
	params.Restriction = Restriction;

	UObject::ProcessEvent(fn, &params);
	if (CanHappen != nullptr)
		*CanHappen = params.CanHappen;
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.RestrictionSeason
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Restriction	Type: struct FST_EventRestrictions	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash
// Name: CanHappen	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_EventManager_C::RestrictionSeason(struct FST_EventRestrictions Restriction, bool* CanHappen) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.RestrictionSeason");

	struct ABP_EventManager_C_RestrictionSeason_Params {
		struct FST_EventRestrictions Restriction;			//Offset: 0 | ElementSize: 432
		bool CanHappen;			//Offset: 432 | ElementSize: 1
	};
	ABP_EventManager_C_RestrictionSeason_Params params;
	params.Restriction = Restriction;

	UObject::ProcessEvent(fn, &params);
	if (CanHappen != nullptr)
		*CanHappen = params.CanHappen;
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.RestrictionPlayer
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Restriction	Type: struct FST_EventRestrictions	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash
// Name: CanHappen	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_EventManager_C::RestrictionPlayer(struct FST_EventRestrictions Restriction, bool* CanHappen) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.RestrictionPlayer");

	struct ABP_EventManager_C_RestrictionPlayer_Params {
		struct FST_EventRestrictions Restriction;			//Offset: 0 | ElementSize: 432
		bool CanHappen;			//Offset: 432 | ElementSize: 1
	};
	ABP_EventManager_C_RestrictionPlayer_Params params;
	params.Restriction = Restriction;

	UObject::ProcessEvent(fn, &params);
	if (CanHappen != nullptr)
		*CanHappen = params.CanHappen;
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.ExecuteEventEffect
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ButtonIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Event	Type: struct FST_SeasonEvent	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash
// Name: Description	Type: struct FText	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_EventManager_C::ExecuteEventEffect(int32_t ButtonIndex, const struct FST_SeasonEvent& Event, struct FText* Description) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.ExecuteEventEffect");

	struct ABP_EventManager_C_ExecuteEventEffect_Params {
		int32_t ButtonIndex;			//Offset: 0 | ElementSize: 4
		struct FST_SeasonEvent Event;			//Offset: 8 | ElementSize: 128
		struct FText Description;			//Offset: 136 | ElementSize: 24
	};
	ABP_EventManager_C_ExecuteEventEffect_Params params;
	params.ButtonIndex = ButtonIndex;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
	if (Description != nullptr)
		*Description = params.Description;
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.RestrictionTime
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Restriction	Type: struct FST_EventRestrictions	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash
// Name: CanHappen	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_EventManager_C::RestrictionTime(struct FST_EventRestrictions Restriction, bool* CanHappen) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.RestrictionTime");

	struct ABP_EventManager_C_RestrictionTime_Params {
		struct FST_EventRestrictions Restriction;			//Offset: 0 | ElementSize: 432
		bool CanHappen;			//Offset: 432 | ElementSize: 1
	};
	ABP_EventManager_C_RestrictionTime_Params params;
	params.Restriction = Restriction;

	UObject::ProcessEvent(fn, &params);
	if (CanHappen != nullptr)
		*CanHappen = params.CanHappen;
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.FireEventCheat
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: EventName	Type: struct FName	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_EventManager_C::FireEventCheat(const struct FName& EventName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.FireEventCheat");

	struct ABP_EventManager_C_FireEventCheat_Params {
		struct FName EventName;			//Offset: 0 | ElementSize: 8
	};
	ABP_EventManager_C_FireEventCheat_Params params;
	params.EventName = EventName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.GetNumberOfBuildBuildings
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: NumberOfBuildBuildings	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_EventManager_C::GetNumberOfBuildBuildings(int32_t* NumberOfBuildBuildings) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.GetNumberOfBuildBuildings");

	struct ABP_EventManager_C_GetNumberOfBuildBuildings_Params {
		int32_t NumberOfBuildBuildings;			//Offset: 0 | ElementSize: 4
	};
	ABP_EventManager_C_GetNumberOfBuildBuildings_Params params;

	UObject::ProcessEvent(fn, &params);
	if (NumberOfBuildBuildings != nullptr)
		*NumberOfBuildBuildings = params.NumberOfBuildBuildings;
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.CheckDifficulty
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Difficulty	Type: TEnumAsByte<E_EventDifficulty>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_EventManager_C::CheckDifficulty(TEnumAsByte<E_EventDifficulty>* Difficulty) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.CheckDifficulty");

	struct ABP_EventManager_C_CheckDifficulty_Params {
		TEnumAsByte<E_EventDifficulty> Difficulty;			//Offset: 0 | ElementSize: 1
	};
	ABP_EventManager_C_CheckDifficulty_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Difficulty != nullptr)
		*Difficulty = params.Difficulty;
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.SaveDataFromSystemToFile
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_EventManager_C::SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.SaveDataFromSystemToFile");

	struct ABP_EventManager_C_SaveDataFromSystemToFile_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_EventManager_C_SaveDataFromSystemToFile_Params params;
	params.SaveReference = SaveReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.LoadSaveFileIntoSystem
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_EventManager_C::LoadSaveFileIntoSystem(class USAVE_Game_C* SaveReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.LoadSaveFileIntoSystem");

	struct ABP_EventManager_C_LoadSaveFileIntoSystem_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_EventManager_C_LoadSaveFileIntoSystem_Params params;
	params.SaveReference = SaveReference;

	UObject::ProcessEvent(fn, &params);
}

#pragma endregion
}