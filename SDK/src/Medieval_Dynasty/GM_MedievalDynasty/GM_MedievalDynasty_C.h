#pragma once
#include "Structs.h"
#include "Engine/GameMode.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass GM_MedievalDynasty.GM_MedievalDynasty_C
// Super: Class Engine.GameModeBase
// Size: 1502
// Size inherited: 704
/////////////////////////////////////////////
namespace UE4 {
class AGM_MedievalDynasty_C : public AGameModeBase {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 704	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//class USceneComponent*	DefaultSceneRoot;		//Offset: 712	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class USceneComponent* M_GetDefaultSceneRoot() const;
	class USceneComponent** M_PtrGetDefaultSceneRoot();
	void M_SetDefaultSceneRoot(const class USceneComponent*& value);

	//class UGI_MedievalDynasty_C*	GameInstance;		//Offset: 720	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UGI_MedievalDynasty_C* M_GetGameInstance() const;
	class UGI_MedievalDynasty_C** M_PtrGetGameInstance();
	void M_SetGameInstance(const class UGI_MedievalDynasty_C*& value);

	//class UUserWidget*	LoadingScreenReference;		//Offset: 728	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UUserWidget* M_GetLoadingScreenReference() const;
	class UUserWidget** M_PtrGetLoadingScreenReference();
	void M_SetLoadingScreenReference(const class UUserWidget*& value);

	//class ABP_SystemsManager_C*	SystemsManagerReference;		//Offset: 736	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_SystemsManager_C* M_GetSystemsManagerReference() const;
	class ABP_SystemsManager_C** M_PtrGetSystemsManagerReference();
	void M_SetSystemsManagerReference(const class ABP_SystemsManager_C*& value);

	//class UAudioComponent*	IntroSound;		//Offset: 744	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UAudioComponent* M_GetIntroSound() const;
	class UAudioComponent** M_PtrGetIntroSound();
	void M_SetIntroSound(const class UAudioComponent*& value);

	//class UBinkMediaPlayer*	BinkMediaPlayer;		//Offset: 752	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UBinkMediaPlayer* M_GetBinkMediaPlayer() const;
	class UBinkMediaPlayer** M_PtrGetBinkMediaPlayer();
	void M_SetBinkMediaPlayer(const class UBinkMediaPlayer*& value);

	//int32_t	Default_DaysPerSeason;		//Offset: 760	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefault_DaysPerSeason() const;
	int32_t* M_PtrGetDefault_DaysPerSeason();
	void M_SetDefault_DaysPerSeason(const int32_t& value);

	//int32_t	DaysPerSeason;		//Offset: 764	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDaysPerSeason() const;
	int32_t* M_PtrGetDaysPerSeason();
	void M_SetDaysPerSeason(const int32_t& value);

	//float	Default_TaxMultiplier;		//Offset: 768	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefault_TaxMultiplier() const;
	float* M_PtrGetDefault_TaxMultiplier();
	void M_SetDefault_TaxMultiplier(const float& value);

	//float	TaxMultiplier;		//Offset: 772	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTaxMultiplier() const;
	float* M_PtrGetTaxMultiplier();
	void M_SetTaxMultiplier(const float& value);

	//float	Default_BuildingsLimitMultiplier;		//Offset: 776	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefault_BuildingsLimitMultiplier() const;
	float* M_PtrGetDefault_BuildingsLimitMultiplier();
	void M_SetDefault_BuildingsLimitMultiplier(const float& value);

	//float	BuildingsLimitMultiplier;		//Offset: 780	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBuildingsLimitMultiplier() const;
	float* M_PtrGetBuildingsLimitMultiplier();
	void M_SetBuildingsLimitMultiplier(const float& value);

	//int32_t	DaysPerSeason_OnSeasonChange;		//Offset: 784	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDaysPerSeason_OnSeasonChange() const;
	int32_t* M_PtrGetDaysPerSeason_OnSeasonChange();
	void M_SetDaysPerSeason_OnSeasonChange(const int32_t& value);

