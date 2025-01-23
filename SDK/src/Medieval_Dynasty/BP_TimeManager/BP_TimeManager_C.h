#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_TimeManager.BP_TimeManager_C
// Super: Class Engine.Actor
// Size: 1011
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

	//TAssetPtr<class FOnTimeOfDay_NPC_Changed__DelegateSignature>	OnTimeOfDay_NPC_Changed;		//Offset: 640	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnTimeOfDay_NPC_Changed__DelegateSignature> M_GetOnTimeOfDay_NPC_Changed() const;
	TAssetPtr<class FOnTimeOfDay_NPC_Changed__DelegateSignature>* M_PtrGetOnTimeOfDay_NPC_Changed();
	void M_SetOnTimeOfDay_NPC_Changed(const TAssetPtr<class FOnTimeOfDay_NPC_Changed__DelegateSignature>& value);

	//TEnumAsByte<E_TimeOfDay>	TimeOfDay_NPC;		//Offset: 656	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_TimeOfDay> M_GetTimeOfDay_NPC() const;
	TEnumAsByte<E_TimeOfDay>* M_PtrGetTimeOfDay_NPC();
	void M_SetTimeOfDay_NPC(const TEnumAsByte<E_TimeOfDay>& value);

	//TEnumAsByte<E_TimeOfDay_SeasonalVisuals>	TimeOfDay_SeasonalVisuals;		//Offset: 657	Size: 1	Flags: Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_TimeOfDay_SeasonalVisuals> M_GetTimeOfDay_SeasonalVisuals() const;
	TEnumAsByte<E_TimeOfDay_SeasonalVisuals>* M_PtrGetTimeOfDay_SeasonalVisuals();
	void M_SetTimeOfDay_SeasonalVisuals(const TEnumAsByte<E_TimeOfDay_SeasonalVisuals>& value);

	//struct FST_Time	Time;		//Offset: 660	Size: 24	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_Time M_GetTime() const;
	struct FST_Time* M_PtrGetTime();
	void M_SetTime(const struct FST_Time& value);

	//struct FTimerHandle	TimerReference;		//Offset: 688	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetTimerReference() const;
	struct FTimerHandle* M_PtrGetTimerReference();
	void M_SetTimerReference(const struct FTimerHandle& value);

	//float	TimeMultiplier;		//Offset: 696	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTimeMultiplier() const;
	float* M_PtrGetTimeMultiplier();
	void M_SetTimeMultiplier(const float& value);

	//TAssetPtr<class FOnTimeOfDay_SeasonalVisuals_Changed__DelegateSignature>	OnTimeOfDay_SeasonalVisuals_Changed;		//Offset: 704	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnTimeOfDay_SeasonalVisuals_Changed__DelegateSignature> M_GetOnTimeOfDay_SeasonalVisuals_Changed() const;
	TAssetPtr<class FOnTimeOfDay_SeasonalVisuals_Changed__DelegateSignature>* M_PtrGetOnTimeOfDay_SeasonalVisuals_Changed();
	void M_SetOnTimeOfDay_SeasonalVisuals_Changed(const TAssetPtr<class FOnTimeOfDay_SeasonalVisuals_Changed__DelegateSignature>& value);

	//TAssetPtr<class FOnDaySkipStart__DelegateSignature>	OnDaySkipStart;		//Offset: 720	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnDaySkipStart__DelegateSignature> M_GetOnDaySkipStart() const;
	TAssetPtr<class FOnDaySkipStart__DelegateSignature>* M_PtrGetOnDaySkipStart();
	void M_SetOnDaySkipStart(const TAssetPtr<class FOnDaySkipStart__DelegateSignature>& value);

	//TAssetPtr<class FOnDaySkip__DelegateSignature>	OnDaySkip;		//Offset: 736	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnDaySkip__DelegateSignature> M_GetOnDaySkip() const;
	TAssetPtr<class FOnDaySkip__DelegateSignature>* M_PtrGetOnDaySkip();
	void M_SetOnDaySkip(const TAssetPtr<class FOnDaySkip__DelegateSignature>& value);

	//struct FST_Hour	PauseTime;		//Offset: 752	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_Hour M_GetPauseTime() const;
	struct FST_Hour* M_PtrGetPauseTime();
	void M_SetPauseTime(const struct FST_Hour& value);

	//bool	CheckPauseTime;		//Offset: 764	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCheckPauseTime() const;
	bool* M_PtrGetCheckPauseTime();
	void M_SetCheckPauseTime(const bool& value);

	//TAssetPtr<class FOnTimeUpdate__DelegateSignature>	OnTimeUpdate;		//Offset: 768	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnTimeUpdate__DelegateSignature> M_GetOnTimeUpdate() const;
	TAssetPtr<class FOnTimeUpdate__DelegateSignature>* M_PtrGetOnTimeUpdate();
	void M_SetOnTimeUpdate(const TAssetPtr<class FOnTimeUpdate__DelegateSignature>& value);

	//TAssetPtr<class FOnTimeUpdate_Minutes__DelegateSignature>	OnTimeUpdate_Minutes;		//Offset: 784	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnTimeUpdate_Minutes__DelegateSignature> M_GetOnTimeUpdate_Minutes() const;
	TAssetPtr<class FOnTimeUpdate_Minutes__DelegateSignature>* M_PtrGetOnTimeUpdate_Minutes();
	void M_SetOnTimeUpdate_Minutes(const TAssetPtr<class FOnTimeUpdate_Minutes__DelegateSignature>& value);

	//TAssetPtr<class FOnTimeUpdate_Hours__DelegateSignature>	OnTimeUpdate_Hours;		//Offset: 800	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnTimeUpdate_Hours__DelegateSignature> M_GetOnTimeUpdate_Hours() const;
	TAssetPtr<class FOnTimeUpdate_Hours__DelegateSignature>* M_PtrGetOnTimeUpdate_Hours();
	void M_SetOnTimeUpdate_Hours(const TAssetPtr<class FOnTimeUpdate_Hours__DelegateSignature>& value);

	//TAssetPtr<class FOnTimeUpdate_Days__DelegateSignature>	OnTimeUpdate_Days;		//Offset: 816	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnTimeUpdate_Days__DelegateSignature> M_GetOnTimeUpdate_Days() const;
	TAssetPtr<class FOnTimeUpdate_Days__DelegateSignature>* M_PtrGetOnTimeUpdate_Days();
	void M_SetOnTimeUpdate_Days(const TAssetPtr<class FOnTimeUpdate_Days__DelegateSignature>& value);

	//TAssetPtr<class FOnSeasonChanged__DelegateSignature>	OnSeasonChanged;		//Offset: 832	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnSeasonChanged__DelegateSignature> M_GetOnSeasonChanged() const;
	TAssetPtr<class FOnSeasonChanged__DelegateSignature>* M_PtrGetOnSeasonChanged();
	void M_SetOnSeasonChanged(const TAssetPtr<class FOnSeasonChanged__DelegateSignature>& value);

	//struct FST_Hour	SleepTimeStart;		//Offset: 848	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_Hour M_GetSleepTimeStart() const;
	struct FST_Hour* M_PtrGetSleepTimeStart();
	void M_SetSleepTimeStart(const struct FST_Hour& value);

	//struct FST_Hour	SleepTimeEnd;		//Offset: 860	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_Hour M_GetSleepTimeEnd() const;
	struct FST_Hour* M_PtrGetSleepTimeEnd();
	void M_SetSleepTimeEnd(const struct FST_Hour& value);

	//int32_t	TotalSecondsToSkipSeason;		//Offset: 872	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetTotalSecondsToSkipSeason() const;
	int32_t* M_PtrGetTotalSecondsToSkipSeason();
	void M_SetTotalSecondsToSkipSeason(const int32_t& value);

	//class ABP_SystemsManager_C*	SystemsManagerReference;		//Offset: 880	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	class ABP_SystemsManager_C* M_GetSystemsManagerReference() const;
	class ABP_SystemsManager_C** M_PtrGetSystemsManagerReference();
	void M_SetSystemsManagerReference(const class ABP_SystemsManager_C*& value);

	//int32_t	CurrentSeasonSeconds;		//Offset: 888	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetCurrentSeasonSeconds() const;
	int32_t* M_PtrGetCurrentSeasonSeconds();
	void M_SetCurrentSeasonSeconds(const int32_t& value);

	//bool	ChangeTimeOnSkip;		//Offset: 892	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetChangeTimeOnSkip() const;
	bool* M_PtrGetChangeTimeOnSkip();
	void M_SetChangeTimeOnSkip(const bool& value);

	//TAssetPtr<class FOnSeasonChanged_End__DelegateSignature>	OnSeasonChanged_End;		//Offset: 896	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnSeasonChanged_End__DelegateSignature> M_GetOnSeasonChanged_End() const;
	TAssetPtr<class FOnSeasonChanged_End__DelegateSignature>* M_PtrGetOnSeasonChanged_End();
	void M_SetOnSeasonChanged_End(const TAssetPtr<class FOnSeasonChanged_End__DelegateSignature>& value);

	//bool	IsSkippingInProgress;		//Offset: 912	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsSkippingInProgress() const;
	bool* M_PtrGetIsSkippingInProgress();
	void M_SetIsSkippingInProgress(const bool& value);

	//int32_t	IteratorNumber;		//Offset: 916	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetIteratorNumber() const;
	int32_t* M_PtrGetIteratorNumber();
	void M_SetIteratorNumber(const int32_t& value);

	//bool	TimeFlowStoppedByCheat;		//Offset: 920	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetTimeFlowStoppedByCheat() const;
	bool* M_PtrGetTimeFlowStoppedByCheat();
	void M_SetTimeFlowStoppedByCheat(const bool& value);

	//bool	Teleport_Player;		//Offset: 921	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetTeleport_Player() const;
	bool* M_PtrGetTeleport_Player();
	void M_SetTeleport_Player(const bool& value);

	//float	TimeToAutosave;		//Offset: 924	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTimeToAutosave() const;
	float* M_PtrGetTimeToAutosave();
	void M_SetTimeToAutosave(const float& value);

	//float	RemainingTimeToAutosave;		//Offset: 928	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetRemainingTimeToAutosave() const;
	float* M_PtrGetRemainingTimeToAutosave();
	void M_SetRemainingTimeToAutosave(const float& value);

	//TAssetPtr<class FOnGameStart__DelegateSignature>	OnGameStart;		//Offset: 936	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnGameStart__DelegateSignature> M_GetOnGameStart() const;
	TAssetPtr<class FOnGameStart__DelegateSignature>* M_PtrGetOnGameStart();
	void M_SetOnGameStart(const TAssetPtr<class FOnGameStart__DelegateSignature>& value);

	//bool	CanTimeFlowOnMultiplayer;		//Offset: 952	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCanTimeFlowOnMultiplayer() const;
	bool* M_PtrGetCanTimeFlowOnMultiplayer();
	void M_SetCanTimeFlowOnMultiplayer(const bool& value);

	//struct FTimerHandle	SkipTimerHandle;		//Offset: 960	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetSkipTimerHandle() const;
	struct FTimerHandle* M_PtrGetSkipTimerHandle();
	void M_SetSkipTimerHandle(const struct FTimerHandle& value);

	//bool	bInitiallyUpdated;		//Offset: 968	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetbInitiallyUpdated() const;
	bool* M_PtrGetbInitiallyUpdated();
	void M_SetbInitiallyUpdated(const bool& value);

	//class UUserWidget*	SkipSeasonWidget;		//Offset: 976	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUserWidget* M_GetSkipSeasonWidget() const;
	class UUserWidget** M_PtrGetSkipSeasonWidget();
	void M_SetSkipSeasonWidget(const class UUserWidget*& value);

	//bool	SpawnEvent;		//Offset: 984	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSpawnEvent() const;
	bool* M_PtrGetSpawnEvent();
	void M_SetSpawnEvent(const bool& value);

	//TAssetPtr<class FOnContinueWithSkipSeason__DelegateSignature>	OnContinueWithSkipSeason;		//Offset: 992	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnContinueWithSkipSeason__DelegateSignature> M_GetOnContinueWithSkipSeason() const;
	TAssetPtr<class FOnContinueWithSkipSeason__DelegateSignature>* M_PtrGetOnContinueWithSkipSeason();
	void M_SetOnContinueWithSkipSeason(const TAssetPtr<class FOnContinueWithSkipSeason__DelegateSignature>& value);

	//bool	SpawnHeirHairCutEvent;		//Offset: 1008	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSpawnHeirHairCutEvent() const;
	bool* M_PtrGetSpawnHeirHairCutEvent();
	void M_SetSpawnHeirHairCutEvent(const bool& value);

	//bool	SpawnDeathMenuWidget;		//Offset: 1009	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSpawnDeathMenuWidget() const;
	bool* M_PtrGetSpawnDeathMenuWidget();
	void M_SetSpawnDeathMenuWidget(const bool& value);

	//TEnumAsByte<E_DeathType>	DeathTypeWidgetToSpawn;		//Offset: 1010	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_DeathType> M_GetDeathTypeWidgetToSpawn() const;
	TEnumAsByte<E_DeathType>* M_PtrGetDeathTypeWidgetToSpawn();
	void M_SetDeathTypeWidgetToSpawn(const TEnumAsByte<E_DeathType>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TimeManager.BP_TimeManager_C");
		return ptr;
	}

