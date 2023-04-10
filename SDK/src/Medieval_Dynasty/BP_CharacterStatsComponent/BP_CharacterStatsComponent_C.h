#pragma once
#include "Structs.h"
#include "Engine/ActorComponent.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_CharacterStatsComponent.BP_CharacterStatsComponent_C
// Super: Class Engine.ActorComponent
// Size: 2044
// Size inherited: 176
/////////////////////////////////////////////
namespace UE4 {
class UBP_CharacterStatsComponent_C : public UActorComponent {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 176	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//struct FText	Name;		//Offset: 184	Size: 24	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	struct FText M_GetName() const;
	struct FText* M_PtrGetName();
	void M_SetName(const struct FText& value);

	//TEnumAsByte<E_Sex>	Sex;		//Offset: 208	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Sex> M_GetSex() const;
	TEnumAsByte<E_Sex>* M_PtrGetSex();
	void M_SetSex(const TEnumAsByte<E_Sex>& value);

	//float	Age;		//Offset: 212	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetAge() const;
	float* M_PtrGetAge();
	void M_SetAge(const float& value);

	//float	MinDeadAge;		//Offset: 216	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMinDeadAge() const;
	float* M_PtrGetMinDeadAge();
	void M_SetMinDeadAge(const float& value);

	//TEnumAsByte<E_CharacterType>	CharacterType;		//Offset: 220	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_CharacterType> M_GetCharacterType() const;
	TEnumAsByte<E_CharacterType>* M_PtrGetCharacterType();
	void M_SetCharacterType(const TEnumAsByte<E_CharacterType>& value);

	//int32_t	DeadChance;		//Offset: 224	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetDeadChance() const;
	int32_t* M_PtrGetDeadChance();
	void M_SetDeadChance(const int32_t& value);

	//bool	Dead;		//Offset: 228	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDead() const;
	bool* M_PtrGetDead();
	void M_SetDead(const bool& value);

	//TAssetPtr<class FOnSkillChange__DelegateSignature>	OnSkillChange;		//Offset: 232	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnSkillChange__DelegateSignature> M_GetOnSkillChange() const;
	TAssetPtr<class FOnSkillChange__DelegateSignature>* M_PtrGetOnSkillChange();
	void M_SetOnSkillChange(const TAssetPtr<class FOnSkillChange__DelegateSignature>& value);

	//float	CurrentMood;		//Offset: 248	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCurrentMood() const;
	float* M_PtrGetCurrentMood();
	void M_SetCurrentMood(const float& value);

	//TArray<struct FST_MasterTalent>	Talents_Extraction;		//Offset: 256	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FST_MasterTalent> M_GetTalents_Extraction() const;
	TArray<struct FST_MasterTalent>* M_PtrGetTalents_Extraction();
	void M_SetTalents_Extraction(const TArray<struct FST_MasterTalent>& value);

	//TArray<struct FST_MasterTalent>	Talents_Hunting;		//Offset: 272	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FST_MasterTalent> M_GetTalents_Hunting() const;
	TArray<struct FST_MasterTalent>* M_PtrGetTalents_Hunting();
	void M_SetTalents_Hunting(const TArray<struct FST_MasterTalent>& value);

	//TArray<struct FST_MasterTalent>	Talents_Farming;		//Offset: 288	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FST_MasterTalent> M_GetTalents_Farming() const;
	TArray<struct FST_MasterTalent>* M_PtrGetTalents_Farming();
	void M_SetTalents_Farming(const TArray<struct FST_MasterTalent>& value);

	//TArray<struct FST_MasterTalent>	Talents_Diplomacy;		//Offset: 304	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FST_MasterTalent> M_GetTalents_Diplomacy() const;
	TArray<struct FST_MasterTalent>* M_PtrGetTalents_Diplomacy();
	void M_SetTalents_Diplomacy(const TArray<struct FST_MasterTalent>& value);

	//TArray<struct FST_MasterTalent>	Talents_Survival;		//Offset: 320	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FST_MasterTalent> M_GetTalents_Survival() const;
	TArray<struct FST_MasterTalent>* M_PtrGetTalents_Survival();
	void M_SetTalents_Survival(const TArray<struct FST_MasterTalent>& value);

	//TArray<struct FST_MasterTalent>	Talents_Crafting;		//Offset: 336	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FST_MasterTalent> M_GetTalents_Crafting() const;
	TArray<struct FST_MasterTalent>* M_PtrGetTalents_Crafting();
	void M_SetTalents_Crafting(const TArray<struct FST_MasterTalent>& value);

	//struct FST_Skills	ExtractionS;		//Offset: 352	Size: 128	Flags: Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
	struct FST_Skills M_GetExtractionS() const;
	struct FST_Skills* M_PtrGetExtractionS();
	void M_SetExtractionS(const struct FST_Skills& value);

	//struct FST_Skills	HuntingS;		//Offset: 480	Size: 128	Flags: Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
	struct FST_Skills M_GetHuntingS() const;
	struct FST_Skills* M_PtrGetHuntingS();
	void M_SetHuntingS(const struct FST_Skills& value);

	//struct FST_Skills	FarmingS;		//Offset: 608	Size: 128	Flags: Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
	struct FST_Skills M_GetFarmingS() const;
	struct FST_Skills* M_PtrGetFarmingS();
	void M_SetFarmingS(const struct FST_Skills& value);

	//struct FST_Skills	DiplomacyS;		//Offset: 736	Size: 128	Flags: Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
	struct FST_Skills M_GetDiplomacyS() const;
	struct FST_Skills* M_PtrGetDiplomacyS();
	void M_SetDiplomacyS(const struct FST_Skills& value);

	//struct FST_Skills	SurvivalS;		//Offset: 864	Size: 128	Flags: Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
	struct FST_Skills M_GetSurvivalS() const;
	struct FST_Skills* M_PtrGetSurvivalS();
	void M_SetSurvivalS(const struct FST_Skills& value);

	//struct FST_Skills	CraftingS;		//Offset: 992	Size: 128	Flags: Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
	struct FST_Skills M_GetCraftingS() const;
	struct FST_Skills* M_PtrGetCraftingS();
	void M_SetCraftingS(const struct FST_Skills& value);