	//bool	Default_Events;		//Offset: 788	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefault_Events() const;
	bool* M_PtrGetDefault_Events();
	void M_SetDefault_Events(const bool& value);

	//bool	Events;		//Offset: 789	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetEvents() const;
	bool* M_PtrGetEvents();
	void M_SetEvents(const bool& value);

	//bool	Default_Bandits;		//Offset: 790	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefault_Bandits() const;
	bool* M_PtrGetDefault_Bandits();
	void M_SetDefault_Bandits(const bool& value);

	//bool	Bandits;		//Offset: 791	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBandits() const;
	bool* M_PtrGetBandits();
	void M_SetBandits(const bool& value);

	//bool	Bandits_OnSeasonChange;		//Offset: 792	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBandits_OnSeasonChange() const;
	bool* M_PtrGetBandits_OnSeasonChange();
	void M_SetBandits_OnSeasonChange(const bool& value);

	//bool	Default_Birds;		//Offset: 793	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefault_Birds() const;
	bool* M_PtrGetDefault_Birds();
	void M_SetDefault_Birds(const bool& value);

	//bool	Birds;		//Offset: 794	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBirds() const;
	bool* M_PtrGetBirds();
	void M_SetBirds(const bool& value);

	//bool	Default_UnlimitedHP;		//Offset: 795	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefault_UnlimitedHP() const;
	bool* M_PtrGetDefault_UnlimitedHP();
	void M_SetDefault_UnlimitedHP(const bool& value);

	//bool	UnlimitedHP;		//Offset: 796	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUnlimitedHP() const;
	bool* M_PtrGetUnlimitedHP();
	void M_SetUnlimitedHP(const bool& value);

	//bool	Default_UnlimitedStamina;		//Offset: 797	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefault_UnlimitedStamina() const;
	bool* M_PtrGetDefault_UnlimitedStamina();
	void M_SetDefault_UnlimitedStamina(const bool& value);

	//bool	UnlimitedStamina;		//Offset: 798	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUnlimitedStamina() const;
	bool* M_PtrGetUnlimitedStamina();
	void M_SetUnlimitedStamina(const bool& value);

	//bool	Default_UnlimitedFood;		//Offset: 799	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefault_UnlimitedFood() const;
	bool* M_PtrGetDefault_UnlimitedFood();
	void M_SetDefault_UnlimitedFood(const bool& value);

	//bool	UnlimitedFood;		//Offset: 800	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUnlimitedFood() const;
	bool* M_PtrGetUnlimitedFood();
	void M_SetUnlimitedFood(const bool& value);

	//bool	Default_UnlimitedWater;		//Offset: 801	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefault_UnlimitedWater() const;
	bool* M_PtrGetDefault_UnlimitedWater();
	void M_SetDefault_UnlimitedWater(const bool& value);

	//bool	UnlimitedWater;		//Offset: 802	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUnlimitedWater() const;
	bool* M_PtrGetUnlimitedWater();
	void M_SetUnlimitedWater(const bool& value);

	//float	Default_NPCNeeds_FoodMultiplier;		//Offset: 804	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefault_NPCNeeds_FoodMultiplier() const;
	float* M_PtrGetDefault_NPCNeeds_FoodMultiplier();
	void M_SetDefault_NPCNeeds_FoodMultiplier(const float& value);

	//float	NPCNeeds_FoodMultiplier;		//Offset: 808	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetNPCNeeds_FoodMultiplier() const;
	float* M_PtrGetNPCNeeds_FoodMultiplier();
	void M_SetNPCNeeds_FoodMultiplier(const float& value);

	//float	NPCNeeds_FoodMultiplier_OnSeasonChange;		//Offset: 812	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetNPCNeeds_FoodMultiplier_OnSeasonChange() const;
	float* M_PtrGetNPCNeeds_FoodMultiplier_OnSeasonChange();
	void M_SetNPCNeeds_FoodMultiplier_OnSeasonChange(const float& value);

