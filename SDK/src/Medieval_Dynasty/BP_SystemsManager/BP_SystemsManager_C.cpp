#include "../SDK.h"
#include "BP_SystemsManager_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame ABP_SystemsManager_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 544);
}
struct FPointerToUberGraphFrame* ABP_SystemsManager_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 544);
}
void ABP_SystemsManager_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 544, value);
}
// Member Getter and Setter of DefaultSceneRoot
// Declaration: class USceneComponent* DefaultSceneRoot
class USceneComponent* ABP_SystemsManager_C::M_GetDefaultSceneRoot() const {
	return Read<class USceneComponent*>((byte*)this + 552);
}
class USceneComponent** ABP_SystemsManager_C::M_PtrGetDefaultSceneRoot() {
	return reinterpret_cast<class USceneComponent**>((byte*)this + 552);
}
void ABP_SystemsManager_C::M_SetDefaultSceneRoot(const class USceneComponent*& value) {
	Write((byte*)this + 552, value);
}
// Member Getter and Setter of WeatherSystemReference
// Declaration: class ABP_MasterManager_C* WeatherSystemReference
class ABP_MasterManager_C* ABP_SystemsManager_C::M_GetWeatherSystemReference() const {
	return Read<class ABP_MasterManager_C*>((byte*)this + 560);
}
class ABP_MasterManager_C** ABP_SystemsManager_C::M_PtrGetWeatherSystemReference() {
	return reinterpret_cast<class ABP_MasterManager_C**>((byte*)this + 560);
}
void ABP_SystemsManager_C::M_SetWeatherSystemReference(const class ABP_MasterManager_C*& value) {
	Write((byte*)this + 560, value);
}
// Member Getter and Setter of DataManagerReference
// Declaration: class ABP_DataManager_C* DataManagerReference
class ABP_DataManager_C* ABP_SystemsManager_C::M_GetDataManagerReference() const {
	return Read<class ABP_DataManager_C*>((byte*)this + 568);
}
class ABP_DataManager_C** ABP_SystemsManager_C::M_PtrGetDataManagerReference() {
	return reinterpret_cast<class ABP_DataManager_C**>((byte*)this + 568);
}
void ABP_SystemsManager_C::M_SetDataManagerReference(const class ABP_DataManager_C*& value) {
	Write((byte*)this + 568, value);
}
// Member Getter and Setter of AnimalsManagerReference
// Declaration: class ABP_AnimalsManager_C* AnimalsManagerReference
class ABP_AnimalsManager_C* ABP_SystemsManager_C::M_GetAnimalsManagerReference() const {
	return Read<class ABP_AnimalsManager_C*>((byte*)this + 576);
}
class ABP_AnimalsManager_C** ABP_SystemsManager_C::M_PtrGetAnimalsManagerReference() {
	return reinterpret_cast<class ABP_AnimalsManager_C**>((byte*)this + 576);
}
void ABP_SystemsManager_C::M_SetAnimalsManagerReference(const class ABP_AnimalsManager_C*& value) {
	Write((byte*)this + 576, value);
}
// Member Getter and Setter of LandscapeResourcesManagerReference
// Declaration: class ABP_LandscapeManager_C* LandscapeResourcesManagerReference
class ABP_LandscapeManager_C* ABP_SystemsManager_C::M_GetLandscapeResourcesManagerReference() const {
	return Read<class ABP_LandscapeManager_C*>((byte*)this + 584);
}
class ABP_LandscapeManager_C** ABP_SystemsManager_C::M_PtrGetLandscapeResourcesManagerReference() {
	return reinterpret_cast<class ABP_LandscapeManager_C**>((byte*)this + 584);
}
void ABP_SystemsManager_C::M_SetLandscapeResourcesManagerReference(const class ABP_LandscapeManager_C*& value) {
	Write((byte*)this + 584, value);
}
// Member Getter and Setter of PlayerManagerReference
// Declaration: class ABP_PlayerManager_C* PlayerManagerReference
class ABP_PlayerManager_C* ABP_SystemsManager_C::M_GetPlayerManagerReference() const {
	return Read<class ABP_PlayerManager_C*>((byte*)this + 592);
}
class ABP_PlayerManager_C** ABP_SystemsManager_C::M_PtrGetPlayerManagerReference() {
	return reinterpret_cast<class ABP_PlayerManager_C**>((byte*)this + 592);
}
void ABP_SystemsManager_C::M_SetPlayerManagerReference(const class ABP_PlayerManager_C*& value) {
	Write((byte*)this + 592, value);
}
// Member Getter and Setter of QuestManagerReference
// Declaration: class ABP_QuestManager_C* QuestManagerReference
class ABP_QuestManager_C* ABP_SystemsManager_C::M_GetQuestManagerReference() const {
	return Read<class ABP_QuestManager_C*>((byte*)this + 600);
}
class ABP_QuestManager_C** ABP_SystemsManager_C::M_PtrGetQuestManagerReference() {
	return reinterpret_cast<class ABP_QuestManager_C**>((byte*)this + 600);
}
void ABP_SystemsManager_C::M_SetQuestManagerReference(const class ABP_QuestManager_C*& value) {
	Write((byte*)this + 600, value);
}
// Member Getter and Setter of PostProcessManagerReference
// Declaration: class ABP_Chameleon_C* PostProcessManagerReference
class ABP_Chameleon_C* ABP_SystemsManager_C::M_GetPostProcessManagerReference() const {
	return Read<class ABP_Chameleon_C*>((byte*)this + 608);
}
class ABP_Chameleon_C** ABP_SystemsManager_C::M_PtrGetPostProcessManagerReference() {
	return reinterpret_cast<class ABP_Chameleon_C**>((byte*)this + 608);
}
void ABP_SystemsManager_C::M_SetPostProcessManagerReference(const class ABP_Chameleon_C*& value) {
	Write((byte*)this + 608, value);
}
// Member Getter and Setter of MarkerManagerReference
// Declaration: class ABP_MarkerManager_C* MarkerManagerReference
class ABP_MarkerManager_C* ABP_SystemsManager_C::M_GetMarkerManagerReference() const {
	return Read<class ABP_MarkerManager_C*>((byte*)this + 616);
}
class ABP_MarkerManager_C** ABP_SystemsManager_C::M_PtrGetMarkerManagerReference() {
	return reinterpret_cast<class ABP_MarkerManager_C**>((byte*)this + 616);
}
void ABP_SystemsManager_C::M_SetMarkerManagerReference(const class ABP_MarkerManager_C*& value) {
	Write((byte*)this + 616, value);
}
// Member Getter and Setter of TimeManagerReference
// Declaration: class ABP_TimeManager_C* TimeManagerReference
class ABP_TimeManager_C* ABP_SystemsManager_C::M_GetTimeManagerReference() const {
	return Read<class ABP_TimeManager_C*>((byte*)this + 624);
}
class ABP_TimeManager_C** ABP_SystemsManager_C::M_PtrGetTimeManagerReference() {
	return reinterpret_cast<class ABP_TimeManager_C**>((byte*)this + 624);
}
void ABP_SystemsManager_C::M_SetTimeManagerReference(const class ABP_TimeManager_C*& value) {
	Write((byte*)this + 624, value);
}
// Member Getter and Setter of KingdomManagerReference
// Declaration: class ABP_KingdomManager_C* KingdomManagerReference
class ABP_KingdomManager_C* ABP_SystemsManager_C::M_GetKingdomManagerReference() const {
	return Read<class ABP_KingdomManager_C*>((byte*)this + 632);
}
class ABP_KingdomManager_C** ABP_SystemsManager_C::M_PtrGetKingdomManagerReference() {
	return reinterpret_cast<class ABP_KingdomManager_C**>((byte*)this + 632);
}
void ABP_SystemsManager_C::M_SetKingdomManagerReference(const class ABP_KingdomManager_C*& value) {
	Write((byte*)this + 632, value);
}
// Member Getter and Setter of VillageManagerReference
// Declaration: class ABP_VillageManager_C* VillageManagerReference
class ABP_VillageManager_C* ABP_SystemsManager_C::M_GetVillageManagerReference() const {
	return Read<class ABP_VillageManager_C*>((byte*)this + 640);
}
class ABP_VillageManager_C** ABP_SystemsManager_C::M_PtrGetVillageManagerReference() {
	return reinterpret_cast<class ABP_VillageManager_C**>((byte*)this + 640);
}
void ABP_SystemsManager_C::M_SetVillageManagerReference(const class ABP_VillageManager_C*& value) {
	Write((byte*)this + 640, value);
}
// Member Getter and Setter of NPCManagerReference
// Declaration: class ABP_NPC_Manager_C* NPCManagerReference
class ABP_NPC_Manager_C* ABP_SystemsManager_C::M_GetNPCManagerReference() const {
	return Read<class ABP_NPC_Manager_C*>((byte*)this + 648);
}
class ABP_NPC_Manager_C** ABP_SystemsManager_C::M_PtrGetNPCManagerReference() {
	return reinterpret_cast<class ABP_NPC_Manager_C**>((byte*)this + 648);
}
void ABP_SystemsManager_C::M_SetNPCManagerReference(const class ABP_NPC_Manager_C*& value) {
	Write((byte*)this + 648, value);
}
// Member Getter and Setter of AudioManagerReference
// Declaration: class ABP_MasterManager_C* AudioManagerReference
class ABP_MasterManager_C* ABP_SystemsManager_C::M_GetAudioManagerReference() const {
	return Read<class ABP_MasterManager_C*>((byte*)this + 656);
}
class ABP_MasterManager_C** ABP_SystemsManager_C::M_PtrGetAudioManagerReference() {
	return reinterpret_cast<class ABP_MasterManager_C**>((byte*)this + 656);
}
void ABP_SystemsManager_C::M_SetAudioManagerReference(const class ABP_MasterManager_C*& value) {
	Write((byte*)this + 656, value);
}
// Member Getter and Setter of EventManagerReference
// Declaration: class ABP_EventManager_C* EventManagerReference
class ABP_EventManager_C* ABP_SystemsManager_C::M_GetEventManagerReference() const {
	return Read<class ABP_EventManager_C*>((byte*)this + 664);
}
class ABP_EventManager_C** ABP_SystemsManager_C::M_PtrGetEventManagerReference() {
	return reinterpret_cast<class ABP_EventManager_C**>((byte*)this + 664);
}
void ABP_SystemsManager_C::M_SetEventManagerReference(const class ABP_EventManager_C*& value) {
	Write((byte*)this + 664, value);
}
// Member Getter and Setter of GameModeReference
// Declaration: class AGM_MedievalDynasty_C* GameModeReference
class AGM_MedievalDynasty_C* ABP_SystemsManager_C::M_GetGameModeReference() const {
	return Read<class AGM_MedievalDynasty_C*>((byte*)this + 672);
}
class AGM_MedievalDynasty_C** ABP_SystemsManager_C::M_PtrGetGameModeReference() {
	return reinterpret_cast<class AGM_MedievalDynasty_C**>((byte*)this + 672);
}
void ABP_SystemsManager_C::M_SetGameModeReference(const class AGM_MedievalDynasty_C*& value) {
	Write((byte*)this + 672, value);
}
// Member Getter and Setter of POI_ManagerReference
// Declaration: class ABP_POI_Manager_C* POI_ManagerReference
class ABP_POI_Manager_C* ABP_SystemsManager_C::M_GetPOI_ManagerReference() const {
	return Read<class ABP_POI_Manager_C*>((byte*)this + 680);
}
class ABP_POI_Manager_C** ABP_SystemsManager_C::M_PtrGetPOI_ManagerReference() {
	return reinterpret_cast<class ABP_POI_Manager_C**>((byte*)this + 680);
}
void ABP_SystemsManager_C::M_SetPOI_ManagerReference(const class ABP_POI_Manager_C*& value) {
	Write((byte*)this + 680, value);
}
// Member Getter and Setter of RoadsManagerReference
// Declaration: class ABP_MasterManager_C* RoadsManagerReference
class ABP_MasterManager_C* ABP_SystemsManager_C::M_GetRoadsManagerReference() const {
	return Read<class ABP_MasterManager_C*>((byte*)this + 688);
}
class ABP_MasterManager_C** ABP_SystemsManager_C::M_PtrGetRoadsManagerReference() {
	return reinterpret_cast<class ABP_MasterManager_C**>((byte*)this + 688);
}
void ABP_SystemsManager_C::M_SetRoadsManagerReference(const class ABP_MasterManager_C*& value) {
	Write((byte*)this + 688, value);
}
// Member Getter and Setter of GameplayEventsManagerReference
// Declaration: class ABP_GameplayEventsManager_C* GameplayEventsManagerReference
class ABP_GameplayEventsManager_C* ABP_SystemsManager_C::M_GetGameplayEventsManagerReference() const {
	return Read<class ABP_GameplayEventsManager_C*>((byte*)this + 696);
}
class ABP_GameplayEventsManager_C** ABP_SystemsManager_C::M_PtrGetGameplayEventsManagerReference() {
	return reinterpret_cast<class ABP_GameplayEventsManager_C**>((byte*)this + 696);
}
void ABP_SystemsManager_C::M_SetGameplayEventsManagerReference(const class ABP_GameplayEventsManager_C*& value) {
	Write((byte*)this + 696, value);
}
// Member Getter and Setter of ChromaManagerReference
// Declaration: class ABP_ChromaManager_C* ChromaManagerReference
class ABP_ChromaManager_C* ABP_SystemsManager_C::M_GetChromaManagerReference() const {
	return Read<class ABP_ChromaManager_C*>((byte*)this + 704);
}
class ABP_ChromaManager_C** ABP_SystemsManager_C::M_PtrGetChromaManagerReference() {
	return reinterpret_cast<class ABP_ChromaManager_C**>((byte*)this + 704);
}
void ABP_SystemsManager_C::M_SetChromaManagerReference(const class ABP_ChromaManager_C*& value) {
	Write((byte*)this + 704, value);
}
// Member Getter and Setter of GameStateReference
// Declaration: class AGS_GameState_C* GameStateReference
class AGS_GameState_C* ABP_SystemsManager_C::M_GetGameStateReference() const {
	return Read<class AGS_GameState_C*>((byte*)this + 712);
}
class AGS_GameState_C** ABP_SystemsManager_C::M_PtrGetGameStateReference() {
	return reinterpret_cast<class AGS_GameState_C**>((byte*)this + 712);
}
void ABP_SystemsManager_C::M_SetGameStateReference(const class AGS_GameState_C*& value) {
	Write((byte*)this + 712, value);
}
// Member Getter and Setter of DialogueEventsManagerReference
// Declaration: class ADialogueEventManager* DialogueEventsManagerReference
class ADialogueEventManager* ABP_SystemsManager_C::M_GetDialogueEventsManagerReference() const {
	return Read<class ADialogueEventManager*>((byte*)this + 720);
}
class ADialogueEventManager** ABP_SystemsManager_C::M_PtrGetDialogueEventsManagerReference() {
	return reinterpret_cast<class ADialogueEventManager**>((byte*)this + 720);
}
void ABP_SystemsManager_C::M_SetDialogueEventsManagerReference(const class ADialogueEventManager*& value) {
	Write((byte*)this + 720, value);
}
// Member Getter and Setter of EconomyManagerReference
// Declaration: class ABP_EconomyManager_C* EconomyManagerReference
class ABP_EconomyManager_C* ABP_SystemsManager_C::M_GetEconomyManagerReference() const {
	return Read<class ABP_EconomyManager_C*>((byte*)this + 728);
}
class ABP_EconomyManager_C** ABP_SystemsManager_C::M_PtrGetEconomyManagerReference() {
	return reinterpret_cast<class ABP_EconomyManager_C**>((byte*)this + 728);
}
void ABP_SystemsManager_C::M_SetEconomyManagerReference(const class ABP_EconomyManager_C*& value) {
	Write((byte*)this + 728, value);
}
// Member Getter and Setter of VillageJournalManagerReference
// Declaration: class ABP_VillageJournalManager_C* VillageJournalManagerReference
class ABP_VillageJournalManager_C* ABP_SystemsManager_C::M_GetVillageJournalManagerReference() const {
	return Read<class ABP_VillageJournalManager_C*>((byte*)this + 736);
}
class ABP_VillageJournalManager_C** ABP_SystemsManager_C::M_PtrGetVillageJournalManagerReference() {
	return reinterpret_cast<class ABP_VillageJournalManager_C**>((byte*)this + 736);
}
void ABP_SystemsManager_C::M_SetVillageJournalManagerReference(const class ABP_VillageJournalManager_C*& value) {
	Write((byte*)this + 736, value);
}
// Member Getter and Setter of CrestManagerReference
// Declaration: class ABP_CrestManager_C* CrestManagerReference
class ABP_CrestManager_C* ABP_SystemsManager_C::M_GetCrestManagerReference() const {
	return Read<class ABP_CrestManager_C*>((byte*)this + 744);
}
class ABP_CrestManager_C** ABP_SystemsManager_C::M_PtrGetCrestManagerReference() {
	return reinterpret_cast<class ABP_CrestManager_C**>((byte*)this + 744);
}
void ABP_SystemsManager_C::M_SetCrestManagerReference(const class ABP_CrestManager_C*& value) {
	Write((byte*)this + 744, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BP_SystemsManager.BP_SystemsManager_C.ExecuteUbergraph_BP_SystemsManager
// Flags: Final
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_SystemsManager_C::ExecuteUbergraph_BP_SystemsManager(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemsManager.BP_SystemsManager_C.ExecuteUbergraph_BP_SystemsManager");

	struct ABP_SystemsManager_C_ExecuteUbergraph_BP_SystemsManager_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	ABP_SystemsManager_C_ExecuteUbergraph_BP_SystemsManager_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_SystemsManager.BP_SystemsManager_C.ReceiveBeginPlay
// Flags: Event, Protected, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_SystemsManager_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemsManager.BP_SystemsManager_C.ReceiveBeginPlay");

	struct ABP_SystemsManager_C_ReceiveBeginPlay_Params {
	};
	ABP_SystemsManager_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_SystemsManager.BP_SystemsManager_C.InitSystems
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_SystemsManager_C::InitSystems() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemsManager.BP_SystemsManager_C.InitSystems");

	struct ABP_SystemsManager_C_InitSystems_Params {
	};
	ABP_SystemsManager_C_InitSystems_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_SystemsManager.BP_SystemsManager_C.InitSystemsForCinematic
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_SystemsManager_C::InitSystemsForCinematic() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemsManager.BP_SystemsManager_C.InitSystemsForCinematic");

	struct ABP_SystemsManager_C_InitSystemsForCinematic_Params {
	};
	ABP_SystemsManager_C_InitSystemsForCinematic_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_SystemsManager.BP_SystemsManager_C.InitPlayer
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: load	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_SystemsManager_C::InitPlayer(bool load) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemsManager.BP_SystemsManager_C.InitPlayer");

	struct ABP_SystemsManager_C_InitPlayer_Params {
		bool load;			//Offset: 0 | ElementSize: 1
	};
	ABP_SystemsManager_C_InitPlayer_Params params;
	params.load = load;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_SystemsManager.BP_SystemsManager_C.StartSystems
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: LoadGame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: MainMenu	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_SystemsManager_C::StartSystems(bool LoadGame, bool MainMenu) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemsManager.BP_SystemsManager_C.StartSystems");

	struct ABP_SystemsManager_C_StartSystems_Params {
		bool LoadGame;			//Offset: 0 | ElementSize: 1
		bool MainMenu;			//Offset: 1 | ElementSize: 1
	};
	ABP_SystemsManager_C_StartSystems_Params params;
	params.LoadGame = LoadGame;
	params.MainMenu = MainMenu;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_SystemsManager.BP_SystemsManager_C.SaveSystems
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_SystemsManager_C::SaveSystems(class USAVE_Game_C* SaveReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemsManager.BP_SystemsManager_C.SaveSystems");

	struct ABP_SystemsManager_C_SaveSystems_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_SystemsManager_C_SaveSystems_Params params;
	params.SaveReference = SaveReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_SystemsManager.BP_SystemsManager_C.StopSystems
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_SystemsManager_C::StopSystems() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemsManager.BP_SystemsManager_C.StopSystems");

	struct ABP_SystemsManager_C_StopSystems_Params {
	};
	ABP_SystemsManager_C_StopSystems_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_SystemsManager.BP_SystemsManager_C.StartSystemsForCinematic
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_SystemsManager_C::StartSystemsForCinematic() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemsManager.BP_SystemsManager_C.StartSystemsForCinematic");

	struct ABP_SystemsManager_C_StartSystemsForCinematic_Params {
	};
	ABP_SystemsManager_C_StartSystemsForCinematic_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_SystemsManager.BP_SystemsManager_C.InitThreadTasks
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_SystemsManager_C::InitThreadTasks() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemsManager.BP_SystemsManager_C.InitThreadTasks");

	struct ABP_SystemsManager_C_InitThreadTasks_Params {
	};
	ABP_SystemsManager_C_InitThreadTasks_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_SystemsManager.BP_SystemsManager_C.OnRep_TimeManagerReference
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_SystemsManager_C::OnRep_TimeManagerReference() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_SystemsManager.BP_SystemsManager_C.OnRep_TimeManagerReference");

	struct ABP_SystemsManager_C_OnRep_TimeManagerReference_Params {
	};
	ABP_SystemsManager_C_OnRep_TimeManagerReference_Params params;

	UObject::ProcessEvent(fn, &params);
}

#pragma endregion
}