	//bool	IsSick;		//Offset: 1120	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsSick() const;
	bool* M_PtrGetIsSick();
	void M_SetIsSick(const bool& value);

	//TArray<float>	FlirtingModificator;		//Offset: 1128	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<float> M_GetFlirtingModificator() const;
	TArray<float>* M_PtrGetFlirtingModificator();
	void M_SetFlirtingModificator(const TArray<float>& value);

	//TArray<float>	Challange_DynastyReputationModificator;		//Offset: 1144	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<float> M_GetChallange_DynastyReputationModificator() const;
	TArray<float>* M_PtrGetChallange_DynastyReputationModificator();
	void M_SetChallange_DynastyReputationModificator(const TArray<float>& value);

	//TArray<float>	MoodLossModificator;		//Offset: 1160	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<float> M_GetMoodLossModificator() const;
	TArray<float>* M_PtrGetMoodLossModificator();
	void M_SetMoodLossModificator(const TArray<float>& value);

	//TArray<float>	BaseLikingModificator;		//Offset: 1176	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<float> M_GetBaseLikingModificator() const;
	TArray<float>* M_PtrGetBaseLikingModificator();
	void M_SetBaseLikingModificator(const TArray<float>& value);

	//TArray<float>	Quests_DynastyReputationModificator;		//Offset: 1192	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<float> M_GetQuests_DynastyReputationModificator() const;
	TArray<float>* M_PtrGetQuests_DynastyReputationModificator();
	void M_SetQuests_DynastyReputationModificator(const TArray<float>& value);

	//struct FText	NewLevelInfoText;		//Offset: 1208	Size: 24	Flags: Edit, BlueprintVisible
	struct FText M_GetNewLevelInfoText() const;
	struct FText* M_PtrGetNewLevelInfoText();
	void M_SetNewLevelInfoText(const struct FText& value);

	//TMap<TEnumAsByte<E_Skills>, struct FText>	SkillNames;		//Offset: 1232	Size: 80	Flags: Edit, BlueprintVisible
	TMap<TEnumAsByte<E_Skills>, struct FText> M_GetSkillNames() const;
	TMap<TEnumAsByte<E_Skills>, struct FText>* M_PtrGetSkillNames();
	void M_SetSkillNames(const TMap<TEnumAsByte<E_Skills>, struct FText>& value);

	//float	HoldableItemConditionUseMultiplier;		//Offset: 1312	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetHoldableItemConditionUseMultiplier() const;
	float* M_PtrGetHoldableItemConditionUseMultiplier();
	void M_SetHoldableItemConditionUseMultiplier(const float& value);

	//int32_t	MinerStacks;		//Offset: 1316	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetMinerStacks() const;
	int32_t* M_PtrGetMinerStacks();
	void M_SetMinerStacks(const int32_t& value);

	//int32_t	WoodcutterStacks;		//Offset: 1320	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetWoodcutterStacks() const;
	int32_t* M_PtrGetWoodcutterStacks();
	void M_SetWoodcutterStacks(const int32_t& value);

	//float	MinerStacksTimeOut;		//Offset: 1324	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMinerStacksTimeOut() const;
	float* M_PtrGetMinerStacksTimeOut();
	void M_SetMinerStacksTimeOut(const float& value);

	//float	Dirtiness;		//Offset: 1328	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetDirtiness() const;
	float* M_PtrGetDirtiness();
	void M_SetDirtiness(const float& value);

	//float	Food;		//Offset: 1332	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFood() const;
	float* M_PtrGetFood();
	void M_SetFood(const float& value);

	//float	FoodDecreaseRate;		//Offset: 1336	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFoodDecreaseRate() const;
	float* M_PtrGetFoodDecreaseRate();
	void M_SetFoodDecreaseRate(const float& value);

	//float	MaxHealth;		//Offset: 1340	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMaxHealth() const;
	float* M_PtrGetMaxHealth();
	void M_SetMaxHealth(const float& value);

	//float	Health;		//Offset: 1344	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetHealth() const;
	float* M_PtrGetHealth();
	void M_SetHealth(const float& value);

	//float	HealthDecreaseRate;		//Offset: 1348	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetHealthDecreaseRate() const;
	float* M_PtrGetHealthDecreaseRate();
	void M_SetHealthDecreaseRate(const float& value);

	//float	water;		//Offset: 1352	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_Getwater() const;
	float* M_PtrGetwater();
	void M_Setwater(const float& value);

	//float	WaterDecreaseRate;		//Offset: 1356	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetWaterDecreaseRate() const;
	float* M_PtrGetWaterDecreaseRate();
	void M_SetWaterDecreaseRate(const float& value);

	//float	Stamina;		//Offset: 1360	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetStamina() const;
	float* M_PtrGetStamina();
	void M_SetStamina(const float& value);

	//TAssetPtr<class FOnStaminaChange__DelegateSignature>	OnStaminaChange;		//Offset: 1368	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnStaminaChange__DelegateSignature> M_GetOnStaminaChange() const;
	TAssetPtr<class FOnStaminaChange__DelegateSignature>* M_PtrGetOnStaminaChange();
	void M_SetOnStaminaChange(const TAssetPtr<class FOnStaminaChange__DelegateSignature>& value);

	//float	MaxStamina;		//Offset: 1384	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMaxStamina() const;
	float* M_PtrGetMaxStamina();
	void M_SetMaxStamina(const float& value);

	//float	StaminaUpdateDelay;		//Offset: 1388	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetStaminaUpdateDelay() const;
	float* M_PtrGetStaminaUpdateDelay();
	void M_SetStaminaUpdateDelay(const float& value);

	//float	StaminaIncreaseRate;		//Offset: 1392	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetStaminaIncreaseRate() const;
	float* M_PtrGetStaminaIncreaseRate();
	void M_SetStaminaIncreaseRate(const float& value);

	//float	SprintStaminaDecreaseRate;		//Offset: 1396	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSprintStaminaDecreaseRate() const;
	float* M_PtrGetSprintStaminaDecreaseRate();
	void M_SetSprintStaminaDecreaseRate(const float& value);

	//float	JumpStaminaDecreaseRate;		//Offset: 1400	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetJumpStaminaDecreaseRate() const;
	float* M_PtrGetJumpStaminaDecreaseRate();
	void M_SetJumpStaminaDecreaseRate(const float& value);