	//float	Default_NPCNeeds_WaterMultiplier;		//Offset: 816	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefault_NPCNeeds_WaterMultiplier() const;
	float* M_PtrGetDefault_NPCNeeds_WaterMultiplier();
	void M_SetDefault_NPCNeeds_WaterMultiplier(const float& value);

	//float	NPCNeeds_WaterMultiplier;		//Offset: 820	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetNPCNeeds_WaterMultiplier() const;
	float* M_PtrGetNPCNeeds_WaterMultiplier();
	void M_SetNPCNeeds_WaterMultiplier(const float& value);

	//float	NPCNeeds_WaterMultiplier_OnSeasonChange;		//Offset: 824	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetNPCNeeds_WaterMultiplier_OnSeasonChange() const;
	float* M_PtrGetNPCNeeds_WaterMultiplier_OnSeasonChange();
	void M_SetNPCNeeds_WaterMultiplier_OnSeasonChange(const float& value);

	//float	Default_NPCNeeds_WoodMultiplier;		//Offset: 828	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefault_NPCNeeds_WoodMultiplier() const;
	float* M_PtrGetDefault_NPCNeeds_WoodMultiplier();
	void M_SetDefault_NPCNeeds_WoodMultiplier(const float& value);

	//float	NPCNeeds_WoodMultiplier;		//Offset: 832	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetNPCNeeds_WoodMultiplier() const;
	float* M_PtrGetNPCNeeds_WoodMultiplier();
	void M_SetNPCNeeds_WoodMultiplier(const float& value);

	//float	Default_AnimalsHPMultiplier;		//Offset: 836	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefault_AnimalsHPMultiplier() const;
	float* M_PtrGetDefault_AnimalsHPMultiplier();
	void M_SetDefault_AnimalsHPMultiplier(const float& value);

	//float	AnimalsHPMultiplier;		//Offset: 840	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetAnimalsHPMultiplier() const;
	float* M_PtrGetAnimalsHPMultiplier();
	void M_SetAnimalsHPMultiplier(const float& value);

	//float	AnimalsHPMultiplier_OnSeasonChange;		//Offset: 844	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetAnimalsHPMultiplier_OnSeasonChange() const;
	float* M_PtrGetAnimalsHPMultiplier_OnSeasonChange();
	void M_SetAnimalsHPMultiplier_OnSeasonChange(const float& value);

	//float	Default_AnimalsDamageMultiplier;		//Offset: 848	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefault_AnimalsDamageMultiplier() const;
	float* M_PtrGetDefault_AnimalsDamageMultiplier();
	void M_SetDefault_AnimalsDamageMultiplier(const float& value);

	//float	AnimalsDamageMultiplier;		//Offset: 852	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetAnimalsDamageMultiplier() const;
	float* M_PtrGetAnimalsDamageMultiplier();
	void M_SetAnimalsDamageMultiplier(const float& value);

	//bool	Default_UnlimitedWeight;		//Offset: 856	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefault_UnlimitedWeight() const;
	bool* M_PtrGetDefault_UnlimitedWeight();
	void M_SetDefault_UnlimitedWeight(const bool& value);

	//bool	UnlimitedWeight;		//Offset: 857	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUnlimitedWeight() const;
	bool* M_PtrGetUnlimitedWeight();
	void M_SetUnlimitedWeight(const bool& value);

	//bool	Default_Poisoning;		//Offset: 858	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefault_Poisoning() const;
	bool* M_PtrGetDefault_Poisoning();
	void M_SetDefault_Poisoning(const bool& value);

	//bool	Poisoning;		//Offset: 859	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetPoisoning() const;
	bool* M_PtrGetPoisoning();
	void M_SetPoisoning(const bool& value);

