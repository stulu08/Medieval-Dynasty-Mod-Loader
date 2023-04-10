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
// Member Getter and Setter of IntroSound
// Declaration: class UAudioComponent* IntroSound
class UAudioComponent* AGM_MedievalDynasty_C::M_GetIntroSound() const {
	return Read<class UAudioComponent*>((byte*)this + 744);
}
class UAudioComponent** AGM_MedievalDynasty_C::M_PtrGetIntroSound() {
	return reinterpret_cast<class UAudioComponent**>((byte*)this + 744);
}
void AGM_MedievalDynasty_C::M_SetIntroSound(const class UAudioComponent*& value) {
	Write((byte*)this + 744, value);
}
// Member Getter and Setter of BinkMediaPlayer
// Declaration: class UBinkMediaPlayer* BinkMediaPlayer
class UBinkMediaPlayer* AGM_MedievalDynasty_C::M_GetBinkMediaPlayer() const {
	return Read<class UBinkMediaPlayer*>((byte*)this + 752);
}
class UBinkMediaPlayer** AGM_MedievalDynasty_C::M_PtrGetBinkMediaPlayer() {
	return reinterpret_cast<class UBinkMediaPlayer**>((byte*)this + 752);
}
void AGM_MedievalDynasty_C::M_SetBinkMediaPlayer(const class UBinkMediaPlayer*& value) {
	Write((byte*)this + 752, value);
}
// Member Getter and Setter of Default_DaysPerSeason
// Declaration: int32_t Default_DaysPerSeason
int32_t AGM_MedievalDynasty_C::M_GetDefault_DaysPerSeason() const {
	return Read<int32_t>((byte*)this + 760);
}
int32_t* AGM_MedievalDynasty_C::M_PtrGetDefault_DaysPerSeason() {
	return reinterpret_cast<int32_t*>((byte*)this + 760);
}
void AGM_MedievalDynasty_C::M_SetDefault_DaysPerSeason(const int32_t& value) {
	Write((byte*)this + 760, value);
}
// Member Getter and Setter of DaysPerSeason
// Declaration: int32_t DaysPerSeason
int32_t AGM_MedievalDynasty_C::M_GetDaysPerSeason() const {
	return Read<int32_t>((byte*)this + 764);
}
int32_t* AGM_MedievalDynasty_C::M_PtrGetDaysPerSeason() {
	return reinterpret_cast<int32_t*>((byte*)this + 764);
}
void AGM_MedievalDynasty_C::M_SetDaysPerSeason(const int32_t& value) {
	Write((byte*)this + 764, value);
}
// Member Getter and Setter of Default_TaxMultiplier
// Declaration: float Default_TaxMultiplier
float AGM_MedievalDynasty_C::M_GetDefault_TaxMultiplier() const {
	return Read<float>((byte*)this + 768);
}
float* AGM_MedievalDynasty_C::M_PtrGetDefault_TaxMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 768);
}
void AGM_MedievalDynasty_C::M_SetDefault_TaxMultiplier(const float& value) {
	Write((byte*)this + 768, value);
}
// Member Getter and Setter of TaxMultiplier
// Declaration: float TaxMultiplier
float AGM_MedievalDynasty_C::M_GetTaxMultiplier() const {
	return Read<float>((byte*)this + 772);
}
float* AGM_MedievalDynasty_C::M_PtrGetTaxMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 772);
}
void AGM_MedievalDynasty_C::M_SetTaxMultiplier(const float& value) {
	Write((byte*)this + 772, value);
}
// Member Getter and Setter of Default_BuildingsLimitMultiplier
// Declaration: float Default_BuildingsLimitMultiplier
float AGM_MedievalDynasty_C::M_GetDefault_BuildingsLimitMultiplier() const {
	return Read<float>((byte*)this + 776);
}
float* AGM_MedievalDynasty_C::M_PtrGetDefault_BuildingsLimitMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 776);
}
void AGM_MedievalDynasty_C::M_SetDefault_BuildingsLimitMultiplier(const float& value) {
	Write((byte*)this + 776, value);
}
// Member Getter and Setter of BuildingsLimitMultiplier
// Declaration: float BuildingsLimitMultiplier
float AGM_MedievalDynasty_C::M_GetBuildingsLimitMultiplier() const {
	return Read<float>((byte*)this + 780);
}
float* AGM_MedievalDynasty_C::M_PtrGetBuildingsLimitMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 780);
}
void AGM_MedievalDynasty_C::M_SetBuildingsLimitMultiplier(const float& value) {
	Write((byte*)this + 780, value);
}
// Member Getter and Setter of DaysPerSeason_OnSeasonChange
// Declaration: int32_t DaysPerSeason_OnSeasonChange
int32_t AGM_MedievalDynasty_C::M_GetDaysPerSeason_OnSeasonChange() const {
	return Read<int32_t>((byte*)this + 784);
}
int32_t* AGM_MedievalDynasty_C::M_PtrGetDaysPerSeason_OnSeasonChange() {
	return reinterpret_cast<int32_t*>((byte*)this + 784);
}
void AGM_MedievalDynasty_C::M_SetDaysPerSeason_OnSeasonChange(const int32_t& value) {
	Write((byte*)this + 784, value);
}
// Member Getter and Setter of Default_Events
// Declaration: bool Default_Events
bool AGM_MedievalDynasty_C::M_GetDefault_Events() const {
	return Read<bool>((byte*)this + 788);
}
bool* AGM_MedievalDynasty_C::M_PtrGetDefault_Events() {
	return reinterpret_cast<bool*>((byte*)this + 788);
}
void AGM_MedievalDynasty_C::M_SetDefault_Events(const bool& value) {
	Write((byte*)this + 788, value);
}
// Member Getter and Setter of Events
// Declaration: bool Events
bool AGM_MedievalDynasty_C::M_GetEvents() const {
	return Read<bool>((byte*)this + 789);
}
bool* AGM_MedievalDynasty_C::M_PtrGetEvents() {
	return reinterpret_cast<bool*>((byte*)this + 789);
}
void AGM_MedievalDynasty_C::M_SetEvents(const bool& value) {
	Write((byte*)this + 789, value);
}
// Member Getter and Setter of Default_Bandits
// Declaration: bool Default_Bandits
bool AGM_MedievalDynasty_C::M_GetDefault_Bandits() const {
	return Read<bool>((byte*)this + 790);
}
bool* AGM_MedievalDynasty_C::M_PtrGetDefault_Bandits() {
	return reinterpret_cast<bool*>((byte*)this + 790);
}
void AGM_MedievalDynasty_C::M_SetDefault_Bandits(const bool& value) {
	Write((byte*)this + 790, value);
}
// Member Getter and Setter of Bandits
// Declaration: bool Bandits
bool AGM_MedievalDynasty_C::M_GetBandits() const {
	return Read<bool>((byte*)this + 791);
}
bool* AGM_MedievalDynasty_C::M_PtrGetBandits() {
	return reinterpret_cast<bool*>((byte*)this + 791);
}
void AGM_MedievalDynasty_C::M_SetBandits(const bool& value) {
	Write((byte*)this + 791, value);
}
// Member Getter and Setter of Bandits_OnSeasonChange
// Declaration: bool Bandits_OnSeasonChange
bool AGM_MedievalDynasty_C::M_GetBandits_OnSeasonChange() const {
	return Read<bool>((byte*)this + 792);
}
bool* AGM_MedievalDynasty_C::M_PtrGetBandits_OnSeasonChange() {
	return reinterpret_cast<bool*>((byte*)this + 792);
}
void AGM_MedievalDynasty_C::M_SetBandits_OnSeasonChange(const bool& value) {
	Write((byte*)this + 792, value);
}
// Member Getter and Setter of Default_Birds
// Declaration: bool Default_Birds
bool AGM_MedievalDynasty_C::M_GetDefault_Birds() const {
	return Read<bool>((byte*)this + 793);
}
bool* AGM_MedievalDynasty_C::M_PtrGetDefault_Birds() {
	return reinterpret_cast<bool*>((byte*)this + 793);
}
void AGM_MedievalDynasty_C::M_SetDefault_Birds(const bool& value) {
	Write((byte*)this + 793, value);
}
// Member Getter and Setter of Birds
// Declaration: bool Birds
bool AGM_MedievalDynasty_C::M_GetBirds() const {
	return Read<bool>((byte*)this + 794);
}
bool* AGM_MedievalDynasty_C::M_PtrGetBirds() {
	return reinterpret_cast<bool*>((byte*)this + 794);
}
void AGM_MedievalDynasty_C::M_SetBirds(const bool& value) {
	Write((byte*)this + 794, value);
}
// Member Getter and Setter of Default_UnlimitedHP
// Declaration: bool Default_UnlimitedHP
bool AGM_MedievalDynasty_C::M_GetDefault_UnlimitedHP() const {
	return Read<bool>((byte*)this + 795);
}
bool* AGM_MedievalDynasty_C::M_PtrGetDefault_UnlimitedHP() {
	return reinterpret_cast<bool*>((byte*)this + 795);
}
void AGM_MedievalDynasty_C::M_SetDefault_UnlimitedHP(const bool& value) {
	Write((byte*)this + 795, value);
}
// Member Getter and Setter of UnlimitedHP
// Declaration: bool UnlimitedHP
bool AGM_MedievalDynasty_C::M_GetUnlimitedHP() const {
	return Read<bool>((byte*)this + 796);
}
bool* AGM_MedievalDynasty_C::M_PtrGetUnlimitedHP() {
	return reinterpret_cast<bool*>((byte*)this + 796);
}
void AGM_MedievalDynasty_C::M_SetUnlimitedHP(const bool& value) {
	Write((byte*)this + 796, value);
}
// Member Getter and Setter of Default_UnlimitedStamina
// Declaration: bool Default_UnlimitedStamina
bool AGM_MedievalDynasty_C::M_GetDefault_UnlimitedStamina() const {
	return Read<bool>((byte*)this + 797);
}
bool* AGM_MedievalDynasty_C::M_PtrGetDefault_UnlimitedStamina() {
	return reinterpret_cast<bool*>((byte*)this + 797);
}
void AGM_MedievalDynasty_C::M_SetDefault_UnlimitedStamina(const bool& value) {
	Write((byte*)this + 797, value);
}
// Member Getter and Setter of UnlimitedStamina
// Declaration: bool UnlimitedStamina
bool AGM_MedievalDynasty_C::M_GetUnlimitedStamina() const {
	return Read<bool>((byte*)this + 798);
}
bool* AGM_MedievalDynasty_C::M_PtrGetUnlimitedStamina() {
	return reinterpret_cast<bool*>((byte*)this + 798);
}
void AGM_MedievalDynasty_C::M_SetUnlimitedStamina(const bool& value) {
	Write((byte*)this + 798, value);
}
// Member Getter and Setter of Default_UnlimitedFood
// Declaration: bool Default_UnlimitedFood
bool AGM_MedievalDynasty_C::M_GetDefault_UnlimitedFood() const {
	return Read<bool>((byte*)this + 799);
}
bool* AGM_MedievalDynasty_C::M_PtrGetDefault_UnlimitedFood() {
	return reinterpret_cast<bool*>((byte*)this + 799);
}
void AGM_MedievalDynasty_C::M_SetDefault_UnlimitedFood(const bool& value) {
	Write((byte*)this + 799, value);
}
// Member Getter and Setter of UnlimitedFood
// Declaration: bool UnlimitedFood
bool AGM_MedievalDynasty_C::M_GetUnlimitedFood() const {
	return Read<bool>((byte*)this + 800);
}
bool* AGM_MedievalDynasty_C::M_PtrGetUnlimitedFood() {
	return reinterpret_cast<bool*>((byte*)this + 800);
}
void AGM_MedievalDynasty_C::M_SetUnlimitedFood(const bool& value) {
	Write((byte*)this + 800, value);
}
// Member Getter and Setter of Default_UnlimitedWater
// Declaration: bool Default_UnlimitedWater
bool AGM_MedievalDynasty_C::M_GetDefault_UnlimitedWater() const {
	return Read<bool>((byte*)this + 801);
}
bool* AGM_MedievalDynasty_C::M_PtrGetDefault_UnlimitedWater() {
	return reinterpret_cast<bool*>((byte*)this + 801);
}
void AGM_MedievalDynasty_C::M_SetDefault_UnlimitedWater(const bool& value) {
	Write((byte*)this + 801, value);
}
// Member Getter and Setter of UnlimitedWater
// Declaration: bool UnlimitedWater
bool AGM_MedievalDynasty_C::M_GetUnlimitedWater() const {
	return Read<bool>((byte*)this + 802);
}
bool* AGM_MedievalDynasty_C::M_PtrGetUnlimitedWater() {
	return reinterpret_cast<bool*>((byte*)this + 802);
}
void AGM_MedievalDynasty_C::M_SetUnlimitedWater(const bool& value) {
	Write((byte*)this + 802, value);
}
// Member Getter and Setter of Default_NPCNeeds_FoodMultiplier
// Declaration: float Default_NPCNeeds_FoodMultiplier
float AGM_MedievalDynasty_C::M_GetDefault_NPCNeeds_FoodMultiplier() const {
	return Read<float>((byte*)this + 804);
}
float* AGM_MedievalDynasty_C::M_PtrGetDefault_NPCNeeds_FoodMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 804);
}
void AGM_MedievalDynasty_C::M_SetDefault_NPCNeeds_FoodMultiplier(const float& value) {
	Write((byte*)this + 804, value);
}
// Member Getter and Setter of NPCNeeds_FoodMultiplier
// Declaration: float NPCNeeds_FoodMultiplier
float AGM_MedievalDynasty_C::M_GetNPCNeeds_FoodMultiplier() const {
	return Read<float>((byte*)this + 808);
}
float* AGM_MedievalDynasty_C::M_PtrGetNPCNeeds_FoodMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 808);
}
void AGM_MedievalDynasty_C::M_SetNPCNeeds_FoodMultiplier(const float& value) {
	Write((byte*)this + 808, value);
}
// Member Getter and Setter of NPCNeeds_FoodMultiplier_OnSeasonChange
// Declaration: float NPCNeeds_FoodMultiplier_OnSeasonChange
float AGM_MedievalDynasty_C::M_GetNPCNeeds_FoodMultiplier_OnSeasonChange() const {
	return Read<float>((byte*)this + 812);
}
float* AGM_MedievalDynasty_C::M_PtrGetNPCNeeds_FoodMultiplier_OnSeasonChange() {
	return reinterpret_cast<float*>((byte*)this + 812);
}
void AGM_MedievalDynasty_C::M_SetNPCNeeds_FoodMultiplier_OnSeasonChange(const float& value) {
	Write((byte*)this + 812, value);
}
// Member Getter and Setter of Default_NPCNeeds_WaterMultiplier
// Declaration: float Default_NPCNeeds_WaterMultiplier
float AGM_MedievalDynasty_C::M_GetDefault_NPCNeeds_WaterMultiplier() const {
	return Read<float>((byte*)this + 816);
}
float* AGM_MedievalDynasty_C::M_PtrGetDefault_NPCNeeds_WaterMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 816);
}
void AGM_MedievalDynasty_C::M_SetDefault_NPCNeeds_WaterMultiplier(const float& value) {
	Write((byte*)this + 816, value);
}
// Member Getter and Setter of NPCNeeds_WaterMultiplier
// Declaration: float NPCNeeds_WaterMultiplier
float AGM_MedievalDynasty_C::M_GetNPCNeeds_WaterMultiplier() const {
	return Read<float>((byte*)this + 820);
}
float* AGM_MedievalDynasty_C::M_PtrGetNPCNeeds_WaterMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 820);
}
void AGM_MedievalDynasty_C::M_SetNPCNeeds_WaterMultiplier(const float& value) {
	Write((byte*)this + 820, value);
}
// Member Getter and Setter of NPCNeeds_WaterMultiplier_OnSeasonChange
// Declaration: float NPCNeeds_WaterMultiplier_OnSeasonChange
float AGM_MedievalDynasty_C::M_GetNPCNeeds_WaterMultiplier_OnSeasonChange() const {
	return Read<float>((byte*)this + 824);
}
float* AGM_MedievalDynasty_C::M_PtrGetNPCNeeds_WaterMultiplier_OnSeasonChange() {
	return reinterpret_cast<float*>((byte*)this + 824);
}
void AGM_MedievalDynasty_C::M_SetNPCNeeds_WaterMultiplier_OnSeasonChange(const float& value) {
	Write((byte*)this + 824, value);
}
// Member Getter and Setter of Default_NPCNeeds_WoodMultiplier
// Declaration: float Default_NPCNeeds_WoodMultiplier
float AGM_MedievalDynasty_C::M_GetDefault_NPCNeeds_WoodMultiplier() const {
	return Read<float>((byte*)this + 828);
}
float* AGM_MedievalDynasty_C::M_PtrGetDefault_NPCNeeds_WoodMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 828);
}
void AGM_MedievalDynasty_C::M_SetDefault_NPCNeeds_WoodMultiplier(const float& value) {
	Write((byte*)this + 828, value);
}
// Member Getter and Setter of NPCNeeds_WoodMultiplier
// Declaration: float NPCNeeds_WoodMultiplier
float AGM_MedievalDynasty_C::M_GetNPCNeeds_WoodMultiplier() const {
	return Read<float>((byte*)this + 832);
}
float* AGM_MedievalDynasty_C::M_PtrGetNPCNeeds_WoodMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 832);
}
void AGM_MedievalDynasty_C::M_SetNPCNeeds_WoodMultiplier(const float& value) {
	Write((byte*)this + 832, value);
}
// Member Getter and Setter of Default_AnimalsHPMultiplier
// Declaration: float Default_AnimalsHPMultiplier
float AGM_MedievalDynasty_C::M_GetDefault_AnimalsHPMultiplier() const {
	return Read<float>((byte*)this + 836);
}
float* AGM_MedievalDynasty_C::M_PtrGetDefault_AnimalsHPMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 836);
}
void AGM_MedievalDynasty_C::M_SetDefault_AnimalsHPMultiplier(const float& value) {
	Write((byte*)this + 836, value);
}
// Member Getter and Setter of AnimalsHPMultiplier
// Declaration: float AnimalsHPMultiplier
float AGM_MedievalDynasty_C::M_GetAnimalsHPMultiplier() const {
	return Read<float>((byte*)this + 840);
}
float* AGM_MedievalDynasty_C::M_PtrGetAnimalsHPMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 840);
}
void AGM_MedievalDynasty_C::M_SetAnimalsHPMultiplier(const float& value) {
	Write((byte*)this + 840, value);
}
// Member Getter and Setter of AnimalsHPMultiplier_OnSeasonChange
// Declaration: float AnimalsHPMultiplier_OnSeasonChange
float AGM_MedievalDynasty_C::M_GetAnimalsHPMultiplier_OnSeasonChange() const {
	return Read<float>((byte*)this + 844);
}
float* AGM_MedievalDynasty_C::M_PtrGetAnimalsHPMultiplier_OnSeasonChange() {
	return reinterpret_cast<float*>((byte*)this + 844);
}
void AGM_MedievalDynasty_C::M_SetAnimalsHPMultiplier_OnSeasonChange(const float& value) {
	Write((byte*)this + 844, value);
}
// Member Getter and Setter of Default_AnimalsDamageMultiplier
// Declaration: float Default_AnimalsDamageMultiplier
float AGM_MedievalDynasty_C::M_GetDefault_AnimalsDamageMultiplier() const {
	return Read<float>((byte*)this + 848);
}
float* AGM_MedievalDynasty_C::M_PtrGetDefault_AnimalsDamageMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 848);
}
void AGM_MedievalDynasty_C::M_SetDefault_AnimalsDamageMultiplier(const float& value) {
	Write((byte*)this + 848, value);
}
// Member Getter and Setter of AnimalsDamageMultiplier
// Declaration: float AnimalsDamageMultiplier
float AGM_MedievalDynasty_C::M_GetAnimalsDamageMultiplier() const {
	return Read<float>((byte*)this + 852);
}
float* AGM_MedievalDynasty_C::M_PtrGetAnimalsDamageMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 852);
}
void AGM_MedievalDynasty_C::M_SetAnimalsDamageMultiplier(const float& value) {
	Write((byte*)this + 852, value);
}
// Member Getter and Setter of Default_UnlimitedWeight
// Declaration: bool Default_UnlimitedWeight
bool AGM_MedievalDynasty_C::M_GetDefault_UnlimitedWeight() const {
	return Read<bool>((byte*)this + 856);
}
bool* AGM_MedievalDynasty_C::M_PtrGetDefault_UnlimitedWeight() {
	return reinterpret_cast<bool*>((byte*)this + 856);
}
void AGM_MedievalDynasty_C::M_SetDefault_UnlimitedWeight(const bool& value) {
	Write((byte*)this + 856, value);
}
// Member Getter and Setter of UnlimitedWeight
// Declaration: bool UnlimitedWeight
bool AGM_MedievalDynasty_C::M_GetUnlimitedWeight() const {
	return Read<bool>((byte*)this + 857);
}
bool* AGM_MedievalDynasty_C::M_PtrGetUnlimitedWeight() {
	return reinterpret_cast<bool*>((byte*)this + 857);
}
void AGM_MedievalDynasty_C::M_SetUnlimitedWeight(const bool& value) {
	Write((byte*)this + 857, value);
}
// Member Getter and Setter of Default_Poisoning
// Declaration: bool Default_Poisoning
bool AGM_MedievalDynasty_C::M_GetDefault_Poisoning() const {
	return Read<bool>((byte*)this + 858);
}
bool* AGM_MedievalDynasty_C::M_PtrGetDefault_Poisoning() {
	return reinterpret_cast<bool*>((byte*)this + 858);
}
void AGM_MedievalDynasty_C::M_SetDefault_Poisoning(const bool& value) {
	Write((byte*)this + 858, value);
}
// Member Getter and Setter of Poisoning
// Declaration: bool Poisoning
bool AGM_MedievalDynasty_C::M_GetPoisoning() const {
	return Read<bool>((byte*)this + 859);
}
bool* AGM_MedievalDynasty_C::M_PtrGetPoisoning() {
	return reinterpret_cast<bool*>((byte*)this + 859);
}
void AGM_MedievalDynasty_C::M_SetPoisoning(const bool& value) {
	Write((byte*)this + 859, value);
}
// Member Getter and Setter of Default_Temperature
// Declaration: bool Default_Temperature
bool AGM_MedievalDynasty_C::M_GetDefault_Temperature() const {
	return Read<bool>((byte*)this + 860);
}
bool* AGM_MedievalDynasty_C::M_PtrGetDefault_Temperature() {
	return reinterpret_cast<bool*>((byte*)this + 860);
}
void AGM_MedievalDynasty_C::M_SetDefault_Temperature(const bool& value) {
	Write((byte*)this + 860, value);
}
// Member Getter and Setter of Temperature
// Declaration: bool Temperature
bool AGM_MedievalDynasty_C::M_GetTemperature() const {
	return Read<bool>((byte*)this + 861);
}
bool* AGM_MedievalDynasty_C::M_PtrGetTemperature() {
	return reinterpret_cast<bool*>((byte*)this + 861);
}
void AGM_MedievalDynasty_C::M_SetTemperature(const bool& value) {
	Write((byte*)this + 861, value);
}
// Member Getter and Setter of Default_FastCrafting
// Declaration: bool Default_FastCrafting
bool AGM_MedievalDynasty_C::M_GetDefault_FastCrafting() const {
	return Read<bool>((byte*)this + 862);
}
bool* AGM_MedievalDynasty_C::M_PtrGetDefault_FastCrafting() {
	return reinterpret_cast<bool*>((byte*)this + 862);
}
void AGM_MedievalDynasty_C::M_SetDefault_FastCrafting(const bool& value) {
	Write((byte*)this + 862, value);
}
// Member Getter and Setter of FastCrafting
// Declaration: bool FastCrafting
bool AGM_MedievalDynasty_C::M_GetFastCrafting() const {
	return Read<bool>((byte*)this + 863);
}
bool* AGM_MedievalDynasty_C::M_PtrGetFastCrafting() {
	return reinterpret_cast<bool*>((byte*)this + 863);
}
void AGM_MedievalDynasty_C::M_SetFastCrafting(const bool& value) {
	Write((byte*)this + 863, value);
}
// Member Getter and Setter of Default_XPGainMultiplier
// Declaration: float Default_XPGainMultiplier
float AGM_MedievalDynasty_C::M_GetDefault_XPGainMultiplier() const {
	return Read<float>((byte*)this + 864);
}
float* AGM_MedievalDynasty_C::M_PtrGetDefault_XPGainMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 864);
}
void AGM_MedievalDynasty_C::M_SetDefault_XPGainMultiplier(const float& value) {
	Write((byte*)this + 864, value);
}
// Member Getter and Setter of XPGainMultiplier
// Declaration: float XPGainMultiplier
float AGM_MedievalDynasty_C::M_GetXPGainMultiplier() const {
	return Read<float>((byte*)this + 868);
}
float* AGM_MedievalDynasty_C::M_PtrGetXPGainMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 868);
}
void AGM_MedievalDynasty_C::M_SetXPGainMultiplier(const float& value) {
	Write((byte*)this + 868, value);
}
// Member Getter and Setter of Default_TechnologyGainMultiplier
// Declaration: float Default_TechnologyGainMultiplier
float AGM_MedievalDynasty_C::M_GetDefault_TechnologyGainMultiplier() const {
	return Read<float>((byte*)this + 872);
}
float* AGM_MedievalDynasty_C::M_PtrGetDefault_TechnologyGainMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 872);
}
void AGM_MedievalDynasty_C::M_SetDefault_TechnologyGainMultiplier(const float& value) {
	Write((byte*)this + 872, value);
}
// Member Getter and Setter of TechnologyGainMultiplier
// Declaration: float TechnologyGainMultiplier
float AGM_MedievalDynasty_C::M_GetTechnologyGainMultiplier() const {
	return Read<float>((byte*)this + 876);
}
float* AGM_MedievalDynasty_C::M_PtrGetTechnologyGainMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 876);
}
void AGM_MedievalDynasty_C::M_SetTechnologyGainMultiplier(const float& value) {
	Write((byte*)this + 876, value);
}
// Member Getter and Setter of Default_DynastyReputationGainMultiplier
// Declaration: float Default_DynastyReputationGainMultiplier
float AGM_MedievalDynasty_C::M_GetDefault_DynastyReputationGainMultiplier() const {
	return Read<float>((byte*)this + 880);
}
float* AGM_MedievalDynasty_C::M_PtrGetDefault_DynastyReputationGainMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 880);
}
void AGM_MedievalDynasty_C::M_SetDefault_DynastyReputationGainMultiplier(const float& value) {
	Write((byte*)this + 880, value);
}
// Member Getter and Setter of DynastyReputationGainMultiplier
// Declaration: float DynastyReputationGainMultiplier
float AGM_MedievalDynasty_C::M_GetDynastyReputationGainMultiplier() const {
	return Read<float>((byte*)this + 884);
}
float* AGM_MedievalDynasty_C::M_PtrGetDynastyReputationGainMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 884);
}
void AGM_MedievalDynasty_C::M_SetDynastyReputationGainMultiplier(const float& value) {
	Write((byte*)this + 884, value);
}
// Member Getter and Setter of DefaultStopSpoilForDroppedItems
// Declaration: bool DefaultStopSpoilForDroppedItems
bool AGM_MedievalDynasty_C::M_GetDefaultStopSpoilForDroppedItems() const {
	return Read<bool>((byte*)this + 888);
}
bool* AGM_MedievalDynasty_C::M_PtrGetDefaultStopSpoilForDroppedItems() {
	return reinterpret_cast<bool*>((byte*)this + 888);
}
void AGM_MedievalDynasty_C::M_SetDefaultStopSpoilForDroppedItems(const bool& value) {
	Write((byte*)this + 888, value);
}
// Member Getter and Setter of StopSpoilForDroppedItems
// Declaration: bool StopSpoilForDroppedItems
bool AGM_MedievalDynasty_C::M_GetStopSpoilForDroppedItems() const {
	return Read<bool>((byte*)this + 889);
}
bool* AGM_MedievalDynasty_C::M_PtrGetStopSpoilForDroppedItems() {
	return reinterpret_cast<bool*>((byte*)this + 889);
}
void AGM_MedievalDynasty_C::M_SetStopSpoilForDroppedItems(const bool& value) {
	Write((byte*)this + 889, value);
}
// Member Getter and Setter of DebugTime
// Declaration: struct FDateTime DebugTime
struct FDateTime AGM_MedievalDynasty_C::M_GetDebugTime() const {
	return Read<struct FDateTime>((byte*)this + 896);
}
struct FDateTime* AGM_MedievalDynasty_C::M_PtrGetDebugTime() {
	return reinterpret_cast<struct FDateTime*>((byte*)this + 896);
}
void AGM_MedievalDynasty_C::M_SetDebugTime(const struct FDateTime& value) {
	Write((byte*)this + 896, value);
}
// Member Getter and Setter of SaveGameReference
// Declaration: class USAVE_Game_C* SaveGameReference
class USAVE_Game_C* AGM_MedievalDynasty_C::M_GetSaveGameReference() const {
	return Read<class USAVE_Game_C*>((byte*)this + 904);
}
class USAVE_Game_C** AGM_MedievalDynasty_C::M_PtrGetSaveGameReference() {
	return reinterpret_cast<class USAVE_Game_C**>((byte*)this + 904);
}
void AGM_MedievalDynasty_C::M_SetSaveGameReference(const class USAVE_Game_C*& value) {
	Write((byte*)this + 904, value);
}
// Member Getter and Setter of SaveDataSlotName
// Declaration: struct FString SaveDataSlotName
struct FString AGM_MedievalDynasty_C::M_GetSaveDataSlotName() const {
	return Read<struct FString>((byte*)this + 912);
}
struct FString* AGM_MedievalDynasty_C::M_PtrGetSaveDataSlotName() {
	return reinterpret_cast<struct FString*>((byte*)this + 912);
}
void AGM_MedievalDynasty_C::M_SetSaveDataSlotName(const struct FString& value) {
	Write((byte*)this + 912, value);
}
// Member Getter and Setter of SaveGameSlotName
// Declaration: struct FString SaveGameSlotName
struct FString AGM_MedievalDynasty_C::M_GetSaveGameSlotName() const {
	return Read<struct FString>((byte*)this + 928);
}
struct FString* AGM_MedievalDynasty_C::M_PtrGetSaveGameSlotName() {
	return reinterpret_cast<struct FString*>((byte*)this + 928);
}
void AGM_MedievalDynasty_C::M_SetSaveGameSlotName(const struct FString& value) {
	Write((byte*)this + 928, value);
}
// Member Getter and Setter of TotalDebugTime
// Declaration: struct FDateTime TotalDebugTime
struct FDateTime AGM_MedievalDynasty_C::M_GetTotalDebugTime() const {
	return Read<struct FDateTime>((byte*)this + 944);
}
struct FDateTime* AGM_MedievalDynasty_C::M_PtrGetTotalDebugTime() {
	return reinterpret_cast<struct FDateTime*>((byte*)this + 944);
}
void AGM_MedievalDynasty_C::M_SetTotalDebugTime(const struct FDateTime& value) {
	Write((byte*)this + 944, value);
}
// Member Getter and Setter of LeaderboardStatsList
// Declaration: TArray<struct FName> LeaderboardStatsList
TArray<struct FName> AGM_MedievalDynasty_C::M_GetLeaderboardStatsList() const {
	return Read<TArray<struct FName>>((byte*)this + 952);
}
TArray<struct FName>* AGM_MedievalDynasty_C::M_PtrGetLeaderboardStatsList() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 952);
}
void AGM_MedievalDynasty_C::M_SetLeaderboardStatsList(const TArray<struct FName>& value) {
	Write((byte*)this + 952, value);
}
// Member Getter and Setter of LeaderboardStatValues
// Declaration: TMap<struct FName, int32_t> LeaderboardStatValues
TMap<struct FName, int32_t> AGM_MedievalDynasty_C::M_GetLeaderboardStatValues() const {
	return Read<TMap<struct FName, int32_t>>((byte*)this + 968);
}
TMap<struct FName, int32_t>* AGM_MedievalDynasty_C::M_PtrGetLeaderboardStatValues() {
	return reinterpret_cast<TMap<struct FName, int32_t>*>((byte*)this + 968);
}
void AGM_MedievalDynasty_C::M_SetLeaderboardStatValues(const TMap<struct FName, int32_t>& value) {
	Write((byte*)this + 968, value);
}
// Member Getter and Setter of AchievementBuffer
// Declaration: TArray<struct FName> AchievementBuffer
TArray<struct FName> AGM_MedievalDynasty_C::M_GetAchievementBuffer() const {
	return Read<TArray<struct FName>>((byte*)this + 1048);
}
TArray<struct FName>* AGM_MedievalDynasty_C::M_PtrGetAchievementBuffer() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 1048);
}
void AGM_MedievalDynasty_C::M_SetAchievementBuffer(const TArray<struct FName>& value) {
	Write((byte*)this + 1048, value);
}
// Member Getter and Setter of StatsCached
// Declaration: bool StatsCached
bool AGM_MedievalDynasty_C::M_GetStatsCached() const {
	return Read<bool>((byte*)this + 1064);
}
bool* AGM_MedievalDynasty_C::M_PtrGetStatsCached() {
	return reinterpret_cast<bool*>((byte*)this + 1064);
}
void AGM_MedievalDynasty_C::M_SetStatsCached(const bool& value) {
	Write((byte*)this + 1064, value);
}
// Member Getter and Setter of AchiStatTries
// Declaration: int32_t AchiStatTries
int32_t AGM_MedievalDynasty_C::M_GetAchiStatTries() const {
	return Read<int32_t>((byte*)this + 1068);
}
int32_t* AGM_MedievalDynasty_C::M_PtrGetAchiStatTries() {
	return reinterpret_cast<int32_t*>((byte*)this + 1068);
}
void AGM_MedievalDynasty_C::M_SetAchiStatTries(const int32_t& value) {
	Write((byte*)this + 1068, value);
}
// Member Getter and Setter of AchiStatTimer
// Declaration: struct FTimerHandle AchiStatTimer
struct FTimerHandle AGM_MedievalDynasty_C::M_GetAchiStatTimer() const {
	return Read<struct FTimerHandle>((byte*)this + 1072);
}
struct FTimerHandle* AGM_MedievalDynasty_C::M_PtrGetAchiStatTimer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 1072);
}
void AGM_MedievalDynasty_C::M_SetAchiStatTimer(const struct FTimerHandle& value) {
	Write((byte*)this + 1072, value);
}
// Member Getter and Setter of AchiTimer
// Declaration: struct FTimerHandle AchiTimer
struct FTimerHandle AGM_MedievalDynasty_C::M_GetAchiTimer() const {
	return Read<struct FTimerHandle>((byte*)this + 1080);
}
struct FTimerHandle* AGM_MedievalDynasty_C::M_PtrGetAchiTimer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 1080);
}
void AGM_MedievalDynasty_C::M_SetAchiTimer(const struct FTimerHandle& value) {
	Write((byte*)this + 1080, value);
}
// Member Getter and Setter of FinishedGivingAchievement
// Declaration: bool FinishedGivingAchievement
bool AGM_MedievalDynasty_C::M_GetFinishedGivingAchievement() const {
	return Read<bool>((byte*)this + 1088);
}
bool* AGM_MedievalDynasty_C::M_PtrGetFinishedGivingAchievement() {
	return reinterpret_cast<bool*>((byte*)this + 1088);
}
void AGM_MedievalDynasty_C::M_SetFinishedGivingAchievement(const bool& value) {
	Write((byte*)this + 1088, value);
}
// Member Getter and Setter of WildAnimalsTypeKilled
// Declaration: TMap<TEnumAsByte<E_AnimalType>, bool> WildAnimalsTypeKilled
TMap<TEnumAsByte<E_AnimalType>, bool> AGM_MedievalDynasty_C::M_GetWildAnimalsTypeKilled() const {
	return Read<TMap<TEnumAsByte<E_AnimalType>, bool>>((byte*)this + 1096);
}
TMap<TEnumAsByte<E_AnimalType>, bool>* AGM_MedievalDynasty_C::M_PtrGetWildAnimalsTypeKilled() {
	return reinterpret_cast<TMap<TEnumAsByte<E_AnimalType>, bool>*>((byte*)this + 1096);
}
void AGM_MedievalDynasty_C::M_SetWildAnimalsTypeKilled(const TMap<TEnumAsByte<E_AnimalType>, bool>& value) {
	Write((byte*)this + 1096, value);
}
// Member Getter and Setter of VillagesVisited
// Declaration: TMap<TEnumAsByte<E_Ownership>, bool> VillagesVisited
TMap<TEnumAsByte<E_Ownership>, bool> AGM_MedievalDynasty_C::M_GetVillagesVisited() const {
	return Read<TMap<TEnumAsByte<E_Ownership>, bool>>((byte*)this + 1176);
}
TMap<TEnumAsByte<E_Ownership>, bool>* AGM_MedievalDynasty_C::M_PtrGetVillagesVisited() {
	return reinterpret_cast<TMap<TEnumAsByte<E_Ownership>, bool>*>((byte*)this + 1176);
}
void AGM_MedievalDynasty_C::M_SetVillagesVisited(const TMap<TEnumAsByte<E_Ownership>, bool>& value) {
	Write((byte*)this + 1176, value);
}
// Member Getter and Setter of SurvivedWinterNoClothes
// Declaration: bool SurvivedWinterNoClothes
bool AGM_MedievalDynasty_C::M_GetSurvivedWinterNoClothes() const {
	return Read<bool>((byte*)this + 1256);
}
bool* AGM_MedievalDynasty_C::M_PtrGetSurvivedWinterNoClothes() {
	return reinterpret_cast<bool*>((byte*)this + 1256);
}
void AGM_MedievalDynasty_C::M_SetSurvivedWinterNoClothes(const bool& value) {
	Write((byte*)this + 1256, value);
}
// Member Getter and Setter of SeasonsOfWifeGifts
// Declaration: int32_t SeasonsOfWifeGifts
int32_t AGM_MedievalDynasty_C::M_GetSeasonsOfWifeGifts() const {
	return Read<int32_t>((byte*)this + 1260);
}
int32_t* AGM_MedievalDynasty_C::M_PtrGetSeasonsOfWifeGifts() {
	return reinterpret_cast<int32_t*>((byte*)this + 1260);
}
void AGM_MedievalDynasty_C::M_SetSeasonsOfWifeGifts(const int32_t& value) {
	Write((byte*)this + 1260, value);
}
// Member Getter and Setter of StolenItemsSold
// Declaration: int32_t StolenItemsSold
int32_t AGM_MedievalDynasty_C::M_GetStolenItemsSold() const {
	return Read<int32_t>((byte*)this + 1264);
}
int32_t* AGM_MedievalDynasty_C::M_PtrGetStolenItemsSold() {
	return reinterpret_cast<int32_t*>((byte*)this + 1264);
}
void AGM_MedievalDynasty_C::M_SetStolenItemsSold(const int32_t& value) {
	Write((byte*)this + 1264, value);
}
// Member Getter and Setter of ConsecutiveNightsSlept
// Declaration: int32_t ConsecutiveNightsSlept
int32_t AGM_MedievalDynasty_C::M_GetConsecutiveNightsSlept() const {
	return Read<int32_t>((byte*)this + 1268);
}
int32_t* AGM_MedievalDynasty_C::M_PtrGetConsecutiveNightsSlept() {
	return reinterpret_cast<int32_t*>((byte*)this + 1268);
}
void AGM_MedievalDynasty_C::M_SetConsecutiveNightsSlept(const int32_t& value) {
	Write((byte*)this + 1268, value);
}
// Member Getter and Setter of IsCutscenePlaying
// Declaration: bool IsCutscenePlaying
bool AGM_MedievalDynasty_C::M_GetIsCutscenePlaying() const {
	return Read<bool>((byte*)this + 1272);
}
bool* AGM_MedievalDynasty_C::M_PtrGetIsCutscenePlaying() {
	return reinterpret_cast<bool*>((byte*)this + 1272);
}
void AGM_MedievalDynasty_C::M_SetIsCutscenePlaying(const bool& value) {
	Write((byte*)this + 1272, value);
}
// Member Getter and Setter of MDSIDEQUESTS
// Declaration: int32_t MDSIDEQUESTS
int32_t AGM_MedievalDynasty_C::M_GetMDSIDEQUESTS() const {
	return Read<int32_t>((byte*)this + 1276);
}
int32_t* AGM_MedievalDynasty_C::M_PtrGetMDSIDEQUESTS() {
	return reinterpret_cast<int32_t*>((byte*)this + 1276);
}
void AGM_MedievalDynasty_C::M_SetMDSIDEQUESTS(const int32_t& value) {
	Write((byte*)this + 1276, value);
}
// Member Getter and Setter of MDCAUGHTSTEALING
// Declaration: int32_t MDCAUGHTSTEALING
int32_t AGM_MedievalDynasty_C::M_GetMDCAUGHTSTEALING() const {
	return Read<int32_t>((byte*)this + 1280);
}
int32_t* AGM_MedievalDynasty_C::M_PtrGetMDCAUGHTSTEALING() {
	return reinterpret_cast<int32_t*>((byte*)this + 1280);
}
void AGM_MedievalDynasty_C::M_SetMDCAUGHTSTEALING(const int32_t& value) {
	Write((byte*)this + 1280, value);
}
// Member Getter and Setter of MDSTUMPS
// Declaration: int32_t MDSTUMPS
int32_t AGM_MedievalDynasty_C::M_GetMDSTUMPS() const {
	return Read<int32_t>((byte*)this + 1284);
}
int32_t* AGM_MedievalDynasty_C::M_PtrGetMDSTUMPS() {
	return reinterpret_cast<int32_t*>((byte*)this + 1284);
}
void AGM_MedievalDynasty_C::M_SetMDSTUMPS(const int32_t& value) {
	Write((byte*)this + 1284, value);
}
// Member Getter and Setter of CutsceneSound
// Declaration: class UAudioComponent* CutsceneSound
class UAudioComponent* AGM_MedievalDynasty_C::M_GetCutsceneSound() const {
	return Read<class UAudioComponent*>((byte*)this + 1288);
}
class UAudioComponent** AGM_MedievalDynasty_C::M_PtrGetCutsceneSound() {
	return reinterpret_cast<class UAudioComponent**>((byte*)this + 1288);
}
void AGM_MedievalDynasty_C::M_SetCutsceneSound(const class UAudioComponent*& value) {
	Write((byte*)this + 1288, value);
}
// Member Getter and Setter of AlreadyWrittenAchievements
// Declaration: TAssetPtr<class FNone_413> AlreadyWrittenAchievements
TAssetPtr<class FNone_413> AGM_MedievalDynasty_C::M_GetAlreadyWrittenAchievements() const {
	return Read<TAssetPtr<class FNone_413>>((byte*)this + 1296);
}
TAssetPtr<class FNone_413>* AGM_MedievalDynasty_C::M_PtrGetAlreadyWrittenAchievements() {
	return reinterpret_cast<TAssetPtr<class FNone_413>*>((byte*)this + 1296);
}
void AGM_MedievalDynasty_C::M_SetAlreadyWrittenAchievements(const TAssetPtr<class FNone_413>& value) {
	Write((byte*)this + 1296, value);
}
// Member Getter and Setter of SaveDataExistsTemp
// Declaration: bool SaveDataExistsTemp
bool AGM_MedievalDynasty_C::M_GetSaveDataExistsTemp() const {
	return Read<bool>((byte*)this + 1376);
}
bool* AGM_MedievalDynasty_C::M_PtrGetSaveDataExistsTemp() {
	return reinterpret_cast<bool*>((byte*)this + 1376);
}
void AGM_MedievalDynasty_C::M_SetSaveDataExistsTemp(const bool& value) {
	Write((byte*)this + 1376, value);
}
// Member Getter and Setter of SaveGameExistsTemp
// Declaration: bool SaveGameExistsTemp
bool AGM_MedievalDynasty_C::M_GetSaveGameExistsTemp() const {
	return Read<bool>((byte*)this + 1377);
}
bool* AGM_MedievalDynasty_C::M_PtrGetSaveGameExistsTemp() {
	return reinterpret_cast<bool*>((byte*)this + 1377);
}
void AGM_MedievalDynasty_C::M_SetSaveGameExistsTemp(const bool& value) {
	Write((byte*)this + 1377, value);
}
// Member Getter and Setter of SaveDataRefTemp
// Declaration: class USAVE_Data_C* SaveDataRefTemp
class USAVE_Data_C* AGM_MedievalDynasty_C::M_GetSaveDataRefTemp() const {
	return Read<class USAVE_Data_C*>((byte*)this + 1384);
}
class USAVE_Data_C** AGM_MedievalDynasty_C::M_PtrGetSaveDataRefTemp() {
	return reinterpret_cast<class USAVE_Data_C**>((byte*)this + 1384);
}
void AGM_MedievalDynasty_C::M_SetSaveDataRefTemp(const class USAVE_Data_C*& value) {
	Write((byte*)this + 1384, value);
}
// Member Getter and Setter of SaveGameRefTemp
// Declaration: class USAVE_Game_C* SaveGameRefTemp
class USAVE_Game_C* AGM_MedievalDynasty_C::M_GetSaveGameRefTemp() const {
	return Read<class USAVE_Game_C*>((byte*)this + 1392);
}
class USAVE_Game_C** AGM_MedievalDynasty_C::M_PtrGetSaveGameRefTemp() {
	return reinterpret_cast<class USAVE_Game_C**>((byte*)this + 1392);
}
void AGM_MedievalDynasty_C::M_SetSaveGameRefTemp(const class USAVE_Game_C*& value) {
	Write((byte*)this + 1392, value);
}
// Member Getter and Setter of SaveDataNameTemp
// Declaration: struct FString SaveDataNameTemp
struct FString AGM_MedievalDynasty_C::M_GetSaveDataNameTemp() const {
	return Read<struct FString>((byte*)this + 1400);
}
struct FString* AGM_MedievalDynasty_C::M_PtrGetSaveDataNameTemp() {
	return reinterpret_cast<struct FString*>((byte*)this + 1400);
}
void AGM_MedievalDynasty_C::M_SetSaveDataNameTemp(const struct FString& value) {
	Write((byte*)this + 1400, value);
}
// Member Getter and Setter of SaveGameNameTemp
// Declaration: struct FString SaveGameNameTemp
struct FString AGM_MedievalDynasty_C::M_GetSaveGameNameTemp() const {
	return Read<struct FString>((byte*)this + 1416);
}
struct FString* AGM_MedievalDynasty_C::M_PtrGetSaveGameNameTemp() {
	return reinterpret_cast<struct FString*>((byte*)this + 1416);
}
void AGM_MedievalDynasty_C::M_SetSaveGameNameTemp(const struct FString& value) {
	Write((byte*)this + 1416, value);
}
// Member Getter and Setter of ChangeGameplaySettingsOnSeasonChange
// Declaration: bool ChangeGameplaySettingsOnSeasonChange
bool AGM_MedievalDynasty_C::M_GetChangeGameplaySettingsOnSeasonChange() const {
	return Read<bool>((byte*)this + 1432);
}
bool* AGM_MedievalDynasty_C::M_PtrGetChangeGameplaySettingsOnSeasonChange() {
	return reinterpret_cast<bool*>((byte*)this + 1432);
}
void AGM_MedievalDynasty_C::M_SetChangeGameplaySettingsOnSeasonChange(const bool& value) {
	Write((byte*)this + 1432, value);
}
// Member Getter and Setter of NPCNeeds_WoodMultiplier_OnSeasonChange
// Declaration: float NPCNeeds_WoodMultiplier_OnSeasonChange
float AGM_MedievalDynasty_C::M_GetNPCNeeds_WoodMultiplier_OnSeasonChange() const {
	return Read<float>((byte*)this + 1436);
}
float* AGM_MedievalDynasty_C::M_PtrGetNPCNeeds_WoodMultiplier_OnSeasonChange() {
	return reinterpret_cast<float*>((byte*)this + 1436);
}
void AGM_MedievalDynasty_C::M_SetNPCNeeds_WoodMultiplier_OnSeasonChange(const float& value) {
	Write((byte*)this + 1436, value);
}
// Member Getter and Setter of AnimalsDamageMultiplier_OnSeasonChange
// Declaration: float AnimalsDamageMultiplier_OnSeasonChange
float AGM_MedievalDynasty_C::M_GetAnimalsDamageMultiplier_OnSeasonChange() const {
	return Read<float>((byte*)this + 1440);
}
float* AGM_MedievalDynasty_C::M_PtrGetAnimalsDamageMultiplier_OnSeasonChange() {
	return reinterpret_cast<float*>((byte*)this + 1440);
}
void AGM_MedievalDynasty_C::M_SetAnimalsDamageMultiplier_OnSeasonChange(const float& value) {
	Write((byte*)this + 1440, value);
}
// Member Getter and Setter of LoadingGameAchi
// Declaration: bool LoadingGameAchi
bool AGM_MedievalDynasty_C::M_GetLoadingGameAchi() const {
	return Read<bool>((byte*)this + 1444);
}
bool* AGM_MedievalDynasty_C::M_PtrGetLoadingGameAchi() {
	return reinterpret_cast<bool*>((byte*)this + 1444);
}
void AGM_MedievalDynasty_C::M_SetLoadingGameAchi(const bool& value) {
	Write((byte*)this + 1444, value);
}
// Member Getter and Setter of SystemLoadingIterator
// Declaration: int32_t SystemLoadingIterator
int32_t AGM_MedievalDynasty_C::M_GetSystemLoadingIterator() const {
	return Read<int32_t>((byte*)this + 1448);
}
int32_t* AGM_MedievalDynasty_C::M_PtrGetSystemLoadingIterator() {
	return reinterpret_cast<int32_t*>((byte*)this + 1448);
}
void AGM_MedievalDynasty_C::M_SetSystemLoadingIterator(const int32_t& value) {
	Write((byte*)this + 1448, value);
}
// Member Getter and Setter of SystemLoadingTask
// Declaration: class UMultiFrameAsyncTask* SystemLoadingTask
class UMultiFrameAsyncTask* AGM_MedievalDynasty_C::M_GetSystemLoadingTask() const {
	return Read<class UMultiFrameAsyncTask*>((byte*)this + 1456);
}
class UMultiFrameAsyncTask** AGM_MedievalDynasty_C::M_PtrGetSystemLoadingTask() {
	return reinterpret_cast<class UMultiFrameAsyncTask**>((byte*)this + 1456);
}
void AGM_MedievalDynasty_C::M_SetSystemLoadingTask(const class UMultiFrameAsyncTask*& value) {
	Write((byte*)this + 1456, value);
}
// Member Getter and Setter of FreeCameraSavedPositions
// Declaration: TArray<struct FVector> FreeCameraSavedPositions
TArray<struct FVector> AGM_MedievalDynasty_C::M_GetFreeCameraSavedPositions() const {
	return Read<TArray<struct FVector>>((byte*)this + 1464);
}
TArray<struct FVector>* AGM_MedievalDynasty_C::M_PtrGetFreeCameraSavedPositions() {
	return reinterpret_cast<TArray<struct FVector>*>((byte*)this + 1464);
}
void AGM_MedievalDynasty_C::M_SetFreeCameraSavedPositions(const TArray<struct FVector>& value) {
	Write((byte*)this + 1464, value);
}
// Member Getter and Setter of FreeCameraSavedRotations
// Declaration: TArray<struct FRotator> FreeCameraSavedRotations
TArray<struct FRotator> AGM_MedievalDynasty_C::M_GetFreeCameraSavedRotations() const {
	return Read<TArray<struct FRotator>>((byte*)this + 1480);
}
TArray<struct FRotator>* AGM_MedievalDynasty_C::M_PtrGetFreeCameraSavedRotations() {
	return reinterpret_cast<TArray<struct FRotator>*>((byte*)this + 1480);
}
void AGM_MedievalDynasty_C::M_SetFreeCameraSavedRotations(const TArray<struct FRotator>& value) {
	Write((byte*)this + 1480, value);
}
// Member Getter and Setter of Default_FastBuilding
// Declaration: bool Default_FastBuilding
bool AGM_MedievalDynasty_C::M_GetDefault_FastBuilding() const {
	return Read<bool>((byte*)this + 1496);
}
bool* AGM_MedievalDynasty_C::M_PtrGetDefault_FastBuilding() {
	return reinterpret_cast<bool*>((byte*)this + 1496);
}
void AGM_MedievalDynasty_C::M_SetDefault_FastBuilding(const bool& value) {
	Write((byte*)this + 1496, value);
}
// Member Getter and Setter of FastBuilding
// Declaration: bool FastBuilding
bool AGM_MedievalDynasty_C::M_GetFastBuilding() const {
	return Read<bool>((byte*)this + 1497);
}
bool* AGM_MedievalDynasty_C::M_PtrGetFastBuilding() {
	return reinterpret_cast<bool*>((byte*)this + 1497);
}
void AGM_MedievalDynasty_C::M_SetFastBuilding(const bool& value) {
	Write((byte*)this + 1497, value);
}
// Member Getter and Setter of Default_FastStorage
// Declaration: bool Default_FastStorage
bool AGM_MedievalDynasty_C::M_GetDefault_FastStorage() const {
	return Read<bool>((byte*)this + 1498);
}
bool* AGM_MedievalDynasty_C::M_PtrGetDefault_FastStorage() {
	return reinterpret_cast<bool*>((byte*)this + 1498);
}
void AGM_MedievalDynasty_C::M_SetDefault_FastStorage(const bool& value) {
	Write((byte*)this + 1498, value);
}
// Member Getter and Setter of FastStorage
// Declaration: bool FastStorage
bool AGM_MedievalDynasty_C::M_GetFastStorage() const {
	return Read<bool>((byte*)this + 1499);
}
bool* AGM_MedievalDynasty_C::M_PtrGetFastStorage() {
	return reinterpret_cast<bool*>((byte*)this + 1499);
}
void AGM_MedievalDynasty_C::M_SetFastStorage(const bool& value) {
	Write((byte*)this + 1499, value);
}
// Member Getter and Setter of Default_StopDestructionOverTime
// Declaration: bool Default_StopDestructionOverTime
bool AGM_MedievalDynasty_C::M_GetDefault_StopDestructionOverTime() const {
	return Read<bool>((byte*)this + 1500);
}
bool* AGM_MedievalDynasty_C::M_PtrGetDefault_StopDestructionOverTime() {
	return reinterpret_cast<bool*>((byte*)this + 1500);
}
void AGM_MedievalDynasty_C::M_SetDefault_StopDestructionOverTime(const bool& value) {
	Write((byte*)this + 1500, value);
}
// Member Getter and Setter of StopDestructionOverTime
// Declaration: bool StopDestructionOverTime
bool AGM_MedievalDynasty_C::M_GetStopDestructionOverTime() const {
	return Read<bool>((byte*)this + 1501);
}
bool* AGM_MedievalDynasty_C::M_PtrGetStopDestructionOverTime() {
	return reinterpret_cast<bool*>((byte*)this + 1501);
}
void AGM_MedievalDynasty_C::M_SetStopDestructionOverTime(const bool& value) {
	Write((byte*)this + 1501, value);
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
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.TryToAddAchievement
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::TryToAddAchievement() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.TryToAddAchievement");

	struct AGM_MedievalDynasty_C_TryToAddAchievement_Params {
	};
	AGM_MedievalDynasty_C_TryToAddAchievement_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.GiveAchievement
// Flags: HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: AchID	Type: struct FName	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::GiveAchievement(const struct FName& AchID) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.GiveAchievement");

	struct AGM_MedievalDynasty_C_GiveAchievement_Params {
		struct FName AchID;			//Offset: 0 | ElementSize: 8
	};
	AGM_MedievalDynasty_C_GiveAchievement_Params params;
	params.AchID = AchID;

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
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.CutsceneAudioFinished
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::CutsceneAudioFinished() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.CutsceneAudioFinished");

	struct AGM_MedievalDynasty_C_CutsceneAudioFinished_Params {
	};
	AGM_MedievalDynasty_C_CutsceneAudioFinished_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.CacheStats
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::CacheStats() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.CacheStats");

	struct AGM_MedievalDynasty_C_CacheStats_Params {
	};
	AGM_MedievalDynasty_C_CacheStats_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.AddStatProgress
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: StatName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StatValue	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::AddStatProgress(struct FName StatName, int32_t StatValue) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.AddStatProgress");

	struct AGM_MedievalDynasty_C_AddStatProgress_Params {
		struct FName StatName;			//Offset: 0 | ElementSize: 8
		int32_t StatValue;			//Offset: 8 | ElementSize: 4
	};
	AGM_MedievalDynasty_C_AddStatProgress_Params params;
	params.StatName = StatName;
	params.StatValue = StatValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.UnlockAchievement
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: AchievementID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::UnlockAchievement(struct FName AchievementID) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.UnlockAchievement");

	struct AGM_MedievalDynasty_C_UnlockAchievement_Params {
		struct FName AchievementID;			//Offset: 0 | ElementSize: 8
	};
	AGM_MedievalDynasty_C_UnlockAchievement_Params params;
	params.AchievementID = AchievementID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.StopTutorialVideo
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::StopTutorialVideo() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.StopTutorialVideo");

	struct AGM_MedievalDynasty_C_StopTutorialVideo_Params {
	};
	AGM_MedievalDynasty_C_StopTutorialVideo_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.StartTutorialVideo
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: MediaURL	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::StartTutorialVideo(struct FString MediaURL) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.StartTutorialVideo");

	struct AGM_MedievalDynasty_C_StartTutorialVideo_Params {
		struct FString MediaURL;			//Offset: 0 | ElementSize: 16
	};
	AGM_MedievalDynasty_C_StartTutorialVideo_Params params;
	params.MediaURL = MediaURL;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.PauseGameOnCutscene
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: OpenedUrl	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::PauseGameOnCutscene(struct FString OpenedUrl) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.PauseGameOnCutscene");

	struct AGM_MedievalDynasty_C_PauseGameOnCutscene_Params {
		struct FString OpenedUrl;			//Offset: 0 | ElementSize: 16
	};
	AGM_MedievalDynasty_C_PauseGameOnCutscene_Params params;
	params.OpenedUrl = OpenedUrl;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.RemoveCutsceneOnEnd
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::RemoveCutsceneOnEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.RemoveCutsceneOnEnd");

	struct AGM_MedievalDynasty_C_RemoveCutsceneOnEnd_Params {
	};
	AGM_MedievalDynasty_C_RemoveCutsceneOnEnd_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.CreateCutscene
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Type	Type: TEnumAsByte<E_Cutscenes>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MediaFileURL	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::CreateCutscene(TEnumAsByte<E_Cutscenes> Type, struct FString MediaFileURL) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.CreateCutscene");

	struct AGM_MedievalDynasty_C_CreateCutscene_Params {
		TEnumAsByte<E_Cutscenes> Type;			//Offset: 0 | ElementSize: 1
		struct FString MediaFileURL;			//Offset: 8 | ElementSize: 16
	};
	AGM_MedievalDynasty_C_CreateCutscene_Params params;
	params.Type = Type;
	params.MediaFileURL = MediaFileURL;

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
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.FinishIntro
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::FinishIntro() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.FinishIntro");

	struct AGM_MedievalDynasty_C_FinishIntro_Params {
	};
	AGM_MedievalDynasty_C_FinishIntro_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.SkipIntro
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::SkipIntro() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.SkipIntro");

	struct AGM_MedievalDynasty_C_SkipIntro_Params {
	};
	AGM_MedievalDynasty_C_SkipIntro_Params params;

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
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::InitGameMode() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.InitGameMode");

	struct AGM_MedievalDynasty_C_InitGameMode_Params {
	};
	AGM_MedievalDynasty_C_InitGameMode_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.OnSuccess_0485A37C4B2DCCF0972EA6AF5AF4D88C
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: LeaderboardValue	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::OnSuccess_0485A37C4B2DCCF0972EA6AF5AF4D88C(int32_t LeaderboardValue) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.OnSuccess_0485A37C4B2DCCF0972EA6AF5AF4D88C");

	struct AGM_MedievalDynasty_C_OnSuccess_0485A37C4B2DCCF0972EA6AF5AF4D88C_Params {
		int32_t LeaderboardValue;			//Offset: 0 | ElementSize: 4
	};
	AGM_MedievalDynasty_C_OnSuccess_0485A37C4B2DCCF0972EA6AF5AF4D88C_Params params;
	params.LeaderboardValue = LeaderboardValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.OnFailure_0485A37C4B2DCCF0972EA6AF5AF4D88C
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: LeaderboardValue	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::OnFailure_0485A37C4B2DCCF0972EA6AF5AF4D88C(int32_t LeaderboardValue) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.OnFailure_0485A37C4B2DCCF0972EA6AF5AF4D88C");

	struct AGM_MedievalDynasty_C_OnFailure_0485A37C4B2DCCF0972EA6AF5AF4D88C_Params {
		int32_t LeaderboardValue;			//Offset: 0 | ElementSize: 4
	};
	AGM_MedievalDynasty_C_OnFailure_0485A37C4B2DCCF0972EA6AF5AF4D88C_Params params;
	params.LeaderboardValue = LeaderboardValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.OnSuccess_28AC6FD24A567C5F48F6468535016AE5
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::OnSuccess_28AC6FD24A567C5F48F6468535016AE5() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.OnSuccess_28AC6FD24A567C5F48F6468535016AE5");

	struct AGM_MedievalDynasty_C_OnSuccess_28AC6FD24A567C5F48F6468535016AE5_Params {
	};
	AGM_MedievalDynasty_C_OnSuccess_28AC6FD24A567C5F48F6468535016AE5_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.OnFailure_28AC6FD24A567C5F48F6468535016AE5
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::OnFailure_28AC6FD24A567C5F48F6468535016AE5() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.OnFailure_28AC6FD24A567C5F48F6468535016AE5");

	struct AGM_MedievalDynasty_C_OnFailure_28AC6FD24A567C5F48F6468535016AE5_Params {
	};
	AGM_MedievalDynasty_C_OnFailure_28AC6FD24A567C5F48F6468535016AE5_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.OnSuccess_EA96BC0B4D703286A252DC8A122845D8
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::OnSuccess_EA96BC0B4D703286A252DC8A122845D8() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.OnSuccess_EA96BC0B4D703286A252DC8A122845D8");

	struct AGM_MedievalDynasty_C_OnSuccess_EA96BC0B4D703286A252DC8A122845D8_Params {
	};
	AGM_MedievalDynasty_C_OnSuccess_EA96BC0B4D703286A252DC8A122845D8_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.OnFailure_EA96BC0B4D703286A252DC8A122845D8
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::OnFailure_EA96BC0B4D703286A252DC8A122845D8() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.OnFailure_EA96BC0B4D703286A252DC8A122845D8");

	struct AGM_MedievalDynasty_C_OnFailure_EA96BC0B4D703286A252DC8A122845D8_Params {
	};
	AGM_MedievalDynasty_C_OnFailure_EA96BC0B4D703286A252DC8A122845D8_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.OnSuccess_84E5ED6846FFBFD86BF35FA93A18B780
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: LeaderboardValue	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::OnSuccess_84E5ED6846FFBFD86BF35FA93A18B780(int32_t LeaderboardValue) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.OnSuccess_84E5ED6846FFBFD86BF35FA93A18B780");

	struct AGM_MedievalDynasty_C_OnSuccess_84E5ED6846FFBFD86BF35FA93A18B780_Params {
		int32_t LeaderboardValue;			//Offset: 0 | ElementSize: 4
	};
	AGM_MedievalDynasty_C_OnSuccess_84E5ED6846FFBFD86BF35FA93A18B780_Params params;
	params.LeaderboardValue = LeaderboardValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.OnFailure_84E5ED6846FFBFD86BF35FA93A18B780
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: LeaderboardValue	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::OnFailure_84E5ED6846FFBFD86BF35FA93A18B780(int32_t LeaderboardValue) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.OnFailure_84E5ED6846FFBFD86BF35FA93A18B780");

	struct AGM_MedievalDynasty_C_OnFailure_84E5ED6846FFBFD86BF35FA93A18B780_Params {
		int32_t LeaderboardValue;			//Offset: 0 | ElementSize: 4
	};
	AGM_MedievalDynasty_C_OnFailure_84E5ED6846FFBFD86BF35FA93A18B780_Params params;
	params.LeaderboardValue = LeaderboardValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.OnSuccess_325541564D38FBB9162C08A8AD15D127
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: LeaderboardValue	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::OnSuccess_325541564D38FBB9162C08A8AD15D127(int32_t LeaderboardValue) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.OnSuccess_325541564D38FBB9162C08A8AD15D127");

	struct AGM_MedievalDynasty_C_OnSuccess_325541564D38FBB9162C08A8AD15D127_Params {
		int32_t LeaderboardValue;			//Offset: 0 | ElementSize: 4
	};
	AGM_MedievalDynasty_C_OnSuccess_325541564D38FBB9162C08A8AD15D127_Params params;
	params.LeaderboardValue = LeaderboardValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.OnFailure_325541564D38FBB9162C08A8AD15D127
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: LeaderboardValue	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::OnFailure_325541564D38FBB9162C08A8AD15D127(int32_t LeaderboardValue) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.OnFailure_325541564D38FBB9162C08A8AD15D127");

	struct AGM_MedievalDynasty_C_OnFailure_325541564D38FBB9162C08A8AD15D127_Params {
		int32_t LeaderboardValue;			//Offset: 0 | ElementSize: 4
	};
	AGM_MedievalDynasty_C_OnFailure_325541564D38FBB9162C08A8AD15D127_Params params;
	params.LeaderboardValue = LeaderboardValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.OnSuccess_5E4B41C341BD5DDDE7A72DA6B3702C96
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::OnSuccess_5E4B41C341BD5DDDE7A72DA6B3702C96() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.OnSuccess_5E4B41C341BD5DDDE7A72DA6B3702C96");

	struct AGM_MedievalDynasty_C_OnSuccess_5E4B41C341BD5DDDE7A72DA6B3702C96_Params {
	};
	AGM_MedievalDynasty_C_OnSuccess_5E4B41C341BD5DDDE7A72DA6B3702C96_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.OnFailure_5E4B41C341BD5DDDE7A72DA6B3702C96
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::OnFailure_5E4B41C341BD5DDDE7A72DA6B3702C96() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.OnFailure_5E4B41C341BD5DDDE7A72DA6B3702C96");

	struct AGM_MedievalDynasty_C_OnFailure_5E4B41C341BD5DDDE7A72DA6B3702C96_Params {
	};
	AGM_MedievalDynasty_C_OnFailure_5E4B41C341BD5DDDE7A72DA6B3702C96_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.OnSuccess_0CC84B6C433360CF7A58BCB17E8260E9
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::OnSuccess_0CC84B6C433360CF7A58BCB17E8260E9() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.OnSuccess_0CC84B6C433360CF7A58BCB17E8260E9");

	struct AGM_MedievalDynasty_C_OnSuccess_0CC84B6C433360CF7A58BCB17E8260E9_Params {
	};
	AGM_MedievalDynasty_C_OnSuccess_0CC84B6C433360CF7A58BCB17E8260E9_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.OnFailure_0CC84B6C433360CF7A58BCB17E8260E9
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::OnFailure_0CC84B6C433360CF7A58BCB17E8260E9() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.OnFailure_0CC84B6C433360CF7A58BCB17E8260E9");

	struct AGM_MedievalDynasty_C_OnFailure_0CC84B6C433360CF7A58BCB17E8260E9_Params {
	};
	AGM_MedievalDynasty_C_OnFailure_0CC84B6C433360CF7A58BCB17E8260E9_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.OnSuccess_9A8F1F054052C084E8E2BF8E2A1643F2
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: WrittenAchievementName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WrittenProgress	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WrittenUserTag	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::OnSuccess_9A8F1F054052C084E8E2BF8E2A1643F2(struct FName WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.OnSuccess_9A8F1F054052C084E8E2BF8E2A1643F2");

	struct AGM_MedievalDynasty_C_OnSuccess_9A8F1F054052C084E8E2BF8E2A1643F2_Params {
		struct FName WrittenAchievementName;			//Offset: 0 | ElementSize: 8
		float WrittenProgress;			//Offset: 8 | ElementSize: 4
		int32_t WrittenUserTag;			//Offset: 12 | ElementSize: 4
	};
	AGM_MedievalDynasty_C_OnSuccess_9A8F1F054052C084E8E2BF8E2A1643F2_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.OnFailure_9A8F1F054052C084E8E2BF8E2A1643F2
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: WrittenAchievementName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WrittenProgress	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WrittenUserTag	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::OnFailure_9A8F1F054052C084E8E2BF8E2A1643F2(struct FName WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.OnFailure_9A8F1F054052C084E8E2BF8E2A1643F2");

	struct AGM_MedievalDynasty_C_OnFailure_9A8F1F054052C084E8E2BF8E2A1643F2_Params {
		struct FName WrittenAchievementName;			//Offset: 0 | ElementSize: 8
		float WrittenProgress;			//Offset: 8 | ElementSize: 4
		int32_t WrittenUserTag;			//Offset: 12 | ElementSize: 4
	};
	AGM_MedievalDynasty_C_OnFailure_9A8F1F054052C084E8E2BF8E2A1643F2_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

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
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.CreateIntro
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
bool AGM_MedievalDynasty_C::CreateIntro() {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.CreateIntro");

	struct AGM_MedievalDynasty_C_CreateIntro_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AGM_MedievalDynasty_C_CreateIntro_Params params;

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
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.CreateDeathScreen
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: DeathType	Type: TEnumAsByte<E_DeathType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::CreateDeathScreen(TEnumAsByte<E_DeathType> DeathType) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.CreateDeathScreen");

	struct AGM_MedievalDynasty_C_CreateDeathScreen_Params {
		TEnumAsByte<E_DeathType> DeathType;			//Offset: 0 | ElementSize: 1
	};
	AGM_MedievalDynasty_C_CreateDeathScreen_Params params;
	params.DeathType = DeathType;

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
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
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
// Flags: Public, BlueprintCallable, BlueprintEvent
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
// Function GM_MedievalDynasty.GM_MedievalDynasty_C.RemoveCutscene
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Delay	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OldVideoURL	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGM_MedievalDynasty_C::RemoveCutscene(float Delay, struct FString* OldVideoURL) {
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.RemoveCutscene");

	struct AGM_MedievalDynasty_C_RemoveCutscene_Params {
		float Delay;			//Offset: 0 | ElementSize: 4
		struct FString OldVideoURL;			//Offset: 8 | ElementSize: 16
	};
	AGM_MedievalDynasty_C_RemoveCutscene_Params params;
	params.Delay = Delay;

	UObject::ProcessEvent(fn, &params);
	if (OldVideoURL != nullptr)
		*OldVideoURL = params.OldVideoURL;
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