	//float	SprintStaminaMin;		//Offset: 1404	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSprintStaminaMin() const;
	float* M_PtrGetSprintStaminaMin();
	void M_SetSprintStaminaMin(const float& value);

	//TAssetPtr<class FOnEncumbered__DelegateSignature>	OnEncumbered;		//Offset: 1408	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnEncumbered__DelegateSignature> M_GetOnEncumbered() const;
	TAssetPtr<class FOnEncumbered__DelegateSignature>* M_PtrGetOnEncumbered();
	void M_SetOnEncumbered(const TAssetPtr<class FOnEncumbered__DelegateSignature>& value);

	//bool	StaminaRegeneration;		//Offset: 1424	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetStaminaRegeneration() const;
	bool* M_PtrGetStaminaRegeneration();
	void M_SetStaminaRegeneration(const bool& value);

	//float	StaminaRegenerationDelay;		//Offset: 1428	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetStaminaRegenerationDelay() const;
	float* M_PtrGetStaminaRegenerationDelay();
	void M_SetStaminaRegenerationDelay(const float& value);

	//float	StaminaRegeneratioCurrentTime;		//Offset: 1432	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetStaminaRegeneratioCurrentTime() const;
	float* M_PtrGetStaminaRegeneratioCurrentTime();
	void M_SetStaminaRegeneratioCurrentTime(const float& value);

	//bool	UseStamina;		//Offset: 1436	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetUseStamina() const;
	bool* M_PtrGetUseStamina();
	void M_SetUseStamina(const bool& value);

	//TAssetPtr<class FOnHealthChange__DelegateSignature>	OnHealthChange;		//Offset: 1440	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnHealthChange__DelegateSignature> M_GetOnHealthChange() const;
	TAssetPtr<class FOnHealthChange__DelegateSignature>* M_PtrGetOnHealthChange();
	void M_SetOnHealthChange(const TAssetPtr<class FOnHealthChange__DelegateSignature>& value);

	//TAssetPtr<class FOnStaminaStartIncreasing__DelegateSignature>	OnStaminaStartIncreasing;		//Offset: 1456	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnStaminaStartIncreasing__DelegateSignature> M_GetOnStaminaStartIncreasing() const;
	TAssetPtr<class FOnStaminaStartIncreasing__DelegateSignature>* M_PtrGetOnStaminaStartIncreasing();
	void M_SetOnStaminaStartIncreasing(const TAssetPtr<class FOnStaminaStartIncreasing__DelegateSignature>& value);

	//bool	GodMode;		//Offset: 1472	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetGodMode() const;
	bool* M_PtrGetGodMode();
	void M_SetGodMode(const bool& value);

	//float	BaseTemperature;		//Offset: 1476	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBaseTemperature() const;
	float* M_PtrGetBaseTemperature();
	void M_SetBaseTemperature(const float& value);

	//float	LocalTemperature;		//Offset: 1480	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetLocalTemperature() const;
	float* M_PtrGetLocalTemperature();
	void M_SetLocalTemperature(const float& value);

	//float	SensedTemperature;		//Offset: 1484	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSensedTemperature() const;
	float* M_PtrGetSensedTemperature();
	void M_SetSensedTemperature(const float& value);

	//float	CurrentSensedTemperature;		//Offset: 1488	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetCurrentSensedTemperature() const;
	float* M_PtrGetCurrentSensedTemperature();
	void M_SetCurrentSensedTemperature(const float& value);

	//class ABP_BaseCharacter_C*	BaseCharacterReference;		//Offset: 1496	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_BaseCharacter_C* M_GetBaseCharacterReference() const;
	class ABP_BaseCharacter_C** M_PtrGetBaseCharacterReference();
	void M_SetBaseCharacterReference(const class ABP_BaseCharacter_C*& value);

	//float	TemperatureChangeSpeed;		//Offset: 1504	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTemperatureChangeSpeed() const;
	float* M_PtrGetTemperatureChangeSpeed();
	void M_SetTemperatureChangeSpeed(const float& value);

	//float	ColdProtection;		//Offset: 1508	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetColdProtection() const;
	float* M_PtrGetColdProtection();
	void M_SetColdProtection(const float& value);

	//float	HeatProtection;		//Offset: 1512	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetHeatProtection() const;
	float* M_PtrGetHeatProtection();
	void M_SetHeatProtection(const float& value);

	//TArray<struct FST_HeatingSource>	HeatingSources;		//Offset: 1520	Size: 16	Flags: Edit, BlueprintVisible, DisableEditOnInstance
	TArray<struct FST_HeatingSource> M_GetHeatingSources() const;
	TArray<struct FST_HeatingSource>* M_PtrGetHeatingSources();
	void M_SetHeatingSources(const TArray<struct FST_HeatingSource>& value);

	//float	Poison;		//Offset: 1536	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetPoison() const;
	float* M_PtrGetPoison();
	void M_SetPoison(const float& value);

	//float	PoisonDecreaseRate;		//Offset: 1540	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetPoisonDecreaseRate() const;
	float* M_PtrGetPoisonDecreaseRate();
	void M_SetPoisonDecreaseRate(const float& value);

	//bool	Overheating;		//Offset: 1544	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetOverheating() const;
	bool* M_PtrGetOverheating();
	void M_SetOverheating(const bool& value);

	//bool	Cold;		//Offset: 1545	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCold() const;
	bool* M_PtrGetCold();
	void M_SetCold(const bool& value);

	//bool	Hungry;		//Offset: 1546	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetHungry() const;
	bool* M_PtrGetHungry();
	void M_SetHungry(const bool& value);

	//bool	Thirsty;		//Offset: 1547	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetThirsty() const;
	bool* M_PtrGetThirsty();
	void M_SetThirsty(const bool& value);

	//bool	Poisoned;		//Offset: 1548	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetPoisoned() const;
	bool* M_PtrGetPoisoned();
	void M_SetPoisoned(const bool& value);

