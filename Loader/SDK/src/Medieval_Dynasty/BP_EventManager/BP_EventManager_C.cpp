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
// Member Getter and Setter of ItemFoundIn
// Declaration: TArray<struct FST_ItemsToRemove> ItemFoundIn
TArray<struct FST_ItemsToRemove> ABP_EventManager_C::M_GetItemFoundIn() const {
	return Read<TArray<struct FST_ItemsToRemove>>((byte*)this + 648);
}
TArray<struct FST_ItemsToRemove>* ABP_EventManager_C::M_PtrGetItemFoundIn() {
	return reinterpret_cast<TArray<struct FST_ItemsToRemove>*>((byte*)this + 648);
}
void ABP_EventManager_C::M_SetItemFoundIn(const TArray<struct FST_ItemsToRemove>& value) {
	Write((byte*)this + 648, value);
}
// Member Getter and Setter of VotingPlayers
// Declaration: TArray<struct FE_PlayerVote> VotingPlayers
TArray<struct FE_PlayerVote> ABP_EventManager_C::M_GetVotingPlayers() const {
	return Read<TArray<struct FE_PlayerVote>>((byte*)this + 664);
}
TArray<struct FE_PlayerVote>* ABP_EventManager_C::M_PtrGetVotingPlayers() {
	return reinterpret_cast<TArray<struct FE_PlayerVote>*>((byte*)this + 664);
}
void ABP_EventManager_C::M_SetVotingPlayers(const TArray<struct FE_PlayerVote>& value) {
	Write((byte*)this + 664, value);
}
// Member Getter and Setter of OnPlayerVoted
// Declaration: TAssetPtr<class FOnPlayerVoted__DelegateSignature> OnPlayerVoted
TAssetPtr<class FOnPlayerVoted__DelegateSignature> ABP_EventManager_C::M_GetOnPlayerVoted() const {
	return Read<TAssetPtr<class FOnPlayerVoted__DelegateSignature>>((byte*)this + 680);
}
TAssetPtr<class FOnPlayerVoted__DelegateSignature>* ABP_EventManager_C::M_PtrGetOnPlayerVoted() {
	return reinterpret_cast<TAssetPtr<class FOnPlayerVoted__DelegateSignature>*>((byte*)this + 680);
}
void ABP_EventManager_C::M_SetOnPlayerVoted(const TAssetPtr<class FOnPlayerVoted__DelegateSignature>& value) {
	Write((byte*)this + 680, value);
}
// Member Getter and Setter of RemovePlayerVote
// Declaration: TAssetPtr<class FRemovePlayerVote__DelegateSignature> RemovePlayerVote
TAssetPtr<class FRemovePlayerVote__DelegateSignature> ABP_EventManager_C::M_GetRemovePlayerVote() const {
	return Read<TAssetPtr<class FRemovePlayerVote__DelegateSignature>>((byte*)this + 696);
}
TAssetPtr<class FRemovePlayerVote__DelegateSignature>* ABP_EventManager_C::M_PtrGetRemovePlayerVote() {
	return reinterpret_cast<TAssetPtr<class FRemovePlayerVote__DelegateSignature>*>((byte*)this + 696);
}
void ABP_EventManager_C::M_SetRemovePlayerVote(const TAssetPtr<class FRemovePlayerVote__DelegateSignature>& value) {
	Write((byte*)this + 696, value);
}
// Member Getter and Setter of PlayersMultiplliers
// Declaration: struct FST_Event_PlayerMultipliers PlayersMultiplliers
struct FST_Event_PlayerMultipliers ABP_EventManager_C::M_GetPlayersMultiplliers() const {
	return Read<struct FST_Event_PlayerMultipliers>((byte*)this + 712);
}
struct FST_Event_PlayerMultipliers* ABP_EventManager_C::M_PtrGetPlayersMultiplliers() {
	return reinterpret_cast<struct FST_Event_PlayerMultipliers*>((byte*)this + 712);
}
void ABP_EventManager_C::M_SetPlayersMultiplliers(const struct FST_Event_PlayerMultipliers& value) {
	Write((byte*)this + 712, value);
}
// Member Getter and Setter of OnHostSelectedOption
// Declaration: TAssetPtr<class FOnHostSelectedOption__DelegateSignature> OnHostSelectedOption
TAssetPtr<class FOnHostSelectedOption__DelegateSignature> ABP_EventManager_C::M_GetOnHostSelectedOption() const {
	return Read<TAssetPtr<class FOnHostSelectedOption__DelegateSignature>>((byte*)this + 728);
}
TAssetPtr<class FOnHostSelectedOption__DelegateSignature>* ABP_EventManager_C::M_PtrGetOnHostSelectedOption() {
	return reinterpret_cast<TAssetPtr<class FOnHostSelectedOption__DelegateSignature>*>((byte*)this + 728);
}
void ABP_EventManager_C::M_SetOnHostSelectedOption(const TAssetPtr<class FOnHostSelectedOption__DelegateSignature>& value) {
	Write((byte*)this + 728, value);
}
// Member Getter and Setter of OnPlayerMultipliersChanged
// Declaration: TAssetPtr<class FOnPlayerMultipliersChanged__DelegateSignature> OnPlayerMultipliersChanged
TAssetPtr<class FOnPlayerMultipliersChanged__DelegateSignature> ABP_EventManager_C::M_GetOnPlayerMultipliersChanged() const {
	return Read<TAssetPtr<class FOnPlayerMultipliersChanged__DelegateSignature>>((byte*)this + 744);
}
TAssetPtr<class FOnPlayerMultipliersChanged__DelegateSignature>* ABP_EventManager_C::M_PtrGetOnPlayerMultipliersChanged() {
	return reinterpret_cast<TAssetPtr<class FOnPlayerMultipliersChanged__DelegateSignature>*>((byte*)this + 744);
}
void ABP_EventManager_C::M_SetOnPlayerMultipliersChanged(const TAssetPtr<class FOnPlayerMultipliersChanged__DelegateSignature>& value) {
	Write((byte*)this + 744, value);
}
// Member Getter and Setter of SelectedEventButtonIndex
// Declaration: int32_t SelectedEventButtonIndex
int32_t ABP_EventManager_C::M_GetSelectedEventButtonIndex() const {
	return Read<int32_t>((byte*)this + 760);
}
int32_t* ABP_EventManager_C::M_PtrGetSelectedEventButtonIndex() {
	return reinterpret_cast<int32_t*>((byte*)this + 760);
}
void ABP_EventManager_C::M_SetSelectedEventButtonIndex(const int32_t& value) {
	Write((byte*)this + 760, value);
}
// Member Getter and Setter of WindowCanBeClosed
// Declaration: TAssetPtr<class FWindowCanBeClosed__DelegateSignature> WindowCanBeClosed
TAssetPtr<class FWindowCanBeClosed__DelegateSignature> ABP_EventManager_C::M_GetWindowCanBeClosed() const {
	return Read<TAssetPtr<class FWindowCanBeClosed__DelegateSignature>>((byte*)this + 768);
}
TAssetPtr<class FWindowCanBeClosed__DelegateSignature>* ABP_EventManager_C::M_PtrGetWindowCanBeClosed() {
	return reinterpret_cast<TAssetPtr<class FWindowCanBeClosed__DelegateSignature>*>((byte*)this + 768);
}
void ABP_EventManager_C::M_SetWindowCanBeClosed(const TAssetPtr<class FWindowCanBeClosed__DelegateSignature>& value) {
	Write((byte*)this + 768, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.OnPlayerVoted__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerVote	Type: struct FE_PlayerVote	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_EventManager_C::OnPlayerVoted__DelegateSignature(struct FE_PlayerVote PlayerVote) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.OnPlayerVoted__DelegateSignature");

	struct ABP_EventManager_C_OnPlayerVoted__DelegateSignature_Params {
		struct FE_PlayerVote PlayerVote;			//Offset: 0 | ElementSize: 16
	};
	ABP_EventManager_C_OnPlayerVoted__DelegateSignature_Params params;
	params.PlayerVote = PlayerVote;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.RemovePlayerVote__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerVote	Type: struct FE_PlayerVote	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_EventManager_C::RemovePlayerVote__DelegateSignature(struct FE_PlayerVote PlayerVote) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.RemovePlayerVote__DelegateSignature");

	struct ABP_EventManager_C_RemovePlayerVote__DelegateSignature_Params {
		struct FE_PlayerVote PlayerVote;			//Offset: 0 | ElementSize: 16
	};
	ABP_EventManager_C_RemovePlayerVote__DelegateSignature_Params params;
	params.PlayerVote = PlayerVote;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.OnHostSelectedOption__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: ChoiceIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_EventManager_C::OnHostSelectedOption__DelegateSignature(int32_t ChoiceIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.OnHostSelectedOption__DelegateSignature");

	struct ABP_EventManager_C_OnHostSelectedOption__DelegateSignature_Params {
		int32_t ChoiceIndex;			//Offset: 0 | ElementSize: 4
	};
	ABP_EventManager_C_OnHostSelectedOption__DelegateSignature_Params params;
	params.ChoiceIndex = ChoiceIndex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.OnPlayerMultipliersChanged__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_EventManager_C::OnPlayerMultipliersChanged__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.OnPlayerMultipliersChanged__DelegateSignature");

	struct ABP_EventManager_C_OnPlayerMultipliersChanged__DelegateSignature_Params {
	};
	ABP_EventManager_C_OnPlayerMultipliersChanged__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.WindowCanBeClosed__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_EventManager_C::WindowCanBeClosed__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.WindowCanBeClosed__DelegateSignature");

	struct ABP_EventManager_C_WindowCanBeClosed__DelegateSignature_Params {
	};
	ABP_EventManager_C_WindowCanBeClosed__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.ExecuteUbergraph_BP_EventManager
// Flags: Final, HasDefaults
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
// Function BP_EventManager.BP_EventManager_C.ListStuff
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_EventManager_C::ListStuff() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.ListStuff");

	struct ABP_EventManager_C_ListStuff_Params {
	};
	ABP_EventManager_C_ListStuff_Params params;

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
// Function BP_EventManager.BP_EventManager_C.ReplicateRestrictions_Multicast
// Flags: Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: RestrictionData	Type: TArray<struct FST_RestrictionData>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void ABP_EventManager_C::ReplicateRestrictions_Multicast(const TArray<struct FST_RestrictionData>& RestrictionData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.ReplicateRestrictions_Multicast");

	struct ABP_EventManager_C_ReplicateRestrictions_Multicast_Params {
		TArray<struct FST_RestrictionData> RestrictionData;			//Offset: 0 | ElementSize: 16
	};
	ABP_EventManager_C_ReplicateRestrictions_Multicast_Params params;
	params.RestrictionData = RestrictionData;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.ReplicateConsequences_Multicast
// Flags: Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ButtonIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlayerEffectData	Type: TArray<struct FST_PlayerEffectData>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: NPCEffectData	Type: TArray<struct FST_NPCEffectData>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: OtherEffectData	Type: TArray<struct FST_OtherEffectData>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: KingEffectData	Type: struct FST_KingEffectData	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_EventManager_C::ReplicateConsequences_Multicast(int32_t ButtonIndex, const TArray<struct FST_PlayerEffectData>& PlayerEffectData, const TArray<struct FST_NPCEffectData>& NPCEffectData, const TArray<struct FST_OtherEffectData>& OtherEffectData, struct FST_KingEffectData KingEffectData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.ReplicateConsequences_Multicast");

	struct ABP_EventManager_C_ReplicateConsequences_Multicast_Params {
		int32_t ButtonIndex;			//Offset: 0 | ElementSize: 4
		TArray<struct FST_PlayerEffectData> PlayerEffectData;			//Offset: 8 | ElementSize: 16
		TArray<struct FST_NPCEffectData> NPCEffectData;			//Offset: 24 | ElementSize: 16
		TArray<struct FST_OtherEffectData> OtherEffectData;			//Offset: 40 | ElementSize: 16
		struct FST_KingEffectData KingEffectData;			//Offset: 56 | ElementSize: 12
	};
	ABP_EventManager_C_ReplicateConsequences_Multicast_Params params;
	params.ButtonIndex = ButtonIndex;
	params.PlayerEffectData = PlayerEffectData;
	params.NPCEffectData = NPCEffectData;
	params.OtherEffectData = OtherEffectData;
	params.KingEffectData = KingEffectData;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.OnEventSelected_Multicast
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: ChoiceIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_EventManager_C::OnEventSelected_Multicast(int32_t ChoiceIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.OnEventSelected_Multicast");

	struct ABP_EventManager_C_OnEventSelected_Multicast_Params {
		int32_t ChoiceIndex;			//Offset: 0 | ElementSize: 4
	};
	ABP_EventManager_C_OnEventSelected_Multicast_Params params;
	params.ChoiceIndex = ChoiceIndex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.OnPlayerVoted_Multicast
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerVote	Type: struct FE_PlayerVote	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_EventManager_C::OnPlayerVoted_Multicast(struct FE_PlayerVote PlayerVote) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.OnPlayerVoted_Multicast");

	struct ABP_EventManager_C_OnPlayerVoted_Multicast_Params {
		struct FE_PlayerVote PlayerVote;			//Offset: 0 | ElementSize: 16
	};
	ABP_EventManager_C_OnPlayerVoted_Multicast_Params params;
	params.PlayerVote = PlayerVote;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.ToggleEventScreen_Multicast
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: CheatStart	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: CheatEnd	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: EventName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_EventManager_C::ToggleEventScreen_Multicast(bool CheatStart, bool CheatEnd, struct FName EventName) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.ToggleEventScreen_Multicast");

	struct ABP_EventManager_C_ToggleEventScreen_Multicast_Params {
		bool CheatStart;			//Offset: 0 | ElementSize: 1
		bool CheatEnd;			//Offset: 1 | ElementSize: 1
		struct FName EventName;			//Offset: 4 | ElementSize: 8
	};
	ABP_EventManager_C_ToggleEventScreen_Multicast_Params params;
	params.CheatStart = CheatStart;
	params.CheatEnd = CheatEnd;
	params.EventName = EventName;

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
		struct FST_SeasonEvent Event;			//Offset: 0 | ElementSize: 152
		bool CanHappen;			//Offset: 152 | ElementSize: 1
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
		struct FST_SeasonEvent Event;			//Offset: 8 | ElementSize: 152
		struct FText Description;			//Offset: 160 | ElementSize: 24
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

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.SkillRestriction
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Restrictions	Type: struct FST_EventButtonRestrictions	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: Available	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_EventManager_C::SkillRestriction(struct FST_EventButtonRestrictions Restrictions, bool* Available) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.SkillRestriction");

	struct ABP_EventManager_C_SkillRestriction_Params {
		struct FST_EventButtonRestrictions Restrictions;			//Offset: 0 | ElementSize: 208
		bool Available;			//Offset: 208 | ElementSize: 1
	};
	ABP_EventManager_C_SkillRestriction_Params params;
	params.Restrictions = Restrictions;

	UObject::ProcessEvent(fn, &params);
	if (Available != nullptr)
		*Available = params.Available;
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.VillageRestriction
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Restrictions	Type: struct FST_EventButtonRestrictions	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: Available	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_EventManager_C::VillageRestriction(struct FST_EventButtonRestrictions Restrictions, bool* Available) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.VillageRestriction");

	struct ABP_EventManager_C_VillageRestriction_Params {
		struct FST_EventButtonRestrictions Restrictions;			//Offset: 0 | ElementSize: 208
		bool Available;			//Offset: 208 | ElementSize: 1
	};
	ABP_EventManager_C_VillageRestriction_Params params;
	params.Restrictions = Restrictions;

	UObject::ProcessEvent(fn, &params);
	if (Available != nullptr)
		*Available = params.Available;
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.ItemRestriction
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Restrictions	Type: struct FST_EventButtonRestrictions	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: Available	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_EventManager_C::ItemRestriction(struct FST_EventButtonRestrictions Restrictions, bool* Available) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.ItemRestriction");

	struct ABP_EventManager_C_ItemRestriction_Params {
		struct FST_EventButtonRestrictions Restrictions;			//Offset: 0 | ElementSize: 208
		bool Available;			//Offset: 208 | ElementSize: 1
	};
	ABP_EventManager_C_ItemRestriction_Params params;
	params.Restrictions = Restrictions;

	UObject::ProcessEvent(fn, &params);
	if (Available != nullptr)
		*Available = params.Available;
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.RemoveRosourcesFromRestrictions
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: EventButtonRestrictions	Type: struct FST_EventButtonRestrictions	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash
// Name: EventConsequences	Type: TArray<struct FST_EventHistory_Consequences>	Flags: Parm, OutParm, ContainsInstancedReference
/////////////////////////////////////////////
void ABP_EventManager_C::RemoveRosourcesFromRestrictions(const struct FST_EventButtonRestrictions& EventButtonRestrictions, TArray<struct FST_EventHistory_Consequences>* EventConsequences) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.RemoveRosourcesFromRestrictions");

	struct ABP_EventManager_C_RemoveRosourcesFromRestrictions_Params {
		struct FST_EventButtonRestrictions EventButtonRestrictions;			//Offset: 0 | ElementSize: 208
		TArray<struct FST_EventHistory_Consequences> EventConsequences;			//Offset: 208 | ElementSize: 16
	};
	ABP_EventManager_C_RemoveRosourcesFromRestrictions_Params params;
	params.EventButtonRestrictions = EventButtonRestrictions;

	UObject::ProcessEvent(fn, &params);
	if (EventConsequences != nullptr)
		*EventConsequences = params.EventConsequences;
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.PlayerVoted
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerVote	Type: struct FE_PlayerVote	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_EventManager_C::PlayerVoted(struct FE_PlayerVote PlayerVote) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.PlayerVoted");

	struct ABP_EventManager_C_PlayerVoted_Params {
		struct FE_PlayerVote PlayerVote;			//Offset: 0 | ElementSize: 16
	};
	ABP_EventManager_C_PlayerVoted_Params params;
	params.PlayerVote = PlayerVote;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.OnRep_PlayerMultiplliers
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_EventManager_C::OnRep_PlayerMultiplliers() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.OnRep_PlayerMultiplliers");

	struct ABP_EventManager_C_OnRep_PlayerMultiplliers_Params {
	};
	ABP_EventManager_C_OnRep_PlayerMultiplliers_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.SetPlayerMultipliers
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerMultiplliers	Type: struct FST_Event_PlayerMultipliers	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_EventManager_C::SetPlayerMultipliers(struct FST_Event_PlayerMultipliers PlayerMultiplliers) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.SetPlayerMultipliers");

	struct ABP_EventManager_C_SetPlayerMultipliers_Params {
		struct FST_Event_PlayerMultipliers PlayerMultiplliers;			//Offset: 0 | ElementSize: 16
	};
	ABP_EventManager_C_SetPlayerMultipliers_Params params;
	params.PlayerMultiplliers = PlayerMultiplliers;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.ExecuteEventEffect_Client
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ButtonIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Event	Type: struct FST_SeasonEvent	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash
// Name: PlayerEffectData	Type: TArray<struct FST_PlayerEffectData>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: NPCEffectData	Type: TArray<struct FST_NPCEffectData>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: OtherEffectData	Type: TArray<struct FST_OtherEffectData>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: KingEffectData	Type: struct FST_KingEffectData	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Description	Type: struct FText	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_EventManager_C::ExecuteEventEffect_Client(int32_t ButtonIndex, const struct FST_SeasonEvent& Event, const TArray<struct FST_PlayerEffectData>& PlayerEffectData, const TArray<struct FST_NPCEffectData>& NPCEffectData, TArray<struct FST_OtherEffectData>* OtherEffectData, struct FST_KingEffectData KingEffectData, struct FText* Description) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.ExecuteEventEffect_Client");

	struct ABP_EventManager_C_ExecuteEventEffect_Client_Params {
		int32_t ButtonIndex;			//Offset: 0 | ElementSize: 4
		struct FST_SeasonEvent Event;			//Offset: 8 | ElementSize: 152
		TArray<struct FST_PlayerEffectData> PlayerEffectData;			//Offset: 160 | ElementSize: 16
		TArray<struct FST_NPCEffectData> NPCEffectData;			//Offset: 176 | ElementSize: 16
		TArray<struct FST_OtherEffectData> OtherEffectData;			//Offset: 192 | ElementSize: 16
		struct FST_KingEffectData KingEffectData;			//Offset: 208 | ElementSize: 12
		struct FText Description;			//Offset: 224 | ElementSize: 24
	};
	ABP_EventManager_C_ExecuteEventEffect_Client_Params params;
	params.ButtonIndex = ButtonIndex;
	params.Event = Event;
	params.PlayerEffectData = PlayerEffectData;
	params.NPCEffectData = NPCEffectData;
	params.KingEffectData = KingEffectData;

	UObject::ProcessEvent(fn, &params);
	if (OtherEffectData != nullptr)
		*OtherEffectData = params.OtherEffectData;
	if (Description != nullptr)
		*Description = params.Description;
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.ConvertNPCNameToIndex
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: sex	Type: TEnumAsByte<E_Sex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Name	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: NameIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_EventManager_C::ConvertNPCNameToIndex(TEnumAsByte<E_Sex> sex, struct FString Name, int32_t* NameIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.ConvertNPCNameToIndex");

	struct ABP_EventManager_C_ConvertNPCNameToIndex_Params {
		TEnumAsByte<E_Sex> sex;			//Offset: 0 | ElementSize: 1
		struct FString Name;			//Offset: 8 | ElementSize: 16
		int32_t NameIndex;			//Offset: 24 | ElementSize: 4
	};
	ABP_EventManager_C_ConvertNPCNameToIndex_Params params;
	params.sex = sex;
	params.Name = Name;

	UObject::ProcessEvent(fn, &params);
	if (NameIndex != nullptr)
		*NameIndex = params.NameIndex;
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.ConvertIndexToNPCName
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: sex	Type: TEnumAsByte<E_Sex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Index	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Name	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_EventManager_C::ConvertIndexToNPCName(TEnumAsByte<E_Sex> sex, int32_t Index, struct FName* Name) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.ConvertIndexToNPCName");

	struct ABP_EventManager_C_ConvertIndexToNPCName_Params {
		TEnumAsByte<E_Sex> sex;			//Offset: 0 | ElementSize: 1
		int32_t Index;			//Offset: 4 | ElementSize: 4
		struct FName Name;			//Offset: 8 | ElementSize: 8
	};
	ABP_EventManager_C_ConvertIndexToNPCName_Params params;
	params.sex = sex;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
	if (Name != nullptr)
		*Name = params.Name;
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.AddNPCEffect
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCEffectData	Type: TArray<struct FST_NPCEffectData>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: NPCEffectNew	Type: struct FST_NPCEffectData	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_EventManager_C::AddNPCEffect(const TArray<struct FST_NPCEffectData>& NPCEffectData, struct FST_NPCEffectData NPCEffectNew) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.AddNPCEffect");

	struct ABP_EventManager_C_AddNPCEffect_Params {
		TArray<struct FST_NPCEffectData> NPCEffectData;			//Offset: 0 | ElementSize: 16
		struct FST_NPCEffectData NPCEffectNew;			//Offset: 16 | ElementSize: 40
	};
	ABP_EventManager_C_AddNPCEffect_Params params;
	params.NPCEffectData = NPCEffectData;
	params.NPCEffectNew = NPCEffectNew;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.GetNPCEffectByEffectType
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCEffectData	Type: TArray<struct FST_NPCEffectData>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: NPCEffectType	Type: TEnumAsByte<E_EventEffect_NPCType>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: found	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: NPCEffect	Type: struct FST_NPCEffectData	Flags: Parm, OutParm, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_EventManager_C::GetNPCEffectByEffectType(const TArray<struct FST_NPCEffectData>& NPCEffectData, TEnumAsByte<E_EventEffect_NPCType> NPCEffectType, bool* found, struct FST_NPCEffectData* NPCEffect) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.GetNPCEffectByEffectType");

	struct ABP_EventManager_C_GetNPCEffectByEffectType_Params {
		TArray<struct FST_NPCEffectData> NPCEffectData;			//Offset: 0 | ElementSize: 16
		TEnumAsByte<E_EventEffect_NPCType> NPCEffectType;			//Offset: 16 | ElementSize: 1
		bool found;			//Offset: 17 | ElementSize: 1
		struct FST_NPCEffectData NPCEffect;			//Offset: 24 | ElementSize: 40
	};
	ABP_EventManager_C_GetNPCEffectByEffectType_Params params;
	params.NPCEffectData = NPCEffectData;
	params.NPCEffectType = NPCEffectType;

	UObject::ProcessEvent(fn, &params);
	if (found != nullptr)
		*found = params.found;
	if (NPCEffect != nullptr)
		*NPCEffect = params.NPCEffect;
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.GetPlayerEffectByEffectType
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerEffectData	Type: TArray<struct FST_PlayerEffectData>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: PlayerEffectType	Type: TEnumAsByte<E_EventEffect_PlayerType>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: found	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: PlayerEffect	Type: struct FST_PlayerEffectData	Flags: Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_EventManager_C::GetPlayerEffectByEffectType(const TArray<struct FST_PlayerEffectData>& PlayerEffectData, TEnumAsByte<E_EventEffect_PlayerType> PlayerEffectType, int32_t Value, bool* found, struct FST_PlayerEffectData* PlayerEffect) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.GetPlayerEffectByEffectType");

	struct ABP_EventManager_C_GetPlayerEffectByEffectType_Params {
		TArray<struct FST_PlayerEffectData> PlayerEffectData;			//Offset: 0 | ElementSize: 16
		TEnumAsByte<E_EventEffect_PlayerType> PlayerEffectType;			//Offset: 16 | ElementSize: 1
		int32_t Value;			//Offset: 20 | ElementSize: 4
		bool found;			//Offset: 24 | ElementSize: 1
		struct FST_PlayerEffectData PlayerEffect;			//Offset: 28 | ElementSize: 8
	};
	ABP_EventManager_C_GetPlayerEffectByEffectType_Params params;
	params.PlayerEffectData = PlayerEffectData;
	params.PlayerEffectType = PlayerEffectType;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
	if (found != nullptr)
		*found = params.found;
	if (PlayerEffect != nullptr)
		*PlayerEffect = params.PlayerEffect;
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.GetSkillLevelForRestriction
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Restrictions	Type: struct FST_EventButtonRestrictions	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
// Name: Skill	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_EventManager_C::GetSkillLevelForRestriction(struct FST_EventButtonRestrictions Restrictions, int32_t* Skill) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.GetSkillLevelForRestriction");

	struct ABP_EventManager_C_GetSkillLevelForRestriction_Params {
		struct FST_EventButtonRestrictions Restrictions;			//Offset: 0 | ElementSize: 208
		int32_t Skill;			//Offset: 208 | ElementSize: 4
	};
	ABP_EventManager_C_GetSkillLevelForRestriction_Params params;
	params.Restrictions = Restrictions;

	UObject::ProcessEvent(fn, &params);
	if (Skill != nullptr)
		*Skill = params.Skill;
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.GetOtherEffectByEffectType
// Flags: Private, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: OtherEffectData	Type: TArray<struct FST_OtherEffectData>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: OtherEffectType	Type: TEnumAsByte<E_EventEffect_VillageType>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: found	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: OtherEffect	Type: struct FST_OtherEffectData	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_EventManager_C::GetOtherEffectByEffectType(const TArray<struct FST_OtherEffectData>& OtherEffectData, TEnumAsByte<E_EventEffect_VillageType> OtherEffectType, bool* found, struct FST_OtherEffectData* OtherEffect) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.GetOtherEffectByEffectType");

	struct ABP_EventManager_C_GetOtherEffectByEffectType_Params {
		TArray<struct FST_OtherEffectData> OtherEffectData;			//Offset: 0 | ElementSize: 16
		TEnumAsByte<E_EventEffect_VillageType> OtherEffectType;			//Offset: 16 | ElementSize: 1
		bool found;			//Offset: 17 | ElementSize: 1
		struct FST_OtherEffectData OtherEffect;			//Offset: 20 | ElementSize: 8
	};
	ABP_EventManager_C_GetOtherEffectByEffectType_Params params;
	params.OtherEffectData = OtherEffectData;
	params.OtherEffectType = OtherEffectType;

	UObject::ProcessEvent(fn, &params);
	if (found != nullptr)
		*found = params.found;
	if (OtherEffect != nullptr)
		*OtherEffect = params.OtherEffect;
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.TryToUnlockCrests
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
// Name: EventId	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_EventManager_C::TryToUnlockCrests(struct FName EventId) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.TryToUnlockCrests");

	struct ABP_EventManager_C_TryToUnlockCrests_Params {
		struct FName EventId;			//Offset: 0 | ElementSize: 8
	};
	ABP_EventManager_C_TryToUnlockCrests_Params params;
	params.EventId = EventId;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.GatherRestrictionDataForReplication
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ST_EventButtons	Type: TArray<struct FST_EventButtons>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference
// Name: GatheredData	Type: TArray<struct FST_RestrictionData>	Flags: Parm, OutParm
/////////////////////////////////////////////
void ABP_EventManager_C::GatherRestrictionDataForReplication(const TArray<struct FST_EventButtons>& ST_EventButtons, TArray<struct FST_RestrictionData>* GatheredData) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.GatherRestrictionDataForReplication");

	struct ABP_EventManager_C_GatherRestrictionDataForReplication_Params {
		TArray<struct FST_EventButtons> ST_EventButtons;			//Offset: 0 | ElementSize: 16
		TArray<struct FST_RestrictionData> GatheredData;			//Offset: 16 | ElementSize: 16
	};
	ABP_EventManager_C_GatherRestrictionDataForReplication_Params params;
	params.ST_EventButtons = ST_EventButtons;

	UObject::ProcessEvent(fn, &params);
	if (GatheredData != nullptr)
		*GatheredData = params.GatheredData;
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.OnRep_SelectedEventButtonIndex
// Flags: HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_EventManager_C::OnRep_SelectedEventButtonIndex() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.OnRep_SelectedEventButtonIndex");

	struct ABP_EventManager_C_OnRep_SelectedEventButtonIndex_Params {
	};
	ABP_EventManager_C_OnRep_SelectedEventButtonIndex_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.ResetSelectedEventButtonIndex
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_EventManager_C::ResetSelectedEventButtonIndex() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.ResetSelectedEventButtonIndex");

	struct ABP_EventManager_C_ResetSelectedEventButtonIndex_Params {
	};
	ABP_EventManager_C_ResetSelectedEventButtonIndex_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_EventManager.BP_EventManager_C.SearchInventoryForItems
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: ActorWithInventory	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Index	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Items	Type: struct FST_ItemRestriction	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash
// Name: HasAll	Type: TArray<bool>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: FoundAll	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_EventManager_C::SearchInventoryForItems(class AActor* ActorWithInventory, int32_t Index, const struct FST_ItemRestriction& Items, TArray<bool>* HasAll, bool* FoundAll) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_EventManager.BP_EventManager_C.SearchInventoryForItems");

	struct ABP_EventManager_C_SearchInventoryForItems_Params {
		class AActor* ActorWithInventory;			//Offset: 0 | ElementSize: 8
		int32_t Index;			//Offset: 8 | ElementSize: 4
		struct FST_ItemRestriction Items;			//Offset: 16 | ElementSize: 24
		TArray<bool> HasAll;			//Offset: 40 | ElementSize: 16
		bool FoundAll;			//Offset: 56 | ElementSize: 1
	};
	ABP_EventManager_C_SearchInventoryForItems_Params params;
	params.ActorWithInventory = ActorWithInventory;
	params.Index = Index;
	params.Items = Items;

	UObject::ProcessEvent(fn, &params);
	if (HasAll != nullptr)
		*HasAll = params.HasAll;
	if (FoundAll != nullptr)
		*FoundAll = params.FoundAll;
}

#pragma endregion
}