#include "../SDK.h"
#include "GI_MedievalDynasty_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame UGI_MedievalDynasty_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 496);
}
struct FPointerToUberGraphFrame* UGI_MedievalDynasty_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 496);
}
void UGI_MedievalDynasty_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 496, value);
}
// Member Getter and Setter of DefaultMasterVolumeValue
// Declaration: float DefaultMasterVolumeValue
float UGI_MedievalDynasty_C::M_GetDefaultMasterVolumeValue() const {
	return Read<float>((byte*)this + 504);
}
float* UGI_MedievalDynasty_C::M_PtrGetDefaultMasterVolumeValue() {
	return reinterpret_cast<float*>((byte*)this + 504);
}
void UGI_MedievalDynasty_C::M_SetDefaultMasterVolumeValue(const float& value) {
	Write((byte*)this + 504, value);
}
// Member Getter and Setter of MasterVolumeValue
// Declaration: float MasterVolumeValue
float UGI_MedievalDynasty_C::M_GetMasterVolumeValue() const {
	return Read<float>((byte*)this + 508);
}
float* UGI_MedievalDynasty_C::M_PtrGetMasterVolumeValue() {
	return reinterpret_cast<float*>((byte*)this + 508);
}
void UGI_MedievalDynasty_C::M_SetMasterVolumeValue(const float& value) {
	Write((byte*)this + 508, value);
}
// Member Getter and Setter of DefaultSoundEffectVolumeValue
// Declaration: float DefaultSoundEffectVolumeValue
float UGI_MedievalDynasty_C::M_GetDefaultSoundEffectVolumeValue() const {
	return Read<float>((byte*)this + 512);
}
float* UGI_MedievalDynasty_C::M_PtrGetDefaultSoundEffectVolumeValue() {
	return reinterpret_cast<float*>((byte*)this + 512);
}
void UGI_MedievalDynasty_C::M_SetDefaultSoundEffectVolumeValue(const float& value) {
	Write((byte*)this + 512, value);
}
// Member Getter and Setter of SoundEffectVolumeValue
// Declaration: float SoundEffectVolumeValue
float UGI_MedievalDynasty_C::M_GetSoundEffectVolumeValue() const {
	return Read<float>((byte*)this + 516);
}
float* UGI_MedievalDynasty_C::M_PtrGetSoundEffectVolumeValue() {
	return reinterpret_cast<float*>((byte*)this + 516);
}
void UGI_MedievalDynasty_C::M_SetSoundEffectVolumeValue(const float& value) {
	Write((byte*)this + 516, value);
}
// Member Getter and Setter of DefaultVoiceVolumeValue
// Declaration: float DefaultVoiceVolumeValue
float UGI_MedievalDynasty_C::M_GetDefaultVoiceVolumeValue() const {
	return Read<float>((byte*)this + 520);
}
float* UGI_MedievalDynasty_C::M_PtrGetDefaultVoiceVolumeValue() {
	return reinterpret_cast<float*>((byte*)this + 520);
}
void UGI_MedievalDynasty_C::M_SetDefaultVoiceVolumeValue(const float& value) {
	Write((byte*)this + 520, value);
}
// Member Getter and Setter of VoiceVolumeValue
// Declaration: float VoiceVolumeValue
float UGI_MedievalDynasty_C::M_GetVoiceVolumeValue() const {
	return Read<float>((byte*)this + 524);
}
float* UGI_MedievalDynasty_C::M_PtrGetVoiceVolumeValue() {
	return reinterpret_cast<float*>((byte*)this + 524);
}
void UGI_MedievalDynasty_C::M_SetVoiceVolumeValue(const float& value) {
	Write((byte*)this + 524, value);
}
// Member Getter and Setter of DefaultMusicVolumeValue
// Declaration: float DefaultMusicVolumeValue
float UGI_MedievalDynasty_C::M_GetDefaultMusicVolumeValue() const {
	return Read<float>((byte*)this + 528);
}
float* UGI_MedievalDynasty_C::M_PtrGetDefaultMusicVolumeValue() {
	return reinterpret_cast<float*>((byte*)this + 528);
}
void UGI_MedievalDynasty_C::M_SetDefaultMusicVolumeValue(const float& value) {
	Write((byte*)this + 528, value);
}
// Member Getter and Setter of MusicVolumeValue
// Declaration: float MusicVolumeValue
float UGI_MedievalDynasty_C::M_GetMusicVolumeValue() const {
	return Read<float>((byte*)this + 532);
}
float* UGI_MedievalDynasty_C::M_PtrGetMusicVolumeValue() {
	return reinterpret_cast<float*>((byte*)this + 532);
}
void UGI_MedievalDynasty_C::M_SetMusicVolumeValue(const float& value) {
	Write((byte*)this + 532, value);
}
// Member Getter and Setter of ViewDistanceScale
// Declaration: int32_t ViewDistanceScale
int32_t UGI_MedievalDynasty_C::M_GetViewDistanceScale() const {
	return Read<int32_t>((byte*)this + 536);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetViewDistanceScale() {
	return reinterpret_cast<int32_t*>((byte*)this + 536);
}
void UGI_MedievalDynasty_C::M_SetViewDistanceScale(const int32_t& value) {
	Write((byte*)this + 536, value);
}
// Member Getter and Setter of PostProcessAAQuality
// Declaration: int32_t PostProcessAAQuality
int32_t UGI_MedievalDynasty_C::M_GetPostProcessAAQuality() const {
	return Read<int32_t>((byte*)this + 540);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetPostProcessAAQuality() {
	return reinterpret_cast<int32_t*>((byte*)this + 540);
}
void UGI_MedievalDynasty_C::M_SetPostProcessAAQuality(const int32_t& value) {
	Write((byte*)this + 540, value);
}
// Member Getter and Setter of PostProcessQuality
// Declaration: int32_t PostProcessQuality
int32_t UGI_MedievalDynasty_C::M_GetPostProcessQuality() const {
	return Read<int32_t>((byte*)this + 544);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetPostProcessQuality() {
	return reinterpret_cast<int32_t*>((byte*)this + 544);
}
void UGI_MedievalDynasty_C::M_SetPostProcessQuality(const int32_t& value) {
	Write((byte*)this + 544, value);
}
// Member Getter and Setter of ShadowQuality
// Declaration: int32_t ShadowQuality
int32_t UGI_MedievalDynasty_C::M_GetShadowQuality() const {
	return Read<int32_t>((byte*)this + 548);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetShadowQuality() {
	return reinterpret_cast<int32_t*>((byte*)this + 548);
}
void UGI_MedievalDynasty_C::M_SetShadowQuality(const int32_t& value) {
	Write((byte*)this + 548, value);
}
// Member Getter and Setter of TextureQuality
// Declaration: int32_t TextureQuality
int32_t UGI_MedievalDynasty_C::M_GetTextureQuality() const {
	return Read<int32_t>((byte*)this + 552);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetTextureQuality() {
	return reinterpret_cast<int32_t*>((byte*)this + 552);
}
void UGI_MedievalDynasty_C::M_SetTextureQuality(const int32_t& value) {
	Write((byte*)this + 552, value);
}
// Member Getter and Setter of EffectsQuality
// Declaration: int32_t EffectsQuality
int32_t UGI_MedievalDynasty_C::M_GetEffectsQuality() const {
	return Read<int32_t>((byte*)this + 556);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetEffectsQuality() {
	return reinterpret_cast<int32_t*>((byte*)this + 556);
}
void UGI_MedievalDynasty_C::M_SetEffectsQuality(const int32_t& value) {
	Write((byte*)this + 556, value);
}
// Member Getter and Setter of FoliageQuality
// Declaration: int32_t FoliageQuality
int32_t UGI_MedievalDynasty_C::M_GetFoliageQuality() const {
	return Read<int32_t>((byte*)this + 560);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetFoliageQuality() {
	return reinterpret_cast<int32_t*>((byte*)this + 560);
}
void UGI_MedievalDynasty_C::M_SetFoliageQuality(const int32_t& value) {
	Write((byte*)this + 560, value);
}
// Member Getter and Setter of Vsync
// Declaration: int32_t Vsync
int32_t UGI_MedievalDynasty_C::M_GetVsync() const {
	return Read<int32_t>((byte*)this + 564);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetVsync() {
	return reinterpret_cast<int32_t*>((byte*)this + 564);
}
void UGI_MedievalDynasty_C::M_SetVsync(const int32_t& value) {
	Write((byte*)this + 564, value);
}
// Member Getter and Setter of FrameRateLimit
// Declaration: int32_t FrameRateLimit
int32_t UGI_MedievalDynasty_C::M_GetFrameRateLimit() const {
	return Read<int32_t>((byte*)this + 568);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetFrameRateLimit() {
	return reinterpret_cast<int32_t*>((byte*)this + 568);
}
void UGI_MedievalDynasty_C::M_SetFrameRateLimit(const int32_t& value) {
	Write((byte*)this + 568, value);
}
// Member Getter and Setter of FramerateLimitID
// Declaration: int32_t FramerateLimitID
int32_t UGI_MedievalDynasty_C::M_GetFramerateLimitID() const {
	return Read<int32_t>((byte*)this + 572);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetFramerateLimitID() {
	return reinterpret_cast<int32_t*>((byte*)this + 572);
}
void UGI_MedievalDynasty_C::M_SetFramerateLimitID(const int32_t& value) {
	Write((byte*)this + 572, value);
}
// Member Getter and Setter of ViewDistances
// Declaration: TArray<int32_t> ViewDistances
TArray<int32_t> UGI_MedievalDynasty_C::M_GetViewDistances() const {
	return Read<TArray<int32_t>>((byte*)this + 576);
}
TArray<int32_t>* UGI_MedievalDynasty_C::M_PtrGetViewDistances() {
	return reinterpret_cast<TArray<int32_t>*>((byte*)this + 576);
}
void UGI_MedievalDynasty_C::M_SetViewDistances(const TArray<int32_t>& value) {
	Write((byte*)this + 576, value);
}
// Member Getter and Setter of DefaultButtonViewDistanceID
// Declaration: int32_t DefaultButtonViewDistanceID
int32_t UGI_MedievalDynasty_C::M_GetDefaultButtonViewDistanceID() const {
	return Read<int32_t>((byte*)this + 592);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultButtonViewDistanceID() {
	return reinterpret_cast<int32_t*>((byte*)this + 592);
}
void UGI_MedievalDynasty_C::M_SetDefaultButtonViewDistanceID(const int32_t& value) {
	Write((byte*)this + 592, value);
}
// Member Getter and Setter of AntiAliasing
// Declaration: TArray<int32_t> AntiAliasing
TArray<int32_t> UGI_MedievalDynasty_C::M_GetAntiAliasing() const {
	return Read<TArray<int32_t>>((byte*)this + 600);
}
TArray<int32_t>* UGI_MedievalDynasty_C::M_PtrGetAntiAliasing() {
	return reinterpret_cast<TArray<int32_t>*>((byte*)this + 600);
}
void UGI_MedievalDynasty_C::M_SetAntiAliasing(const TArray<int32_t>& value) {
	Write((byte*)this + 600, value);
}
// Member Getter and Setter of DefaultButtonAntiAliasingID
// Declaration: int32_t DefaultButtonAntiAliasingID
int32_t UGI_MedievalDynasty_C::M_GetDefaultButtonAntiAliasingID() const {
	return Read<int32_t>((byte*)this + 616);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultButtonAntiAliasingID() {
	return reinterpret_cast<int32_t*>((byte*)this + 616);
}
void UGI_MedievalDynasty_C::M_SetDefaultButtonAntiAliasingID(const int32_t& value) {
	Write((byte*)this + 616, value);
}
// Member Getter and Setter of PostProcessings
// Declaration: TArray<int32_t> PostProcessings
TArray<int32_t> UGI_MedievalDynasty_C::M_GetPostProcessings() const {
	return Read<TArray<int32_t>>((byte*)this + 624);
}
TArray<int32_t>* UGI_MedievalDynasty_C::M_PtrGetPostProcessings() {
	return reinterpret_cast<TArray<int32_t>*>((byte*)this + 624);
}
void UGI_MedievalDynasty_C::M_SetPostProcessings(const TArray<int32_t>& value) {
	Write((byte*)this + 624, value);
}
// Member Getter and Setter of DefaultButtonPostProcessingID
// Declaration: int32_t DefaultButtonPostProcessingID
int32_t UGI_MedievalDynasty_C::M_GetDefaultButtonPostProcessingID() const {
	return Read<int32_t>((byte*)this + 640);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultButtonPostProcessingID() {
	return reinterpret_cast<int32_t*>((byte*)this + 640);
}
void UGI_MedievalDynasty_C::M_SetDefaultButtonPostProcessingID(const int32_t& value) {
	Write((byte*)this + 640, value);
}
// Member Getter and Setter of Shadows
// Declaration: TArray<int32_t> Shadows
TArray<int32_t> UGI_MedievalDynasty_C::M_GetShadows() const {
	return Read<TArray<int32_t>>((byte*)this + 648);
}
TArray<int32_t>* UGI_MedievalDynasty_C::M_PtrGetShadows() {
	return reinterpret_cast<TArray<int32_t>*>((byte*)this + 648);
}
void UGI_MedievalDynasty_C::M_SetShadows(const TArray<int32_t>& value) {
	Write((byte*)this + 648, value);
}
// Member Getter and Setter of DefaultButtonShadowsID
// Declaration: int32_t DefaultButtonShadowsID
int32_t UGI_MedievalDynasty_C::M_GetDefaultButtonShadowsID() const {
	return Read<int32_t>((byte*)this + 664);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultButtonShadowsID() {
	return reinterpret_cast<int32_t*>((byte*)this + 664);
}
void UGI_MedievalDynasty_C::M_SetDefaultButtonShadowsID(const int32_t& value) {
	Write((byte*)this + 664, value);
}
// Member Getter and Setter of Textures
// Declaration: TArray<int32_t> Textures
TArray<int32_t> UGI_MedievalDynasty_C::M_GetTextures() const {
	return Read<TArray<int32_t>>((byte*)this + 672);
}
TArray<int32_t>* UGI_MedievalDynasty_C::M_PtrGetTextures() {
	return reinterpret_cast<TArray<int32_t>*>((byte*)this + 672);
}
void UGI_MedievalDynasty_C::M_SetTextures(const TArray<int32_t>& value) {
	Write((byte*)this + 672, value);
}
// Member Getter and Setter of DefaultButtonTexturesID
// Declaration: int32_t DefaultButtonTexturesID
int32_t UGI_MedievalDynasty_C::M_GetDefaultButtonTexturesID() const {
	return Read<int32_t>((byte*)this + 688);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultButtonTexturesID() {
	return reinterpret_cast<int32_t*>((byte*)this + 688);
}
void UGI_MedievalDynasty_C::M_SetDefaultButtonTexturesID(const int32_t& value) {
	Write((byte*)this + 688, value);
}
// Member Getter and Setter of Effects
// Declaration: TArray<int32_t> Effects
TArray<int32_t> UGI_MedievalDynasty_C::M_GetEffects() const {
	return Read<TArray<int32_t>>((byte*)this + 696);
}
TArray<int32_t>* UGI_MedievalDynasty_C::M_PtrGetEffects() {
	return reinterpret_cast<TArray<int32_t>*>((byte*)this + 696);
}
void UGI_MedievalDynasty_C::M_SetEffects(const TArray<int32_t>& value) {
	Write((byte*)this + 696, value);
}
// Member Getter and Setter of DefaultButtonEffectsID
// Declaration: int32_t DefaultButtonEffectsID
int32_t UGI_MedievalDynasty_C::M_GetDefaultButtonEffectsID() const {
	return Read<int32_t>((byte*)this + 712);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultButtonEffectsID() {
	return reinterpret_cast<int32_t*>((byte*)this + 712);
}
void UGI_MedievalDynasty_C::M_SetDefaultButtonEffectsID(const int32_t& value) {
	Write((byte*)this + 712, value);
}
// Member Getter and Setter of Foliage
// Declaration: TArray<int32_t> Foliage
TArray<int32_t> UGI_MedievalDynasty_C::M_GetFoliage() const {
	return Read<TArray<int32_t>>((byte*)this + 720);
}
TArray<int32_t>* UGI_MedievalDynasty_C::M_PtrGetFoliage() {
	return reinterpret_cast<TArray<int32_t>*>((byte*)this + 720);
}
void UGI_MedievalDynasty_C::M_SetFoliage(const TArray<int32_t>& value) {
	Write((byte*)this + 720, value);
}
// Member Getter and Setter of DefaultButtonFoliageID
// Declaration: int32_t DefaultButtonFoliageID
int32_t UGI_MedievalDynasty_C::M_GetDefaultButtonFoliageID() const {
	return Read<int32_t>((byte*)this + 736);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultButtonFoliageID() {
	return reinterpret_cast<int32_t*>((byte*)this + 736);
}
void UGI_MedievalDynasty_C::M_SetDefaultButtonFoliageID(const int32_t& value) {
	Write((byte*)this + 736, value);
}
// Member Getter and Setter of WindowMode
// Declaration: int32_t WindowMode
int32_t UGI_MedievalDynasty_C::M_GetWindowMode() const {
	return Read<int32_t>((byte*)this + 740);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetWindowMode() {
	return reinterpret_cast<int32_t*>((byte*)this + 740);
}
void UGI_MedievalDynasty_C::M_SetWindowMode(const int32_t& value) {
	Write((byte*)this + 740, value);
}
// Member Getter and Setter of WindowModes
// Declaration: TArray<int32_t> WindowModes
TArray<int32_t> UGI_MedievalDynasty_C::M_GetWindowModes() const {
	return Read<TArray<int32_t>>((byte*)this + 744);
}
TArray<int32_t>* UGI_MedievalDynasty_C::M_PtrGetWindowModes() {
	return reinterpret_cast<TArray<int32_t>*>((byte*)this + 744);
}
void UGI_MedievalDynasty_C::M_SetWindowModes(const TArray<int32_t>& value) {
	Write((byte*)this + 744, value);
}
// Member Getter and Setter of Resolution
// Declaration: struct FString Resolution
struct FString UGI_MedievalDynasty_C::M_GetResolution() const {
	return Read<struct FString>((byte*)this + 760);
}
struct FString* UGI_MedievalDynasty_C::M_PtrGetResolution() {
	return reinterpret_cast<struct FString*>((byte*)this + 760);
}
void UGI_MedievalDynasty_C::M_SetResolution(const struct FString& value) {
	Write((byte*)this + 760, value);
}
// Member Getter and Setter of Resolutions4_3
// Declaration: TArray<struct FString> Resolutions4_3
TArray<struct FString> UGI_MedievalDynasty_C::M_GetResolutions4_3() const {
	return Read<TArray<struct FString>>((byte*)this + 776);
}
TArray<struct FString>* UGI_MedievalDynasty_C::M_PtrGetResolutions4_3() {
	return reinterpret_cast<TArray<struct FString>*>((byte*)this + 776);
}
void UGI_MedievalDynasty_C::M_SetResolutions4_3(const TArray<struct FString>& value) {
	Write((byte*)this + 776, value);
}
// Member Getter and Setter of Resolutions16_9
// Declaration: TArray<struct FString> Resolutions16_9
TArray<struct FString> UGI_MedievalDynasty_C::M_GetResolutions16_9() const {
	return Read<TArray<struct FString>>((byte*)this + 792);
}
TArray<struct FString>* UGI_MedievalDynasty_C::M_PtrGetResolutions16_9() {
	return reinterpret_cast<TArray<struct FString>*>((byte*)this + 792);
}
void UGI_MedievalDynasty_C::M_SetResolutions16_9(const TArray<struct FString>& value) {
	Write((byte*)this + 792, value);
}
// Member Getter and Setter of Resolutions16_10
// Declaration: TArray<struct FString> Resolutions16_10
TArray<struct FString> UGI_MedievalDynasty_C::M_GetResolutions16_10() const {
	return Read<TArray<struct FString>>((byte*)this + 808);
}
TArray<struct FString>* UGI_MedievalDynasty_C::M_PtrGetResolutions16_10() {
	return reinterpret_cast<TArray<struct FString>*>((byte*)this + 808);
}
void UGI_MedievalDynasty_C::M_SetResolutions16_10(const TArray<struct FString>& value) {
	Write((byte*)this + 808, value);
}
// Member Getter and Setter of Resolutions21_9
// Declaration: TArray<struct FString> Resolutions21_9
TArray<struct FString> UGI_MedievalDynasty_C::M_GetResolutions21_9() const {
	return Read<TArray<struct FString>>((byte*)this + 824);
}
TArray<struct FString>* UGI_MedievalDynasty_C::M_PtrGetResolutions21_9() {
	return reinterpret_cast<TArray<struct FString>*>((byte*)this + 824);
}
void UGI_MedievalDynasty_C::M_SetResolutions21_9(const TArray<struct FString>& value) {
	Write((byte*)this + 824, value);
}
// Member Getter and Setter of Resolutions32_9
// Declaration: TArray<struct FString> Resolutions32_9
TArray<struct FString> UGI_MedievalDynasty_C::M_GetResolutions32_9() const {
	return Read<TArray<struct FString>>((byte*)this + 840);
}
TArray<struct FString>* UGI_MedievalDynasty_C::M_PtrGetResolutions32_9() {
	return reinterpret_cast<TArray<struct FString>*>((byte*)this + 840);
}
void UGI_MedievalDynasty_C::M_SetResolutions32_9(const TArray<struct FString>& value) {
	Write((byte*)this + 840, value);
}
// Member Getter and Setter of DefaultButtonResolutionID
// Declaration: int32_t DefaultButtonResolutionID
int32_t UGI_MedievalDynasty_C::M_GetDefaultButtonResolutionID() const {
	return Read<int32_t>((byte*)this + 856);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultButtonResolutionID() {
	return reinterpret_cast<int32_t*>((byte*)this + 856);
}
void UGI_MedievalDynasty_C::M_SetDefaultButtonResolutionID(const int32_t& value) {
	Write((byte*)this + 856, value);
}
// Member Getter and Setter of AspectRatio
// Declaration: struct FVector2D AspectRatio
struct FVector2D UGI_MedievalDynasty_C::M_GetAspectRatio() const {
	return Read<struct FVector2D>((byte*)this + 860);
}
struct FVector2D* UGI_MedievalDynasty_C::M_PtrGetAspectRatio() {
	return reinterpret_cast<struct FVector2D*>((byte*)this + 860);
}
void UGI_MedievalDynasty_C::M_SetAspectRatio(const struct FVector2D& value) {
	Write((byte*)this + 860, value);
}
// Member Getter and Setter of DefaultButtonAspectRatioID
// Declaration: int32_t DefaultButtonAspectRatioID
int32_t UGI_MedievalDynasty_C::M_GetDefaultButtonAspectRatioID() const {
	return Read<int32_t>((byte*)this + 868);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultButtonAspectRatioID() {
	return reinterpret_cast<int32_t*>((byte*)this + 868);
}
void UGI_MedievalDynasty_C::M_SetDefaultButtonAspectRatioID(const int32_t& value) {
	Write((byte*)this + 868, value);
}
// Member Getter and Setter of Vsyncs
// Declaration: TArray<int32_t> Vsyncs
TArray<int32_t> UGI_MedievalDynasty_C::M_GetVsyncs() const {
	return Read<TArray<int32_t>>((byte*)this + 872);
}
TArray<int32_t>* UGI_MedievalDynasty_C::M_PtrGetVsyncs() {
	return reinterpret_cast<TArray<int32_t>*>((byte*)this + 872);
}
void UGI_MedievalDynasty_C::M_SetVsyncs(const TArray<int32_t>& value) {
	Write((byte*)this + 872, value);
}
// Member Getter and Setter of DefaultButtonVsyncID
// Declaration: int32_t DefaultButtonVsyncID
int32_t UGI_MedievalDynasty_C::M_GetDefaultButtonVsyncID() const {
	return Read<int32_t>((byte*)this + 888);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultButtonVsyncID() {
	return reinterpret_cast<int32_t*>((byte*)this + 888);
}
void UGI_MedievalDynasty_C::M_SetDefaultButtonVsyncID(const int32_t& value) {
	Write((byte*)this + 888, value);
}
// Member Getter and Setter of DefaultButtonWindowModeID
// Declaration: int32_t DefaultButtonWindowModeID
int32_t UGI_MedievalDynasty_C::M_GetDefaultButtonWindowModeID() const {
	return Read<int32_t>((byte*)this + 892);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultButtonWindowModeID() {
	return reinterpret_cast<int32_t*>((byte*)this + 892);
}
void UGI_MedievalDynasty_C::M_SetDefaultButtonWindowModeID(const int32_t& value) {
	Write((byte*)this + 892, value);
}
// Member Getter and Setter of DefaultFramerateID
// Declaration: int32_t DefaultFramerateID
int32_t UGI_MedievalDynasty_C::M_GetDefaultFramerateID() const {
	return Read<int32_t>((byte*)this + 896);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultFramerateID() {
	return reinterpret_cast<int32_t*>((byte*)this + 896);
}
void UGI_MedievalDynasty_C::M_SetDefaultFramerateID(const int32_t& value) {
	Write((byte*)this + 896, value);
}
// Member Getter and Setter of ViewDistanceScaleID
// Declaration: int32_t ViewDistanceScaleID
int32_t UGI_MedievalDynasty_C::M_GetViewDistanceScaleID() const {
	return Read<int32_t>((byte*)this + 900);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetViewDistanceScaleID() {
	return reinterpret_cast<int32_t*>((byte*)this + 900);
}
void UGI_MedievalDynasty_C::M_SetViewDistanceScaleID(const int32_t& value) {
	Write((byte*)this + 900, value);
}
// Member Getter and Setter of PostProcessAAQualityID
// Declaration: int32_t PostProcessAAQualityID
int32_t UGI_MedievalDynasty_C::M_GetPostProcessAAQualityID() const {
	return Read<int32_t>((byte*)this + 904);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetPostProcessAAQualityID() {
	return reinterpret_cast<int32_t*>((byte*)this + 904);
}
void UGI_MedievalDynasty_C::M_SetPostProcessAAQualityID(const int32_t& value) {
	Write((byte*)this + 904, value);
}
// Member Getter and Setter of PostProcessQualityID
// Declaration: int32_t PostProcessQualityID
int32_t UGI_MedievalDynasty_C::M_GetPostProcessQualityID() const {
	return Read<int32_t>((byte*)this + 908);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetPostProcessQualityID() {
	return reinterpret_cast<int32_t*>((byte*)this + 908);
}
void UGI_MedievalDynasty_C::M_SetPostProcessQualityID(const int32_t& value) {
	Write((byte*)this + 908, value);
}
// Member Getter and Setter of ShadowQualityID
// Declaration: int32_t ShadowQualityID
int32_t UGI_MedievalDynasty_C::M_GetShadowQualityID() const {
	return Read<int32_t>((byte*)this + 912);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetShadowQualityID() {
	return reinterpret_cast<int32_t*>((byte*)this + 912);
}
void UGI_MedievalDynasty_C::M_SetShadowQualityID(const int32_t& value) {
	Write((byte*)this + 912, value);
}
// Member Getter and Setter of TextureQualityID
// Declaration: int32_t TextureQualityID
int32_t UGI_MedievalDynasty_C::M_GetTextureQualityID() const {
	return Read<int32_t>((byte*)this + 916);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetTextureQualityID() {
	return reinterpret_cast<int32_t*>((byte*)this + 916);
}
void UGI_MedievalDynasty_C::M_SetTextureQualityID(const int32_t& value) {
	Write((byte*)this + 916, value);
}
// Member Getter and Setter of EffectsQualityID
// Declaration: int32_t EffectsQualityID
int32_t UGI_MedievalDynasty_C::M_GetEffectsQualityID() const {
	return Read<int32_t>((byte*)this + 920);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetEffectsQualityID() {
	return reinterpret_cast<int32_t*>((byte*)this + 920);
}
void UGI_MedievalDynasty_C::M_SetEffectsQualityID(const int32_t& value) {
	Write((byte*)this + 920, value);
}
// Member Getter and Setter of FoliageQualityID
// Declaration: int32_t FoliageQualityID
int32_t UGI_MedievalDynasty_C::M_GetFoliageQualityID() const {
	return Read<int32_t>((byte*)this + 924);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetFoliageQualityID() {
	return reinterpret_cast<int32_t*>((byte*)this + 924);
}
void UGI_MedievalDynasty_C::M_SetFoliageQualityID(const int32_t& value) {
	Write((byte*)this + 924, value);
}
// Member Getter and Setter of ResolutionID
// Declaration: int32_t ResolutionID
int32_t UGI_MedievalDynasty_C::M_GetResolutionID() const {
	return Read<int32_t>((byte*)this + 928);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetResolutionID() {
	return reinterpret_cast<int32_t*>((byte*)this + 928);
}
void UGI_MedievalDynasty_C::M_SetResolutionID(const int32_t& value) {
	Write((byte*)this + 928, value);
}
// Member Getter and Setter of AspectRatioID
// Declaration: int32_t AspectRatioID
int32_t UGI_MedievalDynasty_C::M_GetAspectRatioID() const {
	return Read<int32_t>((byte*)this + 932);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetAspectRatioID() {
	return reinterpret_cast<int32_t*>((byte*)this + 932);
}
void UGI_MedievalDynasty_C::M_SetAspectRatioID(const int32_t& value) {
	Write((byte*)this + 932, value);
}
// Member Getter and Setter of VsyncID
// Declaration: int32_t VsyncID
int32_t UGI_MedievalDynasty_C::M_GetVsyncID() const {
	return Read<int32_t>((byte*)this + 936);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetVsyncID() {
	return reinterpret_cast<int32_t*>((byte*)this + 936);
}
void UGI_MedievalDynasty_C::M_SetVsyncID(const int32_t& value) {
	Write((byte*)this + 936, value);
}
// Member Getter and Setter of WindowModeID
// Declaration: int32_t WindowModeID
int32_t UGI_MedievalDynasty_C::M_GetWindowModeID() const {
	return Read<int32_t>((byte*)this + 940);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetWindowModeID() {
	return reinterpret_cast<int32_t*>((byte*)this + 940);
}
void UGI_MedievalDynasty_C::M_SetWindowModeID(const int32_t& value) {
	Write((byte*)this + 940, value);
}
// Member Getter and Setter of FramerateLimits
// Declaration: TArray<int32_t> FramerateLimits
TArray<int32_t> UGI_MedievalDynasty_C::M_GetFramerateLimits() const {
	return Read<TArray<int32_t>>((byte*)this + 944);
}
TArray<int32_t>* UGI_MedievalDynasty_C::M_PtrGetFramerateLimits() {
	return reinterpret_cast<TArray<int32_t>*>((byte*)this + 944);
}
void UGI_MedievalDynasty_C::M_SetFramerateLimits(const TArray<int32_t>& value) {
	Write((byte*)this + 944, value);
}
// Member Getter and Setter of TonemapperSharpenValue
// Declaration: float TonemapperSharpenValue
float UGI_MedievalDynasty_C::M_GetTonemapperSharpenValue() const {
	return Read<float>((byte*)this + 960);
}
float* UGI_MedievalDynasty_C::M_PtrGetTonemapperSharpenValue() {
	return reinterpret_cast<float*>((byte*)this + 960);
}
void UGI_MedievalDynasty_C::M_SetTonemapperSharpenValue(const float& value) {
	Write((byte*)this + 960, value);
}
// Member Getter and Setter of DefaultTonemapperSharpenValue
// Declaration: float DefaultTonemapperSharpenValue
float UGI_MedievalDynasty_C::M_GetDefaultTonemapperSharpenValue() const {
	return Read<float>((byte*)this + 964);
}
float* UGI_MedievalDynasty_C::M_PtrGetDefaultTonemapperSharpenValue() {
	return reinterpret_cast<float*>((byte*)this + 964);
}
void UGI_MedievalDynasty_C::M_SetDefaultTonemapperSharpenValue(const float& value) {
	Write((byte*)this + 964, value);
}
// Member Getter and Setter of TempGraphicArray
// Declaration: TArray<int32_t> TempGraphicArray
TArray<int32_t> UGI_MedievalDynasty_C::M_GetTempGraphicArray() const {
	return Read<TArray<int32_t>>((byte*)this + 968);
}
TArray<int32_t>* UGI_MedievalDynasty_C::M_PtrGetTempGraphicArray() {
	return reinterpret_cast<TArray<int32_t>*>((byte*)this + 968);
}
void UGI_MedievalDynasty_C::M_SetTempGraphicArray(const TArray<int32_t>& value) {
	Write((byte*)this + 968, value);
}
// Member Getter and Setter of DFAO
// Declaration: bool DFAO
bool UGI_MedievalDynasty_C::M_GetDFAO() const {
	return Read<bool>((byte*)this + 984);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDFAO() {
	return reinterpret_cast<bool*>((byte*)this + 984);
}
void UGI_MedievalDynasty_C::M_SetDFAO(const bool& value) {
	Write((byte*)this + 984, value);
}
// Member Getter and Setter of DefaultDFAO
// Declaration: bool DefaultDFAO
bool UGI_MedievalDynasty_C::M_GetDefaultDFAO() const {
	return Read<bool>((byte*)this + 985);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultDFAO() {
	return reinterpret_cast<bool*>((byte*)this + 985);
}
void UGI_MedievalDynasty_C::M_SetDefaultDFAO(const bool& value) {
	Write((byte*)this + 985, value);
}
// Member Getter and Setter of DLSSQualityID
// Declaration: int32_t DLSSQualityID
int32_t UGI_MedievalDynasty_C::M_GetDLSSQualityID() const {
	return Read<int32_t>((byte*)this + 988);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDLSSQualityID() {
	return reinterpret_cast<int32_t*>((byte*)this + 988);
}
void UGI_MedievalDynasty_C::M_SetDLSSQualityID(const int32_t& value) {
	Write((byte*)this + 988, value);
}
// Member Getter and Setter of DLSSFallbackQualityID
// Declaration: int32_t DLSSFallbackQualityID
int32_t UGI_MedievalDynasty_C::M_GetDLSSFallbackQualityID() const {
	return Read<int32_t>((byte*)this + 992);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDLSSFallbackQualityID() {
	return reinterpret_cast<int32_t*>((byte*)this + 992);
}
void UGI_MedievalDynasty_C::M_SetDLSSFallbackQualityID(const int32_t& value) {
	Write((byte*)this + 992, value);
}
// Member Getter and Setter of DLSSSharpness
// Declaration: float DLSSSharpness
float UGI_MedievalDynasty_C::M_GetDLSSSharpness() const {
	return Read<float>((byte*)this + 996);
}
float* UGI_MedievalDynasty_C::M_PtrGetDLSSSharpness() {
	return reinterpret_cast<float*>((byte*)this + 996);
}
void UGI_MedievalDynasty_C::M_SetDLSSSharpness(const float& value) {
	Write((byte*)this + 996, value);
}
// Member Getter and Setter of DLSSFallbackAAMethod
// Declaration: int32_t DLSSFallbackAAMethod
int32_t UGI_MedievalDynasty_C::M_GetDLSSFallbackAAMethod() const {
	return Read<int32_t>((byte*)this + 1000);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDLSSFallbackAAMethod() {
	return reinterpret_cast<int32_t*>((byte*)this + 1000);
}
void UGI_MedievalDynasty_C::M_SetDLSSFallbackAAMethod(const int32_t& value) {
	Write((byte*)this + 1000, value);
}
// Member Getter and Setter of DLSS
// Declaration: bool DLSS
bool UGI_MedievalDynasty_C::M_GetDLSS() const {
	return Read<bool>((byte*)this + 1004);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDLSS() {
	return reinterpret_cast<bool*>((byte*)this + 1004);
}
void UGI_MedievalDynasty_C::M_SetDLSS(const bool& value) {
	Write((byte*)this + 1004, value);
}
// Member Getter and Setter of DefaultDLSSSharpness
// Declaration: float DefaultDLSSSharpness
float UGI_MedievalDynasty_C::M_GetDefaultDLSSSharpness() const {
	return Read<float>((byte*)this + 1008);
}
float* UGI_MedievalDynasty_C::M_PtrGetDefaultDLSSSharpness() {
	return reinterpret_cast<float*>((byte*)this + 1008);
}
void UGI_MedievalDynasty_C::M_SetDefaultDLSSSharpness(const float& value) {
	Write((byte*)this + 1008, value);
}
// Member Getter and Setter of DefaultDLSSQualityID
// Declaration: int32_t DefaultDLSSQualityID
int32_t UGI_MedievalDynasty_C::M_GetDefaultDLSSQualityID() const {
	return Read<int32_t>((byte*)this + 1012);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultDLSSQualityID() {
	return reinterpret_cast<int32_t*>((byte*)this + 1012);
}
void UGI_MedievalDynasty_C::M_SetDefaultDLSSQualityID(const int32_t& value) {
	Write((byte*)this + 1012, value);
}
// Member Getter and Setter of DefaultDLSSFallbackQualityID
// Declaration: int32_t DefaultDLSSFallbackQualityID
int32_t UGI_MedievalDynasty_C::M_GetDefaultDLSSFallbackQualityID() const {
	return Read<int32_t>((byte*)this + 1016);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultDLSSFallbackQualityID() {
	return reinterpret_cast<int32_t*>((byte*)this + 1016);
}
void UGI_MedievalDynasty_C::M_SetDefaultDLSSFallbackQualityID(const int32_t& value) {
	Write((byte*)this + 1016, value);
}
// Member Getter and Setter of DefaultDLSSFallbackAAMethod
// Declaration: int32_t DefaultDLSSFallbackAAMethod
int32_t UGI_MedievalDynasty_C::M_GetDefaultDLSSFallbackAAMethod() const {
	return Read<int32_t>((byte*)this + 1020);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultDLSSFallbackAAMethod() {
	return reinterpret_cast<int32_t*>((byte*)this + 1020);
}
void UGI_MedievalDynasty_C::M_SetDefaultDLSSFallbackAAMethod(const int32_t& value) {
	Write((byte*)this + 1020, value);
}
// Member Getter and Setter of DefaultDLSS
// Declaration: bool DefaultDLSS
bool UGI_MedievalDynasty_C::M_GetDefaultDLSS() const {
	return Read<bool>((byte*)this + 1024);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultDLSS() {
	return reinterpret_cast<bool*>((byte*)this + 1024);
}
void UGI_MedievalDynasty_C::M_SetDefaultDLSS(const bool& value) {
	Write((byte*)this + 1024, value);
}
// Member Getter and Setter of ContactShadows
// Declaration: bool ContactShadows
bool UGI_MedievalDynasty_C::M_GetContactShadows() const {
	return Read<bool>((byte*)this + 1025);
}
bool* UGI_MedievalDynasty_C::M_PtrGetContactShadows() {
	return reinterpret_cast<bool*>((byte*)this + 1025);
}
void UGI_MedievalDynasty_C::M_SetContactShadows(const bool& value) {
	Write((byte*)this + 1025, value);
}
// Member Getter and Setter of DefaultContactShadows
// Declaration: bool DefaultContactShadows
bool UGI_MedievalDynasty_C::M_GetDefaultContactShadows() const {
	return Read<bool>((byte*)this + 1026);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultContactShadows() {
	return reinterpret_cast<bool*>((byte*)this + 1026);
}
void UGI_MedievalDynasty_C::M_SetDefaultContactShadows(const bool& value) {
	Write((byte*)this + 1026, value);
}
// Member Getter and Setter of TempSoundArray
// Declaration: TArray<float> TempSoundArray
TArray<float> UGI_MedievalDynasty_C::M_GetTempSoundArray() const {
	return Read<TArray<float>>((byte*)this + 1032);
}
TArray<float>* UGI_MedievalDynasty_C::M_PtrGetTempSoundArray() {
	return reinterpret_cast<TArray<float>*>((byte*)this + 1032);
}
void UGI_MedievalDynasty_C::M_SetTempSoundArray(const TArray<float>& value) {
	Write((byte*)this + 1032, value);
}
// Member Getter and Setter of DefaultUIVolumeValue
// Declaration: float DefaultUIVolumeValue
float UGI_MedievalDynasty_C::M_GetDefaultUIVolumeValue() const {
	return Read<float>((byte*)this + 1048);
}
float* UGI_MedievalDynasty_C::M_PtrGetDefaultUIVolumeValue() {
	return reinterpret_cast<float*>((byte*)this + 1048);
}
void UGI_MedievalDynasty_C::M_SetDefaultUIVolumeValue(const float& value) {
	Write((byte*)this + 1048, value);
}
// Member Getter and Setter of UIVolumeValue
// Declaration: float UIVolumeValue
float UGI_MedievalDynasty_C::M_GetUIVolumeValue() const {
	return Read<float>((byte*)this + 1052);
}
float* UGI_MedievalDynasty_C::M_PtrGetUIVolumeValue() {
	return reinterpret_cast<float*>((byte*)this + 1052);
}
void UGI_MedievalDynasty_C::M_SetUIVolumeValue(const float& value) {
	Write((byte*)this + 1052, value);
}
// Member Getter and Setter of DefaultEnvironmentVolumeValue
// Declaration: float DefaultEnvironmentVolumeValue
float UGI_MedievalDynasty_C::M_GetDefaultEnvironmentVolumeValue() const {
	return Read<float>((byte*)this + 1056);
}
float* UGI_MedievalDynasty_C::M_PtrGetDefaultEnvironmentVolumeValue() {
	return reinterpret_cast<float*>((byte*)this + 1056);
}
void UGI_MedievalDynasty_C::M_SetDefaultEnvironmentVolumeValue(const float& value) {
	Write((byte*)this + 1056, value);
}
// Member Getter and Setter of EnvironmentVolumeValue
// Declaration: float EnvironmentVolumeValue
float UGI_MedievalDynasty_C::M_GetEnvironmentVolumeValue() const {
	return Read<float>((byte*)this + 1060);
}
float* UGI_MedievalDynasty_C::M_PtrGetEnvironmentVolumeValue() {
	return reinterpret_cast<float*>((byte*)this + 1060);
}
void UGI_MedievalDynasty_C::M_SetEnvironmentVolumeValue(const float& value) {
	Write((byte*)this + 1060, value);
}
// Member Getter and Setter of SkipMainMenu
// Declaration: bool SkipMainMenu
bool UGI_MedievalDynasty_C::M_GetSkipMainMenu() const {
	return Read<bool>((byte*)this + 1064);
}
bool* UGI_MedievalDynasty_C::M_PtrGetSkipMainMenu() {
	return reinterpret_cast<bool*>((byte*)this + 1064);
}
void UGI_MedievalDynasty_C::M_SetSkipMainMenu(const bool& value) {
	Write((byte*)this + 1064, value);
}
// Member Getter and Setter of SkipIntro
// Declaration: bool SkipIntro
bool UGI_MedievalDynasty_C::M_GetSkipIntro() const {
	return Read<bool>((byte*)this + 1065);
}
bool* UGI_MedievalDynasty_C::M_PtrGetSkipIntro() {
	return reinterpret_cast<bool*>((byte*)this + 1065);
}
void UGI_MedievalDynasty_C::M_SetSkipIntro(const bool& value) {
	Write((byte*)this + 1065, value);
}
// Member Getter and Setter of DefaultHorizontalSensitivity
// Declaration: float DefaultHorizontalSensitivity
float UGI_MedievalDynasty_C::M_GetDefaultHorizontalSensitivity() const {
	return Read<float>((byte*)this + 1068);
}
float* UGI_MedievalDynasty_C::M_PtrGetDefaultHorizontalSensitivity() {
	return reinterpret_cast<float*>((byte*)this + 1068);
}
void UGI_MedievalDynasty_C::M_SetDefaultHorizontalSensitivity(const float& value) {
	Write((byte*)this + 1068, value);
}
// Member Getter and Setter of DefaultConsolesHorizontalSensitivity
// Declaration: float DefaultConsolesHorizontalSensitivity
float UGI_MedievalDynasty_C::M_GetDefaultConsolesHorizontalSensitivity() const {
	return Read<float>((byte*)this + 1072);
}
float* UGI_MedievalDynasty_C::M_PtrGetDefaultConsolesHorizontalSensitivity() {
	return reinterpret_cast<float*>((byte*)this + 1072);
}
void UGI_MedievalDynasty_C::M_SetDefaultConsolesHorizontalSensitivity(const float& value) {
	Write((byte*)this + 1072, value);
}
// Member Getter and Setter of HorizontalSensitivity
// Declaration: float HorizontalSensitivity
float UGI_MedievalDynasty_C::M_GetHorizontalSensitivity() const {
	return Read<float>((byte*)this + 1076);
}
float* UGI_MedievalDynasty_C::M_PtrGetHorizontalSensitivity() {
	return reinterpret_cast<float*>((byte*)this + 1076);
}
void UGI_MedievalDynasty_C::M_SetHorizontalSensitivity(const float& value) {
	Write((byte*)this + 1076, value);
}
// Member Getter and Setter of DefaultVerticalSensitivity
// Declaration: float DefaultVerticalSensitivity
float UGI_MedievalDynasty_C::M_GetDefaultVerticalSensitivity() const {
	return Read<float>((byte*)this + 1080);
}
float* UGI_MedievalDynasty_C::M_PtrGetDefaultVerticalSensitivity() {
	return reinterpret_cast<float*>((byte*)this + 1080);
}
void UGI_MedievalDynasty_C::M_SetDefaultVerticalSensitivity(const float& value) {
	Write((byte*)this + 1080, value);
}
// Member Getter and Setter of DefaultConsolesVerticalSensitivity
// Declaration: float DefaultConsolesVerticalSensitivity
float UGI_MedievalDynasty_C::M_GetDefaultConsolesVerticalSensitivity() const {
	return Read<float>((byte*)this + 1084);
}
float* UGI_MedievalDynasty_C::M_PtrGetDefaultConsolesVerticalSensitivity() {
	return reinterpret_cast<float*>((byte*)this + 1084);
}
void UGI_MedievalDynasty_C::M_SetDefaultConsolesVerticalSensitivity(const float& value) {
	Write((byte*)this + 1084, value);
}
// Member Getter and Setter of VerticalSensitivity
// Declaration: float VerticalSensitivity
float UGI_MedievalDynasty_C::M_GetVerticalSensitivity() const {
	return Read<float>((byte*)this + 1088);
}
float* UGI_MedievalDynasty_C::M_PtrGetVerticalSensitivity() {
	return reinterpret_cast<float*>((byte*)this + 1088);
}
void UGI_MedievalDynasty_C::M_SetVerticalSensitivity(const float& value) {
	Write((byte*)this + 1088, value);
}
// Member Getter and Setter of DefaultInvertYAxis
// Declaration: bool DefaultInvertYAxis
bool UGI_MedievalDynasty_C::M_GetDefaultInvertYAxis() const {
	return Read<bool>((byte*)this + 1092);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultInvertYAxis() {
	return reinterpret_cast<bool*>((byte*)this + 1092);
}
void UGI_MedievalDynasty_C::M_SetDefaultInvertYAxis(const bool& value) {
	Write((byte*)this + 1092, value);
}
// Member Getter and Setter of InvertYAxis
// Declaration: bool InvertYAxis
bool UGI_MedievalDynasty_C::M_GetInvertYAxis() const {
	return Read<bool>((byte*)this + 1093);
}
bool* UGI_MedievalDynasty_C::M_PtrGetInvertYAxis() {
	return reinterpret_cast<bool*>((byte*)this + 1093);
}
void UGI_MedievalDynasty_C::M_SetInvertYAxis(const bool& value) {
	Write((byte*)this + 1093, value);
}
// Member Getter and Setter of DefaultInvertXAxis
// Declaration: bool DefaultInvertXAxis
bool UGI_MedievalDynasty_C::M_GetDefaultInvertXAxis() const {
	return Read<bool>((byte*)this + 1094);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultInvertXAxis() {
	return reinterpret_cast<bool*>((byte*)this + 1094);
}
void UGI_MedievalDynasty_C::M_SetDefaultInvertXAxis(const bool& value) {
	Write((byte*)this + 1094, value);
}
// Member Getter and Setter of TempGameplayArray
// Declaration: TArray<float> TempGameplayArray
TArray<float> UGI_MedievalDynasty_C::M_GetTempGameplayArray() const {
	return Read<TArray<float>>((byte*)this + 1096);
}
TArray<float>* UGI_MedievalDynasty_C::M_PtrGetTempGameplayArray() {
	return reinterpret_cast<TArray<float>*>((byte*)this + 1096);
}
void UGI_MedievalDynasty_C::M_SetTempGameplayArray(const TArray<float>& value) {
	Write((byte*)this + 1096, value);
}
// Member Getter and Setter of SelectedLanguage
// Declaration: struct FString SelectedLanguage
struct FString UGI_MedievalDynasty_C::M_GetSelectedLanguage() const {
	return Read<struct FString>((byte*)this + 1112);
}
struct FString* UGI_MedievalDynasty_C::M_PtrGetSelectedLanguage() {
	return reinterpret_cast<struct FString*>((byte*)this + 1112);
}
void UGI_MedievalDynasty_C::M_SetSelectedLanguage(const struct FString& value) {
	Write((byte*)this + 1112, value);
}
// Member Getter and Setter of AcceptableLanguages
// Declaration: TMap<struct FString, struct FName> AcceptableLanguages
TMap<struct FString, struct FName> UGI_MedievalDynasty_C::M_GetAcceptableLanguages() const {
	return Read<TMap<struct FString, struct FName>>((byte*)this + 1128);
}
TMap<struct FString, struct FName>* UGI_MedievalDynasty_C::M_PtrGetAcceptableLanguages() {
	return reinterpret_cast<TMap<struct FString, struct FName>*>((byte*)this + 1128);
}
void UGI_MedievalDynasty_C::M_SetAcceptableLanguages(const TMap<struct FString, struct FName>& value) {
	Write((byte*)this + 1128, value);
}
// Member Getter and Setter of WasLanguageFound
// Declaration: bool WasLanguageFound
bool UGI_MedievalDynasty_C::M_GetWasLanguageFound() const {
	return Read<bool>((byte*)this + 1208);
}
bool* UGI_MedievalDynasty_C::M_PtrGetWasLanguageFound() {
	return reinterpret_cast<bool*>((byte*)this + 1208);
}
void UGI_MedievalDynasty_C::M_SetWasLanguageFound(const bool& value) {
	Write((byte*)this + 1208, value);
}
// Member Getter and Setter of LanguageID
// Declaration: int32_t LanguageID
int32_t UGI_MedievalDynasty_C::M_GetLanguageID() const {
	return Read<int32_t>((byte*)this + 1212);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetLanguageID() {
	return reinterpret_cast<int32_t*>((byte*)this + 1212);
}
void UGI_MedievalDynasty_C::M_SetLanguageID(const int32_t& value) {
	Write((byte*)this + 1212, value);
}
// Member Getter and Setter of FOV
// Declaration: float FOV
float UGI_MedievalDynasty_C::M_GetFOV() const {
	return Read<float>((byte*)this + 1216);
}
float* UGI_MedievalDynasty_C::M_PtrGetFOV() {
	return reinterpret_cast<float*>((byte*)this + 1216);
}
void UGI_MedievalDynasty_C::M_SetFOV(const float& value) {
	Write((byte*)this + 1216, value);
}
// Member Getter and Setter of DefaultFOV
// Declaration: float DefaultFOV
float UGI_MedievalDynasty_C::M_GetDefaultFOV() const {
	return Read<float>((byte*)this + 1220);
}
float* UGI_MedievalDynasty_C::M_PtrGetDefaultFOV() {
	return reinterpret_cast<float*>((byte*)this + 1220);
}
void UGI_MedievalDynasty_C::M_SetDefaultFOV(const float& value) {
	Write((byte*)this + 1220, value);
}
// Member Getter and Setter of DefaultHeadbobbing
// Declaration: bool DefaultHeadbobbing
bool UGI_MedievalDynasty_C::M_GetDefaultHeadbobbing() const {
	return Read<bool>((byte*)this + 1224);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultHeadbobbing() {
	return reinterpret_cast<bool*>((byte*)this + 1224);
}
void UGI_MedievalDynasty_C::M_SetDefaultHeadbobbing(const bool& value) {
	Write((byte*)this + 1224, value);
}
// Member Getter and Setter of Headbobbing
// Declaration: bool Headbobbing
bool UGI_MedievalDynasty_C::M_GetHeadbobbing() const {
	return Read<bool>((byte*)this + 1225);
}
bool* UGI_MedievalDynasty_C::M_PtrGetHeadbobbing() {
	return reinterpret_cast<bool*>((byte*)this + 1225);
}
void UGI_MedievalDynasty_C::M_SetHeadbobbing(const bool& value) {
	Write((byte*)this + 1225, value);
}
// Member Getter and Setter of DefaultBlood
// Declaration: bool DefaultBlood
bool UGI_MedievalDynasty_C::M_GetDefaultBlood() const {
	return Read<bool>((byte*)this + 1226);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultBlood() {
	return reinterpret_cast<bool*>((byte*)this + 1226);
}
void UGI_MedievalDynasty_C::M_SetDefaultBlood(const bool& value) {
	Write((byte*)this + 1226, value);
}
// Member Getter and Setter of Blood
// Declaration: bool Blood
bool UGI_MedievalDynasty_C::M_GetBlood() const {
	return Read<bool>((byte*)this + 1227);
}
bool* UGI_MedievalDynasty_C::M_PtrGetBlood() {
	return reinterpret_cast<bool*>((byte*)this + 1227);
}
void UGI_MedievalDynasty_C::M_SetBlood(const bool& value) {
	Write((byte*)this + 1227, value);
}
// Member Getter and Setter of Cheats
// Declaration: bool Cheats
bool UGI_MedievalDynasty_C::M_GetCheats() const {
	return Read<bool>((byte*)this + 1228);
}
bool* UGI_MedievalDynasty_C::M_PtrGetCheats() {
	return reinterpret_cast<bool*>((byte*)this + 1228);
}
void UGI_MedievalDynasty_C::M_SetCheats(const bool& value) {
	Write((byte*)this + 1228, value);
}
// Member Getter and Setter of TestVersion
// Declaration: bool TestVersion
bool UGI_MedievalDynasty_C::M_GetTestVersion() const {
	return Read<bool>((byte*)this + 1229);
}
bool* UGI_MedievalDynasty_C::M_PtrGetTestVersion() {
	return reinterpret_cast<bool*>((byte*)this + 1229);
}
void UGI_MedievalDynasty_C::M_SetTestVersion(const bool& value) {
	Write((byte*)this + 1229, value);
}
// Member Getter and Setter of InitialLaunch
// Declaration: bool InitialLaunch
bool UGI_MedievalDynasty_C::M_GetInitialLaunch() const {
	return Read<bool>((byte*)this + 1230);
}
bool* UGI_MedievalDynasty_C::M_PtrGetInitialLaunch() {
	return reinterpret_cast<bool*>((byte*)this + 1230);
}
void UGI_MedievalDynasty_C::M_SetInitialLaunch(const bool& value) {
	Write((byte*)this + 1230, value);
}
// Member Getter and Setter of InvertXAxis
// Declaration: bool InvertXAxis
bool UGI_MedievalDynasty_C::M_GetInvertXAxis() const {
	return Read<bool>((byte*)this + 1231);
}
bool* UGI_MedievalDynasty_C::M_PtrGetInvertXAxis() {
	return reinterpret_cast<bool*>((byte*)this + 1231);
}
void UGI_MedievalDynasty_C::M_SetInvertXAxis(const bool& value) {
	Write((byte*)this + 1231, value);
}
// Member Getter and Setter of DefaultSprintOnHold
// Declaration: bool DefaultSprintOnHold
bool UGI_MedievalDynasty_C::M_GetDefaultSprintOnHold() const {
	return Read<bool>((byte*)this + 1232);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultSprintOnHold() {
	return reinterpret_cast<bool*>((byte*)this + 1232);
}
void UGI_MedievalDynasty_C::M_SetDefaultSprintOnHold(const bool& value) {
	Write((byte*)this + 1232, value);
}
// Member Getter and Setter of DefaultConsolesSprintOnHold
// Declaration: bool DefaultConsolesSprintOnHold
bool UGI_MedievalDynasty_C::M_GetDefaultConsolesSprintOnHold() const {
	return Read<bool>((byte*)this + 1233);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultConsolesSprintOnHold() {
	return reinterpret_cast<bool*>((byte*)this + 1233);
}
void UGI_MedievalDynasty_C::M_SetDefaultConsolesSprintOnHold(const bool& value) {
	Write((byte*)this + 1233, value);
}
// Member Getter and Setter of SprintOnHold
// Declaration: bool SprintOnHold
bool UGI_MedievalDynasty_C::M_GetSprintOnHold() const {
	return Read<bool>((byte*)this + 1234);
}
bool* UGI_MedievalDynasty_C::M_PtrGetSprintOnHold() {
	return reinterpret_cast<bool*>((byte*)this + 1234);
}
void UGI_MedievalDynasty_C::M_SetSprintOnHold(const bool& value) {
	Write((byte*)this + 1234, value);
}
// Member Getter and Setter of DefaultCrouchOnHold
// Declaration: bool DefaultCrouchOnHold
bool UGI_MedievalDynasty_C::M_GetDefaultCrouchOnHold() const {
	return Read<bool>((byte*)this + 1235);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultCrouchOnHold() {
	return reinterpret_cast<bool*>((byte*)this + 1235);
}
void UGI_MedievalDynasty_C::M_SetDefaultCrouchOnHold(const bool& value) {
	Write((byte*)this + 1235, value);
}
// Member Getter and Setter of DefaultConsolesCrouchOnHold
// Declaration: bool DefaultConsolesCrouchOnHold
bool UGI_MedievalDynasty_C::M_GetDefaultConsolesCrouchOnHold() const {
	return Read<bool>((byte*)this + 1236);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultConsolesCrouchOnHold() {
	return reinterpret_cast<bool*>((byte*)this + 1236);
}
void UGI_MedievalDynasty_C::M_SetDefaultConsolesCrouchOnHold(const bool& value) {
	Write((byte*)this + 1236, value);
}
// Member Getter and Setter of CrouchOnHold
// Declaration: bool CrouchOnHold
bool UGI_MedievalDynasty_C::M_GetCrouchOnHold() const {
	return Read<bool>((byte*)this + 1237);
}
bool* UGI_MedievalDynasty_C::M_PtrGetCrouchOnHold() {
	return reinterpret_cast<bool*>((byte*)this + 1237);
}
void UGI_MedievalDynasty_C::M_SetCrouchOnHold(const bool& value) {
	Write((byte*)this + 1237, value);
}
// Member Getter and Setter of DefaultControllerVibrations
// Declaration: bool DefaultControllerVibrations
bool UGI_MedievalDynasty_C::M_GetDefaultControllerVibrations() const {
	return Read<bool>((byte*)this + 1238);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultControllerVibrations() {
	return reinterpret_cast<bool*>((byte*)this + 1238);
}
void UGI_MedievalDynasty_C::M_SetDefaultControllerVibrations(const bool& value) {
	Write((byte*)this + 1238, value);
}
// Member Getter and Setter of ControllerVibrations
// Declaration: bool ControllerVibrations
bool UGI_MedievalDynasty_C::M_GetControllerVibrations() const {
	return Read<bool>((byte*)this + 1239);
}
bool* UGI_MedievalDynasty_C::M_PtrGetControllerVibrations() {
	return reinterpret_cast<bool*>((byte*)this + 1239);
}
void UGI_MedievalDynasty_C::M_SetControllerVibrations(const bool& value) {
	Write((byte*)this + 1239, value);
}
// Member Getter and Setter of DefaultControllerAimAssist
// Declaration: bool DefaultControllerAimAssist
bool UGI_MedievalDynasty_C::M_GetDefaultControllerAimAssist() const {
	return Read<bool>((byte*)this + 1240);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultControllerAimAssist() {
	return reinterpret_cast<bool*>((byte*)this + 1240);
}
void UGI_MedievalDynasty_C::M_SetDefaultControllerAimAssist(const bool& value) {
	Write((byte*)this + 1240, value);
}
// Member Getter and Setter of ControllerAimAssist
// Declaration: bool ControllerAimAssist
bool UGI_MedievalDynasty_C::M_GetControllerAimAssist() const {
	return Read<bool>((byte*)this + 1241);
}
bool* UGI_MedievalDynasty_C::M_PtrGetControllerAimAssist() {
	return reinterpret_cast<bool*>((byte*)this + 1241);
}
void UGI_MedievalDynasty_C::M_SetControllerAimAssist(const bool& value) {
	Write((byte*)this + 1241, value);
}
// Member Getter and Setter of QuickslotTypes
// Declaration: TArray<struct FString> QuickslotTypes
TArray<struct FString> UGI_MedievalDynasty_C::M_GetQuickslotTypes() const {
	return Read<TArray<struct FString>>((byte*)this + 1248);
}
TArray<struct FString>* UGI_MedievalDynasty_C::M_PtrGetQuickslotTypes() {
	return reinterpret_cast<TArray<struct FString>*>((byte*)this + 1248);
}
void UGI_MedievalDynasty_C::M_SetQuickslotTypes(const TArray<struct FString>& value) {
	Write((byte*)this + 1248, value);
}
// Member Getter and Setter of SelectedQuickslotsType
// Declaration: int32_t SelectedQuickslotsType
int32_t UGI_MedievalDynasty_C::M_GetSelectedQuickslotsType() const {
	return Read<int32_t>((byte*)this + 1264);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetSelectedQuickslotsType() {
	return reinterpret_cast<int32_t*>((byte*)this + 1264);
}
void UGI_MedievalDynasty_C::M_SetSelectedQuickslotsType(const int32_t& value) {
	Write((byte*)this + 1264, value);
}
// Member Getter and Setter of OnGraphicsSettingsChanged
// Declaration: TAssetPtr<class FOnGraphicsSettingsChanged__DelegateSignature> OnGraphicsSettingsChanged
TAssetPtr<class FOnGraphicsSettingsChanged__DelegateSignature> UGI_MedievalDynasty_C::M_GetOnGraphicsSettingsChanged() const {
	return Read<TAssetPtr<class FOnGraphicsSettingsChanged__DelegateSignature>>((byte*)this + 1272);
}
TAssetPtr<class FOnGraphicsSettingsChanged__DelegateSignature>* UGI_MedievalDynasty_C::M_PtrGetOnGraphicsSettingsChanged() {
	return reinterpret_cast<TAssetPtr<class FOnGraphicsSettingsChanged__DelegateSignature>*>((byte*)this + 1272);
}
void UGI_MedievalDynasty_C::M_SetOnGraphicsSettingsChanged(const TAssetPtr<class FOnGraphicsSettingsChanged__DelegateSignature>& value) {
	Write((byte*)this + 1272, value);
}
// Member Getter and Setter of Settings
// Declaration: class USAVE_Settings_C* Settings
class USAVE_Settings_C* UGI_MedievalDynasty_C::M_GetSettings() const {
	return Read<class USAVE_Settings_C*>((byte*)this + 1288);
}
class USAVE_Settings_C** UGI_MedievalDynasty_C::M_PtrGetSettings() {
	return reinterpret_cast<class USAVE_Settings_C**>((byte*)this + 1288);
}
void UGI_MedievalDynasty_C::M_SetSettings(const class USAVE_Settings_C*& value) {
	Write((byte*)this + 1288, value);
}
// Member Getter and Setter of SaveGameDataReference
// Declaration: class USAVE_Data_C* SaveGameDataReference
class USAVE_Data_C* UGI_MedievalDynasty_C::M_GetSaveGameDataReference() const {
	return Read<class USAVE_Data_C*>((byte*)this + 1296);
}
class USAVE_Data_C** UGI_MedievalDynasty_C::M_PtrGetSaveGameDataReference() {
	return reinterpret_cast<class USAVE_Data_C**>((byte*)this + 1296);
}
void UGI_MedievalDynasty_C::M_SetSaveGameDataReference(const class USAVE_Data_C*& value) {
	Write((byte*)this + 1296, value);
}
// Member Getter and Setter of SaveGameGameReference
// Declaration: TAssetPtr<class USAVE_Game_C> SaveGameGameReference
TAssetPtr<class USAVE_Game_C> UGI_MedievalDynasty_C::M_GetSaveGameGameReference() const {
	return Read<TAssetPtr<class USAVE_Game_C>>((byte*)this + 1304);
}
TAssetPtr<class USAVE_Game_C>* UGI_MedievalDynasty_C::M_PtrGetSaveGameGameReference() {
	return reinterpret_cast<TAssetPtr<class USAVE_Game_C>*>((byte*)this + 1304);
}
void UGI_MedievalDynasty_C::M_SetSaveGameGameReference(const TAssetPtr<class USAVE_Game_C>& value) {
	Write((byte*)this + 1304, value);
}
// Member Getter and Setter of BackgroundIndex
// Declaration: int32_t BackgroundIndex
int32_t UGI_MedievalDynasty_C::M_GetBackgroundIndex() const {
	return Read<int32_t>((byte*)this + 1344);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetBackgroundIndex() {
	return reinterpret_cast<int32_t*>((byte*)this + 1344);
}
void UGI_MedievalDynasty_C::M_SetBackgroundIndex(const int32_t& value) {
	Write((byte*)this + 1344, value);
}
// Member Getter and Setter of Resolutions4_3_Point
// Declaration: TArray<struct FIntPoint> Resolutions4_3_Point
TArray<struct FIntPoint> UGI_MedievalDynasty_C::M_GetResolutions4_3_Point() const {
	return Read<TArray<struct FIntPoint>>((byte*)this + 1352);
}
TArray<struct FIntPoint>* UGI_MedievalDynasty_C::M_PtrGetResolutions4_3_Point() {
	return reinterpret_cast<TArray<struct FIntPoint>*>((byte*)this + 1352);
}
void UGI_MedievalDynasty_C::M_SetResolutions4_3_Point(const TArray<struct FIntPoint>& value) {
	Write((byte*)this + 1352, value);
}
// Member Getter and Setter of Resolutions16_9_Point
// Declaration: TArray<struct FIntPoint> Resolutions16_9_Point
TArray<struct FIntPoint> UGI_MedievalDynasty_C::M_GetResolutions16_9_Point() const {
	return Read<TArray<struct FIntPoint>>((byte*)this + 1368);
}
TArray<struct FIntPoint>* UGI_MedievalDynasty_C::M_PtrGetResolutions16_9_Point() {
	return reinterpret_cast<TArray<struct FIntPoint>*>((byte*)this + 1368);
}
void UGI_MedievalDynasty_C::M_SetResolutions16_9_Point(const TArray<struct FIntPoint>& value) {
	Write((byte*)this + 1368, value);
}
// Member Getter and Setter of Resolutions16_10_Point
// Declaration: TArray<struct FIntPoint> Resolutions16_10_Point
TArray<struct FIntPoint> UGI_MedievalDynasty_C::M_GetResolutions16_10_Point() const {
	return Read<TArray<struct FIntPoint>>((byte*)this + 1384);
}
TArray<struct FIntPoint>* UGI_MedievalDynasty_C::M_PtrGetResolutions16_10_Point() {
	return reinterpret_cast<TArray<struct FIntPoint>*>((byte*)this + 1384);
}
void UGI_MedievalDynasty_C::M_SetResolutions16_10_Point(const TArray<struct FIntPoint>& value) {
	Write((byte*)this + 1384, value);
}
// Member Getter and Setter of Resolutions21_9_Point
// Declaration: TArray<struct FIntPoint> Resolutions21_9_Point
TArray<struct FIntPoint> UGI_MedievalDynasty_C::M_GetResolutions21_9_Point() const {
	return Read<TArray<struct FIntPoint>>((byte*)this + 1400);
}
TArray<struct FIntPoint>* UGI_MedievalDynasty_C::M_PtrGetResolutions21_9_Point() {
	return reinterpret_cast<TArray<struct FIntPoint>*>((byte*)this + 1400);
}
void UGI_MedievalDynasty_C::M_SetResolutions21_9_Point(const TArray<struct FIntPoint>& value) {
	Write((byte*)this + 1400, value);
}
// Member Getter and Setter of Resolutions32_9_Point
// Declaration: TArray<struct FIntPoint> Resolutions32_9_Point
TArray<struct FIntPoint> UGI_MedievalDynasty_C::M_GetResolutions32_9_Point() const {
	return Read<TArray<struct FIntPoint>>((byte*)this + 1416);
}
TArray<struct FIntPoint>* UGI_MedievalDynasty_C::M_PtrGetResolutions32_9_Point() {
	return reinterpret_cast<TArray<struct FIntPoint>*>((byte*)this + 1416);
}
void UGI_MedievalDynasty_C::M_SetResolutions32_9_Point(const TArray<struct FIntPoint>& value) {
	Write((byte*)this + 1416, value);
}
// Member Getter and Setter of Resolution_Point
// Declaration: struct FIntPoint Resolution_Point
struct FIntPoint UGI_MedievalDynasty_C::M_GetResolution_Point() const {
	return Read<struct FIntPoint>((byte*)this + 1432);
}
struct FIntPoint* UGI_MedievalDynasty_C::M_PtrGetResolution_Point() {
	return reinterpret_cast<struct FIntPoint*>((byte*)this + 1432);
}
void UGI_MedievalDynasty_C::M_SetResolution_Point(const struct FIntPoint& value) {
	Write((byte*)this + 1432, value);
}
// Member Getter and Setter of ShadingQuality
// Declaration: int32_t ShadingQuality
int32_t UGI_MedievalDynasty_C::M_GetShadingQuality() const {
	return Read<int32_t>((byte*)this + 1440);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetShadingQuality() {
	return reinterpret_cast<int32_t*>((byte*)this + 1440);
}
void UGI_MedievalDynasty_C::M_SetShadingQuality(const int32_t& value) {
	Write((byte*)this + 1440, value);
}
// Member Getter and Setter of ShadingQualities
// Declaration: TArray<int32_t> ShadingQualities
TArray<int32_t> UGI_MedievalDynasty_C::M_GetShadingQualities() const {
	return Read<TArray<int32_t>>((byte*)this + 1448);
}
TArray<int32_t>* UGI_MedievalDynasty_C::M_PtrGetShadingQualities() {
	return reinterpret_cast<TArray<int32_t>*>((byte*)this + 1448);
}
void UGI_MedievalDynasty_C::M_SetShadingQualities(const TArray<int32_t>& value) {
	Write((byte*)this + 1448, value);
}
// Member Getter and Setter of ShadingQualityID
// Declaration: int32_t ShadingQualityID
int32_t UGI_MedievalDynasty_C::M_GetShadingQualityID() const {
	return Read<int32_t>((byte*)this + 1464);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetShadingQualityID() {
	return reinterpret_cast<int32_t*>((byte*)this + 1464);
}
void UGI_MedievalDynasty_C::M_SetShadingQualityID(const int32_t& value) {
	Write((byte*)this + 1464, value);
}
// Member Getter and Setter of DefaultShadingQualityID
// Declaration: int32_t DefaultShadingQualityID
int32_t UGI_MedievalDynasty_C::M_GetDefaultShadingQualityID() const {
	return Read<int32_t>((byte*)this + 1468);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultShadingQualityID() {
	return reinterpret_cast<int32_t*>((byte*)this + 1468);
}
void UGI_MedievalDynasty_C::M_SetDefaultShadingQualityID(const int32_t& value) {
	Write((byte*)this + 1468, value);
}
// Member Getter and Setter of GraphicsSettingsPresets
// Declaration: TArray<struct FST_GraphicsSettingsPreset> GraphicsSettingsPresets
TArray<struct FST_GraphicsSettingsPreset> UGI_MedievalDynasty_C::M_GetGraphicsSettingsPresets() const {
	return Read<TArray<struct FST_GraphicsSettingsPreset>>((byte*)this + 1472);
}
TArray<struct FST_GraphicsSettingsPreset>* UGI_MedievalDynasty_C::M_PtrGetGraphicsSettingsPresets() {
	return reinterpret_cast<TArray<struct FST_GraphicsSettingsPreset>*>((byte*)this + 1472);
}
void UGI_MedievalDynasty_C::M_SetGraphicsSettingsPresets(const TArray<struct FST_GraphicsSettingsPreset>& value) {
	Write((byte*)this + 1472, value);
}
// Member Getter and Setter of RazerChroma
// Declaration: bool RazerChroma
bool UGI_MedievalDynasty_C::M_GetRazerChroma() const {
	return Read<bool>((byte*)this + 1488);
}
bool* UGI_MedievalDynasty_C::M_PtrGetRazerChroma() {
	return reinterpret_cast<bool*>((byte*)this + 1488);
}
void UGI_MedievalDynasty_C::M_SetRazerChroma(const bool& value) {
	Write((byte*)this + 1488, value);
}
// Member Getter and Setter of DefaultRazerChroma
// Declaration: bool DefaultRazerChroma
bool UGI_MedievalDynasty_C::M_GetDefaultRazerChroma() const {
	return Read<bool>((byte*)this + 1489);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultRazerChroma() {
	return reinterpret_cast<bool*>((byte*)this + 1489);
}
void UGI_MedievalDynasty_C::M_SetDefaultRazerChroma(const bool& value) {
	Write((byte*)this + 1489, value);
}
// Member Getter and Setter of TimeToSave
// Declaration: TMap<TEnumAsByte<E_TimeToSave>, struct FText> TimeToSave
TMap<TEnumAsByte<E_TimeToSave>, struct FText> UGI_MedievalDynasty_C::M_GetTimeToSave() const {
	return Read<TMap<TEnumAsByte<E_TimeToSave>, struct FText>>((byte*)this + 1496);
}
TMap<TEnumAsByte<E_TimeToSave>, struct FText>* UGI_MedievalDynasty_C::M_PtrGetTimeToSave() {
	return reinterpret_cast<TMap<TEnumAsByte<E_TimeToSave>, struct FText>*>((byte*)this + 1496);
}
void UGI_MedievalDynasty_C::M_SetTimeToSave(const TMap<TEnumAsByte<E_TimeToSave>, struct FText>& value) {
	Write((byte*)this + 1496, value);
}
// Member Getter and Setter of SelectedTimeToSave
// Declaration: TEnumAsByte<E_TimeToSave> SelectedTimeToSave
TEnumAsByte<E_TimeToSave> UGI_MedievalDynasty_C::M_GetSelectedTimeToSave() const {
	return Read<TEnumAsByte<E_TimeToSave>>((byte*)this + 1576);
}
TEnumAsByte<E_TimeToSave>* UGI_MedievalDynasty_C::M_PtrGetSelectedTimeToSave() {
	return reinterpret_cast<TEnumAsByte<E_TimeToSave>*>((byte*)this + 1576);
}
void UGI_MedievalDynasty_C::M_SetSelectedTimeToSave(const TEnumAsByte<E_TimeToSave>& value) {
	Write((byte*)this + 1576, value);
}
// Member Getter and Setter of AutosaveOnQuestEnd
// Declaration: bool AutosaveOnQuestEnd
bool UGI_MedievalDynasty_C::M_GetAutosaveOnQuestEnd() const {
	return Read<bool>((byte*)this + 1577);
}
bool* UGI_MedievalDynasty_C::M_PtrGetAutosaveOnQuestEnd() {
	return reinterpret_cast<bool*>((byte*)this + 1577);
}
void UGI_MedievalDynasty_C::M_SetAutosaveOnQuestEnd(const bool& value) {
	Write((byte*)this + 1577, value);
}
// Member Getter and Setter of DefaultAutosaveOnQuestEnd
// Declaration: bool DefaultAutosaveOnQuestEnd
bool UGI_MedievalDynasty_C::M_GetDefaultAutosaveOnQuestEnd() const {
	return Read<bool>((byte*)this + 1578);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultAutosaveOnQuestEnd() {
	return reinterpret_cast<bool*>((byte*)this + 1578);
}
void UGI_MedievalDynasty_C::M_SetDefaultAutosaveOnQuestEnd(const bool& value) {
	Write((byte*)this + 1578, value);
}
// Member Getter and Setter of GraphicsSettingsPresetID
// Declaration: int32_t GraphicsSettingsPresetID
int32_t UGI_MedievalDynasty_C::M_GetGraphicsSettingsPresetID() const {
	return Read<int32_t>((byte*)this + 1580);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetGraphicsSettingsPresetID() {
	return reinterpret_cast<int32_t*>((byte*)this + 1580);
}
void UGI_MedievalDynasty_C::M_SetGraphicsSettingsPresetID(const int32_t& value) {
	Write((byte*)this + 1580, value);
}
// Member Getter and Setter of DLSSID
// Declaration: int32_t DLSSID
int32_t UGI_MedievalDynasty_C::M_GetDLSSID() const {
	return Read<int32_t>((byte*)this + 1584);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDLSSID() {
	return reinterpret_cast<int32_t*>((byte*)this + 1584);
}
void UGI_MedievalDynasty_C::M_SetDLSSID(const int32_t& value) {
	Write((byte*)this + 1584, value);
}
// Member Getter and Setter of DisableAllScreenMessages
// Declaration: bool DisableAllScreenMessages
bool UGI_MedievalDynasty_C::M_GetDisableAllScreenMessages() const {
	return Read<bool>((byte*)this + 1588);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDisableAllScreenMessages() {
	return reinterpret_cast<bool*>((byte*)this + 1588);
}
void UGI_MedievalDynasty_C::M_SetDisableAllScreenMessages(const bool& value) {
	Write((byte*)this + 1588, value);
}
// Member Getter and Setter of Brightness
// Declaration: int32_t Brightness
int32_t UGI_MedievalDynasty_C::M_GetBrightness() const {
	return Read<int32_t>((byte*)this + 1592);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetBrightness() {
	return reinterpret_cast<int32_t*>((byte*)this + 1592);
}
void UGI_MedievalDynasty_C::M_SetBrightness(const int32_t& value) {
	Write((byte*)this + 1592, value);
}
// Member Getter and Setter of DefaultBrightness
// Declaration: int32_t DefaultBrightness
int32_t UGI_MedievalDynasty_C::M_GetDefaultBrightness() const {
	return Read<int32_t>((byte*)this + 1596);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultBrightness() {
	return reinterpret_cast<int32_t*>((byte*)this + 1596);
}
void UGI_MedievalDynasty_C::M_SetDefaultBrightness(const int32_t& value) {
	Write((byte*)this + 1596, value);
}
// Member Getter and Setter of DefaultCameraShakes
// Declaration: bool DefaultCameraShakes
bool UGI_MedievalDynasty_C::M_GetDefaultCameraShakes() const {
	return Read<bool>((byte*)this + 1600);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultCameraShakes() {
	return reinterpret_cast<bool*>((byte*)this + 1600);
}
void UGI_MedievalDynasty_C::M_SetDefaultCameraShakes(const bool& value) {
	Write((byte*)this + 1600, value);
}
// Member Getter and Setter of CameraShakes
// Declaration: bool CameraShakes
bool UGI_MedievalDynasty_C::M_GetCameraShakes() const {
	return Read<bool>((byte*)this + 1601);
}
bool* UGI_MedievalDynasty_C::M_PtrGetCameraShakes() {
	return reinterpret_cast<bool*>((byte*)this + 1601);
}
void UGI_MedievalDynasty_C::M_SetCameraShakes(const bool& value) {
	Write((byte*)this + 1601, value);
}
// Member Getter and Setter of DefaultBreathing
// Declaration: bool DefaultBreathing
bool UGI_MedievalDynasty_C::M_GetDefaultBreathing() const {
	return Read<bool>((byte*)this + 1602);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultBreathing() {
	return reinterpret_cast<bool*>((byte*)this + 1602);
}
void UGI_MedievalDynasty_C::M_SetDefaultBreathing(const bool& value) {
	Write((byte*)this + 1602, value);
}
// Member Getter and Setter of Breathing
// Declaration: bool Breathing
bool UGI_MedievalDynasty_C::M_GetBreathing() const {
	return Read<bool>((byte*)this + 1603);
}
bool* UGI_MedievalDynasty_C::M_PtrGetBreathing() {
	return reinterpret_cast<bool*>((byte*)this + 1603);
}
void UGI_MedievalDynasty_C::M_SetBreathing(const bool& value) {
	Write((byte*)this + 1603, value);
}
// Member Getter and Setter of SelectedMouseScrollFunction
// Declaration: int32_t SelectedMouseScrollFunction
int32_t UGI_MedievalDynasty_C::M_GetSelectedMouseScrollFunction() const {
	return Read<int32_t>((byte*)this + 1604);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetSelectedMouseScrollFunction() {
	return reinterpret_cast<int32_t*>((byte*)this + 1604);
}
void UGI_MedievalDynasty_C::M_SetSelectedMouseScrollFunction(const int32_t& value) {
	Write((byte*)this + 1604, value);
}
// Member Getter and Setter of SSGI
// Declaration: bool SSGI
bool UGI_MedievalDynasty_C::M_GetSSGI() const {
	return Read<bool>((byte*)this + 1608);
}
bool* UGI_MedievalDynasty_C::M_PtrGetSSGI() {
	return reinterpret_cast<bool*>((byte*)this + 1608);
}
void UGI_MedievalDynasty_C::M_SetSSGI(const bool& value) {
	Write((byte*)this + 1608, value);
}
// Member Getter and Setter of DefaultSSGI
// Declaration: bool DefaultSSGI
bool UGI_MedievalDynasty_C::M_GetDefaultSSGI() const {
	return Read<bool>((byte*)this + 1609);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultSSGI() {
	return reinterpret_cast<bool*>((byte*)this + 1609);
}
void UGI_MedievalDynasty_C::M_SetDefaultSSGI(const bool& value) {
	Write((byte*)this + 1609, value);
}
// Member Getter and Setter of GamepadType
// Declaration: TMap<TEnumAsByte<E_GamepadType>, struct FString> GamepadType
TMap<TEnumAsByte<E_GamepadType>, struct FString> UGI_MedievalDynasty_C::M_GetGamepadType() const {
	return Read<TMap<TEnumAsByte<E_GamepadType>, struct FString>>((byte*)this + 1616);
}
TMap<TEnumAsByte<E_GamepadType>, struct FString>* UGI_MedievalDynasty_C::M_PtrGetGamepadType() {
	return reinterpret_cast<TMap<TEnumAsByte<E_GamepadType>, struct FString>*>((byte*)this + 1616);
}
void UGI_MedievalDynasty_C::M_SetGamepadType(const TMap<TEnumAsByte<E_GamepadType>, struct FString>& value) {
	Write((byte*)this + 1616, value);
}
// Member Getter and Setter of SelectedGamepadType
// Declaration: TEnumAsByte<E_GamepadType> SelectedGamepadType
TEnumAsByte<E_GamepadType> UGI_MedievalDynasty_C::M_GetSelectedGamepadType() const {
	return Read<TEnumAsByte<E_GamepadType>>((byte*)this + 1696);
}
TEnumAsByte<E_GamepadType>* UGI_MedievalDynasty_C::M_PtrGetSelectedGamepadType() {
	return reinterpret_cast<TEnumAsByte<E_GamepadType>*>((byte*)this + 1696);
}
void UGI_MedievalDynasty_C::M_SetSelectedGamepadType(const TEnumAsByte<E_GamepadType>& value) {
	Write((byte*)this + 1696, value);
}
// Member Getter and Setter of SelectedGamepadControlType
// Declaration: TEnumAsByte<E_GamepadControlType> SelectedGamepadControlType
TEnumAsByte<E_GamepadControlType> UGI_MedievalDynasty_C::M_GetSelectedGamepadControlType() const {
	return Read<TEnumAsByte<E_GamepadControlType>>((byte*)this + 1697);
}
TEnumAsByte<E_GamepadControlType>* UGI_MedievalDynasty_C::M_PtrGetSelectedGamepadControlType() {
	return reinterpret_cast<TEnumAsByte<E_GamepadControlType>*>((byte*)this + 1697);
}
void UGI_MedievalDynasty_C::M_SetSelectedGamepadControlType(const TEnumAsByte<E_GamepadControlType>& value) {
	Write((byte*)this + 1697, value);
}
// Member Getter and Setter of GamepadControlType
// Declaration: TMap<TEnumAsByte<E_GamepadControlType>, struct FText> GamepadControlType
TMap<TEnumAsByte<E_GamepadControlType>, struct FText> UGI_MedievalDynasty_C::M_GetGamepadControlType() const {
	return Read<TMap<TEnumAsByte<E_GamepadControlType>, struct FText>>((byte*)this + 1704);
}
TMap<TEnumAsByte<E_GamepadControlType>, struct FText>* UGI_MedievalDynasty_C::M_PtrGetGamepadControlType() {
	return reinterpret_cast<TMap<TEnumAsByte<E_GamepadControlType>, struct FText>*>((byte*)this + 1704);
}
void UGI_MedievalDynasty_C::M_SetGamepadControlType(const TMap<TEnumAsByte<E_GamepadControlType>, struct FText>& value) {
	Write((byte*)this + 1704, value);
}
// Member Getter and Setter of TasksArray
// Declaration: TArray<class UMultiTaskBase*> TasksArray
TArray<class UMultiTaskBase*> UGI_MedievalDynasty_C::M_GetTasksArray() const {
	return Read<TArray<class UMultiTaskBase*>>((byte*)this + 1784);
}
TArray<class UMultiTaskBase*>* UGI_MedievalDynasty_C::M_PtrGetTasksArray() {
	return reinterpret_cast<TArray<class UMultiTaskBase*>*>((byte*)this + 1784);
}
void UGI_MedievalDynasty_C::M_SetTasksArray(const TArray<class UMultiTaskBase*>& value) {
	Write((byte*)this + 1784, value);
}
// Member Getter and Setter of ReturningFromDisconnect
// Declaration: bool ReturningFromDisconnect
bool UGI_MedievalDynasty_C::M_GetReturningFromDisconnect() const {
	return Read<bool>((byte*)this + 1800);
}
bool* UGI_MedievalDynasty_C::M_PtrGetReturningFromDisconnect() {
	return reinterpret_cast<bool*>((byte*)this + 1800);
}
void UGI_MedievalDynasty_C::M_SetReturningFromDisconnect(const bool& value) {
	Write((byte*)this + 1800, value);
}
// Member Getter and Setter of LoggedOutDuringLoading
// Declaration: bool LoggedOutDuringLoading
bool UGI_MedievalDynasty_C::M_GetLoggedOutDuringLoading() const {
	return Read<bool>((byte*)this + 1801);
}
bool* UGI_MedievalDynasty_C::M_PtrGetLoggedOutDuringLoading() {
	return reinterpret_cast<bool*>((byte*)this + 1801);
}
void UGI_MedievalDynasty_C::M_SetLoggedOutDuringLoading(const bool& value) {
	Write((byte*)this + 1801, value);
}
// Member Getter and Setter of ConsoleFramerateMode
// Declaration: int32_t ConsoleFramerateMode
int32_t UGI_MedievalDynasty_C::M_GetConsoleFramerateMode() const {
	return Read<int32_t>((byte*)this + 1804);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetConsoleFramerateMode() {
	return reinterpret_cast<int32_t*>((byte*)this + 1804);
}
void UGI_MedievalDynasty_C::M_SetConsoleFramerateMode(const int32_t& value) {
	Write((byte*)this + 1804, value);
}
// Member Getter and Setter of ConsoleFramerateModeID
// Declaration: int32_t ConsoleFramerateModeID
int32_t UGI_MedievalDynasty_C::M_GetConsoleFramerateModeID() const {
	return Read<int32_t>((byte*)this + 1808);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetConsoleFramerateModeID() {
	return reinterpret_cast<int32_t*>((byte*)this + 1808);
}
void UGI_MedievalDynasty_C::M_SetConsoleFramerateModeID(const int32_t& value) {
	Write((byte*)this + 1808, value);
}
// Member Getter and Setter of ConsoleFramerateModels
// Declaration: TArray<int32_t> ConsoleFramerateModels
TArray<int32_t> UGI_MedievalDynasty_C::M_GetConsoleFramerateModels() const {
	return Read<TArray<int32_t>>((byte*)this + 1816);
}
TArray<int32_t>* UGI_MedievalDynasty_C::M_PtrGetConsoleFramerateModels() {
	return reinterpret_cast<TArray<int32_t>*>((byte*)this + 1816);
}
void UGI_MedievalDynasty_C::M_SetConsoleFramerateModels(const TArray<int32_t>& value) {
	Write((byte*)this + 1816, value);
}
// Member Getter and Setter of DefaultConsoleFramerateModeID
// Declaration: int32_t DefaultConsoleFramerateModeID
int32_t UGI_MedievalDynasty_C::M_GetDefaultConsoleFramerateModeID() const {
	return Read<int32_t>((byte*)this + 1832);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultConsoleFramerateModeID() {
	return reinterpret_cast<int32_t*>((byte*)this + 1832);
}
void UGI_MedievalDynasty_C::M_SetDefaultConsoleFramerateModeID(const int32_t& value) {
	Write((byte*)this + 1832, value);
}
// Member Getter and Setter of DefaultPlayInBackground
// Declaration: bool DefaultPlayInBackground
bool UGI_MedievalDynasty_C::M_GetDefaultPlayInBackground() const {
	return Read<bool>((byte*)this + 1836);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultPlayInBackground() {
	return reinterpret_cast<bool*>((byte*)this + 1836);
}
void UGI_MedievalDynasty_C::M_SetDefaultPlayInBackground(const bool& value) {
	Write((byte*)this + 1836, value);
}
// Member Getter and Setter of PlayInBackground
// Declaration: bool PlayInBackground
bool UGI_MedievalDynasty_C::M_GetPlayInBackground() const {
	return Read<bool>((byte*)this + 1837);
}
bool* UGI_MedievalDynasty_C::M_PtrGetPlayInBackground() {
	return reinterpret_cast<bool*>((byte*)this + 1837);
}
void UGI_MedievalDynasty_C::M_SetPlayInBackground(const bool& value) {
	Write((byte*)this + 1837, value);
}
// Member Getter and Setter of Platform
// Declaration: EMD_SpecificPlatform Platform
EMD_SpecificPlatform UGI_MedievalDynasty_C::M_GetPlatform() const {
	return Read<EMD_SpecificPlatform>((byte*)this + 1838);
}
EMD_SpecificPlatform* UGI_MedievalDynasty_C::M_PtrGetPlatform() {
	return reinterpret_cast<EMD_SpecificPlatform*>((byte*)this + 1838);
}
void UGI_MedievalDynasty_C::M_SetPlatform(const EMD_SpecificPlatform& value) {
	Write((byte*)this + 1838, value);
}
// Member Getter and Setter of DefaultButtonResolutionID_SteamDeck
// Declaration: int32_t DefaultButtonResolutionID_SteamDeck
int32_t UGI_MedievalDynasty_C::M_GetDefaultButtonResolutionID_SteamDeck() const {
	return Read<int32_t>((byte*)this + 1840);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultButtonResolutionID_SteamDeck() {
	return reinterpret_cast<int32_t*>((byte*)this + 1840);
}
void UGI_MedievalDynasty_C::M_SetDefaultButtonResolutionID_SteamDeck(const int32_t& value) {
	Write((byte*)this + 1840, value);
}
// Member Getter and Setter of DefaultButtonAspectRatioID_SteamDeck
// Declaration: int32_t DefaultButtonAspectRatioID_SteamDeck
int32_t UGI_MedievalDynasty_C::M_GetDefaultButtonAspectRatioID_SteamDeck() const {
	return Read<int32_t>((byte*)this + 1844);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultButtonAspectRatioID_SteamDeck() {
	return reinterpret_cast<int32_t*>((byte*)this + 1844);
}
void UGI_MedievalDynasty_C::M_SetDefaultButtonAspectRatioID_SteamDeck(const int32_t& value) {
	Write((byte*)this + 1844, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnGraphicsSettingsChanged__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnGraphicsSettingsChanged__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnGraphicsSettingsChanged__DelegateSignature");

	struct UGI_MedievalDynasty_C_OnGraphicsSettingsChanged__DelegateSignature_Params {
	};
	UGI_MedievalDynasty_C_OnGraphicsSettingsChanged__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.ExecuteUbergraph_GI_MedievalDynasty
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::ExecuteUbergraph_GI_MedievalDynasty(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.ExecuteUbergraph_GI_MedievalDynasty");

	struct UGI_MedievalDynasty_C_ExecuteUbergraph_GI_MedievalDynasty_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	UGI_MedievalDynasty_C_ExecuteUbergraph_GI_MedievalDynasty_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.CacheAchievements
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::CacheAchievements() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.CacheAchievements");

	struct UGI_MedievalDynasty_C_CacheAchievements_Params {
	};
	UGI_MedievalDynasty_C_CacheAchievements_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.ReceiveShutdown
// Flags: Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::ReceiveShutdown() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.ReceiveShutdown");

	struct UGI_MedievalDynasty_C_ReceiveShutdown_Params {
	};
	UGI_MedievalDynasty_C_ReceiveShutdown_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetGameSettings
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::SetGameSettings() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetGameSettings");

	struct UGI_MedievalDynasty_C_SetGameSettings_Params {
	};
	UGI_MedievalDynasty_C_SetGameSettings_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetGameSettingsFromFile
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::GetGameSettingsFromFile() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetGameSettingsFromFile");

	struct UGI_MedievalDynasty_C_GetGameSettingsFromFile_Params {
	};
	UGI_MedievalDynasty_C_GetGameSettingsFromFile_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetGraphicsSettings
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::SetGraphicsSettings() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetGraphicsSettings");

	struct UGI_MedievalDynasty_C_SetGraphicsSettings_Params {
	};
	UGI_MedievalDynasty_C_SetGraphicsSettings_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetSoundSettings
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::SetSoundSettings() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetSoundSettings");

	struct UGI_MedievalDynasty_C_SetSoundSettings_Params {
	};
	UGI_MedievalDynasty_C_SetSoundSettings_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetGraphicsSettingsFromFile
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::GetGraphicsSettingsFromFile() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetGraphicsSettingsFromFile");

	struct UGI_MedievalDynasty_C_GetGraphicsSettingsFromFile_Params {
	};
	UGI_MedievalDynasty_C_GetGraphicsSettingsFromFile_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetSoundSettingsFromFile
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::GetSoundSettingsFromFile() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetSoundSettingsFromFile");

	struct UGI_MedievalDynasty_C_GetSoundSettingsFromFile_Params {
	};
	UGI_MedievalDynasty_C_GetSoundSettingsFromFile_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.UpdateSoundsVolumes
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::UpdateSoundsVolumes() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.UpdateSoundsVolumes");

	struct UGI_MedievalDynasty_C_UpdateSoundsVolumes_Params {
	};
	UGI_MedievalDynasty_C_UpdateSoundsVolumes_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.CreateDefaultSave
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::CreateDefaultSave() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.CreateDefaultSave");

	struct UGI_MedievalDynasty_C_CreateDefaultSave_Params {
	};
	UGI_MedievalDynasty_C_CreateDefaultSave_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetSettingsFromFile
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::GetSettingsFromFile() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetSettingsFromFile");

	struct UGI_MedievalDynasty_C_GetSettingsFromFile_Params {
	};
	UGI_MedievalDynasty_C_GetSettingsFromFile_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetDefaultSettings
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::GetDefaultSettings() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetDefaultSettings");

	struct UGI_MedievalDynasty_C_GetDefaultSettings_Params {
	};
	UGI_MedievalDynasty_C_GetDefaultSettings_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetSettings
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::SetSettings() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetSettings");

	struct UGI_MedievalDynasty_C_SetSettings_Params {
	};
	UGI_MedievalDynasty_C_SetSettings_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.ReceiveInit
// Flags: Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::ReceiveInit() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.ReceiveInit");

	struct UGI_MedievalDynasty_C_ReceiveInit_Params {
	};
	UGI_MedievalDynasty_C_ReceiveInit_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.HandleUserSwapping
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: messageReason	Type: E_MessageReason	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::HandleUserSwapping(E_MessageReason messageReason) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.HandleUserSwapping");

	struct UGI_MedievalDynasty_C_HandleUserSwapping_Params {
		E_MessageReason messageReason;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_HandleUserSwapping_Params params;
	params.messageReason = messageReason;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OSSUninit
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OSSUninit() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OSSUninit");

	struct UGI_MedievalDynasty_C_OSSUninit_Params {
	};
	UGI_MedievalDynasty_C_OSSUninit_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OSSInit
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OSSInit() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OSSInit");

	struct UGI_MedievalDynasty_C_OSSInit_Params {
	};
	UGI_MedievalDynasty_C_OSSInit_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetGameState
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: GameState	Type: EMD_GameState	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::SetGameState(EMD_GameState GameState) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetGameState");

	struct UGI_MedievalDynasty_C_SetGameState_Params {
		EMD_GameState GameState;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_SetGameState_Params params;
	params.GameState = GameState;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetInitialLaunch
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SetInitialLaunch	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::SetInitialLaunch(bool SetInitialLaunch) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetInitialLaunch");

	struct UGI_MedievalDynasty_C_SetInitialLaunch_Params {
		bool SetInitialLaunch;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_SetInitialLaunch_Params params;
	params.SetInitialLaunch = SetInitialLaunch;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.AddTask
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Task	Type: class UMultiTaskBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::AddTask(class UMultiTaskBase* Task) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.AddTask");

	struct UGI_MedievalDynasty_C_AddTask_Params {
		class UMultiTaskBase* Task;			//Offset: 0 | ElementSize: 8
	};
	UGI_MedievalDynasty_C_AddTask_Params params;
	params.Task = Task;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetSkipMainMenu
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SkipMainMenu	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::SetSkipMainMenu(bool SkipMainMenu) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetSkipMainMenu");

	struct UGI_MedievalDynasty_C_SetSkipMainMenu_Params {
		bool SkipMainMenu;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_SetSkipMainMenu_Params params;
	params.SkipMainMenu = SkipMainMenu;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetSkipIntro
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SetSkipIntro	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::SetSkipIntro(bool SetSkipIntro) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetSkipIntro");

	struct UGI_MedievalDynasty_C_SetSkipIntro_Params {
		bool SetSkipIntro;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_SetSkipIntro_Params params;
	params.SetSkipIntro = SetSkipIntro;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_E6D90EBA4E7857F8B05A4EB8CD96208A
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnSuccess_E6D90EBA4E7857F8B05A4EB8CD96208A() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_E6D90EBA4E7857F8B05A4EB8CD96208A");

	struct UGI_MedievalDynasty_C_OnSuccess_E6D90EBA4E7857F8B05A4EB8CD96208A_Params {
	};
	UGI_MedievalDynasty_C_OnSuccess_E6D90EBA4E7857F8B05A4EB8CD96208A_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_E6D90EBA4E7857F8B05A4EB8CD96208A
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnFailure_E6D90EBA4E7857F8B05A4EB8CD96208A() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_E6D90EBA4E7857F8B05A4EB8CD96208A");

	struct UGI_MedievalDynasty_C_OnFailure_E6D90EBA4E7857F8B05A4EB8CD96208A_Params {
	};
	UGI_MedievalDynasty_C_OnFailure_E6D90EBA4E7857F8B05A4EB8CD96208A_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_37C1D79D4FDF7AA55B46F5A4DEDE2D3D
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerController	Type: class APlayerController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnSuccess_37C1D79D4FDF7AA55B46F5A4DEDE2D3D(class APlayerController* PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_37C1D79D4FDF7AA55B46F5A4DEDE2D3D");

	struct UGI_MedievalDynasty_C_OnSuccess_37C1D79D4FDF7AA55B46F5A4DEDE2D3D_Params {
		class APlayerController* PlayerController;			//Offset: 0 | ElementSize: 8
	};
	UGI_MedievalDynasty_C_OnSuccess_37C1D79D4FDF7AA55B46F5A4DEDE2D3D_Params params;
	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_37C1D79D4FDF7AA55B46F5A4DEDE2D3D
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerController	Type: class APlayerController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnFailure_37C1D79D4FDF7AA55B46F5A4DEDE2D3D(class APlayerController* PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_37C1D79D4FDF7AA55B46F5A4DEDE2D3D");

	struct UGI_MedievalDynasty_C_OnFailure_37C1D79D4FDF7AA55B46F5A4DEDE2D3D_Params {
		class APlayerController* PlayerController;			//Offset: 0 | ElementSize: 8
	};
	UGI_MedievalDynasty_C_OnFailure_37C1D79D4FDF7AA55B46F5A4DEDE2D3D_Params params;
	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_D41BB5524E76F93D50046596B7260058
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerController	Type: class APlayerController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnSuccess_D41BB5524E76F93D50046596B7260058(class APlayerController* PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_D41BB5524E76F93D50046596B7260058");

	struct UGI_MedievalDynasty_C_OnSuccess_D41BB5524E76F93D50046596B7260058_Params {
		class APlayerController* PlayerController;			//Offset: 0 | ElementSize: 8
	};
	UGI_MedievalDynasty_C_OnSuccess_D41BB5524E76F93D50046596B7260058_Params params;
	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_D41BB5524E76F93D50046596B7260058
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerController	Type: class APlayerController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnFailure_D41BB5524E76F93D50046596B7260058(class APlayerController* PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_D41BB5524E76F93D50046596B7260058");

	struct UGI_MedievalDynasty_C_OnFailure_D41BB5524E76F93D50046596B7260058_Params {
		class APlayerController* PlayerController;			//Offset: 0 | ElementSize: 8
	};
	UGI_MedievalDynasty_C_OnFailure_D41BB5524E76F93D50046596B7260058_Params params;
	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetDefaultResolutionAndAspectRatioIndex
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::SetDefaultResolutionAndAspectRatioIndex() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetDefaultResolutionAndAspectRatioIndex");

	struct UGI_MedievalDynasty_C_SetDefaultResolutionAndAspectRatioIndex_Params {
	};
	UGI_MedievalDynasty_C_SetDefaultResolutionAndAspectRatioIndex_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.RestoreDefaultKeybinds
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::RestoreDefaultKeybinds() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.RestoreDefaultKeybinds");

	struct UGI_MedievalDynasty_C_RestoreDefaultKeybinds_Params {
	};
	UGI_MedievalDynasty_C_RestoreDefaultKeybinds_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.FixForMissingKeybinds
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::FixForMissingKeybinds() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.FixForMissingKeybinds");

	struct UGI_MedievalDynasty_C_FixForMissingKeybinds_Params {
	};
	UGI_MedievalDynasty_C_FixForMissingKeybinds_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.InitSaveGameData
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::InitSaveGameData() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.InitSaveGameData");

	struct UGI_MedievalDynasty_C_InitSaveGameData_Params {
	};
	UGI_MedievalDynasty_C_InitSaveGameData_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.UpdateGamepadKeybinds
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::UpdateGamepadKeybinds() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.UpdateGamepadKeybinds");

	struct UGI_MedievalDynasty_C_UpdateGamepadKeybinds_Params {
	};
	UGI_MedievalDynasty_C_UpdateGamepadKeybinds_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetPerformanceMode
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: PerformanceModeActive	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::SetPerformanceMode(bool PerformanceModeActive) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetPerformanceMode");

	struct UGI_MedievalDynasty_C_SetPerformanceMode_Params {
		bool PerformanceModeActive;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_SetPerformanceMode_Params params;
	params.PerformanceModeActive = PerformanceModeActive;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.GameSettings
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::GameSettings() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.GameSettings");

	struct UGI_MedievalDynasty_C_GameSettings_Params {
	};
	UGI_MedievalDynasty_C_GameSettings_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.LoadSettingsFile
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: SuccessfulLoad	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::LoadSettingsFile(bool* SuccessfulLoad) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.LoadSettingsFile");

	struct UGI_MedievalDynasty_C_LoadSettingsFile_Params {
		bool SuccessfulLoad;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_LoadSettingsFile_Params params;

	UObject::ProcessEvent(fn, &params);
	if (SuccessfulLoad != nullptr)
		*SuccessfulLoad = params.SuccessfulLoad;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.ReapplySettingsFromFile
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::ReapplySettingsFromFile() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.ReapplySettingsFromFile");

	struct UGI_MedievalDynasty_C_ReapplySettingsFromFile_Params {
	};
	UGI_MedievalDynasty_C_ReapplySettingsFromFile_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetBackgroundIndex
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BackgroundIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::GetBackgroundIndex(int32_t* BackgroundIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetBackgroundIndex");

	struct UGI_MedievalDynasty_C_GetBackgroundIndex_Params {
		int32_t BackgroundIndex;			//Offset: 0 | ElementSize: 4
	};
	UGI_MedievalDynasty_C_GetBackgroundIndex_Params params;

	UObject::ProcessEvent(fn, &params);
	if (BackgroundIndex != nullptr)
		*BackgroundIndex = params.BackgroundIndex;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.RandomizeBackgroundIndex
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BackgroundIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::RandomizeBackgroundIndex(int32_t* BackgroundIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.RandomizeBackgroundIndex");

	struct UGI_MedievalDynasty_C_RandomizeBackgroundIndex_Params {
		int32_t BackgroundIndex;			//Offset: 0 | ElementSize: 4
	};
	UGI_MedievalDynasty_C_RandomizeBackgroundIndex_Params params;

	UObject::ProcessEvent(fn, &params);
	if (BackgroundIndex != nullptr)
		*BackgroundIndex = params.BackgroundIndex;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetTasks
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Tasks	Type: TArray<class UMultiTaskBase*>	Flags: Parm, OutParm
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::GetTasks(TArray<class UMultiTaskBase*>* Tasks) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetTasks");

	struct UGI_MedievalDynasty_C_GetTasks_Params {
		TArray<class UMultiTaskBase*> Tasks;			//Offset: 0 | ElementSize: 16
	};
	UGI_MedievalDynasty_C_GetTasks_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Tasks != nullptr)
		*Tasks = params.Tasks;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetCurrentPlatform
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Platform	Type: EMD_SpecificPlatform	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::GetCurrentPlatform(EMD_SpecificPlatform* Platform) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetCurrentPlatform");

	struct UGI_MedievalDynasty_C_GetCurrentPlatform_Params {
		EMD_SpecificPlatform Platform;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_GetCurrentPlatform_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Platform != nullptr)
		*Platform = params.Platform;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.IsConsole
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::IsConsole(bool* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.IsConsole");

	struct UGI_MedievalDynasty_C_IsConsole_Params {
		bool Value;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_IsConsole_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Value != nullptr)
		*Value = params.Value;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.IsConsoleOldGen
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::IsConsoleOldGen(bool* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.IsConsoleOldGen");

	struct UGI_MedievalDynasty_C_IsConsoleOldGen_Params {
		bool Value;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_IsConsoleOldGen_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Value != nullptr)
		*Value = params.Value;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.IsXbox
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::IsXbox(bool* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.IsXbox");

	struct UGI_MedievalDynasty_C_IsXbox_Params {
		bool Value;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_IsXbox_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Value != nullptr)
		*Value = params.Value;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.IsPlaystation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::IsPlaystation(bool* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.IsPlaystation");

	struct UGI_MedievalDynasty_C_IsPlaystation_Params {
		bool Value;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_IsPlaystation_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Value != nullptr)
		*Value = params.Value;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.IsWindows
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::IsWindows(bool* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.IsWindows");

	struct UGI_MedievalDynasty_C_IsWindows_Params {
		bool Value;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_IsWindows_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Value != nullptr)
		*Value = params.Value;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetCurrentViewDistanceScale
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::GetCurrentViewDistanceScale(int32_t* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetCurrentViewDistanceScale");

	struct UGI_MedievalDynasty_C_GetCurrentViewDistanceScale_Params {
		int32_t Value;			//Offset: 0 | ElementSize: 4
	};
	UGI_MedievalDynasty_C_GetCurrentViewDistanceScale_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Value != nullptr)
		*Value = params.Value;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetCurrentGamepadType
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Gamepad	Type: TEnumAsByte<E_GamepadType>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::GetCurrentGamepadType(TEnumAsByte<E_GamepadType>* Gamepad) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetCurrentGamepadType");

	struct UGI_MedievalDynasty_C_GetCurrentGamepadType_Params {
		TEnumAsByte<E_GamepadType> Gamepad;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_GetCurrentGamepadType_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Gamepad != nullptr)
		*Gamepad = params.Gamepad;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.IsCheatVersion
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::IsCheatVersion(bool* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.IsCheatVersion");

	struct UGI_MedievalDynasty_C_IsCheatVersion_Params {
		bool Value;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_IsCheatVersion_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Value != nullptr)
		*Value = params.Value;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetCurrent_UserID
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::GetCurrent_UserID(int32_t* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetCurrent_UserID");

	struct UGI_MedievalDynasty_C_GetCurrent_UserID_Params {
		int32_t Value;			//Offset: 0 | ElementSize: 4
	};
	UGI_MedievalDynasty_C_GetCurrent_UserID_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Value != nullptr)
		*Value = params.Value;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetCurrentDFAO
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::GetCurrentDFAO(bool* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetCurrentDFAO");

	struct UGI_MedievalDynasty_C_GetCurrentDFAO_Params {
		bool Value;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_GetCurrentDFAO_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Value != nullptr)
		*Value = params.Value;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetCurrentContactShadows
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::GetCurrentContactShadows(bool* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetCurrentContactShadows");

	struct UGI_MedievalDynasty_C_GetCurrentContactShadows_Params {
		bool Value;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_GetCurrentContactShadows_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Value != nullptr)
		*Value = params.Value;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetCurrentShadowQuality
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::GetCurrentShadowQuality(int32_t* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetCurrentShadowQuality");

	struct UGI_MedievalDynasty_C_GetCurrentShadowQuality_Params {
		int32_t Value;			//Offset: 0 | ElementSize: 4
	};
	UGI_MedievalDynasty_C_GetCurrentShadowQuality_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Value != nullptr)
		*Value = params.Value;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.IsTestVersion
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::IsTestVersion(bool* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.IsTestVersion");

	struct UGI_MedievalDynasty_C_IsTestVersion_Params {
		bool Value;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_IsTestVersion_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Value != nullptr)
		*Value = params.Value;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.IsInitialLaunch
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::IsInitialLaunch(bool* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.IsInitialLaunch");

	struct UGI_MedievalDynasty_C_IsInitialLaunch_Params {
		bool Value;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_IsInitialLaunch_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Value != nullptr)
		*Value = params.Value;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetPlatform_UserID
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::GetPlatform_UserID(int32_t* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetPlatform_UserID");

	struct UGI_MedievalDynasty_C_GetPlatform_UserID_Params {
		int32_t Value;			//Offset: 0 | ElementSize: 4
	};
	UGI_MedievalDynasty_C_GetPlatform_UserID_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Value != nullptr)
		*Value = params.Value;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetGameState
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: GameState	Type: EMD_GameState	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::GetGameState(EMD_GameState* GameState) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetGameState");

	struct UGI_MedievalDynasty_C_GetGameState_Params {
		EMD_GameState GameState;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_GetGameState_Params params;

	UObject::ProcessEvent(fn, &params);
	if (GameState != nullptr)
		*GameState = params.GameState;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.IsSteamDeck
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::IsSteamDeck(bool* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.IsSteamDeck");

	struct UGI_MedievalDynasty_C_IsSteamDeck_Params {
		bool Value;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_IsSteamDeck_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Value != nullptr)
		*Value = params.Value;
}

#pragma endregion
}