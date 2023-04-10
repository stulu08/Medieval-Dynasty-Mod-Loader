#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_TimeManager.BP_TimeManager_C
// Super: Class Engine.Actor
// Size: 912
// Size inherited: 544
/////////////////////////////////////////////
namespace UE4 {
class ABP_TimeManager_C : public AActor {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 544	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//class USceneComponent*	DefaultSceneRoot;		//Offset: 552	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class USceneComponent* M_GetDefaultSceneRoot() const;
	class USceneComponent** M_PtrGetDefaultSceneRoot();
	void M_SetDefaultSceneRoot(const class USceneComponent*& value);

	//struct FST_Time	StartTime;		//Offset: 560	Size: 24	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_Time M_GetStartTime() const;
	struct FST_Time* M_PtrGetStartTime();
	void M_SetStartTime(const struct FST_Time& value);

	//int32_t	StartWeatherVariation;		//Offset: 584	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetStartWeatherVariation() const;
	int32_t* M_PtrGetStartWeatherVariation();
	void M_SetStartWeatherVariation(const int32_t& value);

	//struct FST_Time	MainMenuTime;		//Offset: 588	Size: 24	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_Time M_GetMainMenuTime() const;
	struct FST_Time* M_PtrGetMainMenuTime();
	void M_SetMainMenuTime(const struct FST_Time& value);

	//int32_t	MainMenuWeatherVariant;		//Offset: 612	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetMainMenuWeatherVariant() const;
	int32_t* M_PtrGetMainMenuWeatherVariant();
	void M_SetMainMenuWeatherVariant(const int32_t& value);

	//bool	MainMenuRandomSeason;		//Offset: 616	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	bool M_GetMainMenuRandomSeason() const;
	bool* M_PtrGetMainMenuRandomSeason();
	void M_SetMainMenuRandomSeason(const bool& value);

	//struct FST_Hour	HourAfterSkip;		//Offset: 620	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_Hour M_GetHourAfterSkip() const;
	struct FST_Hour* M_PtrGetHourAfterSkip();
	void M_SetHourAfterSkip(const struct FST_Hour& value);

	//int32_t	Timespan;		//Offset: 632	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetTimespan() const;
	int32_t* M_PtrGetTimespan();
	void M_SetTimespan(const int32_t& value);

	//float	TimeUpdateDelay;		//Offset: 636	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTimeUpdateDelay() const;
	float* M_PtrGetTimeUpdateDelay();
	void M_SetTimeUpdateDelay(const float& value);

	//TAssetPtr<class FOnTimeOfDayChanged__DelegateSignature>	OnTimeOfDayChanged;		//Offset: 640	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnTimeOfDayChanged__DelegateSignature> M_GetOnTimeOfDayChanged() const;
	TAssetPtr<class FOnTimeOfDayChanged__DelegateSignature>* M_PtrGetOnTimeOfDayChanged();
	void M_SetOnTimeOfDayChanged(const TAssetPtr<class FOnTimeOfDayChanged__DelegateSignature>& value);

	//TEnumAsByte<E_TimeOfDay>	TimeOfDay;		//Offset: 656	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_TimeOfDay> M_GetTimeOfDay() const;
	TEnumAsByte<E_TimeOfDay>* M_PtrGetTimeOfDay();
	void M_SetTimeOfDay(const TEnumAsByte<E_TimeOfDay>& value);

	//struct FST_Time	Time;		//Offset: 660	Size: 24	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_Time M_GetTime() const;
	struct FST_Time* M_PtrGetTime();
	void M_SetTime(const struct FST_Time& value);

	//class ABP_SystemsManager_C*	SystemsManagerReference;		//Offset: 688	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_SystemsManager_C* M_GetSystemsManagerReference() const;
	class ABP_SystemsManager_C** M_PtrGetSystemsManagerReference();
	void M_SetSystemsManagerReference(const class ABP_SystemsManager_C*& value);

	//struct FTimerHandle	TimerReference;		//Offset: 696	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetTimerReference() const;
	struct FTimerHandle* M_PtrGetTimerReference();
	void M_SetTimerReference(const struct FTimerHandle& value);

	//float	TimeMultiplier;		//Offset: 704	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTimeMultiplier() const;
	float* M_PtrGetTimeMultiplier();
	void M_SetTimeMultiplier(const float& value);

	//TAssetPtr<class FOnDaySkip__DelegateSignature>	OnDaySkip;		//Offset: 712	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnDaySkip__DelegateSignature> M_GetOnDaySkip() const;
	TAssetPtr<class FOnDaySkip__DelegateSignature>* M_PtrGetOnDaySkip();
	void M_SetOnDaySkip(const TAssetPtr<class FOnDaySkip__DelegateSignature>& value);