	//TAssetPtr<class FOnPoisonStart__DelegateSignature>	OnPoisonStart;		//Offset: 1552	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnPoisonStart__DelegateSignature> M_GetOnPoisonStart() const;
	TAssetPtr<class FOnPoisonStart__DelegateSignature>* M_PtrGetOnPoisonStart();
	void M_SetOnPoisonStart(const TAssetPtr<class FOnPoisonStart__DelegateSignature>& value);

	//TAssetPtr<class FOnPoisonChange__DelegateSignature>	OnPoisonChange;		//Offset: 1568	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnPoisonChange__DelegateSignature> M_GetOnPoisonChange() const;
	TAssetPtr<class FOnPoisonChange__DelegateSignature>* M_PtrGetOnPoisonChange();
	void M_SetOnPoisonChange(const TAssetPtr<class FOnPoisonChange__DelegateSignature>& value);

	//TAssetPtr<class FOnTemperatureChange__DelegateSignature>	OnTemperatureChange;		//Offset: 1584	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnTemperatureChange__DelegateSignature> M_GetOnTemperatureChange() const;
	TAssetPtr<class FOnTemperatureChange__DelegateSignature>* M_PtrGetOnTemperatureChange();
	void M_SetOnTemperatureChange(const TAssetPtr<class FOnTemperatureChange__DelegateSignature>& value);

	//bool	IsInjured;		//Offset: 1600	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsInjured() const;
	bool* M_PtrGetIsInjured();
	void M_SetIsInjured(const bool& value);

	//float	Somnolence;		//Offset: 1604	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSomnolence() const;
	float* M_PtrGetSomnolence();
	void M_SetSomnolence(const float& value);

	//float	SomnolenceIncreaseRate;		//Offset: 1608	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSomnolenceIncreaseRate() const;
	float* M_PtrGetSomnolenceIncreaseRate();
	void M_SetSomnolenceIncreaseRate(const float& value);

	//float	HealthDecreaseRate_Poison;		//Offset: 1612	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetHealthDecreaseRate_Poison() const;
	float* M_PtrGetHealthDecreaseRate_Poison();
	void M_SetHealthDecreaseRate_Poison(const float& value);

	//float	TargetMood;		//Offset: 1616	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTargetMood() const;
	float* M_PtrGetTargetMood();
	void M_SetTargetMood(const float& value);

	//class UAudioComponent*	LifeStatsSound;		//Offset: 1624	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UAudioComponent* M_GetLifeStatsSound() const;
	class UAudioComponent** M_PtrGetLifeStatsSound();
	void M_SetLifeStatsSound(const class UAudioComponent*& value);

	//TAssetPtr<class FOnDirtinessChange__DelegateSignature>	OnDirtinessChange;		//Offset: 1632	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnDirtinessChange__DelegateSignature> M_GetOnDirtinessChange() const;
	TAssetPtr<class FOnDirtinessChange__DelegateSignature>* M_PtrGetOnDirtinessChange();
	void M_SetOnDirtinessChange(const TAssetPtr<class FOnDirtinessChange__DelegateSignature>& value);

	//TAssetPtr<class FOnDead__DelegateSignature>	OnDead;		//Offset: 1648	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnDead__DelegateSignature> M_GetOnDead() const;
	TAssetPtr<class FOnDead__DelegateSignature>* M_PtrGetOnDead();
	void M_SetOnDead(const TAssetPtr<class FOnDead__DelegateSignature>& value);

	//bool	NoFood;		//Offset: 1664	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetNoFood() const;
	bool* M_PtrGetNoFood();
	void M_SetNoFood(const bool& value);

	//bool	NoWater;		//Offset: 1665	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetNoWater() const;
	bool* M_PtrGetNoWater();
	void M_SetNoWater(const bool& value);

	//bool	NoWood;		//Offset: 1666	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetNoWood() const;
	bool* M_PtrGetNoWood();
	void M_SetNoWood(const bool& value);

	//struct FST_Event_CharacterMultipliers	EventMultipliers;		//Offset: 1668	Size: 28	Flags: Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	struct FST_Event_CharacterMultipliers M_GetEventMultipliers() const;
	struct FST_Event_CharacterMultipliers* M_PtrGetEventMultipliers();
	void M_SetEventMultipliers(const struct FST_Event_CharacterMultipliers& value);

	//int32_t	MoodChangeSpeed;		//Offset: 1696	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetMoodChangeSpeed() const;
	int32_t* M_PtrGetMoodChangeSpeed();
	void M_SetMoodChangeSpeed(const int32_t& value);

	//TEnumAsByte<E_Directions>	MoodDirection;		//Offset: 1700	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_Directions> M_GetMoodDirection() const;
	TEnumAsByte<E_Directions>* M_PtrGetMoodDirection();
	void M_SetMoodDirection(const TEnumAsByte<E_Directions>& value);

	//TAssetPtr<class FOnFoodChange__DelegateSignature>	OnFoodChange;		//Offset: 1704	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnFoodChange__DelegateSignature> M_GetOnFoodChange() const;
	TAssetPtr<class FOnFoodChange__DelegateSignature>* M_PtrGetOnFoodChange();
	void M_SetOnFoodChange(const TAssetPtr<class FOnFoodChange__DelegateSignature>& value);

	//TAssetPtr<class FOnWaterChange__DelegateSignature>	OnWaterChange;		//Offset: 1720	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnWaterChange__DelegateSignature> M_GetOnWaterChange() const;
	TAssetPtr<class FOnWaterChange__DelegateSignature>* M_PtrGetOnWaterChange();
	void M_SetOnWaterChange(const TAssetPtr<class FOnWaterChange__DelegateSignature>& value);

	//float	WoodcutterStacksTimeOut;		//Offset: 1736	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetWoodcutterStacksTimeOut() const;
	float* M_PtrGetWoodcutterStacksTimeOut();
	void M_SetWoodcutterStacksTimeOut(const float& value);

	//int32_t	FarmerStacks;		//Offset: 1740	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetFarmerStacks() const;
	int32_t* M_PtrGetFarmerStacks();
	void M_SetFarmerStacks(const int32_t& value);

	//float	FarmerStacksTimeOut;		//Offset: 1744	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFarmerStacksTimeOut() const;
	float* M_PtrGetFarmerStacksTimeOut();
	void M_SetFarmerStacksTimeOut(const float& value);