	//bool	Default_Temperature;		//Offset: 860	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefault_Temperature() const;
	bool* M_PtrGetDefault_Temperature();
	void M_SetDefault_Temperature(const bool& value);

	//bool	Temperature;		//Offset: 861	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetTemperature() const;
	bool* M_PtrGetTemperature();
	void M_SetTemperature(const bool& value);

	//bool	Default_FastCrafting;		//Offset: 862	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefault_FastCrafting() const;
	bool* M_PtrGetDefault_FastCrafting();
	void M_SetDefault_FastCrafting(const bool& value);

	//bool	FastCrafting;		//Offset: 863	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetFastCrafting() const;
	bool* M_PtrGetFastCrafting();
	void M_SetFastCrafting(const bool& value);

	//float	Default_XPGainMultiplier;		//Offset: 864	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefault_XPGainMultiplier() const;
	float* M_PtrGetDefault_XPGainMultiplier();
	void M_SetDefault_XPGainMultiplier(const float& value);

	//float	XPGainMultiplier;		//Offset: 868	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetXPGainMultiplier() const;
	float* M_PtrGetXPGainMultiplier();
	void M_SetXPGainMultiplier(const float& value);

	//float	Default_TechnologyGainMultiplier;		//Offset: 872	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefault_TechnologyGainMultiplier() const;
	float* M_PtrGetDefault_TechnologyGainMultiplier();
	void M_SetDefault_TechnologyGainMultiplier(const float& value);

	//float	TechnologyGainMultiplier;		//Offset: 876	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTechnologyGainMultiplier() const;
	float* M_PtrGetTechnologyGainMultiplier();
	void M_SetTechnologyGainMultiplier(const float& value);

	//float	Default_DynastyReputationGainMultiplier;		//Offset: 880	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefault_DynastyReputationGainMultiplier() const;
	float* M_PtrGetDefault_DynastyReputationGainMultiplier();
	void M_SetDefault_DynastyReputationGainMultiplier(const float& value);

	//float	DynastyReputationGainMultiplier;		//Offset: 884	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDynastyReputationGainMultiplier() const;
	float* M_PtrGetDynastyReputationGainMultiplier();
	void M_SetDynastyReputationGainMultiplier(const float& value);

	//bool	DefaultStopSpoilForDroppedItems;		//Offset: 888	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultStopSpoilForDroppedItems() const;
	bool* M_PtrGetDefaultStopSpoilForDroppedItems();
	void M_SetDefaultStopSpoilForDroppedItems(const bool& value);

	//bool	StopSpoilForDroppedItems;		//Offset: 889	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetStopSpoilForDroppedItems() const;
	bool* M_PtrGetStopSpoilForDroppedItems();
	void M_SetStopSpoilForDroppedItems(const bool& value);

	//struct FDateTime	DebugTime;		//Offset: 896	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FDateTime M_GetDebugTime() const;
	struct FDateTime* M_PtrGetDebugTime();
	void M_SetDebugTime(const struct FDateTime& value);

	//class USAVE_Game_C*	SaveGameReference;		//Offset: 904	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class USAVE_Game_C* M_GetSaveGameReference() const;
	class USAVE_Game_C** M_PtrGetSaveGameReference();
	void M_SetSaveGameReference(const class USAVE_Game_C*& value);

	//struct FString	SaveDataSlotName;		//Offset: 912	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
	struct FString M_GetSaveDataSlotName() const;
	struct FString* M_PtrGetSaveDataSlotName();
	void M_SetSaveDataSlotName(const struct FString& value);

	//struct FString	SaveGameSlotName;		//Offset: 928	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
	struct FString M_GetSaveGameSlotName() const;
	struct FString* M_PtrGetSaveGameSlotName();
	void M_SetSaveGameSlotName(const struct FString& value);

	//struct FDateTime	TotalDebugTime;		//Offset: 944	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FDateTime M_GetTotalDebugTime() const;
	struct FDateTime* M_PtrGetTotalDebugTime();
	void M_SetTotalDebugTime(const struct FDateTime& value);

