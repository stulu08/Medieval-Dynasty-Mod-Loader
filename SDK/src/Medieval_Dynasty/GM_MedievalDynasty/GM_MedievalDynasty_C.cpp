#include "../SDK.h"
#include "GM_MedievalDynasty_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame AGM_MedievalDynasty_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 704);
}
struct FPointerToUberGraphFrame* AGM_MedievalDynasty_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 704);
}
void AGM_MedievalDynasty_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 704, value);
}
// Member Getter and Setter of DefaultSceneRoot
// Declaration: class USceneComponent* DefaultSceneRoot
class USceneComponent* AGM_MedievalDynasty_C::M_GetDefaultSceneRoot() const {
	return Read<class USceneComponent*>((byte*)this + 712);
}
class USceneComponent** AGM_MedievalDynasty_C::M_PtrGetDefaultSceneRoot() {
	return reinterpret_cast<class USceneComponent**>((byte*)this + 712);
}
void AGM_MedievalDynasty_C::M_SetDefaultSceneRoot(const class USceneComponent*& value) {
	Write((byte*)this + 712, value);
}
// Member Getter and Setter of GameInstance
// Declaration: class UGI_MedievalDynasty_C* GameInstance
class UGI_MedievalDynasty_C* AGM_MedievalDynasty_C::M_GetGameInstance() const {
	return Read<class UGI_MedievalDynasty_C*>((byte*)this + 720);
}
class UGI_MedievalDynasty_C** AGM_MedievalDynasty_C::M_PtrGetGameInstance() {
	return reinterpret_cast<class UGI_MedievalDynasty_C**>((byte*)this + 720);
}
void AGM_MedievalDynasty_C::M_SetGameInstance(const class UGI_MedievalDynasty_C*& value) {
	Write((byte*)this + 720, value);
}
// Member Getter and Setter of LoadingScreenReference
// Declaration: class UUserWidget* LoadingScreenReference
class UUserWidget* AGM_MedievalDynasty_C::M_GetLoadingScreenReference() const {
	return Read<class UUserWidget*>((byte*)this + 728);
}
class UUserWidget** AGM_MedievalDynasty_C::M_PtrGetLoadingScreenReference() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 728);
}
void AGM_MedievalDynasty_C::M_SetLoadingScreenReference(const class UUserWidget*& value) {
	Write((byte*)this + 728, value);
}
// Member Getter and Setter of SystemsManagerReference
// Declaration: class ABP_SystemsManager_C* SystemsManagerReference
class ABP_SystemsManager_C* AGM_MedievalDynasty_C::M_GetSystemsManagerReference() const {
	return Read<class ABP_SystemsManager_C*>((byte*)this + 736);
}
class ABP_SystemsManager_C** AGM_MedievalDynasty_C::M_PtrGetSystemsManagerReference() {
	return reinterpret_cast<class ABP_SystemsManager_C**>((byte*)this + 736);
}
void AGM_MedievalDynasty_C::M_SetSystemsManagerReference(const class ABP_SystemsManager_C*& value) {
	Write((byte*)this + 736, value);
}
// Member Getter and Setter of BinkMediaPlayer
// Declaration: class UBinkMediaPlayer* BinkMediaPlayer
class UBinkMediaPlayer* AGM_MedievalDynasty_C::M_GetBinkMediaPlayer() const {
	return Read<class UBinkMediaPlayer*>((byte*)this + 744);
}
class UBinkMediaPlayer** AGM_MedievalDynasty_C::M_PtrGetBinkMediaPlayer() {
	return reinterpret_cast<class UBinkMediaPlayer**>((byte*)this + 744);
}
void AGM_MedievalDynasty_C::M_SetBinkMediaPlayer(const class UBinkMediaPlayer*& value) {
	Write((byte*)this + 744, value);
}
// Member Getter and Setter of Default_DaysPerSeason
// Declaration: int32_t Default_DaysPerSeason
int32_t AGM_MedievalDynasty_C::M_GetDefault_DaysPerSeason() const {
	return Read<int32_t>((byte*)this + 752);
}
int32_t* AGM_MedievalDynasty_C::M_PtrGetDefault_DaysPerSeason() {
	return reinterpret_cast<int32_t*>((byte*)this + 752);
}
void AGM_MedievalDynasty_C::M_SetDefault_DaysPerSeason(const int32_t& value) {
	Write((byte*)this + 752, value);
}
// Member Getter and Setter of DaysPerSeason
// Declaration: int32_t DaysPerSeason
int32_t AGM_MedievalDynasty_C::M_GetDaysPerSeason() const {
	return Read<int32_t>((byte*)this + 756);
}
int32_t* AGM_MedievalDynasty_C::M_PtrGetDaysPerSeason() {
	return reinterpret_cast<int32_t*>((byte*)this + 756);
}
void AGM_MedievalDynasty_C::M_SetDaysPerSeason(const int32_t& value) {
	Write((byte*)this + 756, value);
}
// Member Getter and Setter of Default_TaxMultiplier
// Declaration: float Default_TaxMultiplier
float AGM_MedievalDynasty_C::M_GetDefault_TaxMultiplier() const {
	return Read<float>((byte*)this + 760);
}
float* AGM_MedievalDynasty_C::M_PtrGetDefault_TaxMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 760);
}
void AGM_MedievalDynasty_C::M_SetDefault_TaxMultiplier(const float& value) {
	Write((byte*)this + 760, value);
}
// Member Getter and Setter of TaxMultiplier
// Declaration: float TaxMultiplier
float AGM_MedievalDynasty_C::M_GetTaxMultiplier() const {
	return Read<float>((byte*)this + 764);
}
float* AGM_MedievalDynasty_C::M_PtrGetTaxMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 764);
}
void AGM_MedievalDynasty_C::M_SetTaxMultiplier(const float& value) {
	Write((byte*)this + 764, value);
}
// Member Getter and Setter of Default_BuildingsLimitMultiplier
// Declaration: float Default_BuildingsLimitMultiplier
float AGM_MedievalDynasty_C::M_GetDefault_BuildingsLimitMultiplier() const {
	return Read<float>((byte*)this + 768);
}
float* AGM_MedievalDynasty_C::M_PtrGetDefault_BuildingsLimitMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 768);
}
void AGM_MedievalDynasty_C::M_SetDefault_BuildingsLimitMultiplier(const float& value) {
	Write((byte*)this + 768, value);
}
// Member Getter and Setter of BuildingsLimitMultiplier
// Declaration: float BuildingsLimitMultiplier
float AGM_MedievalDynasty_C::M_GetBuildingsLimitMultiplier() const {
	return Read<float>((byte*)this + 772);
}
float* AGM_MedievalDynasty_C::M_PtrGetBuildingsLimitMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 772);
}
void AGM_MedievalDynasty_C::M_SetBuildingsLimitMultiplier(const float& value) {
	Write((byte*)this + 772, value);
}
// Member Getter and Setter of DaysPerSeason_OnSeasonChange
// Declaration: int32_t DaysPerSeason_OnSeasonChange
int32_t AGM_MedievalDynasty_C::M_GetDaysPerSeason_OnSeasonChange() const {
	return Read<int32_t>((byte*)this + 776);
}
int32_t* AGM_MedievalDynasty_C::M_PtrGetDaysPerSeason_OnSeasonChange() {
	return reinterpret_cast<int32_t*>((byte*)this + 776);
}
void AGM_MedievalDynasty_C::M_SetDaysPerSeason_OnSeasonChange(const int32_t& value) {
	Write((byte*)this + 776, value);
}
// Member Getter and Setter of Default_Events
// Declaration: bool Default_Events
bool AGM_MedievalDynasty_C::M_GetDefault_Events() const {
	return Read<bool>((byte*)this + 780);
}
bool* AGM_MedievalDynasty_C::M_PtrGetDefault_Events() {
	return reinterpret_cast<bool*>((byte*)this + 780);
}
void AGM_MedievalDynasty_C::M_SetDefault_Events(const bool& value) {
	Write((byte*)this + 780, value);
}
// Member Getter and Setter of Events
// Declaration: bool Events
bool AGM_MedievalDynasty_C::M_GetEvents() const {
	return Read<bool>((byte*)this + 781);
}
bool* AGM_MedievalDynasty_C::M_PtrGetEvents() {
	return reinterpret_cast<bool*>((byte*)this + 781);
}
void AGM_MedievalDynasty_C::M_SetEvents(const bool& value) {
	Write((byte*)this + 781, value);
}
// Member Getter and Setter of Default_Bandits
// Declaration: bool Default_Bandits
bool AGM_MedievalDynasty_C::M_GetDefault_Bandits() const {
	return Read<bool>((byte*)this + 782);
}
bool* AGM_MedievalDynasty_C::M_PtrGetDefault_Bandits() {
	return reinterpret_cast<bool*>((byte*)this + 782);
}
void AGM_MedievalDynasty_C::M_SetDefault_Bandits(const bool& value) {
	Write((byte*)this + 782, value);
}
// Member Getter and Setter of Bandits
// Declaration: bool Bandits
bool AGM_MedievalDynasty_C::M_GetBandits() const {
	return Read<bool>((byte*)this + 783);
}
bool* AGM_MedievalDynasty_C::M_PtrGetBandits() {
	return reinterpret_cast<bool*>((byte*)this + 783);
}
void AGM_MedievalDynasty_C::M_SetBandits(const bool& value) {
	Write((byte*)this + 783, value);
}
// Member Getter and Setter of Bandits_OnSeasonChange
// Declaration: bool Bandits_OnSeasonChange
bool AGM_MedievalDynasty_C::M_GetBandits_OnSeasonChange() const {
	return Read<bool>((byte*)this + 784);
}
bool* AGM_MedievalDynasty_C::M_PtrGetBandits_OnSeasonChange() {
	return reinterpret_cast<bool*>((byte*)this + 784);
}
void AGM_MedievalDynasty_C::M_SetBandits_OnSeasonChange(const bool& value) {
	Write((byte*)this + 784, value);
}
// Member Getter and Setter of Default_Birds
// Declaration: bool Default_Birds
bool AGM_MedievalDynasty_C::M_GetDefault_Birds() const {
	return Read<bool>((byte*)this + 785);
}
bool* AGM_MedievalDynasty_C::M_PtrGetDefault_Birds() {
	return reinterpret_cast<bool*>((byte*)this + 785);
}
void AGM_MedievalDynasty_C::M_SetDefault_Birds(const bool& value) {
	Write((byte*)this + 785, value);
}
// Member Getter and Setter of Birds
// Declaration: bool Birds
bool AGM_MedievalDynasty_C::M_GetBirds() const {
	return Read<bool>((byte*)this + 786);
}
bool* AGM_MedievalDynasty_C::M_PtrGetBirds() {
	return reinterpret_cast<bool*>((byte*)this + 786);
}
void AGM_MedievalDynasty_C::M_SetBirds(const bool& value) {
	Write((byte*)this + 786, value);
}
// Member Getter and Setter of Default_UnlimitedHP
// Declaration: bool Default_UnlimitedHP
bool AGM_MedievalDynasty_C::M_GetDefault_UnlimitedHP() const {
	return Read<bool>((byte*)this + 787);
}
bool* AGM_MedievalDynasty_C::M_PtrGetDefault_UnlimitedHP() {
	return reinterpret_cast<bool*>((byte*)this + 787);
}
void AGM_MedievalDynasty_C::M_SetDefault_UnlimitedHP(const bool& value) {
	Write((byte*)this + 787, value);
}
// Member Getter and Setter of UnlimitedHP
// Declaration: bool UnlimitedHP
bool AGM_MedievalDynasty_C::M_GetUnlimitedHP() const {
	return Read<bool>((byte*)this + 788);
}
bool* AGM_MedievalDynasty_C::M_PtrGetUnlimitedHP() {
	return reinterpret_cast<bool*>((byte*)this + 788);
}
void AGM_MedievalDynasty_C::M_SetUnlimitedHP(const bool& value) {
	Write((byte*)this + 788, value);
}
// Member Getter and Setter of Default_UnlimitedStamina
// Declaration: bool Default_UnlimitedStamina
bool AGM_MedievalDynasty_C::M_GetDefault_UnlimitedStamina() const {
	return Read<bool>((byte*)this + 789);
}
bool* AGM_MedievalDynasty_C::M_PtrGetDefault_UnlimitedStamina() {
	return reinterpret_cast<bool*>((byte*)this + 789);
}
void AGM_MedievalDynasty_C::M_SetDefault_UnlimitedStamina(const bool& value) {
	Write((byte*)this + 789, value);
}
// Member Getter and Setter of UnlimitedStamina
// Declaration: bool UnlimitedStamina
bool AGM_MedievalDynasty_C::M_GetUnlimitedStamina() const {
	return Read<bool>((byte*)this + 790);
}
bool* AGM_MedievalDynasty_C::M_PtrGetUnlimitedStamina() {
	return reinterpret_cast<bool*>((byte*)this + 790);
}
void AGM_MedievalDynasty_C::M_SetUnlimitedStamina(const bool& value) {
	Write((byte*)this + 790, value);
}
// Member Getter and Setter of Default_UnlimitedFood
// Declaration: bool Default_UnlimitedFood
bool AGM_MedievalDynasty_C::M_GetDefault_UnlimitedFood() const {
	return Read<bool>((byte*)this + 791);
}
bool* AGM_MedievalDynasty_C::M_PtrGetDefault_UnlimitedFood() {
	return reinterpret_cast<bool*>((byte*)this + 791);
}
void AGM_MedievalDynasty_C::M_SetDefault_UnlimitedFood(const bool& value) {
	Write((byte*)this + 791, value);
}
// Member Getter and Setter of UnlimitedFood
// Declaration: bool UnlimitedFood
bool AGM_MedievalDynasty_C::M_GetUnlimitedFood() const {
	return Read<bool>((byte*)this + 792);
}
bool* AGM_MedievalDynasty_C::M_PtrGetUnlimitedFood() {
	return reinterpret_cast<bool*>((byte*)this + 792);
}
void AGM_MedievalDynasty_C::M_SetUnlimitedFood(const bool& value) {
	Write((byte*)this + 792, value);
}
// Member Getter and Setter of Default_UnlimitedWater
// Declaration: bool Default_UnlimitedWater
bool AGM_MedievalDynasty_C::M_GetDefault_UnlimitedWater() const {
	return Read<bool>((byte*)this + 793);
}
bool* AGM_MedievalDynasty_C::M_PtrGetDefault_UnlimitedWater() {
	return reinterpret_cast<bool*>((byte*)this + 793);
}
void AGM_MedievalDynasty_C::M_SetDefault_UnlimitedWater(const bool& value) {
	Write((byte*)this + 793, value);
}
// Member Getter and Setter of UnlimitedWater
// Declaration: bool UnlimitedWater
bool AGM_MedievalDynasty_C::M_GetUnlimitedWater() const {
	return Read<bool>((byte*)this + 794);
}
bool* AGM_MedievalDynasty_C::M_PtrGetUnlimitedWater() {
	return reinterpret_cast<bool*>((byte*)this + 794);
}
void AGM_MedievalDynasty_C::M_SetUnlimitedWater(const bool& value) {
	Write((byte*)this + 794, value);
}
// Member Getter and Setter of Default_NPCNeeds_FoodMultiplier
// Declaration: float Default_NPCNeeds_FoodMultiplier
float AGM_MedievalDynasty_C::M_GetDefault_NPCNeeds_FoodMultiplier() const {
	return Read<float>((byte*)this + 796);
}
float* AGM_MedievalDynasty_C::M_PtrGetDefault_NPCNeeds_FoodMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 796);
}
void AGM_MedievalDynasty_C::M_SetDefault_NPCNeeds_FoodMultiplier(const float& value) {
	Write((byte*)this + 796, value);
}
// Member Getter and Setter of NPCNeeds_FoodMultiplier
// Declaration: float NPCNeeds_FoodMultiplier
float AGM_MedievalDynasty_C::M_GetNPCNeeds_FoodMultiplier() const {
	return Read<float>((byte*)this + 800);
}
float* AGM_MedievalDynasty_C::M_PtrGetNPCNeeds_FoodMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 800);
}
void AGM_MedievalDynasty_C::M_SetNPCNeeds_FoodMultiplier(const float& value) {
	Write((byte*)this + 800, value);
}
// Member Getter and Setter of NPCNeeds_FoodMultiplier_OnSeasonChange
// Declaration: float NPCNeeds_FoodMultiplier_OnSeasonChange
float AGM_MedievalDynasty_C::M_GetNPCNeeds_FoodMultiplier_OnSeasonChange() const {
	return Read<float>((byte*)this + 804);
}
float* AGM_MedievalDynasty_C::M_PtrGetNPCNeeds_FoodMultiplier_OnSeasonChange() {
	return reinterpret_cast<float*>((byte*)this + 804);
}
void AGM_MedievalDynasty_C::M_SetNPCNeeds_FoodMultiplier_OnSeasonChange(const float& value) {
	Write((byte*)this + 804, value);
}
// Member Getter and Setter of Default_NPCNeeds_WaterMultiplier
// Declaration: float Default_NPCNeeds_WaterMultiplier
float AGM_MedievalDynasty_C::M_GetDefault_NPCNeeds_WaterMultiplier() const {
	return Read<float>((byte*)this + 808);
}
float* AGM_MedievalDynasty_C::M_PtrGetDefault_NPCNeeds_WaterMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 808);
}
void AGM_MedievalDynasty_C::M_SetDefault_NPCNeeds_WaterMultiplier(const float& value) {
	Write((byte*)this + 808, value);
}
// Member Getter and Setter of NPCNeeds_WaterMultiplier
// Declaration: float NPCNeeds_WaterMultiplier
float AGM_MedievalDynasty_C::M_GetNPCNeeds_WaterMultiplier() const {
	return Read<float>((byte*)this + 812);
}
float* AGM_MedievalDynasty_C::M_PtrGetNPCNeeds_WaterMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 812);
}
void AGM_MedievalDynasty_C::M_SetNPCNeeds_WaterMultiplier(const float& value) {
	Write((byte*)this + 812, value);
}
// Member Getter and Setter of NPCNeeds_WaterMultiplier_OnSeasonChange
// Declaration: float NPCNeeds_WaterMultiplier_OnSeasonChange
float AGM_MedievalDynasty_C::M_GetNPCNeeds_WaterMultiplier_OnSeasonChange() const {
	return Read<float>((byte*)this + 816);
}
float* AGM_MedievalDynasty_C::M_PtrGetNPCNeeds_WaterMultiplier_OnSeasonChange() {
	return reinterpret_cast<float*>((byte*)this + 816);
}
void AGM_MedievalDynasty_C::M_SetNPCNeeds_WaterMultiplier_OnSeasonChange(const float& value) {
	Write((byte*)this + 816, value);
}
// Member Getter and Setter of Default_NPCNeeds_WoodMultiplier
// Declaration: float Default_NPCNeeds_WoodMultiplier
float AGM_MedievalDynasty_C::M_GetDefault_NPCNeeds_WoodMultiplier() const {
	return Read<float>((byte*)this + 820);
}
float* AGM_MedievalDynasty_C::M_PtrGetDefault_NPCNeeds_WoodMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 820);
}
void AGM_MedievalDynasty_C::M_SetDefault_NPCNeeds_WoodMultiplier(const float& value) {
	Write((byte*)this + 820, value);
}
// Member Getter and Setter of NPCNeeds_WoodMultiplier
// Declaration: float NPCNeeds_WoodMultiplier
float AGM_MedievalDynasty_C::M_GetNPCNeeds_WoodMultiplier() const {
	return Read<float>((byte*)this + 824);
}
float* AGM_MedievalDynasty_C::M_PtrGetNPCNeeds_WoodMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 824);
}
void AGM_MedievalDynasty_C::M_SetNPCNeeds_WoodMultiplier(const float& value) {
	Write((byte*)this + 824, value);
}
// Member Getter and Setter of Default_AnimalsHPMultiplier
// Declaration: float Default_AnimalsHPMultiplier
float AGM_MedievalDynasty_C::M_GetDefault_AnimalsHPMultiplier() const {
	return Read<float>((byte*)this + 828);
}
float* AGM_MedievalDynasty_C::M_PtrGetDefault_AnimalsHPMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 828);
}
void AGM_MedievalDynasty_C::M_SetDefault_AnimalsHPMultiplier(const float& value) {
	Write((byte*)this + 828, value);
}
// Member Getter and Setter of AnimalsHPMultiplier
// Declaration: float AnimalsHPMultiplier
float AGM_MedievalDynasty_C::M_GetAnimalsHPMultiplier() const {
	return Read<float>((byte*)this + 832);
}
float* AGM_MedievalDynasty_C::M_PtrGetAnimalsHPMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 832);
}
void AGM_MedievalDynasty_C::M_SetAnimalsHPMultiplier(const float& value) {
	Write((byte*)this + 832, value);
}
// Member Getter and Setter of AnimalsHPMultiplier_OnSeasonChange
// Declaration: float AnimalsHPMultiplier_OnSeasonChange
float AGM_MedievalDynasty_C::M_GetAnimalsHPMultiplier_OnSeasonChange() const {
	return Read<float>((byte*)this + 836);
}
float* AGM_MedievalDynasty_C::M_PtrGetAnimalsHPMultiplier_OnSeasonChange() {
	return reinterpret_cast<float*>((byte*)this + 836);
}
void AGM_MedievalDynasty_C::M_SetAnimalsHPMultiplier_OnSeasonChange(const float& value) {
	Write((byte*)this + 836, value);
}
// Member Getter and Setter of Default_AnimalsDamageMultiplier
// Declaration: float Default_AnimalsDamageMultiplier
float AGM_MedievalDynasty_C::M_GetDefault_AnimalsDamageMultiplier() const {
	return Read<float>((byte*)this + 840);
}
float* AGM_MedievalDynasty_C::M_PtrGetDefault_AnimalsDamageMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 840);
}
void AGM_MedievalDynasty_C::M_SetDefault_AnimalsDamageMultiplier(const float& value) {
	Write((byte*)this + 840, value);
}
// Member Getter and Setter of AnimalsDamageMultiplier
// Declaration: float AnimalsDamageMultiplier
float AGM_MedievalDynasty_C::M_GetAnimalsDamageMultiplier() const {
	return Read<float>((byte*)this + 844);
}
float* AGM_MedievalDynasty_C::M_PtrGetAnimalsDamageMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 844);
}
void AGM_MedievalDynasty_C::M_SetAnimalsDamageMultiplier(const float& value) {
	Write((byte*)this + 844, value);
}
// Member Getter and Setter of Default_UnlimitedWeight
// Declaration: bool Default_UnlimitedWeight
bool AGM_MedievalDynasty_C::M_GetDefault_UnlimitedWeight() const {
	return Read<bool>((byte*)this + 848);
}
bool* AGM_MedievalDynasty_C::M_PtrGetDefault_UnlimitedWeight() {
	return reinterpret_cast<bool*>((byte*)this + 848);
}
void AGM_MedievalDynasty_C::M_SetDefault_UnlimitedWeight(const bool& value) {
	Write((byte*)this + 848, value);
}
// Member Getter and Setter of UnlimitedWeight
// Declaration: bool UnlimitedWeight
bool AGM_MedievalDynasty_C::M_GetUnlimitedWeight() const {
	return Read<bool>((byte*)this + 849);
}
bool* AGM_MedievalDynasty_C::M_PtrGetUnlimitedWeight() {
	return reinterpret_cast<bool*>((byte*)this + 849);
}
void AGM_MedievalDynasty_C::M_SetUnlimitedWeight(const bool& value) {
	Write((byte*)this + 849, value);
}
// Member Getter and Setter of Default_Poisoning
// Declaration: bool Default_Poisoning
bool AGM_MedievalDynasty_C::M_GetDefault_Poisoning() const {
	return Read<bool>((byte*)this + 850);
}
bool* AGM_MedievalDynasty_C::M_PtrGetDefault_Poisoning() {
	return reinterpret_cast<bool*>((byte*)this + 850);
}
void AGM_MedievalDynasty_C::M_SetDefault_Poisoning(const bool& value) {
	Write((byte*)this + 850, value);
}
// Member Getter and Setter of Poisoning
// Declaration: bool Poisoning
bool AGM_MedievalDynasty_C::M_GetPoisoning() const {
	return Read<bool>((byte*)this + 851);
}
bool* AGM_MedievalDynasty_C::M_PtrGetPoisoning() {
	return reinterpret_cast<bool*>((byte*)this + 851);
}
void AGM_MedievalDynasty_C::M_SetPoisoning(const bool& value) {
	Write((byte*)this + 851, value);
}
// Member Getter and Setter of Default_Temperature
// Declaration: bool Default_Temperature
bool AGM_MedievalDynasty_C::M_GetDefault_Temperature() const {
	return Read<bool>((byte*)this + 852);
}
bool* AGM_MedievalDynasty_C::M_PtrGetDefault_Temperature() {
	return reinterpret_cast<bool*>((byte*)this + 852);
}
void AGM_MedievalDynasty_C::M_SetDefault_Temperature(const bool& value) {
	Write((byte*)this + 852, value);
}
// Member Getter and Setter of Temperature
// Declaration: bool Temperature
bool AGM_MedievalDynasty_C::M_GetTemperature() const {
	return Read<bool>((byte*)this + 853);
}
bool* AGM_MedievalDynasty_C::M_PtrGetTemperature() {
	return reinterpret_cast<bool*>((byte*)this + 853);
}
void AGM_MedievalDynasty_C::M_SetTemperature(const bool& value) {
	Write((byte*)this + 853, value);
}
// Member Getter and Setter of Default_FastCrafting
// Declaration: bool Default_FastCrafting
bool AGM_MedievalDynasty_C::M_GetDefault_FastCrafting() const {
	return Read<bool>((byte*)this + 854);
}
bool* AGM_MedievalDynasty_C::M_PtrGetDefault_FastCrafting() {
	return reinterpret_cast<bool*>((byte*)this + 854);
}
void AGM_MedievalDynasty_C::M_SetDefault_FastCrafting(const bool& value) {
	Write((byte*)this + 854, value);
}
// Member Getter and Setter of FastCrafting
// Declaration: bool FastCrafting
bool AGM_MedievalDynasty_C::M_GetFastCrafting() const {
	return Read<bool>((byte*)this + 855);
}
bool* AGM_MedievalDynasty_C::M_PtrGetFastCrafting() {
	return reinterpret_cast<bool*>((byte*)this + 855);
}
void AGM_MedievalDynasty_C::M_SetFastCrafting(const bool& value) {
	Write((byte*)this + 855, value);
}
// Member Getter and Setter of Default_XPGainMultiplier
// Declaration: float Default_XPGainMultiplier
float AGM_MedievalDynasty_C::M_GetDefault_XPGainMultiplier() const {
	return Read<float>((byte*)this + 856);
}
float* AGM_MedievalDynasty_C::M_PtrGetDefault_XPGainMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 856);
}
void AGM_MedievalDynasty_C::M_SetDefault_XPGainMultiplier(const float& value) {
	Write((byte*)this + 856, value);
}
// Member Getter and Setter of XPGainMultiplier
// Declaration: float XPGainMultiplier
float AGM_MedievalDynasty_C::M_GetXPGainMultiplier() const {
	return Read<float>((byte*)this + 860);
}
float* AGM_MedievalDynasty_C::M_PtrGetXPGainMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 860);
}
void AGM_MedievalDynasty_C::M_SetXPGainMultiplier(const float& value) {
	Write((byte*)this + 860, value);
}
// Member Getter and Setter of Default_TechnologyGainMultiplier
// Declaration: float Default_TechnologyGainMultiplier
float AGM_MedievalDynasty_C::M_GetDefault_TechnologyGainMultiplier() const {
	return Read<float>((byte*)this + 864);
}
float* AGM_MedievalDynasty_C::M_PtrGetDefault_TechnologyGainMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 864);
}
void AGM_MedievalDynasty_C::M_SetDefault_TechnologyGainMultiplier(const float& value) {
	Write((byte*)this + 864, value);
}
// Member Getter and Setter of TechnologyGainMultiplier
// Declaration: float TechnologyGainMultiplier
float AGM_MedievalDynasty_C::M_GetTechnologyGainMultiplier() const {
	return Read<float>((byte*)this + 868);
}
float* AGM_MedievalDynasty_C::M_PtrGetTechnologyGainMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 868);
}
void AGM_MedievalDynasty_C::M_SetTechnologyGainMultiplier(const float& value) {
	Write((byte*)this + 868, value);
}
// Member Getter and Setter of Default_DynastyReputationGainMultiplier
// Declaration: float Default_DynastyReputationGainMultiplier
float AGM_MedievalDynasty_C::M_GetDefault_DynastyReputationGainMultiplier() const {
	return Read<float>((byte*)this + 872);
}
float* AGM_MedievalDynasty_C::M_PtrGetDefault_DynastyReputationGainMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 872);
}
void AGM_MedievalDynasty_C::M_SetDefault_DynastyReputationGainMultiplier(const float& value) {
	Write((byte*)this + 872, value);
}
// Member Getter and Setter of DynastyReputationGainMultiplier
// Declaration: float DynastyReputationGainMultiplier
float AGM_MedievalDynasty_C::M_GetDynastyReputationGainMultiplier() const {
	return Read<float>((byte*)this + 876);
}
float* AGM_MedievalDynasty_C::M_PtrGetDynastyReputationGainMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 876);
}
void AGM_MedievalDynasty_C::M_SetDynastyReputationGainMultiplier(const float& value) {
	Write((byte*)this + 876, value);
}
// Member Getter and Setter of DefaultStopSpoilForDroppedItems
// Declaration: bool DefaultStopSpoilForDroppedItems
bool AGM_MedievalDynasty_C::M_GetDefaultStopSpoilForDroppedItems() const {
	return Read<bool>((byte*)this + 880);
}
bool* AGM_MedievalDynasty_C::M_PtrGetDefaultStopSpoilForDroppedItems() {
	return reinterpret_cast<bool*>((byte*)this + 880);
}
void AGM_MedievalDynasty_C::M_SetDefaultStopSpoilForDroppedItems(const bool& value) {
	Write((byte*)this + 880, value);
}
// Member Getter and Setter of StopSpoilForDroppedItems
// Declaration: bool StopSpoilForDroppedItems
bool AGM_MedievalDynasty_C::M_GetStopSpoilForDroppedItems() const {
	return Read<bool>((byte*)this + 881);
}
bool* AGM_MedievalDynasty_C::M_PtrGetStopSpoilForDroppedItems() {
	return reinterpret_cast<bool*>((byte*)this + 881);
}
void AGM_MedievalDynasty_C::M_SetStopSpoilForDroppedItems(const bool& value) {
	Write((byte*)this + 881, value);
}
// Member Getter and Setter of DebugTime
// Declaration: struct FDateTime DebugTime
struct FDateTime AGM_MedievalDynasty_C::M_GetDebugTime() const {
	return Read<struct FDateTime>((byte*)this + 888);
}
struct FDateTime* AGM_MedievalDynasty_C::M_PtrGetDebugTime() {
	return reinterpret_cast<struct FDateTime*>((byte*)this + 888);
}
void AGM_MedievalDynasty_C::M_SetDebugTime(const struct FDateTime& value) {
	Write((byte*)this + 888, value);
}
// Member Getter and Setter of SaveGameReference
// Declaration: class USAVE_Game_C* SaveGameReference
class USAVE_Game_C* AGM_MedievalDynasty_C::M_GetSaveGameReference() const {
	return Read<class USAVE_Game_C*>((byte*)this + 896);
}
class USAVE_Game_C** AGM_MedievalDynasty_C::M_PtrGetSaveGameReference() {
	return reinterpret_cast<class USAVE_Game_C**>((byte*)this + 896);
}
void AGM_MedievalDynasty_C::M_SetSaveGameReference(const class USAVE_Game_C*& value) {
	Write((byte*)this + 896, value);
}
// Member Getter and Setter of SaveDataSlotName
// Declaration: struct FString SaveDataSlotName
struct FString AGM_MedievalDynasty_C::M_GetSaveDataSlotName() const {
	return Read<struct FString>((byte*)this + 904);
}
struct FString* AGM_MedievalDynasty_C::M_PtrGetSaveDataSlotName() {
	return reinterpret_cast<struct FString*>((byte*)this + 904);
}
void AGM_MedievalDynasty_C::M_SetSaveDataSlotName(const struct FString& value) {
	Write((byte*)this + 904, value);
}
// Member Getter and Setter of SaveGameSlotName
// Declaration: struct FString SaveGameSlotName
struct FString AGM_MedievalDynasty_C::M_GetSaveGameSlotName() const {
	return Read<struct FString>((byte*)this + 920);
}
struct FString* AGM_MedievalDynasty_C::M_PtrGetSaveGameSlotName() {
	return reinterpret_cast<struct FString*>((byte*)this + 920);
}
void AGM_MedievalDynasty_C::M_SetSaveGameSlotName(const struct FString& value) {
	Write((byte*)this + 920, value);
}
// Member Getter and Setter of TotalDebugTime
// Declaration: struct FDateTime TotalDebugTime
struct FDateTime AGM_MedievalDynasty_C::M_GetTotalDebugTime() const {
	return Read<struct FDateTime>((byte*)this + 936);
}
struct FDateTime* AGM_MedievalDynasty_C::M_PtrGetTotalDebugTime() {
	return reinterpret_cast<struct FDateTime*>((byte*)this + 936);
}
void AGM_MedievalDynasty_C::M_SetTotalDebugTime(const struct FDateTime& value) {
	Write((byte*)this + 936, value);
}
// Member Getter and Setter of IsCutscenePlaying
// Declaration: bool IsCutscenePlaying
bool AGM_MedievalDynasty_C::M_GetIsCutscenePlaying() const {
	return Read<bool>((byte*)this + 944);
}
bool* AGM_MedievalDynasty_C::M_PtrGetIsCutscenePlaying() {
	return reinterpret_cast<bool*>((byte*)this + 944);
}
void AGM_MedievalDynasty_C::M_SetIsCutscenePlaying(const bool& value) {
	Write((byte*)this + 944, value);
}
// Member Getter and Setter of SaveDataExistsTemp
// Declaration: bool SaveDataExistsTemp
bool AGM_MedievalDynasty_C::M_GetSaveDataExistsTemp() const {
	return Read<bool>((byte*)this + 945);
}
bool* AGM_MedievalDynasty_C::M_PtrGetSaveDataExistsTemp() {
	return reinterpret_cast<bool*>((byte*)this + 945);
}
void AGM_MedievalDynasty_C::M_SetSaveDataExistsTemp(const bool& value) {
	Write((byte*)this + 945, value);
}
// Member Getter and Setter of SaveGameExistsTemp
// Declaration: bool SaveGameExistsTemp
bool AGM_MedievalDynasty_C::M_GetSaveGameExistsTemp() const {
	return Read<bool>((byte*)this + 946);
}
bool* AGM_MedievalDynasty_C::M_PtrGetSaveGameExistsTemp() {
	return reinterpret_cast<bool*>((byte*)this + 946);
}
void AGM_MedievalDynasty_C::M_SetSaveGameExistsTemp(const bool& value) {
	Write((byte*)this + 946, value);
}
// Member Getter and Setter of SaveDataRefTemp
// Declaration: class USAVE_Data_C* SaveDataRefTemp
class USAVE_Data_C* AGM_MedievalDynasty_C::M_GetSaveDataRefTemp() const {
	return Read<class USAVE_Data_C*>((byte*)this + 952);
}
class USAVE_Data_C** AGM_MedievalDynasty_C::M_PtrGetSaveDataRefTemp() {
	return reinterpret_cast<class USAVE_Data_C**>((byte*)this + 952);
}
void AGM_MedievalDynasty_C::M_SetSaveDataRefTemp(const class USAVE_Data_C*& value) {
	Write((byte*)this + 952, value);
}
// Member Getter and Setter of SaveGameRefTemp
// Declaration: class USAVE_Game_C* SaveGameRefTemp
class USAVE_Game_C* AGM_MedievalDynasty_C::M_GetSaveGameRefTemp() const {
	return Read<class USAVE_Game_C*>((byte*)this + 960);
}
class USAVE_Game_C** AGM_MedievalDynasty_C::M_PtrGetSaveGameRefTemp() {
	return reinterpret_cast<class USAVE_Game_C**>((byte*)this + 960);
}
void AGM_MedievalDynasty_C::M_SetSaveGameRefTemp(const class USAVE_Game_C*& value) {
	Write((byte*)this + 960, value);
}
// Member Getter and Setter of SaveDataNameTemp
// Declaration: struct FString SaveDataNameTemp
struct FString AGM_MedievalDynasty_C::M_GetSaveDataNameTemp() const {
	return Read<struct FString>((byte*)this + 968);
}
struct FString* AGM_MedievalDynasty_C::M_PtrGetSaveDataNameTemp() {
	return reinterpret_cast<struct FString*>((byte*)this + 968);
}
void AGM_MedievalDynasty_C::M_SetSaveDataNameTemp(const struct FString& value) {
	Write((byte*)this + 968, value);
}
// Member Getter and Setter of SaveGameNameTemp
// Declaration: struct FString SaveGameNameTemp
struct FString AGM_MedievalDynasty_C::M_GetSaveGameNameTemp() const {
	return Read<struct FString>((byte*)this + 984);
}
struct FString* AGM_MedievalDynasty_C::M_PtrGetSaveGameNameTemp() {
	return reinterpret_cast<struct FString*>((byte*)this + 984);
}
void AGM_MedievalDynasty_C::M_SetSaveGameNameTemp(const struct FString& value) {
	Write((byte*)this + 984, value);
}
// Member Getter and Setter of ChangeGameplaySettingsOnSeasonChange
// Declaration: bool ChangeGameplaySettingsOnSeasonChange
bool AGM_MedievalDynasty_C::M_GetChangeGameplaySettingsOnSeasonChange() const {
	return Read<bool>((byte*)this + 1000);
}
bool* AGM_MedievalDynasty_C::M_PtrGetChangeGameplaySettingsOnSeasonChange() {
	return reinterpret_cast<bool*>((byte*)this + 1000);
}
void AGM_MedievalDynasty_C::M_SetChangeGameplaySettingsOnSeasonChange(const bool& value) {
	Write((byte*)this + 1000, value);
}
// Member Getter and Setter of NPCNeeds_WoodMultiplier_OnSeasonChange
// Declaration: float NPCNeeds_WoodMultiplier_OnSeasonChange
float AGM_MedievalDynasty_C::M_GetNPCNeeds_WoodMultiplier_OnSeasonChange() const {
	return Read<float>((byte*)this + 1004);
}
float* AGM_MedievalDynasty_C::M_PtrGetNPCNeeds_WoodMultiplier_OnSeasonChange() {
	return reinterpret_cast<float*>((byte*)this + 1004);
}
void AGM_MedievalDynasty_C::M_SetNPCNeeds_WoodMultiplier_OnSeasonChange(const float& value) {
	Write((byte*)this + 1004, value);
}
// Member Getter and Setter of AnimalsDamageMultiplier_OnSeasonChange
// Declaration: float AnimalsDamageMultiplier_OnSeasonChange
float AGM_MedievalDynasty_C::M_GetAnimalsDamageMultiplier_OnSeasonChange() const {
	return Read<float>((byte*)this + 1008);
}
float* AGM_MedievalDynasty_C::M_PtrGetAnimalsDamageMultiplier_OnSeasonChange() {
	return reinterpret_cast<float*>((byte*)this + 1008);
}
void AGM_MedievalDynasty_C::M_SetAnimalsDamageMultiplier_OnSeasonChange(const float& value) {
	Write((byte*)this + 1008, value);
}
// Member Getter and Setter of SystemLoadingIterator
// Declaration: int32_t SystemLoadingIterator
int32_t AGM_MedievalDynasty_C::M_GetSystemLoadingIterator() const {
	return Read<int32_t>((byte*)this + 1012);
}
int32_t* AGM_MedievalDynasty_C::M_PtrGetSystemLoadingIterator() {
	return reinterpret_cast<int32_t*>((byte*)this + 1012);
}
void AGM_MedievalDynasty_C::M_SetSystemLoadingIterator(const int32_t& value) {
	Write((byte*)this + 1012, value);
}
// Member Getter and Setter of SystemLoadingTask
// Declaration: class UMultiFrameAsyncTask* SystemLoadingTask
class UMultiFrameAsyncTask* AGM_MedievalDynasty_C::M_GetSystemLoadingTask() const {
	return Read<class UMultiFrameAsyncTask*>((byte*)this + 1016);
}
class UMultiFrameAsyncTask** AGM_MedievalDynasty_C::M_PtrGetSystemLoadingTask() {
	return reinterpret_cast<class UMultiFrameAsyncTask**>((byte*)this + 1016);
}
void AGM_MedievalDynasty_C::M_SetSystemLoadingTask(const class UMultiFrameAsyncTask*& value) {
	Write((byte*)this + 1016, value);
}
// Member Getter and Setter of FreeCameraSavedPositions
// Declaration: TArray<struct FVector> FreeCameraSavedPositions
TArray<struct FVector> AGM_MedievalDynasty_C::M_GetFreeCameraSavedPositions() const {
	return Read<TArray<struct FVector>>((byte*)this + 1024);
}
TArray<struct FVector>* AGM_MedievalDynasty_C::M_PtrGetFreeCameraSavedPositions() {
	return reinterpret_cast<TArray<struct FVector>*>((byte*)this + 1024);
}
void AGM_MedievalDynasty_C::M_SetFreeCameraSavedPositions(const TArray<struct FVector>& value) {
	Write((byte*)this + 1024, value);
}
// Member Getter and Setter of FreeCameraSavedRotations
// Declaration: TArray<struct FRotator> FreeCameraSavedRotations
TArray<struct FRotator> AGM_MedievalDynasty_C::M_GetFreeCameraSavedRotations() const {
	return Read<TArray<struct FRotator>>((byte*)this + 1040);
}
TArray<struct FRotator>* AGM_MedievalDynasty_C::M_PtrGetFreeCameraSavedRotations() {
	return reinterpret_cast<TArray<struct FRotator>*>((byte*)this + 1040);
}
void AGM_MedievalDynasty_C::M_SetFreeCameraSavedRotations(const TArray<struct FRotator>& value) {
	Write((byte*)this + 1040, value);
}
// Member Getter and Setter of Default_FastBuilding
// Declaration: bool Default_FastBuilding
bool AGM_MedievalDynasty_C::M_GetDefault_FastBuilding() const {
	return Read<bool>((byte*)this + 1056);
}
bool* AGM_MedievalDynasty_C::M_PtrGetDefault_FastBuilding() {
	return reinterpret_cast<bool*>((byte*)this + 1056);
}
void AGM_MedievalDynasty_C::M_SetDefault_FastBuilding(const bool& value) {
	Write((byte*)this + 1056, value);
}
// Member Getter and Setter of FastBuilding
// Declaration: bool FastBuilding
bool AGM_MedievalDynasty_C::M_GetFastBuilding() const {
	return Read<bool>((byte*)this + 1057);
}
bool* AGM_MedievalDynasty_C::M_PtrGetFastBuilding() {
	return reinterpret_cast<bool*>((byte*)this + 1057);
}
void AGM_MedievalDynasty_C::M_SetFastBuilding(const bool& value) {
	Write((byte*)this + 1057, value);
}
// Member Getter and Setter of Default_FastStorage
// Declaration: bool Default_FastStorage
bool AGM_MedievalDynasty_C::M_GetDefault_FastStorage() const {
	return Read<bool>((byte*)this + 1058);
}
bool* AGM_MedievalDynasty_C::M_PtrGetDefault_FastStorage() {
	return reinterpret_cast<bool*>((byte*)this + 1058);
}
void AGM_MedievalDynasty_C::M_SetDefault_FastStorage(const bool& value) {
	Write((byte*)this + 1058, value);
}
// Member Getter and Setter of FastStorage
// Declaration: bool FastStorage
bool AGM_MedievalDynasty_C::M_GetFastStorage() const {
	return Read<bool>((byte*)this + 1059);
}
bool* AGM_MedievalDynasty_C::M_PtrGetFastStorage() {
	return reinterpret_cast<bool*>((byte*)this + 1059);
}
void AGM_MedievalDynasty_C::M_SetFastStorage(const bool& value) {
	Write((byte*)this + 1059, value);
}
// Member Getter and Setter of Default_StopDestructionOverTime
// Declaration: bool Default_StopDestructionOverTime
bool AGM_MedievalDynasty_C::M_GetDefault_StopDestructionOverTime() const {
	return Read<bool>((byte*)this + 1060);
}
bool* AGM_MedievalDynasty_C::M_PtrGetDefault_StopDestructionOverTime() {
	return reinterpret_cast<bool*>((byte*)this + 1060);
}
void AGM_MedievalDynasty_C::M_SetDefault_StopDestructionOverTime(const bool& value) {
	Write((byte*)this + 1060, value);
}
// Member Getter and Setter of StopDestructionOverTime
// Declaration: bool StopDestructionOverTime
bool AGM_MedievalDynasty_C::M_GetStopDestructionOverTime() const {
	return Read<bool>((byte*)this + 1061);
}
bool* AGM_MedievalDynasty_C::M_PtrGetStopDestructionOverTime() {
	return reinterpret_cast<bool*>((byte*)this + 1061);
}
void AGM_MedievalDynasty_C::M_SetStopDestructionOverTime(const bool& value) {
	Write((byte*)this + 1061, value);
}
// Member Getter and Setter of PlayersList
// Declaration: TArray<class APlayerController*> PlayersList
TArray<class APlayerController*> AGM_MedievalDynasty_C::M_GetPlayersList() const {
	return Read<TArray<class APlayerController*>>((byte*)this + 1064);
}
TArray<class APlayerController*>* AGM_MedievalDynasty_C::M_PtrGetPlayersList() {
	return reinterpret_cast<TArray<class APlayerController*>*>((byte*)this + 1064);
}
void AGM_MedievalDynasty_C::M_SetPlayersList(const TArray<class APlayerController*>& value) {
	Write((byte*)this + 1064, value);
}
// Member Getter and Setter of Multiplayer
// Declaration: bool Multiplayer
bool AGM_MedievalDynasty_C::M_GetMultiplayer() const {
	return Read<bool>((byte*)this + 1080);
}
bool* AGM_MedievalDynasty_C::M_PtrGetMultiplayer() {
	return reinterpret_cast<bool*>((byte*)this + 1080);
}
void AGM_MedievalDynasty_C::M_SetMultiplayer(const bool& value) {
	Write((byte*)this + 1080, value);
}
// Member Getter and Setter of MDGameState
// Declaration: class AGS_GameState_C* MDGameState
class AGS_GameState_C* AGM_MedievalDynasty_C::M_GetMDGameState() const {
	return Read<class AGS_GameState_C*>((byte*)this + 1088);
}
class AGS_GameState_C** AGM_MedievalDynasty_C::M_PtrGetMDGameState() {
	return reinterpret_cast<class AGS_GameState_C**>((byte*)this + 1088);
}
void AGM_MedievalDynasty_C::M_SetMDGameState(const class AGS_GameState_C*& value) {
	Write((byte*)this + 1088, value);
}
// Member Getter and Setter of Default_BanditsHPMultiplier
// Declaration: float Default_BanditsHPMultiplier
float AGM_MedievalDynasty_C::M_GetDefault_BanditsHPMultiplier() const {
	return Read<float>((byte*)this + 1096);
}
float* AGM_MedievalDynasty_C::M_PtrGetDefault_BanditsHPMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 1096);
}
void AGM_MedievalDynasty_C::M_SetDefault_BanditsHPMultiplier(const float& value) {
	Write((byte*)this + 1096, value);
}
// Member Getter and Setter of BanditsHPMultiplier
// Declaration: float BanditsHPMultiplier
float AGM_MedievalDynasty_C::M_GetBanditsHPMultiplier() const {
	return Read<float>((byte*)this + 1100);
}
float* AGM_MedievalDynasty_C::M_PtrGetBanditsHPMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 1100);
}
void AGM_MedievalDynasty_C::M_SetBanditsHPMultiplier(const float& value) {
	Write((byte*)this + 1100, value);
}
// Member Getter and Setter of BanditsHPMultiplier_OnSeasonChange
// Declaration: float BanditsHPMultiplier_OnSeasonChange
float AGM_MedievalDynasty_C::M_GetBanditsHPMultiplier_OnSeasonChange() const {
	return Read<float>((byte*)this + 1104);
}
float* AGM_MedievalDynasty_C::M_PtrGetBanditsHPMultiplier_OnSeasonChange() {
	return reinterpret_cast<float*>((byte*)this + 1104);
}
void AGM_MedievalDynasty_C::M_SetBanditsHPMultiplier_OnSeasonChange(const float& value) {
	Write((byte*)this + 1104, value);
}
// Member Getter and Setter of Default_BanditsDamageMultiplier
// Declaration: float Default_BanditsDamageMultiplier
float AGM_MedievalDynasty_C::M_GetDefault_BanditsDamageMultiplier() const {
	return Read<float>((byte*)this + 1108);
}
float* AGM_MedievalDynasty_C::M_PtrGetDefault_BanditsDamageMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 1108);
}
void AGM_MedievalDynasty_C::M_SetDefault_BanditsDamageMultiplier(const float& value) {
	Write((byte*)this + 1108, value);
}
// Member Getter and Setter of BanditsDamageMultiplier
// Declaration: float BanditsDamageMultiplier
float AGM_MedievalDynasty_C::M_GetBanditsDamageMultiplier() const {
	return Read<float>((byte*)this + 1112);
}
float* AGM_MedievalDynasty_C::M_PtrGetBanditsDamageMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 1112);
}
void AGM_MedievalDynasty_C::M_SetBanditsDamageMultiplier(const float& value) {
	Write((byte*)this + 1112, value);
}
// Member Getter and Setter of BanditsDamageMultiplier_OnSeasonChange
// Declaration: float BanditsDamageMultiplier_OnSeasonChange
float AGM_MedievalDynasty_C::M_GetBanditsDamageMultiplier_OnSeasonChange() const {
	return Read<float>((byte*)this + 1116);
}
float* AGM_MedievalDynasty_C::M_PtrGetBanditsDamageMultiplier_OnSeasonChange() {
	return reinterpret_cast<float*>((byte*)this + 1116);
}
void AGM_MedievalDynasty_C::M_SetBanditsDamageMultiplier_OnSeasonChange(const float& value) {
	Write((byte*)this + 1116, value);
}
// Member Getter and Setter of PlayersColors
// Declaration: TArray<struct FLinearColor> PlayersColors
TArray<struct FLinearColor> AGM_MedievalDynasty_C::M_GetPlayersColors() const {
	return Read<TArray<struct FLinearColor>>((byte*)this + 1120);
}
TArray<struct FLinearColor>* AGM_MedievalDynasty_C::M_PtrGetPlayersColors() {
	return reinterpret_cast<TArray<struct FLinearColor>*>((byte*)this + 1120);
}
void AGM_MedievalDynasty_C::M_SetPlayersColors(const TArray<struct FLinearColor>& value) {
	Write((byte*)this + 1120, value);
}
// Member Getter and Setter of Default_WeaponDurabilityMultiplier
// Declaration: float Default_WeaponDurabilityMultiplier
float AGM_MedievalDynasty_C::M_GetDefault_WeaponDurabilityMultiplier() const {
	return Read<float>((byte*)this + 1136);
}
float* AGM_MedievalDynasty_C::M_PtrGetDefault_WeaponDurabilityMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 1136);
}
void AGM_MedievalDynasty_C::M_SetDefault_WeaponDurabilityMultiplier(const float& value) {
	Write((byte*)this + 1136, value);
}
// Member Getter and Setter of WeaponDurabilityMultiplier
// Declaration: float WeaponDurabilityMultiplier
float AGM_MedievalDynasty_C::M_GetWeaponDurabilityMultiplier() const {
	return Read<float>((byte*)this + 1140);
}
float* AGM_MedievalDynasty_C::M_PtrGetWeaponDurabilityMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 1140);
}
void AGM_MedievalDynasty_C::M_SetWeaponDurabilityMultiplier(const float& value) {
	Write((byte*)this + 1140, value);
}
// Member Getter and Setter of Default_ArmorDurabilityMultiplier
// Declaration: float Default_ArmorDurabilityMultiplier
float AGM_MedievalDynasty_C::M_GetDefault_ArmorDurabilityMultiplier() const {
	return Read<float>((byte*)this + 1144);
}
float* AGM_MedievalDynasty_C::M_PtrGetDefault_ArmorDurabilityMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 1144);
}
void AGM_MedievalDynasty_C::M_SetDefault_ArmorDurabilityMultiplier(const float& value) {
	Write((byte*)this + 1144, value);
}
// Member Getter and Setter of ArmorDurabilityMultiplier
// Declaration: float ArmorDurabilityMultiplier
float AGM_MedievalDynasty_C::M_GetArmorDurabilityMultiplier() const {
	return Read<float>((byte*)this + 1148);
}
float* AGM_MedievalDynasty_C::M_PtrGetArmorDurabilityMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 1148);
}
void AGM_MedievalDynasty_C::M_SetArmorDurabilityMultiplier(const float& value) {
	Write((byte*)this + 1148, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.ExecuteUbergraph_GM_MedievalDynasty
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::ExecuteUbergraph_GM_MedievalDynasty(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.ExecuteUbergraph_GM_MedievalDynasty");

	struct AGM_MedievalDynasty_C_ExecuteUbergraph_GM_MedievalDynasty_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	AGM_MedievalDynasty_C_ExecuteUbergraph_GM_MedievalDynasty_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.SaveLoadTasksEnd
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::SaveLoadTasksEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.SaveLoadTasksEnd");

	struct AGM_MedievalDynasty_C_SaveLoadTasksEnd_Params {
	};
	AGM_MedievalDynasty_C_SaveLoadTasksEnd_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_OnSaveLoad
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::BPI_OnSaveLoad() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_OnSaveLoad");

	struct AGM_MedievalDynasty_C_BPI_OnSaveLoad_Params {
	};
	AGM_MedievalDynasty_C_BPI_OnSaveLoad_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.FinishPlayerSpawn
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerController	Type: class APC_Player_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::FinishPlayerSpawn(class APC_Player_C* PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.FinishPlayerSpawn");

	struct AGM_MedievalDynasty_C_FinishPlayerSpawn_Params {
		class APC_Player_C* PlayerController;			//Offset: 0 | ElementSize: 8
	};
	AGM_MedievalDynasty_C_FinishPlayerSpawn_Params params;
	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.FinishLoadingMultiplayerMapFromSaveFile
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::FinishLoadingMultiplayerMapFromSaveFile() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.FinishLoadingMultiplayerMapFromSaveFile");

	struct AGM_MedievalDynasty_C_FinishLoadingMultiplayerMapFromSaveFile_Params {
	};
	AGM_MedievalDynasty_C_FinishLoadingMultiplayerMapFromSaveFile_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.QuitTasksEnd
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::QuitTasksEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.QuitTasksEnd");

	struct AGM_MedievalDynasty_C_QuitTasksEnd_Params {
	};
	AGM_MedievalDynasty_C_QuitTasksEnd_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.ToMainMenuTasksEnd
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::ToMainMenuTasksEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.ToMainMenuTasksEnd");

	struct AGM_MedievalDynasty_C_ToMainMenuTasksEnd_Params {
	};
	AGM_MedievalDynasty_C_ToMainMenuTasksEnd_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.DisconnectAllOnHostLeave_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Quit	Type: E_SessionEndBehavior	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::DisconnectAllOnHostLeave_BPI(E_SessionEndBehavior Quit) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.DisconnectAllOnHostLeave_BPI");

	struct AGM_MedievalDynasty_C_DisconnectAllOnHostLeave_BPI_Params {
		E_SessionEndBehavior Quit;			//Offset: 0 | ElementSize: 1
	};
	AGM_MedievalDynasty_C_DisconnectAllOnHostLeave_BPI_Params params;
	params.Quit = Quit;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.DisconnectAllClients_Server
// Flags: Net, NetServer, BlueprintCallable, BlueprintEvent
// Params:
// Name: Quit	Type: E_SessionEndBehavior	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::DisconnectAllClients_Server(E_SessionEndBehavior Quit) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.DisconnectAllClients_Server");

	struct AGM_MedievalDynasty_C_DisconnectAllClients_Server_Params {
		E_SessionEndBehavior Quit;			//Offset: 0 | ElementSize: 1
	};
	AGM_MedievalDynasty_C_DisconnectAllClients_Server_Params params;
	params.Quit = Quit;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.LoadMultiplayerMap_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Listen	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::LoadMultiplayerMap_BPI(bool Listen) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.LoadMultiplayerMap_BPI");

	struct AGM_MedievalDynasty_C_LoadMultiplayerMap_BPI_Params {
		bool Listen;			//Offset: 0 | ElementSize: 1
	};
	AGM_MedievalDynasty_C_LoadMultiplayerMap_BPI_Params params;
	params.Listen = Listen;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.SpawnPlayer Server
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerController	Type: class APlayerController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::SpawnPlayer_Server(class APlayerController* PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.SpawnPlayer Server");

	struct AGM_MedievalDynasty_C_SpawnPlayer_Server_Params {
		class APlayerController* PlayerController;			//Offset: 0 | ElementSize: 8
	};
	AGM_MedievalDynasty_C_SpawnPlayer_Server_Params params;
	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.K2_OnLogout
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: ExitingController	Type: class AController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::K2_OnLogout(class AController* ExitingController) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.K2_OnLogout");

	struct AGM_MedievalDynasty_C_K2_OnLogout_Params {
		class AController* ExitingController;			//Offset: 0 | ElementSize: 8
	};
	AGM_MedievalDynasty_C_K2_OnLogout_Params params;
	params.ExitingController = ExitingController;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.K2_PostLogin
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: NewPlayer	Type: class APlayerController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::K2_PostLogin(class APlayerController* NewPlayer) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.K2_PostLogin");

	struct AGM_MedievalDynasty_C_K2_PostLogin_Params {
		class APlayerController* NewPlayer;			//Offset: 0 | ElementSize: 8
	};
	AGM_MedievalDynasty_C_K2_PostLogin_Params params;
	params.NewPlayer = NewPlayer;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.FinishLoadingMultiplayerMap
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::FinishLoadingMultiplayerMap() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.FinishLoadingMultiplayerMap");

	struct AGM_MedievalDynasty_C_FinishLoadingMultiplayerMap_Params {
	};
	AGM_MedievalDynasty_C_FinishLoadingMultiplayerMap_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.LoadMultiplayerMap
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Listen	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::LoadMultiplayerMap(bool Listen) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.LoadMultiplayerMap");

	struct AGM_MedievalDynasty_C_LoadMultiplayerMap_Params {
		bool Listen;			//Offset: 0 | ElementSize: 1
	};
	AGM_MedievalDynasty_C_LoadMultiplayerMap_Params params;
	params.Listen = Listen;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_OnQuitGame
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::BPI_OnQuitGame() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_OnQuitGame");

	struct AGM_MedievalDynasty_C_BPI_OnQuitGame_Params {
	};
	AGM_MedievalDynasty_C_BPI_OnQuitGame_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_OnAutosaveChanged
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::BPI_OnAutosaveChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_OnAutosaveChanged");

	struct AGM_MedievalDynasty_C_BPI_OnAutosaveChanged_Params {
	};
	AGM_MedievalDynasty_C_BPI_OnAutosaveChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_OnChromaChanged
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::BPI_OnChromaChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_OnChromaChanged");

	struct AGM_MedievalDynasty_C_BPI_OnChromaChanged_Params {
	};
	AGM_MedievalDynasty_C_BPI_OnChromaChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_ClearSaveSlot
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SlotName	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::BPI_ClearSaveSlot(struct FString SlotName) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_ClearSaveSlot");

	struct AGM_MedievalDynasty_C_BPI_ClearSaveSlot_Params {
		struct FString SlotName;			//Offset: 0 | ElementSize: 16
	};
	AGM_MedievalDynasty_C_BPI_ClearSaveSlot_Params params;
	params.SlotName = SlotName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_SaveData
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::BPI_SaveData() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_SaveData");

	struct AGM_MedievalDynasty_C_BPI_SaveData_Params {
	};
	AGM_MedievalDynasty_C_BPI_SaveData_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.PlayIntroSound
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: OpenedUrl	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::PlayIntroSound(struct FString OpenedUrl) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.PlayIntroSound");

	struct AGM_MedievalDynasty_C_PlayIntroSound_Params {
		struct FString OpenedUrl;			//Offset: 0 | ElementSize: 16
	};
	AGM_MedievalDynasty_C_PlayIntroSound_Params params;
	params.OpenedUrl = OpenedUrl;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.FinishValleyIntro
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::FinishValleyIntro() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.FinishValleyIntro");

	struct AGM_MedievalDynasty_C_FinishValleyIntro_Params {
	};
	AGM_MedievalDynasty_C_FinishValleyIntro_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.SkipValleyIntro
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::SkipValleyIntro() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.SkipValleyIntro");

	struct AGM_MedievalDynasty_C_SkipValleyIntro_Params {
	};
	AGM_MedievalDynasty_C_SkipValleyIntro_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.ReturnToMainMenu
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: InMainMenu	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::ReturnToMainMenu(bool InMainMenu) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.ReturnToMainMenu");

	struct AGM_MedievalDynasty_C_ReturnToMainMenu_Params {
		bool InMainMenu;			//Offset: 0 | ElementSize: 1
	};
	AGM_MedievalDynasty_C_ReturnToMainMenu_Params params;
	params.InMainMenu = InMainMenu;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.LoadGameMap
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::LoadGameMap() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.LoadGameMap");

	struct AGM_MedievalDynasty_C_LoadGameMap_Params {
	};
	AGM_MedievalDynasty_C_LoadGameMap_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.LoadNewGameMaps
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::LoadNewGameMaps() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.LoadNewGameMaps");

	struct AGM_MedievalDynasty_C_LoadNewGameMaps_Params {
	};
	AGM_MedievalDynasty_C_LoadNewGameMaps_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.LoadMainMenuMaps
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::LoadMainMenuMaps() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.LoadMainMenuMaps");

	struct AGM_MedievalDynasty_C_LoadMainMenuMaps_Params {
	};
	AGM_MedievalDynasty_C_LoadMainMenuMaps_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.ReceiveBeginPlay
// Flags: Event, Protected, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.ReceiveBeginPlay");

	struct AGM_MedievalDynasty_C_ReceiveBeginPlay_Params {
	};
	AGM_MedievalDynasty_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.StartGame
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::StartGame() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.StartGame");

	struct AGM_MedievalDynasty_C_StartGame_Params {
	};
	AGM_MedievalDynasty_C_StartGame_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.InitGameMode
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: load	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::InitGameMode(bool load) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.InitGameMode");

	struct AGM_MedievalDynasty_C_InitGameMode_Params {
		bool load;			//Offset: 0 | ElementSize: 1
	};
	AGM_MedievalDynasty_C_InitGameMode_Params params;
	params.load = load;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.UserConstructionScript
// Flags: Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.UserConstructionScript");

	struct AGM_MedievalDynasty_C_UserConstructionScript_Params {
	};
	AGM_MedievalDynasty_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.SetSystemsManager
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::SetSystemsManager() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.SetSystemsManager");

	struct AGM_MedievalDynasty_C_SetSystemsManager_Params {
	};
	AGM_MedievalDynasty_C_SetSystemsManager_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.CreateMainMenu
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::CreateMainMenu() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.CreateMainMenu");

	struct AGM_MedievalDynasty_C_CreateMainMenu_Params {
	};
	AGM_MedievalDynasty_C_CreateMainMenu_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.RemoveMainMenu
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Delay	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::RemoveMainMenu(float Delay) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.RemoveMainMenu");

	struct AGM_MedievalDynasty_C_RemoveMainMenu_Params {
		float Delay;			//Offset: 0 | ElementSize: 4
	};
	AGM_MedievalDynasty_C_RemoveMainMenu_Params params;
	params.Delay = Delay;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.CreateValleyIntro
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool AGM_MedievalDynasty_C::CreateValleyIntro() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.CreateValleyIntro");

	struct AGM_MedievalDynasty_C_CreateValleyIntro_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AGM_MedievalDynasty_C_CreateValleyIntro_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.RemoveIntro
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Delay	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::RemoveIntro(float Delay) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.RemoveIntro");

	struct AGM_MedievalDynasty_C_RemoveIntro_Params {
		float Delay;			//Offset: 0 | ElementSize: 4
	};
	AGM_MedievalDynasty_C_RemoveIntro_Params params;
	params.Delay = Delay;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.CreateLoadingScreen
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ShowTips	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::CreateLoadingScreen(bool ShowTips) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.CreateLoadingScreen");

	struct AGM_MedievalDynasty_C_CreateLoadingScreen_Params {
		bool ShowTips;			//Offset: 0 | ElementSize: 1
	};
	AGM_MedievalDynasty_C_CreateLoadingScreen_Params params;
	params.ShowTips = ShowTips;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.RemoveLoadingScreen
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::RemoveLoadingScreen() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.RemoveLoadingScreen");

	struct AGM_MedievalDynasty_C_RemoveLoadingScreen_Params {
	};
	AGM_MedievalDynasty_C_RemoveLoadingScreen_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.ResetGameModeSettings
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::ResetGameModeSettings() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.ResetGameModeSettings");

	struct AGM_MedievalDynasty_C_ResetGameModeSettings_Params {
	};
	AGM_MedievalDynasty_C_ResetGameModeSettings_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.LoadGameModeSettings
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::LoadGameModeSettings() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.LoadGameModeSettings");

	struct AGM_MedievalDynasty_C_LoadGameModeSettings_Params {
	};
	AGM_MedievalDynasty_C_LoadGameModeSettings_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.SaveGameModeSettings
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::SaveGameModeSettings(class USAVE_Game_C* SaveReference) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.SaveGameModeSettings");

	struct AGM_MedievalDynasty_C_SaveGameModeSettings_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
	};
	AGM_MedievalDynasty_C_SaveGameModeSettings_Params params;
	params.SaveReference = SaveReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.InitSaveSystem
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::InitSaveSystem() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.InitSaveSystem");

	struct AGM_MedievalDynasty_C_InitSaveSystem_Params {
	};
	AGM_MedievalDynasty_C_InitSaveSystem_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.CheckIfSaveExist
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: SlotName	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: SaveDataExists	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SaveGameExists	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::CheckIfSaveExist(struct FString SlotName, bool* SaveDataExists, bool* SaveGameExists) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.CheckIfSaveExist");

	struct AGM_MedievalDynasty_C_CheckIfSaveExist_Params {
		struct FString SlotName;			//Offset: 0 | ElementSize: 16
		bool SaveDataExists;			//Offset: 16 | ElementSize: 1
		bool SaveGameExists;			//Offset: 17 | ElementSize: 1
	};
	AGM_MedievalDynasty_C_CheckIfSaveExist_Params params;
	params.SlotName = SlotName;

	UObject::ProcessEvent(fn, &params);
	if (SaveDataExists != nullptr)
		*SaveDataExists = params.SaveDataExists;
	if (SaveGameExists != nullptr)
		*SaveGameExists = params.SaveGameExists;
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.GetSaveData
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: SlotName	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: SaveData	Type: class USAVE_Data_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
// Name: SaveGame	Type: class USAVE_Game_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::GetSaveData(struct FString SlotName, class USAVE_Data_C** SaveData, class USAVE_Game_C** SaveGame) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.GetSaveData");

	struct AGM_MedievalDynasty_C_GetSaveData_Params {
		struct FString SlotName;			//Offset: 0 | ElementSize: 16
		class USAVE_Data_C* SaveData;			//Offset: 16 | ElementSize: 8
		class USAVE_Game_C* SaveGame;			//Offset: 24 | ElementSize: 8
	};
	AGM_MedievalDynasty_C_GetSaveData_Params params;
	params.SlotName = SlotName;

	UObject::ProcessEvent(fn, &params);
	if (SaveData != nullptr)
		*SaveData = params.SaveData;
	if (SaveGame != nullptr)
		*SaveGame = params.SaveGame;
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.SaveDebug
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::SaveDebug() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.SaveDebug");

	struct AGM_MedievalDynasty_C_SaveDebug_Params {
	};
	AGM_MedievalDynasty_C_SaveDebug_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.UpdateGameplaySettingsOnSeasonChange
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::UpdateGameplaySettingsOnSeasonChange() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.UpdateGameplaySettingsOnSeasonChange");

	struct AGM_MedievalDynasty_C_UpdateGameplaySettingsOnSeasonChange_Params {
	};
	AGM_MedievalDynasty_C_UpdateGameplaySettingsOnSeasonChange_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.CheckLoginStatusAfterLoad
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::CheckLoginStatusAfterLoad() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.CheckLoginStatusAfterLoad");

	struct AGM_MedievalDynasty_C_CheckLoginStatusAfterLoad_Params {
	};
	AGM_MedievalDynasty_C_CheckLoginStatusAfterLoad_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.SpawnPlayerCharacter_CoOp
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerControllerReference	Type: class APlayerController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::SpawnPlayerCharacter_CoOp(class APlayerController* PlayerControllerReference) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.SpawnPlayerCharacter_CoOp");

	struct AGM_MedievalDynasty_C_SpawnPlayerCharacter_CoOp_Params {
		class APlayerController* PlayerControllerReference;			//Offset: 0 | ElementSize: 8
	};
	AGM_MedievalDynasty_C_SpawnPlayerCharacter_CoOp_Params params;
	params.PlayerControllerReference = PlayerControllerReference;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.SetUnlimitedHP
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewValue	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::SetUnlimitedHP(bool NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.SetUnlimitedHP");

	struct AGM_MedievalDynasty_C_SetUnlimitedHP_Params {
		bool NewValue;			//Offset: 0 | ElementSize: 1
	};
	AGM_MedievalDynasty_C_SetUnlimitedHP_Params params;
	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.SetUnlimitedStamina
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewValue	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::SetUnlimitedStamina(bool NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.SetUnlimitedStamina");

	struct AGM_MedievalDynasty_C_SetUnlimitedStamina_Params {
		bool NewValue;			//Offset: 0 | ElementSize: 1
	};
	AGM_MedievalDynasty_C_SetUnlimitedStamina_Params params;
	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.SetUnlimitedFood
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewValue	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::SetUnlimitedFood(bool NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.SetUnlimitedFood");

	struct AGM_MedievalDynasty_C_SetUnlimitedFood_Params {
		bool NewValue;			//Offset: 0 | ElementSize: 1
	};
	AGM_MedievalDynasty_C_SetUnlimitedFood_Params params;
	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.SetUnlimitedWater
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewValue	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::SetUnlimitedWater(bool NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.SetUnlimitedWater");

	struct AGM_MedievalDynasty_C_SetUnlimitedWater_Params {
		bool NewValue;			//Offset: 0 | ElementSize: 1
	};
	AGM_MedievalDynasty_C_SetUnlimitedWater_Params params;
	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.SetUnlimitedWeight
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewValue	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::SetUnlimitedWeight(bool NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.SetUnlimitedWeight");

	struct AGM_MedievalDynasty_C_SetUnlimitedWeight_Params {
		bool NewValue;			//Offset: 0 | ElementSize: 1
	};
	AGM_MedievalDynasty_C_SetUnlimitedWeight_Params params;
	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.SetPoisoning
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewValue	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::SetPoisoning(bool NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.SetPoisoning");

	struct AGM_MedievalDynasty_C_SetPoisoning_Params {
		bool NewValue;			//Offset: 0 | ElementSize: 1
	};
	AGM_MedievalDynasty_C_SetPoisoning_Params params;
	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.SetTemperature
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewValue	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::SetTemperature(bool NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.SetTemperature");

	struct AGM_MedievalDynasty_C_SetTemperature_Params {
		bool NewValue;			//Offset: 0 | ElementSize: 1
	};
	AGM_MedievalDynasty_C_SetTemperature_Params params;
	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.SetFastCrafting
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewValue	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::SetFastCrafting(bool NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.SetFastCrafting");

	struct AGM_MedievalDynasty_C_SetFastCrafting_Params {
		bool NewValue;			//Offset: 0 | ElementSize: 1
	};
	AGM_MedievalDynasty_C_SetFastCrafting_Params params;
	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.SetFastBuilding
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewValue	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::SetFastBuilding(bool NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.SetFastBuilding");

	struct AGM_MedievalDynasty_C_SetFastBuilding_Params {
		bool NewValue;			//Offset: 0 | ElementSize: 1
	};
	AGM_MedievalDynasty_C_SetFastBuilding_Params params;
	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.SetFastStorage
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewValue	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::SetFastStorage(bool NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.SetFastStorage");

	struct AGM_MedievalDynasty_C_SetFastStorage_Params {
		bool NewValue;			//Offset: 0 | ElementSize: 1
	};
	AGM_MedievalDynasty_C_SetFastStorage_Params params;
	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.UpdateAllPlayersSettings
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::UpdateAllPlayersSettings() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.UpdateAllPlayersSettings");

	struct AGM_MedievalDynasty_C_UpdateAllPlayersSettings_Params {
	};
	AGM_MedievalDynasty_C_UpdateAllPlayersSettings_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.UpdatePlayerSettings
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerState	Type: class APlayerState*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::UpdatePlayerSettings(class APlayerState* PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.UpdatePlayerSettings");

	struct AGM_MedievalDynasty_C_UpdatePlayerSettings_Params {
		class APlayerState* PlayerState;			//Offset: 0 | ElementSize: 8
	};
	AGM_MedievalDynasty_C_UpdatePlayerSettings_Params params;
	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.ValidateSaveData
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::ValidateSaveData() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.ValidateSaveData");

	struct AGM_MedievalDynasty_C_ValidateSaveData_Params {
	};
	AGM_MedievalDynasty_C_ValidateSaveData_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.IsPlayerSaveValid
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: Index	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool AGM_MedievalDynasty_C::IsPlayerSaveValid(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.IsPlayerSaveValid");

	struct AGM_MedievalDynasty_C_IsPlayerSaveValid_Params {
		int32_t Index;			//Offset: 0 | ElementSize: 4
		bool ReturnValue;			//Offset: 4 | ElementSize: 1
	};
	AGM_MedievalDynasty_C_IsPlayerSaveValid_Params params;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.Set Unique Color for New Player
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewPlayer	Type: class ABP_MD_PlayerState_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::Set_Unique_Color_for_New_Player(class ABP_MD_PlayerState_C* NewPlayer) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.Set Unique Color for New Player");

	struct AGM_MedievalDynasty_C_Set_Unique_Color_for_New_Player_Params {
		class ABP_MD_PlayerState_C* NewPlayer;			//Offset: 0 | ElementSize: 8
	};
	AGM_MedievalDynasty_C_Set_Unique_Color_for_New_Player_Params params;
	params.NewPlayer = NewPlayer;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.GetPlayerIndexToLoad
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerController	Type: class APlayerController*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlayerIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::GetPlayerIndexToLoad(class APlayerController* PlayerController, int32_t* PlayerIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.GetPlayerIndexToLoad");

	struct AGM_MedievalDynasty_C_GetPlayerIndexToLoad_Params {
		class APlayerController* PlayerController;			//Offset: 0 | ElementSize: 8
		int32_t PlayerIndex;			//Offset: 8 | ElementSize: 4
	};
	AGM_MedievalDynasty_C_GetPlayerIndexToLoad_Params params;
	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);
	if (PlayerIndex != nullptr)
		*PlayerIndex = params.PlayerIndex;
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.TempFixForAnimalAndBanditsSettingsOnLOad
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::TempFixForAnimalAndBanditsSettingsOnLOad() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.TempFixForAnimalAndBanditsSettingsOnLOad");

	struct AGM_MedievalDynasty_C_TempFixForAnimalAndBanditsSettingsOnLOad_Params {
	};
	AGM_MedievalDynasty_C_TempFixForAnimalAndBanditsSettingsOnLOad_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_LoadGameFromSelectedSlot
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: SlotName	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::BPI_LoadGameFromSelectedSlot(struct FString SlotName, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_LoadGameFromSelectedSlot");

	struct AGM_MedievalDynasty_C_BPI_LoadGameFromSelectedSlot_Params {
		struct FString SlotName;			//Offset: 0 | ElementSize: 16
		bool Success;			//Offset: 16 | ElementSize: 1
	};
	AGM_MedievalDynasty_C_BPI_LoadGameFromSelectedSlot_Params params;
	params.SlotName = SlotName;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_CreateNewSaveGame
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: UserSaveName	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: GameSavedAtSlot	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SaveFileName	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::BPI_CreateNewSaveGame(struct FString UserSaveName, int32_t* GameSavedAtSlot, struct FString* SaveFileName) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_CreateNewSaveGame");

	struct AGM_MedievalDynasty_C_BPI_CreateNewSaveGame_Params {
		struct FString UserSaveName;			//Offset: 0 | ElementSize: 16
		int32_t GameSavedAtSlot;			//Offset: 16 | ElementSize: 4
		struct FString SaveFileName;			//Offset: 24 | ElementSize: 16
	};
	AGM_MedievalDynasty_C_BPI_CreateNewSaveGame_Params params;
	params.UserSaveName = UserSaveName;

	UObject::ProcessEvent(fn, &params);
	if (GameSavedAtSlot != nullptr)
		*GameSavedAtSlot = params.GameSavedAtSlot;
	if (SaveFileName != nullptr)
		*SaveFileName = params.SaveFileName;
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_QuickSave
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::BPI_QuickSave(bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_QuickSave");

	struct AGM_MedievalDynasty_C_BPI_QuickSave_Params {
		bool Success;			//Offset: 0 | ElementSize: 1
	};
	AGM_MedievalDynasty_C_BPI_QuickSave_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_AutoSave
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::BPI_AutoSave(bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_AutoSave");

	struct AGM_MedievalDynasty_C_BPI_AutoSave_Params {
		bool Success;			//Offset: 0 | ElementSize: 1
	};
	AGM_MedievalDynasty_C_BPI_AutoSave_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_QuickLoad
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::BPI_QuickLoad(bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_QuickLoad");

	struct AGM_MedievalDynasty_C_BPI_QuickLoad_Params {
		bool Success;			//Offset: 0 | ElementSize: 1
	};
	AGM_MedievalDynasty_C_BPI_QuickLoad_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_FixOldSaveFiles
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::BPI_FixOldSaveFiles(bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_FixOldSaveFiles");

	struct AGM_MedievalDynasty_C_BPI_FixOldSaveFiles_Params {
		bool Success;			//Offset: 0 | ElementSize: 1
	};
	AGM_MedievalDynasty_C_BPI_FixOldSaveFiles_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.GetDefaultSaveSlotNames
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveDataSlotName	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
// Name: SaveGameSlotName	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::GetDefaultSaveSlotNames(struct FString* SaveDataSlotName, struct FString* SaveGameSlotName) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.GetDefaultSaveSlotNames");

	struct AGM_MedievalDynasty_C_GetDefaultSaveSlotNames_Params {
		struct FString SaveDataSlotName;			//Offset: 0 | ElementSize: 16
		struct FString SaveGameSlotName;			//Offset: 16 | ElementSize: 16
	};
	AGM_MedievalDynasty_C_GetDefaultSaveSlotNames_Params params;

	UObject::ProcessEvent(fn, &params);
	if (SaveDataSlotName != nullptr)
		*SaveDataSlotName = params.SaveDataSlotName;
	if (SaveGameSlotName != nullptr)
		*SaveGameSlotName = params.SaveGameSlotName;
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_SaveGameToSelectedSlot
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: UserSaveName	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: DataSlotName	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: GameSlotName	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::BPI_SaveGameToSelectedSlot(struct FString UserSaveName, struct FString DataSlotName, struct FString GameSlotName, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_SaveGameToSelectedSlot");

	struct AGM_MedievalDynasty_C_BPI_SaveGameToSelectedSlot_Params {
		struct FString UserSaveName;			//Offset: 0 | ElementSize: 16
		struct FString DataSlotName;			//Offset: 16 | ElementSize: 16
		struct FString GameSlotName;			//Offset: 32 | ElementSize: 16
		bool Success;			//Offset: 48 | ElementSize: 1
	};
	AGM_MedievalDynasty_C_BPI_SaveGameToSelectedSlot_Params params;
	params.UserSaveName = UserSaveName;
	params.DataSlotName = DataSlotName;
	params.GameSlotName = GameSlotName;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

#pragma endregion
}