	//struct FST_Hour	PauseTime;		//Offset: 728	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_Hour M_GetPauseTime() const;
	struct FST_Hour* M_PtrGetPauseTime();
	void M_SetPauseTime(const struct FST_Hour& value);

	//bool	CheckPauseTime;		//Offset: 740	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCheckPauseTime() const;
	bool* M_PtrGetCheckPauseTime();
	void M_SetCheckPauseTime(const bool& value);

	//TAssetPtr<class FOnTimeUpdate__DelegateSignature>	OnTimeUpdate;		//Offset: 744	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnTimeUpdate__DelegateSignature> M_GetOnTimeUpdate() const;
	TAssetPtr<class FOnTimeUpdate__DelegateSignature>* M_PtrGetOnTimeUpdate();
	void M_SetOnTimeUpdate(const TAssetPtr<class FOnTimeUpdate__DelegateSignature>& value);

	//TAssetPtr<class FOnTimeUpdate_Minutes__DelegateSignature>	OnTimeUpdate_Minutes;		//Offset: 760	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnTimeUpdate_Minutes__DelegateSignature> M_GetOnTimeUpdate_Minutes() const;
	TAssetPtr<class FOnTimeUpdate_Minutes__DelegateSignature>* M_PtrGetOnTimeUpdate_Minutes();
	void M_SetOnTimeUpdate_Minutes(const TAssetPtr<class FOnTimeUpdate_Minutes__DelegateSignature>& value);

	//TAssetPtr<class FOnTimeUpdate_Hours__DelegateSignature>	OnTimeUpdate_Hours;		//Offset: 776	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnTimeUpdate_Hours__DelegateSignature> M_GetOnTimeUpdate_Hours() const;
	TAssetPtr<class FOnTimeUpdate_Hours__DelegateSignature>* M_PtrGetOnTimeUpdate_Hours();
	void M_SetOnTimeUpdate_Hours(const TAssetPtr<class FOnTimeUpdate_Hours__DelegateSignature>& value);

	//TAssetPtr<class FOnTimeUpdate_Days__DelegateSignature>	OnTimeUpdate_Days;		//Offset: 792	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnTimeUpdate_Days__DelegateSignature> M_GetOnTimeUpdate_Days() const;
	TAssetPtr<class FOnTimeUpdate_Days__DelegateSignature>* M_PtrGetOnTimeUpdate_Days();
	void M_SetOnTimeUpdate_Days(const TAssetPtr<class FOnTimeUpdate_Days__DelegateSignature>& value);

	//TAssetPtr<class FOnSeasonChanged__DelegateSignature>	OnSeasonChanged;		//Offset: 808	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnSeasonChanged__DelegateSignature> M_GetOnSeasonChanged() const;
	TAssetPtr<class FOnSeasonChanged__DelegateSignature>* M_PtrGetOnSeasonChanged();
	void M_SetOnSeasonChanged(const TAssetPtr<class FOnSeasonChanged__DelegateSignature>& value);

	//struct FST_Hour	SleepTimeStart;		//Offset: 824	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_Hour M_GetSleepTimeStart() const;
	struct FST_Hour* M_PtrGetSleepTimeStart();
	void M_SetSleepTimeStart(const struct FST_Hour& value);

	//struct FST_Hour	SleepTimeEnd;		//Offset: 836	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_Hour M_GetSleepTimeEnd() const;
	struct FST_Hour* M_PtrGetSleepTimeEnd();
	void M_SetSleepTimeEnd(const struct FST_Hour& value);

	//int32_t	TotalSecondsToSkipSeason;		//Offset: 848	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetTotalSecondsToSkipSeason() const;
	int32_t* M_PtrGetTotalSecondsToSkipSeason();
	void M_SetTotalSecondsToSkipSeason(const int32_t& value);

	//bool	ChangeTimeOnSkip;		//Offset: 852	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetChangeTimeOnSkip() const;
	bool* M_PtrGetChangeTimeOnSkip();
	void M_SetChangeTimeOnSkip(const bool& value);

	//TAssetPtr<class FOnSeasonChanged_End__DelegateSignature>	OnSeasonChanged_End;		//Offset: 856	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnSeasonChanged_End__DelegateSignature> M_GetOnSeasonChanged_End() const;
	TAssetPtr<class FOnSeasonChanged_End__DelegateSignature>* M_PtrGetOnSeasonChanged_End();
	void M_SetOnSeasonChanged_End(const TAssetPtr<class FOnSeasonChanged_End__DelegateSignature>& value);

	//bool	IsSkippingInProgress;		//Offset: 872	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsSkippingInProgress() const;
	bool* M_PtrGetIsSkippingInProgress();
	void M_SetIsSkippingInProgress(const bool& value);

	//int32_t	IteratorNumber;		//Offset: 876	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetIteratorNumber() const;
	int32_t* M_PtrGetIteratorNumber();
	void M_SetIteratorNumber(const int32_t& value);