	//int32_t	BuilderStacks;		//Offset: 1748	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetBuilderStacks() const;
	int32_t* M_PtrGetBuilderStacks();
	void M_SetBuilderStacks(const int32_t& value);

	//float	BuilderStacksTimeOut;		//Offset: 1752	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBuilderStacksTimeOut() const;
	float* M_PtrGetBuilderStacksTimeOut();
	void M_SetBuilderStacksTimeOut(const float& value);

	//bool	IsWaterBlinking;		//Offset: 1756	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsWaterBlinking() const;
	bool* M_PtrGetIsWaterBlinking();
	void M_SetIsWaterBlinking(const bool& value);

	//bool	IsFoodBlinking;		//Offset: 1757	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsFoodBlinking() const;
	bool* M_PtrGetIsFoodBlinking();
	void M_SetIsFoodBlinking(const bool& value);

	//float	TimeSinceLastWaterBlink;		//Offset: 1760	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTimeSinceLastWaterBlink() const;
	float* M_PtrGetTimeSinceLastWaterBlink();
	void M_SetTimeSinceLastWaterBlink(const float& value);

	//float	WaterBlinkingActualTime;		//Offset: 1764	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetWaterBlinkingActualTime() const;
	float* M_PtrGetWaterBlinkingActualTime();
	void M_SetWaterBlinkingActualTime(const float& value);

	//float	BlinkingUpdateFrequency;		//Offset: 1768	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBlinkingUpdateFrequency() const;
	float* M_PtrGetBlinkingUpdateFrequency();
	void M_SetBlinkingUpdateFrequency(const float& value);

	//struct FTimerHandle	WaterBlinkTimer;		//Offset: 1776	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetWaterBlinkTimer() const;
	struct FTimerHandle* M_PtrGetWaterBlinkTimer();
	void M_SetWaterBlinkTimer(const struct FTimerHandle& value);

	//float	TimeSinceLastFoodBlink;		//Offset: 1784	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTimeSinceLastFoodBlink() const;
	float* M_PtrGetTimeSinceLastFoodBlink();
	void M_SetTimeSinceLastFoodBlink(const float& value);

	//float	FoodBlinkingActualTime;		//Offset: 1788	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFoodBlinkingActualTime() const;
	float* M_PtrGetFoodBlinkingActualTime();
	void M_SetFoodBlinkingActualTime(const float& value);

	//struct FTimerHandle	FoodBlinkTimer;		//Offset: 1792	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetFoodBlinkTimer() const;
	struct FTimerHandle* M_PtrGetFoodBlinkTimer();
	void M_SetFoodBlinkTimer(const struct FTimerHandle& value);

	//float	FoodBlinkingProcessTime;		//Offset: 1800	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetFoodBlinkingProcessTime() const;
	float* M_PtrGetFoodBlinkingProcessTime();
	void M_SetFoodBlinkingProcessTime(const float& value);

	//float	WaterBlinkingProcessTime;		//Offset: 1804	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetWaterBlinkingProcessTime() const;
	float* M_PtrGetWaterBlinkingProcessTime();
	void M_SetWaterBlinkingProcessTime(const float& value);

	//float	Alcohol;		//Offset: 1808	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetAlcohol() const;
	float* M_PtrGetAlcohol();
	void M_SetAlcohol(const float& value);

	//float	AlcoholDecreaseRate;		//Offset: 1812	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetAlcoholDecreaseRate() const;
	float* M_PtrGetAlcoholDecreaseRate();
	void M_SetAlcoholDecreaseRate(const float& value);

	//bool	Drunk;		//Offset: 1816	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetDrunk() const;
	bool* M_PtrGetDrunk();
	void M_SetDrunk(const bool& value);

	//TAssetPtr<class FOnAlcoholChange__DelegateSignature>	OnAlcoholChange;		//Offset: 1824	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
	TAssetPtr<class FOnAlcoholChange__DelegateSignature> M_GetOnAlcoholChange() const;
	TAssetPtr<class FOnAlcoholChange__DelegateSignature>* M_PtrGetOnAlcoholChange();
	void M_SetOnAlcoholChange(const TAssetPtr<class FOnAlcoholChange__DelegateSignature>& value);

	//bool	IsPoisonBlinking;		//Offset: 1840	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetIsPoisonBlinking() const;
	bool* M_PtrGetIsPoisonBlinking();
	void M_SetIsPoisonBlinking(const bool& value);

	//float	TimeSinceLastPoisonBlink;		//Offset: 1844	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTimeSinceLastPoisonBlink() const;
	float* M_PtrGetTimeSinceLastPoisonBlink();
	void M_SetTimeSinceLastPoisonBlink(const float& value);

	//float	PoisonBlinkingActualTime;		//Offset: 1848	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetPoisonBlinkingActualTime() const;
	float* M_PtrGetPoisonBlinkingActualTime();
	void M_SetPoisonBlinkingActualTime(const float& value);

	//struct FTimerHandle	PoisonBlinkTimer;		//Offset: 1856	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetPoisonBlinkTimer() const;
	struct FTimerHandle* M_PtrGetPoisonBlinkTimer();
	void M_SetPoisonBlinkTimer(const struct FTimerHandle& value);

	//float	PoisonBlinkingProcessTime;		//Offset: 1864	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetPoisonBlinkingProcessTime() const;
	float* M_PtrGetPoisonBlinkingProcessTime();
	void M_SetPoisonBlinkingProcessTime(const float& value);

	//float	SafeLowTemperature;		//Offset: 1868	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSafeLowTemperature() const;
	float* M_PtrGetSafeLowTemperature();
	void M_SetSafeLowTemperature(const float& value);

	//float	SafeHighTemperature;		//Offset: 1872	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSafeHighTemperature() const;
	float* M_PtrGetSafeHighTemperature();
	void M_SetSafeHighTemperature(const float& value);

	//float	TemperatureToleranceModifier;		//Offset: 1876	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTemperatureToleranceModifier() const;
	float* M_PtrGetTemperatureToleranceModifier();
	void M_SetTemperatureToleranceModifier(const float& value);