	//TArray<struct FName>	LeaderboardStatsList;		//Offset: 952	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FName> M_GetLeaderboardStatsList() const;
	TArray<struct FName>* M_PtrGetLeaderboardStatsList();
	void M_SetLeaderboardStatsList(const TArray<struct FName>& value);

	//TMap<struct FName, int32_t>	LeaderboardStatValues;		//Offset: 968	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<struct FName, int32_t> M_GetLeaderboardStatValues() const;
	TMap<struct FName, int32_t>* M_PtrGetLeaderboardStatValues();
	void M_SetLeaderboardStatValues(const TMap<struct FName, int32_t>& value);

	//TArray<struct FName>	AchievementBuffer;		//Offset: 1048	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FName> M_GetAchievementBuffer() const;
	TArray<struct FName>* M_PtrGetAchievementBuffer();
	void M_SetAchievementBuffer(const TArray<struct FName>& value);

	//bool	StatsCached;		//Offset: 1064	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetStatsCached() const;
	bool* M_PtrGetStatsCached();
	void M_SetStatsCached(const bool& value);

	//int32_t	AchiStatTries;		//Offset: 1068	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetAchiStatTries() const;
	int32_t* M_PtrGetAchiStatTries();
	void M_SetAchiStatTries(const int32_t& value);

	//struct FTimerHandle	AchiStatTimer;		//Offset: 1072	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetAchiStatTimer() const;
	struct FTimerHandle* M_PtrGetAchiStatTimer();
	void M_SetAchiStatTimer(const struct FTimerHandle& value);

	//struct FTimerHandle	AchiTimer;		//Offset: 1080	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetAchiTimer() const;
	struct FTimerHandle* M_PtrGetAchiTimer();
	void M_SetAchiTimer(const struct FTimerHandle& value);

	//bool	FinishedGivingAchievement;		//Offset: 1088	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetFinishedGivingAchievement() const;
	bool* M_PtrGetFinishedGivingAchievement();
	void M_SetFinishedGivingAchievement(const bool& value);

	//TMap<TEnumAsByte<E_AnimalType>, bool>	WildAnimalsTypeKilled;		//Offset: 1096	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<TEnumAsByte<E_AnimalType>, bool> M_GetWildAnimalsTypeKilled() const;
	TMap<TEnumAsByte<E_AnimalType>, bool>* M_PtrGetWildAnimalsTypeKilled();
	void M_SetWildAnimalsTypeKilled(const TMap<TEnumAsByte<E_AnimalType>, bool>& value);

	//TMap<TEnumAsByte<E_Ownership>, bool>	VillagesVisited;		//Offset: 1176	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TMap<TEnumAsByte<E_Ownership>, bool> M_GetVillagesVisited() const;
	TMap<TEnumAsByte<E_Ownership>, bool>* M_PtrGetVillagesVisited();
	void M_SetVillagesVisited(const TMap<TEnumAsByte<E_Ownership>, bool>& value);

	//bool	SurvivedWinterNoClothes;		//Offset: 1256	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSurvivedWinterNoClothes() const;
	bool* M_PtrGetSurvivedWinterNoClothes();
	void M_SetSurvivedWinterNoClothes(const bool& value);

	//int32_t	SeasonsOfWifeGifts;		//Offset: 1260	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetSeasonsOfWifeGifts() const;
	int32_t* M_PtrGetSeasonsOfWifeGifts();
	void M_SetSeasonsOfWifeGifts(const int32_t& value);

	//int32_t	StolenItemsSold;		//Offset: 1264	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetStolenItemsSold() const;
	int32_t* M_PtrGetStolenItemsSold();
	void M_SetStolenItemsSold(const int32_t& value);

	//int32_t	ConsecutiveNightsSlept;		//Offset: 1268	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetConsecutiveNightsSlept() const;
	int32_t* M_PtrGetConsecutiveNightsSlept();
	void M_SetConsecutiveNightsSlept(const int32_t& value);

