#pragma once
#include "Structs.h"
#include "Engine/GameModeBase.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass GM_MedievalDynasty.GM_MedievalDynasty_C
// Super: Class Engine.GameModeBase
// Size: 1152
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

	//class UBinkMediaPlayer*	BinkMediaPlayer;		//Offset: 744	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UBinkMediaPlayer* M_GetBinkMediaPlayer() const;
	class UBinkMediaPlayer** M_PtrGetBinkMediaPlayer();
	void M_SetBinkMediaPlayer(const class UBinkMediaPlayer*& value);

	//int32_t	Default_DaysPerSeason;		//Offset: 752	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDefault_DaysPerSeason() const;
	int32_t* M_PtrGetDefault_DaysPerSeason();
	void M_SetDefault_DaysPerSeason(const int32_t& value);

	//int32_t	DaysPerSeason;		//Offset: 756	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDaysPerSeason() const;
	int32_t* M_PtrGetDaysPerSeason();
	void M_SetDaysPerSeason(const int32_t& value);

	//float	Default_TaxMultiplier;		//Offset: 760	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefault_TaxMultiplier() const;
	float* M_PtrGetDefault_TaxMultiplier();
	void M_SetDefault_TaxMultiplier(const float& value);

	//float	TaxMultiplier;		//Offset: 764	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTaxMultiplier() const;
	float* M_PtrGetTaxMultiplier();
	void M_SetTaxMultiplier(const float& value);

	//float	Default_BuildingsLimitMultiplier;		//Offset: 768	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefault_BuildingsLimitMultiplier() const;
	float* M_PtrGetDefault_BuildingsLimitMultiplier();
	void M_SetDefault_BuildingsLimitMultiplier(const float& value);

	//float	BuildingsLimitMultiplier;		//Offset: 772	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBuildingsLimitMultiplier() const;
	float* M_PtrGetBuildingsLimitMultiplier();
	void M_SetBuildingsLimitMultiplier(const float& value);

	//int32_t	DaysPerSeason_OnSeasonChange;		//Offset: 776	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDaysPerSeason_OnSeasonChange() const;
	int32_t* M_PtrGetDaysPerSeason_OnSeasonChange();
	void M_SetDaysPerSeason_OnSeasonChange(const int32_t& value);

	//bool	Default_Events;		//Offset: 780	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefault_Events() const;
	bool* M_PtrGetDefault_Events();
	void M_SetDefault_Events(const bool& value);

	//bool	Events;		//Offset: 781	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetEvents() const;
	bool* M_PtrGetEvents();
	void M_SetEvents(const bool& value);

	//bool	Default_Bandits;		//Offset: 782	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefault_Bandits() const;
	bool* M_PtrGetDefault_Bandits();
	void M_SetDefault_Bandits(const bool& value);

	//bool	Bandits;		//Offset: 783	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBandits() const;
	bool* M_PtrGetBandits();
	void M_SetBandits(const bool& value);

	//bool	Bandits_OnSeasonChange;		//Offset: 784	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBandits_OnSeasonChange() const;
	bool* M_PtrGetBandits_OnSeasonChange();
	void M_SetBandits_OnSeasonChange(const bool& value);

	//bool	Default_Birds;		//Offset: 785	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefault_Birds() const;
	bool* M_PtrGetDefault_Birds();
	void M_SetDefault_Birds(const bool& value);

	//bool	Birds;		//Offset: 786	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBirds() const;
	bool* M_PtrGetBirds();
	void M_SetBirds(const bool& value);

	//bool	Default_UnlimitedHP;		//Offset: 787	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefault_UnlimitedHP() const;
	bool* M_PtrGetDefault_UnlimitedHP();
	void M_SetDefault_UnlimitedHP(const bool& value);

	//bool	UnlimitedHP;		//Offset: 788	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUnlimitedHP() const;
	bool* M_PtrGetUnlimitedHP();
	void M_SetUnlimitedHP(const bool& value);

	//bool	Default_UnlimitedStamina;		//Offset: 789	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefault_UnlimitedStamina() const;
	bool* M_PtrGetDefault_UnlimitedStamina();
	void M_SetDefault_UnlimitedStamina(const bool& value);

	//bool	UnlimitedStamina;		//Offset: 790	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUnlimitedStamina() const;
	bool* M_PtrGetUnlimitedStamina();
	void M_SetUnlimitedStamina(const bool& value);

	//bool	Default_UnlimitedFood;		//Offset: 791	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefault_UnlimitedFood() const;
	bool* M_PtrGetDefault_UnlimitedFood();
	void M_SetDefault_UnlimitedFood(const bool& value);

	//bool	UnlimitedFood;		//Offset: 792	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUnlimitedFood() const;
	bool* M_PtrGetUnlimitedFood();
	void M_SetUnlimitedFood(const bool& value);

	//bool	Default_UnlimitedWater;		//Offset: 793	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefault_UnlimitedWater() const;
	bool* M_PtrGetDefault_UnlimitedWater();
	void M_SetDefault_UnlimitedWater(const bool& value);

	//bool	UnlimitedWater;		//Offset: 794	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUnlimitedWater() const;
	bool* M_PtrGetUnlimitedWater();
	void M_SetUnlimitedWater(const bool& value);

	//float	Default_NPCNeeds_FoodMultiplier;		//Offset: 796	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefault_NPCNeeds_FoodMultiplier() const;
	float* M_PtrGetDefault_NPCNeeds_FoodMultiplier();
	void M_SetDefault_NPCNeeds_FoodMultiplier(const float& value);

	//float	NPCNeeds_FoodMultiplier;		//Offset: 800	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetNPCNeeds_FoodMultiplier() const;
	float* M_PtrGetNPCNeeds_FoodMultiplier();
	void M_SetNPCNeeds_FoodMultiplier(const float& value);

	//float	NPCNeeds_FoodMultiplier_OnSeasonChange;		//Offset: 804	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetNPCNeeds_FoodMultiplier_OnSeasonChange() const;
	float* M_PtrGetNPCNeeds_FoodMultiplier_OnSeasonChange();
	void M_SetNPCNeeds_FoodMultiplier_OnSeasonChange(const float& value);

	//float	Default_NPCNeeds_WaterMultiplier;		//Offset: 808	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefault_NPCNeeds_WaterMultiplier() const;
	float* M_PtrGetDefault_NPCNeeds_WaterMultiplier();
	void M_SetDefault_NPCNeeds_WaterMultiplier(const float& value);

	//float	NPCNeeds_WaterMultiplier;		//Offset: 812	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetNPCNeeds_WaterMultiplier() const;
	float* M_PtrGetNPCNeeds_WaterMultiplier();
	void M_SetNPCNeeds_WaterMultiplier(const float& value);

	//float	NPCNeeds_WaterMultiplier_OnSeasonChange;		//Offset: 816	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetNPCNeeds_WaterMultiplier_OnSeasonChange() const;
	float* M_PtrGetNPCNeeds_WaterMultiplier_OnSeasonChange();
	void M_SetNPCNeeds_WaterMultiplier_OnSeasonChange(const float& value);

	//float	Default_NPCNeeds_WoodMultiplier;		//Offset: 820	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefault_NPCNeeds_WoodMultiplier() const;
	float* M_PtrGetDefault_NPCNeeds_WoodMultiplier();
	void M_SetDefault_NPCNeeds_WoodMultiplier(const float& value);

	//float	NPCNeeds_WoodMultiplier;		//Offset: 824	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetNPCNeeds_WoodMultiplier() const;
	float* M_PtrGetNPCNeeds_WoodMultiplier();
	void M_SetNPCNeeds_WoodMultiplier(const float& value);

	//float	Default_AnimalsHPMultiplier;		//Offset: 828	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefault_AnimalsHPMultiplier() const;
	float* M_PtrGetDefault_AnimalsHPMultiplier();
	void M_SetDefault_AnimalsHPMultiplier(const float& value);

	//float	AnimalsHPMultiplier;		//Offset: 832	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetAnimalsHPMultiplier() const;
	float* M_PtrGetAnimalsHPMultiplier();
	void M_SetAnimalsHPMultiplier(const float& value);

	//float	AnimalsHPMultiplier_OnSeasonChange;		//Offset: 836	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetAnimalsHPMultiplier_OnSeasonChange() const;
	float* M_PtrGetAnimalsHPMultiplier_OnSeasonChange();
	void M_SetAnimalsHPMultiplier_OnSeasonChange(const float& value);

	//float	Default_AnimalsDamageMultiplier;		//Offset: 840	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefault_AnimalsDamageMultiplier() const;
	float* M_PtrGetDefault_AnimalsDamageMultiplier();
	void M_SetDefault_AnimalsDamageMultiplier(const float& value);

	//float	AnimalsDamageMultiplier;		//Offset: 844	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetAnimalsDamageMultiplier() const;
	float* M_PtrGetAnimalsDamageMultiplier();
	void M_SetAnimalsDamageMultiplier(const float& value);

	//bool	Default_UnlimitedWeight;		//Offset: 848	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefault_UnlimitedWeight() const;
	bool* M_PtrGetDefault_UnlimitedWeight();
	void M_SetDefault_UnlimitedWeight(const bool& value);

	//bool	UnlimitedWeight;		//Offset: 849	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUnlimitedWeight() const;
	bool* M_PtrGetUnlimitedWeight();
	void M_SetUnlimitedWeight(const bool& value);

	//bool	Default_Poisoning;		//Offset: 850	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefault_Poisoning() const;
	bool* M_PtrGetDefault_Poisoning();
	void M_SetDefault_Poisoning(const bool& value);

	//bool	Poisoning;		//Offset: 851	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetPoisoning() const;
	bool* M_PtrGetPoisoning();
	void M_SetPoisoning(const bool& value);

	//bool	Default_Temperature;		//Offset: 852	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefault_Temperature() const;
	bool* M_PtrGetDefault_Temperature();
	void M_SetDefault_Temperature(const bool& value);

	//bool	Temperature;		//Offset: 853	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetTemperature() const;
	bool* M_PtrGetTemperature();
	void M_SetTemperature(const bool& value);

	//bool	Default_FastCrafting;		//Offset: 854	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefault_FastCrafting() const;
	bool* M_PtrGetDefault_FastCrafting();
	void M_SetDefault_FastCrafting(const bool& value);

	//bool	FastCrafting;		//Offset: 855	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetFastCrafting() const;
	bool* M_PtrGetFastCrafting();
	void M_SetFastCrafting(const bool& value);

	//float	Default_XPGainMultiplier;		//Offset: 856	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefault_XPGainMultiplier() const;
	float* M_PtrGetDefault_XPGainMultiplier();
	void M_SetDefault_XPGainMultiplier(const float& value);

	//float	XPGainMultiplier;		//Offset: 860	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetXPGainMultiplier() const;
	float* M_PtrGetXPGainMultiplier();
	void M_SetXPGainMultiplier(const float& value);

	//float	Default_TechnologyGainMultiplier;		//Offset: 864	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefault_TechnologyGainMultiplier() const;
	float* M_PtrGetDefault_TechnologyGainMultiplier();
	void M_SetDefault_TechnologyGainMultiplier(const float& value);

	//float	TechnologyGainMultiplier;		//Offset: 868	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTechnologyGainMultiplier() const;
	float* M_PtrGetTechnologyGainMultiplier();
	void M_SetTechnologyGainMultiplier(const float& value);

	//float	Default_DynastyReputationGainMultiplier;		//Offset: 872	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefault_DynastyReputationGainMultiplier() const;
	float* M_PtrGetDefault_DynastyReputationGainMultiplier();
	void M_SetDefault_DynastyReputationGainMultiplier(const float& value);

	//float	DynastyReputationGainMultiplier;		//Offset: 876	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDynastyReputationGainMultiplier() const;
	float* M_PtrGetDynastyReputationGainMultiplier();
	void M_SetDynastyReputationGainMultiplier(const float& value);

	//bool	DefaultStopSpoilForDroppedItems;		//Offset: 880	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefaultStopSpoilForDroppedItems() const;
	bool* M_PtrGetDefaultStopSpoilForDroppedItems();
	void M_SetDefaultStopSpoilForDroppedItems(const bool& value);

	//bool	StopSpoilForDroppedItems;		//Offset: 881	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetStopSpoilForDroppedItems() const;
	bool* M_PtrGetStopSpoilForDroppedItems();
	void M_SetStopSpoilForDroppedItems(const bool& value);

	//struct FDateTime	DebugTime;		//Offset: 888	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FDateTime M_GetDebugTime() const;
	struct FDateTime* M_PtrGetDebugTime();
	void M_SetDebugTime(const struct FDateTime& value);

	//class USAVE_Game_C*	SaveGameReference;		//Offset: 896	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class USAVE_Game_C* M_GetSaveGameReference() const;
	class USAVE_Game_C** M_PtrGetSaveGameReference();
	void M_SetSaveGameReference(const class USAVE_Game_C*& value);

	//struct FString	SaveDataSlotName;		//Offset: 904	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
	struct FString M_GetSaveDataSlotName() const;
	struct FString* M_PtrGetSaveDataSlotName();
	void M_SetSaveDataSlotName(const struct FString& value);

	//struct FString	SaveGameSlotName;		//Offset: 920	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
	struct FString M_GetSaveGameSlotName() const;
	struct FString* M_PtrGetSaveGameSlotName();
	void M_SetSaveGameSlotName(const struct FString& value);

	//struct FDateTime	TotalDebugTime;		//Offset: 936	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FDateTime M_GetTotalDebugTime() const;
	struct FDateTime* M_PtrGetTotalDebugTime();
	void M_SetTotalDebugTime(const struct FDateTime& value);

	//bool	IsCutscenePlaying;		//Offset: 944	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsCutscenePlaying() const;
	bool* M_PtrGetIsCutscenePlaying();
	void M_SetIsCutscenePlaying(const bool& value);

	//bool	SaveDataExistsTemp;		//Offset: 945	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSaveDataExistsTemp() const;
	bool* M_PtrGetSaveDataExistsTemp();
	void M_SetSaveDataExistsTemp(const bool& value);

	//bool	SaveGameExistsTemp;		//Offset: 946	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSaveGameExistsTemp() const;
	bool* M_PtrGetSaveGameExistsTemp();
	void M_SetSaveGameExistsTemp(const bool& value);

	//class USAVE_Data_C*	SaveDataRefTemp;		//Offset: 952	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class USAVE_Data_C* M_GetSaveDataRefTemp() const;
	class USAVE_Data_C** M_PtrGetSaveDataRefTemp();
	void M_SetSaveDataRefTemp(const class USAVE_Data_C*& value);

	//class USAVE_Game_C*	SaveGameRefTemp;		//Offset: 960	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class USAVE_Game_C* M_GetSaveGameRefTemp() const;
	class USAVE_Game_C** M_PtrGetSaveGameRefTemp();
	void M_SetSaveGameRefTemp(const class USAVE_Game_C*& value);

	//struct FString	SaveDataNameTemp;		//Offset: 968	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
	struct FString M_GetSaveDataNameTemp() const;
	struct FString* M_PtrGetSaveDataNameTemp();
	void M_SetSaveDataNameTemp(const struct FString& value);

	//struct FString	SaveGameNameTemp;		//Offset: 984	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
	struct FString M_GetSaveGameNameTemp() const;
	struct FString* M_PtrGetSaveGameNameTemp();
	void M_SetSaveGameNameTemp(const struct FString& value);

	//bool	ChangeGameplaySettingsOnSeasonChange;		//Offset: 1000	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetChangeGameplaySettingsOnSeasonChange() const;
	bool* M_PtrGetChangeGameplaySettingsOnSeasonChange();
	void M_SetChangeGameplaySettingsOnSeasonChange(const bool& value);

	//float	NPCNeeds_WoodMultiplier_OnSeasonChange;		//Offset: 1004	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetNPCNeeds_WoodMultiplier_OnSeasonChange() const;
	float* M_PtrGetNPCNeeds_WoodMultiplier_OnSeasonChange();
	void M_SetNPCNeeds_WoodMultiplier_OnSeasonChange(const float& value);

	//float	AnimalsDamageMultiplier_OnSeasonChange;		//Offset: 1008	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetAnimalsDamageMultiplier_OnSeasonChange() const;
	float* M_PtrGetAnimalsDamageMultiplier_OnSeasonChange();
	void M_SetAnimalsDamageMultiplier_OnSeasonChange(const float& value);

	//int32_t	SystemLoadingIterator;		//Offset: 1012	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetSystemLoadingIterator() const;
	int32_t* M_PtrGetSystemLoadingIterator();
	void M_SetSystemLoadingIterator(const int32_t& value);

	//class UMultiFrameAsyncTask*	SystemLoadingTask;		//Offset: 1016	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UMultiFrameAsyncTask* M_GetSystemLoadingTask() const;
	class UMultiFrameAsyncTask** M_PtrGetSystemLoadingTask();
	void M_SetSystemLoadingTask(const class UMultiFrameAsyncTask*& value);

	//TArray<struct FVector>	FreeCameraSavedPositions;		//Offset: 1024	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FVector> M_GetFreeCameraSavedPositions() const;
	TArray<struct FVector>* M_PtrGetFreeCameraSavedPositions();
	void M_SetFreeCameraSavedPositions(const TArray<struct FVector>& value);

	//TArray<struct FRotator>	FreeCameraSavedRotations;		//Offset: 1040	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FRotator> M_GetFreeCameraSavedRotations() const;
	TArray<struct FRotator>* M_PtrGetFreeCameraSavedRotations();
	void M_SetFreeCameraSavedRotations(const TArray<struct FRotator>& value);

	//bool	Default_FastBuilding;		//Offset: 1056	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefault_FastBuilding() const;
	bool* M_PtrGetDefault_FastBuilding();
	void M_SetDefault_FastBuilding(const bool& value);

	//bool	FastBuilding;		//Offset: 1057	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetFastBuilding() const;
	bool* M_PtrGetFastBuilding();
	void M_SetFastBuilding(const bool& value);

	//bool	Default_FastStorage;		//Offset: 1058	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefault_FastStorage() const;
	bool* M_PtrGetDefault_FastStorage();
	void M_SetDefault_FastStorage(const bool& value);

	//bool	FastStorage;		//Offset: 1059	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetFastStorage() const;
	bool* M_PtrGetFastStorage();
	void M_SetFastStorage(const bool& value);

	//bool	Default_StopDestructionOverTime;		//Offset: 1060	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDefault_StopDestructionOverTime() const;
	bool* M_PtrGetDefault_StopDestructionOverTime();
	void M_SetDefault_StopDestructionOverTime(const bool& value);

	//bool	StopDestructionOverTime;		//Offset: 1061	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetStopDestructionOverTime() const;
	bool* M_PtrGetStopDestructionOverTime();
	void M_SetStopDestructionOverTime(const bool& value);

	//TArray<class APlayerController*>	PlayersList;		//Offset: 1064	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
	TArray<class APlayerController*> M_GetPlayersList() const;
	TArray<class APlayerController*>* M_PtrGetPlayersList();
	void M_SetPlayersList(const TArray<class APlayerController*>& value);

	//bool	Multiplayer;		//Offset: 1080	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetMultiplayer() const;
	bool* M_PtrGetMultiplayer();
	void M_SetMultiplayer(const bool& value);

	//class AGS_GameState_C*	MDGameState;		//Offset: 1088	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AGS_GameState_C* M_GetMDGameState() const;
	class AGS_GameState_C** M_PtrGetMDGameState();
	void M_SetMDGameState(const class AGS_GameState_C*& value);

	//float	Default_BanditsHPMultiplier;		//Offset: 1096	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefault_BanditsHPMultiplier() const;
	float* M_PtrGetDefault_BanditsHPMultiplier();
	void M_SetDefault_BanditsHPMultiplier(const float& value);

	//float	BanditsHPMultiplier;		//Offset: 1100	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBanditsHPMultiplier() const;
	float* M_PtrGetBanditsHPMultiplier();
	void M_SetBanditsHPMultiplier(const float& value);

	//float	BanditsHPMultiplier_OnSeasonChange;		//Offset: 1104	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBanditsHPMultiplier_OnSeasonChange() const;
	float* M_PtrGetBanditsHPMultiplier_OnSeasonChange();
	void M_SetBanditsHPMultiplier_OnSeasonChange(const float& value);

	//float	Default_BanditsDamageMultiplier;		//Offset: 1108	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefault_BanditsDamageMultiplier() const;
	float* M_PtrGetDefault_BanditsDamageMultiplier();
	void M_SetDefault_BanditsDamageMultiplier(const float& value);

	//float	BanditsDamageMultiplier;		//Offset: 1112	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBanditsDamageMultiplier() const;
	float* M_PtrGetBanditsDamageMultiplier();
	void M_SetBanditsDamageMultiplier(const float& value);

	//float	BanditsDamageMultiplier_OnSeasonChange;		//Offset: 1116	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBanditsDamageMultiplier_OnSeasonChange() const;
	float* M_PtrGetBanditsDamageMultiplier_OnSeasonChange();
	void M_SetBanditsDamageMultiplier_OnSeasonChange(const float& value);

	//TArray<struct FLinearColor>	PlayersColors;		//Offset: 1120	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FLinearColor> M_GetPlayersColors() const;
	TArray<struct FLinearColor>* M_PtrGetPlayersColors();
	void M_SetPlayersColors(const TArray<struct FLinearColor>& value);

	//float	Default_WeaponDurabilityMultiplier;		//Offset: 1136	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefault_WeaponDurabilityMultiplier() const;
	float* M_PtrGetDefault_WeaponDurabilityMultiplier();
	void M_SetDefault_WeaponDurabilityMultiplier(const float& value);

	//float	WeaponDurabilityMultiplier;		//Offset: 1140	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetWeaponDurabilityMultiplier() const;
	float* M_PtrGetWeaponDurabilityMultiplier();
	void M_SetWeaponDurabilityMultiplier(const float& value);

	//float	Default_ArmorDurabilityMultiplier;		//Offset: 1144	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDefault_ArmorDurabilityMultiplier() const;
	float* M_PtrGetDefault_ArmorDurabilityMultiplier();
	void M_SetDefault_ArmorDurabilityMultiplier(const float& value);

	//float	ArmorDurabilityMultiplier;		//Offset: 1148	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetArmorDurabilityMultiplier() const;
	float* M_PtrGetArmorDurabilityMultiplier();
	void M_SetArmorDurabilityMultiplier(const float& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GM_MedievalDynasty.GM_MedievalDynasty_C");
		return ptr;
	}