	//TEnumAsByte<E_NPCPersonality>	Personality;		//Offset: 1880	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	TEnumAsByte<E_NPCPersonality> M_GetPersonality() const;
	TEnumAsByte<E_NPCPersonality>* M_PtrGetPersonality();
	void M_SetPersonality(const TEnumAsByte<E_NPCPersonality>& value);

	//class ABP_ChromaManager_C*	RazerChromaSystem;		//Offset: 1888	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class ABP_ChromaManager_C* M_GetRazerChromaSystem() const;
	class ABP_ChromaManager_C** M_PtrGetRazerChromaSystem();
	void M_SetRazerChromaSystem(const class ABP_ChromaManager_C*& value);

	//bool	MoreDamage;		//Offset: 1896	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetMoreDamage() const;
	bool* M_PtrGetMoreDamage();
	void M_SetMoreDamage(const bool& value);

	//float	MoreDamageTime;		//Offset: 1900	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMoreDamageTime() const;
	float* M_PtrGetMoreDamageTime();
	void M_SetMoreDamageTime(const float& value);

	//bool	NightVision;		//Offset: 1904	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetNightVision() const;
	bool* M_PtrGetNightVision();
	void M_SetNightVision(const bool& value);

	//float	NightVisionTime;		//Offset: 1908	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetNightVisionTime() const;
	float* M_PtrGetNightVisionTime();
	void M_SetNightVisionTime(const float& value);

	//bool	MoreWeight;		//Offset: 1912	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetMoreWeight() const;
	bool* M_PtrGetMoreWeight();
	void M_SetMoreWeight(const bool& value);

	//float	MoreWeightTime;		//Offset: 1916	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMoreWeightTime() const;
	float* M_PtrGetMoreWeightTime();
	void M_SetMoreWeightTime(const float& value);

	//bool	AnimalRepel;		//Offset: 1920	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetAnimalRepel() const;
	bool* M_PtrGetAnimalRepel();
	void M_SetAnimalRepel(const bool& value);

	//float	AnimalRepelTime;		//Offset: 1924	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetAnimalRepelTime() const;
	float* M_PtrGetAnimalRepelTime();
	void M_SetAnimalRepelTime(const float& value);

	//bool	BetterTemperatureTolerance;		//Offset: 1928	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetBetterTemperatureTolerance() const;
	bool* M_PtrGetBetterTemperatureTolerance();
	void M_SetBetterTemperatureTolerance(const bool& value);

	//float	BetterTemperatureToleranceTime;		//Offset: 1932	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBetterTemperatureToleranceTime() const;
	float* M_PtrGetBetterTemperatureToleranceTime();
	void M_SetBetterTemperatureToleranceTime(const float& value);

	//bool	SlowerWaterDrop;		//Offset: 1936	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSlowerWaterDrop() const;
	bool* M_PtrGetSlowerWaterDrop();
	void M_SetSlowerWaterDrop(const bool& value);

	//float	SlowerWaterDropTime;		//Offset: 1940	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSlowerWaterDropTime() const;
	float* M_PtrGetSlowerWaterDropTime();
	void M_SetSlowerWaterDropTime(const float& value);

	//bool	SlowerHungerDrop;		//Offset: 1944	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSlowerHungerDrop() const;
	bool* M_PtrGetSlowerHungerDrop();
	void M_SetSlowerHungerDrop(const bool& value);

	//float	SlowerHungerDropTime;		//Offset: 1948	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSlowerHungerDropTime() const;
	float* M_PtrGetSlowerHungerDropTime();
	void M_SetSlowerHungerDropTime(const float& value);

	//bool	SlowerStaminaDrop;		//Offset: 1952	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetSlowerStaminaDrop() const;
	bool* M_PtrGetSlowerStaminaDrop();
	void M_SetSlowerStaminaDrop(const bool& value);

	//float	SlowerStaminaDropTime;		//Offset: 1956	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSlowerStaminaDropTime() const;
	float* M_PtrGetSlowerStaminaDropTime();
	void M_SetSlowerStaminaDropTime(const float& value);

	//bool	TimeHeal;		//Offset: 1960	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetTimeHeal() const;
	bool* M_PtrGetTimeHeal();
	void M_SetTimeHeal(const bool& value);

	//float	TimeHealTime;		//Offset: 1964	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTimeHealTime() const;
	float* M_PtrGetTimeHealTime();
	void M_SetTimeHealTime(const float& value);

	//float	TimeHealIntensityPerSecond;		//Offset: 1968	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTimeHealIntensityPerSecond() const;
	float* M_PtrGetTimeHealIntensityPerSecond();
	void M_SetTimeHealIntensityPerSecond(const float& value);

	//bool	MoreHP;		//Offset: 1972	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetMoreHP() const;
	bool* M_PtrGetMoreHP();
	void M_SetMoreHP(const bool& value);

	//float	TimePerTimeUpdate;		//Offset: 1976	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTimePerTimeUpdate() const;
	float* M_PtrGetTimePerTimeUpdate();
	void M_SetTimePerTimeUpdate(const float& value);

	//float	MoreHPTime;		//Offset: 1980	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMoreHPTime() const;
	float* M_PtrGetMoreHPTime();
	void M_SetMoreHPTime(const float& value);

	//float	MoreWeightAmount;		//Offset: 1984	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMoreWeightAmount() const;
	float* M_PtrGetMoreWeightAmount();
	void M_SetMoreWeightAmount(const float& value);

	//float	MoreDamageMultiplier;		//Offset: 1988	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMoreDamageMultiplier() const;
	float* M_PtrGetMoreDamageMultiplier();
	void M_SetMoreDamageMultiplier(const float& value);

	//float	SlowerWaterDropMultiplier;		//Offset: 1992	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSlowerWaterDropMultiplier() const;
	float* M_PtrGetSlowerWaterDropMultiplier();
	void M_SetSlowerWaterDropMultiplier(const float& value);

	//float	SlowerHungerDropMulitplier;		//Offset: 1996	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSlowerHungerDropMulitplier() const;
	float* M_PtrGetSlowerHungerDropMulitplier();
	void M_SetSlowerHungerDropMulitplier(const float& value);

	//float	SlowerStaminaDropMultiplier;		//Offset: 2000	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetSlowerStaminaDropMultiplier() const;
	float* M_PtrGetSlowerStaminaDropMultiplier();
	void M_SetSlowerStaminaDropMultiplier(const float& value);