	//bool	IsCutscenePlaying;		//Offset: 1272	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsCutscenePlaying() const;
	bool* M_PtrGetIsCutscenePlaying();
	void M_SetIsCutscenePlaying(const bool& value);

	//int32_t	MDSIDEQUESTS;		//Offset: 1276	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetMDSIDEQUESTS() const;
	int32_t* M_PtrGetMDSIDEQUESTS();
	void M_SetMDSIDEQUESTS(const int32_t& value);

	//int32_t	MDCAUGHTSTEALING;		//Offset: 1280	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetMDCAUGHTSTEALING() const;
	int32_t* M_PtrGetMDCAUGHTSTEALING();
	void M_SetMDCAUGHTSTEALING(const int32_t& value);

	//int32_t	MDSTUMPS;		//Offset: 1284	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetMDSTUMPS() const;
	int32_t* M_PtrGetMDSTUMPS();
	void M_SetMDSTUMPS(const int32_t& value);

	//class UAudioComponent*	CutsceneSound;		//Offset: 1288	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UAudioComponent* M_GetCutsceneSound() const;
	class UAudioComponent** M_PtrGetCutsceneSound();
	void M_SetCutsceneSound(const class UAudioComponent*& value);

	//TAssetPtr<class FNone_323>	AlreadyWrittenAchievements;		//Offset: 1296	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TAssetPtr<class FNone_323> M_GetAlreadyWrittenAchievements() const;
	TAssetPtr<class FNone_323>* M_PtrGetAlreadyWrittenAchievements();
	void M_SetAlreadyWrittenAchievements(const TAssetPtr<class FNone_323>& value);

	//bool	SaveDataExistsTemp;		//Offset: 1376	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSaveDataExistsTemp() const;
	bool* M_PtrGetSaveDataExistsTemp();
	void M_SetSaveDataExistsTemp(const bool& value);

	//bool	SaveGameExistsTemp;		//Offset: 1377	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSaveGameExistsTemp() const;
	bool* M_PtrGetSaveGameExistsTemp();
	void M_SetSaveGameExistsTemp(const bool& value);

	//class USAVE_Data_C*	SaveDataRefTemp;		//Offset: 1384	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class USAVE_Data_C* M_GetSaveDataRefTemp() const;
	class USAVE_Data_C** M_PtrGetSaveDataRefTemp();
	void M_SetSaveDataRefTemp(const class USAVE_Data_C*& value);

	//class USAVE_Game_C*	SaveGameRefTemp;		//Offset: 1392	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class USAVE_Game_C* M_GetSaveGameRefTemp() const;
	class USAVE_Game_C** M_PtrGetSaveGameRefTemp();
	void M_SetSaveGameRefTemp(const class USAVE_Game_C*& value);

	//struct FString	SaveDataNameTemp;		//Offset: 1400	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
	struct FString M_GetSaveDataNameTemp() const;
	struct FString* M_PtrGetSaveDataNameTemp();
	void M_SetSaveDataNameTemp(const struct FString& value);

	//struct FString	SaveGameNameTemp;		//Offset: 1416	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
	struct FString M_GetSaveGameNameTemp() const;
	struct FString* M_PtrGetSaveGameNameTemp();
	void M_SetSaveGameNameTemp(const struct FString& value);

	//bool	ChangeGameplaySettingsOnSeasonChange;		//Offset: 1432	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetChangeGameplaySettingsOnSeasonChange() const;
	bool* M_PtrGetChangeGameplaySettingsOnSeasonChange();
	void M_SetChangeGameplaySettingsOnSeasonChange(const bool& value);

	//float	NPCNeeds_WoodMultiplier_OnSeasonChange;		//Offset: 1436	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetNPCNeeds_WoodMultiplier_OnSeasonChange() const;
	float* M_PtrGetNPCNeeds_WoodMultiplier_OnSeasonChange();
	void M_SetNPCNeeds_WoodMultiplier_OnSeasonChange(const float& value);