#pragma region Functions
	void ExecuteUbergraph_GM_MedievalDynasty(int32_t EntryPoint);

	void SaveLoadTasksEnd();

	void BPI_OnSaveLoad();

	void FinishPlayerSpawn(class APC_Player_C* PlayerController);

	void FinishLoadingMultiplayerMapFromSaveFile();

	void QuitTasksEnd();

	void ToMainMenuTasksEnd();

	void DisconnectAllOnHostLeave_BPI(E_SessionEndBehavior Quit);

	void DisconnectAllClients_Server(E_SessionEndBehavior Quit);

	void LoadMultiplayerMap_BPI(bool Listen);

	void SpawnPlayer_Server(class APlayerController* PlayerController);

	void K2_OnLogout(class AController* ExitingController);

	void K2_PostLogin(class APlayerController* NewPlayer);

	void FinishLoadingMultiplayerMap();

	void LoadMultiplayerMap(bool Listen);

	void BPI_OnQuitGame();

	void BPI_OnAutosaveChanged();

	void BPI_OnChromaChanged();

	void BPI_ClearSaveSlot(struct FString SlotName);

	void BPI_SaveData();

	void PlayIntroSound(struct FString OpenedUrl);

	void FinishValleyIntro();

	void SkipValleyIntro();

	void ReturnToMainMenu(bool InMainMenu);

	void LoadGameMap();

	void LoadNewGameMaps();

	void LoadMainMenuMaps();

	void ReceiveBeginPlay();

	void StartGame();

	void InitGameMode(bool load);

	void UserConstructionScript();

	void SetSystemsManager();

	void CreateMainMenu();

	void RemoveMainMenu(float Delay);

	bool CreateValleyIntro();

	void RemoveIntro(float Delay);

	void CreateLoadingScreen(bool ShowTips);

	void RemoveLoadingScreen();

	void ResetGameModeSettings();

	void LoadGameModeSettings();

	void SaveGameModeSettings(class USAVE_Game_C* SaveReference);

	void InitSaveSystem();

	void CheckIfSaveExist(struct FString SlotName, bool* SaveDataExists, bool* SaveGameExists);

	void GetSaveData(struct FString SlotName, class USAVE_Data_C** SaveData, class USAVE_Game_C** SaveGame);

	void SaveDebug();

	void UpdateGameplaySettingsOnSeasonChange();

	void CheckLoginStatusAfterLoad();

	void SpawnPlayerCharacter_CoOp(class APlayerController* PlayerControllerReference);

	void SetUnlimitedHP(bool NewValue);

	void SetUnlimitedStamina(bool NewValue);

	void SetUnlimitedFood(bool NewValue);

	void SetUnlimitedWater(bool NewValue);

	void SetUnlimitedWeight(bool NewValue);

	void SetPoisoning(bool NewValue);

	void SetTemperature(bool NewValue);

	void SetFastCrafting(bool NewValue);

	void SetFastBuilding(bool NewValue);

	void SetFastStorage(bool NewValue);

	void UpdateAllPlayersSettings();

	void UpdatePlayerSettings(class APlayerState* PlayerState);

	void ValidateSaveData();

	bool IsPlayerSaveValid(int32_t Index);

	void Set_Unique_Color_for_New_Player(class ABP_MD_PlayerState_C* NewPlayer);

	void GetPlayerIndexToLoad(class APlayerController* PlayerController, int32_t* PlayerIndex);

	void TempFixForAnimalAndBanditsSettingsOnLOad();

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