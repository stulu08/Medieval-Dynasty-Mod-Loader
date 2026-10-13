#include "../SDK.h"
#include "GS_GameState_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame AGS_GameState_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 624);
}
struct FPointerToUberGraphFrame* AGS_GameState_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 624);
}
void AGS_GameState_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 624, value);
}
// Member Getter and Setter of DefaultSceneRoot
// Declaration: class USceneComponent* DefaultSceneRoot
class USceneComponent* AGS_GameState_C::M_GetDefaultSceneRoot() const {
	return Read<class USceneComponent*>((byte*)this + 632);
}
class USceneComponent** AGS_GameState_C::M_PtrGetDefaultSceneRoot() {
	return reinterpret_cast<class USceneComponent**>((byte*)this + 632);
}
void AGS_GameState_C::M_SetDefaultSceneRoot(const class USceneComponent*& value) {
	Write((byte*)this + 632, value);
}
// Member Getter and Setter of DaysPerSeason
// Declaration: int32_t DaysPerSeason
int32_t AGS_GameState_C::M_GetDaysPerSeason() const {
	return Read<int32_t>((byte*)this + 640);
}
int32_t* AGS_GameState_C::M_PtrGetDaysPerSeason() {
	return reinterpret_cast<int32_t*>((byte*)this + 640);
}
void AGS_GameState_C::M_SetDaysPerSeason(const int32_t& value) {
	Write((byte*)this + 640, value);
}
// Member Getter and Setter of TaxMultiplier
// Declaration: float TaxMultiplier
float AGS_GameState_C::M_GetTaxMultiplier() const {
	return Read<float>((byte*)this + 644);
}
float* AGS_GameState_C::M_PtrGetTaxMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 644);
}
void AGS_GameState_C::M_SetTaxMultiplier(const float& value) {
	Write((byte*)this + 644, value);
}
// Member Getter and Setter of BuildingLimitMultiplier
// Declaration: float BuildingLimitMultiplier
float AGS_GameState_C::M_GetBuildingLimitMultiplier() const {
	return Read<float>((byte*)this + 648);
}
float* AGS_GameState_C::M_PtrGetBuildingLimitMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 648);
}
void AGS_GameState_C::M_SetBuildingLimitMultiplier(const float& value) {
	Write((byte*)this + 648, value);
}
// Member Getter and Setter of Events
// Declaration: bool Events
bool AGS_GameState_C::M_GetEvents() const {
	return Read<bool>((byte*)this + 652);
}
bool* AGS_GameState_C::M_PtrGetEvents() {
	return reinterpret_cast<bool*>((byte*)this + 652);
}
void AGS_GameState_C::M_SetEvents(const bool& value) {
	Write((byte*)this + 652, value);
}
// Member Getter and Setter of Bandits
// Declaration: bool Bandits
bool AGS_GameState_C::M_GetBandits() const {
	return Read<bool>((byte*)this + 653);
}
bool* AGS_GameState_C::M_PtrGetBandits() {
	return reinterpret_cast<bool*>((byte*)this + 653);
}
void AGS_GameState_C::M_SetBandits(const bool& value) {
	Write((byte*)this + 653, value);
}
// Member Getter and Setter of Birds
// Declaration: bool Birds
bool AGS_GameState_C::M_GetBirds() const {
	return Read<bool>((byte*)this + 654);
}
bool* AGS_GameState_C::M_PtrGetBirds() {
	return reinterpret_cast<bool*>((byte*)this + 654);
}
void AGS_GameState_C::M_SetBirds(const bool& value) {
	Write((byte*)this + 654, value);
}
// Member Getter and Setter of NPCNeeds_FoodMultiplier
// Declaration: float NPCNeeds_FoodMultiplier
float AGS_GameState_C::M_GetNPCNeeds_FoodMultiplier() const {
	return Read<float>((byte*)this + 656);
}
float* AGS_GameState_C::M_PtrGetNPCNeeds_FoodMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 656);
}
void AGS_GameState_C::M_SetNPCNeeds_FoodMultiplier(const float& value) {
	Write((byte*)this + 656, value);
}
// Member Getter and Setter of NPCNeeds_WaterMultiplier
// Declaration: float NPCNeeds_WaterMultiplier
float AGS_GameState_C::M_GetNPCNeeds_WaterMultiplier() const {
	return Read<float>((byte*)this + 660);
}
float* AGS_GameState_C::M_PtrGetNPCNeeds_WaterMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 660);
}
void AGS_GameState_C::M_SetNPCNeeds_WaterMultiplier(const float& value) {
	Write((byte*)this + 660, value);
}
// Member Getter and Setter of NPCNeeds_WoodMultiplier
// Declaration: float NPCNeeds_WoodMultiplier
float AGS_GameState_C::M_GetNPCNeeds_WoodMultiplier() const {
	return Read<float>((byte*)this + 664);
}
float* AGS_GameState_C::M_PtrGetNPCNeeds_WoodMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 664);
}
void AGS_GameState_C::M_SetNPCNeeds_WoodMultiplier(const float& value) {
	Write((byte*)this + 664, value);
}
// Member Getter and Setter of BanditsHPMultiplier
// Declaration: float BanditsHPMultiplier
float AGS_GameState_C::M_GetBanditsHPMultiplier() const {
	return Read<float>((byte*)this + 668);
}
float* AGS_GameState_C::M_PtrGetBanditsHPMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 668);
}
void AGS_GameState_C::M_SetBanditsHPMultiplier(const float& value) {
	Write((byte*)this + 668, value);
}
// Member Getter and Setter of BanditsDamageMultiplier
// Declaration: float BanditsDamageMultiplier
float AGS_GameState_C::M_GetBanditsDamageMultiplier() const {
	return Read<float>((byte*)this + 672);
}
float* AGS_GameState_C::M_PtrGetBanditsDamageMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 672);
}
void AGS_GameState_C::M_SetBanditsDamageMultiplier(const float& value) {
	Write((byte*)this + 672, value);
}
// Member Getter and Setter of AnimalsHPMultiplier
// Declaration: float AnimalsHPMultiplier
float AGS_GameState_C::M_GetAnimalsHPMultiplier() const {
	return Read<float>((byte*)this + 676);
}
float* AGS_GameState_C::M_PtrGetAnimalsHPMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 676);
}
void AGS_GameState_C::M_SetAnimalsHPMultiplier(const float& value) {
	Write((byte*)this + 676, value);
}
// Member Getter and Setter of AnimalsDamageMultiplier
// Declaration: float AnimalsDamageMultiplier
float AGS_GameState_C::M_GetAnimalsDamageMultiplier() const {
	return Read<float>((byte*)this + 680);
}
float* AGS_GameState_C::M_PtrGetAnimalsDamageMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 680);
}
void AGS_GameState_C::M_SetAnimalsDamageMultiplier(const float& value) {
	Write((byte*)this + 680, value);
}
// Member Getter and Setter of XPGainMultiplier
// Declaration: float XPGainMultiplier
float AGS_GameState_C::M_GetXPGainMultiplier() const {
	return Read<float>((byte*)this + 684);
}
float* AGS_GameState_C::M_PtrGetXPGainMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 684);
}
void AGS_GameState_C::M_SetXPGainMultiplier(const float& value) {
	Write((byte*)this + 684, value);
}
// Member Getter and Setter of TechnologyGainMultiplier
// Declaration: float TechnologyGainMultiplier
float AGS_GameState_C::M_GetTechnologyGainMultiplier() const {
	return Read<float>((byte*)this + 688);
}
float* AGS_GameState_C::M_PtrGetTechnologyGainMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 688);
}
void AGS_GameState_C::M_SetTechnologyGainMultiplier(const float& value) {
	Write((byte*)this + 688, value);
}
// Member Getter and Setter of DynastyReputationGainMultiplier
// Declaration: float DynastyReputationGainMultiplier
float AGS_GameState_C::M_GetDynastyReputationGainMultiplier() const {
	return Read<float>((byte*)this + 692);
}
float* AGS_GameState_C::M_PtrGetDynastyReputationGainMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 692);
}
void AGS_GameState_C::M_SetDynastyReputationGainMultiplier(const float& value) {
	Write((byte*)this + 692, value);
}
// Member Getter and Setter of StopSpoilForDroppedItems
// Declaration: bool StopSpoilForDroppedItems
bool AGS_GameState_C::M_GetStopSpoilForDroppedItems() const {
	return Read<bool>((byte*)this + 696);
}
bool* AGS_GameState_C::M_PtrGetStopSpoilForDroppedItems() {
	return reinterpret_cast<bool*>((byte*)this + 696);
}
void AGS_GameState_C::M_SetStopSpoilForDroppedItems(const bool& value) {
	Write((byte*)this + 696, value);
}
// Member Getter and Setter of StopDestructionOverTime
// Declaration: bool StopDestructionOverTime
bool AGS_GameState_C::M_GetStopDestructionOverTime() const {
	return Read<bool>((byte*)this + 697);
}
bool* AGS_GameState_C::M_PtrGetStopDestructionOverTime() {
	return reinterpret_cast<bool*>((byte*)this + 697);
}
void AGS_GameState_C::M_SetStopDestructionOverTime(const bool& value) {
	Write((byte*)this + 697, value);
}
// Member Getter and Setter of GameModeReference
// Declaration: class AGM_MedievalDynasty_C* GameModeReference
class AGM_MedievalDynasty_C* AGS_GameState_C::M_GetGameModeReference() const {
	return Read<class AGM_MedievalDynasty_C*>((byte*)this + 704);
}
class AGM_MedievalDynasty_C** AGS_GameState_C::M_PtrGetGameModeReference() {
	return reinterpret_cast<class AGM_MedievalDynasty_C**>((byte*)this + 704);
}
void AGS_GameState_C::M_SetGameModeReference(const class AGM_MedievalDynasty_C*& value) {
	Write((byte*)this + 704, value);
}
// Member Getter and Setter of OnDaysPerSeasonChanged
// Declaration: TAssetPtr<class FOnDaysPerSeasonChanged__DelegateSignature> OnDaysPerSeasonChanged
TAssetPtr<class FOnDaysPerSeasonChanged__DelegateSignature> AGS_GameState_C::M_GetOnDaysPerSeasonChanged() const {
	return Read<TAssetPtr<class FOnDaysPerSeasonChanged__DelegateSignature>>((byte*)this + 712);
}
TAssetPtr<class FOnDaysPerSeasonChanged__DelegateSignature>* AGS_GameState_C::M_PtrGetOnDaysPerSeasonChanged() {
	return reinterpret_cast<TAssetPtr<class FOnDaysPerSeasonChanged__DelegateSignature>*>((byte*)this + 712);
}
void AGS_GameState_C::M_SetOnDaysPerSeasonChanged(const TAssetPtr<class FOnDaysPerSeasonChanged__DelegateSignature>& value) {
	Write((byte*)this + 712, value);
}
// Member Getter and Setter of WeaponDurabilityMultiplier
// Declaration: float WeaponDurabilityMultiplier
float AGS_GameState_C::M_GetWeaponDurabilityMultiplier() const {
	return Read<float>((byte*)this + 728);
}
float* AGS_GameState_C::M_PtrGetWeaponDurabilityMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 728);
}
void AGS_GameState_C::M_SetWeaponDurabilityMultiplier(const float& value) {
	Write((byte*)this + 728, value);
}
// Member Getter and Setter of ArmorDurabilityMultiplier
// Declaration: float ArmorDurabilityMultiplier
float AGS_GameState_C::M_GetArmorDurabilityMultiplier() const {
	return Read<float>((byte*)this + 732);
}
float* AGS_GameState_C::M_PtrGetArmorDurabilityMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 732);
}
void AGS_GameState_C::M_SetArmorDurabilityMultiplier(const float& value) {
	Write((byte*)this + 732, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function GS_GameState.GS_GameState_C.OnDaysPerSeasonChanged__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGS_GameState_C::OnDaysPerSeasonChanged__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function GS_GameState.GS_GameState_C.OnDaysPerSeasonChanged__DelegateSignature");

	struct AGS_GameState_C_OnDaysPerSeasonChanged__DelegateSignature_Params {
	};
	AGS_GameState_C_OnDaysPerSeasonChanged__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GS_GameState.GS_GameState_C.ExecuteUbergraph_GS_GameState
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGS_GameState_C::ExecuteUbergraph_GS_GameState(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function GS_GameState.GS_GameState_C.ExecuteUbergraph_GS_GameState");

	struct AGS_GameState_C_ExecuteUbergraph_GS_GameState_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	AGS_GameState_C_ExecuteUbergraph_GS_GameState_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GS_GameState.GS_GameState_C.ReceiveBeginPlay
// Flags: Event, Protected, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGS_GameState_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function GS_GameState.GS_GameState_C.ReceiveBeginPlay");

	struct AGS_GameState_C_ReceiveBeginPlay_Params {
	};
	AGS_GameState_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GS_GameState.GS_GameState_C.Replicate_RemoveInstance
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: Target	Type: class UInstancedStaticMeshComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InputPin	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InputPin1	Type: struct FTransform	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AGS_GameState_C::Replicate_RemoveInstance(class UInstancedStaticMeshComponent* Target, int32_t InputPin, struct FTransform InputPin1) {
	static auto fn = UObject::FindObject<UFunction>("Function GS_GameState.GS_GameState_C.Replicate_RemoveInstance");

	struct AGS_GameState_C_Replicate_RemoveInstance_Params {
		class UInstancedStaticMeshComponent* Target;			//Offset: 0 | ElementSize: 8
		int32_t InputPin;			//Offset: 8 | ElementSize: 4
		struct FTransform InputPin1;			//Offset: 16 | ElementSize: 48
	};
	AGS_GameState_C_Replicate_RemoveInstance_Params params;
	params.Target = Target;
	params.InputPin = InputPin;
	params.InputPin1 = InputPin1;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GS_GameState.GS_GameState_C.UserConstructionScript
// Flags: Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGS_GameState_C::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function GS_GameState.GS_GameState_C.UserConstructionScript");

	struct AGS_GameState_C_UserConstructionScript_Params {
	};
	AGS_GameState_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GS_GameState.GS_GameState_C.RemoveFoliageInstance
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Target	Type: class UInstancedStaticMeshComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InputPin	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InputPin1	Type: struct FTransform	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AGS_GameState_C::RemoveFoliageInstance(class UInstancedStaticMeshComponent* Target, int32_t InputPin, struct FTransform InputPin1) {
	static auto fn = UObject::FindObject<UFunction>("Function GS_GameState.GS_GameState_C.RemoveFoliageInstance");

	struct AGS_GameState_C_RemoveFoliageInstance_Params {
		class UInstancedStaticMeshComponent* Target;			//Offset: 0 | ElementSize: 8
		int32_t InputPin;			//Offset: 8 | ElementSize: 4
		struct FTransform InputPin1;			//Offset: 16 | ElementSize: 48
	};
	AGS_GameState_C_RemoveFoliageInstance_Params params;
	params.Target = Target;
	params.InputPin = InputPin;
	params.InputPin1 = InputPin1;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GS_GameState.GS_GameState_C.SetUnlimitedHP
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewValue	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AGS_GameState_C::SetUnlimitedHP(bool NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function GS_GameState.GS_GameState_C.SetUnlimitedHP");

	struct AGS_GameState_C_SetUnlimitedHP_Params {
		bool NewValue;			//Offset: 0 | ElementSize: 1
	};
	AGS_GameState_C_SetUnlimitedHP_Params params;
	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GS_GameState.GS_GameState_C.UpdateGameSettingsFromGameMode
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGS_GameState_C::UpdateGameSettingsFromGameMode() {
	static auto fn = UObject::FindObject<UFunction>("Function GS_GameState.GS_GameState_C.UpdateGameSettingsFromGameMode");

	struct AGS_GameState_C_UpdateGameSettingsFromGameMode_Params {
	};
	AGS_GameState_C_UpdateGameSettingsFromGameMode_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GS_GameState.GS_GameState_C.OnRep_DaysPerSeason
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGS_GameState_C::OnRep_DaysPerSeason() {
	static auto fn = UObject::FindObject<UFunction>("Function GS_GameState.GS_GameState_C.OnRep_DaysPerSeason");

	struct AGS_GameState_C_OnRep_DaysPerSeason_Params {
	};
	AGS_GameState_C_OnRep_DaysPerSeason_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GS_GameState.GS_GameState_C.RetrievePlayerCharacterObject
// Flags: Private, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: Object	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlayerCharacterObject	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGS_GameState_C::RetrievePlayerCharacterObject(class UObject* Object, class UObject** PlayerCharacterObject)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function GS_GameState.GS_GameState_C.RetrievePlayerCharacterObject");

	struct AGS_GameState_C_RetrievePlayerCharacterObject_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		class UObject* PlayerCharacterObject;			//Offset: 8 | ElementSize: 8
	};
	AGS_GameState_C_RetrievePlayerCharacterObject_Params params;
	params.Object = Object;

	UObject::ProcessEvent(fn, &params);
	if (PlayerCharacterObject != nullptr)
		*PlayerCharacterObject = params.PlayerCharacterObject;
}

/////////////////////////////////////////////
// Function GS_GameState.GS_GameState_C.GetMountedPlayer
// Flags: Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: MountObject	Type: class UObject*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MountedPlayerCharacterObject	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGS_GameState_C::GetMountedPlayer(class UObject* MountObject, class UObject** MountedPlayerCharacterObject)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function GS_GameState.GS_GameState_C.GetMountedPlayer");

	struct AGS_GameState_C_GetMountedPlayer_Params {
		class UObject* MountObject;			//Offset: 0 | ElementSize: 8
		class UObject* MountedPlayerCharacterObject;			//Offset: 8 | ElementSize: 8
	};
	AGS_GameState_C_GetMountedPlayer_Params params;
	params.MountObject = MountObject;

	UObject::ProcessEvent(fn, &params);
	if (MountedPlayerCharacterObject != nullptr)
		*MountedPlayerCharacterObject = params.MountedPlayerCharacterObject;
}

/////////////////////////////////////////////
// Function GS_GameState.GS_GameState_C.GetPlayerCharacter_BPI
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: GetLocalPlayer	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: GetHost	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: GetSpecificPlayerFromArrayIndex	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: PlayerArrayIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Player_Character_Reference	Type: class ABP_PlayerCharacter_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGS_GameState_C::GetPlayerCharacter_BPI(bool GetLocalPlayer, bool GetHost, bool GetSpecificPlayerFromArrayIndex, int32_t PlayerArrayIndex, class ABP_PlayerCharacter_C** Player_Character_Reference) {
	static auto fn = UObject::FindObject<UFunction>("Function GS_GameState.GS_GameState_C.GetPlayerCharacter_BPI");

	struct AGS_GameState_C_GetPlayerCharacter_BPI_Params {
		bool GetLocalPlayer;			//Offset: 0 | ElementSize: 1
		bool GetHost;			//Offset: 1 | ElementSize: 1
		bool GetSpecificPlayerFromArrayIndex;			//Offset: 2 | ElementSize: 1
		int32_t PlayerArrayIndex;			//Offset: 4 | ElementSize: 4
		class ABP_PlayerCharacter_C* Player_Character_Reference;			//Offset: 8 | ElementSize: 8
	};
	AGS_GameState_C_GetPlayerCharacter_BPI_Params params;
	params.GetLocalPlayer = GetLocalPlayer;
	params.GetHost = GetHost;
	params.GetSpecificPlayerFromArrayIndex = GetSpecificPlayerFromArrayIndex;
	params.PlayerArrayIndex = PlayerArrayIndex;

	UObject::ProcessEvent(fn, &params);
	if (Player_Character_Reference != nullptr)
		*Player_Character_Reference = params.Player_Character_Reference;
}

/////////////////////////////////////////////
// Function GS_GameState.GS_GameState_C.GetDaysPerSeason
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: DaysPerSeason	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGS_GameState_C::GetDaysPerSeason(int32_t* DaysPerSeason)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function GS_GameState.GS_GameState_C.GetDaysPerSeason");

	struct AGS_GameState_C_GetDaysPerSeason_Params {
		int32_t DaysPerSeason;			//Offset: 0 | ElementSize: 4
	};
	AGS_GameState_C_GetDaysPerSeason_Params params;

	UObject::ProcessEvent(fn, &params);
	if (DaysPerSeason != nullptr)
		*DaysPerSeason = params.DaysPerSeason;
}

/////////////////////////////////////////////
// Function GS_GameState.GS_GameState_C.GetBanditsDamageMultiplier
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: BanditsDamageMultiplier	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGS_GameState_C::GetBanditsDamageMultiplier(float* BanditsDamageMultiplier)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function GS_GameState.GS_GameState_C.GetBanditsDamageMultiplier");

	struct AGS_GameState_C_GetBanditsDamageMultiplier_Params {
		float BanditsDamageMultiplier;			//Offset: 0 | ElementSize: 4
	};
	AGS_GameState_C_GetBanditsDamageMultiplier_Params params;

	UObject::ProcessEvent(fn, &params);
	if (BanditsDamageMultiplier != nullptr)
		*BanditsDamageMultiplier = params.BanditsDamageMultiplier;
}

/////////////////////////////////////////////
// Function GS_GameState.GS_GameState_C.GetBanditsHealthMultiplier
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: BanditsHealthMultiplier	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGS_GameState_C::GetBanditsHealthMultiplier(float* BanditsHealthMultiplier)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function GS_GameState.GS_GameState_C.GetBanditsHealthMultiplier");

	struct AGS_GameState_C_GetBanditsHealthMultiplier_Params {
		float BanditsHealthMultiplier;			//Offset: 0 | ElementSize: 4
	};
	AGS_GameState_C_GetBanditsHealthMultiplier_Params params;

	UObject::ProcessEvent(fn, &params);
	if (BanditsHealthMultiplier != nullptr)
		*BanditsHealthMultiplier = params.BanditsHealthMultiplier;
}

/////////////////////////////////////////////
// Function GS_GameState.GS_GameState_C.AreBanditsEnabled
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: AreBanditsEnabled	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AGS_GameState_C::AreBanditsEnabled(bool* AreBanditsEnabled)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function GS_GameState.GS_GameState_C.AreBanditsEnabled");

	struct AGS_GameState_C_AreBanditsEnabled_Params {
		bool AreBanditsEnabled;			//Offset: 0 | ElementSize: 1
	};
	AGS_GameState_C_AreBanditsEnabled_Params params;

	UObject::ProcessEvent(fn, &params);
	if (AreBanditsEnabled != nullptr)
		*AreBanditsEnabled = params.AreBanditsEnabled;
}

/////////////////////////////////////////////
// Function GS_GameState.GS_GameState_C.GetPlayerCharacter
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: PlayerStateIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlayerCharacterObject	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGS_GameState_C::GetPlayerCharacter(int32_t PlayerStateIndex, class UObject** PlayerCharacterObject)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function GS_GameState.GS_GameState_C.GetPlayerCharacter");

	struct AGS_GameState_C_GetPlayerCharacter_Params {
		int32_t PlayerStateIndex;			//Offset: 0 | ElementSize: 4
		class UObject* PlayerCharacterObject;			//Offset: 8 | ElementSize: 8
	};
	AGS_GameState_C_GetPlayerCharacter_Params params;
	params.PlayerStateIndex = PlayerStateIndex;

	UObject::ProcessEvent(fn, &params);
	if (PlayerCharacterObject != nullptr)
		*PlayerCharacterObject = params.PlayerCharacterObject;
}

