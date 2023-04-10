#include "../SDK.h"
#include "BP_CharacterStatsComponent_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame UBP_CharacterStatsComponent_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 176);
}
struct FPointerToUberGraphFrame* UBP_CharacterStatsComponent_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 176);
}
void UBP_CharacterStatsComponent_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 176, value);
}
// Member Getter and Setter of Name
// Declaration: struct FText Name
struct FText UBP_CharacterStatsComponent_C::M_GetName() const {
	return Read<struct FText>((byte*)this + 184);
}
struct FText* UBP_CharacterStatsComponent_C::M_PtrGetName() {
	return reinterpret_cast<struct FText*>((byte*)this + 184);
}
void UBP_CharacterStatsComponent_C::M_SetName(const struct FText& value) {
	Write((byte*)this + 184, value);
}
// Member Getter and Setter of Sex
// Declaration: TEnumAsByte<E_Sex> Sex
TEnumAsByte<E_Sex> UBP_CharacterStatsComponent_C::M_GetSex() const {
	return Read<TEnumAsByte<E_Sex>>((byte*)this + 208);
}
TEnumAsByte<E_Sex>* UBP_CharacterStatsComponent_C::M_PtrGetSex() {
	return reinterpret_cast<TEnumAsByte<E_Sex>*>((byte*)this + 208);
}
void UBP_CharacterStatsComponent_C::M_SetSex(const TEnumAsByte<E_Sex>& value) {
	Write((byte*)this + 208, value);
}
// Member Getter and Setter of Age
// Declaration: float Age
float UBP_CharacterStatsComponent_C::M_GetAge() const {
	return Read<float>((byte*)this + 212);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetAge() {
	return reinterpret_cast<float*>((byte*)this + 212);
}
void UBP_CharacterStatsComponent_C::M_SetAge(const float& value) {
	Write((byte*)this + 212, value);
}
// Member Getter and Setter of MinDeadAge
// Declaration: float MinDeadAge
float UBP_CharacterStatsComponent_C::M_GetMinDeadAge() const {
	return Read<float>((byte*)this + 216);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetMinDeadAge() {
	return reinterpret_cast<float*>((byte*)this + 216);
}
void UBP_CharacterStatsComponent_C::M_SetMinDeadAge(const float& value) {
	Write((byte*)this + 216, value);
}
// Member Getter and Setter of CharacterType
// Declaration: TEnumAsByte<E_CharacterType> CharacterType
TEnumAsByte<E_CharacterType> UBP_CharacterStatsComponent_C::M_GetCharacterType() const {
	return Read<TEnumAsByte<E_CharacterType>>((byte*)this + 220);
}
TEnumAsByte<E_CharacterType>* UBP_CharacterStatsComponent_C::M_PtrGetCharacterType() {
	return reinterpret_cast<TEnumAsByte<E_CharacterType>*>((byte*)this + 220);
}
void UBP_CharacterStatsComponent_C::M_SetCharacterType(const TEnumAsByte<E_CharacterType>& value) {
	Write((byte*)this + 220, value);
}
// Member Getter and Setter of DeadChance
// Declaration: int32_t DeadChance
int32_t UBP_CharacterStatsComponent_C::M_GetDeadChance() const {
	return Read<int32_t>((byte*)this + 224);
}
int32_t* UBP_CharacterStatsComponent_C::M_PtrGetDeadChance() {
	return reinterpret_cast<int32_t*>((byte*)this + 224);
}
void UBP_CharacterStatsComponent_C::M_SetDeadChance(const int32_t& value) {
	Write((byte*)this + 224, value);
}
// Member Getter and Setter of Dead
// Declaration: bool Dead
bool UBP_CharacterStatsComponent_C::M_GetDead() const {
	return Read<bool>((byte*)this + 228);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetDead() {
	return reinterpret_cast<bool*>((byte*)this + 228);
}
void UBP_CharacterStatsComponent_C::M_SetDead(const bool& value) {
	Write((byte*)this + 228, value);
}
// Member Getter and Setter of OnSkillChange
// Declaration: TAssetPtr<class FOnSkillChange__DelegateSignature> OnSkillChange
TAssetPtr<class FOnSkillChange__DelegateSignature> UBP_CharacterStatsComponent_C::M_GetOnSkillChange() const {
	return Read<TAssetPtr<class FOnSkillChange__DelegateSignature>>((byte*)this + 232);
}
TAssetPtr<class FOnSkillChange__DelegateSignature>* UBP_CharacterStatsComponent_C::M_PtrGetOnSkillChange() {
	return reinterpret_cast<TAssetPtr<class FOnSkillChange__DelegateSignature>*>((byte*)this + 232);
}
void UBP_CharacterStatsComponent_C::M_SetOnSkillChange(const TAssetPtr<class FOnSkillChange__DelegateSignature>& value) {
	Write((byte*)this + 232, value);
}
// Member Getter and Setter of CurrentMood
// Declaration: float CurrentMood
float UBP_CharacterStatsComponent_C::M_GetCurrentMood() const {
	return Read<float>((byte*)this + 248);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetCurrentMood() {
	return reinterpret_cast<float*>((byte*)this + 248);
}
void UBP_CharacterStatsComponent_C::M_SetCurrentMood(const float& value) {
	Write((byte*)this + 248, value);
}
// Member Getter and Setter of Talents_Extraction
// Declaration: TArray<struct FST_MasterTalent> Talents_Extraction
TArray<struct FST_MasterTalent> UBP_CharacterStatsComponent_C::M_GetTalents_Extraction() const {
	return Read<TArray<struct FST_MasterTalent>>((byte*)this + 256);
}
TArray<struct FST_MasterTalent>* UBP_CharacterStatsComponent_C::M_PtrGetTalents_Extraction() {
	return reinterpret_cast<TArray<struct FST_MasterTalent>*>((byte*)this + 256);
}
void UBP_CharacterStatsComponent_C::M_SetTalents_Extraction(const TArray<struct FST_MasterTalent>& value) {
	Write((byte*)this + 256, value);
}
// Member Getter and Setter of Talents_Hunting
// Declaration: TArray<struct FST_MasterTalent> Talents_Hunting
TArray<struct FST_MasterTalent> UBP_CharacterStatsComponent_C::M_GetTalents_Hunting() const {
	return Read<TArray<struct FST_MasterTalent>>((byte*)this + 272);
}
TArray<struct FST_MasterTalent>* UBP_CharacterStatsComponent_C::M_PtrGetTalents_Hunting() {
	return reinterpret_cast<TArray<struct FST_MasterTalent>*>((byte*)this + 272);
}
void UBP_CharacterStatsComponent_C::M_SetTalents_Hunting(const TArray<struct FST_MasterTalent>& value) {
	Write((byte*)this + 272, value);
}
// Member Getter and Setter of Talents_Farming
// Declaration: TArray<struct FST_MasterTalent> Talents_Farming
TArray<struct FST_MasterTalent> UBP_CharacterStatsComponent_C::M_GetTalents_Farming() const {
	return Read<TArray<struct FST_MasterTalent>>((byte*)this + 288);
}
TArray<struct FST_MasterTalent>* UBP_CharacterStatsComponent_C::M_PtrGetTalents_Farming() {
	return reinterpret_cast<TArray<struct FST_MasterTalent>*>((byte*)this + 288);
}
void UBP_CharacterStatsComponent_C::M_SetTalents_Farming(const TArray<struct FST_MasterTalent>& value) {
	Write((byte*)this + 288, value);
}
// Member Getter and Setter of Talents_Diplomacy
// Declaration: TArray<struct FST_MasterTalent> Talents_Diplomacy
TArray<struct FST_MasterTalent> UBP_CharacterStatsComponent_C::M_GetTalents_Diplomacy() const {
	return Read<TArray<struct FST_MasterTalent>>((byte*)this + 304);
}
TArray<struct FST_MasterTalent>* UBP_CharacterStatsComponent_C::M_PtrGetTalents_Diplomacy() {
	return reinterpret_cast<TArray<struct FST_MasterTalent>*>((byte*)this + 304);
}
void UBP_CharacterStatsComponent_C::M_SetTalents_Diplomacy(const TArray<struct FST_MasterTalent>& value) {
	Write((byte*)this + 304, value);
}
// Member Getter and Setter of Talents_Survival
// Declaration: TArray<struct FST_MasterTalent> Talents_Survival
TArray<struct FST_MasterTalent> UBP_CharacterStatsComponent_C::M_GetTalents_Survival() const {
	return Read<TArray<struct FST_MasterTalent>>((byte*)this + 320);
}
TArray<struct FST_MasterTalent>* UBP_CharacterStatsComponent_C::M_PtrGetTalents_Survival() {
	return reinterpret_cast<TArray<struct FST_MasterTalent>*>((byte*)this + 320);
}
void UBP_CharacterStatsComponent_C::M_SetTalents_Survival(const TArray<struct FST_MasterTalent>& value) {
	Write((byte*)this + 320, value);
}
// Member Getter and Setter of Talents_Crafting
// Declaration: TArray<struct FST_MasterTalent> Talents_Crafting
TArray<struct FST_MasterTalent> UBP_CharacterStatsComponent_C::M_GetTalents_Crafting() const {
	return Read<TArray<struct FST_MasterTalent>>((byte*)this + 336);
}
TArray<struct FST_MasterTalent>* UBP_CharacterStatsComponent_C::M_PtrGetTalents_Crafting() {
	return reinterpret_cast<TArray<struct FST_MasterTalent>*>((byte*)this + 336);
}
void UBP_CharacterStatsComponent_C::M_SetTalents_Crafting(const TArray<struct FST_MasterTalent>& value) {
	Write((byte*)this + 336, value);
}
// Member Getter and Setter of ExtractionS
// Declaration: struct FST_Skills ExtractionS
struct FST_Skills UBP_CharacterStatsComponent_C::M_GetExtractionS() const {
	return Read<struct FST_Skills>((byte*)this + 352);
}
struct FST_Skills* UBP_CharacterStatsComponent_C::M_PtrGetExtractionS() {
	return reinterpret_cast<struct FST_Skills*>((byte*)this + 352);
}
void UBP_CharacterStatsComponent_C::M_SetExtractionS(const struct FST_Skills& value) {
	Write((byte*)this + 352, value);
}
// Member Getter and Setter of HuntingS
// Declaration: struct FST_Skills HuntingS
struct FST_Skills UBP_CharacterStatsComponent_C::M_GetHuntingS() const {
	return Read<struct FST_Skills>((byte*)this + 480);
}
struct FST_Skills* UBP_CharacterStatsComponent_C::M_PtrGetHuntingS() {
	return reinterpret_cast<struct FST_Skills*>((byte*)this + 480);
}
void UBP_CharacterStatsComponent_C::M_SetHuntingS(const struct FST_Skills& value) {
	Write((byte*)this + 480, value);
}
// Member Getter and Setter of FarmingS
// Declaration: struct FST_Skills FarmingS
struct FST_Skills UBP_CharacterStatsComponent_C::M_GetFarmingS() const {
	return Read<struct FST_Skills>((byte*)this + 608);
}
struct FST_Skills* UBP_CharacterStatsComponent_C::M_PtrGetFarmingS() {
	return reinterpret_cast<struct FST_Skills*>((byte*)this + 608);
}
void UBP_CharacterStatsComponent_C::M_SetFarmingS(const struct FST_Skills& value) {
	Write((byte*)this + 608, value);
}
// Member Getter and Setter of DiplomacyS
// Declaration: struct FST_Skills DiplomacyS
struct FST_Skills UBP_CharacterStatsComponent_C::M_GetDiplomacyS() const {
	return Read<struct FST_Skills>((byte*)this + 736);
}
struct FST_Skills* UBP_CharacterStatsComponent_C::M_PtrGetDiplomacyS() {
	return reinterpret_cast<struct FST_Skills*>((byte*)this + 736);
}
void UBP_CharacterStatsComponent_C::M_SetDiplomacyS(const struct FST_Skills& value) {
	Write((byte*)this + 736, value);
}
// Member Getter and Setter of SurvivalS
// Declaration: struct FST_Skills SurvivalS
struct FST_Skills UBP_CharacterStatsComponent_C::M_GetSurvivalS() const {
	return Read<struct FST_Skills>((byte*)this + 864);
}
struct FST_Skills* UBP_CharacterStatsComponent_C::M_PtrGetSurvivalS() {
	return reinterpret_cast<struct FST_Skills*>((byte*)this + 864);
}
void UBP_CharacterStatsComponent_C::M_SetSurvivalS(const struct FST_Skills& value) {
	Write((byte*)this + 864, value);
}
// Member Getter and Setter of CraftingS
// Declaration: struct FST_Skills CraftingS
struct FST_Skills UBP_CharacterStatsComponent_C::M_GetCraftingS() const {
	return Read<struct FST_Skills>((byte*)this + 992);
}
struct FST_Skills* UBP_CharacterStatsComponent_C::M_PtrGetCraftingS() {
	return reinterpret_cast<struct FST_Skills*>((byte*)this + 992);
}
void UBP_CharacterStatsComponent_C::M_SetCraftingS(const struct FST_Skills& value) {
	Write((byte*)this + 992, value);
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
// Member Getter and Setter of Health
// Declaration: float Health
float UBP_CharacterStatsComponent_C::M_GetHealth() const {
	return Read<float>((byte*)this + 1344);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetHealth() {
	return reinterpret_cast<float*>((byte*)this + 1344);
}
void UBP_CharacterStatsComponent_C::M_SetHealth(const float& value) {
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
// Member Getter and Setter of EventMultipliers
// Declaration: struct FST_Event_CharacterMultipliers EventMultipliers
struct FST_Event_CharacterMultipliers UBP_CharacterStatsComponent_C::M_GetEventMultipliers() const {
	return Read<struct FST_Event_CharacterMultipliers>((byte*)this + 1668);
}
struct FST_Event_CharacterMultipliers* UBP_CharacterStatsComponent_C::M_PtrGetEventMultipliers() {
	return reinterpret_cast<struct FST_Event_CharacterMultipliers*>((byte*)this + 1668);
}
void UBP_CharacterStatsComponent_C::M_SetEventMultipliers(const struct FST_Event_CharacterMultipliers& value) {
	Write((byte*)this + 1668, value);
}
// Member Getter and Setter of MoodChangeSpeed
// Declaration: int32_t MoodChangeSpeed
int32_t UBP_CharacterStatsComponent_C::M_GetMoodChangeSpeed() const {
	return Read<int32_t>((byte*)this + 1696);
}
int32_t* UBP_CharacterStatsComponent_C::M_PtrGetMoodChangeSpeed() {
	return reinterpret_cast<int32_t*>((byte*)this + 1696);
}
void UBP_CharacterStatsComponent_C::M_SetMoodChangeSpeed(const int32_t& value) {
	Write((byte*)this + 1696, value);
}
// Member Getter and Setter of MoodDirection
// Declaration: TEnumAsByte<E_Directions> MoodDirection
TEnumAsByte<E_Directions> UBP_CharacterStatsComponent_C::M_GetMoodDirection() const {
	return Read<TEnumAsByte<E_Directions>>((byte*)this + 1700);
}
TEnumAsByte<E_Directions>* UBP_CharacterStatsComponent_C::M_PtrGetMoodDirection() {
	return reinterpret_cast<TEnumAsByte<E_Directions>*>((byte*)this + 1700);
}
void UBP_CharacterStatsComponent_C::M_SetMoodDirection(const TEnumAsByte<E_Directions>& value) {
	Write((byte*)this + 1700, value);
}
// Member Getter and Setter of OnFoodChange
// Declaration: TAssetPtr<class FOnFoodChange__DelegateSignature> OnFoodChange
TAssetPtr<class FOnFoodChange__DelegateSignature> UBP_CharacterStatsComponent_C::M_GetOnFoodChange() const {
	return Read<TAssetPtr<class FOnFoodChange__DelegateSignature>>((byte*)this + 1704);
}
TAssetPtr<class FOnFoodChange__DelegateSignature>* UBP_CharacterStatsComponent_C::M_PtrGetOnFoodChange() {
	return reinterpret_cast<TAssetPtr<class FOnFoodChange__DelegateSignature>*>((byte*)this + 1704);
}
void UBP_CharacterStatsComponent_C::M_SetOnFoodChange(const TAssetPtr<class FOnFoodChange__DelegateSignature>& value) {
	Write((byte*)this + 1704, value);
}
// Member Getter and Setter of OnWaterChange
// Declaration: TAssetPtr<class FOnWaterChange__DelegateSignature> OnWaterChange
TAssetPtr<class FOnWaterChange__DelegateSignature> UBP_CharacterStatsComponent_C::M_GetOnWaterChange() const {
	return Read<TAssetPtr<class FOnWaterChange__DelegateSignature>>((byte*)this + 1720);
}
TAssetPtr<class FOnWaterChange__DelegateSignature>* UBP_CharacterStatsComponent_C::M_PtrGetOnWaterChange() {
	return reinterpret_cast<TAssetPtr<class FOnWaterChange__DelegateSignature>*>((byte*)this + 1720);
}
void UBP_CharacterStatsComponent_C::M_SetOnWaterChange(const TAssetPtr<class FOnWaterChange__DelegateSignature>& value) {
	Write((byte*)this + 1720, value);
}
// Member Getter and Setter of WoodcutterStacksTimeOut
// Declaration: float WoodcutterStacksTimeOut
float UBP_CharacterStatsComponent_C::M_GetWoodcutterStacksTimeOut() const {
	return Read<float>((byte*)this + 1736);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetWoodcutterStacksTimeOut() {
	return reinterpret_cast<float*>((byte*)this + 1736);
}
void UBP_CharacterStatsComponent_C::M_SetWoodcutterStacksTimeOut(const float& value) {
	Write((byte*)this + 1736, value);
}
// Member Getter and Setter of FarmerStacks
// Declaration: int32_t FarmerStacks
int32_t UBP_CharacterStatsComponent_C::M_GetFarmerStacks() const {
	return Read<int32_t>((byte*)this + 1740);
}
int32_t* UBP_CharacterStatsComponent_C::M_PtrGetFarmerStacks() {
	return reinterpret_cast<int32_t*>((byte*)this + 1740);
}
void UBP_CharacterStatsComponent_C::M_SetFarmerStacks(const int32_t& value) {
	Write((byte*)this + 1740, value);
}
// Member Getter and Setter of FarmerStacksTimeOut
// Declaration: float FarmerStacksTimeOut
float UBP_CharacterStatsComponent_C::M_GetFarmerStacksTimeOut() const {
	return Read<float>((byte*)this + 1744);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetFarmerStacksTimeOut() {
	return reinterpret_cast<float*>((byte*)this + 1744);
}
void UBP_CharacterStatsComponent_C::M_SetFarmerStacksTimeOut(const float& value) {
	Write((byte*)this + 1744, value);
}
// Member Getter and Setter of BuilderStacks
// Declaration: int32_t BuilderStacks
int32_t UBP_CharacterStatsComponent_C::M_GetBuilderStacks() const {
	return Read<int32_t>((byte*)this + 1748);
}
int32_t* UBP_CharacterStatsComponent_C::M_PtrGetBuilderStacks() {
	return reinterpret_cast<int32_t*>((byte*)this + 1748);
}
void UBP_CharacterStatsComponent_C::M_SetBuilderStacks(const int32_t& value) {
	Write((byte*)this + 1748, value);
}
// Member Getter and Setter of BuilderStacksTimeOut
// Declaration: float BuilderStacksTimeOut
float UBP_CharacterStatsComponent_C::M_GetBuilderStacksTimeOut() const {
	return Read<float>((byte*)this + 1752);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetBuilderStacksTimeOut() {
	return reinterpret_cast<float*>((byte*)this + 1752);
}
void UBP_CharacterStatsComponent_C::M_SetBuilderStacksTimeOut(const float& value) {
	Write((byte*)this + 1752, value);
}
// Member Getter and Setter of IsWaterBlinking
// Declaration: bool IsWaterBlinking
bool UBP_CharacterStatsComponent_C::M_GetIsWaterBlinking() const {
	return Read<bool>((byte*)this + 1756);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetIsWaterBlinking() {
	return reinterpret_cast<bool*>((byte*)this + 1756);
}
void UBP_CharacterStatsComponent_C::M_SetIsWaterBlinking(const bool& value) {
	Write((byte*)this + 1756, value);
}
// Member Getter and Setter of IsFoodBlinking
// Declaration: bool IsFoodBlinking
bool UBP_CharacterStatsComponent_C::M_GetIsFoodBlinking() const {
	return Read<bool>((byte*)this + 1757);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetIsFoodBlinking() {
	return reinterpret_cast<bool*>((byte*)this + 1757);
}
void UBP_CharacterStatsComponent_C::M_SetIsFoodBlinking(const bool& value) {
	Write((byte*)this + 1757, value);
}
// Member Getter and Setter of TimeSinceLastWaterBlink
// Declaration: float TimeSinceLastWaterBlink
float UBP_CharacterStatsComponent_C::M_GetTimeSinceLastWaterBlink() const {
	return Read<float>((byte*)this + 1760);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetTimeSinceLastWaterBlink() {
	return reinterpret_cast<float*>((byte*)this + 1760);
}
void UBP_CharacterStatsComponent_C::M_SetTimeSinceLastWaterBlink(const float& value) {
	Write((byte*)this + 1760, value);
}
// Member Getter and Setter of WaterBlinkingActualTime
// Declaration: float WaterBlinkingActualTime
float UBP_CharacterStatsComponent_C::M_GetWaterBlinkingActualTime() const {
	return Read<float>((byte*)this + 1764);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetWaterBlinkingActualTime() {
	return reinterpret_cast<float*>((byte*)this + 1764);
}
void UBP_CharacterStatsComponent_C::M_SetWaterBlinkingActualTime(const float& value) {
	Write((byte*)this + 1764, value);
}
// Member Getter and Setter of BlinkingUpdateFrequency
// Declaration: float BlinkingUpdateFrequency
float UBP_CharacterStatsComponent_C::M_GetBlinkingUpdateFrequency() const {
	return Read<float>((byte*)this + 1768);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetBlinkingUpdateFrequency() {
	return reinterpret_cast<float*>((byte*)this + 1768);
}
void UBP_CharacterStatsComponent_C::M_SetBlinkingUpdateFrequency(const float& value) {
	Write((byte*)this + 1768, value);
}
// Member Getter and Setter of WaterBlinkTimer
// Declaration: struct FTimerHandle WaterBlinkTimer
struct FTimerHandle UBP_CharacterStatsComponent_C::M_GetWaterBlinkTimer() const {
	return Read<struct FTimerHandle>((byte*)this + 1776);
}
struct FTimerHandle* UBP_CharacterStatsComponent_C::M_PtrGetWaterBlinkTimer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 1776);
}
void UBP_CharacterStatsComponent_C::M_SetWaterBlinkTimer(const struct FTimerHandle& value) {
	Write((byte*)this + 1776, value);
}
// Member Getter and Setter of TimeSinceLastFoodBlink
// Declaration: float TimeSinceLastFoodBlink
float UBP_CharacterStatsComponent_C::M_GetTimeSinceLastFoodBlink() const {
	return Read<float>((byte*)this + 1784);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetTimeSinceLastFoodBlink() {
	return reinterpret_cast<float*>((byte*)this + 1784);
}
void UBP_CharacterStatsComponent_C::M_SetTimeSinceLastFoodBlink(const float& value) {
	Write((byte*)this + 1784, value);
}
// Member Getter and Setter of FoodBlinkingActualTime
// Declaration: float FoodBlinkingActualTime
float UBP_CharacterStatsComponent_C::M_GetFoodBlinkingActualTime() const {
	return Read<float>((byte*)this + 1788);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetFoodBlinkingActualTime() {
	return reinterpret_cast<float*>((byte*)this + 1788);
}
void UBP_CharacterStatsComponent_C::M_SetFoodBlinkingActualTime(const float& value) {
	Write((byte*)this + 1788, value);
}
// Member Getter and Setter of FoodBlinkTimer
// Declaration: struct FTimerHandle FoodBlinkTimer
struct FTimerHandle UBP_CharacterStatsComponent_C::M_GetFoodBlinkTimer() const {
	return Read<struct FTimerHandle>((byte*)this + 1792);
}
struct FTimerHandle* UBP_CharacterStatsComponent_C::M_PtrGetFoodBlinkTimer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 1792);
}
void UBP_CharacterStatsComponent_C::M_SetFoodBlinkTimer(const struct FTimerHandle& value) {
	Write((byte*)this + 1792, value);
}
// Member Getter and Setter of FoodBlinkingProcessTime
// Declaration: float FoodBlinkingProcessTime
float UBP_CharacterStatsComponent_C::M_GetFoodBlinkingProcessTime() const {
	return Read<float>((byte*)this + 1800);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetFoodBlinkingProcessTime() {
	return reinterpret_cast<float*>((byte*)this + 1800);
}
void UBP_CharacterStatsComponent_C::M_SetFoodBlinkingProcessTime(const float& value) {
	Write((byte*)this + 1800, value);
}
// Member Getter and Setter of WaterBlinkingProcessTime
// Declaration: float WaterBlinkingProcessTime
float UBP_CharacterStatsComponent_C::M_GetWaterBlinkingProcessTime() const {
	return Read<float>((byte*)this + 1804);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetWaterBlinkingProcessTime() {
	return reinterpret_cast<float*>((byte*)this + 1804);
}
void UBP_CharacterStatsComponent_C::M_SetWaterBlinkingProcessTime(const float& value) {
	Write((byte*)this + 1804, value);
}
// Member Getter and Setter of Alcohol
// Declaration: float Alcohol
float UBP_CharacterStatsComponent_C::M_GetAlcohol() const {
	return Read<float>((byte*)this + 1808);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetAlcohol() {
	return reinterpret_cast<float*>((byte*)this + 1808);
}
void UBP_CharacterStatsComponent_C::M_SetAlcohol(const float& value) {
	Write((byte*)this + 1808, value);
}
// Member Getter and Setter of AlcoholDecreaseRate
// Declaration: float AlcoholDecreaseRate
float UBP_CharacterStatsComponent_C::M_GetAlcoholDecreaseRate() const {
	return Read<float>((byte*)this + 1812);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetAlcoholDecreaseRate() {
	return reinterpret_cast<float*>((byte*)this + 1812);
}
void UBP_CharacterStatsComponent_C::M_SetAlcoholDecreaseRate(const float& value) {
	Write((byte*)this + 1812, value);
}
// Member Getter and Setter of Drunk
// Declaration: bool Drunk
bool UBP_CharacterStatsComponent_C::M_GetDrunk() const {
	return Read<bool>((byte*)this + 1816);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetDrunk() {
	return reinterpret_cast<bool*>((byte*)this + 1816);
}
void UBP_CharacterStatsComponent_C::M_SetDrunk(const bool& value) {
	Write((byte*)this + 1816, value);
}
// Member Getter and Setter of OnAlcoholChange
// Declaration: TAssetPtr<class FOnAlcoholChange__DelegateSignature> OnAlcoholChange
TAssetPtr<class FOnAlcoholChange__DelegateSignature> UBP_CharacterStatsComponent_C::M_GetOnAlcoholChange() const {
	return Read<TAssetPtr<class FOnAlcoholChange__DelegateSignature>>((byte*)this + 1824);
}
TAssetPtr<class FOnAlcoholChange__DelegateSignature>* UBP_CharacterStatsComponent_C::M_PtrGetOnAlcoholChange() {
	return reinterpret_cast<TAssetPtr<class FOnAlcoholChange__DelegateSignature>*>((byte*)this + 1824);
}
void UBP_CharacterStatsComponent_C::M_SetOnAlcoholChange(const TAssetPtr<class FOnAlcoholChange__DelegateSignature>& value) {
	Write((byte*)this + 1824, value);
}
// Member Getter and Setter of IsPoisonBlinking
// Declaration: bool IsPoisonBlinking
bool UBP_CharacterStatsComponent_C::M_GetIsPoisonBlinking() const {
	return Read<bool>((byte*)this + 1840);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetIsPoisonBlinking() {
	return reinterpret_cast<bool*>((byte*)this + 1840);
}
void UBP_CharacterStatsComponent_C::M_SetIsPoisonBlinking(const bool& value) {
	Write((byte*)this + 1840, value);
}
// Member Getter and Setter of TimeSinceLastPoisonBlink
// Declaration: float TimeSinceLastPoisonBlink
float UBP_CharacterStatsComponent_C::M_GetTimeSinceLastPoisonBlink() const {
	return Read<float>((byte*)this + 1844);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetTimeSinceLastPoisonBlink() {
	return reinterpret_cast<float*>((byte*)this + 1844);
}
void UBP_CharacterStatsComponent_C::M_SetTimeSinceLastPoisonBlink(const float& value) {
	Write((byte*)this + 1844, value);
}
// Member Getter and Setter of PoisonBlinkingActualTime
// Declaration: float PoisonBlinkingActualTime
float UBP_CharacterStatsComponent_C::M_GetPoisonBlinkingActualTime() const {
	return Read<float>((byte*)this + 1848);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetPoisonBlinkingActualTime() {
	return reinterpret_cast<float*>((byte*)this + 1848);
}
void UBP_CharacterStatsComponent_C::M_SetPoisonBlinkingActualTime(const float& value) {
	Write((byte*)this + 1848, value);
}
// Member Getter and Setter of PoisonBlinkTimer
// Declaration: struct FTimerHandle PoisonBlinkTimer
struct FTimerHandle UBP_CharacterStatsComponent_C::M_GetPoisonBlinkTimer() const {
	return Read<struct FTimerHandle>((byte*)this + 1856);
}
struct FTimerHandle* UBP_CharacterStatsComponent_C::M_PtrGetPoisonBlinkTimer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 1856);
}
void UBP_CharacterStatsComponent_C::M_SetPoisonBlinkTimer(const struct FTimerHandle& value) {
	Write((byte*)this + 1856, value);
}
// Member Getter and Setter of PoisonBlinkingProcessTime
// Declaration: float PoisonBlinkingProcessTime
float UBP_CharacterStatsComponent_C::M_GetPoisonBlinkingProcessTime() const {
	return Read<float>((byte*)this + 1864);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetPoisonBlinkingProcessTime() {
	return reinterpret_cast<float*>((byte*)this + 1864);
}
void UBP_CharacterStatsComponent_C::M_SetPoisonBlinkingProcessTime(const float& value) {
	Write((byte*)this + 1864, value);
}
// Member Getter and Setter of SafeLowTemperature
// Declaration: float SafeLowTemperature
float UBP_CharacterStatsComponent_C::M_GetSafeLowTemperature() const {
	return Read<float>((byte*)this + 1868);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetSafeLowTemperature() {
	return reinterpret_cast<float*>((byte*)this + 1868);
}
void UBP_CharacterStatsComponent_C::M_SetSafeLowTemperature(const float& value) {
	Write((byte*)this + 1868, value);
}
// Member Getter and Setter of SafeHighTemperature
// Declaration: float SafeHighTemperature
float UBP_CharacterStatsComponent_C::M_GetSafeHighTemperature() const {
	return Read<float>((byte*)this + 1872);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetSafeHighTemperature() {
	return reinterpret_cast<float*>((byte*)this + 1872);
}
void UBP_CharacterStatsComponent_C::M_SetSafeHighTemperature(const float& value) {
	Write((byte*)this + 1872, value);
}
// Member Getter and Setter of TemperatureToleranceModifier
// Declaration: float TemperatureToleranceModifier
float UBP_CharacterStatsComponent_C::M_GetTemperatureToleranceModifier() const {
	return Read<float>((byte*)this + 1876);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetTemperatureToleranceModifier() {
	return reinterpret_cast<float*>((byte*)this + 1876);
}
void UBP_CharacterStatsComponent_C::M_SetTemperatureToleranceModifier(const float& value) {
	Write((byte*)this + 1876, value);
}
// Member Getter and Setter of Personality
// Declaration: TEnumAsByte<E_NPCPersonality> Personality
TEnumAsByte<E_NPCPersonality> UBP_CharacterStatsComponent_C::M_GetPersonality() const {
	return Read<TEnumAsByte<E_NPCPersonality>>((byte*)this + 1880);
}
TEnumAsByte<E_NPCPersonality>* UBP_CharacterStatsComponent_C::M_PtrGetPersonality() {
	return reinterpret_cast<TEnumAsByte<E_NPCPersonality>*>((byte*)this + 1880);
}
void UBP_CharacterStatsComponent_C::M_SetPersonality(const TEnumAsByte<E_NPCPersonality>& value) {
	Write((byte*)this + 1880, value);
}
// Member Getter and Setter of RazerChromaSystem
// Declaration: class ABP_ChromaManager_C* RazerChromaSystem
class ABP_ChromaManager_C* UBP_CharacterStatsComponent_C::M_GetRazerChromaSystem() const {
	return Read<class ABP_ChromaManager_C*>((byte*)this + 1888);
}
class ABP_ChromaManager_C** UBP_CharacterStatsComponent_C::M_PtrGetRazerChromaSystem() {
	return reinterpret_cast<class ABP_ChromaManager_C**>((byte*)this + 1888);
}
void UBP_CharacterStatsComponent_C::M_SetRazerChromaSystem(const class ABP_ChromaManager_C*& value) {
	Write((byte*)this + 1888, value);
}
// Member Getter and Setter of MoreDamage
// Declaration: bool MoreDamage
bool UBP_CharacterStatsComponent_C::M_GetMoreDamage() const {
	return Read<bool>((byte*)this + 1896);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetMoreDamage() {
	return reinterpret_cast<bool*>((byte*)this + 1896);
}
void UBP_CharacterStatsComponent_C::M_SetMoreDamage(const bool& value) {
	Write((byte*)this + 1896, value);
}
// Member Getter and Setter of MoreDamageTime
// Declaration: float MoreDamageTime
float UBP_CharacterStatsComponent_C::M_GetMoreDamageTime() const {
	return Read<float>((byte*)this + 1900);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetMoreDamageTime() {
	return reinterpret_cast<float*>((byte*)this + 1900);
}
void UBP_CharacterStatsComponent_C::M_SetMoreDamageTime(const float& value) {
	Write((byte*)this + 1900, value);
}
// Member Getter and Setter of NightVision
// Declaration: bool NightVision
bool UBP_CharacterStatsComponent_C::M_GetNightVision() const {
	return Read<bool>((byte*)this + 1904);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetNightVision() {
	return reinterpret_cast<bool*>((byte*)this + 1904);
}
void UBP_CharacterStatsComponent_C::M_SetNightVision(const bool& value) {
	Write((byte*)this + 1904, value);
}
// Member Getter and Setter of NightVisionTime
// Declaration: float NightVisionTime
float UBP_CharacterStatsComponent_C::M_GetNightVisionTime() const {
	return Read<float>((byte*)this + 1908);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetNightVisionTime() {
	return reinterpret_cast<float*>((byte*)this + 1908);
}
void UBP_CharacterStatsComponent_C::M_SetNightVisionTime(const float& value) {
	Write((byte*)this + 1908, value);
}
// Member Getter and Setter of MoreWeight
// Declaration: bool MoreWeight
bool UBP_CharacterStatsComponent_C::M_GetMoreWeight() const {
	return Read<bool>((byte*)this + 1912);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetMoreWeight() {
	return reinterpret_cast<bool*>((byte*)this + 1912);
}
void UBP_CharacterStatsComponent_C::M_SetMoreWeight(const bool& value) {
	Write((byte*)this + 1912, value);
}
// Member Getter and Setter of MoreWeightTime
// Declaration: float MoreWeightTime
float UBP_CharacterStatsComponent_C::M_GetMoreWeightTime() const {
	return Read<float>((byte*)this + 1916);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetMoreWeightTime() {
	return reinterpret_cast<float*>((byte*)this + 1916);
}
void UBP_CharacterStatsComponent_C::M_SetMoreWeightTime(const float& value) {
	Write((byte*)this + 1916, value);
}
// Member Getter and Setter of AnimalRepel
// Declaration: bool AnimalRepel
bool UBP_CharacterStatsComponent_C::M_GetAnimalRepel() const {
	return Read<bool>((byte*)this + 1920);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetAnimalRepel() {
	return reinterpret_cast<bool*>((byte*)this + 1920);
}
void UBP_CharacterStatsComponent_C::M_SetAnimalRepel(const bool& value) {
	Write((byte*)this + 1920, value);
}
// Member Getter and Setter of AnimalRepelTime
// Declaration: float AnimalRepelTime
float UBP_CharacterStatsComponent_C::M_GetAnimalRepelTime() const {
	return Read<float>((byte*)this + 1924);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetAnimalRepelTime() {
	return reinterpret_cast<float*>((byte*)this + 1924);
}
void UBP_CharacterStatsComponent_C::M_SetAnimalRepelTime(const float& value) {
	Write((byte*)this + 1924, value);
}
// Member Getter and Setter of BetterTemperatureTolerance
// Declaration: bool BetterTemperatureTolerance
bool UBP_CharacterStatsComponent_C::M_GetBetterTemperatureTolerance() const {
	return Read<bool>((byte*)this + 1928);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetBetterTemperatureTolerance() {
	return reinterpret_cast<bool*>((byte*)this + 1928);
}
void UBP_CharacterStatsComponent_C::M_SetBetterTemperatureTolerance(const bool& value) {
	Write((byte*)this + 1928, value);
}
// Member Getter and Setter of BetterTemperatureToleranceTime
// Declaration: float BetterTemperatureToleranceTime
float UBP_CharacterStatsComponent_C::M_GetBetterTemperatureToleranceTime() const {
	return Read<float>((byte*)this + 1932);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetBetterTemperatureToleranceTime() {
	return reinterpret_cast<float*>((byte*)this + 1932);
}
void UBP_CharacterStatsComponent_C::M_SetBetterTemperatureToleranceTime(const float& value) {
	Write((byte*)this + 1932, value);
}
// Member Getter and Setter of SlowerWaterDrop
// Declaration: bool SlowerWaterDrop
bool UBP_CharacterStatsComponent_C::M_GetSlowerWaterDrop() const {
	return Read<bool>((byte*)this + 1936);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetSlowerWaterDrop() {
	return reinterpret_cast<bool*>((byte*)this + 1936);
}
void UBP_CharacterStatsComponent_C::M_SetSlowerWaterDrop(const bool& value) {
	Write((byte*)this + 1936, value);
}
// Member Getter and Setter of SlowerWaterDropTime
// Declaration: float SlowerWaterDropTime
float UBP_CharacterStatsComponent_C::M_GetSlowerWaterDropTime() const {
	return Read<float>((byte*)this + 1940);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetSlowerWaterDropTime() {
	return reinterpret_cast<float*>((byte*)this + 1940);
}
void UBP_CharacterStatsComponent_C::M_SetSlowerWaterDropTime(const float& value) {
	Write((byte*)this + 1940, value);
}
// Member Getter and Setter of SlowerHungerDrop
// Declaration: bool SlowerHungerDrop
bool UBP_CharacterStatsComponent_C::M_GetSlowerHungerDrop() const {
	return Read<bool>((byte*)this + 1944);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetSlowerHungerDrop() {
	return reinterpret_cast<bool*>((byte*)this + 1944);
}
void UBP_CharacterStatsComponent_C::M_SetSlowerHungerDrop(const bool& value) {
	Write((byte*)this + 1944, value);
}
// Member Getter and Setter of SlowerHungerDropTime
// Declaration: float SlowerHungerDropTime
float UBP_CharacterStatsComponent_C::M_GetSlowerHungerDropTime() const {
	return Read<float>((byte*)this + 1948);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetSlowerHungerDropTime() {
	return reinterpret_cast<float*>((byte*)this + 1948);
}
void UBP_CharacterStatsComponent_C::M_SetSlowerHungerDropTime(const float& value) {
	Write((byte*)this + 1948, value);
}
// Member Getter and Setter of SlowerStaminaDrop
// Declaration: bool SlowerStaminaDrop
bool UBP_CharacterStatsComponent_C::M_GetSlowerStaminaDrop() const {
	return Read<bool>((byte*)this + 1952);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetSlowerStaminaDrop() {
	return reinterpret_cast<bool*>((byte*)this + 1952);
}
void UBP_CharacterStatsComponent_C::M_SetSlowerStaminaDrop(const bool& value) {
	Write((byte*)this + 1952, value);
}
// Member Getter and Setter of SlowerStaminaDropTime
// Declaration: float SlowerStaminaDropTime
float UBP_CharacterStatsComponent_C::M_GetSlowerStaminaDropTime() const {
	return Read<float>((byte*)this + 1956);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetSlowerStaminaDropTime() {
	return reinterpret_cast<float*>((byte*)this + 1956);
}
void UBP_CharacterStatsComponent_C::M_SetSlowerStaminaDropTime(const float& value) {
	Write((byte*)this + 1956, value);
}
// Member Getter and Setter of TimeHeal
// Declaration: bool TimeHeal
bool UBP_CharacterStatsComponent_C::M_GetTimeHeal() const {
	return Read<bool>((byte*)this + 1960);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetTimeHeal() {
	return reinterpret_cast<bool*>((byte*)this + 1960);
}
void UBP_CharacterStatsComponent_C::M_SetTimeHeal(const bool& value) {
	Write((byte*)this + 1960, value);
}
// Member Getter and Setter of TimeHealTime
// Declaration: float TimeHealTime
float UBP_CharacterStatsComponent_C::M_GetTimeHealTime() const {
	return Read<float>((byte*)this + 1964);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetTimeHealTime() {
	return reinterpret_cast<float*>((byte*)this + 1964);
}
void UBP_CharacterStatsComponent_C::M_SetTimeHealTime(const float& value) {
	Write((byte*)this + 1964, value);
}
// Member Getter and Setter of TimeHealIntensityPerSecond
// Declaration: float TimeHealIntensityPerSecond
float UBP_CharacterStatsComponent_C::M_GetTimeHealIntensityPerSecond() const {
	return Read<float>((byte*)this + 1968);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetTimeHealIntensityPerSecond() {
	return reinterpret_cast<float*>((byte*)this + 1968);
}
void UBP_CharacterStatsComponent_C::M_SetTimeHealIntensityPerSecond(const float& value) {
	Write((byte*)this + 1968, value);
}
// Member Getter and Setter of MoreHP
// Declaration: bool MoreHP
bool UBP_CharacterStatsComponent_C::M_GetMoreHP() const {
	return Read<bool>((byte*)this + 1972);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetMoreHP() {
	return reinterpret_cast<bool*>((byte*)this + 1972);
}
void UBP_CharacterStatsComponent_C::M_SetMoreHP(const bool& value) {
	Write((byte*)this + 1972, value);
}
// Member Getter and Setter of TimePerTimeUpdate
// Declaration: float TimePerTimeUpdate
float UBP_CharacterStatsComponent_C::M_GetTimePerTimeUpdate() const {
	return Read<float>((byte*)this + 1976);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetTimePerTimeUpdate() {
	return reinterpret_cast<float*>((byte*)this + 1976);
}
void UBP_CharacterStatsComponent_C::M_SetTimePerTimeUpdate(const float& value) {
	Write((byte*)this + 1976, value);
}
// Member Getter and Setter of MoreHPTime
// Declaration: float MoreHPTime
float UBP_CharacterStatsComponent_C::M_GetMoreHPTime() const {
	return Read<float>((byte*)this + 1980);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetMoreHPTime() {
	return reinterpret_cast<float*>((byte*)this + 1980);
}
void UBP_CharacterStatsComponent_C::M_SetMoreHPTime(const float& value) {
	Write((byte*)this + 1980, value);
}
// Member Getter and Setter of MoreWeightAmount
// Declaration: float MoreWeightAmount
float UBP_CharacterStatsComponent_C::M_GetMoreWeightAmount() const {
	return Read<float>((byte*)this + 1984);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetMoreWeightAmount() {
	return reinterpret_cast<float*>((byte*)this + 1984);
}
void UBP_CharacterStatsComponent_C::M_SetMoreWeightAmount(const float& value) {
	Write((byte*)this + 1984, value);
}
// Member Getter and Setter of MoreDamageMultiplier
// Declaration: float MoreDamageMultiplier
float UBP_CharacterStatsComponent_C::M_GetMoreDamageMultiplier() const {
	return Read<float>((byte*)this + 1988);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetMoreDamageMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 1988);
}
void UBP_CharacterStatsComponent_C::M_SetMoreDamageMultiplier(const float& value) {
	Write((byte*)this + 1988, value);
}
// Member Getter and Setter of SlowerWaterDropMultiplier
// Declaration: float SlowerWaterDropMultiplier
float UBP_CharacterStatsComponent_C::M_GetSlowerWaterDropMultiplier() const {
	return Read<float>((byte*)this + 1992);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetSlowerWaterDropMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 1992);
}
void UBP_CharacterStatsComponent_C::M_SetSlowerWaterDropMultiplier(const float& value) {
	Write((byte*)this + 1992, value);
}
// Member Getter and Setter of SlowerHungerDropMulitplier
// Declaration: float SlowerHungerDropMulitplier
float UBP_CharacterStatsComponent_C::M_GetSlowerHungerDropMulitplier() const {
	return Read<float>((byte*)this + 1996);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetSlowerHungerDropMulitplier() {
	return reinterpret_cast<float*>((byte*)this + 1996);
}
void UBP_CharacterStatsComponent_C::M_SetSlowerHungerDropMulitplier(const float& value) {
	Write((byte*)this + 1996, value);
}
// Member Getter and Setter of SlowerStaminaDropMultiplier
// Declaration: float SlowerStaminaDropMultiplier
float UBP_CharacterStatsComponent_C::M_GetSlowerStaminaDropMultiplier() const {
	return Read<float>((byte*)this + 2000);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetSlowerStaminaDropMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 2000);
}
void UBP_CharacterStatsComponent_C::M_SetSlowerStaminaDropMultiplier(const float& value) {
	Write((byte*)this + 2000, value);
}
// Member Getter and Setter of MoreHPAmount
// Declaration: float MoreHPAmount
float UBP_CharacterStatsComponent_C::M_GetMoreHPAmount() const {
	return Read<float>((byte*)this + 2004);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetMoreHPAmount() {
	return reinterpret_cast<float*>((byte*)this + 2004);
}
void UBP_CharacterStatsComponent_C::M_SetMoreHPAmount(const float& value) {
	Write((byte*)this + 2004, value);
}
// Member Getter and Setter of BetterTemperatureToleranceAmount
// Declaration: float BetterTemperatureToleranceAmount
float UBP_CharacterStatsComponent_C::M_GetBetterTemperatureToleranceAmount() const {
	return Read<float>((byte*)this + 2008);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetBetterTemperatureToleranceAmount() {
	return reinterpret_cast<float*>((byte*)this + 2008);
}
void UBP_CharacterStatsComponent_C::M_SetBetterTemperatureToleranceAmount(const float& value) {
	Write((byte*)this + 2008, value);
}
// Member Getter and Setter of TimeUnpoison
// Declaration: bool TimeUnpoison
bool UBP_CharacterStatsComponent_C::M_GetTimeUnpoison() const {
	return Read<bool>((byte*)this + 2012);
}
bool* UBP_CharacterStatsComponent_C::M_PtrGetTimeUnpoison() {
	return reinterpret_cast<bool*>((byte*)this + 2012);
}
void UBP_CharacterStatsComponent_C::M_SetTimeUnpoison(const bool& value) {
	Write((byte*)this + 2012, value);
}
// Member Getter and Setter of TimeUnpoisonTime
// Declaration: float TimeUnpoisonTime
float UBP_CharacterStatsComponent_C::M_GetTimeUnpoisonTime() const {
	return Read<float>((byte*)this + 2016);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetTimeUnpoisonTime() {
	return reinterpret_cast<float*>((byte*)this + 2016);
}
void UBP_CharacterStatsComponent_C::M_SetTimeUnpoisonTime(const float& value) {
	Write((byte*)this + 2016, value);
}
// Member Getter and Setter of TimeUnpoisonIntensityPerSecond
// Declaration: float TimeUnpoisonIntensityPerSecond
float UBP_CharacterStatsComponent_C::M_GetTimeUnpoisonIntensityPerSecond() const {
	return Read<float>((byte*)this + 2020);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetTimeUnpoisonIntensityPerSecond() {
	return reinterpret_cast<float*>((byte*)this + 2020);
}
void UBP_CharacterStatsComponent_C::M_SetTimeUnpoisonIntensityPerSecond(const float& value) {
	Write((byte*)this + 2020, value);
}
// Member Getter and Setter of TimeSinceLastTimeHeal
// Declaration: float TimeSinceLastTimeHeal
float UBP_CharacterStatsComponent_C::M_GetTimeSinceLastTimeHeal() const {
	return Read<float>((byte*)this + 2024);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetTimeSinceLastTimeHeal() {
	return reinterpret_cast<float*>((byte*)this + 2024);
}
void UBP_CharacterStatsComponent_C::M_SetTimeSinceLastTimeHeal(const float& value) {
	Write((byte*)this + 2024, value);
}
// Member Getter and Setter of PoisonTimer
// Declaration: struct FTimerHandle PoisonTimer
struct FTimerHandle UBP_CharacterStatsComponent_C::M_GetPoisonTimer() const {
	return Read<struct FTimerHandle>((byte*)this + 2032);
}
struct FTimerHandle* UBP_CharacterStatsComponent_C::M_PtrGetPoisonTimer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 2032);
}
void UBP_CharacterStatsComponent_C::M_SetPoisonTimer(const struct FTimerHandle& value) {
	Write((byte*)this + 2032, value);
}
// Member Getter and Setter of AlcoholTolerance
// Declaration: float AlcoholTolerance
float UBP_CharacterStatsComponent_C::M_GetAlcoholTolerance() const {
	return Read<float>((byte*)this + 2040);
}
float* UBP_CharacterStatsComponent_C::M_PtrGetAlcoholTolerance() {
	return reinterpret_cast<float*>((byte*)this + 2040);
}
void UBP_CharacterStatsComponent_C::M_SetAlcoholTolerance(const float& value) {
	Write((byte*)this + 2040, value);
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
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.NPCsUpdateStamina
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::NPCsUpdateStamina() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.NPCsUpdateStamina");

	struct UBP_CharacterStatsComponent_C_NPCsUpdateStamina_Params {
	};
	UBP_CharacterStatsComponent_C_NPCsUpdateStamina_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.NPCsStopTimer_Stamina
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::NPCsStopTimer_Stamina() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.NPCsStopTimer_Stamina");

	struct UBP_CharacterStatsComponent_C_NPCsStopTimer_Stamina_Params {
	};
	UBP_CharacterStatsComponent_C_NPCsStopTimer_Stamina_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.NPCsStartTimer_Stamina
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::NPCsStartTimer_Stamina() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.NPCsStartTimer_Stamina");

	struct UBP_CharacterStatsComponent_C_NPCsStartTimer_Stamina_Params {
	};
	UBP_CharacterStatsComponent_C_NPCsStartTimer_Stamina_Params params;

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
// Name: IteratorNumber	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::UpdateStats(int32_t IteratorNumber) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateStats");

	struct UBP_CharacterStatsComponent_C_UpdateStats_Params {
		int32_t IteratorNumber;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_UpdateStats_Params params;
	params.IteratorNumber = IteratorNumber;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StopStackCounting
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Woodcutter	Type: TEnumAsByte<E_TalentTrance>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::StopStackCounting(TEnumAsByte<E_TalentTrance> Woodcutter) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StopStackCounting");

	struct UBP_CharacterStatsComponent_C_StopStackCounting_Params {
		TEnumAsByte<E_TalentTrance> Woodcutter;			//Offset: 0 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_StopStackCounting_Params params;
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
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartStackCounting
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: WoodcutterTrance_	Type: TEnumAsByte<E_TalentTrance>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TranceTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::StartStackCounting(TEnumAsByte<E_TalentTrance> WoodcutterTrance_, float TranceTime) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartStackCounting");

	struct UBP_CharacterStatsComponent_C_StartStackCounting_Params {
		TEnumAsByte<E_TalentTrance> WoodcutterTrance_;			//Offset: 0 | ElementSize: 1
		float TranceTime;			//Offset: 4 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_StartStackCounting_Params params;
	params.WoodcutterTrance_ = WoodcutterTrance_;
	params.TranceTime = TranceTime;

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
// Name: AffectedbyGameSettings	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::IncreaseExtraction(float Value, bool AffectedByTalent, bool AffectedbyGameSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseExtraction");

	struct UBP_CharacterStatsComponent_C_IncreaseExtraction_Params {
		float Value;			//Offset: 0 | ElementSize: 4
		bool AffectedByTalent;			//Offset: 4 | ElementSize: 1
		bool AffectedbyGameSettings;			//Offset: 5 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_IncreaseExtraction_Params params;
	params.Value = Value;
	params.AffectedByTalent = AffectedByTalent;
	params.AffectedbyGameSettings = AffectedbyGameSettings;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseHunting
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AffectedByTalent	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: AffectedbyGameSettings	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::IncreaseHunting(float Value, bool AffectedByTalent, bool AffectedbyGameSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseHunting");

	struct UBP_CharacterStatsComponent_C_IncreaseHunting_Params {
		float Value;			//Offset: 0 | ElementSize: 4
		bool AffectedByTalent;			//Offset: 4 | ElementSize: 1
		bool AffectedbyGameSettings;			//Offset: 5 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_IncreaseHunting_Params params;
	params.Value = Value;
	params.AffectedByTalent = AffectedByTalent;
	params.AffectedbyGameSettings = AffectedbyGameSettings;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetInitialStats
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Name	Type: struct FText	Flags: BlueprintVisible, BlueprintReadOnly, Parm
// Name: Sex	Type: TEnumAsByte<E_Sex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Age	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MinDeadAge	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::SetInitialStats(struct FText Name, TEnumAsByte<E_Sex> Sex, float Age, float MinDeadAge) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetInitialStats");

	struct UBP_CharacterStatsComponent_C_SetInitialStats_Params {
		struct FText Name;			//Offset: 0 | ElementSize: 24
		TEnumAsByte<E_Sex> Sex;			//Offset: 24 | ElementSize: 1
		float Age;			//Offset: 28 | ElementSize: 4
		float MinDeadAge;			//Offset: 32 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_SetInitialStats_Params params;
	params.Name = Name;
	params.Sex = Sex;
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
// Name: AffectedbyGameSettings	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::IncreaseFarming(float Value, bool AffectedByTalent, bool AffectedbyGameSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseFarming");

	struct UBP_CharacterStatsComponent_C_IncreaseFarming_Params {
		float Value;			//Offset: 0 | ElementSize: 4
		bool AffectedByTalent;			//Offset: 4 | ElementSize: 1
		bool AffectedbyGameSettings;			//Offset: 5 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_IncreaseFarming_Params params;
	params.Value = Value;
	params.AffectedByTalent = AffectedByTalent;
	params.AffectedbyGameSettings = AffectedbyGameSettings;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseDiplomacy
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AffectedByTalent	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: AffectedbyGameSettings	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::IncreaseDiplomacy(float Value, bool AffectedByTalent, bool AffectedbyGameSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseDiplomacy");

	struct UBP_CharacterStatsComponent_C_IncreaseDiplomacy_Params {
		float Value;			//Offset: 0 | ElementSize: 4
		bool AffectedByTalent;			//Offset: 4 | ElementSize: 1
		bool AffectedbyGameSettings;			//Offset: 5 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_IncreaseDiplomacy_Params params;
	params.Value = Value;
	params.AffectedByTalent = AffectedByTalent;
	params.AffectedbyGameSettings = AffectedbyGameSettings;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseSurvival
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: AffectedByTalent	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: AffectedbyGameSettings	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::IncreaseSurvival(float Value, bool AffectedByTalent, bool AffectedbyGameSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseSurvival");

	struct UBP_CharacterStatsComponent_C_IncreaseSurvival_Params {
		float Value;			//Offset: 0 | ElementSize: 4
		bool AffectedByTalent;			//Offset: 4 | ElementSize: 1
		bool AffectedbyGameSettings;			//Offset: 5 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_IncreaseSurvival_Params params;
	params.Value = Value;
	params.AffectedByTalent = AffectedByTalent;
	params.AffectedbyGameSettings = AffectedbyGameSettings;

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
// Name: AffectedbyGameSettings	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::IncreaseCrafting(float Value, bool AffectedByCraftingTalent, bool AffectedBySewingTalent, bool AffectedByCookingTalent, bool AffectedbyGameSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseCrafting");

	struct UBP_CharacterStatsComponent_C_IncreaseCrafting_Params {
		float Value;			//Offset: 0 | ElementSize: 4
		bool AffectedByCraftingTalent;			//Offset: 4 | ElementSize: 1
		bool AffectedBySewingTalent;			//Offset: 5 | ElementSize: 1
		bool AffectedByCookingTalent;			//Offset: 6 | ElementSize: 1
		bool AffectedbyGameSettings;			//Offset: 7 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_IncreaseCrafting_Params params;
	params.Value = Value;
	params.AffectedByCraftingTalent = AffectedByCraftingTalent;
	params.AffectedBySewingTalent = AffectedBySewingTalent;
	params.AffectedByCookingTalent = AffectedByCookingTalent;
	params.AffectedbyGameSettings = AffectedbyGameSettings;

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
// Name: AffectedbyGameSettings	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::AddSkills(TEnumAsByte<E_Skills> Skill, float Value, bool AffectedbyGameSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.AddSkills");

	struct UBP_CharacterStatsComponent_C_AddSkills_Params {
		TEnumAsByte<E_Skills> Skill;			//Offset: 0 | ElementSize: 1
		float Value;			//Offset: 4 | ElementSize: 4
		bool AffectedbyGameSettings;			//Offset: 8 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_AddSkills_Params params;
	params.Skill = Skill;
	params.Value = Value;
	params.AffectedbyGameSettings = AffectedbyGameSettings;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetStats
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Name	Type: struct FText	Flags: Parm, OutParm
// Name: Sex	Type: TEnumAsByte<E_Sex>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Age	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MinDeadAge	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CharacterType	Type: TEnumAsByte<E_CharacterType>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Mood	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::GetStats(struct FText* Name, TEnumAsByte<E_Sex>* Sex, float* Age, float* MinDeadAge, TEnumAsByte<E_CharacterType>* CharacterType, float* Mood) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetStats");

	struct UBP_CharacterStatsComponent_C_GetStats_Params {
		struct FText Name;			//Offset: 0 | ElementSize: 24
		TEnumAsByte<E_Sex> Sex;			//Offset: 24 | ElementSize: 1
		float Age;			//Offset: 28 | ElementSize: 4
		float MinDeadAge;			//Offset: 32 | ElementSize: 4
		TEnumAsByte<E_CharacterType> CharacterType;			//Offset: 36 | ElementSize: 1
		float Mood;			//Offset: 40 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_GetStats_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Name != nullptr)
		*Name = params.Name;
	if (Sex != nullptr)
		*Sex = params.Sex;
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
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
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
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
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
// Name: Health	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::IncreaseHealth(float Health) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseHealth");

	struct UBP_CharacterStatsComponent_C_IncreaseHealth_Params {
		float Health;			//Offset: 0 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_IncreaseHealth_Params params;
	params.Health = Health;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseHealth
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Health	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DamageType	Type: TEnumAsByte<E_DamageType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::DecreaseHealth(float Health, TEnumAsByte<E_DamageType> DamageType) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseHealth");

	struct UBP_CharacterStatsComponent_C_DecreaseHealth_Params {
		float Health;			//Offset: 0 | ElementSize: 4
		TEnumAsByte<E_DamageType> DamageType;			//Offset: 4 | ElementSize: 1
	};
	UBP_CharacterStatsComponent_C_DecreaseHealth_Params params;
	params.Health = Health;
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
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
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
// Name: Health	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
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
void UBP_CharacterStatsComponent_C::InitLifeStats(float Health, float Stamina, float Food, float water, float Somnolence, float Temperature, float Dirtiness, float Poison, bool Poisoned, float Alcohol) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.InitLifeStats");

	struct UBP_CharacterStatsComponent_C_InitLifeStats_Params {
		float Health;			//Offset: 0 | ElementSize: 4
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
	params.Health = Health;
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
// Name: Health	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DeadChance	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsSick	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IsInjured	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Mood	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::SetStats(float Food, float water, float Health, int32_t DeadChance, bool IsSick, bool IsInjured, float Mood) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetStats");

	struct UBP_CharacterStatsComponent_C_SetStats_Params {
		float Food;			//Offset: 0 | ElementSize: 4
		float water;			//Offset: 4 | ElementSize: 4
		float Health;			//Offset: 8 | ElementSize: 4
		int32_t DeadChance;			//Offset: 12 | ElementSize: 4
		bool IsSick;			//Offset: 16 | ElementSize: 1
		bool IsInjured;			//Offset: 17 | ElementSize: 1
		float Mood;			//Offset: 20 | ElementSize: 4
	};
	UBP_CharacterStatsComponent_C_SetStats_Params params;
	params.Food = Food;
	params.water = water;
	params.Health = Health;
	params.DeadChance = DeadChance;
	params.IsSick = IsSick;
	params.IsInjured = IsInjured;
	params.Mood = Mood;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateSensedTemperature
// Flags: Public, BlueprintCallable, BlueprintEvent
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
// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseHealthWithTime
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_CharacterStatsComponent_C::DecreaseHealthWithTime() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseHealthWithTime");

	struct UBP_CharacterStatsComponent_C_DecreaseHealthWithTime_Params {
	};
	UBP_CharacterStatsComponent_C_DecreaseHealthWithTime_Params params;

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
// Name: Health	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
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
void UBP_CharacterStatsComponent_C::Consume(float Food, float water, float Health, float Stamina, float Poison, float Alcohol, float EffectDurationTime, float HealthPerSecond, float AdditionalMaxHP, float StaminaMultiplier, float FoodMultiplier, float WaterMultiplier, bool TurnOffHarmfulPoison, float PoisonPerSecond, bool NightVision, int32_t TemperatureTolerance, bool SkillsReset, float DamageMultiplier, bool AnimalRepel, float AdditionalWeight) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.Consume");

	struct UBP_CharacterStatsComponent_C_Consume_Params {
		float Food;			//Offset: 0 | ElementSize: 4
		float water;			//Offset: 4 | ElementSize: 4
		float Health;			//Offset: 8 | ElementSize: 4
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
	params.Health = Health;
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
// Flags: Public, BlueprintCallable, BlueprintEvent
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

#pragma endregion
}