#include "../SDK.h"
#include "BP_CharacterStatsComponent_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame UBP_CharacterStatsComponent_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 944);
}
struct FPointerToUberGraphFrame* UBP_CharacterStatsComponent_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 944);
}
void UBP_CharacterStatsComponent_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 944, value);
}
// Member Getter and Setter of Name
// Declaration: struct FText Name
struct FText UBP_CharacterStatsComponent_C::M_GetName() const {
	return Read<struct FText>((byte*)this + 952);
}
struct FText* UBP_CharacterStatsComponent_C::M_PtrGetName() {
	return reinterpret_cast<struct FText*>((byte*)this + 952);
}
void UBP_CharacterStatsComponent_C::M_SetName(const struct FText& value) {
	Write((byte*)this + 952, value);
}
// Member Getter and Setter of sex
// Declaration: TEnumAsByte<E_Sex> sex
TEnumAsByte<E_Sex> UBP_CharacterStatsComponent_C::M_Getsex() const {
	return Read<TEnumAsByte<E_Sex>>((byte*)this + 976);
}
TEnumAsByte<E_Sex>* UBP_CharacterStatsComponent_C::M_PtrGetsex() {
	return reinterpret_cast<TEnumAsByte<E_Sex>*>((byte*)this + 976);
}
void UBP_CharacterStatsComponent_C::M_Setsex(const TEnumAsByte<E_Sex>& value) {
	Write((byte*)this + 976, value);
}
// Member Getter and Setter of Age
// Declaration: float Age
float UBP_CharacterStatsComponent_C::M_GetAge() const {
	return Read<float>((byte*)this + 980);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetAge() {
	return reinterpret_cast<float*>((byte*)this + 980);
}
void UBP_CharacterStatsComponent_C::M_SetAge(const float& value) {
	Write((byte*)this + 980, value);
}
// Member Getter and Setter of MinDeadAge
// Declaration: float MinDeadAge
float UBP_CharacterStatsComponent_C::M_GetMinDeadAge() const {
	return Read<float>((byte*)this + 984);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetMinDeadAge() {
	return reinterpret_cast<float*>((byte*)this + 984);
}
void UBP_CharacterStatsComponent_C::M_SetMinDeadAge(const float& value) {
	Write((byte*)this + 984, value);
}
// Member Getter and Setter of CharacterType
// Declaration: TEnumAsByte<E_CharacterType> CharacterType
TEnumAsByte<E_CharacterType> UBP_CharacterStatsComponent_C::M_GetCharacterType() const {
	return Read<TEnumAsByte<E_CharacterType>>((byte*)this + 988);
}
TEnumAsByte<E_CharacterType>* UBP_CharacterStatsComponent_C::M_PtrGetCharacterType() {
	return reinterpret_cast<TEnumAsByte<E_CharacterType>*>((byte*)this + 988);
}
void UBP_CharacterStatsComponent_C::M_SetCharacterType(const TEnumAsByte<E_CharacterType>& value) {
	Write((byte*)this + 988, value);
}
// Member Getter and Setter of DeadChance
// Declaration: int32_t DeadChance
int32_t UBP_CharacterStatsComponent_C::M_GetDeadChance() const {
	return Read<int32_t>((byte*)this + 992);
}
int32_t* UBP_CharacterStatsComponent_C::M_PtrGetDeadChance() {
	return reinterpret_cast<int32_t*>((byte*)this + 992);
}
void UBP_CharacterStatsComponent_C::M_SetDeadChance(const int32_t& value) {
	Write((byte*)this + 992, value);
}
// Member Getter and Setter of Dead
// Declaration: bool Dead
bool UBP_CharacterStatsComponent_C::M_GetDead() const {
	return Read<bool>((byte*)this + 996);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetDead() {
	return reinterpret_cast<bool*>((byte*)this + 996);
}
void UBP_CharacterStatsComponent_C::M_SetDead(const bool& value) {
	Write((byte*)this + 996, value);
}
// Member Getter and Setter of OnSkillChange
// Declaration: TAssetPtr<class FOnSkillChange__DelegateSignature> OnSkillChange
TAssetPtr<class FOnSkillChange__DelegateSignature> UBP_CharacterStatsComponent_C::M_GetOnSkillChange() const {
	return Read<TAssetPtr<class FOnSkillChange__DelegateSignature>>((byte*)this + 1000);
}
TAssetPtr<class FOnSkillChange__DelegateSignature>* UBP_CharacterStatsComponent_C::M_PtrGetOnSkillChange() {
	return reinterpret_cast<TAssetPtr<class FOnSkillChange__DelegateSignature>*>((byte*)this + 1000);
}
void UBP_CharacterStatsComponent_C::M_SetOnSkillChange(const TAssetPtr<class FOnSkillChange__DelegateSignature>& value) {
	Write((byte*)this + 1000, value);
}
// Member Getter and Setter of CurrentMood
// Declaration: float CurrentMood
float UBP_CharacterStatsComponent_C::M_GetCurrentMood() const {
	return Read<float>((byte*)this + 1016);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetCurrentMood() {
	return reinterpret_cast<float*>((byte*)this + 1016);
}
void UBP_CharacterStatsComponent_C::M_SetCurrentMood(const float& value) {
	Write((byte*)this + 1016, value);
}
// Member Getter and Setter of Talents_Extraction
// Declaration: TArray<struct FST_MasterTalent> Talents_Extraction
TArray<struct FST_MasterTalent> UBP_CharacterStatsComponent_C::M_GetTalents_Extraction() const {
	return Read<TArray<struct FST_MasterTalent>>((byte*)this + 1024);
}
TArray<struct FST_MasterTalent>* UBP_CharacterStatsComponent_C::M_PtrGetTalents_Extraction() {
	return reinterpret_cast<TArray<struct FST_MasterTalent>*>((byte*)this + 1024);
}
void UBP_CharacterStatsComponent_C::M_SetTalents_Extraction(const TArray<struct FST_MasterTalent>& value) {
	Write((byte*)this + 1024, value);
}
// Member Getter and Setter of Talents_Hunting
// Declaration: TArray<struct FST_MasterTalent> Talents_Hunting
TArray<struct FST_MasterTalent> UBP_CharacterStatsComponent_C::M_GetTalents_Hunting() const {
	return Read<TArray<struct FST_MasterTalent>>((byte*)this + 1040);
}
TArray<struct FST_MasterTalent>* UBP_CharacterStatsComponent_C::M_PtrGetTalents_Hunting() {
	return reinterpret_cast<TArray<struct FST_MasterTalent>*>((byte*)this + 1040);
}
void UBP_CharacterStatsComponent_C::M_SetTalents_Hunting(const TArray<struct FST_MasterTalent>& value) {
	Write((byte*)this + 1040, value);
}
// Member Getter and Setter of Talents_Farming
// Declaration: TArray<struct FST_MasterTalent> Talents_Farming
TArray<struct FST_MasterTalent> UBP_CharacterStatsComponent_C::M_GetTalents_Farming() const {
	return Read<TArray<struct FST_MasterTalent>>((byte*)this + 1056);
}
TArray<struct FST_MasterTalent>* UBP_CharacterStatsComponent_C::M_PtrGetTalents_Farming() {
	return reinterpret_cast<TArray<struct FST_MasterTalent>*>((byte*)this + 1056);
}
void UBP_CharacterStatsComponent_C::M_SetTalents_Farming(const TArray<struct FST_MasterTalent>& value) {
	Write((byte*)this + 1056, value);
}
// Member Getter and Setter of Talents_Diplomacy
// Declaration: TArray<struct FST_MasterTalent> Talents_Diplomacy
TArray<struct FST_MasterTalent> UBP_CharacterStatsComponent_C::M_GetTalents_Diplomacy() const {
	return Read<TArray<struct FST_MasterTalent>>((byte*)this + 1072);
}
TArray<struct FST_MasterTalent>* UBP_CharacterStatsComponent_C::M_PtrGetTalents_Diplomacy() {
	return reinterpret_cast<TArray<struct FST_MasterTalent>*>((byte*)this + 1072);
}
void UBP_CharacterStatsComponent_C::M_SetTalents_Diplomacy(const TArray<struct FST_MasterTalent>& value) {
	Write((byte*)this + 1072, value);
}
// Member Getter and Setter of Talents_Survival
// Declaration: TArray<struct FST_MasterTalent> Talents_Survival
TArray<struct FST_MasterTalent> UBP_CharacterStatsComponent_C::M_GetTalents_Survival() const {
	return Read<TArray<struct FST_MasterTalent>>((byte*)this + 1088);
}
TArray<struct FST_MasterTalent>* UBP_CharacterStatsComponent_C::M_PtrGetTalents_Survival() {
	return reinterpret_cast<TArray<struct FST_MasterTalent>*>((byte*)this + 1088);
}
void UBP_CharacterStatsComponent_C::M_SetTalents_Survival(const TArray<struct FST_MasterTalent>& value) {
	Write((byte*)this + 1088, value);
}
// Member Getter and Setter of Talents_Crafting
// Declaration: TArray<struct FST_MasterTalent> Talents_Crafting
TArray<struct FST_MasterTalent> UBP_CharacterStatsComponent_C::M_GetTalents_Crafting() const {
	return Read<TArray<struct FST_MasterTalent>>((byte*)this + 1104);
}
TArray<struct FST_MasterTalent>* UBP_CharacterStatsComponent_C::M_PtrGetTalents_Crafting() {
	return reinterpret_cast<TArray<struct FST_MasterTalent>*>((byte*)this + 1104);
}
void UBP_CharacterStatsComponent_C::M_SetTalents_Crafting(const TArray<struct FST_MasterTalent>& value) {
	Write((byte*)this + 1104, value);
}
// Member Getter and Setter of IsSick
// Declaration: bool IsSick
bool UBP_CharacterStatsComponent_C::M_GetIsSick() const {
	return Read<bool>((byte*)this + 1120);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetIsSick() {
	return reinterpret_cast<bool*>((byte*)this + 1120);
}
void UBP_CharacterStatsComponent_C::M_SetIsSick(const bool& value) {
	Write((byte*)this + 1120, value);
}
// Member Getter and Setter of FlirtingModificator
// Declaration: TArray<float> FlirtingModificator
TArray<float> UBP_CharacterStatsComponent_C::M_GetFlirtingModificator() const {
	return Read<TArray<float>>((byte*)this + 1128);
}
TArray<float>* UBP_CharacterStatsComponent_C::M_PtrGetFlirtingModificator() {
	return reinterpret_cast<TArray<float>*>((byte*)this + 1128);
}
void UBP_CharacterStatsComponent_C::M_SetFlirtingModificator(const TArray<float>& value) {
	Write((byte*)this + 1128, value);
}
// Member Getter and Setter of Challange_DynastyReputationModificator
// Declaration: TArray<float> Challange_DynastyReputationModificator
TArray<float> UBP_CharacterStatsComponent_C::M_GetChallange_DynastyReputationModificator() const {
	return Read<TArray<float>>((byte*)this + 1144);
}
TArray<float>* UBP_CharacterStatsComponent_C::M_PtrGetChallange_DynastyReputationModificator() {
	return reinterpret_cast<TArray<float>*>((byte*)this + 1144);
}
void UBP_CharacterStatsComponent_C::M_SetChallange_DynastyReputationModificator(const TArray<float>& value) {
	Write((byte*)this + 1144, value);
}
// Member Getter and Setter of MoodLossModificator
// Declaration: TArray<float> MoodLossModificator
TArray<float> UBP_CharacterStatsComponent_C::M_GetMoodLossModificator() const {
	return Read<TArray<float>>((byte*)this + 1160);
}
TArray<float>* UBP_CharacterStatsComponent_C::M_PtrGetMoodLossModificator() {
	return reinterpret_cast<TArray<float>*>((byte*)this + 1160);
}
void UBP_CharacterStatsComponent_C::M_SetMoodLossModificator(const TArray<float>& value) {
	Write((byte*)this + 1160, value);
}
// Member Getter and Setter of BaseLikingModificator
// Declaration: TArray<float> BaseLikingModificator
TArray<float> UBP_CharacterStatsComponent_C::M_GetBaseLikingModificator() const {
	return Read<TArray<float>>((byte*)this + 1176);
}
TArray<float>* UBP_CharacterStatsComponent_C::M_PtrGetBaseLikingModificator() {
	return reinterpret_cast<TArray<float>*>((byte*)this + 1176);
}
void UBP_CharacterStatsComponent_C::M_SetBaseLikingModificator(const TArray<float>& value) {
	Write((byte*)this + 1176, value);
}
// Member Getter and Setter of Quests_DynastyReputationModificator
// Declaration: TArray<float> Quests_DynastyReputationModificator
TArray<float> UBP_CharacterStatsComponent_C::M_GetQuests_DynastyReputationModificator() const {
	return Read<TArray<float>>((byte*)this + 1192);
}
TArray<float>* UBP_CharacterStatsComponent_C::M_PtrGetQuests_DynastyReputationModificator() {
	return reinterpret_cast<TArray<float>*>((byte*)this + 1192);
}
void UBP_CharacterStatsComponent_C::M_SetQuests_DynastyReputationModificator(const TArray<float>& value) {
	Write((byte*)this + 1192, value);
}
// Member Getter and Setter of NewLevelInfoText
// Declaration: struct FText NewLevelInfoText
struct FText UBP_CharacterStatsComponent_C::M_GetNewLevelInfoText() const {
	return Read<struct FText>((byte*)this + 1208);
}
struct FText* UBP_CharacterStatsComponent_C::M_PtrGetNewLevelInfoText() {
	return reinterpret_cast<struct FText*>((byte*)this + 1208);
}
void UBP_CharacterStatsComponent_C::M_SetNewLevelInfoText(const struct FText& value) {
	Write((byte*)this + 1208, value);
}
// Member Getter and Setter of SkillNames
// Declaration: TMap<TEnumAsByte<E_Skills>, struct FText> SkillNames
TMap<TEnumAsByte<E_Skills>, struct FText> UBP_CharacterStatsComponent_C::M_GetSkillNames() const {
	return Read<TMap<TEnumAsByte<E_Skills>, struct FText>>((byte*)this + 1232);
}
TMap<TEnumAsByte<E_Skills>, struct FText>* UBP_CharacterStatsComponent_C::M_PtrGetSkillNames() {
	return reinterpret_cast<TMap<TEnumAsByte<E_Skills>, struct FText>*>((byte*)this + 1232);
}
void UBP_CharacterStatsComponent_C::M_SetSkillNames(const TMap<TEnumAsByte<E_Skills>, struct FText>& value) {
	Write((byte*)this + 1232, value);
}
// Member Getter and Setter of HoldableItemConditionUseMultiplier
// Declaration: float HoldableItemConditionUseMultiplier
float UBP_CharacterStatsComponent_C::M_GetHoldableItemConditionUseMultiplier() const {
	return Read<float>((byte*)this + 1312);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetHoldableItemConditionUseMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 1312);
}
void UBP_CharacterStatsComponent_C::M_SetHoldableItemConditionUseMultiplier(const float& value) {
	Write((byte*)this + 1312, value);
}
// Member Getter and Setter of MinerStacks
// Declaration: int32_t MinerStacks
int32_t UBP_CharacterStatsComponent_C::M_GetMinerStacks() const {
	return Read<int32_t>((byte*)this + 1316);
}
int32_t* UBP_CharacterStatsComponent_C::M_PtrGetMinerStacks() {
	return reinterpret_cast<int32_t*>((byte*)this + 1316);
}
void UBP_CharacterStatsComponent_C::M_SetMinerStacks(const int32_t& value) {
	Write((byte*)this + 1316, value);
}
// Member Getter and Setter of WoodcutterStacks
// Declaration: int32_t WoodcutterStacks
int32_t UBP_CharacterStatsComponent_C::M_GetWoodcutterStacks() const {
	return Read<int32_t>((byte*)this + 1320);
}
int32_t* UBP_CharacterStatsComponent_C::M_PtrGetWoodcutterStacks() {
	return reinterpret_cast<int32_t*>((byte*)this + 1320);
}
void UBP_CharacterStatsComponent_C::M_SetWoodcutterStacks(const int32_t& value) {
	Write((byte*)this + 1320, value);
}
// Member Getter and Setter of MinerStacksTimeOut
// Declaration: float MinerStacksTimeOut
float UBP_CharacterStatsComponent_C::M_GetMinerStacksTimeOut() const {
	return Read<float>((byte*)this + 1324);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetMinerStacksTimeOut() {
	return reinterpret_cast<float*>((byte*)this + 1324);
}
void UBP_CharacterStatsComponent_C::M_SetMinerStacksTimeOut(const float& value) {
	Write((byte*)this + 1324, value);
}
// Member Getter and Setter of Dirtiness
// Declaration: float Dirtiness
float UBP_CharacterStatsComponent_C::M_GetDirtiness() const {
	return Read<float>((byte*)this + 1328);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetDirtiness() {
	return reinterpret_cast<float*>((byte*)this + 1328);
}
void UBP_CharacterStatsComponent_C::M_SetDirtiness(const float& value) {
	Write((byte*)this + 1328, value);
}
// Member Getter and Setter of Food
// Declaration: float Food
float UBP_CharacterStatsComponent_C::M_GetFood() const {
	return Read<float>((byte*)this + 1332);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetFood() {
	return reinterpret_cast<float*>((byte*)this + 1332);
}
void UBP_CharacterStatsComponent_C::M_SetFood(const float& value) {
	Write((byte*)this + 1332, value);
}
// Member Getter and Setter of FoodDecreaseRate
// Declaration: float FoodDecreaseRate
float UBP_CharacterStatsComponent_C::M_GetFoodDecreaseRate() const {
	return Read<float>((byte*)this + 1336);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetFoodDecreaseRate() {
	return reinterpret_cast<float*>((byte*)this + 1336);
}
void UBP_CharacterStatsComponent_C::M_SetFoodDecreaseRate(const float& value) {
	Write((byte*)this + 1336, value);
}
// Member Getter and Setter of MaxHealth
// Declaration: float MaxHealth
float UBP_CharacterStatsComponent_C::M_GetMaxHealth() const {
	return Read<float>((byte*)this + 1340);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetMaxHealth() {
	return reinterpret_cast<float*>((byte*)this + 1340);
}
void UBP_CharacterStatsComponent_C::M_SetMaxHealth(const float& value) {
	Write((byte*)this + 1340, value);
}
// Member Getter and Setter of health
// Declaration: float health
float UBP_CharacterStatsComponent_C::M_Gethealth() const {
	return Read<float>((byte*)this + 1344);
}
float* UBP_CharacterStatsComponent_C::M_PtrGethealth() {
	return reinterpret_cast<float*>((byte*)this + 1344);
}
void UBP_CharacterStatsComponent_C::M_Sethealth(const float& value) {
	Write((byte*)this + 1344, value);
}
// Member Getter and Setter of HealthDecreaseRate
// Declaration: float HealthDecreaseRate
float UBP_CharacterStatsComponent_C::M_GetHealthDecreaseRate() const {
	return Read<float>((byte*)this + 1348);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetHealthDecreaseRate() {
	return reinterpret_cast<float*>((byte*)this + 1348);
}
void UBP_CharacterStatsComponent_C::M_SetHealthDecreaseRate(const float& value) {
	Write((byte*)this + 1348, value);
}
// Member Getter and Setter of water
// Declaration: float water
float UBP_CharacterStatsComponent_C::M_Getwater() const {
	return Read<float>((byte*)this + 1352);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetwater() {
	return reinterpret_cast<float*>((byte*)this + 1352);
}
void UBP_CharacterStatsComponent_C::M_Setwater(const float& value) {
	Write((byte*)this + 1352, value);
}
// Member Getter and Setter of WaterDecreaseRate
// Declaration: float WaterDecreaseRate
float UBP_CharacterStatsComponent_C::M_GetWaterDecreaseRate() const {
	return Read<float>((byte*)this + 1356);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetWaterDecreaseRate() {
	return reinterpret_cast<float*>((byte*)this + 1356);
}
void UBP_CharacterStatsComponent_C::M_SetWaterDecreaseRate(const float& value) {
	Write((byte*)this + 1356, value);
}
// Member Getter and Setter of Stamina
// Declaration: float Stamina
float UBP_CharacterStatsComponent_C::M_GetStamina() const {
	return Read<float>((byte*)this + 1360);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetStamina() {
	return reinterpret_cast<float*>((byte*)this + 1360);
}
void UBP_CharacterStatsComponent_C::M_SetStamina(const float& value) {
	Write((byte*)this + 1360, value);
}
// Member Getter and Setter of OnStaminaChange
// Declaration: TAssetPtr<class FOnStaminaChange__DelegateSignature> OnStaminaChange
TAssetPtr<class FOnStaminaChange__DelegateSignature> UBP_CharacterStatsComponent_C::M_GetOnStaminaChange() const {
	return Read<TAssetPtr<class FOnStaminaChange__DelegateSignature>>((byte*)this + 1368);
}
TAssetPtr<class FOnStaminaChange__DelegateSignature>* UBP_CharacterStatsComponent_C::M_PtrGetOnStaminaChange() {
	return reinterpret_cast<TAssetPtr<class FOnStaminaChange__DelegateSignature>*>((byte*)this + 1368);
}
void UBP_CharacterStatsComponent_C::M_SetOnStaminaChange(const TAssetPtr<class FOnStaminaChange__DelegateSignature>& value) {
	Write((byte*)this + 1368, value);
}
// Member Getter and Setter of MaxStamina
// Declaration: float MaxStamina
float UBP_CharacterStatsComponent_C::M_GetMaxStamina() const {
	return Read<float>((byte*)this + 1384);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetMaxStamina() {
	return reinterpret_cast<float*>((byte*)this + 1384);
}
void UBP_CharacterStatsComponent_C::M_SetMaxStamina(const float& value) {
	Write((byte*)this + 1384, value);
}
// Member Getter and Setter of StaminaUpdateDelay
// Declaration: float StaminaUpdateDelay
float UBP_CharacterStatsComponent_C::M_GetStaminaUpdateDelay() const {
	return Read<float>((byte*)this + 1388);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetStaminaUpdateDelay() {
	return reinterpret_cast<float*>((byte*)this + 1388);
}
void UBP_CharacterStatsComponent_C::M_SetStaminaUpdateDelay(const float& value) {
	Write((byte*)this + 1388, value);
}
// Member Getter and Setter of StaminaIncreaseRate
// Declaration: float StaminaIncreaseRate
float UBP_CharacterStatsComponent_C::M_GetStaminaIncreaseRate() const {
	return Read<float>((byte*)this + 1392);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetStaminaIncreaseRate() {
	return reinterpret_cast<float*>((byte*)this + 1392);
}
void UBP_CharacterStatsComponent_C::M_SetStaminaIncreaseRate(const float& value) {
	Write((byte*)this + 1392, value);
}
// Member Getter and Setter of SprintStaminaDecreaseRate
// Declaration: float SprintStaminaDecreaseRate
float UBP_CharacterStatsComponent_C::M_GetSprintStaminaDecreaseRate() const {
	return Read<float>((byte*)this + 1396);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetSprintStaminaDecreaseRate() {
	return reinterpret_cast<float*>((byte*)this + 1396);
}
void UBP_CharacterStatsComponent_C::M_SetSprintStaminaDecreaseRate(const float& value) {
	Write((byte*)this + 1396, value);
}
// Member Getter and Setter of JumpStaminaDecreaseRate
// Declaration: float JumpStaminaDecreaseRate
float UBP_CharacterStatsComponent_C::M_GetJumpStaminaDecreaseRate() const {
	return Read<float>((byte*)this + 1400);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetJumpStaminaDecreaseRate() {
	return reinterpret_cast<float*>((byte*)this + 1400);
}
void UBP_CharacterStatsComponent_C::M_SetJumpStaminaDecreaseRate(const float& value) {
	Write((byte*)this + 1400, value);
}
// Member Getter and Setter of SprintStaminaMin
// Declaration: float SprintStaminaMin
float UBP_CharacterStatsComponent_C::M_GetSprintStaminaMin() const {
	return Read<float>((byte*)this + 1404);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetSprintStaminaMin() {
	return reinterpret_cast<float*>((byte*)this + 1404);
}
void UBP_CharacterStatsComponent_C::M_SetSprintStaminaMin(const float& value) {
	Write((byte*)this + 1404, value);
}
// Member Getter and Setter of OnEncumbered
// Declaration: TAssetPtr<class FOnEncumbered__DelegateSignature> OnEncumbered
TAssetPtr<class FOnEncumbered__DelegateSignature> UBP_CharacterStatsComponent_C::M_GetOnEncumbered() const {
	return Read<TAssetPtr<class FOnEncumbered__DelegateSignature>>((byte*)this + 1408);
}
TAssetPtr<class FOnEncumbered__DelegateSignature>* UBP_CharacterStatsComponent_C::M_PtrGetOnEncumbered() {
	return reinterpret_cast<TAssetPtr<class FOnEncumbered__DelegateSignature>*>((byte*)this + 1408);
}
void UBP_CharacterStatsComponent_C::M_SetOnEncumbered(const TAssetPtr<class FOnEncumbered__DelegateSignature>& value) {
	Write((byte*)this + 1408, value);
}
// Member Getter and Setter of StaminaRegeneration
// Declaration: bool StaminaRegeneration
bool UBP_CharacterStatsComponent_C::M_GetStaminaRegeneration() const {
	return Read<bool>((byte*)this + 1424);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetStaminaRegeneration() {
	return reinterpret_cast<bool*>((byte*)this + 1424);
}
void UBP_CharacterStatsComponent_C::M_SetStaminaRegeneration(const bool& value) {
	Write((byte*)this + 1424, value);
}
// Member Getter and Setter of StaminaRegenerationDelay
// Declaration: float StaminaRegenerationDelay
float UBP_CharacterStatsComponent_C::M_GetStaminaRegenerationDelay() const {
	return Read<float>((byte*)this + 1428);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetStaminaRegenerationDelay() {
	return reinterpret_cast<float*>((byte*)this + 1428);
}
void UBP_CharacterStatsComponent_C::M_SetStaminaRegenerationDelay(const float& value) {
	Write((byte*)this + 1428, value);
}
// Member Getter and Setter of StaminaRegeneratioCurrentTime
// Declaration: float StaminaRegeneratioCurrentTime
float UBP_CharacterStatsComponent_C::M_GetStaminaRegeneratioCurrentTime() const {
	return Read<float>((byte*)this + 1432);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetStaminaRegeneratioCurrentTime() {
	return reinterpret_cast<float*>((byte*)this + 1432);
}
void UBP_CharacterStatsComponent_C::M_SetStaminaRegeneratioCurrentTime(const float& value) {
	Write((byte*)this + 1432, value);
}
// Member Getter and Setter of UseStamina
// Declaration: bool UseStamina
bool UBP_CharacterStatsComponent_C::M_GetUseStamina() const {
	return Read<bool>((byte*)this + 1436);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetUseStamina() {
	return reinterpret_cast<bool*>((byte*)this + 1436);
}
void UBP_CharacterStatsComponent_C::M_SetUseStamina(const bool& value) {
	Write((byte*)this + 1436, value);
}
// Member Getter and Setter of OnHealthChange
// Declaration: TAssetPtr<class FOnHealthChange__DelegateSignature> OnHealthChange
TAssetPtr<class FOnHealthChange__DelegateSignature> UBP_CharacterStatsComponent_C::M_GetOnHealthChange() const {
	return Read<TAssetPtr<class FOnHealthChange__DelegateSignature>>((byte*)this + 1440);
}
TAssetPtr<class FOnHealthChange__DelegateSignature>* UBP_CharacterStatsComponent_C::M_PtrGetOnHealthChange() {
	return reinterpret_cast<TAssetPtr<class FOnHealthChange__DelegateSignature>*>((byte*)this + 1440);
}
void UBP_CharacterStatsComponent_C::M_SetOnHealthChange(const TAssetPtr<class FOnHealthChange__DelegateSignature>& value) {
	Write((byte*)this + 1440, value);
}
// Member Getter and Setter of OnStaminaStartIncreasing
// Declaration: TAssetPtr<class FOnStaminaStartIncreasing__DelegateSignature> OnStaminaStartIncreasing
TAssetPtr<class FOnStaminaStartIncreasing__DelegateSignature> UBP_CharacterStatsComponent_C::M_GetOnStaminaStartIncreasing() const {
	return Read<TAssetPtr<class FOnStaminaStartIncreasing__DelegateSignature>>((byte*)this + 1456);
}
TAssetPtr<class FOnStaminaStartIncreasing__DelegateSignature>* UBP_CharacterStatsComponent_C::M_PtrGetOnStaminaStartIncreasing() {
	return reinterpret_cast<TAssetPtr<class FOnStaminaStartIncreasing__DelegateSignature>*>((byte*)this + 1456);
}
void UBP_CharacterStatsComponent_C::M_SetOnStaminaStartIncreasing(const TAssetPtr<class FOnStaminaStartIncreasing__DelegateSignature>& value) {
	Write((byte*)this + 1456, value);
}
// Member Getter and Setter of GodMode
// Declaration: bool GodMode
bool UBP_CharacterStatsComponent_C::M_GetGodMode() const {
	return Read<bool>((byte*)this + 1472);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetGodMode() {
	return reinterpret_cast<bool*>((byte*)this + 1472);
}
void UBP_CharacterStatsComponent_C::M_SetGodMode(const bool& value) {
	Write((byte*)this + 1472, value);
}
// Member Getter and Setter of BaseTemperature
// Declaration: float BaseTemperature
float UBP_CharacterStatsComponent_C::M_GetBaseTemperature() const {
	return Read<float>((byte*)this + 1476);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetBaseTemperature() {
	return reinterpret_cast<float*>((byte*)this + 1476);
}
void UBP_CharacterStatsComponent_C::M_SetBaseTemperature(const float& value) {
	Write((byte*)this + 1476, value);
}
// Member Getter and Setter of LocalTemperature
// Declaration: float LocalTemperature
float UBP_CharacterStatsComponent_C::M_GetLocalTemperature() const {
	return Read<float>((byte*)this + 1480);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetLocalTemperature() {
	return reinterpret_cast<float*>((byte*)this + 1480);
}
void UBP_CharacterStatsComponent_C::M_SetLocalTemperature(const float& value) {
	Write((byte*)this + 1480, value);
}
// Member Getter and Setter of SensedTemperature
// Declaration: float SensedTemperature
float UBP_CharacterStatsComponent_C::M_GetSensedTemperature() const {
	return Read<float>((byte*)this + 1484);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetSensedTemperature() {
	return reinterpret_cast<float*>((byte*)this + 1484);
}
void UBP_CharacterStatsComponent_C::M_SetSensedTemperature(const float& value) {
	Write((byte*)this + 1484, value);
}
// Member Getter and Setter of CurrentSensedTemperature
// Declaration: float CurrentSensedTemperature
float UBP_CharacterStatsComponent_C::M_GetCurrentSensedTemperature() const {
	return Read<float>((byte*)this + 1488);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetCurrentSensedTemperature() {
	return reinterpret_cast<float*>((byte*)this + 1488);
}
void UBP_CharacterStatsComponent_C::M_SetCurrentSensedTemperature(const float& value) {
	Write((byte*)this + 1488, value);
}
// Member Getter and Setter of BaseCharacterReference
// Declaration: class ABP_BaseCharacter_C* BaseCharacterReference
class ABP_BaseCharacter_C* UBP_CharacterStatsComponent_C::M_GetBaseCharacterReference() const {
	return Read<class ABP_BaseCharacter_C*>((byte*)this + 1496);
}
class ABP_BaseCharacter_C** UBP_CharacterStatsComponent_C::M_PtrGetBaseCharacterReference() {
	return reinterpret_cast<class ABP_BaseCharacter_C**>((byte*)this + 1496);
}
void UBP_CharacterStatsComponent_C::M_SetBaseCharacterReference(const class ABP_BaseCharacter_C*& value) {
	Write((byte*)this + 1496, value);
}
// Member Getter and Setter of TemperatureChangeSpeed
// Declaration: float TemperatureChangeSpeed
float UBP_CharacterStatsComponent_C::M_GetTemperatureChangeSpeed() const {
	return Read<float>((byte*)this + 1504);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetTemperatureChangeSpeed() {
	return reinterpret_cast<float*>((byte*)this + 1504);
}
void UBP_CharacterStatsComponent_C::M_SetTemperatureChangeSpeed(const float& value) {
	Write((byte*)this + 1504, value);
}
// Member Getter and Setter of ColdProtection
// Declaration: float ColdProtection
float UBP_CharacterStatsComponent_C::M_GetColdProtection() const {
	return Read<float>((byte*)this + 1508);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetColdProtection() {
	return reinterpret_cast<float*>((byte*)this + 1508);
}
void UBP_CharacterStatsComponent_C::M_SetColdProtection(const float& value) {
	Write((byte*)this + 1508, value);
}
// Member Getter and Setter of HeatProtection
// Declaration: float HeatProtection
float UBP_CharacterStatsComponent_C::M_GetHeatProtection() const {
	return Read<float>((byte*)this + 1512);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetHeatProtection() {
	return reinterpret_cast<float*>((byte*)this + 1512);
}
void UBP_CharacterStatsComponent_C::M_SetHeatProtection(const float& value) {
	Write((byte*)this + 1512, value);
}
// Member Getter and Setter of HeatingSources
// Declaration: TArray<struct FST_HeatingSource> HeatingSources
TArray<struct FST_HeatingSource> UBP_CharacterStatsComponent_C::M_GetHeatingSources() const {
	return Read<TArray<struct FST_HeatingSource>>((byte*)this + 1520);
}
TArray<struct FST_HeatingSource>* UBP_CharacterStatsComponent_C::M_PtrGetHeatingSources() {
	return reinterpret_cast<TArray<struct FST_HeatingSource>*>((byte*)this + 1520);
}
void UBP_CharacterStatsComponent_C::M_SetHeatingSources(const TArray<struct FST_HeatingSource>& value) {
	Write((byte*)this + 1520, value);
}
// Member Getter and Setter of Poison
// Declaration: float Poison
float UBP_CharacterStatsComponent_C::M_GetPoison() const {
	return Read<float>((byte*)this + 1536);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetPoison() {
	return reinterpret_cast<float*>((byte*)this + 1536);
}
void UBP_CharacterStatsComponent_C::M_SetPoison(const float& value) {
	Write((byte*)this + 1536, value);
}
// Member Getter and Setter of PoisonDecreaseRate
// Declaration: float PoisonDecreaseRate
float UBP_CharacterStatsComponent_C::M_GetPoisonDecreaseRate() const {
	return Read<float>((byte*)this + 1540);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetPoisonDecreaseRate() {
	return reinterpret_cast<float*>((byte*)this + 1540);
}
void UBP_CharacterStatsComponent_C::M_SetPoisonDecreaseRate(const float& value) {
	Write((byte*)this + 1540, value);
}
// Member Getter and Setter of Overheating
// Declaration: bool Overheating
bool UBP_CharacterStatsComponent_C::M_GetOverheating() const {
	return Read<bool>((byte*)this + 1544);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetOverheating() {
	return reinterpret_cast<bool*>((byte*)this + 1544);
}
void UBP_CharacterStatsComponent_C::M_SetOverheating(const bool& value) {
	Write((byte*)this + 1544, value);
}
// Member Getter and Setter of Cold
// Declaration: bool Cold
bool UBP_CharacterStatsComponent_C::M_GetCold() const {
	return Read<bool>((byte*)this + 1545);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetCold() {
	return reinterpret_cast<bool*>((byte*)this + 1545);
}
void UBP_CharacterStatsComponent_C::M_SetCold(const bool& value) {
	Write((byte*)this + 1545, value);
}
// Member Getter and Setter of Hungry
// Declaration: bool Hungry
bool UBP_CharacterStatsComponent_C::M_GetHungry() const {
	return Read<bool>((byte*)this + 1546);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetHungry() {
	return reinterpret_cast<bool*>((byte*)this + 1546);
}
void UBP_CharacterStatsComponent_C::M_SetHungry(const bool& value) {
	Write((byte*)this + 1546, value);
}
// Member Getter and Setter of Thirsty
// Declaration: bool Thirsty
bool UBP_CharacterStatsComponent_C::M_GetThirsty() const {
	return Read<bool>((byte*)this + 1547);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetThirsty() {
	return reinterpret_cast<bool*>((byte*)this + 1547);
}
void UBP_CharacterStatsComponent_C::M_SetThirsty(const bool& value) {
	Write((byte*)this + 1547, value);
}
// Member Getter and Setter of Poisoned
// Declaration: bool Poisoned
bool UBP_CharacterStatsComponent_C::M_GetPoisoned() const {
	return Read<bool>((byte*)this + 1548);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetPoisoned() {
	return reinterpret_cast<bool*>((byte*)this + 1548);
}
void UBP_CharacterStatsComponent_C::M_SetPoisoned(const bool& value) {
	Write((byte*)this + 1548, value);
}
// Member Getter and Setter of OnPoisonStart
// Declaration: TAssetPtr<class FOnPoisonStart__DelegateSignature> OnPoisonStart
TAssetPtr<class FOnPoisonStart__DelegateSignature> UBP_CharacterStatsComponent_C::M_GetOnPoisonStart() const {
	return Read<TAssetPtr<class FOnPoisonStart__DelegateSignature>>((byte*)this + 1552);
}
TAssetPtr<class FOnPoisonStart__DelegateSignature>* UBP_CharacterStatsComponent_C::M_PtrGetOnPoisonStart() {
	return reinterpret_cast<TAssetPtr<class FOnPoisonStart__DelegateSignature>*>((byte*)this + 1552);
}
void UBP_CharacterStatsComponent_C::M_SetOnPoisonStart(const TAssetPtr<class FOnPoisonStart__DelegateSignature>& value) {
	Write((byte*)this + 1552, value);
}
// Member Getter and Setter of OnPoisonChange
// Declaration: TAssetPtr<class FOnPoisonChange__DelegateSignature> OnPoisonChange
TAssetPtr<class FOnPoisonChange__DelegateSignature> UBP_CharacterStatsComponent_C::M_GetOnPoisonChange() const {
	return Read<TAssetPtr<class FOnPoisonChange__DelegateSignature>>((byte*)this + 1568);
}
TAssetPtr<class FOnPoisonChange__DelegateSignature>* UBP_CharacterStatsComponent_C::M_PtrGetOnPoisonChange() {
	return reinterpret_cast<TAssetPtr<class FOnPoisonChange__DelegateSignature>*>((byte*)this + 1568);
}
void UBP_CharacterStatsComponent_C::M_SetOnPoisonChange(const TAssetPtr<class FOnPoisonChange__DelegateSignature>& value) {
	Write((byte*)this + 1568, value);
}
// Member Getter and Setter of OnTemperatureChange
// Declaration: TAssetPtr<class FOnTemperatureChange__DelegateSignature> OnTemperatureChange
TAssetPtr<class FOnTemperatureChange__DelegateSignature> UBP_CharacterStatsComponent_C::M_GetOnTemperatureChange() const {
	return Read<TAssetPtr<class FOnTemperatureChange__DelegateSignature>>((byte*)this + 1584);
}
TAssetPtr<class FOnTemperatureChange__DelegateSignature>* UBP_CharacterStatsComponent_C::M_PtrGetOnTemperatureChange() {
	return reinterpret_cast<TAssetPtr<class FOnTemperatureChange__DelegateSignature>*>((byte*)this + 1584);
}
void UBP_CharacterStatsComponent_C::M_SetOnTemperatureChange(const TAssetPtr<class FOnTemperatureChange__DelegateSignature>& value) {
	Write((byte*)this + 1584, value);
}
// Member Getter and Setter of IsInjured
// Declaration: bool IsInjured
bool UBP_CharacterStatsComponent_C::M_GetIsInjured() const {
	return Read<bool>((byte*)this + 1600);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetIsInjured() {
	return reinterpret_cast<bool*>((byte*)this + 1600);
}
void UBP_CharacterStatsComponent_C::M_SetIsInjured(const bool& value) {
	Write((byte*)this + 1600, value);
}
// Member Getter and Setter of Somnolence
// Declaration: float Somnolence
float UBP_CharacterStatsComponent_C::M_GetSomnolence() const {
	return Read<float>((byte*)this + 1604);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetSomnolence() {
	return reinterpret_cast<float*>((byte*)this + 1604);
}
void UBP_CharacterStatsComponent_C::M_SetSomnolence(const float& value) {
	Write((byte*)this + 1604, value);
}
// Member Getter and Setter of SomnolenceIncreaseRate
// Declaration: float SomnolenceIncreaseRate
float UBP_CharacterStatsComponent_C::M_GetSomnolenceIncreaseRate() const {
	return Read<float>((byte*)this + 1608);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetSomnolenceIncreaseRate() {
	return reinterpret_cast<float*>((byte*)this + 1608);
}
void UBP_CharacterStatsComponent_C::M_SetSomnolenceIncreaseRate(const float& value) {
	Write((byte*)this + 1608, value);
}
// Member Getter and Setter of HealthDecreaseRate_Poison
// Declaration: float HealthDecreaseRate_Poison
float UBP_CharacterStatsComponent_C::M_GetHealthDecreaseRate_Poison() const {
	return Read<float>((byte*)this + 1612);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetHealthDecreaseRate_Poison() {
	return reinterpret_cast<float*>((byte*)this + 1612);
}
void UBP_CharacterStatsComponent_C::M_SetHealthDecreaseRate_Poison(const float& value) {
	Write((byte*)this + 1612, value);
}
// Member Getter and Setter of TargetMood
// Declaration: float TargetMood
float UBP_CharacterStatsComponent_C::M_GetTargetMood() const {
	return Read<float>((byte*)this + 1616);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetTargetMood() {
	return reinterpret_cast<float*>((byte*)this + 1616);
}
void UBP_CharacterStatsComponent_C::M_SetTargetMood(const float& value) {
	Write((byte*)this + 1616, value);
}
// Member Getter and Setter of LifeStatsSound
// Declaration: class UAudioComponent* LifeStatsSound
class UAudioComponent* UBP_CharacterStatsComponent_C::M_GetLifeStatsSound() const {
	return Read<class UAudioComponent*>((byte*)this + 1624);
}
class UAudioComponent** UBP_CharacterStatsComponent_C::M_PtrGetLifeStatsSound() {
	return reinterpret_cast<class UAudioComponent**>((byte*)this + 1624);
}
void UBP_CharacterStatsComponent_C::M_SetLifeStatsSound(const class UAudioComponent*& value) {
	Write((byte*)this + 1624, value);
}
// Member Getter and Setter of OnDirtinessChange
// Declaration: TAssetPtr<class FOnDirtinessChange__DelegateSignature> OnDirtinessChange
TAssetPtr<class FOnDirtinessChange__DelegateSignature> UBP_CharacterStatsComponent_C::M_GetOnDirtinessChange() const {
	return Read<TAssetPtr<class FOnDirtinessChange__DelegateSignature>>((byte*)this + 1632);
}
TAssetPtr<class FOnDirtinessChange__DelegateSignature>* UBP_CharacterStatsComponent_C::M_PtrGetOnDirtinessChange() {
	return reinterpret_cast<TAssetPtr<class FOnDirtinessChange__DelegateSignature>*>((byte*)this + 1632);
}
void UBP_CharacterStatsComponent_C::M_SetOnDirtinessChange(const TAssetPtr<class FOnDirtinessChange__DelegateSignature>& value) {
	Write((byte*)this + 1632, value);
}
// Member Getter and Setter of OnDead
// Declaration: TAssetPtr<class FOnDead__DelegateSignature> OnDead
TAssetPtr<class FOnDead__DelegateSignature> UBP_CharacterStatsComponent_C::M_GetOnDead() const {
	return Read<TAssetPtr<class FOnDead__DelegateSignature>>((byte*)this + 1648);
}
TAssetPtr<class FOnDead__DelegateSignature>* UBP_CharacterStatsComponent_C::M_PtrGetOnDead() {
	return reinterpret_cast<TAssetPtr<class FOnDead__DelegateSignature>*>((byte*)this + 1648);
}
void UBP_CharacterStatsComponent_C::M_SetOnDead(const TAssetPtr<class FOnDead__DelegateSignature>& value) {
	Write((byte*)this + 1648, value);
}
// Member Getter and Setter of NoFood
// Declaration: bool NoFood
bool UBP_CharacterStatsComponent_C::M_GetNoFood() const {
	return Read<bool>((byte*)this + 1664);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetNoFood() {
	return reinterpret_cast<bool*>((byte*)this + 1664);
}
void UBP_CharacterStatsComponent_C::M_SetNoFood(const bool& value) {
	Write((byte*)this + 1664, value);
}
// Member Getter and Setter of NoWater
// Declaration: bool NoWater
bool UBP_CharacterStatsComponent_C::M_GetNoWater() const {
	return Read<bool>((byte*)this + 1665);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetNoWater() {
	return reinterpret_cast<bool*>((byte*)this + 1665);
}
void UBP_CharacterStatsComponent_C::M_SetNoWater(const bool& value) {
	Write((byte*)this + 1665, value);
}
// Member Getter and Setter of NoWood
// Declaration: bool NoWood
bool UBP_CharacterStatsComponent_C::M_GetNoWood() const {
	return Read<bool>((byte*)this + 1666);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetNoWood() {
	return reinterpret_cast<bool*>((byte*)this + 1666);
}
void UBP_CharacterStatsComponent_C::M_SetNoWood(const bool& value) {
	Write((byte*)this + 1666, value);
}
// Member Getter and Setter of IsPlayingStatSFX
// Declaration: bool IsPlayingStatSFX
bool UBP_CharacterStatsComponent_C::M_GetIsPlayingStatSFX() const {
	return Read<bool>((byte*)this + 1667);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetIsPlayingStatSFX() {
	return reinterpret_cast<bool*>((byte*)this + 1667);
}
void UBP_CharacterStatsComponent_C::M_SetIsPlayingStatSFX(const bool& value) {
	Write((byte*)this + 1667, value);
}
// Member Getter and Setter of StaminaSFX
// Declaration: bool StaminaSFX
bool UBP_CharacterStatsComponent_C::M_GetStaminaSFX() const {
	return Read<bool>((byte*)this + 1668);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetStaminaSFX() {
	return reinterpret_cast<bool*>((byte*)this + 1668);
}
void UBP_CharacterStatsComponent_C::M_SetStaminaSFX(const bool& value) {
	Write((byte*)this + 1668, value);
}
// Member Getter and Setter of EventMultipliers
// Declaration: struct FST_Event_CharacterMultipliers EventMultipliers
struct FST_Event_CharacterMultipliers UBP_CharacterStatsComponent_C::M_GetEventMultipliers() const {
	return Read<struct FST_Event_CharacterMultipliers>((byte*)this + 1672);
}
struct FST_Event_CharacterMultipliers* UBP_CharacterStatsComponent_C::M_PtrGetEventMultipliers() {
	return reinterpret_cast<struct FST_Event_CharacterMultipliers*>((byte*)this + 1672);
}
void UBP_CharacterStatsComponent_C::M_SetEventMultipliers(const struct FST_Event_CharacterMultipliers& value) {
	Write((byte*)this + 1672, value);
}
// Member Getter and Setter of MoodChangeSpeed
// Declaration: int32_t MoodChangeSpeed
int32_t UBP_CharacterStatsComponent_C::M_GetMoodChangeSpeed() const {
	return Read<int32_t>((byte*)this + 1700);
}
int32_t* UBP_CharacterStatsComponent_C::M_PtrGetMoodChangeSpeed() {
	return reinterpret_cast<int32_t*>((byte*)this + 1700);
}
void UBP_CharacterStatsComponent_C::M_SetMoodChangeSpeed(const int32_t& value) {
	Write((byte*)this + 1700, value);
}
// Member Getter and Setter of MoodDirection
// Declaration: TEnumAsByte<E_Directions> MoodDirection
TEnumAsByte<E_Directions> UBP_CharacterStatsComponent_C::M_GetMoodDirection() const {
	return Read<TEnumAsByte<E_Directions>>((byte*)this + 1704);
}
TEnumAsByte<E_Directions>* UBP_CharacterStatsComponent_C::M_PtrGetMoodDirection() {
	return reinterpret_cast<TEnumAsByte<E_Directions>*>((byte*)this + 1704);
}
void UBP_CharacterStatsComponent_C::M_SetMoodDirection(const TEnumAsByte<E_Directions>& value) {
	Write((byte*)this + 1704, value);
}
// Member Getter and Setter of OnFoodChange
// Declaration: TAssetPtr<class FOnFoodChange__DelegateSignature> OnFoodChange
TAssetPtr<class FOnFoodChange__DelegateSignature> UBP_CharacterStatsComponent_C::M_GetOnFoodChange() const {
	return Read<TAssetPtr<class FOnFoodChange__DelegateSignature>>((byte*)this + 1712);
}
TAssetPtr<class FOnFoodChange__DelegateSignature>* UBP_CharacterStatsComponent_C::M_PtrGetOnFoodChange() {
	return reinterpret_cast<TAssetPtr<class FOnFoodChange__DelegateSignature>*>((byte*)this + 1712);
}
void UBP_CharacterStatsComponent_C::M_SetOnFoodChange(const TAssetPtr<class FOnFoodChange__DelegateSignature>& value) {
	Write((byte*)this + 1712, value);
}
// Member Getter and Setter of OnWaterChange
// Declaration: TAssetPtr<class FOnWaterChange__DelegateSignature> OnWaterChange
TAssetPtr<class FOnWaterChange__DelegateSignature> UBP_CharacterStatsComponent_C::M_GetOnWaterChange() const {
	return Read<TAssetPtr<class FOnWaterChange__DelegateSignature>>((byte*)this + 1728);
}
TAssetPtr<class FOnWaterChange__DelegateSignature>* UBP_CharacterStatsComponent_C::M_PtrGetOnWaterChange() {
	return reinterpret_cast<TAssetPtr<class FOnWaterChange__DelegateSignature>*>((byte*)this + 1728);
}
void UBP_CharacterStatsComponent_C::M_SetOnWaterChange(const TAssetPtr<class FOnWaterChange__DelegateSignature>& value) {
	Write((byte*)this + 1728, value);
}
// Member Getter and Setter of WoodcutterStacksTimeOut
// Declaration: float WoodcutterStacksTimeOut
float UBP_CharacterStatsComponent_C::M_GetWoodcutterStacksTimeOut() const {
	return Read<float>((byte*)this + 1744);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetWoodcutterStacksTimeOut() {
	return reinterpret_cast<float*>((byte*)this + 1744);
}
void UBP_CharacterStatsComponent_C::M_SetWoodcutterStacksTimeOut(const float& value) {
	Write((byte*)this + 1744, value);
}
// Member Getter and Setter of FarmerStacks
// Declaration: int32_t FarmerStacks
int32_t UBP_CharacterStatsComponent_C::M_GetFarmerStacks() const {
	return Read<int32_t>((byte*)this + 1748);
}
int32_t* UBP_CharacterStatsComponent_C::M_PtrGetFarmerStacks() {
	return reinterpret_cast<int32_t*>((byte*)this + 1748);
}
void UBP_CharacterStatsComponent_C::M_SetFarmerStacks(const int32_t& value) {
	Write((byte*)this + 1748, value);
}
// Member Getter and Setter of FarmerStacksTimeOut
// Declaration: float FarmerStacksTimeOut
float UBP_CharacterStatsComponent_C::M_GetFarmerStacksTimeOut() const {
	return Read<float>((byte*)this + 1752);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetFarmerStacksTimeOut() {
	return reinterpret_cast<float*>((byte*)this + 1752);
}
void UBP_CharacterStatsComponent_C::M_SetFarmerStacksTimeOut(const float& value) {
	Write((byte*)this + 1752, value);
}
// Member Getter and Setter of BuilderStacks
// Declaration: int32_t BuilderStacks
int32_t UBP_CharacterStatsComponent_C::M_GetBuilderStacks() const {
	return Read<int32_t>((byte*)this + 1756);
}
int32_t* UBP_CharacterStatsComponent_C::M_PtrGetBuilderStacks() {
	return reinterpret_cast<int32_t*>((byte*)this + 1756);
}
void UBP_CharacterStatsComponent_C::M_SetBuilderStacks(const int32_t& value) {
	Write((byte*)this + 1756, value);
}
// Member Getter and Setter of BuilderStacksTimeOut
// Declaration: float BuilderStacksTimeOut
float UBP_CharacterStatsComponent_C::M_GetBuilderStacksTimeOut() const {
	return Read<float>((byte*)this + 1760);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetBuilderStacksTimeOut() {
	return reinterpret_cast<float*>((byte*)this + 1760);
}
void UBP_CharacterStatsComponent_C::M_SetBuilderStacksTimeOut(const float& value) {
	Write((byte*)this + 1760, value);
}
// Member Getter and Setter of IsWaterBlinking
// Declaration: bool IsWaterBlinking
bool UBP_CharacterStatsComponent_C::M_GetIsWaterBlinking() const {
	return Read<bool>((byte*)this + 1764);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetIsWaterBlinking() {
	return reinterpret_cast<bool*>((byte*)this + 1764);
}
void UBP_CharacterStatsComponent_C::M_SetIsWaterBlinking(const bool& value) {
	Write((byte*)this + 1764, value);
}
// Member Getter and Setter of IsFoodBlinking
// Declaration: bool IsFoodBlinking
bool UBP_CharacterStatsComponent_C::M_GetIsFoodBlinking() const {
	return Read<bool>((byte*)this + 1765);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetIsFoodBlinking() {
	return reinterpret_cast<bool*>((byte*)this + 1765);
}
void UBP_CharacterStatsComponent_C::M_SetIsFoodBlinking(const bool& value) {
	Write((byte*)this + 1765, value);
}
// Member Getter and Setter of TimeSinceLastWaterBlink
// Declaration: float TimeSinceLastWaterBlink
float UBP_CharacterStatsComponent_C::M_GetTimeSinceLastWaterBlink() const {
	return Read<float>((byte*)this + 1768);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetTimeSinceLastWaterBlink() {
	return reinterpret_cast<float*>((byte*)this + 1768);
}
void UBP_CharacterStatsComponent_C::M_SetTimeSinceLastWaterBlink(const float& value) {
	Write((byte*)this + 1768, value);
}
// Member Getter and Setter of WaterBlinkingActualTime
// Declaration: float WaterBlinkingActualTime
float UBP_CharacterStatsComponent_C::M_GetWaterBlinkingActualTime() const {
	return Read<float>((byte*)this + 1772);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetWaterBlinkingActualTime() {
	return reinterpret_cast<float*>((byte*)this + 1772);
}
void UBP_CharacterStatsComponent_C::M_SetWaterBlinkingActualTime(const float& value) {
	Write((byte*)this + 1772, value);
}
// Member Getter and Setter of BlinkingUpdateFrequency
// Declaration: float BlinkingUpdateFrequency
float UBP_CharacterStatsComponent_C::M_GetBlinkingUpdateFrequency() const {
	return Read<float>((byte*)this + 1776);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetBlinkingUpdateFrequency() {
	return reinterpret_cast<float*>((byte*)this + 1776);
}
void UBP_CharacterStatsComponent_C::M_SetBlinkingUpdateFrequency(const float& value) {
	Write((byte*)this + 1776, value);
}
// Member Getter and Setter of WaterBlinkTimer
// Declaration: struct FTimerHandle WaterBlinkTimer
struct FTimerHandle UBP_CharacterStatsComponent_C::M_GetWaterBlinkTimer() const {
	return Read<struct FTimerHandle>((byte*)this + 1784);
}
struct FTimerHandle* UBP_CharacterStatsComponent_C::M_PtrGetWaterBlinkTimer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 1784);
}
void UBP_CharacterStatsComponent_C::M_SetWaterBlinkTimer(const struct FTimerHandle& value) {
	Write((byte*)this + 1784, value);
}
// Member Getter and Setter of TimeSinceLastFoodBlink
// Declaration: float TimeSinceLastFoodBlink
float UBP_CharacterStatsComponent_C::M_GetTimeSinceLastFoodBlink() const {
	return Read<float>((byte*)this + 1792);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetTimeSinceLastFoodBlink() {
	return reinterpret_cast<float*>((byte*)this + 1792);
}
void UBP_CharacterStatsComponent_C::M_SetTimeSinceLastFoodBlink(const float& value) {
	Write((byte*)this + 1792, value);
}
// Member Getter and Setter of FoodBlinkingActualTime
// Declaration: float FoodBlinkingActualTime
float UBP_CharacterStatsComponent_C::M_GetFoodBlinkingActualTime() const {
	return Read<float>((byte*)this + 1796);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetFoodBlinkingActualTime() {
	return reinterpret_cast<float*>((byte*)this + 1796);
}
void UBP_CharacterStatsComponent_C::M_SetFoodBlinkingActualTime(const float& value) {
	Write((byte*)this + 1796, value);
}
// Member Getter and Setter of FoodBlinkTimer
// Declaration: struct FTimerHandle FoodBlinkTimer
struct FTimerHandle UBP_CharacterStatsComponent_C::M_GetFoodBlinkTimer() const {
	return Read<struct FTimerHandle>((byte*)this + 1800);
}
struct FTimerHandle* UBP_CharacterStatsComponent_C::M_PtrGetFoodBlinkTimer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 1800);
}
void UBP_CharacterStatsComponent_C::M_SetFoodBlinkTimer(const struct FTimerHandle& value) {
	Write((byte*)this + 1800, value);
}
// Member Getter and Setter of FoodBlinkingProcessTime
// Declaration: float FoodBlinkingProcessTime
float UBP_CharacterStatsComponent_C::M_GetFoodBlinkingProcessTime() const {
	return Read<float>((byte*)this + 1808);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetFoodBlinkingProcessTime() {
	return reinterpret_cast<float*>((byte*)this + 1808);
}
void UBP_CharacterStatsComponent_C::M_SetFoodBlinkingProcessTime(const float& value) {
	Write((byte*)this + 1808, value);
}
// Member Getter and Setter of WaterBlinkingProcessTime
// Declaration: float WaterBlinkingProcessTime
float UBP_CharacterStatsComponent_C::M_GetWaterBlinkingProcessTime() const {
	return Read<float>((byte*)this + 1812);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetWaterBlinkingProcessTime() {
	return reinterpret_cast<float*>((byte*)this + 1812);
}
void UBP_CharacterStatsComponent_C::M_SetWaterBlinkingProcessTime(const float& value) {
	Write((byte*)this + 1812, value);
}
// Member Getter and Setter of Alcohol
// Declaration: float Alcohol
float UBP_CharacterStatsComponent_C::M_GetAlcohol() const {
	return Read<float>((byte*)this + 1816);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetAlcohol() {
	return reinterpret_cast<float*>((byte*)this + 1816);
}
void UBP_CharacterStatsComponent_C::M_SetAlcohol(const float& value) {
	Write((byte*)this + 1816, value);
}
// Member Getter and Setter of AlcoholDecreaseRate
// Declaration: float AlcoholDecreaseRate
float UBP_CharacterStatsComponent_C::M_GetAlcoholDecreaseRate() const {
	return Read<float>((byte*)this + 1820);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetAlcoholDecreaseRate() {
	return reinterpret_cast<float*>((byte*)this + 1820);
}
void UBP_CharacterStatsComponent_C::M_SetAlcoholDecreaseRate(const float& value) {
	Write((byte*)this + 1820, value);
}
// Member Getter and Setter of Drunk
// Declaration: bool Drunk
bool UBP_CharacterStatsComponent_C::M_GetDrunk() const {
	return Read<bool>((byte*)this + 1824);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetDrunk() {
	return reinterpret_cast<bool*>((byte*)this + 1824);
}
void UBP_CharacterStatsComponent_C::M_SetDrunk(const bool& value) {
	Write((byte*)this + 1824, value);
}
// Member Getter and Setter of OnAlcoholChange
// Declaration: TAssetPtr<class FOnAlcoholChange__DelegateSignature> OnAlcoholChange
TAssetPtr<class FOnAlcoholChange__DelegateSignature> UBP_CharacterStatsComponent_C::M_GetOnAlcoholChange() const {
	return Read<TAssetPtr<class FOnAlcoholChange__DelegateSignature>>((byte*)this + 1832);
}
TAssetPtr<class FOnAlcoholChange__DelegateSignature>* UBP_CharacterStatsComponent_C::M_PtrGetOnAlcoholChange() {
	return reinterpret_cast<TAssetPtr<class FOnAlcoholChange__DelegateSignature>*>((byte*)this + 1832);
}
void UBP_CharacterStatsComponent_C::M_SetOnAlcoholChange(const TAssetPtr<class FOnAlcoholChange__DelegateSignature>& value) {
	Write((byte*)this + 1832, value);
}
// Member Getter and Setter of IsPoisonBlinking
// Declaration: bool IsPoisonBlinking
bool UBP_CharacterStatsComponent_C::M_GetIsPoisonBlinking() const {
	return Read<bool>((byte*)this + 1848);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetIsPoisonBlinking() {
	return reinterpret_cast<bool*>((byte*)this + 1848);
}
void UBP_CharacterStatsComponent_C::M_SetIsPoisonBlinking(const bool& value) {
	Write((byte*)this + 1848, value);
}
// Member Getter and Setter of TimeSinceLastPoisonBlink
// Declaration: float TimeSinceLastPoisonBlink
float UBP_CharacterStatsComponent_C::M_GetTimeSinceLastPoisonBlink() const {
	return Read<float>((byte*)this + 1852);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetTimeSinceLastPoisonBlink() {
	return reinterpret_cast<float*>((byte*)this + 1852);
}
void UBP_CharacterStatsComponent_C::M_SetTimeSinceLastPoisonBlink(const float& value) {
	Write((byte*)this + 1852, value);
}
// Member Getter and Setter of PoisonBlinkingActualTime
// Declaration: float PoisonBlinkingActualTime
float UBP_CharacterStatsComponent_C::M_GetPoisonBlinkingActualTime() const {
	return Read<float>((byte*)this + 1856);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetPoisonBlinkingActualTime() {
	return reinterpret_cast<float*>((byte*)this + 1856);
}
void UBP_CharacterStatsComponent_C::M_SetPoisonBlinkingActualTime(const float& value) {
	Write((byte*)this + 1856, value);
}
// Member Getter and Setter of PoisonBlinkTimer
// Declaration: struct FTimerHandle PoisonBlinkTimer
struct FTimerHandle UBP_CharacterStatsComponent_C::M_GetPoisonBlinkTimer() const {
	return Read<struct FTimerHandle>((byte*)this + 1864);
}
struct FTimerHandle* UBP_CharacterStatsComponent_C::M_PtrGetPoisonBlinkTimer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 1864);
}
void UBP_CharacterStatsComponent_C::M_SetPoisonBlinkTimer(const struct FTimerHandle& value) {
	Write((byte*)this + 1864, value);
}
// Member Getter and Setter of PoisonBlinkingProcessTime
// Declaration: float PoisonBlinkingProcessTime
float UBP_CharacterStatsComponent_C::M_GetPoisonBlinkingProcessTime() const {
	return Read<float>((byte*)this + 1872);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetPoisonBlinkingProcessTime() {
	return reinterpret_cast<float*>((byte*)this + 1872);
}
void UBP_CharacterStatsComponent_C::M_SetPoisonBlinkingProcessTime(const float& value) {
	Write((byte*)this + 1872, value);
}
// Member Getter and Setter of SafeLowTemperature
// Declaration: float SafeLowTemperature
float UBP_CharacterStatsComponent_C::M_GetSafeLowTemperature() const {
	return Read<float>((byte*)this + 1876);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetSafeLowTemperature() {
	return reinterpret_cast<float*>((byte*)this + 1876);
}
void UBP_CharacterStatsComponent_C::M_SetSafeLowTemperature(const float& value) {
	Write((byte*)this + 1876, value);
}
// Member Getter and Setter of SafeHighTemperature
// Declaration: float SafeHighTemperature
float UBP_CharacterStatsComponent_C::M_GetSafeHighTemperature() const {
	return Read<float>((byte*)this + 1880);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetSafeHighTemperature() {
	return reinterpret_cast<float*>((byte*)this + 1880);
}
void UBP_CharacterStatsComponent_C::M_SetSafeHighTemperature(const float& value) {
	Write((byte*)this + 1880, value);
}
// Member Getter and Setter of TemperatureToleranceModifier
// Declaration: float TemperatureToleranceModifier
float UBP_CharacterStatsComponent_C::M_GetTemperatureToleranceModifier() const {
	return Read<float>((byte*)this + 1884);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetTemperatureToleranceModifier() {
	return reinterpret_cast<float*>((byte*)this + 1884);
}
void UBP_CharacterStatsComponent_C::M_SetTemperatureToleranceModifier(const float& value) {
	Write((byte*)this + 1884, value);
}
// Member Getter and Setter of Personality
// Declaration: TEnumAsByte<E_NPCPersonality> Personality
TEnumAsByte<E_NPCPersonality> UBP_CharacterStatsComponent_C::M_GetPersonality() const {
	return Read<TEnumAsByte<E_NPCPersonality>>((byte*)this + 1888);
}
TEnumAsByte<E_NPCPersonality>* UBP_CharacterStatsComponent_C::M_PtrGetPersonality() {
	return reinterpret_cast<TEnumAsByte<E_NPCPersonality>*>((byte*)this + 1888);
}
void UBP_CharacterStatsComponent_C::M_SetPersonality(const TEnumAsByte<E_NPCPersonality>& value) {
	Write((byte*)this + 1888, value);
}
// Member Getter and Setter of RazerChromaSystem
// Declaration: class ABP_ChromaManager_C* RazerChromaSystem
class ABP_ChromaManager_C* UBP_CharacterStatsComponent_C::M_GetRazerChromaSystem() const {
	return Read<class ABP_ChromaManager_C*>((byte*)this + 1896);
}
class ABP_ChromaManager_C** UBP_CharacterStatsComponent_C::M_PtrGetRazerChromaSystem() {
	return reinterpret_cast<class ABP_ChromaManager_C**>((byte*)this + 1896);
}
void UBP_CharacterStatsComponent_C::M_SetRazerChromaSystem(const class ABP_ChromaManager_C*& value) {
	Write((byte*)this + 1896, value);
}
// Member Getter and Setter of MoreDamage
// Declaration: bool MoreDamage
bool UBP_CharacterStatsComponent_C::M_GetMoreDamage() const {
	return Read<bool>((byte*)this + 1904);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetMoreDamage() {
	return reinterpret_cast<bool*>((byte*)this + 1904);
}
void UBP_CharacterStatsComponent_C::M_SetMoreDamage(const bool& value) {
	Write((byte*)this + 1904, value);
}
// Member Getter and Setter of MoreDamageTime
// Declaration: float MoreDamageTime
float UBP_CharacterStatsComponent_C::M_GetMoreDamageTime() const {
	return Read<float>((byte*)this + 1908);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetMoreDamageTime() {
	return reinterpret_cast<float*>((byte*)this + 1908);
}
void UBP_CharacterStatsComponent_C::M_SetMoreDamageTime(const float& value) {
	Write((byte*)this + 1908, value);
}
// Member Getter and Setter of NightVision
// Declaration: bool NightVision
bool UBP_CharacterStatsComponent_C::M_GetNightVision() const {
	return Read<bool>((byte*)this + 1912);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetNightVision() {
	return reinterpret_cast<bool*>((byte*)this + 1912);
}
void UBP_CharacterStatsComponent_C::M_SetNightVision(const bool& value) {
	Write((byte*)this + 1912, value);
}
// Member Getter and Setter of NightVisionTime
// Declaration: float NightVisionTime
float UBP_CharacterStatsComponent_C::M_GetNightVisionTime() const {
	return Read<float>((byte*)this + 1916);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetNightVisionTime() {
	return reinterpret_cast<float*>((byte*)this + 1916);
}
void UBP_CharacterStatsComponent_C::M_SetNightVisionTime(const float& value) {
	Write((byte*)this + 1916, value);
}
// Member Getter and Setter of MoreWeight
// Declaration: bool MoreWeight
bool UBP_CharacterStatsComponent_C::M_GetMoreWeight() const {
	return Read<bool>((byte*)this + 1920);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetMoreWeight() {
	return reinterpret_cast<bool*>((byte*)this + 1920);
}
void UBP_CharacterStatsComponent_C::M_SetMoreWeight(const bool& value) {
	Write((byte*)this + 1920, value);
}
// Member Getter and Setter of MoreWeightTime
// Declaration: float MoreWeightTime
float UBP_CharacterStatsComponent_C::M_GetMoreWeightTime() const {
	return Read<float>((byte*)this + 1924);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetMoreWeightTime() {
	return reinterpret_cast<float*>((byte*)this + 1924);
}
void UBP_CharacterStatsComponent_C::M_SetMoreWeightTime(const float& value) {
	Write((byte*)this + 1924, value);
}
// Member Getter and Setter of AnimalRepel
// Declaration: bool AnimalRepel
bool UBP_CharacterStatsComponent_C::M_GetAnimalRepel() const {
	return Read<bool>((byte*)this + 1928);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetAnimalRepel() {
	return reinterpret_cast<bool*>((byte*)this + 1928);
}
void UBP_CharacterStatsComponent_C::M_SetAnimalRepel(const bool& value) {
	Write((byte*)this + 1928, value);
}
// Member Getter and Setter of AnimalRepelTime
// Declaration: float AnimalRepelTime
float UBP_CharacterStatsComponent_C::M_GetAnimalRepelTime() const {
	return Read<float>((byte*)this + 1932);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetAnimalRepelTime() {
	return reinterpret_cast<float*>((byte*)this + 1932);
}
void UBP_CharacterStatsComponent_C::M_SetAnimalRepelTime(const float& value) {
	Write((byte*)this + 1932, value);
}
// Member Getter and Setter of BetterTemperatureTolerance
// Declaration: bool BetterTemperatureTolerance
bool UBP_CharacterStatsComponent_C::M_GetBetterTemperatureTolerance() const {
	return Read<bool>((byte*)this + 1936);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetBetterTemperatureTolerance() {
	return reinterpret_cast<bool*>((byte*)this + 1936);
}
void UBP_CharacterStatsComponent_C::M_SetBetterTemperatureTolerance(const bool& value) {
	Write((byte*)this + 1936, value);
}
// Member Getter and Setter of BetterTemperatureToleranceTime
// Declaration: float BetterTemperatureToleranceTime
float UBP_CharacterStatsComponent_C::M_GetBetterTemperatureToleranceTime() const {
	return Read<float>((byte*)this + 1940);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetBetterTemperatureToleranceTime() {
	return reinterpret_cast<float*>((byte*)this + 1940);
}
void UBP_CharacterStatsComponent_C::M_SetBetterTemperatureToleranceTime(const float& value) {
	Write((byte*)this + 1940, value);
}
// Member Getter and Setter of SlowerWaterDrop
// Declaration: bool SlowerWaterDrop
bool UBP_CharacterStatsComponent_C::M_GetSlowerWaterDrop() const {
	return Read<bool>((byte*)this + 1944);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetSlowerWaterDrop() {
	return reinterpret_cast<bool*>((byte*)this + 1944);
}
void UBP_CharacterStatsComponent_C::M_SetSlowerWaterDrop(const bool& value) {
	Write((byte*)this + 1944, value);
}
// Member Getter and Setter of SlowerWaterDropTime
// Declaration: float SlowerWaterDropTime
float UBP_CharacterStatsComponent_C::M_GetSlowerWaterDropTime() const {
	return Read<float>((byte*)this + 1948);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetSlowerWaterDropTime() {
	return reinterpret_cast<float*>((byte*)this + 1948);
}
void UBP_CharacterStatsComponent_C::M_SetSlowerWaterDropTime(const float& value) {
	Write((byte*)this + 1948, value);
}
// Member Getter and Setter of SlowerHungerDrop
// Declaration: bool SlowerHungerDrop
bool UBP_CharacterStatsComponent_C::M_GetSlowerHungerDrop() const {
	return Read<bool>((byte*)this + 1952);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetSlowerHungerDrop() {
	return reinterpret_cast<bool*>((byte*)this + 1952);
}
void UBP_CharacterStatsComponent_C::M_SetSlowerHungerDrop(const bool& value) {
	Write((byte*)this + 1952, value);
}
// Member Getter and Setter of SlowerHungerDropTime
// Declaration: float SlowerHungerDropTime
float UBP_CharacterStatsComponent_C::M_GetSlowerHungerDropTime() const {
	return Read<float>((byte*)this + 1956);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetSlowerHungerDropTime() {
	return reinterpret_cast<float*>((byte*)this + 1956);
}
void UBP_CharacterStatsComponent_C::M_SetSlowerHungerDropTime(const float& value) {
	Write((byte*)this + 1956, value);
}
// Member Getter and Setter of SlowerStaminaDrop
// Declaration: bool SlowerStaminaDrop
bool UBP_CharacterStatsComponent_C::M_GetSlowerStaminaDrop() const {
	return Read<bool>((byte*)this + 1960);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetSlowerStaminaDrop() {
	return reinterpret_cast<bool*>((byte*)this + 1960);
}
void UBP_CharacterStatsComponent_C::M_SetSlowerStaminaDrop(const bool& value) {
	Write((byte*)this + 1960, value);
}
// Member Getter and Setter of SlowerStaminaDropTime
// Declaration: float SlowerStaminaDropTime
float UBP_CharacterStatsComponent_C::M_GetSlowerStaminaDropTime() const {
	return Read<float>((byte*)this + 1964);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetSlowerStaminaDropTime() {
	return reinterpret_cast<float*>((byte*)this + 1964);
}
void UBP_CharacterStatsComponent_C::M_SetSlowerStaminaDropTime(const float& value) {
	Write((byte*)this + 1964, value);
}
// Member Getter and Setter of TimeHeal
// Declaration: bool TimeHeal
bool UBP_CharacterStatsComponent_C::M_GetTimeHeal() const {
	return Read<bool>((byte*)this + 1968);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetTimeHeal() {
	return reinterpret_cast<bool*>((byte*)this + 1968);
}
void UBP_CharacterStatsComponent_C::M_SetTimeHeal(const bool& value) {
	Write((byte*)this + 1968, value);
}
// Member Getter and Setter of TimeHealTime
// Declaration: float TimeHealTime
float UBP_CharacterStatsComponent_C::M_GetTimeHealTime() const {
	return Read<float>((byte*)this + 1972);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetTimeHealTime() {
	return reinterpret_cast<float*>((byte*)this + 1972);
}
void UBP_CharacterStatsComponent_C::M_SetTimeHealTime(const float& value) {
	Write((byte*)this + 1972, value);
}
// Member Getter and Setter of TimeHealIntensityPerSecond
// Declaration: float TimeHealIntensityPerSecond
float UBP_CharacterStatsComponent_C::M_GetTimeHealIntensityPerSecond() const {
	return Read<float>((byte*)this + 1976);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetTimeHealIntensityPerSecond() {
	return reinterpret_cast<float*>((byte*)this + 1976);
}
void UBP_CharacterStatsComponent_C::M_SetTimeHealIntensityPerSecond(const float& value) {
	Write((byte*)this + 1976, value);
}
// Member Getter and Setter of MoreHP
// Declaration: bool MoreHP
bool UBP_CharacterStatsComponent_C::M_GetMoreHP() const {
	return Read<bool>((byte*)this + 1980);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetMoreHP() {
	return reinterpret_cast<bool*>((byte*)this + 1980);
}
void UBP_CharacterStatsComponent_C::M_SetMoreHP(const bool& value) {
	Write((byte*)this + 1980, value);
}
// Member Getter and Setter of TimePerTimeUpdate
// Declaration: float TimePerTimeUpdate
float UBP_CharacterStatsComponent_C::M_GetTimePerTimeUpdate() const {
	return Read<float>((byte*)this + 1984);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetTimePerTimeUpdate() {
	return reinterpret_cast<float*>((byte*)this + 1984);
}
void UBP_CharacterStatsComponent_C::M_SetTimePerTimeUpdate(const float& value) {
	Write((byte*)this + 1984, value);
}
// Member Getter and Setter of MoreHPTime
// Declaration: float MoreHPTime
float UBP_CharacterStatsComponent_C::M_GetMoreHPTime() const {
	return Read<float>((byte*)this + 1988);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetMoreHPTime() {
	return reinterpret_cast<float*>((byte*)this + 1988);
}
void UBP_CharacterStatsComponent_C::M_SetMoreHPTime(const float& value) {
	Write((byte*)this + 1988, value);
}
// Member Getter and Setter of MoreWeightAmount
// Declaration: float MoreWeightAmount
float UBP_CharacterStatsComponent_C::M_GetMoreWeightAmount() const {
	return Read<float>((byte*)this + 1992);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetMoreWeightAmount() {
	return reinterpret_cast<float*>((byte*)this + 1992);
}
void UBP_CharacterStatsComponent_C::M_SetMoreWeightAmount(const float& value) {
	Write((byte*)this + 1992, value);
}
// Member Getter and Setter of MoreDamageMultiplier
// Declaration: float MoreDamageMultiplier
float UBP_CharacterStatsComponent_C::M_GetMoreDamageMultiplier() const {
	return Read<float>((byte*)this + 1996);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetMoreDamageMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 1996);
}
void UBP_CharacterStatsComponent_C::M_SetMoreDamageMultiplier(const float& value) {
	Write((byte*)this + 1996, value);
}
// Member Getter and Setter of SlowerWaterDropMultiplier
// Declaration: float SlowerWaterDropMultiplier
float UBP_CharacterStatsComponent_C::M_GetSlowerWaterDropMultiplier() const {
	return Read<float>((byte*)this + 2000);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetSlowerWaterDropMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 2000);
}
void UBP_CharacterStatsComponent_C::M_SetSlowerWaterDropMultiplier(const float& value) {
	Write((byte*)this + 2000, value);
}
// Member Getter and Setter of SlowerHungerDropMulitplier
// Declaration: float SlowerHungerDropMulitplier
float UBP_CharacterStatsComponent_C::M_GetSlowerHungerDropMulitplier() const {
	return Read<float>((byte*)this + 2004);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetSlowerHungerDropMulitplier() {
	return reinterpret_cast<float*>((byte*)this + 2004);
}
void UBP_CharacterStatsComponent_C::M_SetSlowerHungerDropMulitplier(const float& value) {
	Write((byte*)this + 2004, value);
}
// Member Getter and Setter of SlowerStaminaDropMultiplier
// Declaration: float SlowerStaminaDropMultiplier
float UBP_CharacterStatsComponent_C::M_GetSlowerStaminaDropMultiplier() const {
	return Read<float>((byte*)this + 2008);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetSlowerStaminaDropMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 2008);
}
void UBP_CharacterStatsComponent_C::M_SetSlowerStaminaDropMultiplier(const float& value) {
	Write((byte*)this + 2008, value);
}
// Member Getter and Setter of MoreHPAmount
// Declaration: float MoreHPAmount
float UBP_CharacterStatsComponent_C::M_GetMoreHPAmount() const {
	return Read<float>((byte*)this + 2012);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetMoreHPAmount() {
	return reinterpret_cast<float*>((byte*)this + 2012);
}
void UBP_CharacterStatsComponent_C::M_SetMoreHPAmount(const float& value) {
	Write((byte*)this + 2012, value);
}
// Member Getter and Setter of BetterTemperatureToleranceAmount
// Declaration: float BetterTemperatureToleranceAmount
float UBP_CharacterStatsComponent_C::M_GetBetterTemperatureToleranceAmount() const {
	return Read<float>((byte*)this + 2016);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetBetterTemperatureToleranceAmount() {
	return reinterpret_cast<float*>((byte*)this + 2016);
}
void UBP_CharacterStatsComponent_C::M_SetBetterTemperatureToleranceAmount(const float& value) {
	Write((byte*)this + 2016, value);
}
// Member Getter and Setter of TimeUnpoison
// Declaration: bool TimeUnpoison
bool UBP_CharacterStatsComponent_C::M_GetTimeUnpoison() const {
	return Read<bool>((byte*)this + 2020);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetTimeUnpoison() {
	return reinterpret_cast<bool*>((byte*)this + 2020);
}
void UBP_CharacterStatsComponent_C::M_SetTimeUnpoison(const bool& value) {
	Write((byte*)this + 2020, value);
}
// Member Getter and Setter of TimeUnpoisonTime
// Declaration: float TimeUnpoisonTime
float UBP_CharacterStatsComponent_C::M_GetTimeUnpoisonTime() const {
	return Read<float>((byte*)this + 2024);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetTimeUnpoisonTime() {
	return reinterpret_cast<float*>((byte*)this + 2024);
}
void UBP_CharacterStatsComponent_C::M_SetTimeUnpoisonTime(const float& value) {
	Write((byte*)this + 2024, value);
}
// Member Getter and Setter of TimeUnpoisonIntensityPerSecond
// Declaration: float TimeUnpoisonIntensityPerSecond
float UBP_CharacterStatsComponent_C::M_GetTimeUnpoisonIntensityPerSecond() const {
	return Read<float>((byte*)this + 2028);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetTimeUnpoisonIntensityPerSecond() {
	return reinterpret_cast<float*>((byte*)this + 2028);
}
void UBP_CharacterStatsComponent_C::M_SetTimeUnpoisonIntensityPerSecond(const float& value) {
	Write((byte*)this + 2028, value);
}
// Member Getter and Setter of TimeSinceLastTimeHeal
// Declaration: float TimeSinceLastTimeHeal
float UBP_CharacterStatsComponent_C::M_GetTimeSinceLastTimeHeal() const {
	return Read<float>((byte*)this + 2032);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetTimeSinceLastTimeHeal() {
	return reinterpret_cast<float*>((byte*)this + 2032);
}
void UBP_CharacterStatsComponent_C::M_SetTimeSinceLastTimeHeal(const float& value) {
	Write((byte*)this + 2032, value);
}
// Member Getter and Setter of PoisonTimer
// Declaration: struct FTimerHandle PoisonTimer
struct FTimerHandle UBP_CharacterStatsComponent_C::M_GetPoisonTimer() const {
	return Read<struct FTimerHandle>((byte*)this + 2040);
}
struct FTimerHandle* UBP_CharacterStatsComponent_C::M_PtrGetPoisonTimer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 2040);
}
void UBP_CharacterStatsComponent_C::M_SetPoisonTimer(const struct FTimerHandle& value) {
	Write((byte*)this + 2040, value);
}
// Member Getter and Setter of AlcoholTolerance
// Declaration: float AlcoholTolerance
float UBP_CharacterStatsComponent_C::M_GetAlcoholTolerance() const {
	return Read<float>((byte*)this + 2048);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetAlcoholTolerance() {
	return reinterpret_cast<float*>((byte*)this + 2048);
}
void UBP_CharacterStatsComponent_C::M_SetAlcoholTolerance(const float& value) {
	Write((byte*)this + 2048, value);
}
// Member Getter and Setter of PlayerReactionTimer
// Declaration: struct FTimerHandle PlayerReactionTimer
struct FTimerHandle UBP_CharacterStatsComponent_C::M_GetPlayerReactionTimer() const {
	return Read<struct FTimerHandle>((byte*)this + 2056);
}
struct FTimerHandle* UBP_CharacterStatsComponent_C::M_PtrGetPlayerReactionTimer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 2056);
}
void UBP_CharacterStatsComponent_C::M_SetPlayerReactionTimer(const struct FTimerHandle& value) {
	Write((byte*)this + 2056, value);
}
// Member Getter and Setter of MoreDamageMaxTime
// Declaration: float MoreDamageMaxTime
float UBP_CharacterStatsComponent_C::M_GetMoreDamageMaxTime() const {
	return Read<float>((byte*)this + 2064);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetMoreDamageMaxTime() {
	return reinterpret_cast<float*>((byte*)this + 2064);
}
void UBP_CharacterStatsComponent_C::M_SetMoreDamageMaxTime(const float& value) {
	Write((byte*)this + 2064, value);
}
// Member Getter and Setter of NightVisionMaxTime
// Declaration: float NightVisionMaxTime
float UBP_CharacterStatsComponent_C::M_GetNightVisionMaxTime() const {
	return Read<float>((byte*)this + 2068);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetNightVisionMaxTime() {
	return reinterpret_cast<float*>((byte*)this + 2068);
}
void UBP_CharacterStatsComponent_C::M_SetNightVisionMaxTime(const float& value) {
	Write((byte*)this + 2068, value);
}
// Member Getter and Setter of MoreWeightMaxTime
// Declaration: float MoreWeightMaxTime
float UBP_CharacterStatsComponent_C::M_GetMoreWeightMaxTime() const {
	return Read<float>((byte*)this + 2072);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetMoreWeightMaxTime() {
	return reinterpret_cast<float*>((byte*)this + 2072);
}
void UBP_CharacterStatsComponent_C::M_SetMoreWeightMaxTime(const float& value) {
	Write((byte*)this + 2072, value);
}
// Member Getter and Setter of AnimalRepelMaxTime
// Declaration: float AnimalRepelMaxTime
float UBP_CharacterStatsComponent_C::M_GetAnimalRepelMaxTime() const {
	return Read<float>((byte*)this + 2076);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetAnimalRepelMaxTime() {
	return reinterpret_cast<float*>((byte*)this + 2076);
}
void UBP_CharacterStatsComponent_C::M_SetAnimalRepelMaxTime(const float& value) {
	Write((byte*)this + 2076, value);
}
// Member Getter and Setter of BetterTemperatureToleranceMaxTime
// Declaration: float BetterTemperatureToleranceMaxTime
float UBP_CharacterStatsComponent_C::M_GetBetterTemperatureToleranceMaxTime() const {
	return Read<float>((byte*)this + 2080);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetBetterTemperatureToleranceMaxTime() {
	return reinterpret_cast<float*>((byte*)this + 2080);
}
void UBP_CharacterStatsComponent_C::M_SetBetterTemperatureToleranceMaxTime(const float& value) {
	Write((byte*)this + 2080, value);
}
// Member Getter and Setter of SlowerWaterDropMaxTime
// Declaration: float SlowerWaterDropMaxTime
float UBP_CharacterStatsComponent_C::M_GetSlowerWaterDropMaxTime() const {
	return Read<float>((byte*)this + 2084);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetSlowerWaterDropMaxTime() {
	return reinterpret_cast<float*>((byte*)this + 2084);
}
void UBP_CharacterStatsComponent_C::M_SetSlowerWaterDropMaxTime(const float& value) {
	Write((byte*)this + 2084, value);
}
// Member Getter and Setter of SlowerHungerDropMaxTime
// Declaration: float SlowerHungerDropMaxTime
float UBP_CharacterStatsComponent_C::M_GetSlowerHungerDropMaxTime() const {
	return Read<float>((byte*)this + 2088);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetSlowerHungerDropMaxTime() {
	return reinterpret_cast<float*>((byte*)this + 2088);
}
void UBP_CharacterStatsComponent_C::M_SetSlowerHungerDropMaxTime(const float& value) {
	Write((byte*)this + 2088, value);
}
// Member Getter and Setter of SlowerStaminaDropMaxTime
// Declaration: float SlowerStaminaDropMaxTime
float UBP_CharacterStatsComponent_C::M_GetSlowerStaminaDropMaxTime() const {
	return Read<float>((byte*)this + 2092);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetSlowerStaminaDropMaxTime() {
	return reinterpret_cast<float*>((byte*)this + 2092);
}
void UBP_CharacterStatsComponent_C::M_SetSlowerStaminaDropMaxTime(const float& value) {
	Write((byte*)this + 2092, value);
}
// Member Getter and Setter of TimeHealMaxTime
// Declaration: float TimeHealMaxTime
float UBP_CharacterStatsComponent_C::M_GetTimeHealMaxTime() const {
	return Read<float>((byte*)this + 2096);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetTimeHealMaxTime() {
	return reinterpret_cast<float*>((byte*)this + 2096);
}
void UBP_CharacterStatsComponent_C::M_SetTimeHealMaxTime(const float& value) {
	Write((byte*)this + 2096, value);
}
// Member Getter and Setter of MoreHPMaxTime
// Declaration: float MoreHPMaxTime
float UBP_CharacterStatsComponent_C::M_GetMoreHPMaxTime() const {
	return Read<float>((byte*)this + 2100);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetMoreHPMaxTime() {
	return reinterpret_cast<float*>((byte*)this + 2100);
}
void UBP_CharacterStatsComponent_C::M_SetMoreHPMaxTime(const float& value) {
	Write((byte*)this + 2100, value);
}
// Member Getter and Setter of TimeUnpoisonMaxTime
// Declaration: float TimeUnpoisonMaxTime
float UBP_CharacterStatsComponent_C::M_GetTimeUnpoisonMaxTime() const {
	return Read<float>((byte*)this + 2104);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetTimeUnpoisonMaxTime() {
	return reinterpret_cast<float*>((byte*)this + 2104);
}
void UBP_CharacterStatsComponent_C::M_SetTimeUnpoisonMaxTime(const float& value) {
	Write((byte*)this + 2104, value);
}
// Member Getter and Setter of NPCStaminaTimer
// Declaration: struct FTimerHandle NPCStaminaTimer
struct FTimerHandle UBP_CharacterStatsComponent_C::M_GetNPCStaminaTimer() const {
	return Read<struct FTimerHandle>((byte*)this + 2112);
}
struct FTimerHandle* UBP_CharacterStatsComponent_C::M_PtrGetNPCStaminaTimer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 2112);
}
void UBP_CharacterStatsComponent_C::M_SetNPCStaminaTimer(const struct FTimerHandle& value) {
	Write((byte*)this + 2112, value);
}
// Member Getter and Setter of NPCWorkingSpeed
// Declaration: float NPCWorkingSpeed
float UBP_CharacterStatsComponent_C::M_GetNPCWorkingSpeed() const {
	return Read<float>((byte*)this + 2120);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetNPCWorkingSpeed() {
	return reinterpret_cast<float*>((byte*)this + 2120);
}
void UBP_CharacterStatsComponent_C::M_SetNPCWorkingSpeed(const float& value) {
	Write((byte*)this + 2120, value);
}
// Member Getter and Setter of OnSkillClientUpdated
// Declaration: TAssetPtr<class FOnSkillClientUpdated__DelegateSignature> OnSkillClientUpdated
TAssetPtr<class FOnSkillClientUpdated__DelegateSignature> UBP_CharacterStatsComponent_C::M_GetOnSkillClientUpdated() const {
	return Read<TAssetPtr<class FOnSkillClientUpdated__DelegateSignature>>((byte*)this + 2128);
}
TAssetPtr<class FOnSkillClientUpdated__DelegateSignature>* UBP_CharacterStatsComponent_C::M_PtrGetOnSkillClientUpdated() {
	return reinterpret_cast<TAssetPtr<class FOnSkillClientUpdated__DelegateSignature>*>((byte*)this + 2128);
}
void UBP_CharacterStatsComponent_C::M_SetOnSkillClientUpdated(const TAssetPtr<class FOnSkillClientUpdated__DelegateSignature>& value) {
	Write((byte*)this + 2128, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnSkillChange__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnSkillChange__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnSkillChange__DelegateSignature");

	struct UBP_CharacterStatsComponent_C_OnSkillChange__DelegateSignature_Params {
	};
	UBP_CharacterStatsComponent_C_OnSkillChange__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnPoisonChange__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnPoisonChange__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnPoisonChange__DelegateSignature");

	struct UBP_CharacterStatsComponent_C_OnPoisonChange__DelegateSignature_Params {
	};
	UBP_CharacterStatsComponent_C_OnPoisonChange__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnStaminaChange__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnStaminaChange__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnStaminaChange__DelegateSignature");

	struct UBP_CharacterStatsComponent_C_OnStaminaChange__DelegateSignature_Params {
	};
	UBP_CharacterStatsComponent_C_OnStaminaChange__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnEncumbered__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnEncumbered__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnEncumbered__DelegateSignature");

	struct UBP_CharacterStatsComponent_C_OnEncumbered__DelegateSignature_Params {
	};
	UBP_CharacterStatsComponent_C_OnEncumbered__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnHealthChange__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnHealthChange__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnHealthChange__DelegateSignature");

	struct UBP_CharacterStatsComponent_C_OnHealthChange__DelegateSignature_Params {
	};
	UBP_CharacterStatsComponent_C_OnHealthChange__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnStaminaStartIncreasing__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnStaminaStartIncreasing__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnStaminaStartIncreasing__DelegateSignature");

	struct UBP_CharacterStatsComponent_C_OnStaminaStartIncreasing__DelegateSignature_Params {
	};
	UBP_CharacterStatsComponent_C_OnStaminaStartIncreasing__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnPoisonStart__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnPoisonStart__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnPoisonStart__DelegateSignature");

	struct UBP_CharacterStatsComponent_C_OnPoisonStart__DelegateSignature_Params {
	};
	UBP_CharacterStatsComponent_C_OnPoisonStart__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnTemperatureChange__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnTemperatureChange__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnTemperatureChange__DelegateSignature");

	struct UBP_CharacterStatsComponent_C_OnTemperatureChange__DelegateSignature_Params {
	};
	UBP_CharacterStatsComponent_C_OnTemperatureChange__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnDirtinessChange__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnDirtinessChange__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnDirtinessChange__DelegateSignature");

	struct UBP_CharacterStatsComponent_C_OnDirtinessChange__DelegateSignature_Params {
	};
	UBP_CharacterStatsComponent_C_OnDirtinessChange__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnDead__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnDead__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnDead__DelegateSignature");

	struct UBP_CharacterStatsComponent_C_OnDead__DelegateSignature_Params {
	};
	UBP_CharacterStatsComponent_C_OnDead__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnFoodChange__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnFoodChange__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnFoodChange__DelegateSignature");

	struct UBP_CharacterStatsComponent_C_OnFoodChange__DelegateSignature_Params {
	};
	UBP_CharacterStatsComponent_C_OnFoodChange__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnWaterChange__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnWaterChange__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnWaterChange__DelegateSignature");

	struct UBP_CharacterStatsComponent_C_OnWaterChange__DelegateSignature_Params {
	};
	UBP_CharacterStatsComponent_C_OnWaterChange__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnAlcoholChange__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnAlcoholChange__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnAlcoholChange__DelegateSignature");

	struct UBP_CharacterStatsComponent_C_OnAlcoholChange__DelegateSignature_Params {
	};
	UBP_CharacterStatsComponent_C_OnAlcoholChange__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnSkillClientUpdated__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnSkillClientUpdated__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnSkillClientUpdated__DelegateSignature");

	struct UBP_CharacterStatsComponent_C_OnSkillClientUpdated__DelegateSignature_Params {
	};
	UBP_CharacterStatsComponent_C_OnSkillClientUpdated__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.ExecuteUbergraph_BP_CharacterStatsComponent
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::ExecuteUbergraph_BP_CharacterStatsComponent(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.ExecuteUbergraph_BP_CharacterStatsComponent");

	struct UBP_CharacterStatsComponent_C_ExecuteUbergraph_BP_CharacterStatsComponent_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_ExecuteUbergraph_BP_CharacterStatsComponent_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnDaySkipStart
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: TimeRealSeconds	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TimeUpdateSeconds	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnDaySkipStart(int32_t TimeRealSeconds, int32_t TimeUpdateSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnDaySkipStart");

	struct UBP_CharacterStatsComponent_C_OnDaySkipStart_Params {
		int32_t TimeRealSeconds;			//Offset: 0 | ElementSize: 4
		int32_t TimeUpdateSeconds;			//Offset: 4 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_OnDaySkipStart_Params params;
	params.TimeRealSeconds = TimeRealSeconds;
	params.TimeUpdateSeconds = TimeUpdateSeconds;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnAudioFinished_Multicast
// Flags: Net, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnAudioFinished_Multicast() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnAudioFinished_Multicast");

	struct UBP_CharacterStatsComponent_C_OnAudioFinished_Multicast_Params {
	};
	UBP_CharacterStatsComponent_C_OnAudioFinished_Multicast_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.Client_UpdateTrance
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: Time	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NumberOfStacks	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WoodcutterTrance_	Type: TEnumAsByte<E_TalentTrance>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::Client_UpdateTrance(float Time, int32_t NumberOfStacks, TEnumAsByte<E_TalentTrance> WoodcutterTrance_) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.Client_UpdateTrance");

	struct UBP_CharacterStatsComponent_C_Client_UpdateTrance_Params {
		float Time;			//Offset: 0 | ElementSize: 4
		int32_t NumberOfStacks;			//Offset: 4 | ElementSize: 4
		TEnumAsByte<E_TalentTrance> WoodcutterTrance_;			//Offset: 8 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_Client_UpdateTrance_Params params;
	params.Time = Time;
	params.NumberOfStacks = NumberOfStacks;
	params.WoodcutterTrance_ = WoodcutterTrance_;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.Client_RemoveTrance
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: WoodcutterTrance_	Type: TEnumAsByte<E_TalentTrance>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::Client_RemoveTrance(TEnumAsByte<E_TalentTrance> WoodcutterTrance_) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.Client_RemoveTrance");

	struct UBP_CharacterStatsComponent_C_Client_RemoveTrance_Params {
		TEnumAsByte<E_TalentTrance> WoodcutterTrance_;			//Offset: 0 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_Client_RemoveTrance_Params params;
	params.WoodcutterTrance_ = WoodcutterTrance_;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.Client_StartTrance
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: TranceMaxTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WoodcutterTrance_	Type: TEnumAsByte<E_TalentTrance>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::Client_StartTrance(float TranceMaxTime, TEnumAsByte<E_TalentTrance> WoodcutterTrance_) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.Client_StartTrance");

	struct UBP_CharacterStatsComponent_C_Client_StartTrance_Params {
		float TranceMaxTime;			//Offset: 0 | ElementSize: 4
		TEnumAsByte<E_TalentTrance> WoodcutterTrance_;			//Offset: 4 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_Client_StartTrance_Params params;
	params.TranceMaxTime = TranceMaxTime;
	params.WoodcutterTrance_ = WoodcutterTrance_;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_SurvivalSkill
// Flags: Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnRep_SurvivalSkill() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_SurvivalSkill");

	struct UBP_CharacterStatsComponent_C_OnRep_SurvivalSkill_Params {
	};
	UBP_CharacterStatsComponent_C_OnRep_SurvivalSkill_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_HuntingSkill
// Flags: Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnRep_HuntingSkill() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_HuntingSkill");

	struct UBP_CharacterStatsComponent_C_OnRep_HuntingSkill_Params {
	};
	UBP_CharacterStatsComponent_C_OnRep_HuntingSkill_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_FarmingSkill
// Flags: Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnRep_FarmingSkill() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_FarmingSkill");

	struct UBP_CharacterStatsComponent_C_OnRep_FarmingSkill_Params {
	};
	UBP_CharacterStatsComponent_C_OnRep_FarmingSkill_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_ExtractionSkill
// Flags: Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnRep_ExtractionSkill() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_ExtractionSkill");

	struct UBP_CharacterStatsComponent_C_OnRep_ExtractionSkill_Params {
	};
	UBP_CharacterStatsComponent_C_OnRep_ExtractionSkill_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_DiplomacySkill
// Flags: Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnRep_DiplomacySkill() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_DiplomacySkill");

	struct UBP_CharacterStatsComponent_C_OnRep_DiplomacySkill_Params {
	};
	UBP_CharacterStatsComponent_C_OnRep_DiplomacySkill_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_CraftingSkill
// Flags: Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnRep_CraftingSkill() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_CraftingSkill");

	struct UBP_CharacterStatsComponent_C_OnRep_CraftingSkill_Params {
	};
	UBP_CharacterStatsComponent_C_OnRep_CraftingSkill_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.ReceiveBeginPlay
// Flags: Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.ReceiveBeginPlay");

	struct UBP_CharacterStatsComponent_C_ReceiveBeginPlay_Params {
	};
	UBP_CharacterStatsComponent_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnAudioFinished
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnAudioFinished() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnAudioFinished");

	struct UBP_CharacterStatsComponent_C_OnAudioFinished_Params {
	};
	UBP_CharacterStatsComponent_C_OnAudioFinished_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartPlayerReactionTimer
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Time	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::StartPlayerReactionTimer(float Time) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartPlayerReactionTimer");

	struct UBP_CharacterStatsComponent_C_StartPlayerReactionTimer_Params {
		float Time;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_StartPlayerReactionTimer_Params params;
	params.Time = Time;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.CheckIfLowStamina
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::CheckIfLowStamina() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.CheckIfLowStamina");

	struct UBP_CharacterStatsComponent_C_CheckIfLowStamina_Params {
	};
	UBP_CharacterStatsComponent_C_CheckIfLowStamina_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateStats_Client
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::UpdateStats_Client() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateStats_Client");

	struct UBP_CharacterStatsComponent_C_UpdateStats_Client_Params {
	};
	UBP_CharacterStatsComponent_C_UpdateStats_Client_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StopStatsTimer_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::StopStatsTimer_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StopStatsTimer_BPI");

	struct UBP_CharacterStatsComponent_C_StopStatsTimer_BPI_Params {
	};
	UBP_CharacterStatsComponent_C_StopStatsTimer_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartStatsTimer_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::StartStatsTimer_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartStatsTimer_BPI");

	struct UBP_CharacterStatsComponent_C_StartStatsTimer_BPI_Params {
	};
	UBP_CharacterStatsComponent_C_StartStatsTimer_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartPoison
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::StartPoison() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartPoison");

	struct UBP_CharacterStatsComponent_C_StartPoison_Params {
	};
	UBP_CharacterStatsComponent_C_StartPoison_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.PoisonBlink
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::PoisonBlink() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.PoisonBlink");

	struct UBP_CharacterStatsComponent_C_PoisonBlink_Params {
	};
	UBP_CharacterStatsComponent_C_PoisonBlink_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.FoodBlink
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::FoodBlink() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.FoodBlink");

	struct UBP_CharacterStatsComponent_C_FoodBlink_Params {
	};
	UBP_CharacterStatsComponent_C_FoodBlink_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.WaterBlink
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::WaterBlink() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.WaterBlink");

	struct UBP_CharacterStatsComponent_C_WaterBlink_Params {
	};
	UBP_CharacterStatsComponent_C_WaterBlink_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.ReceiveTick
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: DeltaSeconds	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.ReceiveTick");

	struct UBP_CharacterStatsComponent_C_ReceiveTick_Params {
		float DeltaSeconds;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateBuilderStacks
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::UpdateBuilderStacks() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateBuilderStacks");

	struct UBP_CharacterStatsComponent_C_UpdateBuilderStacks_Params {
	};
	UBP_CharacterStatsComponent_C_UpdateBuilderStacks_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateFarmerStacks
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::UpdateFarmerStacks() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateFarmerStacks");

	struct UBP_CharacterStatsComponent_C_UpdateFarmerStacks_Params {
	};
	UBP_CharacterStatsComponent_C_UpdateFarmerStacks_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateWoodcutterStacks
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::UpdateWoodcutterStacks() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateWoodcutterStacks");

	struct UBP_CharacterStatsComponent_C_UpdateWoodcutterStacks_Params {
	};
	UBP_CharacterStatsComponent_C_UpdateWoodcutterStacks_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateOnSeasonChanged
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::UpdateOnSeasonChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateOnSeasonChanged");

	struct UBP_CharacterStatsComponent_C_UpdateOnSeasonChanged_Params {
	};
	UBP_CharacterStatsComponent_C_UpdateOnSeasonChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.ResetStats
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::ResetStats() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.ResetStats");

	struct UBP_CharacterStatsComponent_C_ResetStats_Params {
	};
	UBP_CharacterStatsComponent_C_ResetStats_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.InitStatComponent
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: BaseCharacter	Type: class ABP_BaseCharacter_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::InitStatComponent(class ABP_BaseCharacter_C* BaseCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.InitStatComponent");

	struct UBP_CharacterStatsComponent_C_InitStatComponent_Params {
		class ABP_BaseCharacter_C* BaseCharacter;			//Offset: 0 | ElementSize: 8
	};
	UBP_CharacterStatsComponent_C_InitStatComponent_Params params;
	params.BaseCharacter = BaseCharacter;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateStamina
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::UpdateStamina() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateStamina");

	struct UBP_CharacterStatsComponent_C_UpdateStamina_Params {
	};
	UBP_CharacterStatsComponent_C_UpdateStamina_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.CloseStaminaGate
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::CloseStaminaGate() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.CloseStaminaGate");

	struct UBP_CharacterStatsComponent_C_CloseStaminaGate_Params {
	};
	UBP_CharacterStatsComponent_C_CloseStaminaGate_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OpenStaminaGate
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OpenStaminaGate() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OpenStaminaGate");

	struct UBP_CharacterStatsComponent_C_OpenStaminaGate_Params {
	};
	UBP_CharacterStatsComponent_C_OpenStaminaGate_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StopTimer_Stamina
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::StopTimer_Stamina() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StopTimer_Stamina");

	struct UBP_CharacterStatsComponent_C_StopTimer_Stamina_Params {
	};
	UBP_CharacterStatsComponent_C_StopTimer_Stamina_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartTimer_Stamina
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::StartTimer_Stamina() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartTimer_Stamina");

	struct UBP_CharacterStatsComponent_C_StartTimer_Stamina_Params {
	};
	UBP_CharacterStatsComponent_C_StartTimer_Stamina_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateStats
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::UpdateStats() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateStats");

	struct UBP_CharacterStatsComponent_C_UpdateStats_Params {
	};
	UBP_CharacterStatsComponent_C_UpdateStats_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.Server_StopStackCounting
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Woodcutter	Type: TEnumAsByte<E_TalentTrance>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::Server_StopStackCounting(TEnumAsByte<E_TalentTrance> Woodcutter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.Server_StopStackCounting");

	struct UBP_CharacterStatsComponent_C_Server_StopStackCounting_Params {
		TEnumAsByte<E_TalentTrance> Woodcutter;			//Offset: 0 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_Server_StopStackCounting_Params params;
	params.Woodcutter = Woodcutter;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateMinerStacks
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::UpdateMinerStacks() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateMinerStacks");

	struct UBP_CharacterStatsComponent_C_UpdateMinerStacks_Params {
	};
	UBP_CharacterStatsComponent_C_UpdateMinerStacks_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.Server_StartStackCounting
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: WoodcutterTrance_	Type: TEnumAsByte<E_TalentTrance>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TranceTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::Server_StartStackCounting(TEnumAsByte<E_TalentTrance> WoodcutterTrance_, float TranceTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.Server_StartStackCounting");

	struct UBP_CharacterStatsComponent_C_Server_StartStackCounting_Params {
		TEnumAsByte<E_TalentTrance> WoodcutterTrance_;			//Offset: 0 | ElementSize: 1
		float TranceTime;			//Offset: 4 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_Server_StartStackCounting_Params params;
	params.WoodcutterTrance_ = WoodcutterTrance_;
	params.TranceTime = TranceTime;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.Multicast_UpdateTalentsCurrentLevel
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: SkillType	Type: ESkills	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TalentIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TalentCurrentLevel	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::Multicast_UpdateTalentsCurrentLevel(ESkills SkillType, int32_t TalentIndex, int32_t TalentCurrentLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.Multicast_UpdateTalentsCurrentLevel");

	struct UBP_CharacterStatsComponent_C_Multicast_UpdateTalentsCurrentLevel_Params {
		ESkills SkillType;			//Offset: 0 | ElementSize: 1
		int32_t TalentIndex;			//Offset: 4 | ElementSize: 4
		int32_t TalentCurrentLevel;			//Offset: 8 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_Multicast_UpdateTalentsCurrentLevel_Params params;
	params.SkillType = SkillType;
	params.TalentIndex = TalentIndex;
	params.TalentCurrentLevel = TalentCurrentLevel;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.PotionEffectStart
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Effect	Type: TEnumAsByte<E_Effects>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::PotionEffectStart(TEnumAsByte<E_Effects> Effect) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.PotionEffectStart");

	struct UBP_CharacterStatsComponent_C_PotionEffectStart_Params {
		TEnumAsByte<E_Effects> Effect;			//Offset: 0 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_PotionEffectStart_Params params;
	params.Effect = Effect;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.Client_PotionEffectChanged
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: Effect	Type: TEnumAsByte<E_Effects>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HasEffectEnded	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::Client_PotionEffectChanged(TEnumAsByte<E_Effects> Effect, bool HasEffectEnded) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.Client_PotionEffectChanged");

	struct UBP_CharacterStatsComponent_C_Client_PotionEffectChanged_Params {
		TEnumAsByte<E_Effects> Effect;			//Offset: 0 | ElementSize: 1
		bool HasEffectEnded;			//Offset: 1 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_Client_PotionEffectChanged_Params params;
	params.Effect = Effect;
	params.HasEffectEnded = HasEffectEnded;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseHealth_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: health	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::DecreaseHealth_Server(float health) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseHealth_Server");

	struct UBP_CharacterStatsComponent_C_DecreaseHealth_Server_Params {
		float health;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_DecreaseHealth_Server_Params params;
	params.health = health;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.Server_UpdateClientHPOnStart
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::Server_UpdateClientHPOnStart() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.Server_UpdateClientHPOnStart");

	struct UBP_CharacterStatsComponent_C_Server_UpdateClientHPOnStart_Params {
	};
	UBP_CharacterStatsComponent_C_Server_UpdateClientHPOnStart_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.Multicast_ReplicateAllTalents
// Flags: Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ExtractionTalents	Type: TArray<int32_t>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: HuntingTalents	Type: TArray<int32_t>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: FarmingTalents	Type: TArray<int32_t>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: DiplomacyTalents	Type: TArray<int32_t>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: SurvivalTalents	Type: TArray<int32_t>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: CraftingTalents	Type: TArray<int32_t>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::Multicast_ReplicateAllTalents(const TArray<int32_t>& ExtractionTalents, const TArray<int32_t>& HuntingTalents, const TArray<int32_t>& FarmingTalents, const TArray<int32_t>& DiplomacyTalents, const TArray<int32_t>& SurvivalTalents, const TArray<int32_t>& CraftingTalents) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.Multicast_ReplicateAllTalents");

	struct UBP_CharacterStatsComponent_C_Multicast_ReplicateAllTalents_Params {
		TArray<int32_t> ExtractionTalents;			//Offset: 0 | ElementSize: 16
		TArray<int32_t> HuntingTalents;			//Offset: 16 | ElementSize: 16
		TArray<int32_t> FarmingTalents;			//Offset: 32 | ElementSize: 16
		TArray<int32_t> DiplomacyTalents;			//Offset: 48 | ElementSize: 16
		TArray<int32_t> SurvivalTalents;			//Offset: 64 | ElementSize: 16
		TArray<int32_t> CraftingTalents;			//Offset: 80 | ElementSize: 16
	};
	UBP_CharacterStatsComponent_C_Multicast_ReplicateAllTalents_Params params;
	params.ExtractionTalents = ExtractionTalents;
	params.HuntingTalents = HuntingTalents;
	params.FarmingTalents = FarmingTalents;
	params.DiplomacyTalents = DiplomacyTalents;
	params.SurvivalTalents = SurvivalTalents;
	params.CraftingTalents = CraftingTalents;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.Server_ReplicateAllTalents
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::Server_ReplicateAllTalents() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.Server_ReplicateAllTalents");

	struct UBP_CharacterStatsComponent_C_Server_ReplicateAllTalents_Params {
	};
	UBP_CharacterStatsComponent_C_Server_ReplicateAllTalents_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseStaminaOnDamage_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: Stamina	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::DecreaseStaminaOnDamage_Client(float Stamina) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseStaminaOnDamage_Client");

	struct UBP_CharacterStatsComponent_C_DecreaseStaminaOnDamage_Client_Params {
		float Stamina;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_DecreaseStaminaOnDamage_Client_Params params;
	params.Stamina = Stamina;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateDirtiness_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Dirtiness	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsSet	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::UpdateDirtiness_Server(float Dirtiness, bool IsSet) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateDirtiness_Server");

	struct UBP_CharacterStatsComponent_C_UpdateDirtiness_Server_Params {
		float Dirtiness;			//Offset: 0 | ElementSize: 4
		bool IsSet;			//Offset: 4 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_UpdateDirtiness_Server_Params params;
	params.Dirtiness = Dirtiness;
	params.IsSet = IsSet;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateStamina_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Stamina	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::UpdateStamina_Server(float Stamina) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateStamina_Server");

	struct UBP_CharacterStatsComponent_C_UpdateStamina_Server_Params {
		float Stamina;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_UpdateStamina_Server_Params params;
	params.Stamina = Stamina;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnHealthChanged_Client
// Flags: Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent
// Params:
// Name: Hit	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Damage_Type	Type: TEnumAsByte<E_DamageType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: health	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnHealthChanged_Client(bool Hit, TEnumAsByte<E_DamageType> Damage_Type, float health) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnHealthChanged_Client");

	struct UBP_CharacterStatsComponent_C_OnHealthChanged_Client_Params {
		bool Hit;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_DamageType> Damage_Type;			//Offset: 1 | ElementSize: 1
		float health;			//Offset: 4 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_OnHealthChanged_Client_Params params;
	params.Hit = Hit;
	params.Damage_Type = Damage_Type;
	params.health = health;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnFoodChanged_Client
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnFoodChanged_Client() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnFoodChanged_Client");

	struct UBP_CharacterStatsComponent_C_OnFoodChanged_Client_Params {
	};
	UBP_CharacterStatsComponent_C_OnFoodChanged_Client_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnWaterChanged_Client
// Flags: Net, NetClient, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnWaterChanged_Client() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnWaterChanged_Client");

	struct UBP_CharacterStatsComponent_C_OnWaterChanged_Client_Params {
	};
	UBP_CharacterStatsComponent_C_OnWaterChanged_Client_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.Consume_Server
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Food	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: water	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: health	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Stamina	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Poison	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Alcohol	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: EffectDurationTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HealthPerSecond	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AdditionalMaxHP	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StaminaMultiplier	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FoodMultiplier	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WaterMultiplier	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TurnOffHarmfulPoison	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: PoisonPerSecond	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NightVision	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: TemperatureTolerance	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SkillsReset	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: DamageMultiplier	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AnimalRepel	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: AdditionalWeight	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::Consume_Server(float Food, float water, float health, float Stamina, float Poison, float Alcohol, float EffectDurationTime, float HealthPerSecond, float AdditionalMaxHP, float StaminaMultiplier, float FoodMultiplier, float WaterMultiplier, bool TurnOffHarmfulPoison, float PoisonPerSecond, bool NightVision, int32_t TemperatureTolerance, bool SkillsReset, float DamageMultiplier, bool AnimalRepel, float AdditionalWeight) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.Consume_Server");

	struct UBP_CharacterStatsComponent_C_Consume_Server_Params {
		float Food;			//Offset: 0 | ElementSize: 4
		float water;			//Offset: 4 | ElementSize: 4
		float health;			//Offset: 8 | ElementSize: 4
		float Stamina;			//Offset: 12 | ElementSize: 4
		float Poison;			//Offset: 16 | ElementSize: 4
		float Alcohol;			//Offset: 20 | ElementSize: 4
		float EffectDurationTime;			//Offset: 24 | ElementSize: 4
		float HealthPerSecond;			//Offset: 28 | ElementSize: 4
		float AdditionalMaxHP;			//Offset: 32 | ElementSize: 4
		float StaminaMultiplier;			//Offset: 36 | ElementSize: 4
		float FoodMultiplier;			//Offset: 40 | ElementSize: 4
		float WaterMultiplier;			//Offset: 44 | ElementSize: 4
		bool TurnOffHarmfulPoison;			//Offset: 48 | ElementSize: 1
		float PoisonPerSecond;			//Offset: 52 | ElementSize: 4
		bool NightVision;			//Offset: 56 | ElementSize: 1
		int32_t TemperatureTolerance;			//Offset: 60 | ElementSize: 4
		bool SkillsReset;			//Offset: 64 | ElementSize: 1
		float DamageMultiplier;			//Offset: 68 | ElementSize: 4
		bool AnimalRepel;			//Offset: 72 | ElementSize: 1
		float AdditionalWeight;			//Offset: 76 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_Consume_Server_Params params;
	params.Food = Food;
	params.water = water;
	params.health = health;
	params.Stamina = Stamina;
	params.Poison = Poison;
	params.Alcohol = Alcohol;
	params.EffectDurationTime = EffectDurationTime;
	params.HealthPerSecond = HealthPerSecond;
	params.AdditionalMaxHP = AdditionalMaxHP;
	params.StaminaMultiplier = StaminaMultiplier;
	params.FoodMultiplier = FoodMultiplier;
	params.WaterMultiplier = WaterMultiplier;
	params.TurnOffHarmfulPoison = TurnOffHarmfulPoison;
	params.PoisonPerSecond = PoisonPerSecond;
	params.NightVision = NightVision;
	params.TemperatureTolerance = TemperatureTolerance;
	params.SkillsReset = SkillsReset;
	params.DamageMultiplier = DamageMultiplier;
	params.AnimalRepel = AnimalRepel;
	params.AdditionalWeight = AdditionalWeight;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseCraftingServer
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AffectedByCraftingTalent	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: AffectedBySewingTalent	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: AffectedByCookingTalent	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: AffectedByGameSettings	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::IncreaseCraftingServer(float Value, bool AffectedByCraftingTalent, bool AffectedBySewingTalent, bool AffectedByCookingTalent, bool AffectedByGameSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseCraftingServer");

	struct UBP_CharacterStatsComponent_C_IncreaseCraftingServer_Params {
		float Value;			//Offset: 0 | ElementSize: 4
		bool AffectedByCraftingTalent;			//Offset: 4 | ElementSize: 1
		bool AffectedBySewingTalent;			//Offset: 5 | ElementSize: 1
		bool AffectedByCookingTalent;			//Offset: 6 | ElementSize: 1
		bool AffectedByGameSettings;			//Offset: 7 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_IncreaseCraftingServer_Params params;
	params.Value = Value;
	params.AffectedByCraftingTalent = AffectedByCraftingTalent;
	params.AffectedBySewingTalent = AffectedBySewingTalent;
	params.AffectedByCookingTalent = AffectedByCookingTalent;
	params.AffectedByGameSettings = AffectedByGameSettings;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.AddSkillsServer
// Flags: Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Skill	Type: TEnumAsByte<E_Skills>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AffectedByGameSettings	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::AddSkillsServer(TEnumAsByte<E_Skills> Skill, float Value, bool AffectedByGameSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.AddSkillsServer");

	struct UBP_CharacterStatsComponent_C_AddSkillsServer_Params {
		TEnumAsByte<E_Skills> Skill;			//Offset: 0 | ElementSize: 1
		float Value;			//Offset: 4 | ElementSize: 4
		bool AffectedByGameSettings;			//Offset: 8 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_AddSkillsServer_Params params;
	params.Skill = Skill;
	params.Value = Value;
	params.AffectedByGameSettings = AffectedByGameSettings;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseAge
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::IncreaseAge() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseAge");

	struct UBP_CharacterStatsComponent_C_IncreaseAge_Params {
	};
	UBP_CharacterStatsComponent_C_IncreaseAge_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.CheckDeadChance
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::CheckDeadChance() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.CheckDeadChance");

	struct UBP_CharacterStatsComponent_C_CheckDeadChance_Params {
	};
	UBP_CharacterStatsComponent_C_CheckDeadChance_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseExtraction
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AffectedByTalent	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: AffectedByGameSettings	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::IncreaseExtraction(float Value, bool AffectedByTalent, bool AffectedByGameSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseExtraction");

	struct UBP_CharacterStatsComponent_C_IncreaseExtraction_Params {
		float Value;			//Offset: 0 | ElementSize: 4
		bool AffectedByTalent;			//Offset: 4 | ElementSize: 1
		bool AffectedByGameSettings;			//Offset: 5 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_IncreaseExtraction_Params params;
	params.Value = Value;
	params.AffectedByTalent = AffectedByTalent;
	params.AffectedByGameSettings = AffectedByGameSettings;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseHunting
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AffectedByTalent	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: AffectedByGameSettings	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::IncreaseHunting(float Value, bool AffectedByTalent, bool AffectedByGameSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseHunting");

	struct UBP_CharacterStatsComponent_C_IncreaseHunting_Params {
		float Value;			//Offset: 0 | ElementSize: 4
		bool AffectedByTalent;			//Offset: 4 | ElementSize: 1
		bool AffectedByGameSettings;			//Offset: 5 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_IncreaseHunting_Params params;
	params.Value = Value;
	params.AffectedByTalent = AffectedByTalent;
	params.AffectedByGameSettings = AffectedByGameSettings;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetInitialStats
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Name	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: sex	Type: TEnumAsByte<E_Sex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Age	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MinDeadAge	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::SetInitialStats(struct FText Name, TEnumAsByte<E_Sex> sex, float Age, float MinDeadAge) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetInitialStats");

	struct UBP_CharacterStatsComponent_C_SetInitialStats_Params {
		struct FText Name;			//Offset: 0 | ElementSize: 24
		TEnumAsByte<E_Sex> sex;			//Offset: 24 | ElementSize: 1
		float Age;			//Offset: 28 | ElementSize: 4
		float MinDeadAge;			//Offset: 32 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_SetInitialStats_Params params;
	params.Name = Name;
	params.sex = sex;
	params.Age = Age;
	params.MinDeadAge = MinDeadAge;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseDeadChance
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::IncreaseDeadChance() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseDeadChance");

	struct UBP_CharacterStatsComponent_C_IncreaseDeadChance_Params {
	};
	UBP_CharacterStatsComponent_C_IncreaseDeadChance_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseFarming
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AffectedByTalent	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: AffectedByGameSettings	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::IncreaseFarming(float Value, bool AffectedByTalent, bool AffectedByGameSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseFarming");

	struct UBP_CharacterStatsComponent_C_IncreaseFarming_Params {
		float Value;			//Offset: 0 | ElementSize: 4
		bool AffectedByTalent;			//Offset: 4 | ElementSize: 1
		bool AffectedByGameSettings;			//Offset: 5 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_IncreaseFarming_Params params;
	params.Value = Value;
	params.AffectedByTalent = AffectedByTalent;
	params.AffectedByGameSettings = AffectedByGameSettings;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseDiplomacy
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AffectedByTalent	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: AffectedByGameSettings	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::IncreaseDiplomacy(float Value, bool AffectedByTalent, bool AffectedByGameSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseDiplomacy");

	struct UBP_CharacterStatsComponent_C_IncreaseDiplomacy_Params {
		float Value;			//Offset: 0 | ElementSize: 4
		bool AffectedByTalent;			//Offset: 4 | ElementSize: 1
		bool AffectedByGameSettings;			//Offset: 5 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_IncreaseDiplomacy_Params params;
	params.Value = Value;
	params.AffectedByTalent = AffectedByTalent;
	params.AffectedByGameSettings = AffectedByGameSettings;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseSurvival
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AffectedByTalent	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: AffectedByGameSettings	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::IncreaseSurvival(float Value, bool AffectedByTalent, bool AffectedByGameSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseSurvival");

	struct UBP_CharacterStatsComponent_C_IncreaseSurvival_Params {
		float Value;			//Offset: 0 | ElementSize: 4
		bool AffectedByTalent;			//Offset: 4 | ElementSize: 1
		bool AffectedByGameSettings;			//Offset: 5 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_IncreaseSurvival_Params params;
	params.Value = Value;
	params.AffectedByTalent = AffectedByTalent;
	params.AffectedByGameSettings = AffectedByGameSettings;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseCrafting
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AffectedByCraftingTalent	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: AffectedBySewingTalent	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: AffectedByCookingTalent	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: AffectedByGameSettings	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::IncreaseCrafting(float Value, bool AffectedByCraftingTalent, bool AffectedBySewingTalent, bool AffectedByCookingTalent, bool AffectedByGameSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseCrafting");

	struct UBP_CharacterStatsComponent_C_IncreaseCrafting_Params {
		float Value;			//Offset: 0 | ElementSize: 4
		bool AffectedByCraftingTalent;			//Offset: 4 | ElementSize: 1
		bool AffectedBySewingTalent;			//Offset: 5 | ElementSize: 1
		bool AffectedByCookingTalent;			//Offset: 6 | ElementSize: 1
		bool AffectedByGameSettings;			//Offset: 7 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_IncreaseCrafting_Params params;
	params.Value = Value;
	params.AffectedByCraftingTalent = AffectedByCraftingTalent;
	params.AffectedBySewingTalent = AffectedBySewingTalent;
	params.AffectedByCookingTalent = AffectedByCookingTalent;
	params.AffectedByGameSettings = AffectedByGameSettings;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncrementAllSkills
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::IncrementAllSkills() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncrementAllSkills");

	struct UBP_CharacterStatsComponent_C_IncrementAllSkills_Params {
	};
	UBP_CharacterStatsComponent_C_IncrementAllSkills_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.InitSkills
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ExtractionLevel	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ExtractionProgress	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ExtractionPointsToSpend	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HuntingLevel	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HuntingProgress	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HuntingPointsToSpend	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FarmingLevel	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FarmingProgress	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FarmingPointsToSpend	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DiplomacyLevel	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DiplomacyProgress	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DiplomacyPointsToSpend	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SurvivalLevel	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SurvivalProgress	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SurvivalPointsToSpend	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CraftingLevel	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CraftingProgress	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CraftingPointsToSpend	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::InitSkills(int32_t ExtractionLevel, float ExtractionProgress, int32_t ExtractionPointsToSpend, int32_t HuntingLevel, float HuntingProgress, int32_t HuntingPointsToSpend, int32_t FarmingLevel, float FarmingProgress, int32_t FarmingPointsToSpend, int32_t DiplomacyLevel, float DiplomacyProgress, int32_t DiplomacyPointsToSpend, int32_t SurvivalLevel, float SurvivalProgress, int32_t SurvivalPointsToSpend, int32_t CraftingLevel, float CraftingProgress, int32_t CraftingPointsToSpend) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.InitSkills");

	struct UBP_CharacterStatsComponent_C_InitSkills_Params {
		int32_t ExtractionLevel;			//Offset: 0 | ElementSize: 4
		float ExtractionProgress;			//Offset: 4 | ElementSize: 4
		int32_t ExtractionPointsToSpend;			//Offset: 8 | ElementSize: 4
		int32_t HuntingLevel;			//Offset: 12 | ElementSize: 4
		float HuntingProgress;			//Offset: 16 | ElementSize: 4
		int32_t HuntingPointsToSpend;			//Offset: 20 | ElementSize: 4
		int32_t FarmingLevel;			//Offset: 24 | ElementSize: 4
		float FarmingProgress;			//Offset: 28 | ElementSize: 4
		int32_t FarmingPointsToSpend;			//Offset: 32 | ElementSize: 4
		int32_t DiplomacyLevel;			//Offset: 36 | ElementSize: 4
		float DiplomacyProgress;			//Offset: 40 | ElementSize: 4
		int32_t DiplomacyPointsToSpend;			//Offset: 44 | ElementSize: 4
		int32_t SurvivalLevel;			//Offset: 48 | ElementSize: 4
		float SurvivalProgress;			//Offset: 52 | ElementSize: 4
		int32_t SurvivalPointsToSpend;			//Offset: 56 | ElementSize: 4
		int32_t CraftingLevel;			//Offset: 60 | ElementSize: 4
		float CraftingProgress;			//Offset: 64 | ElementSize: 4
		int32_t CraftingPointsToSpend;			//Offset: 68 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_InitSkills_Params params;
	params.ExtractionLevel = ExtractionLevel;
	params.ExtractionProgress = ExtractionProgress;
	params.ExtractionPointsToSpend = ExtractionPointsToSpend;
	params.HuntingLevel = HuntingLevel;
	params.HuntingProgress = HuntingProgress;
	params.HuntingPointsToSpend = HuntingPointsToSpend;
	params.FarmingLevel = FarmingLevel;
	params.FarmingProgress = FarmingProgress;
	params.FarmingPointsToSpend = FarmingPointsToSpend;
	params.DiplomacyLevel = DiplomacyLevel;
	params.DiplomacyProgress = DiplomacyProgress;
	params.DiplomacyPointsToSpend = DiplomacyPointsToSpend;
	params.SurvivalLevel = SurvivalLevel;
	params.SurvivalProgress = SurvivalProgress;
	params.SurvivalPointsToSpend = SurvivalPointsToSpend;
	params.CraftingLevel = CraftingLevel;
	params.CraftingProgress = CraftingProgress;
	params.CraftingPointsToSpend = CraftingPointsToSpend;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.AddSkills
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Skill	Type: TEnumAsByte<E_Skills>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AffectedByGameSettings	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::AddSkills(TEnumAsByte<E_Skills> Skill, float Value, bool AffectedByGameSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.AddSkills");

	struct UBP_CharacterStatsComponent_C_AddSkills_Params {
		TEnumAsByte<E_Skills> Skill;			//Offset: 0 | ElementSize: 1
		float Value;			//Offset: 4 | ElementSize: 4
		bool AffectedByGameSettings;			//Offset: 8 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_AddSkills_Params params;
	params.Skill = Skill;
	params.Value = Value;
	params.AffectedByGameSettings = AffectedByGameSettings;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetStats
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Name	Type: struct FText	Flags: Parm, OutParm
// Name: sex	Type: TEnumAsByte<E_Sex>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Age	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MinDeadAge	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CharacterType	Type: TEnumAsByte<E_CharacterType>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Mood	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::GetStats(struct FText* Name, TEnumAsByte<E_Sex>* sex, float* Age, float* MinDeadAge, TEnumAsByte<E_CharacterType>* CharacterType, float* Mood) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetStats");

	struct UBP_CharacterStatsComponent_C_GetStats_Params {
		struct FText Name;			//Offset: 0 | ElementSize: 24
		TEnumAsByte<E_Sex> sex;			//Offset: 24 | ElementSize: 1
		float Age;			//Offset: 28 | ElementSize: 4
		float MinDeadAge;			//Offset: 32 | ElementSize: 4
		TEnumAsByte<E_CharacterType> CharacterType;			//Offset: 36 | ElementSize: 1
		float Mood;			//Offset: 40 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_GetStats_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Name != nullptr)
		*Name = params.Name;
	if (sex != nullptr)
		*sex = params.sex;
	if (Age != nullptr)
		*Age = params.Age;
	if (MinDeadAge != nullptr)
		*MinDeadAge = params.MinDeadAge;
	if (CharacterType != nullptr)
		*CharacterType = params.CharacterType;
	if (Mood != nullptr)
		*Mood = params.Mood;
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetSkills
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ExtractionLevel	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ExtractionProgress	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HuntingLevel	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HuntingProgress	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FarmingLevel	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FarmingProgress	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DiplomacyLevel	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DiplomacyProgress	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SurvivalLevel	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SurvivalProgress	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CraftingLevel	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CraftingProgress	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::GetSkills(int32_t* ExtractionLevel, float* ExtractionProgress, int32_t* HuntingLevel, float* HuntingProgress, int32_t* FarmingLevel, float* FarmingProgress, int32_t* DiplomacyLevel, float* DiplomacyProgress, int32_t* SurvivalLevel, float* SurvivalProgress, int32_t* CraftingLevel, float* CraftingProgress) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetSkills");

	struct UBP_CharacterStatsComponent_C_GetSkills_Params {
		int32_t ExtractionLevel;			//Offset: 0 | ElementSize: 4
		float ExtractionProgress;			//Offset: 4 | ElementSize: 4
		int32_t HuntingLevel;			//Offset: 8 | ElementSize: 4
		float HuntingProgress;			//Offset: 12 | ElementSize: 4
		int32_t FarmingLevel;			//Offset: 16 | ElementSize: 4
		float FarmingProgress;			//Offset: 20 | ElementSize: 4
		int32_t DiplomacyLevel;			//Offset: 24 | ElementSize: 4
		float DiplomacyProgress;			//Offset: 28 | ElementSize: 4
		int32_t SurvivalLevel;			//Offset: 32 | ElementSize: 4
		float SurvivalProgress;			//Offset: 36 | ElementSize: 4
		int32_t CraftingLevel;			//Offset: 40 | ElementSize: 4
		float CraftingProgress;			//Offset: 44 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_GetSkills_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ExtractionLevel != nullptr)
		*ExtractionLevel = params.ExtractionLevel;
	if (ExtractionProgress != nullptr)
		*ExtractionProgress = params.ExtractionProgress;
	if (HuntingLevel != nullptr)
		*HuntingLevel = params.HuntingLevel;
	if (HuntingProgress != nullptr)
		*HuntingProgress = params.HuntingProgress;
	if (FarmingLevel != nullptr)
		*FarmingLevel = params.FarmingLevel;
	if (FarmingProgress != nullptr)
		*FarmingProgress = params.FarmingProgress;
	if (DiplomacyLevel != nullptr)
		*DiplomacyLevel = params.DiplomacyLevel;
	if (DiplomacyProgress != nullptr)
		*DiplomacyProgress = params.DiplomacyProgress;
	if (SurvivalLevel != nullptr)
		*SurvivalLevel = params.SurvivalLevel;
	if (SurvivalProgress != nullptr)
		*SurvivalProgress = params.SurvivalProgress;
	if (CraftingLevel != nullptr)
		*CraftingLevel = params.CraftingLevel;
	if (CraftingProgress != nullptr)
		*CraftingProgress = params.CraftingProgress;
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetMaxSkill
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: MaxSkill	Type: TEnumAsByte<E_Skills>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::GetMaxSkill(TEnumAsByte<E_Skills>* MaxSkill) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetMaxSkill");

	struct UBP_CharacterStatsComponent_C_GetMaxSkill_Params {
		TEnumAsByte<E_Skills> MaxSkill;			//Offset: 0 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_GetMaxSkill_Params params;

	UObject::ProcessEvent(fn, &params);
	if (MaxSkill != nullptr)
		*MaxSkill = params.MaxSkill;
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseMood
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::IncreaseMood(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseMood");

	struct UBP_CharacterStatsComponent_C_IncreaseMood_Params {
		float Value;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_IncreaseMood_Params params;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseMood
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::DecreaseMood(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseMood");

	struct UBP_CharacterStatsComponent_C_DecreaseMood_Params {
		float Value;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_DecreaseMood_Params params;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetMaxSkills
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: MaxSkills	Type: TArray<TEnumAsByte<E_Skills>>	Flags: Parm, OutParm
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::GetMaxSkills(TArray<TEnumAsByte<E_Skills>>* MaxSkills) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetMaxSkills");

	struct UBP_CharacterStatsComponent_C_GetMaxSkills_Params {
		TArray<TEnumAsByte<E_Skills>> MaxSkills;			//Offset: 0 | ElementSize: 16
	};
	UBP_CharacterStatsComponent_C_GetMaxSkills_Params params;

	UObject::ProcessEvent(fn, &params);
	if (MaxSkills != nullptr)
		*MaxSkills = params.MaxSkills;
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetMinSkills
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: MinSkills	Type: TArray<TEnumAsByte<E_Skills>>	Flags: Parm, OutParm
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::GetMinSkills(TArray<TEnumAsByte<E_Skills>>* MinSkills) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetMinSkills");

	struct UBP_CharacterStatsComponent_C_GetMinSkills_Params {
		TArray<TEnumAsByte<E_Skills>> MinSkills;			//Offset: 0 | ElementSize: 16
	};
	UBP_CharacterStatsComponent_C_GetMinSkills_Params params;

	UObject::ProcessEvent(fn, &params);
	if (MinSkills != nullptr)
		*MinSkills = params.MinSkills;
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetSkillLevel
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: SkillType	Type: TEnumAsByte<E_Skills>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Level	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::GetSkillLevel(TEnumAsByte<E_Skills> SkillType, int32_t* Level) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetSkillLevel");

	struct UBP_CharacterStatsComponent_C_GetSkillLevel_Params {
		TEnumAsByte<E_Skills> SkillType;			//Offset: 0 | ElementSize: 1
		int32_t Level;			//Offset: 4 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_GetSkillLevel_Params params;
	params.SkillType = SkillType;

	UObject::ProcessEvent(fn, &params);
	if (Level != nullptr)
		*Level = params.Level;
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateHunter'sTalent
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: TalentID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::UpdateHunter_sTalent(int32_t TalentID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateHunter'sTalent");

	struct UBP_CharacterStatsComponent_C_UpdateHunter_sTalent_Params {
		int32_t TalentID;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_UpdateHunter_sTalent_Params params;
	params.TalentID = TalentID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateExtraction'sTalent
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: TalentID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::UpdateExtraction_sTalent(int32_t TalentID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateExtraction'sTalent");

	struct UBP_CharacterStatsComponent_C_UpdateExtraction_sTalent_Params {
		int32_t TalentID;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_UpdateExtraction_sTalent_Params params;
	params.TalentID = TalentID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateFarming'sTalent
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: TalentID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::UpdateFarming_sTalent(int32_t TalentID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateFarming'sTalent");

	struct UBP_CharacterStatsComponent_C_UpdateFarming_sTalent_Params {
		int32_t TalentID;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_UpdateFarming_sTalent_Params params;
	params.TalentID = TalentID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateDiplomacy'sTalent
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: TalentID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::UpdateDiplomacy_sTalent(int32_t TalentID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateDiplomacy'sTalent");

	struct UBP_CharacterStatsComponent_C_UpdateDiplomacy_sTalent_Params {
		int32_t TalentID;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_UpdateDiplomacy_sTalent_Params params;
	params.TalentID = TalentID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateSurvival'sTalent
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: TalentID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::UpdateSurvival_sTalent(int32_t TalentID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateSurvival'sTalent");

	struct UBP_CharacterStatsComponent_C_UpdateSurvival_sTalent_Params {
		int32_t TalentID;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_UpdateSurvival_sTalent_Params params;
	params.TalentID = TalentID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateCrafting'sTalent
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: TalentID	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::UpdateCrafting_sTalent(int32_t TalentID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateCrafting'sTalent");

	struct UBP_CharacterStatsComponent_C_UpdateCrafting_sTalent_Params {
		int32_t TalentID;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_UpdateCrafting_sTalent_Params params;
	params.TalentID = TalentID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateHIConditionMultiplier
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::UpdateHIConditionMultiplier() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateHIConditionMultiplier");

	struct UBP_CharacterStatsComponent_C_UpdateHIConditionMultiplier_Params {
	};
	UBP_CharacterStatsComponent_C_UpdateHIConditionMultiplier_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseExtractionStack
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::IncreaseExtractionStack() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseExtractionStack");

	struct UBP_CharacterStatsComponent_C_IncreaseExtractionStack_Params {
	};
	UBP_CharacterStatsComponent_C_IncreaseExtractionStack_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.ResetSkillTalentPoints
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SkillToReset	Type: TEnumAsByte<E_Skills>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::ResetSkillTalentPoints(TEnumAsByte<E_Skills> SkillToReset) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.ResetSkillTalentPoints");

	struct UBP_CharacterStatsComponent_C_ResetSkillTalentPoints_Params {
		TEnumAsByte<E_Skills> SkillToReset;			//Offset: 0 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_ResetSkillTalentPoints_Params params;
	params.SkillToReset = SkillToReset;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateDirtiness
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::UpdateDirtiness(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateDirtiness");

	struct UBP_CharacterStatsComponent_C_UpdateDirtiness_Params {
		float Value;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_UpdateDirtiness_Params params;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetDirtiness
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Dirtiness	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::SetDirtiness(float Dirtiness) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetDirtiness");

	struct UBP_CharacterStatsComponent_C_SetDirtiness_Params {
		float Dirtiness;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_SetDirtiness_Params params;
	params.Dirtiness = Dirtiness;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetDirtiness
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Dirtiness	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::GetDirtiness(float* Dirtiness) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetDirtiness");

	struct UBP_CharacterStatsComponent_C_GetDirtiness_Params {
		float Dirtiness;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_GetDirtiness_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Dirtiness != nullptr)
		*Dirtiness = params.Dirtiness;
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseFood
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Food	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::IncreaseFood(float Food) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseFood");

	struct UBP_CharacterStatsComponent_C_IncreaseFood_Params {
		float Food;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_IncreaseFood_Params params;
	params.Food = Food;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseFood
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Food	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::DecreaseFood(float Food) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseFood");

	struct UBP_CharacterStatsComponent_C_DecreaseFood_Params {
		float Food;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_DecreaseFood_Params params;
	params.Food = Food;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseFoodWithTime
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::DecreaseFoodWithTime() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseFoodWithTime");

	struct UBP_CharacterStatsComponent_C_DecreaseFoodWithTime_Params {
	};
	UBP_CharacterStatsComponent_C_DecreaseFoodWithTime_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseWater
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: water	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::IncreaseWater(float water) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseWater");

	struct UBP_CharacterStatsComponent_C_IncreaseWater_Params {
		float water;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_IncreaseWater_Params params;
	params.water = water;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseWater
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: water	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::DecreaseWater(float water) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseWater");

	struct UBP_CharacterStatsComponent_C_DecreaseWater_Params {
		float water;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_DecreaseWater_Params params;
	params.water = water;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseWaterWithTime
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::DecreaseWaterWithTime() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseWaterWithTime");

	struct UBP_CharacterStatsComponent_C_DecreaseWaterWithTime_Params {
	};
	UBP_CharacterStatsComponent_C_DecreaseWaterWithTime_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseHealth
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: health	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::IncreaseHealth(float health) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseHealth");

	struct UBP_CharacterStatsComponent_C_IncreaseHealth_Params {
		float health;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_IncreaseHealth_Params params;
	params.health = health;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseHealth
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: health	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageType	Type: TEnumAsByte<E_DamageType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::DecreaseHealth(float health, TEnumAsByte<E_DamageType> DamageType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseHealth");

	struct UBP_CharacterStatsComponent_C_DecreaseHealth_Params {
		float health;			//Offset: 0 | ElementSize: 4
		TEnumAsByte<E_DamageType> DamageType;			//Offset: 4 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_DecreaseHealth_Params params;
	params.health = health;
	params.DamageType = DamageType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseStamina
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Stamina	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::IncreaseStamina(float Stamina) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseStamina");

	struct UBP_CharacterStatsComponent_C_IncreaseStamina_Params {
		float Stamina;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_IncreaseStamina_Params params;
	params.Stamina = Stamina;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseStamina
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Stamina	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Ditrtness	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Enough	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::DecreaseStamina(float Stamina, bool Ditrtness, bool* Enough) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseStamina");

	struct UBP_CharacterStatsComponent_C_DecreaseStamina_Params {
		float Stamina;			//Offset: 0 | ElementSize: 4
		bool Ditrtness;			//Offset: 4 | ElementSize: 1
		bool Enough;			//Offset: 5 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_DecreaseStamina_Params params;
	params.Stamina = Stamina;
	params.Ditrtness = Ditrtness;

	UObject::ProcessEvent(fn, &params);
	if (Enough != nullptr)
		*Enough = params.Enough;
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.InitLifeStats
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: health	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Stamina	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Food	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: water	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Somnolence	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Temperature	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Dirtiness	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Poison	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Poisoned	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Alcohol	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::InitLifeStats(float health, float Stamina, float Food, float water, float Somnolence, float Temperature, float Dirtiness, float Poison, bool Poisoned, float Alcohol) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.InitLifeStats");

	struct UBP_CharacterStatsComponent_C_InitLifeStats_Params {
		float health;			//Offset: 0 | ElementSize: 4
		float Stamina;			//Offset: 4 | ElementSize: 4
		float Food;			//Offset: 8 | ElementSize: 4
		float water;			//Offset: 12 | ElementSize: 4
		float Somnolence;			//Offset: 16 | ElementSize: 4
		float Temperature;			//Offset: 20 | ElementSize: 4
		float Dirtiness;			//Offset: 24 | ElementSize: 4
		float Poison;			//Offset: 28 | ElementSize: 4
		bool Poisoned;			//Offset: 32 | ElementSize: 1
		float Alcohol;			//Offset: 36 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_InitLifeStats_Params params;
	params.health = health;
	params.Stamina = Stamina;
	params.Food = Food;
	params.water = water;
	params.Somnolence = Somnolence;
	params.Temperature = Temperature;
	params.Dirtiness = Dirtiness;
	params.Poison = Poison;
	params.Poisoned = Poisoned;
	params.Alcohol = Alcohol;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseStamina_Jump
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Enough	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::DecreaseStamina_Jump(bool* Enough) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseStamina_Jump");

	struct UBP_CharacterStatsComponent_C_DecreaseStamina_Jump_Params {
		bool Enough;			//Offset: 0 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_DecreaseStamina_Jump_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Enough != nullptr)
		*Enough = params.Enough;
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.CheckStamina
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Stamina	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Enough_	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::CheckStamina(float Stamina, bool* Enough_) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.CheckStamina");

	struct UBP_CharacterStatsComponent_C_CheckStamina_Params {
		float Stamina;			//Offset: 0 | ElementSize: 4
		bool Enough_;			//Offset: 4 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_CheckStamina_Params params;
	params.Stamina = Stamina;

	UObject::ProcessEvent(fn, &params);
	if (Enough_ != nullptr)
		*Enough_ = params.Enough_;
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetStats
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Food	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: water	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: health	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DeadChance	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsSick	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IsInjured	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Mood	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::SetStats(float Food, float water, float health, int32_t DeadChance, bool IsSick, bool IsInjured, float Mood) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetStats");

	struct UBP_CharacterStatsComponent_C_SetStats_Params {
		float Food;			//Offset: 0 | ElementSize: 4
		float water;			//Offset: 4 | ElementSize: 4
		float health;			//Offset: 8 | ElementSize: 4
		int32_t DeadChance;			//Offset: 12 | ElementSize: 4
		bool IsSick;			//Offset: 16 | ElementSize: 1
		bool IsInjured;			//Offset: 17 | ElementSize: 1
		float Mood;			//Offset: 20 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_SetStats_Params params;
	params.Food = Food;
	params.water = water;
	params.health = health;
	params.DeadChance = DeadChance;
	params.IsSick = IsSick;
	params.IsInjured = IsInjured;
	params.Mood = Mood;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateSensedTemperature
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::UpdateSensedTemperature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateSensedTemperature");

	struct UBP_CharacterStatsComponent_C_UpdateSensedTemperature_Params {
	};
	UBP_CharacterStatsComponent_C_UpdateSensedTemperature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreasePoison
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Poison	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::IncreasePoison(float Poison) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreasePoison");

	struct UBP_CharacterStatsComponent_C_IncreasePoison_Params {
		float Poison;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_IncreasePoison_Params params;
	params.Poison = Poison;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreasePoison
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Poison	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::DecreasePoison(float Poison) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreasePoison");

	struct UBP_CharacterStatsComponent_C_DecreasePoison_Params {
		float Poison;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_DecreasePoison_Params params;
	params.Poison = Poison;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreasePoisoningWithTime
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::DecreasePoisoningWithTime() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreasePoisoningWithTime");

	struct UBP_CharacterStatsComponent_C_DecreasePoisoningWithTime_Params {
	};
	UBP_CharacterStatsComponent_C_DecreasePoisoningWithTime_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.RandomSkills
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Birth	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::RandomSkills(bool Birth) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.RandomSkills");

	struct UBP_CharacterStatsComponent_C_RandomSkills_Params {
		bool Birth;			//Offset: 0 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_RandomSkills_Params params;
	params.Birth = Birth;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.InitTalents
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ExtractionTalents	Type: TArray<int32_t>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: HuntingTalents	Type: TArray<int32_t>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: FarmingTalents	Type: TArray<int32_t>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: DiplomacyTalents	Type: TArray<int32_t>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: SurvivalTalents	Type: TArray<int32_t>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: CraftingTalents	Type: TArray<int32_t>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::InitTalents(TArray<int32_t>* ExtractionTalents, TArray<int32_t>* HuntingTalents, TArray<int32_t>* FarmingTalents, TArray<int32_t>* DiplomacyTalents, TArray<int32_t>* SurvivalTalents, TArray<int32_t>* CraftingTalents) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.InitTalents");

	struct UBP_CharacterStatsComponent_C_InitTalents_Params {
		TArray<int32_t> ExtractionTalents;			//Offset: 0 | ElementSize: 16
		TArray<int32_t> HuntingTalents;			//Offset: 16 | ElementSize: 16
		TArray<int32_t> FarmingTalents;			//Offset: 32 | ElementSize: 16
		TArray<int32_t> DiplomacyTalents;			//Offset: 48 | ElementSize: 16
		TArray<int32_t> SurvivalTalents;			//Offset: 64 | ElementSize: 16
		TArray<int32_t> CraftingTalents;			//Offset: 80 | ElementSize: 16
	};
	UBP_CharacterStatsComponent_C_InitTalents_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ExtractionTalents != nullptr)
		*ExtractionTalents = params.ExtractionTalents;
	if (HuntingTalents != nullptr)
		*HuntingTalents = params.HuntingTalents;
	if (FarmingTalents != nullptr)
		*FarmingTalents = params.FarmingTalents;
	if (DiplomacyTalents != nullptr)
		*DiplomacyTalents = params.DiplomacyTalents;
	if (SurvivalTalents != nullptr)
		*SurvivalTalents = params.SurvivalTalents;
	if (CraftingTalents != nullptr)
		*CraftingTalents = params.CraftingTalents;
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetTalentsLevels
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ExtractionTalents	Type: TArray<int32_t>	Flags: Parm, OutParm
// Name: HuntingTalents	Type: TArray<int32_t>	Flags: Parm, OutParm
// Name: FarmingTalents	Type: TArray<int32_t>	Flags: Parm, OutParm
// Name: DiplomacyTalents	Type: TArray<int32_t>	Flags: Parm, OutParm
// Name: SurvivalTalents	Type: TArray<int32_t>	Flags: Parm, OutParm
// Name: CraftingTalents	Type: TArray<int32_t>	Flags: Parm, OutParm
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::GetTalentsLevels(TArray<int32_t>* ExtractionTalents, TArray<int32_t>* HuntingTalents, TArray<int32_t>* FarmingTalents, TArray<int32_t>* DiplomacyTalents, TArray<int32_t>* SurvivalTalents, TArray<int32_t>* CraftingTalents) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetTalentsLevels");

	struct UBP_CharacterStatsComponent_C_GetTalentsLevels_Params {
		TArray<int32_t> ExtractionTalents;			//Offset: 0 | ElementSize: 16
		TArray<int32_t> HuntingTalents;			//Offset: 16 | ElementSize: 16
		TArray<int32_t> FarmingTalents;			//Offset: 32 | ElementSize: 16
		TArray<int32_t> DiplomacyTalents;			//Offset: 48 | ElementSize: 16
		TArray<int32_t> SurvivalTalents;			//Offset: 64 | ElementSize: 16
		TArray<int32_t> CraftingTalents;			//Offset: 80 | ElementSize: 16
	};
	UBP_CharacterStatsComponent_C_GetTalentsLevels_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ExtractionTalents != nullptr)
		*ExtractionTalents = params.ExtractionTalents;
	if (HuntingTalents != nullptr)
		*HuntingTalents = params.HuntingTalents;
	if (FarmingTalents != nullptr)
		*FarmingTalents = params.FarmingTalents;
	if (DiplomacyTalents != nullptr)
		*DiplomacyTalents = params.DiplomacyTalents;
	if (SurvivalTalents != nullptr)
		*SurvivalTalents = params.SurvivalTalents;
	if (CraftingTalents != nullptr)
		*CraftingTalents = params.CraftingTalents;
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnAgeChange
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnAgeChange() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnAgeChange");

	struct UBP_CharacterStatsComponent_C_OnAgeChange_Params {
	};
	UBP_CharacterStatsComponent_C_OnAgeChange_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateOldness
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::UpdateOldness() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateOldness");

	struct UBP_CharacterStatsComponent_C_UpdateOldness_Params {
	};
	UBP_CharacterStatsComponent_C_UpdateOldness_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseSomnolence
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Somnolence	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::IncreaseSomnolence(float Somnolence) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseSomnolence");

	struct UBP_CharacterStatsComponent_C_IncreaseSomnolence_Params {
		float Somnolence;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_IncreaseSomnolence_Params params;
	params.Somnolence = Somnolence;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseSomnolence
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Somnolence	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::DecreaseSomnolence(float Somnolence) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseSomnolence");

	struct UBP_CharacterStatsComponent_C_DecreaseSomnolence_Params {
		float Somnolence;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_DecreaseSomnolence_Params params;
	params.Somnolence = Somnolence;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseSomnolenceWithTime
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::IncreaseSomnolenceWithTime() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseSomnolenceWithTime");

	struct UBP_CharacterStatsComponent_C_IncreaseSomnolenceWithTime_Params {
	};
	UBP_CharacterStatsComponent_C_IncreaseSomnolenceWithTime_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.ApplySmoothTemperature
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::ApplySmoothTemperature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.ApplySmoothTemperature");

	struct UBP_CharacterStatsComponent_C_ApplySmoothTemperature_Params {
	};
	UBP_CharacterStatsComponent_C_ApplySmoothTemperature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetMaxSkillByProfession
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Profession	Type: TEnumAsByte<E_Profession>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::SetMaxSkillByProfession(TEnumAsByte<E_Profession> Profession) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetMaxSkillByProfession");

	struct UBP_CharacterStatsComponent_C_SetMaxSkillByProfession_Params {
		TEnumAsByte<E_Profession> Profession;			//Offset: 0 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_SetMaxSkillByProfession_Params params;
	params.Profession = Profession;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.CheckStamina_Jump
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Enough	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::CheckStamina_Jump(bool* Enough) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.CheckStamina_Jump");

	struct UBP_CharacterStatsComponent_C_CheckStamina_Jump_Params {
		bool Enough;			//Offset: 0 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_CheckStamina_Jump_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Enough != nullptr)
		*Enough = params.Enough;
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseFarmerStack
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::IncreaseFarmerStack() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseFarmerStack");

	struct UBP_CharacterStatsComponent_C_IncreaseFarmerStack_Params {
	};
	UBP_CharacterStatsComponent_C_IncreaseFarmerStack_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseBuilderStack
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::IncreaseBuilderStack() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseBuilderStack");

	struct UBP_CharacterStatsComponent_C_IncreaseBuilderStack_Params {
	};
	UBP_CharacterStatsComponent_C_IncreaseBuilderStack_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseAlcohol
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Alcohol	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::IncreaseAlcohol(float Alcohol) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseAlcohol");

	struct UBP_CharacterStatsComponent_C_IncreaseAlcohol_Params {
		float Alcohol;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_IncreaseAlcohol_Params params;
	params.Alcohol = Alcohol;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseAlcohol
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Alcohol	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::DecreaseAlcohol(float Alcohol) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseAlcohol");

	struct UBP_CharacterStatsComponent_C_DecreaseAlcohol_Params {
		float Alcohol;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_DecreaseAlcohol_Params params;
	params.Alcohol = Alcohol;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseAlcoholWithTime
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::DecreaseAlcoholWithTime() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseAlcoholWithTime");

	struct UBP_CharacterStatsComponent_C_DecreaseAlcoholWithTime_Params {
	};
	UBP_CharacterStatsComponent_C_DecreaseAlcoholWithTime_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartTimeUnpoison
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: EffectDurationInSeconds	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IntensityPerSecond	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::StartTimeUnpoison(float EffectDurationInSeconds, float IntensityPerSecond) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartTimeUnpoison");

	struct UBP_CharacterStatsComponent_C_StartTimeUnpoison_Params {
		float EffectDurationInSeconds;			//Offset: 0 | ElementSize: 4
		float IntensityPerSecond;			//Offset: 4 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_StartTimeUnpoison_Params params;
	params.EffectDurationInSeconds = EffectDurationInSeconds;
	params.IntensityPerSecond = IntensityPerSecond;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseTimeUnpoisonDurationWithTime
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::DecreaseTimeUnpoisonDurationWithTime() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseTimeUnpoisonDurationWithTime");

	struct UBP_CharacterStatsComponent_C_DecreaseTimeUnpoisonDurationWithTime_Params {
	};
	UBP_CharacterStatsComponent_C_DecreaseTimeUnpoisonDurationWithTime_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.Consume
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Food	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: water	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: health	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Stamina	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Poison	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Alcohol	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: EffectDurationTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: HealthPerSecond	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AdditionalMaxHP	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StaminaMultiplier	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FoodMultiplier	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WaterMultiplier	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TurnOffHarmfulPoison	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: PoisonPerSecond	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NightVision	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: TemperatureTolerance	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SkillsReset	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: DamageMultiplier	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AnimalRepel	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: AdditionalWeight	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::Consume(float Food, float water, float health, float Stamina, float Poison, float Alcohol, float EffectDurationTime, float HealthPerSecond, float AdditionalMaxHP, float StaminaMultiplier, float FoodMultiplier, float WaterMultiplier, bool TurnOffHarmfulPoison, float PoisonPerSecond, bool NightVision, int32_t TemperatureTolerance, bool SkillsReset, float DamageMultiplier, bool AnimalRepel, float AdditionalWeight) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.Consume");

	struct UBP_CharacterStatsComponent_C_Consume_Params {
		float Food;			//Offset: 0 | ElementSize: 4
		float water;			//Offset: 4 | ElementSize: 4
		float health;			//Offset: 8 | ElementSize: 4
		float Stamina;			//Offset: 12 | ElementSize: 4
		float Poison;			//Offset: 16 | ElementSize: 4
		float Alcohol;			//Offset: 20 | ElementSize: 4
		float EffectDurationTime;			//Offset: 24 | ElementSize: 4
		float HealthPerSecond;			//Offset: 28 | ElementSize: 4
		float AdditionalMaxHP;			//Offset: 32 | ElementSize: 4
		float StaminaMultiplier;			//Offset: 36 | ElementSize: 4
		float FoodMultiplier;			//Offset: 40 | ElementSize: 4
		float WaterMultiplier;			//Offset: 44 | ElementSize: 4
		bool TurnOffHarmfulPoison;			//Offset: 48 | ElementSize: 1
		float PoisonPerSecond;			//Offset: 52 | ElementSize: 4
		bool NightVision;			//Offset: 56 | ElementSize: 1
		int32_t TemperatureTolerance;			//Offset: 60 | ElementSize: 4
		bool SkillsReset;			//Offset: 64 | ElementSize: 1
		float DamageMultiplier;			//Offset: 68 | ElementSize: 4
		bool AnimalRepel;			//Offset: 72 | ElementSize: 1
		float AdditionalWeight;			//Offset: 76 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_Consume_Params params;
	params.Food = Food;
	params.water = water;
	params.health = health;
	params.Stamina = Stamina;
	params.Poison = Poison;
	params.Alcohol = Alcohol;
	params.EffectDurationTime = EffectDurationTime;
	params.HealthPerSecond = HealthPerSecond;
	params.AdditionalMaxHP = AdditionalMaxHP;
	params.StaminaMultiplier = StaminaMultiplier;
	params.FoodMultiplier = FoodMultiplier;
	params.WaterMultiplier = WaterMultiplier;
	params.TurnOffHarmfulPoison = TurnOffHarmfulPoison;
	params.PoisonPerSecond = PoisonPerSecond;
	params.NightVision = NightVision;
	params.TemperatureTolerance = TemperatureTolerance;
	params.SkillsReset = SkillsReset;
	params.DamageMultiplier = DamageMultiplier;
	params.AnimalRepel = AnimalRepel;
	params.AdditionalWeight = AdditionalWeight;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateFX
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::UpdateFX() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateFX");

	struct UBP_CharacterStatsComponent_C_UpdateFX_Params {
	};
	UBP_CharacterStatsComponent_C_UpdateFX_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.Debug
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::Debug() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.Debug");

	struct UBP_CharacterStatsComponent_C_Debug_Params {
	};
	UBP_CharacterStatsComponent_C_Debug_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetPersonality
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::SetPersonality() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetPersonality");

	struct UBP_CharacterStatsComponent_C_SetPersonality_Params {
	};
	UBP_CharacterStatsComponent_C_SetPersonality_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseMoreWeightDurationWithTime
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::DecreaseMoreWeightDurationWithTime() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseMoreWeightDurationWithTime");

	struct UBP_CharacterStatsComponent_C_DecreaseMoreWeightDurationWithTime_Params {
	};
	UBP_CharacterStatsComponent_C_DecreaseMoreWeightDurationWithTime_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartMoreWeight
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: EffectDurationInSeconds	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MoreWeightAmount	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::StartMoreWeight(float EffectDurationInSeconds, float MoreWeightAmount) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartMoreWeight");

	struct UBP_CharacterStatsComponent_C_StartMoreWeight_Params {
		float EffectDurationInSeconds;			//Offset: 0 | ElementSize: 4
		float MoreWeightAmount;			//Offset: 4 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_StartMoreWeight_Params params;
	params.EffectDurationInSeconds = EffectDurationInSeconds;
	params.MoreWeightAmount = MoreWeightAmount;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseMoreDamageDurationWithTime
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::DecreaseMoreDamageDurationWithTime() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseMoreDamageDurationWithTime");

	struct UBP_CharacterStatsComponent_C_DecreaseMoreDamageDurationWithTime_Params {
	};
	UBP_CharacterStatsComponent_C_DecreaseMoreDamageDurationWithTime_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartMoreDamage
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: EffectDurationInSeconds	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MoreDamageMultiplier	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::StartMoreDamage(float EffectDurationInSeconds, float MoreDamageMultiplier) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartMoreDamage");

	struct UBP_CharacterStatsComponent_C_StartMoreDamage_Params {
		float EffectDurationInSeconds;			//Offset: 0 | ElementSize: 4
		float MoreDamageMultiplier;			//Offset: 4 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_StartMoreDamage_Params params;
	params.EffectDurationInSeconds = EffectDurationInSeconds;
	params.MoreDamageMultiplier = MoreDamageMultiplier;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartAnimalRepel
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: EffectDurationInSeconds	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::StartAnimalRepel(float EffectDurationInSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartAnimalRepel");

	struct UBP_CharacterStatsComponent_C_StartAnimalRepel_Params {
		float EffectDurationInSeconds;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_StartAnimalRepel_Params params;
	params.EffectDurationInSeconds = EffectDurationInSeconds;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseAnimalRepelDurationWithTime
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::DecreaseAnimalRepelDurationWithTime() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseAnimalRepelDurationWithTime");

	struct UBP_CharacterStatsComponent_C_DecreaseAnimalRepelDurationWithTime_Params {
	};
	UBP_CharacterStatsComponent_C_DecreaseAnimalRepelDurationWithTime_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.PotionStatReset
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::PotionStatReset() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.PotionStatReset");

	struct UBP_CharacterStatsComponent_C_PotionStatReset_Params {
	};
	UBP_CharacterStatsComponent_C_PotionStatReset_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartBetterTemperatureTolerance
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: EffectDurationInSeconds	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BetterTemperatureToleranceAmount	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::StartBetterTemperatureTolerance(float EffectDurationInSeconds, float BetterTemperatureToleranceAmount) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartBetterTemperatureTolerance");

	struct UBP_CharacterStatsComponent_C_StartBetterTemperatureTolerance_Params {
		float EffectDurationInSeconds;			//Offset: 0 | ElementSize: 4
		float BetterTemperatureToleranceAmount;			//Offset: 4 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_StartBetterTemperatureTolerance_Params params;
	params.EffectDurationInSeconds = EffectDurationInSeconds;
	params.BetterTemperatureToleranceAmount = BetterTemperatureToleranceAmount;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseBetterTemperatureToleranceDurationWithTime
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::DecreaseBetterTemperatureToleranceDurationWithTime() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseBetterTemperatureToleranceDurationWithTime");

	struct UBP_CharacterStatsComponent_C_DecreaseBetterTemperatureToleranceDurationWithTime_Params {
	};
	UBP_CharacterStatsComponent_C_DecreaseBetterTemperatureToleranceDurationWithTime_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartNightVision
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: EffectDurationInSeconds	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::StartNightVision(float EffectDurationInSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartNightVision");

	struct UBP_CharacterStatsComponent_C_StartNightVision_Params {
		float EffectDurationInSeconds;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_StartNightVision_Params params;
	params.EffectDurationInSeconds = EffectDurationInSeconds;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseNightVisionDurationWithTime
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::DecreaseNightVisionDurationWithTime() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseNightVisionDurationWithTime");

	struct UBP_CharacterStatsComponent_C_DecreaseNightVisionDurationWithTime_Params {
	};
	UBP_CharacterStatsComponent_C_DecreaseNightVisionDurationWithTime_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.PotionUnpoison
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::PotionUnpoison() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.PotionUnpoison");

	struct UBP_CharacterStatsComponent_C_PotionUnpoison_Params {
	};
	UBP_CharacterStatsComponent_C_PotionUnpoison_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.PotionUndrunk
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::PotionUndrunk() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.PotionUndrunk");

	struct UBP_CharacterStatsComponent_C_PotionUndrunk_Params {
	};
	UBP_CharacterStatsComponent_C_PotionUndrunk_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartSlowerWaterDrop
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: EffectDurationInSeconds	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SlowerWaterDropMultiplier	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::StartSlowerWaterDrop(float EffectDurationInSeconds, float SlowerWaterDropMultiplier) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartSlowerWaterDrop");

	struct UBP_CharacterStatsComponent_C_StartSlowerWaterDrop_Params {
		float EffectDurationInSeconds;			//Offset: 0 | ElementSize: 4
		float SlowerWaterDropMultiplier;			//Offset: 4 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_StartSlowerWaterDrop_Params params;
	params.EffectDurationInSeconds = EffectDurationInSeconds;
	params.SlowerWaterDropMultiplier = SlowerWaterDropMultiplier;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseSlowerWaterDropDurationWithTime
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::DecreaseSlowerWaterDropDurationWithTime() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseSlowerWaterDropDurationWithTime");

	struct UBP_CharacterStatsComponent_C_DecreaseSlowerWaterDropDurationWithTime_Params {
	};
	UBP_CharacterStatsComponent_C_DecreaseSlowerWaterDropDurationWithTime_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartSlowerHungerDrop
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: EffectDurationInSeconds	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SlowerHungerDropMulitplier	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::StartSlowerHungerDrop(float EffectDurationInSeconds, float SlowerHungerDropMulitplier) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartSlowerHungerDrop");

	struct UBP_CharacterStatsComponent_C_StartSlowerHungerDrop_Params {
		float EffectDurationInSeconds;			//Offset: 0 | ElementSize: 4
		float SlowerHungerDropMulitplier;			//Offset: 4 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_StartSlowerHungerDrop_Params params;
	params.EffectDurationInSeconds = EffectDurationInSeconds;
	params.SlowerHungerDropMulitplier = SlowerHungerDropMulitplier;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseSlowerHungerDropDurationTime
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::DecreaseSlowerHungerDropDurationTime() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseSlowerHungerDropDurationTime");

	struct UBP_CharacterStatsComponent_C_DecreaseSlowerHungerDropDurationTime_Params {
	};
	UBP_CharacterStatsComponent_C_DecreaseSlowerHungerDropDurationTime_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartSlowerStaminaDrop
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: EffectDurationInSeconds	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SlowerStaminaDropMultiplier	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::StartSlowerStaminaDrop(float EffectDurationInSeconds, float SlowerStaminaDropMultiplier) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartSlowerStaminaDrop");

	struct UBP_CharacterStatsComponent_C_StartSlowerStaminaDrop_Params {
		float EffectDurationInSeconds;			//Offset: 0 | ElementSize: 4
		float SlowerStaminaDropMultiplier;			//Offset: 4 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_StartSlowerStaminaDrop_Params params;
	params.EffectDurationInSeconds = EffectDurationInSeconds;
	params.SlowerStaminaDropMultiplier = SlowerStaminaDropMultiplier;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseSlowerStaminaDropDurationTime
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::DecreaseSlowerStaminaDropDurationTime() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseSlowerStaminaDropDurationTime");

	struct UBP_CharacterStatsComponent_C_DecreaseSlowerStaminaDropDurationTime_Params {
	};
	UBP_CharacterStatsComponent_C_DecreaseSlowerStaminaDropDurationTime_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartMoreHP
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: EffectDurationInSeconds	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MoreHPAmount	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::StartMoreHP(float EffectDurationInSeconds, float MoreHPAmount) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartMoreHP");

	struct UBP_CharacterStatsComponent_C_StartMoreHP_Params {
		float EffectDurationInSeconds;			//Offset: 0 | ElementSize: 4
		float MoreHPAmount;			//Offset: 4 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_StartMoreHP_Params params;
	params.EffectDurationInSeconds = EffectDurationInSeconds;
	params.MoreHPAmount = MoreHPAmount;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseMoreHPDurationWithTime
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::DecreaseMoreHPDurationWithTime() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseMoreHPDurationWithTime");

	struct UBP_CharacterStatsComponent_C_DecreaseMoreHPDurationWithTime_Params {
	};
	UBP_CharacterStatsComponent_C_DecreaseMoreHPDurationWithTime_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartTimeHeal
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: EffectDurationInSeconds	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IntensityPerSecond	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::StartTimeHeal(float EffectDurationInSeconds, float IntensityPerSecond) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartTimeHeal");

	struct UBP_CharacterStatsComponent_C_StartTimeHeal_Params {
		float EffectDurationInSeconds;			//Offset: 0 | ElementSize: 4
		float IntensityPerSecond;			//Offset: 4 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_StartTimeHeal_Params params;
	params.EffectDurationInSeconds = EffectDurationInSeconds;
	params.IntensityPerSecond = IntensityPerSecond;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseTimeHealDurationWithTime
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::DecreaseTimeHealDurationWithTime() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseTimeHealDurationWithTime");

	struct UBP_CharacterStatsComponent_C_DecreaseTimeHealDurationWithTime_Params {
	};
	UBP_CharacterStatsComponent_C_DecreaseTimeHealDurationWithTime_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.PotionEffectsTimeLeft
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SeasonSkip	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: TimeSkipped	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::PotionEffectsTimeLeft(bool SeasonSkip, int32_t TimeSkipped) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.PotionEffectsTimeLeft");

	struct UBP_CharacterStatsComponent_C_PotionEffectsTimeLeft_Params {
		bool SeasonSkip;			//Offset: 0 | ElementSize: 1
		int32_t TimeSkipped;			//Offset: 4 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_PotionEffectsTimeLeft_Params params;
	params.SeasonSkip = SeasonSkip;
	params.TimeSkipped = TimeSkipped;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OtherEffectsTimeLeft
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SeasonSkip	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: TimeSkipped	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OtherEffectsTimeLeft(bool SeasonSkip, int32_t TimeSkipped) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OtherEffectsTimeLeft");

	struct UBP_CharacterStatsComponent_C_OtherEffectsTimeLeft_Params {
		bool SeasonSkip;			//Offset: 0 | ElementSize: 1
		int32_t TimeSkipped;			//Offset: 4 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_OtherEffectsTimeLeft_Params params;
	params.SeasonSkip = SeasonSkip;
	params.TimeSkipped = TimeSkipped;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DirtnessIncreasePoison
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Food	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::DirtnessIncreasePoison(float Food) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DirtnessIncreasePoison");

	struct UBP_CharacterStatsComponent_C_DirtnessIncreasePoison_Params {
		float Food;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_DirtnessIncreasePoison_Params params;
	params.Food = Food;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetQuestNPCsSkills
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::SetQuestNPCsSkills(struct FString NPC_ID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetQuestNPCsSkills");

	struct UBP_CharacterStatsComponent_C_SetQuestNPCsSkills_Params {
		struct FString NPC_ID;			//Offset: 0 | ElementSize: 16
	};
	UBP_CharacterStatsComponent_C_SetQuestNPCsSkills_Params params;
	params.NPC_ID = NPC_ID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetQuestPersonality
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::SetQuestPersonality(struct FString NPC_ID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetQuestPersonality");

	struct UBP_CharacterStatsComponent_C_SetQuestPersonality_Params {
		struct FString NPC_ID;			//Offset: 0 | ElementSize: 16
	};
	UBP_CharacterStatsComponent_C_SetQuestPersonality_Params params;
	params.NPC_ID = NPC_ID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IsDrunk
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool UBP_CharacterStatsComponent_C::IsDrunk() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IsDrunk");

	struct UBP_CharacterStatsComponent_C_IsDrunk_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_IsDrunk_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_Talents_Crafting
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnRep_Talents_Crafting() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_Talents_Crafting");

	struct UBP_CharacterStatsComponent_C_OnRep_Talents_Crafting_Params {
	};
	UBP_CharacterStatsComponent_C_OnRep_Talents_Crafting_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetFood
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewValue	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::SetFood(float NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetFood");

	struct UBP_CharacterStatsComponent_C_SetFood_Params {
		float NewValue;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_SetFood_Params params;
	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetHealth
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewValue	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Hit	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Damage_Type	Type: TEnumAsByte<E_DamageType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::SetHealth(float NewValue, bool Hit, TEnumAsByte<E_DamageType> Damage_Type) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetHealth");

	struct UBP_CharacterStatsComponent_C_SetHealth_Params {
		float NewValue;			//Offset: 0 | ElementSize: 4
		bool Hit;			//Offset: 4 | ElementSize: 1
		TEnumAsByte<E_DamageType> Damage_Type;			//Offset: 5 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_SetHealth_Params params;
	params.NewValue = NewValue;
	params.Hit = Hit;
	params.Damage_Type = Damage_Type;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetMaxHealth
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: newMaxHealth	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::SetMaxHealth(float newMaxHealth) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetMaxHealth");

	struct UBP_CharacterStatsComponent_C_SetMaxHealth_Params {
		float newMaxHealth;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_SetMaxHealth_Params params;
	params.newMaxHealth = newMaxHealth;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetWater
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewValue	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::SetWater(float NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetWater");

	struct UBP_CharacterStatsComponent_C_SetWater_Params {
		float NewValue;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_SetWater_Params params;
	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetPoison
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewValue	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::SetPoison(float NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetPoison");

	struct UBP_CharacterStatsComponent_C_SetPoison_Params {
		float NewValue;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_SetPoison_Params params;
	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.HandlePlayerReactions
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::HandlePlayerReactions() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.HandlePlayerReactions");

	struct UBP_CharacterStatsComponent_C_HandlePlayerReactions_Params {
	};
	UBP_CharacterStatsComponent_C_HandlePlayerReactions_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseStaminaLocal
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Stamina	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Ditrtness	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Enough	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::DecreaseStaminaLocal(float Stamina, bool Ditrtness, bool* Enough) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseStaminaLocal");

	struct UBP_CharacterStatsComponent_C_DecreaseStaminaLocal_Params {
		float Stamina;			//Offset: 0 | ElementSize: 4
		bool Ditrtness;			//Offset: 4 | ElementSize: 1
		bool Enough;			//Offset: 5 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_DecreaseStaminaLocal_Params params;
	params.Stamina = Stamina;
	params.Ditrtness = Ditrtness;

	UObject::ProcessEvent(fn, &params);
	if (Enough != nullptr)
		*Enough = params.Enough;
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetName
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Name	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::SetName(struct FText Name) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetName");

	struct UBP_CharacterStatsComponent_C_SetName_Params {
		struct FText Name;			//Offset: 0 | ElementSize: 24
	};
	UBP_CharacterStatsComponent_C_SetName_Params params;
	params.Name = Name;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.ShouldUseCoopStatsProtection
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Value	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::ShouldUseCoopStatsProtection(bool* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.ShouldUseCoopStatsProtection");

	struct UBP_CharacterStatsComponent_C_ShouldUseCoopStatsProtection_Params {
		bool Value;			//Offset: 0 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_ShouldUseCoopStatsProtection_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Value != nullptr)
		*Value = params.Value;
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_Age
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnRep_Age() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_Age");

	struct UBP_CharacterStatsComponent_C_OnRep_Age_Params {
	};
	UBP_CharacterStatsComponent_C_OnRep_Age_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetAlcohol
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewValue	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::SetAlcohol(float NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetAlcohol");

	struct UBP_CharacterStatsComponent_C_SetAlcohol_Params {
		float NewValue;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_SetAlcohol_Params params;
	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_Drunk
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnRep_Drunk() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_Drunk");

	struct UBP_CharacterStatsComponent_C_OnRep_Drunk_Params {
	};
	UBP_CharacterStatsComponent_C_OnRep_Drunk_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_Poisoned
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnRep_Poisoned() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_Poisoned");

	struct UBP_CharacterStatsComponent_C_OnRep_Poisoned_Params {
	};
	UBP_CharacterStatsComponent_C_OnRep_Poisoned_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_TimeHeal
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnRep_TimeHeal() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_TimeHeal");

	struct UBP_CharacterStatsComponent_C_OnRep_TimeHeal_Params {
	};
	UBP_CharacterStatsComponent_C_OnRep_TimeHeal_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_MoreHP
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnRep_MoreHP() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_MoreHP");

	struct UBP_CharacterStatsComponent_C_OnRep_MoreHP_Params {
	};
	UBP_CharacterStatsComponent_C_OnRep_MoreHP_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_TimeUnpoison
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnRep_TimeUnpoison() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_TimeUnpoison");

	struct UBP_CharacterStatsComponent_C_OnRep_TimeUnpoison_Params {
	};
	UBP_CharacterStatsComponent_C_OnRep_TimeUnpoison_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_SlowerStaminaDrop
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnRep_SlowerStaminaDrop() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_SlowerStaminaDrop");

	struct UBP_CharacterStatsComponent_C_OnRep_SlowerStaminaDrop_Params {
	};
	UBP_CharacterStatsComponent_C_OnRep_SlowerStaminaDrop_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_SlowerHungerDrop
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnRep_SlowerHungerDrop() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_SlowerHungerDrop");

	struct UBP_CharacterStatsComponent_C_OnRep_SlowerHungerDrop_Params {
	};
	UBP_CharacterStatsComponent_C_OnRep_SlowerHungerDrop_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_SlowerWaterDrop
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnRep_SlowerWaterDrop() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_SlowerWaterDrop");

	struct UBP_CharacterStatsComponent_C_OnRep_SlowerWaterDrop_Params {
	};
	UBP_CharacterStatsComponent_C_OnRep_SlowerWaterDrop_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_AnimalRepel
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnRep_AnimalRepel() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_AnimalRepel");

	struct UBP_CharacterStatsComponent_C_OnRep_AnimalRepel_Params {
	};
	UBP_CharacterStatsComponent_C_OnRep_AnimalRepel_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_BetterTemperatureTolerance
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnRep_BetterTemperatureTolerance() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_BetterTemperatureTolerance");

	struct UBP_CharacterStatsComponent_C_OnRep_BetterTemperatureTolerance_Params {
	};
	UBP_CharacterStatsComponent_C_OnRep_BetterTemperatureTolerance_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_MoreWeight
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnRep_MoreWeight() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_MoreWeight");

	struct UBP_CharacterStatsComponent_C_OnRep_MoreWeight_Params {
	};
	UBP_CharacterStatsComponent_C_OnRep_MoreWeight_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_MoreDamage
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnRep_MoreDamage() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_MoreDamage");

	struct UBP_CharacterStatsComponent_C_OnRep_MoreDamage_Params {
	};
	UBP_CharacterStatsComponent_C_OnRep_MoreDamage_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_NightVision
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnRep_NightVision() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_NightVision");

	struct UBP_CharacterStatsComponent_C_OnRep_NightVision_Params {
	};
	UBP_CharacterStatsComponent_C_OnRep_NightVision_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_MaxHealth
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnRep_MaxHealth() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_MaxHealth");

	struct UBP_CharacterStatsComponent_C_OnRep_MaxHealth_Params {
	};
	UBP_CharacterStatsComponent_C_OnRep_MaxHealth_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetDiplomacyTalentValueWithStacking
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: TalentIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StartingValue	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MultiplierValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::GetDiplomacyTalentValueWithStacking(int32_t TalentIndex, int32_t StartingValue, int32_t* Value, float* MultiplierValue) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetDiplomacyTalentValueWithStacking");

	struct UBP_CharacterStatsComponent_C_GetDiplomacyTalentValueWithStacking_Params {
		int32_t TalentIndex;			//Offset: 0 | ElementSize: 4
		int32_t StartingValue;			//Offset: 4 | ElementSize: 4
		int32_t Value;			//Offset: 8 | ElementSize: 4
		float MultiplierValue;			//Offset: 12 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_GetDiplomacyTalentValueWithStacking_Params params;
	params.TalentIndex = TalentIndex;
	params.StartingValue = StartingValue;

	UObject::ProcessEvent(fn, &params);
	if (Value != nullptr)
		*Value = params.Value;
	if (MultiplierValue != nullptr)
		*MultiplierValue = params.MultiplierValue;
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetColdProtection
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ColdProtection	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::SetColdProtection(float ColdProtection) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetColdProtection");

	struct UBP_CharacterStatsComponent_C_SetColdProtection_Params {
		float ColdProtection;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_SetColdProtection_Params params;
	params.ColdProtection = ColdProtection;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetHeatProtection
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: HeatProtection	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::SetHeatProtection(float HeatProtection) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetHeatProtection");

	struct UBP_CharacterStatsComponent_C_SetHeatProtection_Params {
		float HeatProtection;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_SetHeatProtection_Params params;
	params.HeatProtection = HeatProtection;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_Dirtiness
// Flags: HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnRep_Dirtiness() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_Dirtiness");

	struct UBP_CharacterStatsComponent_C_OnRep_Dirtiness_Params {
	};
	UBP_CharacterStatsComponent_C_OnRep_Dirtiness_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_Overheating
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnRep_Overheating() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_Overheating");

	struct UBP_CharacterStatsComponent_C_OnRep_Overheating_Params {
	};
	UBP_CharacterStatsComponent_C_OnRep_Overheating_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_Cold
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnRep_Cold() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_Cold");

	struct UBP_CharacterStatsComponent_C_OnRep_Cold_Params {
	};
	UBP_CharacterStatsComponent_C_OnRep_Cold_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_CurrentSensedTemperature
// Flags: HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnRep_CurrentSensedTemperature() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_CurrentSensedTemperature");

	struct UBP_CharacterStatsComponent_C_OnRep_CurrentSensedTemperature_Params {
	};
	UBP_CharacterStatsComponent_C_OnRep_CurrentSensedTemperature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_Poison
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnRep_Poison() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_Poison");

	struct UBP_CharacterStatsComponent_C_OnRep_Poison_Params {
	};
	UBP_CharacterStatsComponent_C_OnRep_Poison_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_Alcohol
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnRep_Alcohol() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_Alcohol");

	struct UBP_CharacterStatsComponent_C_OnRep_Alcohol_Params {
	};
	UBP_CharacterStatsComponent_C_OnRep_Alcohol_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_NoFood
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnRep_NoFood() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_NoFood");

	struct UBP_CharacterStatsComponent_C_OnRep_NoFood_Params {
	};
	UBP_CharacterStatsComponent_C_OnRep_NoFood_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_NoWater
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnRep_NoWater() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_NoWater");

	struct UBP_CharacterStatsComponent_C_OnRep_NoWater_Params {
	};
	UBP_CharacterStatsComponent_C_OnRep_NoWater_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_NoWood
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnRep_NoWood() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_NoWood");

	struct UBP_CharacterStatsComponent_C_OnRep_NoWood_Params {
	};
	UBP_CharacterStatsComponent_C_OnRep_NoWood_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.ClampDirtiness
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ClampedDirtiness	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::ClampDirtiness(float Value, float* ClampedDirtiness) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.ClampDirtiness");

	struct UBP_CharacterStatsComponent_C_ClampDirtiness_Params {
		float Value;			//Offset: 0 | ElementSize: 4
		float ClampedDirtiness;			//Offset: 4 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_ClampDirtiness_Params params;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
	if (ClampedDirtiness != nullptr)
		*ClampedDirtiness = params.ClampedDirtiness;
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetPOI_NPCsSkills
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::SetPOI_NPCsSkills(struct FString NPC_ID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetPOI_NPCsSkills");

	struct UBP_CharacterStatsComponent_C_SetPOI_NPCsSkills_Params {
		struct FString NPC_ID;			//Offset: 0 | ElementSize: 16
	};
	UBP_CharacterStatsComponent_C_SetPOI_NPCsSkills_Params params;
	params.NPC_ID = NPC_ID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetPOI_Personality
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::SetPOI_Personality(struct FString NPC_ID) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetPOI_Personality");

	struct UBP_CharacterStatsComponent_C_SetPOI_Personality_Params {
		struct FString NPC_ID;			//Offset: 0 | ElementSize: 16
	};
	UBP_CharacterStatsComponent_C_SetPOI_Personality_Params params;
	params.NPC_ID = NPC_ID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_CharacterType
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnRep_CharacterType() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_CharacterType");

	struct UBP_CharacterStatsComponent_C_OnRep_CharacterType_Params {
	};
	UBP_CharacterStatsComponent_C_OnRep_CharacterType_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateNPCStamina
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::UpdateNPCStamina() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateNPCStamina");

	struct UBP_CharacterStatsComponent_C_UpdateNPCStamina_Params {
	};
	UBP_CharacterStatsComponent_C_UpdateNPCStamina_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdatePlayerEventMultipliers
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::UpdatePlayerEventMultipliers() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdatePlayerEventMultipliers");

	struct UBP_CharacterStatsComponent_C_UpdatePlayerEventMultipliers_Params {
	};
	UBP_CharacterStatsComponent_C_UpdatePlayerEventMultipliers_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.ResetComponent
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ResetSkillsAndTalents	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::ResetComponent(bool ResetSkillsAndTalents) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.ResetComponent");

	struct UBP_CharacterStatsComponent_C_ResetComponent_Params {
		bool ResetSkillsAndTalents;			//Offset: 0 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_ResetComponent_Params params;
	params.ResetSkillsAndTalents = ResetSkillsAndTalents;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.ResetTalents
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: KeepSkillPoints	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::ResetTalents(bool KeepSkillPoints) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.ResetTalents");

	struct UBP_CharacterStatsComponent_C_ResetTalents_Params {
		bool KeepSkillPoints;			//Offset: 0 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_ResetTalents_Params params;
	params.KeepSkillPoints = KeepSkillPoints;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetEventMultipliers
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: EventMultipliers	Type: struct FST_Event_CharacterMultipliers	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::SetEventMultipliers(struct FST_Event_CharacterMultipliers EventMultipliers) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetEventMultipliers");

	struct UBP_CharacterStatsComponent_C_SetEventMultipliers_Params {
		struct FST_Event_CharacterMultipliers EventMultipliers;			//Offset: 0 | ElementSize: 28
	};
	UBP_CharacterStatsComponent_C_SetEventMultipliers_Params params;
	params.EventMultipliers = EventMultipliers;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateHealth
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
// Name: health	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::UpdateHealth(float health) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateHealth");

	struct UBP_CharacterStatsComponent_C_UpdateHealth_Params {
		float health;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_UpdateHealth_Params params;
	params.health = health;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateMaxHealth
// Flags: Private, BlueprintCallable, BlueprintEvent
// Params:
// Name: MaxHealth	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::UpdateMaxHealth(float MaxHealth) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateMaxHealth");

	struct UBP_CharacterStatsComponent_C_UpdateMaxHealth_Params {
		float MaxHealth;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_UpdateMaxHealth_Params params;
	params.MaxHealth = MaxHealth;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_Health
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::OnRep_Health() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnRep_Health");

	struct UBP_CharacterStatsComponent_C_OnRep_Health_Params {
	};
	UBP_CharacterStatsComponent_C_OnRep_Health_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetStamina_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
float UBP_CharacterStatsComponent_C::GetStamina_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetStamina_BPI");

	struct UBP_CharacterStatsComponent_C_GetStamina_BPI_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_GetStamina_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetMaxHealth_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
float UBP_CharacterStatsComponent_C::GetMaxHealth_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetMaxHealth_BPI");

	struct UBP_CharacterStatsComponent_C_GetMaxHealth_BPI_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_GetMaxHealth_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetHealth_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
float UBP_CharacterStatsComponent_C::GetHealth_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetHealth_BPI");

	struct UBP_CharacterStatsComponent_C_GetHealth_BPI_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_GetHealth_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetSex
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: sex	Type: TEnumAsByte<E_Sex>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::GetSex(TEnumAsByte<E_Sex>* sex) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetSex");

	struct UBP_CharacterStatsComponent_C_GetSex_Params {
		TEnumAsByte<E_Sex> sex;			//Offset: 0 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_GetSex_Params params;

	UObject::ProcessEvent(fn, &params);
	if (sex != nullptr)
		*sex = params.sex;
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetItemSellPriceIncrease
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: PriceIncrease	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::GetItemSellPriceIncrease(float* PriceIncrease) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetItemSellPriceIncrease");

	struct UBP_CharacterStatsComponent_C_GetItemSellPriceIncrease_Params {
		float PriceIncrease;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_GetItemSellPriceIncrease_Params params;

	UObject::ProcessEvent(fn, &params);
	if (PriceIncrease != nullptr)
		*PriceIncrease = params.PriceIncrease;
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetItemBuyPriceDecrease
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: PriceDecrease	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::GetItemBuyPriceDecrease(float* PriceDecrease) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetItemBuyPriceDecrease");

	struct UBP_CharacterStatsComponent_C_GetItemBuyPriceDecrease_Params {
		float PriceDecrease;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_GetItemBuyPriceDecrease_Params params;

	UObject::ProcessEvent(fn, &params);
	if (PriceDecrease != nullptr)
		*PriceDecrease = params.PriceDecrease;
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetAnimalSellPriceIncrease
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: PriceIncrease	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::GetAnimalSellPriceIncrease(float* PriceIncrease) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetAnimalSellPriceIncrease");

	struct UBP_CharacterStatsComponent_C_GetAnimalSellPriceIncrease_Params {
		float PriceIncrease;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_GetAnimalSellPriceIncrease_Params params;

	UObject::ProcessEvent(fn, &params);
	if (PriceIncrease != nullptr)
		*PriceIncrease = params.PriceIncrease;
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetAnimalBuyPriceDecrease
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: PriceDecrease	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::GetAnimalBuyPriceDecrease(float* PriceDecrease) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetAnimalBuyPriceDecrease");

	struct UBP_CharacterStatsComponent_C_GetAnimalBuyPriceDecrease_Params {
		float PriceDecrease;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_GetAnimalBuyPriceDecrease_Params params;

	UObject::ProcessEvent(fn, &params);
	if (PriceDecrease != nullptr)
		*PriceDecrease = params.PriceDecrease;
}

#pragma endregion
}