	//bool	TimeFlowStoppedByCheat;		//Offset: 880	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetTimeFlowStoppedByCheat() const;
	bool* M_PtrGetTimeFlowStoppedByCheat();
	void M_SetTimeFlowStoppedByCheat(const bool& value);

	//bool	Teleport_Player;		//Offset: 881	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetTeleport_Player() const;
	bool* M_PtrGetTeleport_Player();
	void M_SetTeleport_Player(const bool& value);

	//float	TimeToAutosave;		//Offset: 884	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTimeToAutosave() const;
	float* M_PtrGetTimeToAutosave();
	void M_SetTimeToAutosave(const float& value);

	//float	RemainingTimeToAutosave;		//Offset: 888	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetRemainingTimeToAutosave() const;
	float* M_PtrGetRemainingTimeToAutosave();
	void M_SetRemainingTimeToAutosave(const float& value);

	//TAssetPtr<class FOnGameStart__DelegateSignature>	OnGameStart;		//Offset: 896	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnGameStart__DelegateSignature> M_GetOnGameStart() const;
	TAssetPtr<class FOnGameStart__DelegateSignature>* M_PtrGetOnGameStart();
	void M_SetOnGameStart(const TAssetPtr<class FOnGameStart__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TimeManager.BP_TimeManager_C");
		return ptr;
	}

#pragma region Functions
	void OnTimeOfDayChanged__DelegateSignature(TEnumAsByte<E_TimeOfDay> TimeOfDay);

	void OnDaySkip__DelegateSignature();

	void OnTimeUpdate__DelegateSignature(int32_t IteratorNumber);

	void OnTimeUpdate_Minutes__DelegateSignature();

	void OnTimeUpdate_Hours__DelegateSignature();

	void OnTimeUpdate_Days__DelegateSignature();

	void OnSeasonChanged__DelegateSignature();

	void OnSeasonChanged_End__DelegateSignature();

	void OnGameStart__DelegateSignature();

	void ExecuteUbergraph_BP_TimeManager(int32_t EntryPoint);

	void SkipCameraUnfaded();

	void SleepCameraUnfaded();

	void StopSkipSeasonCheck();

	void SkipWhenPosible();

	void SeasonSkipFinish();

	void StopFadeSkipSeason();

	void StopFadeSkipDay();

	void ReceiveBeginPlay();

	void InstantlyUpdateTimeAndWeather(struct FST_Time Time, bool RandomWeather, int32_t WeatherVariant, bool RandomCloudDensity);

	void SkipSeason(bool ChangeTime);

	void SkipDay(bool TeleportPlayer);

	void UserConstructionScript();

	void SetDayTime(int32_t Hour, bool ForceCallOnTimeOfDayChanged, bool LoadFromFile);

	void CheckSeasonSkip();

	void Init();

	void StartTimer();

	void StopTimer();

	void SetPauseTime(struct FST_Hour Hour);

	void UpdateByTimer();

	void IncreaseTime(int32_t Timespan);

	void SetGlobalTimeSpeed(float TimeDilation);

	void RandomizeTime(struct FST_Time BeginTime, int32_t MinTimespan, int32_t MaxTimespan, struct FST_Time* EndTime);

	void CheckIfTimeIsPast(struct FST_Time Time, bool* Passed);

	void CheckifTimeIsInHourRange(struct FST_Hour BeginTime, struct FST_Hour EndTime, bool* Success);

	void CheckHowMuchTimeIsMissing_Hour(struct FST_Time TargetTime, bool* Passed, struct FST_Hour* Hour, int32_t* Seconds);

	void CheckHowMuchTimeIsMissingToSkipSeason(struct FST_Time TargetTime, bool* Passed, struct FST_Hour* Hour, int32_t* Days);

	void IsItPossibleToSkipSeason(bool* Success, struct FST_Time* Time);

	void IsItPossibleToSleep(bool* Success, struct FST_Hour* Hour);

	void LoadSaveFileIntoSystem(class USAVE_Game_C* SaveReference);

	void SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference);

	void StartTimeManager(bool LoadGame, bool MainMenu);

	void GetCurrentSeason(int32_t* Season, TEnumAsByte<E_Seasons>* Season_Enum);

	void StopTimeManager();

	void UpdateTimeToSaveOnSettingsChanged();

	void CheckTimeBetween(struct FST_Time from, struct FST_Time to, int32_t* TimeGameSeconds, int32_t* TimeRealSeconds, int32_t* TimeUpdateSeconds);

	void CheckTimeBetweenHours(struct FST_Time from, struct FST_Time to, int32_t* TimeGameSeconds, int32_t* TimeRealSeconds, int32_t* TimeUpdateSeconds);

	void WinterSurvival();

#pragma endregion
};
};