	//float	MoreHPAmount;		//Offset: 2004	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetMoreHPAmount() const;
	float* M_PtrGetMoreHPAmount();
	void M_SetMoreHPAmount(const float& value);

	//float	BetterTemperatureToleranceAmount;		//Offset: 2008	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetBetterTemperatureToleranceAmount() const;
	float* M_PtrGetBetterTemperatureToleranceAmount();
	void M_SetBetterTemperatureToleranceAmount(const float& value);

	//bool	TimeUnpoison;		//Offset: 2012	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetTimeUnpoison() const;
	bool* M_PtrGetTimeUnpoison();
	void M_SetTimeUnpoison(const bool& value);

	//float	TimeUnpoisonTime;		//Offset: 2016	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTimeUnpoisonTime() const;
	float* M_PtrGetTimeUnpoisonTime();
	void M_SetTimeUnpoisonTime(const float& value);

	//float	TimeUnpoisonIntensityPerSecond;		//Offset: 2020	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTimeUnpoisonIntensityPerSecond() const;
	float* M_PtrGetTimeUnpoisonIntensityPerSecond();
	void M_SetTimeUnpoisonIntensityPerSecond(const float& value);

	//float	TimeSinceLastTimeHeal;		//Offset: 2024	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetTimeSinceLastTimeHeal() const;
	float* M_PtrGetTimeSinceLastTimeHeal();
	void M_SetTimeSinceLastTimeHeal(const float& value);

	//struct FTimerHandle	PoisonTimer;		//Offset: 2032	Size: 8	Flags: Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
	struct FTimerHandle M_GetPoisonTimer() const;
	struct FTimerHandle* M_PtrGetPoisonTimer();
	void M_SetPoisonTimer(const struct FTimerHandle& value);

	//float	AlcoholTolerance;		//Offset: 2040	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	float M_GetAlcoholTolerance() const;
	float* M_PtrGetAlcoholTolerance();
	void M_SetAlcoholTolerance(const float& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CharacterStatsComponent.BP_CharacterStatsComponent_C");
		return ptr;
	}

#pragma region Functions
	void OnSkillChange__DelegateSignature();

	void OnPoisonChange__DelegateSignature();

	void OnStaminaChange__DelegateSignature();

	void OnEncumbered__DelegateSignature();

	void OnHealthChange__DelegateSignature();

	void OnStaminaStartIncreasing__DelegateSignature();

	void OnPoisonStart__DelegateSignature();

	void OnTemperatureChange__DelegateSignature();

	void OnDirtinessChange__DelegateSignature();

	void OnDead__DelegateSignature();

	void OnFoodChange__DelegateSignature();

	void OnWaterChange__DelegateSignature();

	void OnAlcoholChange__DelegateSignature();

	void ExecuteUbergraph_BP_CharacterStatsComponent(int32_t EntryPoint);

	void NPCsUpdateStamina();

	void NPCsStopTimer_Stamina();

	void NPCsStartTimer_Stamina();

	void StartPoison();

	void PoisonBlink();

	void FoodBlink();

	void WaterBlink();

	void ReceiveTick(float DeltaSeconds);

	void UpdateBuilderStacks();

	void UpdateFarmerStacks();

	void UpdateWoodcutterStacks();

	void UpdateOnSeasonChanged();

	void ResetStats();

	void InitStatComponent(class ABP_BaseCharacter_C* BaseCharacter);

	void UpdateStamina();

	void CloseStaminaGate();

	void OpenStaminaGate();

	void StopTimer_Stamina();

	void StartTimer_Stamina();

	void UpdateStats(int32_t IteratorNumber);

	void StopStackCounting(TEnumAsByte<E_TalentTrance> Woodcutter);

	void UpdateMinerStacks();

	void StartStackCounting(TEnumAsByte<E_TalentTrance> WoodcutterTrance_, float TranceTime);

	void IncreaseAge();

	void CheckDeadChance();

	void IncreaseExtraction(float Value, bool AffectedByTalent, bool AffectedbyGameSettings);

	void IncreaseHunting(float Value, bool AffectedByTalent, bool AffectedbyGameSettings);

	void SetInitialStats(struct FText Name, TEnumAsByte<E_Sex> Sex, float Age, float MinDeadAge);

	void IncreaseDeadChance();

	void IncreaseFarming(float Value, bool AffectedByTalent, bool AffectedbyGameSettings);

	void IncreaseDiplomacy(float Value, bool AffectedByTalent, bool AffectedbyGameSettings);

	void IncreaseSurvival(float Value, bool AffectedByTalent, bool AffectedbyGameSettings);

	void IncreaseCrafting(float Value, bool AffectedByCraftingTalent, bool AffectedBySewingTalent, bool AffectedByCookingTalent, bool AffectedbyGameSettings);

	void IncrementAllSkills();

	void InitSkills(int32_t ExtractionLevel, float ExtractionProgress, int32_t ExtractionPointsToSpend, int32_t HuntingLevel, float HuntingProgress, int32_t HuntingPointsToSpend, int32_t FarmingLevel, float FarmingProgress, int32_t FarmingPointsToSpend, int32_t DiplomacyLevel, float DiplomacyProgress, int32_t DiplomacyPointsToSpend, int32_t SurvivalLevel, float SurvivalProgress, int32_t SurvivalPointsToSpend, int32_t CraftingLevel, float CraftingProgress, int32_t CraftingPointsToSpend);

	void AddSkills(TEnumAsByte<E_Skills> Skill, float Value, bool AffectedbyGameSettings);

	void GetStats(struct FText* Name, TEnumAsByte<E_Sex>* Sex, float* Age, float* MinDeadAge, TEnumAsByte<E_CharacterType>* CharacterType, float* Mood);

	void GetSkills(int32_t* ExtractionLevel, float* ExtractionProgress, int32_t* HuntingLevel, float* HuntingProgress, int32_t* FarmingLevel, float* FarmingProgress, int32_t* DiplomacyLevel, float* DiplomacyProgress, int32_t* SurvivalLevel, float* SurvivalProgress, int32_t* CraftingLevel, float* CraftingProgress);

	void GetMaxSkill(TEnumAsByte<E_Skills>* MaxSkill);

