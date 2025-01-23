#include "../SDK.h"
#include "BP_CombatComponent_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame UBP_CombatComponent_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 176);
}
struct FPointerToUberGraphFrame* UBP_CombatComponent_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 176);
}
void UBP_CombatComponent_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 176, value);
}
// Member Getter and Setter of OnEnteredCombat
// Declaration: TAssetPtr<class FOnEnteredCombat__DelegateSignature> OnEnteredCombat
TAssetPtr<class FOnEnteredCombat__DelegateSignature> UBP_CombatComponent_C::M_GetOnEnteredCombat() const {
	return Read<TAssetPtr<class FOnEnteredCombat__DelegateSignature>>((byte*)this + 184);
}
TAssetPtr<class FOnEnteredCombat__DelegateSignature>* UBP_CombatComponent_C::M_PtrGetOnEnteredCombat() {
	return reinterpret_cast<TAssetPtr<class FOnEnteredCombat__DelegateSignature>*>((byte*)this + 184);
}
void UBP_CombatComponent_C::M_SetOnEnteredCombat(const TAssetPtr<class FOnEnteredCombat__DelegateSignature>& value) {
	Write((byte*)this + 184, value);
}
// Member Getter and Setter of OnLeaveCombat
// Declaration: TAssetPtr<class FOnLeaveCombat__DelegateSignature> OnLeaveCombat
TAssetPtr<class FOnLeaveCombat__DelegateSignature> UBP_CombatComponent_C::M_GetOnLeaveCombat() const {
	return Read<TAssetPtr<class FOnLeaveCombat__DelegateSignature>>((byte*)this + 200);
}
TAssetPtr<class FOnLeaveCombat__DelegateSignature>* UBP_CombatComponent_C::M_PtrGetOnLeaveCombat() {
	return reinterpret_cast<TAssetPtr<class FOnLeaveCombat__DelegateSignature>*>((byte*)this + 200);
}
void UBP_CombatComponent_C::M_SetOnLeaveCombat(const TAssetPtr<class FOnLeaveCombat__DelegateSignature>& value) {
	Write((byte*)this + 200, value);
}
// Member Getter and Setter of isDebugEnabled
// Declaration: bool isDebugEnabled
bool UBP_CombatComponent_C::M_GetisDebugEnabled() const {
	return Read<bool>((byte*)this + 216);
}
bool* UBP_CombatComponent_C::M_PtrGetisDebugEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 216);
}
void UBP_CombatComponent_C::M_SetisDebugEnabled(const bool& value) {
	Write((byte*)this + 216, value);
}
// Member Getter and Setter of IgnoreActorTags
// Declaration: TArray<struct FName> IgnoreActorTags
TArray<struct FName> UBP_CombatComponent_C::M_GetIgnoreActorTags() const {
	return Read<TArray<struct FName>>((byte*)this + 224);
}
TArray<struct FName>* UBP_CombatComponent_C::M_PtrGetIgnoreActorTags() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 224);
}
void UBP_CombatComponent_C::M_SetIgnoreActorTags(const TArray<struct FName>& value) {
	Write((byte*)this + 224, value);
}
// Member Getter and Setter of CombatCausers
// Declaration: TArray<class AActor*> CombatCausers
TArray<class AActor*> UBP_CombatComponent_C::M_GetCombatCausers() const {
	return Read<TArray<class AActor*>>((byte*)this + 240);
}
TArray<class AActor*>* UBP_CombatComponent_C::M_PtrGetCombatCausers() {
	return reinterpret_cast<TArray<class AActor*>*>((byte*)this + 240);
}
void UBP_CombatComponent_C::M_SetCombatCausers(const TArray<class AActor*>& value) {
	Write((byte*)this + 240, value);
}
// Member Getter and Setter of OnCombatCheck
// Declaration: TAssetPtr<class FOnCombatCheck__DelegateSignature> OnCombatCheck
TAssetPtr<class FOnCombatCheck__DelegateSignature> UBP_CombatComponent_C::M_GetOnCombatCheck() const {
	return Read<TAssetPtr<class FOnCombatCheck__DelegateSignature>>((byte*)this + 256);
}
TAssetPtr<class FOnCombatCheck__DelegateSignature>* UBP_CombatComponent_C::M_PtrGetOnCombatCheck() {
	return reinterpret_cast<TAssetPtr<class FOnCombatCheck__DelegateSignature>*>((byte*)this + 256);
}
void UBP_CombatComponent_C::M_SetOnCombatCheck(const TAssetPtr<class FOnCombatCheck__DelegateSignature>& value) {
	Write((byte*)this + 256, value);
}
// Member Getter and Setter of PreviousCombatCausers
// Declaration: TArray<class AActor*> PreviousCombatCausers
TArray<class AActor*> UBP_CombatComponent_C::M_GetPreviousCombatCausers() const {
	return Read<TArray<class AActor*>>((byte*)this + 272);
}
TArray<class AActor*>* UBP_CombatComponent_C::M_PtrGetPreviousCombatCausers() {
	return reinterpret_cast<TArray<class AActor*>*>((byte*)this + 272);
}
void UBP_CombatComponent_C::M_SetPreviousCombatCausers(const TArray<class AActor*>& value) {
	Write((byte*)this + 272, value);
}
// Member Getter and Setter of CombatCausersCheckTimer
// Declaration: struct FTimerHandle CombatCausersCheckTimer
struct FTimerHandle UBP_CombatComponent_C::M_GetCombatCausersCheckTimer() const {
	return Read<struct FTimerHandle>((byte*)this + 288);
}
struct FTimerHandle* UBP_CombatComponent_C::M_PtrGetCombatCausersCheckTimer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 288);
}
void UBP_CombatComponent_C::M_SetCombatCausersCheckTimer(const struct FTimerHandle& value) {
	Write((byte*)this + 288, value);
}
// Member Getter and Setter of OnCombatCauserEntered
// Declaration: TAssetPtr<class FOnCombatCauserEntered__DelegateSignature> OnCombatCauserEntered
TAssetPtr<class FOnCombatCauserEntered__DelegateSignature> UBP_CombatComponent_C::M_GetOnCombatCauserEntered() const {
	return Read<TAssetPtr<class FOnCombatCauserEntered__DelegateSignature>>((byte*)this + 296);
}
TAssetPtr<class FOnCombatCauserEntered__DelegateSignature>* UBP_CombatComponent_C::M_PtrGetOnCombatCauserEntered() {
	return reinterpret_cast<TAssetPtr<class FOnCombatCauserEntered__DelegateSignature>*>((byte*)this + 296);
}
void UBP_CombatComponent_C::M_SetOnCombatCauserEntered(const TAssetPtr<class FOnCombatCauserEntered__DelegateSignature>& value) {
	Write((byte*)this + 296, value);
}
// Member Getter and Setter of OnCombatCauserLeft
// Declaration: TAssetPtr<class FOnCombatCauserLeft__DelegateSignature> OnCombatCauserLeft
TAssetPtr<class FOnCombatCauserLeft__DelegateSignature> UBP_CombatComponent_C::M_GetOnCombatCauserLeft() const {
	return Read<TAssetPtr<class FOnCombatCauserLeft__DelegateSignature>>((byte*)this + 312);
}
TAssetPtr<class FOnCombatCauserLeft__DelegateSignature>* UBP_CombatComponent_C::M_PtrGetOnCombatCauserLeft() {
	return reinterpret_cast<TAssetPtr<class FOnCombatCauserLeft__DelegateSignature>*>((byte*)this + 312);
}
void UBP_CombatComponent_C::M_SetOnCombatCauserLeft(const TAssetPtr<class FOnCombatCauserLeft__DelegateSignature>& value) {
	Write((byte*)this + 312, value);
}
// Member Getter and Setter of Players
// Declaration: TMap<class AActor*, unsigned char> Players
TMap<class AActor*, unsigned char> UBP_CombatComponent_C::M_GetPlayers() const {
	return Read<TMap<class AActor*, unsigned char>>((byte*)this + 328);
}
TMap<class AActor*, unsigned char>* UBP_CombatComponent_C::M_PtrGetPlayers() {
	return reinterpret_cast<TMap<class AActor*, unsigned char>*>((byte*)this + 328);
}
void UBP_CombatComponent_C::M_SetPlayers(const TMap<class AActor*, unsigned char>& value) {
	Write((byte*)this + 328, value);
}
// Member Getter and Setter of PlayerCombatCheckTimer
// Declaration: struct FTimerHandle PlayerCombatCheckTimer
struct FTimerHandle UBP_CombatComponent_C::M_GetPlayerCombatCheckTimer() const {
	return Read<struct FTimerHandle>((byte*)this + 408);
}
struct FTimerHandle* UBP_CombatComponent_C::M_PtrGetPlayerCombatCheckTimer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 408);
}
void UBP_CombatComponent_C::M_SetPlayerCombatCheckTimer(const struct FTimerHandle& value) {
	Write((byte*)this + 408, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BP_CombatComponent.BP_CombatComponent_C.OnEnteredCombat__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CombatComponent_C::OnEnteredCombat__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CombatComponent.BP_CombatComponent_C.OnEnteredCombat__DelegateSignature");

	struct UBP_CombatComponent_C_OnEnteredCombat__DelegateSignature_Params {
	};
	UBP_CombatComponent_C_OnEnteredCombat__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CombatComponent.BP_CombatComponent_C.OnLeaveCombat__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CombatComponent_C::OnLeaveCombat__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CombatComponent.BP_CombatComponent_C.OnLeaveCombat__DelegateSignature");

	struct UBP_CombatComponent_C_OnLeaveCombat__DelegateSignature_Params {
	};
	UBP_CombatComponent_C_OnLeaveCombat__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CombatComponent.BP_CombatComponent_C.OnCombatCheck__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CombatComponent_C::OnCombatCheck__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CombatComponent.BP_CombatComponent_C.OnCombatCheck__DelegateSignature");

	struct UBP_CombatComponent_C_OnCombatCheck__DelegateSignature_Params {
	};
	UBP_CombatComponent_C_OnCombatCheck__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CombatComponent.BP_CombatComponent_C.OnCombatCauserEntered__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: CombatCauser	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CombatComponent_C::OnCombatCauserEntered__DelegateSignature(class AActor* CombatCauser) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CombatComponent.BP_CombatComponent_C.OnCombatCauserEntered__DelegateSignature");

	struct UBP_CombatComponent_C_OnCombatCauserEntered__DelegateSignature_Params {
		class AActor* CombatCauser;			//Offset: 0 | ElementSize: 8
	};
	UBP_CombatComponent_C_OnCombatCauserEntered__DelegateSignature_Params params;
	params.CombatCauser = CombatCauser;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CombatComponent.BP_CombatComponent_C.OnCombatCauserLeft__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: CombatCauser	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CombatComponent_C::OnCombatCauserLeft__DelegateSignature(class AActor* CombatCauser) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CombatComponent.BP_CombatComponent_C.OnCombatCauserLeft__DelegateSignature");

	struct UBP_CombatComponent_C_OnCombatCauserLeft__DelegateSignature_Params {
		class AActor* CombatCauser;			//Offset: 0 | ElementSize: 8
	};
	UBP_CombatComponent_C_OnCombatCauserLeft__DelegateSignature_Params params;
	params.CombatCauser = CombatCauser;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CombatComponent.BP_CombatComponent_C.ExecuteUbergraph_BP_CombatComponent
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CombatComponent_C::ExecuteUbergraph_BP_CombatComponent(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CombatComponent.BP_CombatComponent_C.ExecuteUbergraph_BP_CombatComponent");

	struct UBP_CombatComponent_C_ExecuteUbergraph_BP_CombatComponent_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	UBP_CombatComponent_C_ExecuteUbergraph_BP_CombatComponent_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CombatComponent.BP_CombatComponent_C.AddPlayerToCheck_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Player	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CombatComponent_C::AddPlayerToCheck_BPI(class AActor* Player) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CombatComponent.BP_CombatComponent_C.AddPlayerToCheck_BPI");

	struct UBP_CombatComponent_C_AddPlayerToCheck_BPI_Params {
		class AActor* Player;			//Offset: 0 | ElementSize: 8
	};
	UBP_CombatComponent_C_AddPlayerToCheck_BPI_Params params;
	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CombatComponent.BP_CombatComponent_C.ForceEndCombat BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CombatComponent_C::ForceEndCombat_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CombatComponent.BP_CombatComponent_C.ForceEndCombat BPI");

	struct UBP_CombatComponent_C_ForceEndCombat_BPI_Params {
	};
	UBP_CombatComponent_C_ForceEndCombat_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CombatComponent.BP_CombatComponent_C.EndCombat BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CombatCauser	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CombatComponent_C::EndCombat_BPI(class AActor* CombatCauser) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CombatComponent.BP_CombatComponent_C.EndCombat BPI");

	struct UBP_CombatComponent_C_EndCombat_BPI_Params {
		class AActor* CombatCauser;			//Offset: 0 | ElementSize: 8
	};
	UBP_CombatComponent_C_EndCombat_BPI_Params params;
	params.CombatCauser = CombatCauser;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CombatComponent.BP_CombatComponent_C.StartCombat BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CombatCauser	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CombatComponent_C::StartCombat_BPI(class AActor* CombatCauser) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CombatComponent.BP_CombatComponent_C.StartCombat BPI");

	struct UBP_CombatComponent_C_StartCombat_BPI_Params {
		class AActor* CombatCauser;			//Offset: 0 | ElementSize: 8
	};
	UBP_CombatComponent_C_StartCombat_BPI_Params params;
	params.CombatCauser = CombatCauser;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CombatComponent.BP_CombatComponent_C.PlayerCheck
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Causer	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CombatComponent_C::PlayerCheck(class AActor* Causer) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CombatComponent.BP_CombatComponent_C.PlayerCheck");

	struct UBP_CombatComponent_C_PlayerCheck_Params {
		class AActor* Causer;			//Offset: 0 | ElementSize: 8
	};
	UBP_CombatComponent_C_PlayerCheck_Params params;
	params.Causer = Causer;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CombatComponent.BP_CombatComponent_C.GetCombatCausers
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const
// Params:
// Name: CombatCausers	Type: TArray<class AActor*>	Flags: Parm, OutParm
/////////////////////////////////////////////
void UBP_CombatComponent_C::GetCombatCausers(TArray<class AActor*>* CombatCausers)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CombatComponent.BP_CombatComponent_C.GetCombatCausers");

	struct UBP_CombatComponent_C_GetCombatCausers_Params {
		TArray<class AActor*> CombatCausers;			//Offset: 0 | ElementSize: 16
	};
	UBP_CombatComponent_C_GetCombatCausers_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CombatCausers != nullptr)
		*CombatCausers = params.CombatCausers;
}

/////////////////////////////////////////////
// Function BP_CombatComponent.BP_CombatComponent_C.CombatCausersCheck
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CombatComponent_C::CombatCausersCheck() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CombatComponent.BP_CombatComponent_C.CombatCausersCheck");

	struct UBP_CombatComponent_C_CombatCausersCheck_Params {
	};
	UBP_CombatComponent_C_CombatCausersCheck_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CombatComponent.BP_CombatComponent_C.PlayerCombatCheck
// Flags: Private, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CombatComponent_C::PlayerCombatCheck() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CombatComponent.BP_CombatComponent_C.PlayerCombatCheck");

	struct UBP_CombatComponent_C_PlayerCombatCheck_Params {
	};
	UBP_CombatComponent_C_PlayerCombatCheck_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CombatComponent.BP_CombatComponent_C.OnRep_CombatCausers
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CombatComponent_C::OnRep_CombatCausers() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CombatComponent.BP_CombatComponent_C.OnRep_CombatCausers");

	struct UBP_CombatComponent_C_OnRep_CombatCausers_Params {
	};
	UBP_CombatComponent_C_OnRep_CombatCausers_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CombatComponent.BP_CombatComponent_C.IsInCombat BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: InCombat	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CombatComponent_C::IsInCombat_BPI(bool* InCombat)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CombatComponent.BP_CombatComponent_C.IsInCombat BPI");

	struct UBP_CombatComponent_C_IsInCombat_BPI_Params {
		bool InCombat;			//Offset: 0 | ElementSize: 1
	};
	UBP_CombatComponent_C_IsInCombat_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (InCombat != nullptr)
		*InCombat = params.InCombat;
}

/////////////////////////////////////////////
// Function BP_CombatComponent.BP_CombatComponent_C.GetCombatCausersBPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: CombatCausers	Type: TArray<class AActor*>	Flags: Parm, OutParm
/////////////////////////////////////////////
void UBP_CombatComponent_C::GetCombatCausersBPI(TArray<class AActor*>* CombatCausers)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CombatComponent.BP_CombatComponent_C.GetCombatCausersBPI");

	struct UBP_CombatComponent_C_GetCombatCausersBPI_Params {
		TArray<class AActor*> CombatCausers;			//Offset: 0 | ElementSize: 16
	};
	UBP_CombatComponent_C_GetCombatCausersBPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CombatCausers != nullptr)
		*CombatCausers = params.CombatCausers;
}

#pragma endregion
}