/////////////////////////////////////////////
// Function GS_GameState.GS_GameState_C.GetLocalPlayerCharacter
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: LocalPlayerCharacterObject	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGS_GameState_C::GetLocalPlayerCharacter(class UObject** LocalPlayerCharacterObject)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function GS_GameState.GS_GameState_C.GetLocalPlayerCharacter");

	struct AGS_GameState_C_GetLocalPlayerCharacter_Params {
		class UObject* LocalPlayerCharacterObject;			//Offset: 0 | ElementSize: 8
	};
	AGS_GameState_C_GetLocalPlayerCharacter_Params params;

	UObject::ProcessEvent(fn, &params);
	if (LocalPlayerCharacterObject != nullptr)
		*LocalPlayerCharacterObject = params.LocalPlayerCharacterObject;
}

/////////////////////////////////////////////
// Function GS_GameState.GS_GameState_C.GetHostPlayerCharacter
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: HostPlayerCharacterObject	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGS_GameState_C::GetHostPlayerCharacter(class UObject** HostPlayerCharacterObject)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function GS_GameState.GS_GameState_C.GetHostPlayerCharacter");

	struct AGS_GameState_C_GetHostPlayerCharacter_Params {
		class UObject* HostPlayerCharacterObject;			//Offset: 0 | ElementSize: 8
	};
	AGS_GameState_C_GetHostPlayerCharacter_Params params;

	UObject::ProcessEvent(fn, &params);
	if (HostPlayerCharacterObject != nullptr)
		*HostPlayerCharacterObject = params.HostPlayerCharacterObject;
}

#pragma endregion
}