	void IncreaseMood(float Value);

	void DecreaseMood(float Value);

	void GetMaxSkills(TArray<TEnumAsByte<E_Skills>>* MaxSkills);

	void GetMinSkills(TArray<TEnumAsByte<E_Skills>>* MinSkills);

	void GetSkillLevel(TEnumAsByte<E_Skills> SkillType, int32_t* Level);

	void UpdateHunter_sTalent(int32_t TalentID);

	void UpdateExtraction_sTalent(int32_t TalentID);

	void UpdateFarming_sTalent(int32_t TalentID);

	void UpdateDiplomacy_sTalent(int32_t TalentID);

	void UpdateSurvival_sTalent(int32_t TalentID);

	void UpdateCrafting_sTalent(int32_t TalentID);

	void UpdateHIConditionMultiplier();

	void IncreaseExtractionStack();

	void ResetSkillTalentPoints(TEnumAsByte<E_Skills> SkillToReset);

	void UpdateDirtiness(float Value);

	void SetDirtiness(float Dirtiness);

	void GetDirtiness(float* Dirtiness);

	void IncreaseFood(float Food);

	void DecreaseFood(float Food);

	void DecreaseFoodWithTime();

	void IncreaseWater(float water);

	void DecreaseWater(float water);

	void DecreaseWaterWithTime();

	void IncreaseHealth(float Health);

	void DecreaseHealth(float Health, TEnumAsByte<E_DamageType> DamageType);

	void IncreaseStamina(float Stamina);

	void DecreaseStamina(float Stamina, bool Ditrtness, bool* Enough);

	void InitLifeStats(float Health, float Stamina, float Food, float water, float Somnolence, float Temperature, float Dirtiness, float Poison, bool Poisoned, float Alcohol);

	void DecreaseStamina_Jump(bool* Enough);

	void CheckStamina(float Stamina, bool* Enough_);

	void SetStats(float Food, float water, float Health, int32_t DeadChance, bool IsSick, bool IsInjured, float Mood);

	void UpdateSensedTemperature();

	void DecreaseHealthWithTime();

	void IncreasePoison(float Poison);

	void DecreasePoison(float Poison);

	void DecreasePoisoningWithTime();

	void RandomSkills(bool Birth);

	void InitTalents(TArray<int32_t>* ExtractionTalents, TArray<int32_t>* HuntingTalents, TArray<int32_t>* FarmingTalents, TArray<int32_t>* DiplomacyTalents, TArray<int32_t>* SurvivalTalents, TArray<int32_t>* CraftingTalents);

	void GetTalentsLevels(TArray<int32_t>* ExtractionTalents, TArray<int32_t>* HuntingTalents, TArray<int32_t>* FarmingTalents, TArray<int32_t>* DiplomacyTalents, TArray<int32_t>* SurvivalTalents, TArray<int32_t>* CraftingTalents);

	void OnAgeChange();

	void UpdateOldness();

	void IncreaseSomnolence(float Somnolence);

	void DecreaseSomnolence(float Somnolence);

	void IncreaseSomnolenceWithTime();

	void ApplySmoothTemperature();

	void SetMaxSkillByProfession(TEnumAsByte<E_Profession> Profession);

	void CheckStamina_Jump(bool* Enough);

	void IncreaseFarmerStack();

	void IncreaseBuilderStack();

	void IncreaseAlcohol(float Alcohol);

	void DecreaseAlcohol(float Alcohol);

	void DecreaseAlcoholWithTime();

	void StartTimeUnpoison(float EffectDurationInSeconds, float IntensityPerSecond);

	void DecreaseTimeUnpoisonDurationWithTime();

	void Consume(float Food, float water, float Health, float Stamina, float Poison, float Alcohol, float EffectDurationTime, float HealthPerSecond, float AdditionalMaxHP, float StaminaMultiplier, float FoodMultiplier, float WaterMultiplier, bool TurnOffHarmfulPoison, float PoisonPerSecond, bool NightVision, int32_t TemperatureTolerance, bool SkillsReset, float DamageMultiplier, bool AnimalRepel, float AdditionalWeight);

	void UpdateFX();

	void Debug();

	void SetPersonality();

	void DecreaseMoreWeightDurationWithTime();

	void StartMoreWeight(float EffectDurationInSeconds, float MoreWeightAmount);

	void DecreaseMoreDamageDurationWithTime();

	void StartMoreDamage(float EffectDurationInSeconds, float MoreDamageMultiplier);

	void StartAnimalRepel(float EffectDurationInSeconds);

	void DecreaseAnimalRepelDurationWithTime();

	void PotionStatReset();

	void StartBetterTemperatureTolerance(float EffectDurationInSeconds, float BetterTemperatureToleranceAmount);

	void DecreaseBetterTemperatureToleranceDurationWithTime();

	void StartNightVision(float EffectDurationInSeconds);

	void DecreaseNightVisionDurationWithTime();

	void PotionUnpoison();

	void PotionUndrunk();

	void StartSlowerWaterDrop(float EffectDurationInSeconds, float SlowerWaterDropMultiplier);

	void DecreaseSlowerWaterDropDurationWithTime();

	void StartSlowerHungerDrop(float EffectDurationInSeconds, float SlowerHungerDropMulitplier);

	void DecreaseSlowerHungerDropDurationTime();

	void StartSlowerStaminaDrop(float EffectDurationInSeconds, float SlowerStaminaDropMultiplier);

	void DecreaseSlowerStaminaDropDurationTime();

	void StartMoreHP(float EffectDurationInSeconds, float MoreHPAmount);

	void DecreaseMoreHPDurationWithTime();

	void StartTimeHeal(float EffectDurationInSeconds, float IntensityPerSecond);

	void DecreaseTimeHealDurationWithTime();

	void PotionEffectsTimeLeft(bool SeasonSkip, int32_t TimeSkipped);

	void OtherEffectsTimeLeft(bool SeasonSkip, int32_t TimeSkipped);

	void DirtnessIncreasePoison(float Food);

	void SetQuestNPCsSkills(struct FString NPC_ID);

	void SetQuestPersonality(struct FString NPC_ID);

	bool IsDrunk();

#pragma endregion
};
};