	//float	AnimalsDamageMultiplier_OnSeasonChange;		//Offset: 1440	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetAnimalsDamageMultiplier_OnSeasonChange() const;
	float* M_PtrGetAnimalsDamageMultiplier_OnSeasonChange();
	void M_SetAnimalsDamageMultiplier_OnSeasonChange(const float& value);

	//bool	LoadingGameAchi;		//Offset: 1444	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetLoadingGameAchi() const;
	bool* M_PtrGetLoadingGameAchi();
	void M_SetLoadingGameAchi(const bool& value);

	//int32_t	SystemLoadingIterator;		//Offset: 1448	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetSystemLoadingIterator() const;
	int32_t* M_PtrGetSystemLoadingIterator();
	void M_SetSystemLoadingIterator(const int32_t& value);

	//class UMultiFrameAsyncTask*	SystemLoadingTask;		//Offset: 1456	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UMultiFrameAsyncTask* M_GetSystemLoadingTask() const;
	class UMultiFrameAsyncTask** M_PtrGetSystemLoadingTask();
	void M_SetSystemLoadingTask(const class UMultiFrameAsyncTask*& value);

	//TArray<struct FVector>	FreeCameraSavedPositions;		//Offset: 1464	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FVector> M_GetFreeCameraSavedPositions() const;
	TArray<struct FVector>* M_PtrGetFreeCameraSavedPositions();
	void M_SetFreeCameraSavedPositions(const TArray<struct FVector>& value);

	//TArray<struct FRotator>	FreeCameraSavedRotations;		//Offset: 1480	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FRotator> M_GetFreeCameraSavedRotations() const;
	TArray<struct FRotator>* M_PtrGetFreeCameraSavedRotations();
	void M_SetFreeCameraSavedRotations(const TArray<struct FRotator>& value);

	//bool	Default_FastBuilding;		//Offset: 1496	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefault_FastBuilding() const;
	bool* M_PtrGetDefault_FastBuilding();
	void M_SetDefault_FastBuilding(const bool& value);

	//bool	FastBuilding;		//Offset: 1497	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetFastBuilding() const;
	bool* M_PtrGetFastBuilding();
	void M_SetFastBuilding(const bool& value);

	//bool	Default_FastStorage;		//Offset: 1498	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefault_FastStorage() const;
	bool* M_PtrGetDefault_FastStorage();
	void M_SetDefault_FastStorage(const bool& value);

	//bool	FastStorage;		//Offset: 1499	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetFastStorage() const;
	bool* M_PtrGetFastStorage();
	void M_SetFastStorage(const bool& value);

	//bool	Default_StopDestructionOverTime;		//Offset: 1500	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefault_StopDestructionOverTime() const;
	bool* M_PtrGetDefault_StopDestructionOverTime();
	void M_SetDefault_StopDestructionOverTime(const bool& value);

	//bool	StopDestructionOverTime;		//Offset: 1501	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetStopDestructionOverTime() const;
	bool* M_PtrGetStopDestructionOverTime();
	void M_SetStopDestructionOverTime(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GM_MedievalDynasty.GM_MedievalDynasty_C");
		return ptr;
	}

#pragma region Functions
	void ExecuteUbergraph_GM_MedievalDynasty(int32_t EntryPoint);
	
	void TryToAddAchievement();
	
	void GiveAchievement(const struct FName& AchID);

	void BPI_OnQuitGame();

	void BPI_OnAutosaveChanged();

	void BPI_OnChromaChanged();

	void CutsceneAudioFinished();

	void CacheStats();

	void AddStatProgress(struct FName StatName, int32_t StatValue);

	void UnlockAchievement(struct FName AchievementID);

	void StopTutorialVideo();

	void StartTutorialVideo(struct FString MediaURL);

	void PauseGameOnCutscene(struct FString OpenedUrl);