#pragma region Functions
	void OnTimeOfDay_NPC_Changed__DelegateSignature(TEnumAsByte<E_TimeOfDay> TimeOfDay);

	void OnDaySkip__DelegateSignature();

	void OnTimeUpdate__DelegateSignature();

	void OnTimeUpdate_Minutes__DelegateSignature();

	void OnTimeUpdate_Hours__DelegateSignature();

	void OnTimeUpdate_Days__DelegateSignature();

	void OnSeasonChanged__DelegateSignature();

	void OnSeasonChanged_End__DelegateSignature();

	void OnGameStart__DelegateSignature();

	void OnDaySkipStart__DelegateSignature(int32_t TimeRealSeconds, int32_t TimeUpdateSeconds);

	void OnTimeOfDay_SeasonalVisuals_Changed__DelegateSignature(TEnumAsByte<E_TimeOfDay_SeasonalVisuals> TimeOfDay, int32_t Season, bool IgnoreRandomizeDelay);

	void OnContinueWithSkipSeason__DelegateSignature();

	void ExecuteUbergraph_BP_TimeManager(int32_t EntryPoint);

	void CallSpawnSeasonJournal();

	void ContinueWithSkipSeason_BPI();

	void UpdateTotalSecondsToSkipSeason();

	void RequestSkip();

	void StartTimerEvent();

	void SleepCameraUnfaded();

	void StopSkipSeasonCheck();

	void SkipWhenPosible();

	void StopFadeSkipSeason();

	void StopFadeSkipDay();

	void ReceiveBeginPlay();

	void InstantlyUpdateTimeAndWeather(struct FST_Time Time, bool RandomWeather, int32_t WeatherVariant, bool RandomCloudDensity);

	void SkipSeason(bool ChangeTime);

	void SkipDay(bool TeleportPlayer);

	void ApplyByteVarUpdate(unsigned char Byte);

	void ExecuteActorUpdate(class APlayerController* Requester);

	void SetWasActorUpdated_BPI(bool Value);

	void UpdateTimeClients_Multicast(struct FST_Time Time);

	void InstantlyUpdateTimeAndWeather_Multicast(struct FST_Time Time, bool RandomWeather, int32_t WeatherVariant, bool RandomCloudDensity);

	void InstantlyUpdateTimeAndWeather_Server(struct FST_Time Time, bool RandomWeather, int32_t WeatherVariant, bool RandomCloudDensity);

	void OnSkipFadeFinished();

	void Skipday_Client();

	void SkipDay_Multicast(struct FST_Time Time);

	void SkipSeason_Multicast(struct FST_Time Time, int32_t WeatherVariation);

	void StartSkipSeason_Multicast();

	void ProcessByteVarUpdate(class AActor* Actor, unsigned char Byte);

	void ApplySkeletalMontagesUpdate(const TArray<struct FMontageDataForRep>& MontagesData);

	void ProcessSkeletalMontagesUpdate(class AActor* Actor, const TArray<struct FMontageDataForRep>& MontagesData);

	void RequestActorUpdate(class AActor* Actor, bool Force);

	void UserConstructionScript();

	void UpdateTimeOfDay_NPC(int32_t Hour, bool ForceCallOnTimeOfDayChanged, bool LoadFromFile);

	void UpdateTimeOfDay_SeasonalVisuals(int32_t Hour, int32_t Season, bool ForceCallOnTimeOfDayChanged);

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

	void GetCurrentYear(int32_t* Year);

	void CheckTimeBetween(struct FST_Time from, struct FST_Time to, int32_t* TimeGameSeconds, int32_t* TimeRealSeconds, int32_t* TimeUpdateSeconds);

	void CheckTimeBetweenHours(struct FST_Time from, struct FST_Time to, int32_t* TimeGameSeconds, int32_t* TimeRealSeconds, int32_t* TimeUpdateSeconds);

	void WinterSurvival();

	void OnRep_Time();

	void SetTimeAndWeather(struct FST_Time Time, int32_t DayVariation);

	void UpdateByTimer_Client();

	void CheckSleepingPlayers();

	void UpdateRestAchievement(class APC_Player_C* PCPlayer);

	void CanSkipSeason(bool* CanSkip);

	void ContinueWithSkipSeason();

	void GetSeasonJournal(class UUserWidget** SeasonJournal)/* const*/;

	void SeasonSkipFinish();

	void SeasonSkipFinish_Client();

	void DeleteCurrentSeasonWidgets();

	void SetSpawnDeathMenuWidget(bool SpawnDynastyContinueWidget);

	void SetDeathTypeWidgetToSpawn(TEnumAsByte<E_DeathType> DeathTypeWidgetToSpawn);

	void SpawnDeathMenu(class APC_Player_C* PlayerController);

	TArray<struct FMontageDataForRep> GetMontagesForReplicaton_BPI();

	bool WasActorUpdated_BPI();

	void GetAnyDataCollectedInVillageManager(bool* AnyDataCollected);

#pragma endregion
};
};