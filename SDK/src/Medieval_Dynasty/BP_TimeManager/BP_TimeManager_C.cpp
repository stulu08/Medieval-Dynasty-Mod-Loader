#include "../SDK.h"
#include "BP_TimeManager_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame ABP_TimeManager_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 544);
}
struct FPointerToUberGraphFrame* ABP_TimeManager_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 544);
}
void ABP_TimeManager_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 544, value);
}
// Member Getter and Setter of DefaultSceneRoot
// Declaration: class USceneComponent* DefaultSceneRoot
class USceneComponent* ABP_TimeManager_C::M_GetDefaultSceneRoot() const {
	return Read<class USceneComponent*>((byte*)this + 552);
}
class USceneComponent** ABP_TimeManager_C::M_PtrGetDefaultSceneRoot() {
	return reinterpret_cast<class USceneComponent**>((byte*)this + 552);
}
void ABP_TimeManager_C::M_SetDefaultSceneRoot(const class USceneComponent*& value) {
	Write((byte*)this + 552, value);
}
// Member Getter and Setter of StartTime
// Declaration: struct FST_Time StartTime
struct FST_Time ABP_TimeManager_C::M_GetStartTime() const {
	return Read<struct FST_Time>((byte*)this + 560);
}
struct FST_Time* ABP_TimeManager_C::M_PtrGetStartTime() {
	return reinterpret_cast<struct FST_Time*>((byte*)this + 560);
}
void ABP_TimeManager_C::M_SetStartTime(const struct FST_Time& value) {
	Write((byte*)this + 560, value);
}
// Member Getter and Setter of StartWeatherVariation
// Declaration: int32_t StartWeatherVariation
int32_t ABP_TimeManager_C::M_GetStartWeatherVariation() const {
	return Read<int32_t>((byte*)this + 584);
}
int32_t* ABP_TimeManager_C::M_PtrGetStartWeatherVariation() {
	return reinterpret_cast<int32_t*>((byte*)this + 584);
}
void ABP_TimeManager_C::M_SetStartWeatherVariation(const int32_t& value) {
	Write((byte*)this + 584, value);
}
// Member Getter and Setter of MainMenuTime
// Declaration: struct FST_Time MainMenuTime
struct FST_Time ABP_TimeManager_C::M_GetMainMenuTime() const {
	return Read<struct FST_Time>((byte*)this + 588);
}
struct FST_Time* ABP_TimeManager_C::M_PtrGetMainMenuTime() {
	return reinterpret_cast<struct FST_Time*>((byte*)this + 588);
}
void ABP_TimeManager_C::M_SetMainMenuTime(const struct FST_Time& value) {
	Write((byte*)this + 588, value);
}
// Member Getter and Setter of MainMenuWeatherVariant
// Declaration: int32_t MainMenuWeatherVariant
int32_t ABP_TimeManager_C::M_GetMainMenuWeatherVariant() const {
	return Read<int32_t>((byte*)this + 612);
}
int32_t* ABP_TimeManager_C::M_PtrGetMainMenuWeatherVariant() {
	return reinterpret_cast<int32_t*>((byte*)this + 612);
}
void ABP_TimeManager_C::M_SetMainMenuWeatherVariant(const int32_t& value) {
	Write((byte*)this + 612, value);
}
// Member Getter and Setter of MainMenuRandomSeason
// Declaration: bool MainMenuRandomSeason
bool ABP_TimeManager_C::M_GetMainMenuRandomSeason() const {
	return Read<bool>((byte*)this + 616);
}
bool* ABP_TimeManager_C::M_PtrGetMainMenuRandomSeason() {
	return reinterpret_cast<bool*>((byte*)this + 616);
}
void ABP_TimeManager_C::M_SetMainMenuRandomSeason(const bool& value) {
	Write((byte*)this + 616, value);
}
// Member Getter and Setter of HourAfterSkip
// Declaration: struct FST_Hour HourAfterSkip
struct FST_Hour ABP_TimeManager_C::M_GetHourAfterSkip() const {
	return Read<struct FST_Hour>((byte*)this + 620);
}
struct FST_Hour* ABP_TimeManager_C::M_PtrGetHourAfterSkip() {
	return reinterpret_cast<struct FST_Hour*>((byte*)this + 620);
}
void ABP_TimeManager_C::M_SetHourAfterSkip(const struct FST_Hour& value) {
	Write((byte*)this + 620, value);
}
// Member Getter and Setter of Timespan
// Declaration: int32_t Timespan
int32_t ABP_TimeManager_C::M_GetTimespan() const {
	return Read<int32_t>((byte*)this + 632);
}
int32_t* ABP_TimeManager_C::M_PtrGetTimespan() {
	return reinterpret_cast<int32_t*>((byte*)this + 632);
}
void ABP_TimeManager_C::M_SetTimespan(const int32_t& value) {
	Write((byte*)this + 632, value);
}
// Member Getter and Setter of TimeUpdateDelay
// Declaration: float TimeUpdateDelay
float ABP_TimeManager_C::M_GetTimeUpdateDelay() const {
	return Read<float>((byte*)this + 636);
}
float* ABP_TimeManager_C::M_PtrGetTimeUpdateDelay() {
	return reinterpret_cast<float*>((byte*)this + 636);
}
void ABP_TimeManager_C::M_SetTimeUpdateDelay(const float& value) {
	Write((byte*)this + 636, value);
}
// Member Getter and Setter of OnTimeOfDayChanged
// Declaration: TAssetPtr<class FOnTimeOfDayChanged__DelegateSignature> OnTimeOfDayChanged
TAssetPtr<class FOnTimeOfDayChanged__DelegateSignature> ABP_TimeManager_C::M_GetOnTimeOfDayChanged() const {
	return Read<TAssetPtr<class FOnTimeOfDayChanged__DelegateSignature>>((byte*)this + 640);
}
TAssetPtr<class FOnTimeOfDayChanged__DelegateSignature>* ABP_TimeManager_C::M_PtrGetOnTimeOfDayChanged() {
	return reinterpret_cast<TAssetPtr<class FOnTimeOfDayChanged__DelegateSignature>*>((byte*)this + 640);
}
void ABP_TimeManager_C::M_SetOnTimeOfDayChanged(const TAssetPtr<class FOnTimeOfDayChanged__DelegateSignature>& value) {
	Write((byte*)this + 640, value);
}
// Member Getter and Setter of TimeOfDay
// Declaration: TEnumAsByte<E_TimeOfDay> TimeOfDay
TEnumAsByte<E_TimeOfDay> ABP_TimeManager_C::M_GetTimeOfDay() const {
	return Read<TEnumAsByte<E_TimeOfDay>>((byte*)this + 656);
}
TEnumAsByte<E_TimeOfDay>* ABP_TimeManager_C::M_PtrGetTimeOfDay() {
	return reinterpret_cast<TEnumAsByte<E_TimeOfDay>*>((byte*)this + 656);
}
void ABP_TimeManager_C::M_SetTimeOfDay(const TEnumAsByte<E_TimeOfDay>& value) {
	Write((byte*)this + 656, value);
}
// Member Getter and Setter of Time
// Declaration: struct FST_Time Time
struct FST_Time ABP_TimeManager_C::M_GetTime() const {
	return Read<struct FST_Time>((byte*)this + 660);
}
struct FST_Time* ABP_TimeManager_C::M_PtrGetTime() {
	return reinterpret_cast<struct FST_Time*>((byte*)this + 660);
}
void ABP_TimeManager_C::M_SetTime(const struct FST_Time& value) {
	Write((byte*)this + 660, value);
}
// Member Getter and Setter of SystemsManagerReference
// Declaration: class ABP_SystemsManager_C* SystemsManagerReference
class ABP_SystemsManager_C* ABP_TimeManager_C::M_GetSystemsManagerReference() const {
	return Read<class ABP_SystemsManager_C*>((byte*)this + 688);
}
class ABP_SystemsManager_C** ABP_TimeManager_C::M_PtrGetSystemsManagerReference() {
	return reinterpret_cast<class ABP_SystemsManager_C**>((byte*)this + 688);
}
void ABP_TimeManager_C::M_SetSystemsManagerReference(const class ABP_SystemsManager_C*& value) {
	Write((byte*)this + 688, value);
}
// Member Getter and Setter of TimerReference
// Declaration: struct FTimerHandle TimerReference
struct FTimerHandle ABP_TimeManager_C::M_GetTimerReference() const {
	return Read<struct FTimerHandle>((byte*)this + 696);
}
struct FTimerHandle* ABP_TimeManager_C::M_PtrGetTimerReference() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 696);
}
void ABP_TimeManager_C::M_SetTimerReference(const struct FTimerHandle& value) {
	Write((byte*)this + 696, value);
}
// Member Getter and Setter of TimeMultiplier
// Declaration: float TimeMultiplier
float ABP_TimeManager_C::M_GetTimeMultiplier() const {
	return Read<float>((byte*)this + 704);
}
float* ABP_TimeManager_C::M_PtrGetTimeMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 704);
}
void ABP_TimeManager_C::M_SetTimeMultiplier(const float& value) {
	Write((byte*)this + 704, value);
}
// Member Getter and Setter of OnDaySkip
// Declaration: TAssetPtr<class FOnDaySkip__DelegateSignature> OnDaySkip
TAssetPtr<class FOnDaySkip__DelegateSignature> ABP_TimeManager_C::M_GetOnDaySkip() const {
	return Read<TAssetPtr<class FOnDaySkip__DelegateSignature>>((byte*)this + 712);
}
TAssetPtr<class FOnDaySkip__DelegateSignature>* ABP_TimeManager_C::M_PtrGetOnDaySkip() {
	return reinterpret_cast<TAssetPtr<class FOnDaySkip__DelegateSignature>*>((byte*)this + 712);
}
void ABP_TimeManager_C::M_SetOnDaySkip(const TAssetPtr<class FOnDaySkip__DelegateSignature>& value) {
	Write((byte*)this + 712, value);
}
// Member Getter and Setter of PauseTime
// Declaration: struct FST_Hour PauseTime
struct FST_Hour ABP_TimeManager_C::M_GetPauseTime() const {
	return Read<struct FST_Hour>((byte*)this + 728);
}
struct FST_Hour* ABP_TimeManager_C::M_PtrGetPauseTime() {
	return reinterpret_cast<struct FST_Hour*>((byte*)this + 728);
}
void ABP_TimeManager_C::M_SetPauseTime(const struct FST_Hour& value) {
	Write((byte*)this + 728, value);
}
// Member Getter and Setter of CheckPauseTime
// Declaration: bool CheckPauseTime
bool ABP_TimeManager_C::M_GetCheckPauseTime() const {
	return Read<bool>((byte*)this + 740);
}
bool* ABP_TimeManager_C::M_PtrGetCheckPauseTime() {
	return reinterpret_cast<bool*>((byte*)this + 740);
}
void ABP_TimeManager_C::M_SetCheckPauseTime(const bool& value) {
	Write((byte*)this + 740, value);
}
// Member Getter and Setter of OnTimeUpdate
// Declaration: TAssetPtr<class FOnTimeUpdate__DelegateSignature> OnTimeUpdate
TAssetPtr<class FOnTimeUpdate__DelegateSignature> ABP_TimeManager_C::M_GetOnTimeUpdate() const {
	return Read<TAssetPtr<class FOnTimeUpdate__DelegateSignature>>((byte*)this + 744);
}
TAssetPtr<class FOnTimeUpdate__DelegateSignature>* ABP_TimeManager_C::M_PtrGetOnTimeUpdate() {
	return reinterpret_cast<TAssetPtr<class FOnTimeUpdate__DelegateSignature>*>((byte*)this + 744);
}
void ABP_TimeManager_C::M_SetOnTimeUpdate(const TAssetPtr<class FOnTimeUpdate__DelegateSignature>& value) {
	Write((byte*)this + 744, value);
}
// Member Getter and Setter of OnTimeUpdate_Minutes
// Declaration: TAssetPtr<class FOnTimeUpdate_Minutes__DelegateSignature> OnTimeUpdate_Minutes
TAssetPtr<class FOnTimeUpdate_Minutes__DelegateSignature> ABP_TimeManager_C::M_GetOnTimeUpdate_Minutes() const {
	return Read<TAssetPtr<class FOnTimeUpdate_Minutes__DelegateSignature>>((byte*)this + 760);
}
TAssetPtr<class FOnTimeUpdate_Minutes__DelegateSignature>* ABP_TimeManager_C::M_PtrGetOnTimeUpdate_Minutes() {
	return reinterpret_cast<TAssetPtr<class FOnTimeUpdate_Minutes__DelegateSignature>*>((byte*)this + 760);
}
void ABP_TimeManager_C::M_SetOnTimeUpdate_Minutes(const TAssetPtr<class FOnTimeUpdate_Minutes__DelegateSignature>& value) {
	Write((byte*)this + 760, value);
}
// Member Getter and Setter of OnTimeUpdate_Hours
// Declaration: TAssetPtr<class FOnTimeUpdate_Hours__DelegateSignature> OnTimeUpdate_Hours
TAssetPtr<class FOnTimeUpdate_Hours__DelegateSignature> ABP_TimeManager_C::M_GetOnTimeUpdate_Hours() const {
	return Read<TAssetPtr<class FOnTimeUpdate_Hours__DelegateSignature>>((byte*)this + 776);
}
TAssetPtr<class FOnTimeUpdate_Hours__DelegateSignature>* ABP_TimeManager_C::M_PtrGetOnTimeUpdate_Hours() {
	return reinterpret_cast<TAssetPtr<class FOnTimeUpdate_Hours__DelegateSignature>*>((byte*)this + 776);
}
void ABP_TimeManager_C::M_SetOnTimeUpdate_Hours(const TAssetPtr<class FOnTimeUpdate_Hours__DelegateSignature>& value) {
	Write((byte*)this + 776, value);
}
// Member Getter and Setter of OnTimeUpdate_Days
// Declaration: TAssetPtr<class FOnTimeUpdate_Days__DelegateSignature> OnTimeUpdate_Days
TAssetPtr<class FOnTimeUpdate_Days__DelegateSignature> ABP_TimeManager_C::M_GetOnTimeUpdate_Days() const {
	return Read<TAssetPtr<class FOnTimeUpdate_Days__DelegateSignature>>((byte*)this + 792);
}
TAssetPtr<class FOnTimeUpdate_Days__DelegateSignature>* ABP_TimeManager_C::M_PtrGetOnTimeUpdate_Days() {
	return reinterpret_cast<TAssetPtr<class FOnTimeUpdate_Days__DelegateSignature>*>((byte*)this + 792);
}
void ABP_TimeManager_C::M_SetOnTimeUpdate_Days(const TAssetPtr<class FOnTimeUpdate_Days__DelegateSignature>& value) {
	Write((byte*)this + 792, value);
}
// Member Getter and Setter of OnSeasonChanged
// Declaration: TAssetPtr<class FOnSeasonChanged__DelegateSignature> OnSeasonChanged
TAssetPtr<class FOnSeasonChanged__DelegateSignature> ABP_TimeManager_C::M_GetOnSeasonChanged() const {
	return Read<TAssetPtr<class FOnSeasonChanged__DelegateSignature>>((byte*)this + 808);
}
TAssetPtr<class FOnSeasonChanged__DelegateSignature>* ABP_TimeManager_C::M_PtrGetOnSeasonChanged() {
	return reinterpret_cast<TAssetPtr<class FOnSeasonChanged__DelegateSignature>*>((byte*)this + 808);
}
void ABP_TimeManager_C::M_SetOnSeasonChanged(const TAssetPtr<class FOnSeasonChanged__DelegateSignature>& value) {
	Write((byte*)this + 808, value);
}
// Member Getter and Setter of SleepTimeStart
// Declaration: struct FST_Hour SleepTimeStart
struct FST_Hour ABP_TimeManager_C::M_GetSleepTimeStart() const {
	return Read<struct FST_Hour>((byte*)this + 824);
}
struct FST_Hour* ABP_TimeManager_C::M_PtrGetSleepTimeStart() {
	return reinterpret_cast<struct FST_Hour*>((byte*)this + 824);
}
void ABP_TimeManager_C::M_SetSleepTimeStart(const struct FST_Hour& value) {
	Write((byte*)this + 824, value);
}
// Member Getter and Setter of SleepTimeEnd
// Declaration: struct FST_Hour SleepTimeEnd
struct FST_Hour ABP_TimeManager_C::M_GetSleepTimeEnd() const {
	return Read<struct FST_Hour>((byte*)this + 836);
}
struct FST_Hour* ABP_TimeManager_C::M_PtrGetSleepTimeEnd() {
	return reinterpret_cast<struct FST_Hour*>((byte*)this + 836);
}
void ABP_TimeManager_C::M_SetSleepTimeEnd(const struct FST_Hour& value) {
	Write((byte*)this + 836, value);
}
// Member Getter and Setter of TotalSecondsToSkipSeason
// Declaration: int32_t TotalSecondsToSkipSeason
int32_t ABP_TimeManager_C::M_GetTotalSecondsToSkipSeason() const {
	return Read<int32_t>((byte*)this + 848);
}
int32_t* ABP_TimeManager_C::M_PtrGetTotalSecondsToSkipSeason() {
	return reinterpret_cast<int32_t*>((byte*)this + 848);
}
void ABP_TimeManager_C::M_SetTotalSecondsToSkipSeason(const int32_t& value) {
	Write((byte*)this + 848, value);
}
// Member Getter and Setter of ChangeTimeOnSkip
// Declaration: bool ChangeTimeOnSkip
bool ABP_TimeManager_C::M_GetChangeTimeOnSkip() const {
	return Read<bool>((byte*)this + 852);
}
bool* ABP_TimeManager_C::M_PtrGetChangeTimeOnSkip() {
	return reinterpret_cast<bool*>((byte*)this + 852);
}
void ABP_TimeManager_C::M_SetChangeTimeOnSkip(const bool& value) {
	Write((byte*)this + 852, value);
}
// Member Getter and Setter of OnSeasonChanged_End
// Declaration: TAssetPtr<class FOnSeasonChanged_End__DelegateSignature> OnSeasonChanged_End
TAssetPtr<class FOnSeasonChanged_End__DelegateSignature> ABP_TimeManager_C::M_GetOnSeasonChanged_End() const {
	return Read<TAssetPtr<class FOnSeasonChanged_End__DelegateSignature>>((byte*)this + 856);
}
TAssetPtr<class FOnSeasonChanged_End__DelegateSignature>* ABP_TimeManager_C::M_PtrGetOnSeasonChanged_End() {
	return reinterpret_cast<TAssetPtr<class FOnSeasonChanged_End__DelegateSignature>*>((byte*)this + 856);
}
void ABP_TimeManager_C::M_SetOnSeasonChanged_End(const TAssetPtr<class FOnSeasonChanged_End__DelegateSignature>& value) {
	Write((byte*)this + 856, value);
}
// Member Getter and Setter of IsSkippingInProgress
// Declaration: bool IsSkippingInProgress
bool ABP_TimeManager_C::M_GetIsSkippingInProgress() const {
	return Read<bool>((byte*)this + 872);
}
bool* ABP_TimeManager_C::M_PtrGetIsSkippingInProgress() {
	return reinterpret_cast<bool*>((byte*)this + 872);
}
void ABP_TimeManager_C::M_SetIsSkippingInProgress(const bool& value) {
	Write((byte*)this + 872, value);
}
// Member Getter and Setter of IteratorNumber
// Declaration: int32_t IteratorNumber
int32_t ABP_TimeManager_C::M_GetIteratorNumber() const {
	return Read<int32_t>((byte*)this + 876);
}
int32_t* ABP_TimeManager_C::M_PtrGetIteratorNumber() {
	return reinterpret_cast<int32_t*>((byte*)this + 876);
}
void ABP_TimeManager_C::M_SetIteratorNumber(const int32_t& value) {
	Write((byte*)this + 876, value);
}
// Member Getter and Setter of TimeFlowStoppedByCheat
// Declaration: bool TimeFlowStoppedByCheat
bool ABP_TimeManager_C::M_GetTimeFlowStoppedByCheat() const {
	return Read<bool>((byte*)this + 880);
}
bool* ABP_TimeManager_C::M_PtrGetTimeFlowStoppedByCheat() {
	return reinterpret_cast<bool*>((byte*)this + 880);
}
void ABP_TimeManager_C::M_SetTimeFlowStoppedByCheat(const bool& value) {
	Write((byte*)this + 880, value);
}
// Member Getter and Setter of Teleport_Player
// Declaration: bool Teleport_Player
bool ABP_TimeManager_C::M_GetTeleport_Player() const {
	return Read<bool>((byte*)this + 881);
}
bool* ABP_TimeManager_C::M_PtrGetTeleport_Player() {
	return reinterpret_cast<bool*>((byte*)this + 881);
}
void ABP_TimeManager_C::M_SetTeleport_Player(const bool& value) {
	Write((byte*)this + 881, value);
}
// Member Getter and Setter of TimeToAutosave
// Declaration: float TimeToAutosave
float ABP_TimeManager_C::M_GetTimeToAutosave() const {
	return Read<float>((byte*)this + 884);
}
float* ABP_TimeManager_C::M_PtrGetTimeToAutosave() {
	return reinterpret_cast<float*>((byte*)this + 884);
}
void ABP_TimeManager_C::M_SetTimeToAutosave(const float& value) {
	Write((byte*)this + 884, value);
}
// Member Getter and Setter of RemainingTimeToAutosave
// Declaration: float RemainingTimeToAutosave
float ABP_TimeManager_C::M_GetRemainingTimeToAutosave() const {
	return Read<float>((byte*)this + 888);
}
float* ABP_TimeManager_C::M_PtrGetRemainingTimeToAutosave() {
	return reinterpret_cast<float*>((byte*)this + 888);
}
void ABP_TimeManager_C::M_SetRemainingTimeToAutosave(const float& value) {
	Write((byte*)this + 888, value);
}
// Member Getter and Setter of OnGameStart
// Declaration: TAssetPtr<class FOnGameStart__DelegateSignature> OnGameStart
TAssetPtr<class FOnGameStart__DelegateSignature> ABP_TimeManager_C::M_GetOnGameStart() const {
	return Read<TAssetPtr<class FOnGameStart__DelegateSignature>>((byte*)this + 896);
}
TAssetPtr<class FOnGameStart__DelegateSignature>* ABP_TimeManager_C::M_PtrGetOnGameStart() {
	return reinterpret_cast<TAssetPtr<class FOnGameStart__DelegateSignature>*>((byte*)this + 896);
}
void ABP_TimeManager_C::M_SetOnGameStart(const TAssetPtr<class FOnGameStart__DelegateSignature>& value) {
	Write((byte*)this + 896, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.OnTimeOfDayChanged__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: TimeOfDay	Type: TEnumAsByte<E_TimeOfDay>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_TimeManager_C::OnTimeOfDayChanged__DelegateSignature(TEnumAsByte<E_TimeOfDay> TimeOfDay) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.OnTimeOfDayChanged__DelegateSignature");

	struct ABP_TimeManager_C_OnTimeOfDayChanged__DelegateSignature_Params {
		TEnumAsByte<E_TimeOfDay> TimeOfDay;			//Offset: 0 | ElementSize: 1
	};
	ABP_TimeManager_C_OnTimeOfDayChanged__DelegateSignature_Params params;
	params.TimeOfDay = TimeOfDay;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.OnDaySkip__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_TimeManager_C::OnDaySkip__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.OnDaySkip__DelegateSignature");

	struct ABP_TimeManager_C_OnDaySkip__DelegateSignature_Params {
	};
	ABP_TimeManager_C_OnDaySkip__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.OnTimeUpdate__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: IteratorNumber	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_TimeManager_C::OnTimeUpdate__DelegateSignature(int32_t IteratorNumber) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.OnTimeUpdate__DelegateSignature");

	struct ABP_TimeManager_C_OnTimeUpdate__DelegateSignature_Params {
		int32_t IteratorNumber;			//Offset: 0 | ElementSize: 4
	};
	ABP_TimeManager_C_OnTimeUpdate__DelegateSignature_Params params;
	params.IteratorNumber = IteratorNumber;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.OnTimeUpdate_Minutes__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_TimeManager_C::OnTimeUpdate_Minutes__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.OnTimeUpdate_Minutes__DelegateSignature");

	struct ABP_TimeManager_C_OnTimeUpdate_Minutes__DelegateSignature_Params {
	};
	ABP_TimeManager_C_OnTimeUpdate_Minutes__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.OnTimeUpdate_Hours__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_TimeManager_C::OnTimeUpdate_Hours__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.OnTimeUpdate_Hours__DelegateSignature");

	struct ABP_TimeManager_C_OnTimeUpdate_Hours__DelegateSignature_Params {
	};
	ABP_TimeManager_C_OnTimeUpdate_Hours__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.OnTimeUpdate_Days__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_TimeManager_C::OnTimeUpdate_Days__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.OnTimeUpdate_Days__DelegateSignature");

	struct ABP_TimeManager_C_OnTimeUpdate_Days__DelegateSignature_Params {
	};
	ABP_TimeManager_C_OnTimeUpdate_Days__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.OnSeasonChanged__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_TimeManager_C::OnSeasonChanged__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.OnSeasonChanged__DelegateSignature");

	struct ABP_TimeManager_C_OnSeasonChanged__DelegateSignature_Params {
	};
	ABP_TimeManager_C_OnSeasonChanged__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.OnSeasonChanged_End__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_TimeManager_C::OnSeasonChanged_End__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.OnSeasonChanged_End__DelegateSignature");

	struct ABP_TimeManager_C_OnSeasonChanged_End__DelegateSignature_Params {
	};
	ABP_TimeManager_C_OnSeasonChanged_End__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.OnGameStart__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_TimeManager_C::OnGameStart__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.OnGameStart__DelegateSignature");

	struct ABP_TimeManager_C_OnGameStart__DelegateSignature_Params {
	};
	ABP_TimeManager_C_OnGameStart__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.ExecuteUbergraph_BP_TimeManager
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_TimeManager_C::ExecuteUbergraph_BP_TimeManager(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.ExecuteUbergraph_BP_TimeManager");

	struct ABP_TimeManager_C_ExecuteUbergraph_BP_TimeManager_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	ABP_TimeManager_C_ExecuteUbergraph_BP_TimeManager_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.SkipCameraUnfaded
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_TimeManager_C::SkipCameraUnfaded() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.SkipCameraUnfaded");

	struct ABP_TimeManager_C_SkipCameraUnfaded_Params {
	};
	ABP_TimeManager_C_SkipCameraUnfaded_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.SleepCameraUnfaded
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_TimeManager_C::SleepCameraUnfaded() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.SleepCameraUnfaded");

	struct ABP_TimeManager_C_SleepCameraUnfaded_Params {
	};
	ABP_TimeManager_C_SleepCameraUnfaded_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.StopSkipSeasonCheck
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_TimeManager_C::StopSkipSeasonCheck() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.StopSkipSeasonCheck");

	struct ABP_TimeManager_C_StopSkipSeasonCheck_Params {
	};
	ABP_TimeManager_C_StopSkipSeasonCheck_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.SkipWhenPosible
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_TimeManager_C::SkipWhenPosible() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.SkipWhenPosible");

	struct ABP_TimeManager_C_SkipWhenPosible_Params {
	};
	ABP_TimeManager_C_SkipWhenPosible_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.SeasonSkipFinish
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_TimeManager_C::SeasonSkipFinish() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.SeasonSkipFinish");

	struct ABP_TimeManager_C_SeasonSkipFinish_Params {
	};
	ABP_TimeManager_C_SeasonSkipFinish_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.StopFadeSkipSeason
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_TimeManager_C::StopFadeSkipSeason() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.StopFadeSkipSeason");

	struct ABP_TimeManager_C_StopFadeSkipSeason_Params {
	};
	ABP_TimeManager_C_StopFadeSkipSeason_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.StopFadeSkipDay
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_TimeManager_C::StopFadeSkipDay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.StopFadeSkipDay");

	struct ABP_TimeManager_C_StopFadeSkipDay_Params {
	};
	ABP_TimeManager_C_StopFadeSkipDay_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.ReceiveBeginPlay
// Flags: Event, Protected, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_TimeManager_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.ReceiveBeginPlay");

	struct ABP_TimeManager_C_ReceiveBeginPlay_Params {
	};
	ABP_TimeManager_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.InstantlyUpdateTimeAndWeather
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Time	Type: struct FST_Time	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: RandomWeather	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: WeatherVariant	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: RandomCloudDensity	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_TimeManager_C::InstantlyUpdateTimeAndWeather(struct FST_Time Time, bool RandomWeather, int32_t WeatherVariant, bool RandomCloudDensity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.InstantlyUpdateTimeAndWeather");

	struct ABP_TimeManager_C_InstantlyUpdateTimeAndWeather_Params {
		struct FST_Time Time;			//Offset: 0 | ElementSize: 24
		bool RandomWeather;			//Offset: 24 | ElementSize: 1
		int32_t WeatherVariant;			//Offset: 28 | ElementSize: 4
		bool RandomCloudDensity;			//Offset: 32 | ElementSize: 1
	};
	ABP_TimeManager_C_InstantlyUpdateTimeAndWeather_Params params;
	params.Time = Time;
	params.RandomWeather = RandomWeather;
	params.WeatherVariant = WeatherVariant;
	params.RandomCloudDensity = RandomCloudDensity;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.SkipSeason
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: ChangeTime	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_TimeManager_C::SkipSeason(bool ChangeTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.SkipSeason");

	struct ABP_TimeManager_C_SkipSeason_Params {
		bool ChangeTime;			//Offset: 0 | ElementSize: 1
	};
	ABP_TimeManager_C_SkipSeason_Params params;
	params.ChangeTime = ChangeTime;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.SkipDay
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: TeleportPlayer	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_TimeManager_C::SkipDay(bool TeleportPlayer) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.SkipDay");

	struct ABP_TimeManager_C_SkipDay_Params {
		bool TeleportPlayer;			//Offset: 0 | ElementSize: 1
	};
	ABP_TimeManager_C_SkipDay_Params params;
	params.TeleportPlayer = TeleportPlayer;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.UserConstructionScript
// Flags: Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_TimeManager_C::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.UserConstructionScript");

	struct ABP_TimeManager_C_UserConstructionScript_Params {
	};
	ABP_TimeManager_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.SetDayTime
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Hour	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ForceCallOnTimeOfDayChanged	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: LoadFromFile	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_TimeManager_C::SetDayTime(int32_t Hour, bool ForceCallOnTimeOfDayChanged, bool LoadFromFile) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.SetDayTime");

	struct ABP_TimeManager_C_SetDayTime_Params {
		int32_t Hour;			//Offset: 0 | ElementSize: 4
		bool ForceCallOnTimeOfDayChanged;			//Offset: 4 | ElementSize: 1
		bool LoadFromFile;			//Offset: 5 | ElementSize: 1
	};
	ABP_TimeManager_C_SetDayTime_Params params;
	params.Hour = Hour;
	params.ForceCallOnTimeOfDayChanged = ForceCallOnTimeOfDayChanged;
	params.LoadFromFile = LoadFromFile;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.CheckSeasonSkip
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_TimeManager_C::CheckSeasonSkip() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.CheckSeasonSkip");

	struct ABP_TimeManager_C_CheckSeasonSkip_Params {
	};
	ABP_TimeManager_C_CheckSeasonSkip_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.Init
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_TimeManager_C::Init() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.Init");

	struct ABP_TimeManager_C_Init_Params {
	};
	ABP_TimeManager_C_Init_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.StartTimer
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_TimeManager_C::StartTimer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.StartTimer");

	struct ABP_TimeManager_C_StartTimer_Params {
	};
	ABP_TimeManager_C_StartTimer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.StopTimer
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_TimeManager_C::StopTimer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.StopTimer");

	struct ABP_TimeManager_C_StopTimer_Params {
	};
	ABP_TimeManager_C_StopTimer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.SetPauseTime
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Hour	Type: struct FST_Hour	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_TimeManager_C::SetPauseTime(struct FST_Hour Hour) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.SetPauseTime");

	struct ABP_TimeManager_C_SetPauseTime_Params {
		struct FST_Hour Hour;			//Offset: 0 | ElementSize: 12
	};
	ABP_TimeManager_C_SetPauseTime_Params params;
	params.Hour = Hour;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.UpdateByTimer
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_TimeManager_C::UpdateByTimer() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.UpdateByTimer");

	struct ABP_TimeManager_C_UpdateByTimer_Params {
	};
	ABP_TimeManager_C_UpdateByTimer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.IncreaseTime
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Timespan	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_TimeManager_C::IncreaseTime(int32_t Timespan) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.IncreaseTime");

	struct ABP_TimeManager_C_IncreaseTime_Params {
		int32_t Timespan;			//Offset: 0 | ElementSize: 4
	};
	ABP_TimeManager_C_IncreaseTime_Params params;
	params.Timespan = Timespan;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.SetGlobalTimeSpeed
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: TimeDilation	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_TimeManager_C::SetGlobalTimeSpeed(float TimeDilation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.SetGlobalTimeSpeed");

	struct ABP_TimeManager_C_SetGlobalTimeSpeed_Params {
		float TimeDilation;			//Offset: 0 | ElementSize: 4
	};
	ABP_TimeManager_C_SetGlobalTimeSpeed_Params params;
	params.TimeDilation = TimeDilation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.RandomizeTime
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BeginTime	Type: struct FST_Time	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MinTimespan	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MaxTimespan	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: EndTime	Type: struct FST_Time	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_TimeManager_C::RandomizeTime(struct FST_Time BeginTime, int32_t MinTimespan, int32_t MaxTimespan, struct FST_Time* EndTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.RandomizeTime");

	struct ABP_TimeManager_C_RandomizeTime_Params {
		struct FST_Time BeginTime;			//Offset: 0 | ElementSize: 24
		int32_t MinTimespan;			//Offset: 24 | ElementSize: 4
		int32_t MaxTimespan;			//Offset: 28 | ElementSize: 4
		struct FST_Time EndTime;			//Offset: 32 | ElementSize: 24
	};
	ABP_TimeManager_C_RandomizeTime_Params params;
	params.BeginTime = BeginTime;
	params.MinTimespan = MinTimespan;
	params.MaxTimespan = MaxTimespan;

	UObject::ProcessEvent(fn, &params);
	if (EndTime != nullptr)
		*EndTime = params.EndTime;
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.CheckIfTimeIsPast
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Time	Type: struct FST_Time	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Passed	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_TimeManager_C::CheckIfTimeIsPast(struct FST_Time Time, bool* Passed) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.CheckIfTimeIsPast");

	struct ABP_TimeManager_C_CheckIfTimeIsPast_Params {
		struct FST_Time Time;			//Offset: 0 | ElementSize: 24
		bool Passed;			//Offset: 24 | ElementSize: 1
	};
	ABP_TimeManager_C_CheckIfTimeIsPast_Params params;
	params.Time = Time;

	UObject::ProcessEvent(fn, &params);
	if (Passed != nullptr)
		*Passed = params.Passed;
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.CheckifTimeIsInHourRange
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: BeginTime	Type: struct FST_Hour	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: EndTime	Type: struct FST_Hour	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_TimeManager_C::CheckifTimeIsInHourRange(struct FST_Hour BeginTime, struct FST_Hour EndTime, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.CheckifTimeIsInHourRange");

	struct ABP_TimeManager_C_CheckifTimeIsInHourRange_Params {
		struct FST_Hour BeginTime;			//Offset: 0 | ElementSize: 12
		struct FST_Hour EndTime;			//Offset: 12 | ElementSize: 12
		bool Success;			//Offset: 24 | ElementSize: 1
	};
	ABP_TimeManager_C_CheckifTimeIsInHourRange_Params params;
	params.BeginTime = BeginTime;
	params.EndTime = EndTime;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.CheckHowMuchTimeIsMissing_Hour
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: TargetTime	Type: struct FST_Time	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Passed	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Hour	Type: struct FST_Hour	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Seconds	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_TimeManager_C::CheckHowMuchTimeIsMissing_Hour(struct FST_Time TargetTime, bool* Passed, struct FST_Hour* Hour, int32_t* Seconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.CheckHowMuchTimeIsMissing_Hour");

	struct ABP_TimeManager_C_CheckHowMuchTimeIsMissing_Hour_Params {
		struct FST_Time TargetTime;			//Offset: 0 | ElementSize: 24
		bool Passed;			//Offset: 24 | ElementSize: 1
		struct FST_Hour Hour;			//Offset: 28 | ElementSize: 12
		int32_t Seconds;			//Offset: 40 | ElementSize: 4
	};
	ABP_TimeManager_C_CheckHowMuchTimeIsMissing_Hour_Params params;
	params.TargetTime = TargetTime;

	UObject::ProcessEvent(fn, &params);
	if (Passed != nullptr)
		*Passed = params.Passed;
	if (Hour != nullptr)
		*Hour = params.Hour;
	if (Seconds != nullptr)
		*Seconds = params.Seconds;
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.CheckHowMuchTimeIsMissingToSkipSeason
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: TargetTime	Type: struct FST_Time	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Passed	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Hour	Type: struct FST_Hour	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Days	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_TimeManager_C::CheckHowMuchTimeIsMissingToSkipSeason(struct FST_Time TargetTime, bool* Passed, struct FST_Hour* Hour, int32_t* Days) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.CheckHowMuchTimeIsMissingToSkipSeason");

	struct ABP_TimeManager_C_CheckHowMuchTimeIsMissingToSkipSeason_Params {
		struct FST_Time TargetTime;			//Offset: 0 | ElementSize: 24
		bool Passed;			//Offset: 24 | ElementSize: 1
		struct FST_Hour Hour;			//Offset: 28 | ElementSize: 12
		int32_t Days;			//Offset: 40 | ElementSize: 4
	};
	ABP_TimeManager_C_CheckHowMuchTimeIsMissingToSkipSeason_Params params;
	params.TargetTime = TargetTime;

	UObject::ProcessEvent(fn, &params);
	if (Passed != nullptr)
		*Passed = params.Passed;
	if (Hour != nullptr)
		*Hour = params.Hour;
	if (Days != nullptr)
		*Days = params.Days;
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.IsItPossibleToSkipSeason
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Time	Type: struct FST_Time	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_TimeManager_C::IsItPossibleToSkipSeason(bool* Success, struct FST_Time* Time) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.IsItPossibleToSkipSeason");

	struct ABP_TimeManager_C_IsItPossibleToSkipSeason_Params {
		bool Success;			//Offset: 0 | ElementSize: 1
		struct FST_Time Time;			//Offset: 4 | ElementSize: 24
	};
	ABP_TimeManager_C_IsItPossibleToSkipSeason_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (Time != nullptr)
		*Time = params.Time;
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.IsItPossibleToSleep
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Hour	Type: struct FST_Hour	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_TimeManager_C::IsItPossibleToSleep(bool* Success, struct FST_Hour* Hour) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.IsItPossibleToSleep");

	struct ABP_TimeManager_C_IsItPossibleToSleep_Params {
		bool Success;			//Offset: 0 | ElementSize: 1
		struct FST_Hour Hour;			//Offset: 4 | ElementSize: 12
	};
	ABP_TimeManager_C_IsItPossibleToSleep_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (Hour != nullptr)
		*Hour = params.Hour;
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.LoadSaveFileIntoSystem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_TimeManager_C::LoadSaveFileIntoSystem(class USAVE_Game_C* SaveReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.LoadSaveFileIntoSystem");

	struct ABP_TimeManager_C_LoadSaveFileIntoSystem_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_TimeManager_C_LoadSaveFileIntoSystem_Params params;
	params.SaveReference = SaveReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.SaveDataFromSystemToFile
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_TimeManager_C::SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.SaveDataFromSystemToFile");

	struct ABP_TimeManager_C_SaveDataFromSystemToFile_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
	};
	ABP_TimeManager_C_SaveDataFromSystemToFile_Params params;
	params.SaveReference = SaveReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.StartTimeManager
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: LoadGame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: MainMenu	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_TimeManager_C::StartTimeManager(bool LoadGame, bool MainMenu) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.StartTimeManager");

	struct ABP_TimeManager_C_StartTimeManager_Params {
		bool LoadGame;			//Offset: 0 | ElementSize: 1
		bool MainMenu;			//Offset: 1 | ElementSize: 1
	};
	ABP_TimeManager_C_StartTimeManager_Params params;
	params.LoadGame = LoadGame;
	params.MainMenu = MainMenu;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.GetCurrentSeason
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Season	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Season_Enum	Type: TEnumAsByte<E_Seasons>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_TimeManager_C::GetCurrentSeason(int32_t* Season, TEnumAsByte<E_Seasons>* Season_Enum) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.GetCurrentSeason");

	struct ABP_TimeManager_C_GetCurrentSeason_Params {
		int32_t Season;			//Offset: 0 | ElementSize: 4
		TEnumAsByte<E_Seasons> Season_Enum;			//Offset: 4 | ElementSize: 1
	};
	ABP_TimeManager_C_GetCurrentSeason_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Season != nullptr)
		*Season = params.Season;
	if (Season_Enum != nullptr)
		*Season_Enum = params.Season_Enum;
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.StopTimeManager
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_TimeManager_C::StopTimeManager() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.StopTimeManager");

	struct ABP_TimeManager_C_StopTimeManager_Params {
	};
	ABP_TimeManager_C_StopTimeManager_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.UpdateTimeToSaveOnSettingsChanged
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_TimeManager_C::UpdateTimeToSaveOnSettingsChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.UpdateTimeToSaveOnSettingsChanged");

	struct ABP_TimeManager_C_UpdateTimeToSaveOnSettingsChanged_Params {
	};
	ABP_TimeManager_C_UpdateTimeToSaveOnSettingsChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.CheckTimeBetween
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: from	Type: struct FST_Time	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: to	Type: struct FST_Time	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TimeGameSeconds	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TimeRealSeconds	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TimeUpdateSeconds	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_TimeManager_C::CheckTimeBetween(struct FST_Time from, struct FST_Time to, int32_t* TimeGameSeconds, int32_t* TimeRealSeconds, int32_t* TimeUpdateSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.CheckTimeBetween");

	struct ABP_TimeManager_C_CheckTimeBetween_Params {
		struct FST_Time from;			//Offset: 0 | ElementSize: 24
		struct FST_Time to;			//Offset: 24 | ElementSize: 24
		int32_t TimeGameSeconds;			//Offset: 48 | ElementSize: 4
		int32_t TimeRealSeconds;			//Offset: 52 | ElementSize: 4
		int32_t TimeUpdateSeconds;			//Offset: 56 | ElementSize: 4
	};
	ABP_TimeManager_C_CheckTimeBetween_Params params;
	params.from = from;
	params.to = to;

	UObject::ProcessEvent(fn, &params);
	if (TimeGameSeconds != nullptr)
		*TimeGameSeconds = params.TimeGameSeconds;
	if (TimeRealSeconds != nullptr)
		*TimeRealSeconds = params.TimeRealSeconds;
	if (TimeUpdateSeconds != nullptr)
		*TimeUpdateSeconds = params.TimeUpdateSeconds;
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.CheckTimeBetweenHours
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: from	Type: struct FST_Time	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: to	Type: struct FST_Time	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TimeGameSeconds	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TimeRealSeconds	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TimeUpdateSeconds	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_TimeManager_C::CheckTimeBetweenHours(struct FST_Time from, struct FST_Time to, int32_t* TimeGameSeconds, int32_t* TimeRealSeconds, int32_t* TimeUpdateSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.CheckTimeBetweenHours");

	struct ABP_TimeManager_C_CheckTimeBetweenHours_Params {
		struct FST_Time from;			//Offset: 0 | ElementSize: 24
		struct FST_Time to;			//Offset: 24 | ElementSize: 24
		int32_t TimeGameSeconds;			//Offset: 48 | ElementSize: 4
		int32_t TimeRealSeconds;			//Offset: 52 | ElementSize: 4
		int32_t TimeUpdateSeconds;			//Offset: 56 | ElementSize: 4
	};
	ABP_TimeManager_C_CheckTimeBetweenHours_Params params;
	params.from = from;
	params.to = to;

	UObject::ProcessEvent(fn, &params);
	if (TimeGameSeconds != nullptr)
		*TimeGameSeconds = params.TimeGameSeconds;
	if (TimeRealSeconds != nullptr)
		*TimeRealSeconds = params.TimeRealSeconds;
	if (TimeUpdateSeconds != nullptr)
		*TimeUpdateSeconds = params.TimeUpdateSeconds;
}

/////////////////////////////////////////////
// Function BP_TimeManager.BP_TimeManager_C.WinterSurvival
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_TimeManager_C::WinterSurvival() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.WinterSurvival");

	struct ABP_TimeManager_C_WinterSurvival_Params {
	};
	ABP_TimeManager_C_WinterSurvival_Params params;

	UObject::ProcessEvent(fn, &params);
}

#pragma endregion
}