	void RemoveCutsceneOnEnd();

	void CreateCutscene(TEnumAsByte<E_Cutscenes> Type, struct FString MediaFileURL);

	void BPI_ClearSaveSlot(struct FString SlotName);

	void BPI_SaveData();

	void PlayIntroSound(struct FString OpenedUrl);

	void FinishIntro();

	void SkipIntro();

	void ReturnToMainMenu(bool InMainMenu);

	void LoadGameMap();

	void LoadNewGameMaps();

	void LoadMainMenuMaps();

	void ReceiveBeginPlay();

	void StartGame();

	void InitGameMode();

	void OnSuccess_0485A37C4B2DCCF0972EA6AF5AF4D88C(int32_t LeaderboardValue);

	void OnFailure_0485A37C4B2DCCF0972EA6AF5AF4D88C(int32_t LeaderboardValue);

	void OnSuccess_28AC6FD24A567C5F48F6468535016AE5();

	void OnFailure_28AC6FD24A567C5F48F6468535016AE5();

	void OnSuccess_EA96BC0B4D703286A252DC8A122845D8();

	void OnFailure_EA96BC0B4D703286A252DC8A122845D8();

	void OnSuccess_84E5ED6846FFBFD86BF35FA93A18B780(int32_t LeaderboardValue);

	void OnFailure_84E5ED6846FFBFD86BF35FA93A18B780(int32_t LeaderboardValue);

	void OnSuccess_325541564D38FBB9162C08A8AD15D127(int32_t LeaderboardValue);

	void OnFailure_325541564D38FBB9162C08A8AD15D127(int32_t LeaderboardValue);

	void OnSuccess_5E4B41C341BD5DDDE7A72DA6B3702C96();

	void OnFailure_5E4B41C341BD5DDDE7A72DA6B3702C96();

	void OnSuccess_0CC84B6C433360CF7A58BCB17E8260E9();

	void OnFailure_0CC84B6C433360CF7A58BCB17E8260E9();

	void OnSuccess_9A8F1F054052C084E8E2BF8E2A1643F2(struct FName WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);

	void OnFailure_9A8F1F054052C084E8E2BF8E2A1643F2(struct FName WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);

	void SetSystemsManager();

	void CreateMainMenu();

	void RemoveMainMenu(float Delay);

	bool CreateIntro();

	void RemoveIntro(float Delay);

	void CreateDeathScreen(TEnumAsByte<E_DeathType> DeathType);

	void CreateLoadingScreen(bool ShowTips);

	void RemoveLoadingScreen();

	void ResetGameModeSettings();

	void LoadGameModeSettings();

	void SaveGameModeSettings(class USAVE_Game_C* SaveReference);

	void InitSaveSystem();

	void RemoveCutscene(float Delay, struct FString* OldVideoURL);

	void CheckIfSaveExist(struct FString SlotName, bool* SaveDataExists, bool* SaveGameExists);

	void GetSaveData(struct FString SlotName, class USAVE_Data_C** SaveData, class USAVE_Game_C** SaveGame);

	void SaveDebug();

	void UpdateGameplaySettingsOnSeasonChange();

	void CheckLoginStatusAfterLoad();

	void BPI_LoadGameFromSelectedSlot(struct FString SlotName, bool* Success);

	void BPI_CreateNewSaveGame(struct FString UserSaveName, int32_t* GameSavedAtSlot, struct FString* SaveFileName);

	void BPI_QuickSave(bool* Success);

	void BPI_AutoSave(bool* Success);

	void BPI_QuickLoad(bool* Success);

	void BPI_FixOldSaveFiles(bool* Success);

	void GetDefaultSaveSlotNames(struct FString* SaveDataSlotName, struct FString* SaveGameSlotName);

	void BPI_SaveGameToSelectedSlot(struct FString UserSaveName, struct FString DataSlotName, struct FString GameSlotName, bool* Success);

#pragma endregion
};
};