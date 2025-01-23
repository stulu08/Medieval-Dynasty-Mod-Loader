#include "../SDK.h"
#include "GI_MedievalDynasty_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame UGI_MedievalDynasty_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 648);
}
struct FPointerToUberGraphFrame* UGI_MedievalDynasty_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 648);
}
void UGI_MedievalDynasty_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 648, value);
}
// Member Getter and Setter of DefaultMasterVolumeValue
// Declaration: float DefaultMasterVolumeValue
float UGI_MedievalDynasty_C::M_GetDefaultMasterVolumeValue() const {
	return Read<float>((byte*)this + 656);
}
float* UGI_MedievalDynasty_C::M_PtrGetDefaultMasterVolumeValue() {
	return reinterpret_cast<float*>((byte*)this + 656);
}
void UGI_MedievalDynasty_C::M_SetDefaultMasterVolumeValue(const float& value) {
	Write((byte*)this + 656, value);
}
// Member Getter and Setter of MasterVolumeValue
// Declaration: float MasterVolumeValue
float UGI_MedievalDynasty_C::M_GetMasterVolumeValue() const {
	return Read<float>((byte*)this + 660);
}
float* UGI_MedievalDynasty_C::M_PtrGetMasterVolumeValue() {
	return reinterpret_cast<float*>((byte*)this + 660);
}
void UGI_MedievalDynasty_C::M_SetMasterVolumeValue(const float& value) {
	Write((byte*)this + 660, value);
}
// Member Getter and Setter of DefaultSoundEffectVolumeValue
// Declaration: float DefaultSoundEffectVolumeValue
float UGI_MedievalDynasty_C::M_GetDefaultSoundEffectVolumeValue() const {
	return Read<float>((byte*)this + 664);
}
float* UGI_MedievalDynasty_C::M_PtrGetDefaultSoundEffectVolumeValue() {
	return reinterpret_cast<float*>((byte*)this + 664);
}
void UGI_MedievalDynasty_C::M_SetDefaultSoundEffectVolumeValue(const float& value) {
	Write((byte*)this + 664, value);
}
// Member Getter and Setter of SoundEffectVolumeValue
// Declaration: float SoundEffectVolumeValue
float UGI_MedievalDynasty_C::M_GetSoundEffectVolumeValue() const {
	return Read<float>((byte*)this + 668);
}
float* UGI_MedievalDynasty_C::M_PtrGetSoundEffectVolumeValue() {
	return reinterpret_cast<float*>((byte*)this + 668);
}
void UGI_MedievalDynasty_C::M_SetSoundEffectVolumeValue(const float& value) {
	Write((byte*)this + 668, value);
}
// Member Getter and Setter of DefaultVoiceVolumeValue
// Declaration: float DefaultVoiceVolumeValue
float UGI_MedievalDynasty_C::M_GetDefaultVoiceVolumeValue() const {
	return Read<float>((byte*)this + 672);
}
float* UGI_MedievalDynasty_C::M_PtrGetDefaultVoiceVolumeValue() {
	return reinterpret_cast<float*>((byte*)this + 672);
}
void UGI_MedievalDynasty_C::M_SetDefaultVoiceVolumeValue(const float& value) {
	Write((byte*)this + 672, value);
}
// Member Getter and Setter of VoiceVolumeValue
// Declaration: float VoiceVolumeValue
float UGI_MedievalDynasty_C::M_GetVoiceVolumeValue() const {
	return Read<float>((byte*)this + 676);
}
float* UGI_MedievalDynasty_C::M_PtrGetVoiceVolumeValue() {
	return reinterpret_cast<float*>((byte*)this + 676);
}
void UGI_MedievalDynasty_C::M_SetVoiceVolumeValue(const float& value) {
	Write((byte*)this + 676, value);
}
// Member Getter and Setter of DefaultMusicVolumeValue
// Declaration: float DefaultMusicVolumeValue
float UGI_MedievalDynasty_C::M_GetDefaultMusicVolumeValue() const {
	return Read<float>((byte*)this + 680);
}
float* UGI_MedievalDynasty_C::M_PtrGetDefaultMusicVolumeValue() {
	return reinterpret_cast<float*>((byte*)this + 680);
}
void UGI_MedievalDynasty_C::M_SetDefaultMusicVolumeValue(const float& value) {
	Write((byte*)this + 680, value);
}
// Member Getter and Setter of MusicVolumeValue
// Declaration: float MusicVolumeValue
float UGI_MedievalDynasty_C::M_GetMusicVolumeValue() const {
	return Read<float>((byte*)this + 684);
}
float* UGI_MedievalDynasty_C::M_PtrGetMusicVolumeValue() {
	return reinterpret_cast<float*>((byte*)this + 684);
}
void UGI_MedievalDynasty_C::M_SetMusicVolumeValue(const float& value) {
	Write((byte*)this + 684, value);
}
// Member Getter and Setter of viewDistanceScale
// Declaration: int32_t viewDistanceScale
int32_t UGI_MedievalDynasty_C::M_GetviewDistanceScale() const {
	return Read<int32_t>((byte*)this + 688);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetviewDistanceScale() {
	return reinterpret_cast<int32_t*>((byte*)this + 688);
}
void UGI_MedievalDynasty_C::M_SetviewDistanceScale(const int32_t& value) {
	Write((byte*)this + 688, value);
}
// Member Getter and Setter of AntiAliasingMethod
// Declaration: int32_t AntiAliasingMethod
int32_t UGI_MedievalDynasty_C::M_GetAntiAliasingMethod() const {
	return Read<int32_t>((byte*)this + 692);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetAntiAliasingMethod() {
	return reinterpret_cast<int32_t*>((byte*)this + 692);
}
void UGI_MedievalDynasty_C::M_SetAntiAliasingMethod(const int32_t& value) {
	Write((byte*)this + 692, value);
}
// Member Getter and Setter of PostProcessQuality
// Declaration: int32_t PostProcessQuality
int32_t UGI_MedievalDynasty_C::M_GetPostProcessQuality() const {
	return Read<int32_t>((byte*)this + 696);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetPostProcessQuality() {
	return reinterpret_cast<int32_t*>((byte*)this + 696);
}
void UGI_MedievalDynasty_C::M_SetPostProcessQuality(const int32_t& value) {
	Write((byte*)this + 696, value);
}
// Member Getter and Setter of ShadowQuality
// Declaration: int32_t ShadowQuality
int32_t UGI_MedievalDynasty_C::M_GetShadowQuality() const {
	return Read<int32_t>((byte*)this + 700);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetShadowQuality() {
	return reinterpret_cast<int32_t*>((byte*)this + 700);
}
void UGI_MedievalDynasty_C::M_SetShadowQuality(const int32_t& value) {
	Write((byte*)this + 700, value);
}
// Member Getter and Setter of TextureQuality
// Declaration: int32_t TextureQuality
int32_t UGI_MedievalDynasty_C::M_GetTextureQuality() const {
	return Read<int32_t>((byte*)this + 704);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetTextureQuality() {
	return reinterpret_cast<int32_t*>((byte*)this + 704);
}
void UGI_MedievalDynasty_C::M_SetTextureQuality(const int32_t& value) {
	Write((byte*)this + 704, value);
}
// Member Getter and Setter of EffectsQuality
// Declaration: int32_t EffectsQuality
int32_t UGI_MedievalDynasty_C::M_GetEffectsQuality() const {
	return Read<int32_t>((byte*)this + 708);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetEffectsQuality() {
	return reinterpret_cast<int32_t*>((byte*)this + 708);
}
void UGI_MedievalDynasty_C::M_SetEffectsQuality(const int32_t& value) {
	Write((byte*)this + 708, value);
}
// Member Getter and Setter of FoliageQuality
// Declaration: int32_t FoliageQuality
int32_t UGI_MedievalDynasty_C::M_GetFoliageQuality() const {
	return Read<int32_t>((byte*)this + 712);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetFoliageQuality() {
	return reinterpret_cast<int32_t*>((byte*)this + 712);
}
void UGI_MedievalDynasty_C::M_SetFoliageQuality(const int32_t& value) {
	Write((byte*)this + 712, value);
}
// Member Getter and Setter of Vsync
// Declaration: int32_t Vsync
int32_t UGI_MedievalDynasty_C::M_GetVsync() const {
	return Read<int32_t>((byte*)this + 716);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetVsync() {
	return reinterpret_cast<int32_t*>((byte*)this + 716);
}
void UGI_MedievalDynasty_C::M_SetVsync(const int32_t& value) {
	Write((byte*)this + 716, value);
}
// Member Getter and Setter of FrameRateLimit
// Declaration: int32_t FrameRateLimit
int32_t UGI_MedievalDynasty_C::M_GetFrameRateLimit() const {
	return Read<int32_t>((byte*)this + 720);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetFrameRateLimit() {
	return reinterpret_cast<int32_t*>((byte*)this + 720);
}
void UGI_MedievalDynasty_C::M_SetFrameRateLimit(const int32_t& value) {
	Write((byte*)this + 720, value);
}
// Member Getter and Setter of FramerateLimits
// Declaration: TArray<int32_t> FramerateLimits
TArray<int32_t> UGI_MedievalDynasty_C::M_GetFramerateLimits() const {
	return Read<TArray<int32_t>>((byte*)this + 728);
}
TArray<int32_t>* UGI_MedievalDynasty_C::M_PtrGetFramerateLimits() {
	return reinterpret_cast<TArray<int32_t>*>((byte*)this + 728);
}
void UGI_MedievalDynasty_C::M_SetFramerateLimits(const TArray<int32_t>& value) {
	Write((byte*)this + 728, value);
}
// Member Getter and Setter of DefaultFramerateID
// Declaration: int32_t DefaultFramerateID
int32_t UGI_MedievalDynasty_C::M_GetDefaultFramerateID() const {
	return Read<int32_t>((byte*)this + 744);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultFramerateID() {
	return reinterpret_cast<int32_t*>((byte*)this + 744);
}
void UGI_MedievalDynasty_C::M_SetDefaultFramerateID(const int32_t& value) {
	Write((byte*)this + 744, value);
}
// Member Getter and Setter of FramerateLimitID
// Declaration: int32_t FramerateLimitID
int32_t UGI_MedievalDynasty_C::M_GetFramerateLimitID() const {
	return Read<int32_t>((byte*)this + 748);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetFramerateLimitID() {
	return reinterpret_cast<int32_t*>((byte*)this + 748);
}
void UGI_MedievalDynasty_C::M_SetFramerateLimitID(const int32_t& value) {
	Write((byte*)this + 748, value);
}
// Member Getter and Setter of ViewDistances
// Declaration: TArray<int32_t> ViewDistances
TArray<int32_t> UGI_MedievalDynasty_C::M_GetViewDistances() const {
	return Read<TArray<int32_t>>((byte*)this + 752);
}
TArray<int32_t>* UGI_MedievalDynasty_C::M_PtrGetViewDistances() {
	return reinterpret_cast<TArray<int32_t>*>((byte*)this + 752);
}
void UGI_MedievalDynasty_C::M_SetViewDistances(const TArray<int32_t>& value) {
	Write((byte*)this + 752, value);
}
// Member Getter and Setter of DefaultButtonViewDistanceID
// Declaration: int32_t DefaultButtonViewDistanceID
int32_t UGI_MedievalDynasty_C::M_GetDefaultButtonViewDistanceID() const {
	return Read<int32_t>((byte*)this + 768);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultButtonViewDistanceID() {
	return reinterpret_cast<int32_t*>((byte*)this + 768);
}
void UGI_MedievalDynasty_C::M_SetDefaultButtonViewDistanceID(const int32_t& value) {
	Write((byte*)this + 768, value);
}
// Member Getter and Setter of AntiAliasing
// Declaration: TArray<int32_t> AntiAliasing
TArray<int32_t> UGI_MedievalDynasty_C::M_GetAntiAliasing() const {
	return Read<TArray<int32_t>>((byte*)this + 776);
}
TArray<int32_t>* UGI_MedievalDynasty_C::M_PtrGetAntiAliasing() {
	return reinterpret_cast<TArray<int32_t>*>((byte*)this + 776);
}
void UGI_MedievalDynasty_C::M_SetAntiAliasing(const TArray<int32_t>& value) {
	Write((byte*)this + 776, value);
}
// Member Getter and Setter of DefaultButtonAntiAliasingID
// Declaration: int32_t DefaultButtonAntiAliasingID
int32_t UGI_MedievalDynasty_C::M_GetDefaultButtonAntiAliasingID() const {
	return Read<int32_t>((byte*)this + 792);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultButtonAntiAliasingID() {
	return reinterpret_cast<int32_t*>((byte*)this + 792);
}
void UGI_MedievalDynasty_C::M_SetDefaultButtonAntiAliasingID(const int32_t& value) {
	Write((byte*)this + 792, value);
}
// Member Getter and Setter of PostProcessings
// Declaration: TArray<int32_t> PostProcessings
TArray<int32_t> UGI_MedievalDynasty_C::M_GetPostProcessings() const {
	return Read<TArray<int32_t>>((byte*)this + 800);
}
TArray<int32_t>* UGI_MedievalDynasty_C::M_PtrGetPostProcessings() {
	return reinterpret_cast<TArray<int32_t>*>((byte*)this + 800);
}
void UGI_MedievalDynasty_C::M_SetPostProcessings(const TArray<int32_t>& value) {
	Write((byte*)this + 800, value);
}
// Member Getter and Setter of DefaultButtonPostProcessingID
// Declaration: int32_t DefaultButtonPostProcessingID
int32_t UGI_MedievalDynasty_C::M_GetDefaultButtonPostProcessingID() const {
	return Read<int32_t>((byte*)this + 816);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultButtonPostProcessingID() {
	return reinterpret_cast<int32_t*>((byte*)this + 816);
}
void UGI_MedievalDynasty_C::M_SetDefaultButtonPostProcessingID(const int32_t& value) {
	Write((byte*)this + 816, value);
}
// Member Getter and Setter of Shadows
// Declaration: TArray<int32_t> Shadows
TArray<int32_t> UGI_MedievalDynasty_C::M_GetShadows() const {
	return Read<TArray<int32_t>>((byte*)this + 824);
}
TArray<int32_t>* UGI_MedievalDynasty_C::M_PtrGetShadows() {
	return reinterpret_cast<TArray<int32_t>*>((byte*)this + 824);
}
void UGI_MedievalDynasty_C::M_SetShadows(const TArray<int32_t>& value) {
	Write((byte*)this + 824, value);
}
// Member Getter and Setter of DefaultButtonShadowsID
// Declaration: int32_t DefaultButtonShadowsID
int32_t UGI_MedievalDynasty_C::M_GetDefaultButtonShadowsID() const {
	return Read<int32_t>((byte*)this + 840);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultButtonShadowsID() {
	return reinterpret_cast<int32_t*>((byte*)this + 840);
}
void UGI_MedievalDynasty_C::M_SetDefaultButtonShadowsID(const int32_t& value) {
	Write((byte*)this + 840, value);
}
// Member Getter and Setter of Textures
// Declaration: TArray<int32_t> Textures
TArray<int32_t> UGI_MedievalDynasty_C::M_GetTextures() const {
	return Read<TArray<int32_t>>((byte*)this + 848);
}
TArray<int32_t>* UGI_MedievalDynasty_C::M_PtrGetTextures() {
	return reinterpret_cast<TArray<int32_t>*>((byte*)this + 848);
}
void UGI_MedievalDynasty_C::M_SetTextures(const TArray<int32_t>& value) {
	Write((byte*)this + 848, value);
}
// Member Getter and Setter of DefaultButtonTexturesID
// Declaration: int32_t DefaultButtonTexturesID
int32_t UGI_MedievalDynasty_C::M_GetDefaultButtonTexturesID() const {
	return Read<int32_t>((byte*)this + 864);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultButtonTexturesID() {
	return reinterpret_cast<int32_t*>((byte*)this + 864);
}
void UGI_MedievalDynasty_C::M_SetDefaultButtonTexturesID(const int32_t& value) {
	Write((byte*)this + 864, value);
}
// Member Getter and Setter of Effects
// Declaration: TArray<int32_t> Effects
TArray<int32_t> UGI_MedievalDynasty_C::M_GetEffects() const {
	return Read<TArray<int32_t>>((byte*)this + 872);
}
TArray<int32_t>* UGI_MedievalDynasty_C::M_PtrGetEffects() {
	return reinterpret_cast<TArray<int32_t>*>((byte*)this + 872);
}
void UGI_MedievalDynasty_C::M_SetEffects(const TArray<int32_t>& value) {
	Write((byte*)this + 872, value);
}
// Member Getter and Setter of DefaultButtonEffectsID
// Declaration: int32_t DefaultButtonEffectsID
int32_t UGI_MedievalDynasty_C::M_GetDefaultButtonEffectsID() const {
	return Read<int32_t>((byte*)this + 888);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultButtonEffectsID() {
	return reinterpret_cast<int32_t*>((byte*)this + 888);
}
void UGI_MedievalDynasty_C::M_SetDefaultButtonEffectsID(const int32_t& value) {
	Write((byte*)this + 888, value);
}
// Member Getter and Setter of Foliage
// Declaration: TArray<int32_t> Foliage
TArray<int32_t> UGI_MedievalDynasty_C::M_GetFoliage() const {
	return Read<TArray<int32_t>>((byte*)this + 896);
}
TArray<int32_t>* UGI_MedievalDynasty_C::M_PtrGetFoliage() {
	return reinterpret_cast<TArray<int32_t>*>((byte*)this + 896);
}
void UGI_MedievalDynasty_C::M_SetFoliage(const TArray<int32_t>& value) {
	Write((byte*)this + 896, value);
}
// Member Getter and Setter of DefaultButtonFoliageID
// Declaration: int32_t DefaultButtonFoliageID
int32_t UGI_MedievalDynasty_C::M_GetDefaultButtonFoliageID() const {
	return Read<int32_t>((byte*)this + 912);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultButtonFoliageID() {
	return reinterpret_cast<int32_t*>((byte*)this + 912);
}
void UGI_MedievalDynasty_C::M_SetDefaultButtonFoliageID(const int32_t& value) {
	Write((byte*)this + 912, value);
}
// Member Getter and Setter of WindowMode
// Declaration: int32_t WindowMode
int32_t UGI_MedievalDynasty_C::M_GetWindowMode() const {
	return Read<int32_t>((byte*)this + 916);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetWindowMode() {
	return reinterpret_cast<int32_t*>((byte*)this + 916);
}
void UGI_MedievalDynasty_C::M_SetWindowMode(const int32_t& value) {
	Write((byte*)this + 916, value);
}
// Member Getter and Setter of WindowModes
// Declaration: TArray<int32_t> WindowModes
TArray<int32_t> UGI_MedievalDynasty_C::M_GetWindowModes() const {
	return Read<TArray<int32_t>>((byte*)this + 920);
}
TArray<int32_t>* UGI_MedievalDynasty_C::M_PtrGetWindowModes() {
	return reinterpret_cast<TArray<int32_t>*>((byte*)this + 920);
}
void UGI_MedievalDynasty_C::M_SetWindowModes(const TArray<int32_t>& value) {
	Write((byte*)this + 920, value);
}
// Member Getter and Setter of Resolution
// Declaration: struct FString Resolution
struct FString UGI_MedievalDynasty_C::M_GetResolution() const {
	return Read<struct FString>((byte*)this + 936);
}
struct FString* UGI_MedievalDynasty_C::M_PtrGetResolution() {
	return reinterpret_cast<struct FString*>((byte*)this + 936);
}
void UGI_MedievalDynasty_C::M_SetResolution(const struct FString& value) {
	Write((byte*)this + 936, value);
}
// Member Getter and Setter of Resolutions4_3
// Declaration: TArray<struct FString> Resolutions4_3
TArray<struct FString> UGI_MedievalDynasty_C::M_GetResolutions4_3() const {
	return Read<TArray<struct FString>>((byte*)this + 952);
}
TArray<struct FString>* UGI_MedievalDynasty_C::M_PtrGetResolutions4_3() {
	return reinterpret_cast<TArray<struct FString>*>((byte*)this + 952);
}
void UGI_MedievalDynasty_C::M_SetResolutions4_3(const TArray<struct FString>& value) {
	Write((byte*)this + 952, value);
}
// Member Getter and Setter of Resolutions16_9
// Declaration: TArray<struct FString> Resolutions16_9
TArray<struct FString> UGI_MedievalDynasty_C::M_GetResolutions16_9() const {
	return Read<TArray<struct FString>>((byte*)this + 968);
}
TArray<struct FString>* UGI_MedievalDynasty_C::M_PtrGetResolutions16_9() {
	return reinterpret_cast<TArray<struct FString>*>((byte*)this + 968);
}
void UGI_MedievalDynasty_C::M_SetResolutions16_9(const TArray<struct FString>& value) {
	Write((byte*)this + 968, value);
}
// Member Getter and Setter of Resolutions16_10
// Declaration: TArray<struct FString> Resolutions16_10
TArray<struct FString> UGI_MedievalDynasty_C::M_GetResolutions16_10() const {
	return Read<TArray<struct FString>>((byte*)this + 984);
}
TArray<struct FString>* UGI_MedievalDynasty_C::M_PtrGetResolutions16_10() {
	return reinterpret_cast<TArray<struct FString>*>((byte*)this + 984);
}
void UGI_MedievalDynasty_C::M_SetResolutions16_10(const TArray<struct FString>& value) {
	Write((byte*)this + 984, value);
}
// Member Getter and Setter of Resolutions21_9
// Declaration: TArray<struct FString> Resolutions21_9
TArray<struct FString> UGI_MedievalDynasty_C::M_GetResolutions21_9() const {
	return Read<TArray<struct FString>>((byte*)this + 1000);
}
TArray<struct FString>* UGI_MedievalDynasty_C::M_PtrGetResolutions21_9() {
	return reinterpret_cast<TArray<struct FString>*>((byte*)this + 1000);
}
void UGI_MedievalDynasty_C::M_SetResolutions21_9(const TArray<struct FString>& value) {
	Write((byte*)this + 1000, value);
}
// Member Getter and Setter of Resolutions32_9
// Declaration: TArray<struct FString> Resolutions32_9
TArray<struct FString> UGI_MedievalDynasty_C::M_GetResolutions32_9() const {
	return Read<TArray<struct FString>>((byte*)this + 1016);
}
TArray<struct FString>* UGI_MedievalDynasty_C::M_PtrGetResolutions32_9() {
	return reinterpret_cast<TArray<struct FString>*>((byte*)this + 1016);
}
void UGI_MedievalDynasty_C::M_SetResolutions32_9(const TArray<struct FString>& value) {
	Write((byte*)this + 1016, value);
}
// Member Getter and Setter of DefaultButtonResolutionID
// Declaration: int32_t DefaultButtonResolutionID
int32_t UGI_MedievalDynasty_C::M_GetDefaultButtonResolutionID() const {
	return Read<int32_t>((byte*)this + 1032);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultButtonResolutionID() {
	return reinterpret_cast<int32_t*>((byte*)this + 1032);
}
void UGI_MedievalDynasty_C::M_SetDefaultButtonResolutionID(const int32_t& value) {
	Write((byte*)this + 1032, value);
}
// Member Getter and Setter of AspectRatio
// Declaration: struct FVector2D AspectRatio
struct FVector2D UGI_MedievalDynasty_C::M_GetAspectRatio() const {
	return Read<struct FVector2D>((byte*)this + 1036);
}
struct FVector2D* UGI_MedievalDynasty_C::M_PtrGetAspectRatio() {
	return reinterpret_cast<struct FVector2D*>((byte*)this + 1036);
}
void UGI_MedievalDynasty_C::M_SetAspectRatio(const struct FVector2D& value) {
	Write((byte*)this + 1036, value);
}
// Member Getter and Setter of DefaultButtonAspectRatioID
// Declaration: int32_t DefaultButtonAspectRatioID
int32_t UGI_MedievalDynasty_C::M_GetDefaultButtonAspectRatioID() const {
	return Read<int32_t>((byte*)this + 1044);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultButtonAspectRatioID() {
	return reinterpret_cast<int32_t*>((byte*)this + 1044);
}
void UGI_MedievalDynasty_C::M_SetDefaultButtonAspectRatioID(const int32_t& value) {
	Write((byte*)this + 1044, value);
}
// Member Getter and Setter of Vsyncs
// Declaration: TArray<int32_t> Vsyncs
TArray<int32_t> UGI_MedievalDynasty_C::M_GetVsyncs() const {
	return Read<TArray<int32_t>>((byte*)this + 1048);
}
TArray<int32_t>* UGI_MedievalDynasty_C::M_PtrGetVsyncs() {
	return reinterpret_cast<TArray<int32_t>*>((byte*)this + 1048);
}
void UGI_MedievalDynasty_C::M_SetVsyncs(const TArray<int32_t>& value) {
	Write((byte*)this + 1048, value);
}
// Member Getter and Setter of DefaultButtonVsyncID
// Declaration: int32_t DefaultButtonVsyncID
int32_t UGI_MedievalDynasty_C::M_GetDefaultButtonVsyncID() const {
	return Read<int32_t>((byte*)this + 1064);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultButtonVsyncID() {
	return reinterpret_cast<int32_t*>((byte*)this + 1064);
}
void UGI_MedievalDynasty_C::M_SetDefaultButtonVsyncID(const int32_t& value) {
	Write((byte*)this + 1064, value);
}
// Member Getter and Setter of DefaultButtonWindowModeID
// Declaration: int32_t DefaultButtonWindowModeID
int32_t UGI_MedievalDynasty_C::M_GetDefaultButtonWindowModeID() const {
	return Read<int32_t>((byte*)this + 1068);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultButtonWindowModeID() {
	return reinterpret_cast<int32_t*>((byte*)this + 1068);
}
void UGI_MedievalDynasty_C::M_SetDefaultButtonWindowModeID(const int32_t& value) {
	Write((byte*)this + 1068, value);
}
// Member Getter and Setter of ViewDistanceScaleID
// Declaration: int32_t ViewDistanceScaleID
int32_t UGI_MedievalDynasty_C::M_GetViewDistanceScaleID() const {
	return Read<int32_t>((byte*)this + 1072);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetViewDistanceScaleID() {
	return reinterpret_cast<int32_t*>((byte*)this + 1072);
}
void UGI_MedievalDynasty_C::M_SetViewDistanceScaleID(const int32_t& value) {
	Write((byte*)this + 1072, value);
}
// Member Getter and Setter of AntiAliasingMethodID
// Declaration: int32_t AntiAliasingMethodID
int32_t UGI_MedievalDynasty_C::M_GetAntiAliasingMethodID() const {
	return Read<int32_t>((byte*)this + 1076);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetAntiAliasingMethodID() {
	return reinterpret_cast<int32_t*>((byte*)this + 1076);
}
void UGI_MedievalDynasty_C::M_SetAntiAliasingMethodID(const int32_t& value) {
	Write((byte*)this + 1076, value);
}
// Member Getter and Setter of PostProcessQualityID
// Declaration: int32_t PostProcessQualityID
int32_t UGI_MedievalDynasty_C::M_GetPostProcessQualityID() const {
	return Read<int32_t>((byte*)this + 1080);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetPostProcessQualityID() {
	return reinterpret_cast<int32_t*>((byte*)this + 1080);
}
void UGI_MedievalDynasty_C::M_SetPostProcessQualityID(const int32_t& value) {
	Write((byte*)this + 1080, value);
}
// Member Getter and Setter of ShadowQualityID
// Declaration: int32_t ShadowQualityID
int32_t UGI_MedievalDynasty_C::M_GetShadowQualityID() const {
	return Read<int32_t>((byte*)this + 1084);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetShadowQualityID() {
	return reinterpret_cast<int32_t*>((byte*)this + 1084);
}
void UGI_MedievalDynasty_C::M_SetShadowQualityID(const int32_t& value) {
	Write((byte*)this + 1084, value);
}
// Member Getter and Setter of TextureQualityID
// Declaration: int32_t TextureQualityID
int32_t UGI_MedievalDynasty_C::M_GetTextureQualityID() const {
	return Read<int32_t>((byte*)this + 1088);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetTextureQualityID() {
	return reinterpret_cast<int32_t*>((byte*)this + 1088);
}
void UGI_MedievalDynasty_C::M_SetTextureQualityID(const int32_t& value) {
	Write((byte*)this + 1088, value);
}
// Member Getter and Setter of EffectsQualityID
// Declaration: int32_t EffectsQualityID
int32_t UGI_MedievalDynasty_C::M_GetEffectsQualityID() const {
	return Read<int32_t>((byte*)this + 1092);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetEffectsQualityID() {
	return reinterpret_cast<int32_t*>((byte*)this + 1092);
}
void UGI_MedievalDynasty_C::M_SetEffectsQualityID(const int32_t& value) {
	Write((byte*)this + 1092, value);
}
// Member Getter and Setter of FoliageQualityID
// Declaration: int32_t FoliageQualityID
int32_t UGI_MedievalDynasty_C::M_GetFoliageQualityID() const {
	return Read<int32_t>((byte*)this + 1096);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetFoliageQualityID() {
	return reinterpret_cast<int32_t*>((byte*)this + 1096);
}
void UGI_MedievalDynasty_C::M_SetFoliageQualityID(const int32_t& value) {
	Write((byte*)this + 1096, value);
}
// Member Getter and Setter of ResolutionID
// Declaration: int32_t ResolutionID
int32_t UGI_MedievalDynasty_C::M_GetResolutionID() const {
	return Read<int32_t>((byte*)this + 1100);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetResolutionID() {
	return reinterpret_cast<int32_t*>((byte*)this + 1100);
}
void UGI_MedievalDynasty_C::M_SetResolutionID(const int32_t& value) {
	Write((byte*)this + 1100, value);
}
// Member Getter and Setter of AspectRatioID
// Declaration: int32_t AspectRatioID
int32_t UGI_MedievalDynasty_C::M_GetAspectRatioID() const {
	return Read<int32_t>((byte*)this + 1104);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetAspectRatioID() {
	return reinterpret_cast<int32_t*>((byte*)this + 1104);
}
void UGI_MedievalDynasty_C::M_SetAspectRatioID(const int32_t& value) {
	Write((byte*)this + 1104, value);
}
// Member Getter and Setter of VsyncID
// Declaration: int32_t VsyncID
int32_t UGI_MedievalDynasty_C::M_GetVsyncID() const {
	return Read<int32_t>((byte*)this + 1108);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetVsyncID() {
	return reinterpret_cast<int32_t*>((byte*)this + 1108);
}
void UGI_MedievalDynasty_C::M_SetVsyncID(const int32_t& value) {
	Write((byte*)this + 1108, value);
}
// Member Getter and Setter of WindowModeID
// Declaration: int32_t WindowModeID
int32_t UGI_MedievalDynasty_C::M_GetWindowModeID() const {
	return Read<int32_t>((byte*)this + 1112);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetWindowModeID() {
	return reinterpret_cast<int32_t*>((byte*)this + 1112);
}
void UGI_MedievalDynasty_C::M_SetWindowModeID(const int32_t& value) {
	Write((byte*)this + 1112, value);
}
// Member Getter and Setter of TempGraphicArray
// Declaration: TArray<int32_t> TempGraphicArray
TArray<int32_t> UGI_MedievalDynasty_C::M_GetTempGraphicArray() const {
	return Read<TArray<int32_t>>((byte*)this + 1120);
}
TArray<int32_t>* UGI_MedievalDynasty_C::M_PtrGetTempGraphicArray() {
	return reinterpret_cast<TArray<int32_t>*>((byte*)this + 1120);
}
void UGI_MedievalDynasty_C::M_SetTempGraphicArray(const TArray<int32_t>& value) {
	Write((byte*)this + 1120, value);
}
// Member Getter and Setter of DFAO
// Declaration: bool DFAO
bool UGI_MedievalDynasty_C::M_GetDFAO() const {
	return Read<bool>((byte*)this + 1136);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDFAO() {
	return reinterpret_cast<bool*>((byte*)this + 1136);
}
void UGI_MedievalDynasty_C::M_SetDFAO(const bool& value) {
	Write((byte*)this + 1136, value);
}
// Member Getter and Setter of DefaultDFAO
// Declaration: bool DefaultDFAO
bool UGI_MedievalDynasty_C::M_GetDefaultDFAO() const {
	return Read<bool>((byte*)this + 1137);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultDFAO() {
	return reinterpret_cast<bool*>((byte*)this + 1137);
}
void UGI_MedievalDynasty_C::M_SetDefaultDFAO(const bool& value) {
	Write((byte*)this + 1137, value);
}
// Member Getter and Setter of TempSoundArray
// Declaration: TArray<float> TempSoundArray
TArray<float> UGI_MedievalDynasty_C::M_GetTempSoundArray() const {
	return Read<TArray<float>>((byte*)this + 1144);
}
TArray<float>* UGI_MedievalDynasty_C::M_PtrGetTempSoundArray() {
	return reinterpret_cast<TArray<float>*>((byte*)this + 1144);
}
void UGI_MedievalDynasty_C::M_SetTempSoundArray(const TArray<float>& value) {
	Write((byte*)this + 1144, value);
}
// Member Getter and Setter of DefaultUIVolumeValue
// Declaration: float DefaultUIVolumeValue
float UGI_MedievalDynasty_C::M_GetDefaultUIVolumeValue() const {
	return Read<float>((byte*)this + 1160);
}
float* UGI_MedievalDynasty_C::M_PtrGetDefaultUIVolumeValue() {
	return reinterpret_cast<float*>((byte*)this + 1160);
}
void UGI_MedievalDynasty_C::M_SetDefaultUIVolumeValue(const float& value) {
	Write((byte*)this + 1160, value);
}
// Member Getter and Setter of UIVolumeValue
// Declaration: float UIVolumeValue
float UGI_MedievalDynasty_C::M_GetUIVolumeValue() const {
	return Read<float>((byte*)this + 1164);
}
float* UGI_MedievalDynasty_C::M_PtrGetUIVolumeValue() {
	return reinterpret_cast<float*>((byte*)this + 1164);
}
void UGI_MedievalDynasty_C::M_SetUIVolumeValue(const float& value) {
	Write((byte*)this + 1164, value);
}
// Member Getter and Setter of DefaultEnvironmentVolumeValue
// Declaration: float DefaultEnvironmentVolumeValue
float UGI_MedievalDynasty_C::M_GetDefaultEnvironmentVolumeValue() const {
	return Read<float>((byte*)this + 1168);
}
float* UGI_MedievalDynasty_C::M_PtrGetDefaultEnvironmentVolumeValue() {
	return reinterpret_cast<float*>((byte*)this + 1168);
}
void UGI_MedievalDynasty_C::M_SetDefaultEnvironmentVolumeValue(const float& value) {
	Write((byte*)this + 1168, value);
}
// Member Getter and Setter of EnvironmentVolumeValue
// Declaration: float EnvironmentVolumeValue
float UGI_MedievalDynasty_C::M_GetEnvironmentVolumeValue() const {
	return Read<float>((byte*)this + 1172);
}
float* UGI_MedievalDynasty_C::M_PtrGetEnvironmentVolumeValue() {
	return reinterpret_cast<float*>((byte*)this + 1172);
}
void UGI_MedievalDynasty_C::M_SetEnvironmentVolumeValue(const float& value) {
	Write((byte*)this + 1172, value);
}
// Member Getter and Setter of SkipMainMenu
// Declaration: bool SkipMainMenu
bool UGI_MedievalDynasty_C::M_GetSkipMainMenu() const {
	return Read<bool>((byte*)this + 1176);
}
bool* UGI_MedievalDynasty_C::M_PtrGetSkipMainMenu() {
	return reinterpret_cast<bool*>((byte*)this + 1176);
}
void UGI_MedievalDynasty_C::M_SetSkipMainMenu(const bool& value) {
	Write((byte*)this + 1176, value);
}
// Member Getter and Setter of SkipIntro
// Declaration: bool SkipIntro
bool UGI_MedievalDynasty_C::M_GetSkipIntro() const {
	return Read<bool>((byte*)this + 1177);
}
bool* UGI_MedievalDynasty_C::M_PtrGetSkipIntro() {
	return reinterpret_cast<bool*>((byte*)this + 1177);
}
void UGI_MedievalDynasty_C::M_SetSkipIntro(const bool& value) {
	Write((byte*)this + 1177, value);
}
// Member Getter and Setter of DefaultHorizontalSensitivity
// Declaration: float DefaultHorizontalSensitivity
float UGI_MedievalDynasty_C::M_GetDefaultHorizontalSensitivity() const {
	return Read<float>((byte*)this + 1180);
}
float* UGI_MedievalDynasty_C::M_PtrGetDefaultHorizontalSensitivity() {
	return reinterpret_cast<float*>((byte*)this + 1180);
}
void UGI_MedievalDynasty_C::M_SetDefaultHorizontalSensitivity(const float& value) {
	Write((byte*)this + 1180, value);
}
// Member Getter and Setter of DefaultConsolesHorizontalSensitivity
// Declaration: float DefaultConsolesHorizontalSensitivity
float UGI_MedievalDynasty_C::M_GetDefaultConsolesHorizontalSensitivity() const {
	return Read<float>((byte*)this + 1184);
}
float* UGI_MedievalDynasty_C::M_PtrGetDefaultConsolesHorizontalSensitivity() {
	return reinterpret_cast<float*>((byte*)this + 1184);
}
void UGI_MedievalDynasty_C::M_SetDefaultConsolesHorizontalSensitivity(const float& value) {
	Write((byte*)this + 1184, value);
}
// Member Getter and Setter of HorizontalSensitivity
// Declaration: float HorizontalSensitivity
float UGI_MedievalDynasty_C::M_GetHorizontalSensitivity() const {
	return Read<float>((byte*)this + 1188);
}
float* UGI_MedievalDynasty_C::M_PtrGetHorizontalSensitivity() {
	return reinterpret_cast<float*>((byte*)this + 1188);
}
void UGI_MedievalDynasty_C::M_SetHorizontalSensitivity(const float& value) {
	Write((byte*)this + 1188, value);
}
// Member Getter and Setter of DefaultVerticalSensitivity
// Declaration: float DefaultVerticalSensitivity
float UGI_MedievalDynasty_C::M_GetDefaultVerticalSensitivity() const {
	return Read<float>((byte*)this + 1192);
}
float* UGI_MedievalDynasty_C::M_PtrGetDefaultVerticalSensitivity() {
	return reinterpret_cast<float*>((byte*)this + 1192);
}
void UGI_MedievalDynasty_C::M_SetDefaultVerticalSensitivity(const float& value) {
	Write((byte*)this + 1192, value);
}
// Member Getter and Setter of DefaultConsolesVerticalSensitivity
// Declaration: float DefaultConsolesVerticalSensitivity
float UGI_MedievalDynasty_C::M_GetDefaultConsolesVerticalSensitivity() const {
	return Read<float>((byte*)this + 1196);
}
float* UGI_MedievalDynasty_C::M_PtrGetDefaultConsolesVerticalSensitivity() {
	return reinterpret_cast<float*>((byte*)this + 1196);
}
void UGI_MedievalDynasty_C::M_SetDefaultConsolesVerticalSensitivity(const float& value) {
	Write((byte*)this + 1196, value);
}
// Member Getter and Setter of VerticalSensitivity
// Declaration: float VerticalSensitivity
float UGI_MedievalDynasty_C::M_GetVerticalSensitivity() const {
	return Read<float>((byte*)this + 1200);
}
float* UGI_MedievalDynasty_C::M_PtrGetVerticalSensitivity() {
	return reinterpret_cast<float*>((byte*)this + 1200);
}
void UGI_MedievalDynasty_C::M_SetVerticalSensitivity(const float& value) {
	Write((byte*)this + 1200, value);
}
// Member Getter and Setter of DefaultInvertYAxis
// Declaration: bool DefaultInvertYAxis
bool UGI_MedievalDynasty_C::M_GetDefaultInvertYAxis() const {
	return Read<bool>((byte*)this + 1204);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultInvertYAxis() {
	return reinterpret_cast<bool*>((byte*)this + 1204);
}
void UGI_MedievalDynasty_C::M_SetDefaultInvertYAxis(const bool& value) {
	Write((byte*)this + 1204, value);
}
// Member Getter and Setter of InvertYAxis
// Declaration: bool InvertYAxis
bool UGI_MedievalDynasty_C::M_GetInvertYAxis() const {
	return Read<bool>((byte*)this + 1205);
}
bool* UGI_MedievalDynasty_C::M_PtrGetInvertYAxis() {
	return reinterpret_cast<bool*>((byte*)this + 1205);
}
void UGI_MedievalDynasty_C::M_SetInvertYAxis(const bool& value) {
	Write((byte*)this + 1205, value);
}
// Member Getter and Setter of DefaultInvertXAxis
// Declaration: bool DefaultInvertXAxis
bool UGI_MedievalDynasty_C::M_GetDefaultInvertXAxis() const {
	return Read<bool>((byte*)this + 1206);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultInvertXAxis() {
	return reinterpret_cast<bool*>((byte*)this + 1206);
}
void UGI_MedievalDynasty_C::M_SetDefaultInvertXAxis(const bool& value) {
	Write((byte*)this + 1206, value);
}
// Member Getter and Setter of TempGameplayArray
// Declaration: TArray<float> TempGameplayArray
TArray<float> UGI_MedievalDynasty_C::M_GetTempGameplayArray() const {
	return Read<TArray<float>>((byte*)this + 1208);
}
TArray<float>* UGI_MedievalDynasty_C::M_PtrGetTempGameplayArray() {
	return reinterpret_cast<TArray<float>*>((byte*)this + 1208);
}
void UGI_MedievalDynasty_C::M_SetTempGameplayArray(const TArray<float>& value) {
	Write((byte*)this + 1208, value);
}
// Member Getter and Setter of SelectedLanguage
// Declaration: struct FString SelectedLanguage
struct FString UGI_MedievalDynasty_C::M_GetSelectedLanguage() const {
	return Read<struct FString>((byte*)this + 1224);
}
struct FString* UGI_MedievalDynasty_C::M_PtrGetSelectedLanguage() {
	return reinterpret_cast<struct FString*>((byte*)this + 1224);
}
void UGI_MedievalDynasty_C::M_SetSelectedLanguage(const struct FString& value) {
	Write((byte*)this + 1224, value);
}
// Member Getter and Setter of AcceptableLanguages
// Declaration: TMap<struct FString, struct FName> AcceptableLanguages
TMap<struct FString, struct FName> UGI_MedievalDynasty_C::M_GetAcceptableLanguages() const {
	return Read<TMap<struct FString, struct FName>>((byte*)this + 1240);
}
TMap<struct FString, struct FName>* UGI_MedievalDynasty_C::M_PtrGetAcceptableLanguages() {
	return reinterpret_cast<TMap<struct FString, struct FName>*>((byte*)this + 1240);
}
void UGI_MedievalDynasty_C::M_SetAcceptableLanguages(const TMap<struct FString, struct FName>& value) {
	Write((byte*)this + 1240, value);
}
// Member Getter and Setter of WasLanguageFound
// Declaration: bool WasLanguageFound
bool UGI_MedievalDynasty_C::M_GetWasLanguageFound() const {
	return Read<bool>((byte*)this + 1320);
}
bool* UGI_MedievalDynasty_C::M_PtrGetWasLanguageFound() {
	return reinterpret_cast<bool*>((byte*)this + 1320);
}
void UGI_MedievalDynasty_C::M_SetWasLanguageFound(const bool& value) {
	Write((byte*)this + 1320, value);
}
// Member Getter and Setter of LanguageID
// Declaration: int32_t LanguageID
int32_t UGI_MedievalDynasty_C::M_GetLanguageID() const {
	return Read<int32_t>((byte*)this + 1324);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetLanguageID() {
	return reinterpret_cast<int32_t*>((byte*)this + 1324);
}
void UGI_MedievalDynasty_C::M_SetLanguageID(const int32_t& value) {
	Write((byte*)this + 1324, value);
}
// Member Getter and Setter of FOV
// Declaration: float FOV
float UGI_MedievalDynasty_C::M_GetFOV() const {
	return Read<float>((byte*)this + 1328);
}
float* UGI_MedievalDynasty_C::M_PtrGetFOV() {
	return reinterpret_cast<float*>((byte*)this + 1328);
}
void UGI_MedievalDynasty_C::M_SetFOV(const float& value) {
	Write((byte*)this + 1328, value);
}
// Member Getter and Setter of DefaultFOV
// Declaration: float DefaultFOV
float UGI_MedievalDynasty_C::M_GetDefaultFOV() const {
	return Read<float>((byte*)this + 1332);
}
float* UGI_MedievalDynasty_C::M_PtrGetDefaultFOV() {
	return reinterpret_cast<float*>((byte*)this + 1332);
}
void UGI_MedievalDynasty_C::M_SetDefaultFOV(const float& value) {
	Write((byte*)this + 1332, value);
}
// Member Getter and Setter of DefaultHeadbobbing
// Declaration: bool DefaultHeadbobbing
bool UGI_MedievalDynasty_C::M_GetDefaultHeadbobbing() const {
	return Read<bool>((byte*)this + 1336);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultHeadbobbing() {
	return reinterpret_cast<bool*>((byte*)this + 1336);
}
void UGI_MedievalDynasty_C::M_SetDefaultHeadbobbing(const bool& value) {
	Write((byte*)this + 1336, value);
}
// Member Getter and Setter of Headbobbing
// Declaration: bool Headbobbing
bool UGI_MedievalDynasty_C::M_GetHeadbobbing() const {
	return Read<bool>((byte*)this + 1337);
}
bool* UGI_MedievalDynasty_C::M_PtrGetHeadbobbing() {
	return reinterpret_cast<bool*>((byte*)this + 1337);
}
void UGI_MedievalDynasty_C::M_SetHeadbobbing(const bool& value) {
	Write((byte*)this + 1337, value);
}
// Member Getter and Setter of DefaultBlood
// Declaration: bool DefaultBlood
bool UGI_MedievalDynasty_C::M_GetDefaultBlood() const {
	return Read<bool>((byte*)this + 1338);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultBlood() {
	return reinterpret_cast<bool*>((byte*)this + 1338);
}
void UGI_MedievalDynasty_C::M_SetDefaultBlood(const bool& value) {
	Write((byte*)this + 1338, value);
}
// Member Getter and Setter of Blood
// Declaration: bool Blood
bool UGI_MedievalDynasty_C::M_GetBlood() const {
	return Read<bool>((byte*)this + 1339);
}
bool* UGI_MedievalDynasty_C::M_PtrGetBlood() {
	return reinterpret_cast<bool*>((byte*)this + 1339);
}
void UGI_MedievalDynasty_C::M_SetBlood(const bool& value) {
	Write((byte*)this + 1339, value);
}
// Member Getter and Setter of Cheats
// Declaration: bool Cheats
bool UGI_MedievalDynasty_C::M_GetCheats() const {
	return Read<bool>((byte*)this + 1340);
}
bool* UGI_MedievalDynasty_C::M_PtrGetCheats() {
	return reinterpret_cast<bool*>((byte*)this + 1340);
}
void UGI_MedievalDynasty_C::M_SetCheats(const bool& value) {
	Write((byte*)this + 1340, value);
}
// Member Getter and Setter of TestVersion
// Declaration: bool TestVersion
bool UGI_MedievalDynasty_C::M_GetTestVersion() const {
	return Read<bool>((byte*)this + 1341);
}
bool* UGI_MedievalDynasty_C::M_PtrGetTestVersion() {
	return reinterpret_cast<bool*>((byte*)this + 1341);
}
void UGI_MedievalDynasty_C::M_SetTestVersion(const bool& value) {
	Write((byte*)this + 1341, value);
}
// Member Getter and Setter of MultiplayerBeta
// Declaration: bool MultiplayerBeta
bool UGI_MedievalDynasty_C::M_GetMultiplayerBeta() const {
	return Read<bool>((byte*)this + 1342);
}
bool* UGI_MedievalDynasty_C::M_PtrGetMultiplayerBeta() {
	return reinterpret_cast<bool*>((byte*)this + 1342);
}
void UGI_MedievalDynasty_C::M_SetMultiplayerBeta(const bool& value) {
	Write((byte*)this + 1342, value);
}
// Member Getter and Setter of InitialLaunch
// Declaration: bool InitialLaunch
bool UGI_MedievalDynasty_C::M_GetInitialLaunch() const {
	return Read<bool>((byte*)this + 1343);
}
bool* UGI_MedievalDynasty_C::M_PtrGetInitialLaunch() {
	return reinterpret_cast<bool*>((byte*)this + 1343);
}
void UGI_MedievalDynasty_C::M_SetInitialLaunch(const bool& value) {
	Write((byte*)this + 1343, value);
}
// Member Getter and Setter of DisableAllScreenMessages
// Declaration: bool DisableAllScreenMessages
bool UGI_MedievalDynasty_C::M_GetDisableAllScreenMessages() const {
	return Read<bool>((byte*)this + 1344);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDisableAllScreenMessages() {
	return reinterpret_cast<bool*>((byte*)this + 1344);
}
void UGI_MedievalDynasty_C::M_SetDisableAllScreenMessages(const bool& value) {
	Write((byte*)this + 1344, value);
}
// Member Getter and Setter of InvertXAxis
// Declaration: bool InvertXAxis
bool UGI_MedievalDynasty_C::M_GetInvertXAxis() const {
	return Read<bool>((byte*)this + 1345);
}
bool* UGI_MedievalDynasty_C::M_PtrGetInvertXAxis() {
	return reinterpret_cast<bool*>((byte*)this + 1345);
}
void UGI_MedievalDynasty_C::M_SetInvertXAxis(const bool& value) {
	Write((byte*)this + 1345, value);
}
// Member Getter and Setter of DefaultSprintOnHold
// Declaration: bool DefaultSprintOnHold
bool UGI_MedievalDynasty_C::M_GetDefaultSprintOnHold() const {
	return Read<bool>((byte*)this + 1346);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultSprintOnHold() {
	return reinterpret_cast<bool*>((byte*)this + 1346);
}
void UGI_MedievalDynasty_C::M_SetDefaultSprintOnHold(const bool& value) {
	Write((byte*)this + 1346, value);
}
// Member Getter and Setter of DefaultConsolesSprintOnHold
// Declaration: bool DefaultConsolesSprintOnHold
bool UGI_MedievalDynasty_C::M_GetDefaultConsolesSprintOnHold() const {
	return Read<bool>((byte*)this + 1347);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultConsolesSprintOnHold() {
	return reinterpret_cast<bool*>((byte*)this + 1347);
}
void UGI_MedievalDynasty_C::M_SetDefaultConsolesSprintOnHold(const bool& value) {
	Write((byte*)this + 1347, value);
}
// Member Getter and Setter of SprintOnHold
// Declaration: bool SprintOnHold
bool UGI_MedievalDynasty_C::M_GetSprintOnHold() const {
	return Read<bool>((byte*)this + 1348);
}
bool* UGI_MedievalDynasty_C::M_PtrGetSprintOnHold() {
	return reinterpret_cast<bool*>((byte*)this + 1348);
}
void UGI_MedievalDynasty_C::M_SetSprintOnHold(const bool& value) {
	Write((byte*)this + 1348, value);
}
// Member Getter and Setter of DefaultCrouchOnHold
// Declaration: bool DefaultCrouchOnHold
bool UGI_MedievalDynasty_C::M_GetDefaultCrouchOnHold() const {
	return Read<bool>((byte*)this + 1349);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultCrouchOnHold() {
	return reinterpret_cast<bool*>((byte*)this + 1349);
}
void UGI_MedievalDynasty_C::M_SetDefaultCrouchOnHold(const bool& value) {
	Write((byte*)this + 1349, value);
}
// Member Getter and Setter of DefaultConsolesCrouchOnHold
// Declaration: bool DefaultConsolesCrouchOnHold
bool UGI_MedievalDynasty_C::M_GetDefaultConsolesCrouchOnHold() const {
	return Read<bool>((byte*)this + 1350);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultConsolesCrouchOnHold() {
	return reinterpret_cast<bool*>((byte*)this + 1350);
}
void UGI_MedievalDynasty_C::M_SetDefaultConsolesCrouchOnHold(const bool& value) {
	Write((byte*)this + 1350, value);
}
// Member Getter and Setter of CrouchOnHold
// Declaration: bool CrouchOnHold
bool UGI_MedievalDynasty_C::M_GetCrouchOnHold() const {
	return Read<bool>((byte*)this + 1351);
}
bool* UGI_MedievalDynasty_C::M_PtrGetCrouchOnHold() {
	return reinterpret_cast<bool*>((byte*)this + 1351);
}
void UGI_MedievalDynasty_C::M_SetCrouchOnHold(const bool& value) {
	Write((byte*)this + 1351, value);
}
// Member Getter and Setter of DefaultControllerVibrationsIntensity
// Declaration: float DefaultControllerVibrationsIntensity
float UGI_MedievalDynasty_C::M_GetDefaultControllerVibrationsIntensity() const {
	return Read<float>((byte*)this + 1352);
}
float* UGI_MedievalDynasty_C::M_PtrGetDefaultControllerVibrationsIntensity() {
	return reinterpret_cast<float*>((byte*)this + 1352);
}
void UGI_MedievalDynasty_C::M_SetDefaultControllerVibrationsIntensity(const float& value) {
	Write((byte*)this + 1352, value);
}
// Member Getter and Setter of ControllerVibrationsIntensity
// Declaration: float ControllerVibrationsIntensity
float UGI_MedievalDynasty_C::M_GetControllerVibrationsIntensity() const {
	return Read<float>((byte*)this + 1356);
}
float* UGI_MedievalDynasty_C::M_PtrGetControllerVibrationsIntensity() {
	return reinterpret_cast<float*>((byte*)this + 1356);
}
void UGI_MedievalDynasty_C::M_SetControllerVibrationsIntensity(const float& value) {
	Write((byte*)this + 1356, value);
}
// Member Getter and Setter of DefaultControllerAimAssist
// Declaration: bool DefaultControllerAimAssist
bool UGI_MedievalDynasty_C::M_GetDefaultControllerAimAssist() const {
	return Read<bool>((byte*)this + 1360);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultControllerAimAssist() {
	return reinterpret_cast<bool*>((byte*)this + 1360);
}
void UGI_MedievalDynasty_C::M_SetDefaultControllerAimAssist(const bool& value) {
	Write((byte*)this + 1360, value);
}
// Member Getter and Setter of ControllerAimAssist
// Declaration: bool ControllerAimAssist
bool UGI_MedievalDynasty_C::M_GetControllerAimAssist() const {
	return Read<bool>((byte*)this + 1361);
}
bool* UGI_MedievalDynasty_C::M_PtrGetControllerAimAssist() {
	return reinterpret_cast<bool*>((byte*)this + 1361);
}
void UGI_MedievalDynasty_C::M_SetControllerAimAssist(const bool& value) {
	Write((byte*)this + 1361, value);
}
// Member Getter and Setter of QuickslotTypes
// Declaration: TArray<struct FString> QuickslotTypes
TArray<struct FString> UGI_MedievalDynasty_C::M_GetQuickslotTypes() const {
	return Read<TArray<struct FString>>((byte*)this + 1368);
}
TArray<struct FString>* UGI_MedievalDynasty_C::M_PtrGetQuickslotTypes() {
	return reinterpret_cast<TArray<struct FString>*>((byte*)this + 1368);
}
void UGI_MedievalDynasty_C::M_SetQuickslotTypes(const TArray<struct FString>& value) {
	Write((byte*)this + 1368, value);
}
// Member Getter and Setter of SelectedQuickslotsType
// Declaration: int32_t SelectedQuickslotsType
int32_t UGI_MedievalDynasty_C::M_GetSelectedQuickslotsType() const {
	return Read<int32_t>((byte*)this + 1384);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetSelectedQuickslotsType() {
	return reinterpret_cast<int32_t*>((byte*)this + 1384);
}
void UGI_MedievalDynasty_C::M_SetSelectedQuickslotsType(const int32_t& value) {
	Write((byte*)this + 1384, value);
}
// Member Getter and Setter of OnGraphicsSettingsChanged
// Declaration: TAssetPtr<class FOnGraphicsSettingsChanged__DelegateSignature> OnGraphicsSettingsChanged
TAssetPtr<class FOnGraphicsSettingsChanged__DelegateSignature> UGI_MedievalDynasty_C::M_GetOnGraphicsSettingsChanged() const {
	return Read<TAssetPtr<class FOnGraphicsSettingsChanged__DelegateSignature>>((byte*)this + 1392);
}
TAssetPtr<class FOnGraphicsSettingsChanged__DelegateSignature>* UGI_MedievalDynasty_C::M_PtrGetOnGraphicsSettingsChanged() {
	return reinterpret_cast<TAssetPtr<class FOnGraphicsSettingsChanged__DelegateSignature>*>((byte*)this + 1392);
}
void UGI_MedievalDynasty_C::M_SetOnGraphicsSettingsChanged(const TAssetPtr<class FOnGraphicsSettingsChanged__DelegateSignature>& value) {
	Write((byte*)this + 1392, value);
}
// Member Getter and Setter of Settings
// Declaration: class USAVE_Settings_C* Settings
class USAVE_Settings_C* UGI_MedievalDynasty_C::M_GetSettings() const {
	return Read<class USAVE_Settings_C*>((byte*)this + 1408);
}
class USAVE_Settings_C** UGI_MedievalDynasty_C::M_PtrGetSettings() {
	return reinterpret_cast<class USAVE_Settings_C**>((byte*)this + 1408);
}
void UGI_MedievalDynasty_C::M_SetSettings(const class USAVE_Settings_C*& value) {
	Write((byte*)this + 1408, value);
}
// Member Getter and Setter of SaveGameDataReference
// Declaration: class USAVE_Data_C* SaveGameDataReference
class USAVE_Data_C* UGI_MedievalDynasty_C::M_GetSaveGameDataReference() const {
	return Read<class USAVE_Data_C*>((byte*)this + 1416);
}
class USAVE_Data_C** UGI_MedievalDynasty_C::M_PtrGetSaveGameDataReference() {
	return reinterpret_cast<class USAVE_Data_C**>((byte*)this + 1416);
}
void UGI_MedievalDynasty_C::M_SetSaveGameDataReference(const class USAVE_Data_C*& value) {
	Write((byte*)this + 1416, value);
}
// Member Getter and Setter of SaveGameGameReference
// Declaration: TAssetPtr<class USAVE_Game_C> SaveGameGameReference
TAssetPtr<class USAVE_Game_C> UGI_MedievalDynasty_C::M_GetSaveGameGameReference() const {
	return Read<TAssetPtr<class USAVE_Game_C>>((byte*)this + 1424);
}
TAssetPtr<class USAVE_Game_C>* UGI_MedievalDynasty_C::M_PtrGetSaveGameGameReference() {
	return reinterpret_cast<TAssetPtr<class USAVE_Game_C>*>((byte*)this + 1424);
}
void UGI_MedievalDynasty_C::M_SetSaveGameGameReference(const TAssetPtr<class USAVE_Game_C>& value) {
	Write((byte*)this + 1424, value);
}
// Member Getter and Setter of BackgroundIndex
// Declaration: int32_t BackgroundIndex
int32_t UGI_MedievalDynasty_C::M_GetBackgroundIndex() const {
	return Read<int32_t>((byte*)this + 1464);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetBackgroundIndex() {
	return reinterpret_cast<int32_t*>((byte*)this + 1464);
}
void UGI_MedievalDynasty_C::M_SetBackgroundIndex(const int32_t& value) {
	Write((byte*)this + 1464, value);
}
// Member Getter and Setter of Resolutions4_3_Point
// Declaration: TArray<struct FIntPoint> Resolutions4_3_Point
TArray<struct FIntPoint> UGI_MedievalDynasty_C::M_GetResolutions4_3_Point() const {
	return Read<TArray<struct FIntPoint>>((byte*)this + 1472);
}
TArray<struct FIntPoint>* UGI_MedievalDynasty_C::M_PtrGetResolutions4_3_Point() {
	return reinterpret_cast<TArray<struct FIntPoint>*>((byte*)this + 1472);
}
void UGI_MedievalDynasty_C::M_SetResolutions4_3_Point(const TArray<struct FIntPoint>& value) {
	Write((byte*)this + 1472, value);
}
// Member Getter and Setter of Resolutions16_9_Point
// Declaration: TArray<struct FIntPoint> Resolutions16_9_Point
TArray<struct FIntPoint> UGI_MedievalDynasty_C::M_GetResolutions16_9_Point() const {
	return Read<TArray<struct FIntPoint>>((byte*)this + 1488);
}
TArray<struct FIntPoint>* UGI_MedievalDynasty_C::M_PtrGetResolutions16_9_Point() {
	return reinterpret_cast<TArray<struct FIntPoint>*>((byte*)this + 1488);
}
void UGI_MedievalDynasty_C::M_SetResolutions16_9_Point(const TArray<struct FIntPoint>& value) {
	Write((byte*)this + 1488, value);
}
// Member Getter and Setter of Resolutions16_10_Point
// Declaration: TArray<struct FIntPoint> Resolutions16_10_Point
TArray<struct FIntPoint> UGI_MedievalDynasty_C::M_GetResolutions16_10_Point() const {
	return Read<TArray<struct FIntPoint>>((byte*)this + 1504);
}
TArray<struct FIntPoint>* UGI_MedievalDynasty_C::M_PtrGetResolutions16_10_Point() {
	return reinterpret_cast<TArray<struct FIntPoint>*>((byte*)this + 1504);
}
void UGI_MedievalDynasty_C::M_SetResolutions16_10_Point(const TArray<struct FIntPoint>& value) {
	Write((byte*)this + 1504, value);
}
// Member Getter and Setter of Resolutions21_9_Point
// Declaration: TArray<struct FIntPoint> Resolutions21_9_Point
TArray<struct FIntPoint> UGI_MedievalDynasty_C::M_GetResolutions21_9_Point() const {
	return Read<TArray<struct FIntPoint>>((byte*)this + 1520);
}
TArray<struct FIntPoint>* UGI_MedievalDynasty_C::M_PtrGetResolutions21_9_Point() {
	return reinterpret_cast<TArray<struct FIntPoint>*>((byte*)this + 1520);
}
void UGI_MedievalDynasty_C::M_SetResolutions21_9_Point(const TArray<struct FIntPoint>& value) {
	Write((byte*)this + 1520, value);
}
// Member Getter and Setter of Resolutions32_9_Point
// Declaration: TArray<struct FIntPoint> Resolutions32_9_Point
TArray<struct FIntPoint> UGI_MedievalDynasty_C::M_GetResolutions32_9_Point() const {
	return Read<TArray<struct FIntPoint>>((byte*)this + 1536);
}
TArray<struct FIntPoint>* UGI_MedievalDynasty_C::M_PtrGetResolutions32_9_Point() {
	return reinterpret_cast<TArray<struct FIntPoint>*>((byte*)this + 1536);
}
void UGI_MedievalDynasty_C::M_SetResolutions32_9_Point(const TArray<struct FIntPoint>& value) {
	Write((byte*)this + 1536, value);
}
// Member Getter and Setter of Resolution_Point
// Declaration: struct FIntPoint Resolution_Point
struct FIntPoint UGI_MedievalDynasty_C::M_GetResolution_Point() const {
	return Read<struct FIntPoint>((byte*)this + 1552);
}
struct FIntPoint* UGI_MedievalDynasty_C::M_PtrGetResolution_Point() {
	return reinterpret_cast<struct FIntPoint*>((byte*)this + 1552);
}
void UGI_MedievalDynasty_C::M_SetResolution_Point(const struct FIntPoint& value) {
	Write((byte*)this + 1552, value);
}
// Member Getter and Setter of ShadingQuality
// Declaration: int32_t ShadingQuality
int32_t UGI_MedievalDynasty_C::M_GetShadingQuality() const {
	return Read<int32_t>((byte*)this + 1560);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetShadingQuality() {
	return reinterpret_cast<int32_t*>((byte*)this + 1560);
}
void UGI_MedievalDynasty_C::M_SetShadingQuality(const int32_t& value) {
	Write((byte*)this + 1560, value);
}
// Member Getter and Setter of ShadingQualities
// Declaration: TArray<int32_t> ShadingQualities
TArray<int32_t> UGI_MedievalDynasty_C::M_GetShadingQualities() const {
	return Read<TArray<int32_t>>((byte*)this + 1568);
}
TArray<int32_t>* UGI_MedievalDynasty_C::M_PtrGetShadingQualities() {
	return reinterpret_cast<TArray<int32_t>*>((byte*)this + 1568);
}
void UGI_MedievalDynasty_C::M_SetShadingQualities(const TArray<int32_t>& value) {
	Write((byte*)this + 1568, value);
}
// Member Getter and Setter of DefaultShadingQualityID
// Declaration: int32_t DefaultShadingQualityID
int32_t UGI_MedievalDynasty_C::M_GetDefaultShadingQualityID() const {
	return Read<int32_t>((byte*)this + 1584);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultShadingQualityID() {
	return reinterpret_cast<int32_t*>((byte*)this + 1584);
}
void UGI_MedievalDynasty_C::M_SetDefaultShadingQualityID(const int32_t& value) {
	Write((byte*)this + 1584, value);
}
// Member Getter and Setter of ShadingQualityID
// Declaration: int32_t ShadingQualityID
int32_t UGI_MedievalDynasty_C::M_GetShadingQualityID() const {
	return Read<int32_t>((byte*)this + 1588);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetShadingQualityID() {
	return reinterpret_cast<int32_t*>((byte*)this + 1588);
}
void UGI_MedievalDynasty_C::M_SetShadingQualityID(const int32_t& value) {
	Write((byte*)this + 1588, value);
}
// Member Getter and Setter of GraphicsSettingsPresets
// Declaration: TArray<struct FST_GraphicsSettingsPreset> GraphicsSettingsPresets
TArray<struct FST_GraphicsSettingsPreset> UGI_MedievalDynasty_C::M_GetGraphicsSettingsPresets() const {
	return Read<TArray<struct FST_GraphicsSettingsPreset>>((byte*)this + 1592);
}
TArray<struct FST_GraphicsSettingsPreset>* UGI_MedievalDynasty_C::M_PtrGetGraphicsSettingsPresets() {
	return reinterpret_cast<TArray<struct FST_GraphicsSettingsPreset>*>((byte*)this + 1592);
}
void UGI_MedievalDynasty_C::M_SetGraphicsSettingsPresets(const TArray<struct FST_GraphicsSettingsPreset>& value) {
	Write((byte*)this + 1592, value);
}
// Member Getter and Setter of RazerChroma
// Declaration: bool RazerChroma
bool UGI_MedievalDynasty_C::M_GetRazerChroma() const {
	return Read<bool>((byte*)this + 1608);
}
bool* UGI_MedievalDynasty_C::M_PtrGetRazerChroma() {
	return reinterpret_cast<bool*>((byte*)this + 1608);
}
void UGI_MedievalDynasty_C::M_SetRazerChroma(const bool& value) {
	Write((byte*)this + 1608, value);
}
// Member Getter and Setter of DefaultRazerChroma
// Declaration: bool DefaultRazerChroma
bool UGI_MedievalDynasty_C::M_GetDefaultRazerChroma() const {
	return Read<bool>((byte*)this + 1609);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultRazerChroma() {
	return reinterpret_cast<bool*>((byte*)this + 1609);
}
void UGI_MedievalDynasty_C::M_SetDefaultRazerChroma(const bool& value) {
	Write((byte*)this + 1609, value);
}
// Member Getter and Setter of TimeToSave
// Declaration: TMap<TEnumAsByte<E_TimeToSave>, struct FText> TimeToSave
TMap<TEnumAsByte<E_TimeToSave>, struct FText> UGI_MedievalDynasty_C::M_GetTimeToSave() const {
	return Read<TMap<TEnumAsByte<E_TimeToSave>, struct FText>>((byte*)this + 1616);
}
TMap<TEnumAsByte<E_TimeToSave>, struct FText>* UGI_MedievalDynasty_C::M_PtrGetTimeToSave() {
	return reinterpret_cast<TMap<TEnumAsByte<E_TimeToSave>, struct FText>*>((byte*)this + 1616);
}
void UGI_MedievalDynasty_C::M_SetTimeToSave(const TMap<TEnumAsByte<E_TimeToSave>, struct FText>& value) {
	Write((byte*)this + 1616, value);
}
// Member Getter and Setter of SelectedTimeToSave
// Declaration: TEnumAsByte<E_TimeToSave> SelectedTimeToSave
TEnumAsByte<E_TimeToSave> UGI_MedievalDynasty_C::M_GetSelectedTimeToSave() const {
	return Read<TEnumAsByte<E_TimeToSave>>((byte*)this + 1696);
}
TEnumAsByte<E_TimeToSave>* UGI_MedievalDynasty_C::M_PtrGetSelectedTimeToSave() {
	return reinterpret_cast<TEnumAsByte<E_TimeToSave>*>((byte*)this + 1696);
}
void UGI_MedievalDynasty_C::M_SetSelectedTimeToSave(const TEnumAsByte<E_TimeToSave>& value) {
	Write((byte*)this + 1696, value);
}
// Member Getter and Setter of AutosaveOnQuestEnd
// Declaration: bool AutosaveOnQuestEnd
bool UGI_MedievalDynasty_C::M_GetAutosaveOnQuestEnd() const {
	return Read<bool>((byte*)this + 1697);
}
bool* UGI_MedievalDynasty_C::M_PtrGetAutosaveOnQuestEnd() {
	return reinterpret_cast<bool*>((byte*)this + 1697);
}
void UGI_MedievalDynasty_C::M_SetAutosaveOnQuestEnd(const bool& value) {
	Write((byte*)this + 1697, value);
}
// Member Getter and Setter of DefaultAutosaveOnQuestEnd
// Declaration: bool DefaultAutosaveOnQuestEnd
bool UGI_MedievalDynasty_C::M_GetDefaultAutosaveOnQuestEnd() const {
	return Read<bool>((byte*)this + 1698);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultAutosaveOnQuestEnd() {
	return reinterpret_cast<bool*>((byte*)this + 1698);
}
void UGI_MedievalDynasty_C::M_SetDefaultAutosaveOnQuestEnd(const bool& value) {
	Write((byte*)this + 1698, value);
}
// Member Getter and Setter of GraphicsSettingsPresetID
// Declaration: int32_t GraphicsSettingsPresetID
int32_t UGI_MedievalDynasty_C::M_GetGraphicsSettingsPresetID() const {
	return Read<int32_t>((byte*)this + 1700);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetGraphicsSettingsPresetID() {
	return reinterpret_cast<int32_t*>((byte*)this + 1700);
}
void UGI_MedievalDynasty_C::M_SetGraphicsSettingsPresetID(const int32_t& value) {
	Write((byte*)this + 1700, value);
}
// Member Getter and Setter of Brightness
// Declaration: int32_t Brightness
int32_t UGI_MedievalDynasty_C::M_GetBrightness() const {
	return Read<int32_t>((byte*)this + 1704);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetBrightness() {
	return reinterpret_cast<int32_t*>((byte*)this + 1704);
}
void UGI_MedievalDynasty_C::M_SetBrightness(const int32_t& value) {
	Write((byte*)this + 1704, value);
}
// Member Getter and Setter of DefaultBrightness
// Declaration: int32_t DefaultBrightness
int32_t UGI_MedievalDynasty_C::M_GetDefaultBrightness() const {
	return Read<int32_t>((byte*)this + 1708);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultBrightness() {
	return reinterpret_cast<int32_t*>((byte*)this + 1708);
}
void UGI_MedievalDynasty_C::M_SetDefaultBrightness(const int32_t& value) {
	Write((byte*)this + 1708, value);
}
// Member Getter and Setter of DefaultCameraShakes
// Declaration: bool DefaultCameraShakes
bool UGI_MedievalDynasty_C::M_GetDefaultCameraShakes() const {
	return Read<bool>((byte*)this + 1712);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultCameraShakes() {
	return reinterpret_cast<bool*>((byte*)this + 1712);
}
void UGI_MedievalDynasty_C::M_SetDefaultCameraShakes(const bool& value) {
	Write((byte*)this + 1712, value);
}
// Member Getter and Setter of CameraShakes
// Declaration: bool CameraShakes
bool UGI_MedievalDynasty_C::M_GetCameraShakes() const {
	return Read<bool>((byte*)this + 1713);
}
bool* UGI_MedievalDynasty_C::M_PtrGetCameraShakes() {
	return reinterpret_cast<bool*>((byte*)this + 1713);
}
void UGI_MedievalDynasty_C::M_SetCameraShakes(const bool& value) {
	Write((byte*)this + 1713, value);
}
// Member Getter and Setter of DefaultBreathing
// Declaration: bool DefaultBreathing
bool UGI_MedievalDynasty_C::M_GetDefaultBreathing() const {
	return Read<bool>((byte*)this + 1714);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultBreathing() {
	return reinterpret_cast<bool*>((byte*)this + 1714);
}
void UGI_MedievalDynasty_C::M_SetDefaultBreathing(const bool& value) {
	Write((byte*)this + 1714, value);
}
// Member Getter and Setter of Breathing
// Declaration: bool Breathing
bool UGI_MedievalDynasty_C::M_GetBreathing() const {
	return Read<bool>((byte*)this + 1715);
}
bool* UGI_MedievalDynasty_C::M_PtrGetBreathing() {
	return reinterpret_cast<bool*>((byte*)this + 1715);
}
void UGI_MedievalDynasty_C::M_SetBreathing(const bool& value) {
	Write((byte*)this + 1715, value);
}
// Member Getter and Setter of SelectedMouseScrollFunction
// Declaration: int32_t SelectedMouseScrollFunction
int32_t UGI_MedievalDynasty_C::M_GetSelectedMouseScrollFunction() const {
	return Read<int32_t>((byte*)this + 1716);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetSelectedMouseScrollFunction() {
	return reinterpret_cast<int32_t*>((byte*)this + 1716);
}
void UGI_MedievalDynasty_C::M_SetSelectedMouseScrollFunction(const int32_t& value) {
	Write((byte*)this + 1716, value);
}
// Member Getter and Setter of SSGI
// Declaration: bool SSGI
bool UGI_MedievalDynasty_C::M_GetSSGI() const {
	return Read<bool>((byte*)this + 1720);
}
bool* UGI_MedievalDynasty_C::M_PtrGetSSGI() {
	return reinterpret_cast<bool*>((byte*)this + 1720);
}
void UGI_MedievalDynasty_C::M_SetSSGI(const bool& value) {
	Write((byte*)this + 1720, value);
}
// Member Getter and Setter of DefaultSSGI
// Declaration: bool DefaultSSGI
bool UGI_MedievalDynasty_C::M_GetDefaultSSGI() const {
	return Read<bool>((byte*)this + 1721);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultSSGI() {
	return reinterpret_cast<bool*>((byte*)this + 1721);
}
void UGI_MedievalDynasty_C::M_SetDefaultSSGI(const bool& value) {
	Write((byte*)this + 1721, value);
}
// Member Getter and Setter of GamepadType
// Declaration: TMap<TEnumAsByte<E_GamepadType>, struct FString> GamepadType
TMap<TEnumAsByte<E_GamepadType>, struct FString> UGI_MedievalDynasty_C::M_GetGamepadType() const {
	return Read<TMap<TEnumAsByte<E_GamepadType>, struct FString>>((byte*)this + 1728);
}
TMap<TEnumAsByte<E_GamepadType>, struct FString>* UGI_MedievalDynasty_C::M_PtrGetGamepadType() {
	return reinterpret_cast<TMap<TEnumAsByte<E_GamepadType>, struct FString>*>((byte*)this + 1728);
}
void UGI_MedievalDynasty_C::M_SetGamepadType(const TMap<TEnumAsByte<E_GamepadType>, struct FString>& value) {
	Write((byte*)this + 1728, value);
}
// Member Getter and Setter of SelectedGamepadType
// Declaration: TEnumAsByte<E_GamepadType> SelectedGamepadType
TEnumAsByte<E_GamepadType> UGI_MedievalDynasty_C::M_GetSelectedGamepadType() const {
	return Read<TEnumAsByte<E_GamepadType>>((byte*)this + 1808);
}
TEnumAsByte<E_GamepadType>* UGI_MedievalDynasty_C::M_PtrGetSelectedGamepadType() {
	return reinterpret_cast<TEnumAsByte<E_GamepadType>*>((byte*)this + 1808);
}
void UGI_MedievalDynasty_C::M_SetSelectedGamepadType(const TEnumAsByte<E_GamepadType>& value) {
	Write((byte*)this + 1808, value);
}
// Member Getter and Setter of SelectedGamepadControlType
// Declaration: TEnumAsByte<E_GamepadControlType> SelectedGamepadControlType
TEnumAsByte<E_GamepadControlType> UGI_MedievalDynasty_C::M_GetSelectedGamepadControlType() const {
	return Read<TEnumAsByte<E_GamepadControlType>>((byte*)this + 1809);
}
TEnumAsByte<E_GamepadControlType>* UGI_MedievalDynasty_C::M_PtrGetSelectedGamepadControlType() {
	return reinterpret_cast<TEnumAsByte<E_GamepadControlType>*>((byte*)this + 1809);
}
void UGI_MedievalDynasty_C::M_SetSelectedGamepadControlType(const TEnumAsByte<E_GamepadControlType>& value) {
	Write((byte*)this + 1809, value);
}
// Member Getter and Setter of GamepadControlType
// Declaration: TMap<TEnumAsByte<E_GamepadControlType>, struct FText> GamepadControlType
TMap<TEnumAsByte<E_GamepadControlType>, struct FText> UGI_MedievalDynasty_C::M_GetGamepadControlType() const {
	return Read<TMap<TEnumAsByte<E_GamepadControlType>, struct FText>>((byte*)this + 1816);
}
TMap<TEnumAsByte<E_GamepadControlType>, struct FText>* UGI_MedievalDynasty_C::M_PtrGetGamepadControlType() {
	return reinterpret_cast<TMap<TEnumAsByte<E_GamepadControlType>, struct FText>*>((byte*)this + 1816);
}
void UGI_MedievalDynasty_C::M_SetGamepadControlType(const TMap<TEnumAsByte<E_GamepadControlType>, struct FText>& value) {
	Write((byte*)this + 1816, value);
}
// Member Getter and Setter of TasksArray
// Declaration: TArray<class UMultiTaskBase*> TasksArray
TArray<class UMultiTaskBase*> UGI_MedievalDynasty_C::M_GetTasksArray() const {
	return Read<TArray<class UMultiTaskBase*>>((byte*)this + 1896);
}
TArray<class UMultiTaskBase*>* UGI_MedievalDynasty_C::M_PtrGetTasksArray() {
	return reinterpret_cast<TArray<class UMultiTaskBase*>*>((byte*)this + 1896);
}
void UGI_MedievalDynasty_C::M_SetTasksArray(const TArray<class UMultiTaskBase*>& value) {
	Write((byte*)this + 1896, value);
}
// Member Getter and Setter of LaunchMultiplayer
// Declaration: bool LaunchMultiplayer
bool UGI_MedievalDynasty_C::M_GetLaunchMultiplayer() const {
	return Read<bool>((byte*)this + 1912);
}
bool* UGI_MedievalDynasty_C::M_PtrGetLaunchMultiplayer() {
	return reinterpret_cast<bool*>((byte*)this + 1912);
}
void UGI_MedievalDynasty_C::M_SetLaunchMultiplayer(const bool& value) {
	Write((byte*)this + 1912, value);
}
// Member Getter and Setter of ReturningFromDisconnect
// Declaration: bool ReturningFromDisconnect
bool UGI_MedievalDynasty_C::M_GetReturningFromDisconnect() const {
	return Read<bool>((byte*)this + 1913);
}
bool* UGI_MedievalDynasty_C::M_PtrGetReturningFromDisconnect() {
	return reinterpret_cast<bool*>((byte*)this + 1913);
}
void UGI_MedievalDynasty_C::M_SetReturningFromDisconnect(const bool& value) {
	Write((byte*)this + 1913, value);
}
// Member Getter and Setter of LoggedOutDuringLoading
// Declaration: bool LoggedOutDuringLoading
bool UGI_MedievalDynasty_C::M_GetLoggedOutDuringLoading() const {
	return Read<bool>((byte*)this + 1914);
}
bool* UGI_MedievalDynasty_C::M_PtrGetLoggedOutDuringLoading() {
	return reinterpret_cast<bool*>((byte*)this + 1914);
}
void UGI_MedievalDynasty_C::M_SetLoggedOutDuringLoading(const bool& value) {
	Write((byte*)this + 1914, value);
}
// Member Getter and Setter of ConsoleFramerateMode
// Declaration: int32_t ConsoleFramerateMode
int32_t UGI_MedievalDynasty_C::M_GetConsoleFramerateMode() const {
	return Read<int32_t>((byte*)this + 1916);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetConsoleFramerateMode() {
	return reinterpret_cast<int32_t*>((byte*)this + 1916);
}
void UGI_MedievalDynasty_C::M_SetConsoleFramerateMode(const int32_t& value) {
	Write((byte*)this + 1916, value);
}
// Member Getter and Setter of ConsoleFramerateModels
// Declaration: TArray<int32_t> ConsoleFramerateModels
TArray<int32_t> UGI_MedievalDynasty_C::M_GetConsoleFramerateModels() const {
	return Read<TArray<int32_t>>((byte*)this + 1920);
}
TArray<int32_t>* UGI_MedievalDynasty_C::M_PtrGetConsoleFramerateModels() {
	return reinterpret_cast<TArray<int32_t>*>((byte*)this + 1920);
}
void UGI_MedievalDynasty_C::M_SetConsoleFramerateModels(const TArray<int32_t>& value) {
	Write((byte*)this + 1920, value);
}
// Member Getter and Setter of DefaultConsoleFramerateModeID
// Declaration: int32_t DefaultConsoleFramerateModeID
int32_t UGI_MedievalDynasty_C::M_GetDefaultConsoleFramerateModeID() const {
	return Read<int32_t>((byte*)this + 1936);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultConsoleFramerateModeID() {
	return reinterpret_cast<int32_t*>((byte*)this + 1936);
}
void UGI_MedievalDynasty_C::M_SetDefaultConsoleFramerateModeID(const int32_t& value) {
	Write((byte*)this + 1936, value);
}
// Member Getter and Setter of ConsoleFramerateModeID
// Declaration: int32_t ConsoleFramerateModeID
int32_t UGI_MedievalDynasty_C::M_GetConsoleFramerateModeID() const {
	return Read<int32_t>((byte*)this + 1940);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetConsoleFramerateModeID() {
	return reinterpret_cast<int32_t*>((byte*)this + 1940);
}
void UGI_MedievalDynasty_C::M_SetConsoleFramerateModeID(const int32_t& value) {
	Write((byte*)this + 1940, value);
}
// Member Getter and Setter of DefaultPlayInBackground
// Declaration: bool DefaultPlayInBackground
bool UGI_MedievalDynasty_C::M_GetDefaultPlayInBackground() const {
	return Read<bool>((byte*)this + 1944);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultPlayInBackground() {
	return reinterpret_cast<bool*>((byte*)this + 1944);
}
void UGI_MedievalDynasty_C::M_SetDefaultPlayInBackground(const bool& value) {
	Write((byte*)this + 1944, value);
}
// Member Getter and Setter of PlayInBackground
// Declaration: bool PlayInBackground
bool UGI_MedievalDynasty_C::M_GetPlayInBackground() const {
	return Read<bool>((byte*)this + 1945);
}
bool* UGI_MedievalDynasty_C::M_PtrGetPlayInBackground() {
	return reinterpret_cast<bool*>((byte*)this + 1945);
}
void UGI_MedievalDynasty_C::M_SetPlayInBackground(const bool& value) {
	Write((byte*)this + 1945, value);
}
// Member Getter and Setter of Platform
// Declaration: EMD_SpecificPlatform Platform
EMD_SpecificPlatform UGI_MedievalDynasty_C::M_GetPlatform() const {
	return Read<EMD_SpecificPlatform>((byte*)this + 1946);
}
EMD_SpecificPlatform* UGI_MedievalDynasty_C::M_PtrGetPlatform() {
	return reinterpret_cast<EMD_SpecificPlatform*>((byte*)this + 1946);
}
void UGI_MedievalDynasty_C::M_SetPlatform(const EMD_SpecificPlatform& value) {
	Write((byte*)this + 1946, value);
}
// Member Getter and Setter of DefaultButtonResolutionID_SteamDeck
// Declaration: int32_t DefaultButtonResolutionID_SteamDeck
int32_t UGI_MedievalDynasty_C::M_GetDefaultButtonResolutionID_SteamDeck() const {
	return Read<int32_t>((byte*)this + 1948);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultButtonResolutionID_SteamDeck() {
	return reinterpret_cast<int32_t*>((byte*)this + 1948);
}
void UGI_MedievalDynasty_C::M_SetDefaultButtonResolutionID_SteamDeck(const int32_t& value) {
	Write((byte*)this + 1948, value);
}
// Member Getter and Setter of DefaultButtonAspectRatioID_SteamDeck
// Declaration: int32_t DefaultButtonAspectRatioID_SteamDeck
int32_t UGI_MedievalDynasty_C::M_GetDefaultButtonAspectRatioID_SteamDeck() const {
	return Read<int32_t>((byte*)this + 1952);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultButtonAspectRatioID_SteamDeck() {
	return reinterpret_cast<int32_t*>((byte*)this + 1952);
}
void UGI_MedievalDynasty_C::M_SetDefaultButtonAspectRatioID_SteamDeck(const int32_t& value) {
	Write((byte*)this + 1952, value);
}
// Member Getter and Setter of OnCreateSessionSuccess
// Declaration: TAssetPtr<class FOnCreateSessionSuccess__DelegateSignature> OnCreateSessionSuccess
TAssetPtr<class FOnCreateSessionSuccess__DelegateSignature> UGI_MedievalDynasty_C::M_GetOnCreateSessionSuccess() const {
	return Read<TAssetPtr<class FOnCreateSessionSuccess__DelegateSignature>>((byte*)this + 1960);
}
TAssetPtr<class FOnCreateSessionSuccess__DelegateSignature>* UGI_MedievalDynasty_C::M_PtrGetOnCreateSessionSuccess() {
	return reinterpret_cast<TAssetPtr<class FOnCreateSessionSuccess__DelegateSignature>*>((byte*)this + 1960);
}
void UGI_MedievalDynasty_C::M_SetOnCreateSessionSuccess(const TAssetPtr<class FOnCreateSessionSuccess__DelegateSignature>& value) {
	Write((byte*)this + 1960, value);
}
// Member Getter and Setter of OnCreateSessionFailed
// Declaration: TAssetPtr<class FOnCreateSessionFailed__DelegateSignature> OnCreateSessionFailed
TAssetPtr<class FOnCreateSessionFailed__DelegateSignature> UGI_MedievalDynasty_C::M_GetOnCreateSessionFailed() const {
	return Read<TAssetPtr<class FOnCreateSessionFailed__DelegateSignature>>((byte*)this + 1976);
}
TAssetPtr<class FOnCreateSessionFailed__DelegateSignature>* UGI_MedievalDynasty_C::M_PtrGetOnCreateSessionFailed() {
	return reinterpret_cast<TAssetPtr<class FOnCreateSessionFailed__DelegateSignature>*>((byte*)this + 1976);
}
void UGI_MedievalDynasty_C::M_SetOnCreateSessionFailed(const TAssetPtr<class FOnCreateSessionFailed__DelegateSignature>& value) {
	Write((byte*)this + 1976, value);
}
// Member Getter and Setter of OnJoinSessionSuccess
// Declaration: TAssetPtr<class FOnJoinSessionSuccess__DelegateSignature> OnJoinSessionSuccess
TAssetPtr<class FOnJoinSessionSuccess__DelegateSignature> UGI_MedievalDynasty_C::M_GetOnJoinSessionSuccess() const {
	return Read<TAssetPtr<class FOnJoinSessionSuccess__DelegateSignature>>((byte*)this + 1992);
}
TAssetPtr<class FOnJoinSessionSuccess__DelegateSignature>* UGI_MedievalDynasty_C::M_PtrGetOnJoinSessionSuccess() {
	return reinterpret_cast<TAssetPtr<class FOnJoinSessionSuccess__DelegateSignature>*>((byte*)this + 1992);
}
void UGI_MedievalDynasty_C::M_SetOnJoinSessionSuccess(const TAssetPtr<class FOnJoinSessionSuccess__DelegateSignature>& value) {
	Write((byte*)this + 1992, value);
}
// Member Getter and Setter of OnJoinSessionFailed
// Declaration: TAssetPtr<class FOnJoinSessionFailed__DelegateSignature> OnJoinSessionFailed
TAssetPtr<class FOnJoinSessionFailed__DelegateSignature> UGI_MedievalDynasty_C::M_GetOnJoinSessionFailed() const {
	return Read<TAssetPtr<class FOnJoinSessionFailed__DelegateSignature>>((byte*)this + 2008);
}
TAssetPtr<class FOnJoinSessionFailed__DelegateSignature>* UGI_MedievalDynasty_C::M_PtrGetOnJoinSessionFailed() {
	return reinterpret_cast<TAssetPtr<class FOnJoinSessionFailed__DelegateSignature>*>((byte*)this + 2008);
}
void UGI_MedievalDynasty_C::M_SetOnJoinSessionFailed(const TAssetPtr<class FOnJoinSessionFailed__DelegateSignature>& value) {
	Write((byte*)this + 2008, value);
}
// Member Getter and Setter of OnDestroySessionSuccess
// Declaration: TAssetPtr<class FOnDestroySessionSuccess__DelegateSignature> OnDestroySessionSuccess
TAssetPtr<class FOnDestroySessionSuccess__DelegateSignature> UGI_MedievalDynasty_C::M_GetOnDestroySessionSuccess() const {
	return Read<TAssetPtr<class FOnDestroySessionSuccess__DelegateSignature>>((byte*)this + 2024);
}
TAssetPtr<class FOnDestroySessionSuccess__DelegateSignature>* UGI_MedievalDynasty_C::M_PtrGetOnDestroySessionSuccess() {
	return reinterpret_cast<TAssetPtr<class FOnDestroySessionSuccess__DelegateSignature>*>((byte*)this + 2024);
}
void UGI_MedievalDynasty_C::M_SetOnDestroySessionSuccess(const TAssetPtr<class FOnDestroySessionSuccess__DelegateSignature>& value) {
	Write((byte*)this + 2024, value);
}
// Member Getter and Setter of OnDestroySessionFailed
// Declaration: TAssetPtr<class FOnDestroySessionFailed__DelegateSignature> OnDestroySessionFailed
TAssetPtr<class FOnDestroySessionFailed__DelegateSignature> UGI_MedievalDynasty_C::M_GetOnDestroySessionFailed() const {
	return Read<TAssetPtr<class FOnDestroySessionFailed__DelegateSignature>>((byte*)this + 2040);
}
TAssetPtr<class FOnDestroySessionFailed__DelegateSignature>* UGI_MedievalDynasty_C::M_PtrGetOnDestroySessionFailed() {
	return reinterpret_cast<TAssetPtr<class FOnDestroySessionFailed__DelegateSignature>*>((byte*)this + 2040);
}
void UGI_MedievalDynasty_C::M_SetOnDestroySessionFailed(const TAssetPtr<class FOnDestroySessionFailed__DelegateSignature>& value) {
	Write((byte*)this + 2040, value);
}
// Member Getter and Setter of OnFindSessionsSuccess
// Declaration: TAssetPtr<class FOnFindSessionsSuccess__DelegateSignature> OnFindSessionsSuccess
TAssetPtr<class FOnFindSessionsSuccess__DelegateSignature> UGI_MedievalDynasty_C::M_GetOnFindSessionsSuccess() const {
	return Read<TAssetPtr<class FOnFindSessionsSuccess__DelegateSignature>>((byte*)this + 2056);
}
TAssetPtr<class FOnFindSessionsSuccess__DelegateSignature>* UGI_MedievalDynasty_C::M_PtrGetOnFindSessionsSuccess() {
	return reinterpret_cast<TAssetPtr<class FOnFindSessionsSuccess__DelegateSignature>*>((byte*)this + 2056);
}
void UGI_MedievalDynasty_C::M_SetOnFindSessionsSuccess(const TAssetPtr<class FOnFindSessionsSuccess__DelegateSignature>& value) {
	Write((byte*)this + 2056, value);
}
// Member Getter and Setter of OnFindSessionsFailed
// Declaration: TAssetPtr<class FOnFindSessionsFailed__DelegateSignature> OnFindSessionsFailed
TAssetPtr<class FOnFindSessionsFailed__DelegateSignature> UGI_MedievalDynasty_C::M_GetOnFindSessionsFailed() const {
	return Read<TAssetPtr<class FOnFindSessionsFailed__DelegateSignature>>((byte*)this + 2072);
}
TAssetPtr<class FOnFindSessionsFailed__DelegateSignature>* UGI_MedievalDynasty_C::M_PtrGetOnFindSessionsFailed() {
	return reinterpret_cast<TAssetPtr<class FOnFindSessionsFailed__DelegateSignature>*>((byte*)this + 2072);
}
void UGI_MedievalDynasty_C::M_SetOnFindSessionsFailed(const TAssetPtr<class FOnFindSessionsFailed__DelegateSignature>& value) {
	Write((byte*)this + 2072, value);
}
// Member Getter and Setter of OnTasksEnded
// Declaration: TAssetPtr<class FOnTasksEnded__DelegateSignature> OnTasksEnded
TAssetPtr<class FOnTasksEnded__DelegateSignature> UGI_MedievalDynasty_C::M_GetOnTasksEnded() const {
	return Read<TAssetPtr<class FOnTasksEnded__DelegateSignature>>((byte*)this + 2088);
}
TAssetPtr<class FOnTasksEnded__DelegateSignature>* UGI_MedievalDynasty_C::M_PtrGetOnTasksEnded() {
	return reinterpret_cast<TAssetPtr<class FOnTasksEnded__DelegateSignature>*>((byte*)this + 2088);
}
void UGI_MedievalDynasty_C::M_SetOnTasksEnded(const TAssetPtr<class FOnTasksEnded__DelegateSignature>& value) {
	Write((byte*)this + 2088, value);
}
// Member Getter and Setter of ShowCharacterCreatorOnMultiStart
// Declaration: bool ShowCharacterCreatorOnMultiStart
bool UGI_MedievalDynasty_C::M_GetShowCharacterCreatorOnMultiStart() const {
	return Read<bool>((byte*)this + 2104);
}
bool* UGI_MedievalDynasty_C::M_PtrGetShowCharacterCreatorOnMultiStart() {
	return reinterpret_cast<bool*>((byte*)this + 2104);
}
void UGI_MedievalDynasty_C::M_SetShowCharacterCreatorOnMultiStart(const bool& value) {
	Write((byte*)this + 2104, value);
}
// Member Getter and Setter of NotificationLength
// Declaration: int32_t NotificationLength
int32_t UGI_MedievalDynasty_C::M_GetNotificationLength() const {
	return Read<int32_t>((byte*)this + 2108);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetNotificationLength() {
	return reinterpret_cast<int32_t*>((byte*)this + 2108);
}
void UGI_MedievalDynasty_C::M_SetNotificationLength(const int32_t& value) {
	Write((byte*)this + 2108, value);
}
// Member Getter and Setter of NotificationSounds
// Declaration: bool NotificationSounds
bool UGI_MedievalDynasty_C::M_GetNotificationSounds() const {
	return Read<bool>((byte*)this + 2112);
}
bool* UGI_MedievalDynasty_C::M_PtrGetNotificationSounds() {
	return reinterpret_cast<bool*>((byte*)this + 2112);
}
void UGI_MedievalDynasty_C::M_SetNotificationSounds(const bool& value) {
	Write((byte*)this + 2112, value);
}
// Member Getter and Setter of CompassVisibility
// Declaration: bool CompassVisibility
bool UGI_MedievalDynasty_C::M_GetCompassVisibility() const {
	return Read<bool>((byte*)this + 2113);
}
bool* UGI_MedievalDynasty_C::M_PtrGetCompassVisibility() {
	return reinterpret_cast<bool*>((byte*)this + 2113);
}
void UGI_MedievalDynasty_C::M_SetCompassVisibility(const bool& value) {
	Write((byte*)this + 2113, value);
}
// Member Getter and Setter of TutorialsVisibility
// Declaration: bool TutorialsVisibility
bool UGI_MedievalDynasty_C::M_GetTutorialsVisibility() const {
	return Read<bool>((byte*)this + 2114);
}
bool* UGI_MedievalDynasty_C::M_PtrGetTutorialsVisibility() {
	return reinterpret_cast<bool*>((byte*)this + 2114);
}
void UGI_MedievalDynasty_C::M_SetTutorialsVisibility(const bool& value) {
	Write((byte*)this + 2114, value);
}
// Member Getter and Setter of QuestTrackerVisibility
// Declaration: bool QuestTrackerVisibility
bool UGI_MedievalDynasty_C::M_GetQuestTrackerVisibility() const {
	return Read<bool>((byte*)this + 2115);
}
bool* UGI_MedievalDynasty_C::M_PtrGetQuestTrackerVisibility() {
	return reinterpret_cast<bool*>((byte*)this + 2115);
}
void UGI_MedievalDynasty_C::M_SetQuestTrackerVisibility(const bool& value) {
	Write((byte*)this + 2115, value);
}
// Member Getter and Setter of CrosshairVisibility
// Declaration: bool CrosshairVisibility
bool UGI_MedievalDynasty_C::M_GetCrosshairVisibility() const {
	return Read<bool>((byte*)this + 2116);
}
bool* UGI_MedievalDynasty_C::M_PtrGetCrosshairVisibility() {
	return reinterpret_cast<bool*>((byte*)this + 2116);
}
void UGI_MedievalDynasty_C::M_SetCrosshairVisibility(const bool& value) {
	Write((byte*)this + 2116, value);
}
// Member Getter and Setter of TimestampsInChat
// Declaration: bool TimestampsInChat
bool UGI_MedievalDynasty_C::M_GetTimestampsInChat() const {
	return Read<bool>((byte*)this + 2117);
}
bool* UGI_MedievalDynasty_C::M_PtrGetTimestampsInChat() {
	return reinterpret_cast<bool*>((byte*)this + 2117);
}
void UGI_MedievalDynasty_C::M_SetTimestampsInChat(const bool& value) {
	Write((byte*)this + 2117, value);
}
// Member Getter and Setter of BanditsHealthBarVisibility
// Declaration: bool BanditsHealthBarVisibility
bool UGI_MedievalDynasty_C::M_GetBanditsHealthBarVisibility() const {
	return Read<bool>((byte*)this + 2118);
}
bool* UGI_MedievalDynasty_C::M_PtrGetBanditsHealthBarVisibility() {
	return reinterpret_cast<bool*>((byte*)this + 2118);
}
void UGI_MedievalDynasty_C::M_SetBanditsHealthBarVisibility(const bool& value) {
	Write((byte*)this + 2118, value);
}
// Member Getter and Setter of AnimalHealthBarVisibility
// Declaration: bool AnimalHealthBarVisibility
bool UGI_MedievalDynasty_C::M_GetAnimalHealthBarVisibility() const {
	return Read<bool>((byte*)this + 2119);
}
bool* UGI_MedievalDynasty_C::M_PtrGetAnimalHealthBarVisibility() {
	return reinterpret_cast<bool*>((byte*)this + 2119);
}
void UGI_MedievalDynasty_C::M_SetAnimalHealthBarVisibility(const bool& value) {
	Write((byte*)this + 2119, value);
}
// Member Getter and Setter of PlayersHealthBarVisibility
// Declaration: bool PlayersHealthBarVisibility
bool UGI_MedievalDynasty_C::M_GetPlayersHealthBarVisibility() const {
	return Read<bool>((byte*)this + 2120);
}
bool* UGI_MedievalDynasty_C::M_PtrGetPlayersHealthBarVisibility() {
	return reinterpret_cast<bool*>((byte*)this + 2120);
}
void UGI_MedievalDynasty_C::M_SetPlayersHealthBarVisibility(const bool& value) {
	Write((byte*)this + 2120, value);
}
// Member Getter and Setter of VillageStatusVisibility
// Declaration: bool VillageStatusVisibility
bool UGI_MedievalDynasty_C::M_GetVillageStatusVisibility() const {
	return Read<bool>((byte*)this + 2121);
}
bool* UGI_MedievalDynasty_C::M_PtrGetVillageStatusVisibility() {
	return reinterpret_cast<bool*>((byte*)this + 2121);
}
void UGI_MedievalDynasty_C::M_SetVillageStatusVisibility(const bool& value) {
	Write((byte*)this + 2121, value);
}
// Member Getter and Setter of DefaultNotificationLength
// Declaration: int32_t DefaultNotificationLength
int32_t UGI_MedievalDynasty_C::M_GetDefaultNotificationLength() const {
	return Read<int32_t>((byte*)this + 2124);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDefaultNotificationLength() {
	return reinterpret_cast<int32_t*>((byte*)this + 2124);
}
void UGI_MedievalDynasty_C::M_SetDefaultNotificationLength(const int32_t& value) {
	Write((byte*)this + 2124, value);
}
// Member Getter and Setter of DefaultNotificationSounds
// Declaration: bool DefaultNotificationSounds
bool UGI_MedievalDynasty_C::M_GetDefaultNotificationSounds() const {
	return Read<bool>((byte*)this + 2128);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultNotificationSounds() {
	return reinterpret_cast<bool*>((byte*)this + 2128);
}
void UGI_MedievalDynasty_C::M_SetDefaultNotificationSounds(const bool& value) {
	Write((byte*)this + 2128, value);
}
// Member Getter and Setter of DefaultCornerTutorialsVisibility
// Declaration: bool DefaultCornerTutorialsVisibility
bool UGI_MedievalDynasty_C::M_GetDefaultCornerTutorialsVisibility() const {
	return Read<bool>((byte*)this + 2129);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultCornerTutorialsVisibility() {
	return reinterpret_cast<bool*>((byte*)this + 2129);
}
void UGI_MedievalDynasty_C::M_SetDefaultCornerTutorialsVisibility(const bool& value) {
	Write((byte*)this + 2129, value);
}
// Member Getter and Setter of DefaultCompassVisibility
// Declaration: bool DefaultCompassVisibility
bool UGI_MedievalDynasty_C::M_GetDefaultCompassVisibility() const {
	return Read<bool>((byte*)this + 2130);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultCompassVisibility() {
	return reinterpret_cast<bool*>((byte*)this + 2130);
}
void UGI_MedievalDynasty_C::M_SetDefaultCompassVisibility(const bool& value) {
	Write((byte*)this + 2130, value);
}
// Member Getter and Setter of DefaultQuestTrackerVisibility
// Declaration: bool DefaultQuestTrackerVisibility
bool UGI_MedievalDynasty_C::M_GetDefaultQuestTrackerVisibility() const {
	return Read<bool>((byte*)this + 2131);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultQuestTrackerVisibility() {
	return reinterpret_cast<bool*>((byte*)this + 2131);
}
void UGI_MedievalDynasty_C::M_SetDefaultQuestTrackerVisibility(const bool& value) {
	Write((byte*)this + 2131, value);
}
// Member Getter and Setter of DefaultCrosshairVisibility
// Declaration: bool DefaultCrosshairVisibility
bool UGI_MedievalDynasty_C::M_GetDefaultCrosshairVisibility() const {
	return Read<bool>((byte*)this + 2132);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultCrosshairVisibility() {
	return reinterpret_cast<bool*>((byte*)this + 2132);
}
void UGI_MedievalDynasty_C::M_SetDefaultCrosshairVisibility(const bool& value) {
	Write((byte*)this + 2132, value);
}
// Member Getter and Setter of DefaultTimestampsInChat
// Declaration: bool DefaultTimestampsInChat
bool UGI_MedievalDynasty_C::M_GetDefaultTimestampsInChat() const {
	return Read<bool>((byte*)this + 2133);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultTimestampsInChat() {
	return reinterpret_cast<bool*>((byte*)this + 2133);
}
void UGI_MedievalDynasty_C::M_SetDefaultTimestampsInChat(const bool& value) {
	Write((byte*)this + 2133, value);
}
// Member Getter and Setter of DefaultVillageStatusVisibility
// Declaration: bool DefaultVillageStatusVisibility
bool UGI_MedievalDynasty_C::M_GetDefaultVillageStatusVisibility() const {
	return Read<bool>((byte*)this + 2134);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultVillageStatusVisibility() {
	return reinterpret_cast<bool*>((byte*)this + 2134);
}
void UGI_MedievalDynasty_C::M_SetDefaultVillageStatusVisibility(const bool& value) {
	Write((byte*)this + 2134, value);
}
// Member Getter and Setter of HeldItemInputVisibility
// Declaration: bool HeldItemInputVisibility
bool UGI_MedievalDynasty_C::M_GetHeldItemInputVisibility() const {
	return Read<bool>((byte*)this + 2135);
}
bool* UGI_MedievalDynasty_C::M_PtrGetHeldItemInputVisibility() {
	return reinterpret_cast<bool*>((byte*)this + 2135);
}
void UGI_MedievalDynasty_C::M_SetHeldItemInputVisibility(const bool& value) {
	Write((byte*)this + 2135, value);
}
// Member Getter and Setter of HeldItemInformationVisibility
// Declaration: bool HeldItemInformationVisibility
bool UGI_MedievalDynasty_C::M_GetHeldItemInformationVisibility() const {
	return Read<bool>((byte*)this + 2136);
}
bool* UGI_MedievalDynasty_C::M_PtrGetHeldItemInformationVisibility() {
	return reinterpret_cast<bool*>((byte*)this + 2136);
}
void UGI_MedievalDynasty_C::M_SetHeldItemInformationVisibility(const bool& value) {
	Write((byte*)this + 2136, value);
}
// Member Getter and Setter of DefaultHeldItemInputVisibility
// Declaration: bool DefaultHeldItemInputVisibility
bool UGI_MedievalDynasty_C::M_GetDefaultHeldItemInputVisibility() const {
	return Read<bool>((byte*)this + 2137);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultHeldItemInputVisibility() {
	return reinterpret_cast<bool*>((byte*)this + 2137);
}
void UGI_MedievalDynasty_C::M_SetDefaultHeldItemInputVisibility(const bool& value) {
	Write((byte*)this + 2137, value);
}
// Member Getter and Setter of DefaultHeldItemInformationVisibility
// Declaration: bool DefaultHeldItemInformationVisibility
bool UGI_MedievalDynasty_C::M_GetDefaultHeldItemInformationVisibility() const {
	return Read<bool>((byte*)this + 2138);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultHeldItemInformationVisibility() {
	return reinterpret_cast<bool*>((byte*)this + 2138);
}
void UGI_MedievalDynasty_C::M_SetDefaultHeldItemInformationVisibility(const bool& value) {
	Write((byte*)this + 2138, value);
}
// Member Getter and Setter of OverrideCrossplay
// Declaration: bool OverrideCrossplay
bool UGI_MedievalDynasty_C::M_GetOverrideCrossplay() const {
	return Read<bool>((byte*)this + 2139);
}
bool* UGI_MedievalDynasty_C::M_PtrGetOverrideCrossplay() {
	return reinterpret_cast<bool*>((byte*)this + 2139);
}
void UGI_MedievalDynasty_C::M_SetOverrideCrossplay(const bool& value) {
	Write((byte*)this + 2139, value);
}
// Member Getter and Setter of SessionPassword
// Declaration: struct FName SessionPassword
struct FName UGI_MedievalDynasty_C::M_GetSessionPassword() const {
	return Read<struct FName>((byte*)this + 2140);
}
struct FName* UGI_MedievalDynasty_C::M_PtrGetSessionPassword() {
	return reinterpret_cast<struct FName*>((byte*)this + 2140);
}
void UGI_MedievalDynasty_C::M_SetSessionPassword(const struct FName& value) {
	Write((byte*)this + 2140, value);
}
// Member Getter and Setter of PlayerColors
// Declaration: TArray<struct FLinearColor> PlayerColors
TArray<struct FLinearColor> UGI_MedievalDynasty_C::M_GetPlayerColors() const {
	return Read<TArray<struct FLinearColor>>((byte*)this + 2152);
}
TArray<struct FLinearColor>* UGI_MedievalDynasty_C::M_PtrGetPlayerColors() {
	return reinterpret_cast<TArray<struct FLinearColor>*>((byte*)this + 2152);
}
void UGI_MedievalDynasty_C::M_SetPlayerColors(const TArray<struct FLinearColor>& value) {
	Write((byte*)this + 2152, value);
}
// Member Getter and Setter of BinkMediaPlayer
// Declaration: class UBinkMediaPlayer* BinkMediaPlayer
class UBinkMediaPlayer* UGI_MedievalDynasty_C::M_GetBinkMediaPlayer() const {
	return Read<class UBinkMediaPlayer*>((byte*)this + 2168);
}
class UBinkMediaPlayer** UGI_MedievalDynasty_C::M_PtrGetBinkMediaPlayer() {
	return reinterpret_cast<class UBinkMediaPlayer**>((byte*)this + 2168);
}
void UGI_MedievalDynasty_C::M_SetBinkMediaPlayer(const class UBinkMediaPlayer*& value) {
	Write((byte*)this + 2168, value);
}
// Member Getter and Setter of IsCutscenePlaying
// Declaration: bool IsCutscenePlaying
bool UGI_MedievalDynasty_C::M_GetIsCutscenePlaying() const {
	return Read<bool>((byte*)this + 2176);
}
bool* UGI_MedievalDynasty_C::M_PtrGetIsCutscenePlaying() {
	return reinterpret_cast<bool*>((byte*)this + 2176);
}
void UGI_MedievalDynasty_C::M_SetIsCutscenePlaying(const bool& value) {
	Write((byte*)this + 2176, value);
}
// Member Getter and Setter of LeaderboardStatsList
// Declaration: TArray<struct FName> LeaderboardStatsList
TArray<struct FName> UGI_MedievalDynasty_C::M_GetLeaderboardStatsList() const {
	return Read<TArray<struct FName>>((byte*)this + 2184);
}
TArray<struct FName>* UGI_MedievalDynasty_C::M_PtrGetLeaderboardStatsList() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 2184);
}
void UGI_MedievalDynasty_C::M_SetLeaderboardStatsList(const TArray<struct FName>& value) {
	Write((byte*)this + 2184, value);
}
// Member Getter and Setter of LeaderboardStatValues
// Declaration: TMap<struct FName, int32_t> LeaderboardStatValues
TMap<struct FName, int32_t> UGI_MedievalDynasty_C::M_GetLeaderboardStatValues() const {
	return Read<TMap<struct FName, int32_t>>((byte*)this + 2200);
}
TMap<struct FName, int32_t>* UGI_MedievalDynasty_C::M_PtrGetLeaderboardStatValues() {
	return reinterpret_cast<TMap<struct FName, int32_t>*>((byte*)this + 2200);
}
void UGI_MedievalDynasty_C::M_SetLeaderboardStatValues(const TMap<struct FName, int32_t>& value) {
	Write((byte*)this + 2200, value);
}
// Member Getter and Setter of AchievementBuffer
// Declaration: TArray<struct FName> AchievementBuffer
TArray<struct FName> UGI_MedievalDynasty_C::M_GetAchievementBuffer() const {
	return Read<TArray<struct FName>>((byte*)this + 2280);
}
TArray<struct FName>* UGI_MedievalDynasty_C::M_PtrGetAchievementBuffer() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 2280);
}
void UGI_MedievalDynasty_C::M_SetAchievementBuffer(const TArray<struct FName>& value) {
	Write((byte*)this + 2280, value);
}
// Member Getter and Setter of StatsCached
// Declaration: bool StatsCached
bool UGI_MedievalDynasty_C::M_GetStatsCached() const {
	return Read<bool>((byte*)this + 2296);
}
bool* UGI_MedievalDynasty_C::M_PtrGetStatsCached() {
	return reinterpret_cast<bool*>((byte*)this + 2296);
}
void UGI_MedievalDynasty_C::M_SetStatsCached(const bool& value) {
	Write((byte*)this + 2296, value);
}
// Member Getter and Setter of AchiStatTries
// Declaration: int32_t AchiStatTries
int32_t UGI_MedievalDynasty_C::M_GetAchiStatTries() const {
	return Read<int32_t>((byte*)this + 2300);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetAchiStatTries() {
	return reinterpret_cast<int32_t*>((byte*)this + 2300);
}
void UGI_MedievalDynasty_C::M_SetAchiStatTries(const int32_t& value) {
	Write((byte*)this + 2300, value);
}
// Member Getter and Setter of AchiStatTimer
// Declaration: struct FTimerHandle AchiStatTimer
struct FTimerHandle UGI_MedievalDynasty_C::M_GetAchiStatTimer() const {
	return Read<struct FTimerHandle>((byte*)this + 2304);
}
struct FTimerHandle* UGI_MedievalDynasty_C::M_PtrGetAchiStatTimer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 2304);
}
void UGI_MedievalDynasty_C::M_SetAchiStatTimer(const struct FTimerHandle& value) {
	Write((byte*)this + 2304, value);
}
// Member Getter and Setter of AchiTimer
// Declaration: struct FTimerHandle AchiTimer
struct FTimerHandle UGI_MedievalDynasty_C::M_GetAchiTimer() const {
	return Read<struct FTimerHandle>((byte*)this + 2312);
}
struct FTimerHandle* UGI_MedievalDynasty_C::M_PtrGetAchiTimer() {
	return reinterpret_cast<struct FTimerHandle*>((byte*)this + 2312);
}
void UGI_MedievalDynasty_C::M_SetAchiTimer(const struct FTimerHandle& value) {
	Write((byte*)this + 2312, value);
}
// Member Getter and Setter of FinishedGivingAchievement
// Declaration: bool FinishedGivingAchievement
bool UGI_MedievalDynasty_C::M_GetFinishedGivingAchievement() const {
	return Read<bool>((byte*)this + 2320);
}
bool* UGI_MedievalDynasty_C::M_PtrGetFinishedGivingAchievement() {
	return reinterpret_cast<bool*>((byte*)this + 2320);
}
void UGI_MedievalDynasty_C::M_SetFinishedGivingAchievement(const bool& value) {
	Write((byte*)this + 2320, value);
}
// Member Getter and Setter of AlreadyWrittenAchievements
// Declaration: TAssetPtr<class FNone_513> AlreadyWrittenAchievements
TAssetPtr<class FNone_513> UGI_MedievalDynasty_C::M_GetAlreadyWrittenAchievements() const {
	return Read<TAssetPtr<class FNone_513>>((byte*)this + 2328);
}
TAssetPtr<class FNone_513>* UGI_MedievalDynasty_C::M_PtrGetAlreadyWrittenAchievements() {
	return reinterpret_cast<TAssetPtr<class FNone_513>*>((byte*)this + 2328);
}
void UGI_MedievalDynasty_C::M_SetAlreadyWrittenAchievements(const TAssetPtr<class FNone_513>& value) {
	Write((byte*)this + 2328, value);
}
// Member Getter and Setter of OnLoginSuccessful
// Declaration: TAssetPtr<class FOnLoginSuccessful__DelegateSignature> OnLoginSuccessful
TAssetPtr<class FOnLoginSuccessful__DelegateSignature> UGI_MedievalDynasty_C::M_GetOnLoginSuccessful() const {
	return Read<TAssetPtr<class FOnLoginSuccessful__DelegateSignature>>((byte*)this + 2408);
}
TAssetPtr<class FOnLoginSuccessful__DelegateSignature>* UGI_MedievalDynasty_C::M_PtrGetOnLoginSuccessful() {
	return reinterpret_cast<TAssetPtr<class FOnLoginSuccessful__DelegateSignature>*>((byte*)this + 2408);
}
void UGI_MedievalDynasty_C::M_SetOnLoginSuccessful(const TAssetPtr<class FOnLoginSuccessful__DelegateSignature>& value) {
	Write((byte*)this + 2408, value);
}
// Member Getter and Setter of OnLoginFailed
// Declaration: TAssetPtr<class FOnLoginFailed__DelegateSignature> OnLoginFailed
TAssetPtr<class FOnLoginFailed__DelegateSignature> UGI_MedievalDynasty_C::M_GetOnLoginFailed() const {
	return Read<TAssetPtr<class FOnLoginFailed__DelegateSignature>>((byte*)this + 2424);
}
TAssetPtr<class FOnLoginFailed__DelegateSignature>* UGI_MedievalDynasty_C::M_PtrGetOnLoginFailed() {
	return reinterpret_cast<TAssetPtr<class FOnLoginFailed__DelegateSignature>*>((byte*)this + 2424);
}
void UGI_MedievalDynasty_C::M_SetOnLoginFailed(const TAssetPtr<class FOnLoginFailed__DelegateSignature>& value) {
	Write((byte*)this + 2424, value);
}
// Member Getter and Setter of NetworkingErrors
// Declaration: TArray<TEnumAsByte<E_NetworkingErrorsCodes>> NetworkingErrors
TArray<TEnumAsByte<E_NetworkingErrorsCodes>> UGI_MedievalDynasty_C::M_GetNetworkingErrors() const {
	return Read<TArray<TEnumAsByte<E_NetworkingErrorsCodes>>>((byte*)this + 2440);
}
TArray<TEnumAsByte<E_NetworkingErrorsCodes>>* UGI_MedievalDynasty_C::M_PtrGetNetworkingErrors() {
	return reinterpret_cast<TArray<TEnumAsByte<E_NetworkingErrorsCodes>>*>((byte*)this + 2440);
}
void UGI_MedievalDynasty_C::M_SetNetworkingErrors(const TArray<TEnumAsByte<E_NetworkingErrorsCodes>>& value) {
	Write((byte*)this + 2440, value);
}
// Member Getter and Setter of OnError
// Declaration: TAssetPtr<class FOnError__DelegateSignature> OnError
TAssetPtr<class FOnError__DelegateSignature> UGI_MedievalDynasty_C::M_GetOnError() const {
	return Read<TAssetPtr<class FOnError__DelegateSignature>>((byte*)this + 2456);
}
TAssetPtr<class FOnError__DelegateSignature>* UGI_MedievalDynasty_C::M_PtrGetOnError() {
	return reinterpret_cast<TAssetPtr<class FOnError__DelegateSignature>*>((byte*)this + 2456);
}
void UGI_MedievalDynasty_C::M_SetOnError(const TAssetPtr<class FOnError__DelegateSignature>& value) {
	Write((byte*)this + 2456, value);
}
// Member Getter and Setter of ShouldTakeValuesOnGameModeBegin
// Declaration: bool ShouldTakeValuesOnGameModeBegin
bool UGI_MedievalDynasty_C::M_GetShouldTakeValuesOnGameModeBegin() const {
	return Read<bool>((byte*)this + 2472);
}
bool* UGI_MedievalDynasty_C::M_PtrGetShouldTakeValuesOnGameModeBegin() {
	return reinterpret_cast<bool*>((byte*)this + 2472);
}
void UGI_MedievalDynasty_C::M_SetShouldTakeValuesOnGameModeBegin(const bool& value) {
	Write((byte*)this + 2472, value);
}
// Member Getter and Setter of DaysPerSeason
// Declaration: int32_t DaysPerSeason
int32_t UGI_MedievalDynasty_C::M_GetDaysPerSeason() const {
	return Read<int32_t>((byte*)this + 2476);
}
int32_t* UGI_MedievalDynasty_C::M_PtrGetDaysPerSeason() {
	return reinterpret_cast<int32_t*>((byte*)this + 2476);
}
void UGI_MedievalDynasty_C::M_SetDaysPerSeason(const int32_t& value) {
	Write((byte*)this + 2476, value);
}
// Member Getter and Setter of TaxMultiplier
// Declaration: float TaxMultiplier
float UGI_MedievalDynasty_C::M_GetTaxMultiplier() const {
	return Read<float>((byte*)this + 2480);
}
float* UGI_MedievalDynasty_C::M_PtrGetTaxMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 2480);
}
void UGI_MedievalDynasty_C::M_SetTaxMultiplier(const float& value) {
	Write((byte*)this + 2480, value);
}
// Member Getter and Setter of Events
// Declaration: bool Events
bool UGI_MedievalDynasty_C::M_GetEvents() const {
	return Read<bool>((byte*)this + 2484);
}
bool* UGI_MedievalDynasty_C::M_PtrGetEvents() {
	return reinterpret_cast<bool*>((byte*)this + 2484);
}
void UGI_MedievalDynasty_C::M_SetEvents(const bool& value) {
	Write((byte*)this + 2484, value);
}
// Member Getter and Setter of UnlimitedHP
// Declaration: bool UnlimitedHP
bool UGI_MedievalDynasty_C::M_GetUnlimitedHP() const {
	return Read<bool>((byte*)this + 2485);
}
bool* UGI_MedievalDynasty_C::M_PtrGetUnlimitedHP() {
	return reinterpret_cast<bool*>((byte*)this + 2485);
}
void UGI_MedievalDynasty_C::M_SetUnlimitedHP(const bool& value) {
	Write((byte*)this + 2485, value);
}
// Member Getter and Setter of UnlimitedStamina
// Declaration: bool UnlimitedStamina
bool UGI_MedievalDynasty_C::M_GetUnlimitedStamina() const {
	return Read<bool>((byte*)this + 2486);
}
bool* UGI_MedievalDynasty_C::M_PtrGetUnlimitedStamina() {
	return reinterpret_cast<bool*>((byte*)this + 2486);
}
void UGI_MedievalDynasty_C::M_SetUnlimitedStamina(const bool& value) {
	Write((byte*)this + 2486, value);
}
// Member Getter and Setter of UnlimitedFood
// Declaration: bool UnlimitedFood
bool UGI_MedievalDynasty_C::M_GetUnlimitedFood() const {
	return Read<bool>((byte*)this + 2487);
}
bool* UGI_MedievalDynasty_C::M_PtrGetUnlimitedFood() {
	return reinterpret_cast<bool*>((byte*)this + 2487);
}
void UGI_MedievalDynasty_C::M_SetUnlimitedFood(const bool& value) {
	Write((byte*)this + 2487, value);
}
// Member Getter and Setter of UnlimitedWater
// Declaration: bool UnlimitedWater
bool UGI_MedievalDynasty_C::M_GetUnlimitedWater() const {
	return Read<bool>((byte*)this + 2488);
}
bool* UGI_MedievalDynasty_C::M_PtrGetUnlimitedWater() {
	return reinterpret_cast<bool*>((byte*)this + 2488);
}
void UGI_MedievalDynasty_C::M_SetUnlimitedWater(const bool& value) {
	Write((byte*)this + 2488, value);
}
// Member Getter and Setter of NPCNeeds_FoodMultiplier
// Declaration: float NPCNeeds_FoodMultiplier
float UGI_MedievalDynasty_C::M_GetNPCNeeds_FoodMultiplier() const {
	return Read<float>((byte*)this + 2492);
}
float* UGI_MedievalDynasty_C::M_PtrGetNPCNeeds_FoodMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 2492);
}
void UGI_MedievalDynasty_C::M_SetNPCNeeds_FoodMultiplier(const float& value) {
	Write((byte*)this + 2492, value);
}
// Member Getter and Setter of NPCNeeds_WaterMultiplier
// Declaration: float NPCNeeds_WaterMultiplier
float UGI_MedievalDynasty_C::M_GetNPCNeeds_WaterMultiplier() const {
	return Read<float>((byte*)this + 2496);
}
float* UGI_MedievalDynasty_C::M_PtrGetNPCNeeds_WaterMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 2496);
}
void UGI_MedievalDynasty_C::M_SetNPCNeeds_WaterMultiplier(const float& value) {
	Write((byte*)this + 2496, value);
}
// Member Getter and Setter of NPCNeeds_WoodMultiplier
// Declaration: float NPCNeeds_WoodMultiplier
float UGI_MedievalDynasty_C::M_GetNPCNeeds_WoodMultiplier() const {
	return Read<float>((byte*)this + 2500);
}
float* UGI_MedievalDynasty_C::M_PtrGetNPCNeeds_WoodMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 2500);
}
void UGI_MedievalDynasty_C::M_SetNPCNeeds_WoodMultiplier(const float& value) {
	Write((byte*)this + 2500, value);
}
// Member Getter and Setter of BanditsHPMultiplier
// Declaration: float BanditsHPMultiplier
float UGI_MedievalDynasty_C::M_GetBanditsHPMultiplier() const {
	return Read<float>((byte*)this + 2504);
}
float* UGI_MedievalDynasty_C::M_PtrGetBanditsHPMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 2504);
}
void UGI_MedievalDynasty_C::M_SetBanditsHPMultiplier(const float& value) {
	Write((byte*)this + 2504, value);
}
// Member Getter and Setter of BanditsDamageMultiplier
// Declaration: float BanditsDamageMultiplier
float UGI_MedievalDynasty_C::M_GetBanditsDamageMultiplier() const {
	return Read<float>((byte*)this + 2508);
}
float* UGI_MedievalDynasty_C::M_PtrGetBanditsDamageMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 2508);
}
void UGI_MedievalDynasty_C::M_SetBanditsDamageMultiplier(const float& value) {
	Write((byte*)this + 2508, value);
}
// Member Getter and Setter of AnimalsHPMultiplier
// Declaration: float AnimalsHPMultiplier
float UGI_MedievalDynasty_C::M_GetAnimalsHPMultiplier() const {
	return Read<float>((byte*)this + 2512);
}
float* UGI_MedievalDynasty_C::M_PtrGetAnimalsHPMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 2512);
}
void UGI_MedievalDynasty_C::M_SetAnimalsHPMultiplier(const float& value) {
	Write((byte*)this + 2512, value);
}
// Member Getter and Setter of AnimalsDamageMultiplier
// Declaration: float AnimalsDamageMultiplier
float UGI_MedievalDynasty_C::M_GetAnimalsDamageMultiplier() const {
	return Read<float>((byte*)this + 2516);
}
float* UGI_MedievalDynasty_C::M_PtrGetAnimalsDamageMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 2516);
}
void UGI_MedievalDynasty_C::M_SetAnimalsDamageMultiplier(const float& value) {
	Write((byte*)this + 2516, value);
}
// Member Getter and Setter of UnlimitedWeight
// Declaration: bool UnlimitedWeight
bool UGI_MedievalDynasty_C::M_GetUnlimitedWeight() const {
	return Read<bool>((byte*)this + 2520);
}
bool* UGI_MedievalDynasty_C::M_PtrGetUnlimitedWeight() {
	return reinterpret_cast<bool*>((byte*)this + 2520);
}
void UGI_MedievalDynasty_C::M_SetUnlimitedWeight(const bool& value) {
	Write((byte*)this + 2520, value);
}
// Member Getter and Setter of Poisoning
// Declaration: bool Poisoning
bool UGI_MedievalDynasty_C::M_GetPoisoning() const {
	return Read<bool>((byte*)this + 2521);
}
bool* UGI_MedievalDynasty_C::M_PtrGetPoisoning() {
	return reinterpret_cast<bool*>((byte*)this + 2521);
}
void UGI_MedievalDynasty_C::M_SetPoisoning(const bool& value) {
	Write((byte*)this + 2521, value);
}
// Member Getter and Setter of Temperature
// Declaration: bool Temperature
bool UGI_MedievalDynasty_C::M_GetTemperature() const {
	return Read<bool>((byte*)this + 2522);
}
bool* UGI_MedievalDynasty_C::M_PtrGetTemperature() {
	return reinterpret_cast<bool*>((byte*)this + 2522);
}
void UGI_MedievalDynasty_C::M_SetTemperature(const bool& value) {
	Write((byte*)this + 2522, value);
}
// Member Getter and Setter of BuildingsLimitMultiplier
// Declaration: float BuildingsLimitMultiplier
float UGI_MedievalDynasty_C::M_GetBuildingsLimitMultiplier() const {
	return Read<float>((byte*)this + 2524);
}
float* UGI_MedievalDynasty_C::M_PtrGetBuildingsLimitMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 2524);
}
void UGI_MedievalDynasty_C::M_SetBuildingsLimitMultiplier(const float& value) {
	Write((byte*)this + 2524, value);
}
// Member Getter and Setter of FastCrafting
// Declaration: bool FastCrafting
bool UGI_MedievalDynasty_C::M_GetFastCrafting() const {
	return Read<bool>((byte*)this + 2528);
}
bool* UGI_MedievalDynasty_C::M_PtrGetFastCrafting() {
	return reinterpret_cast<bool*>((byte*)this + 2528);
}
void UGI_MedievalDynasty_C::M_SetFastCrafting(const bool& value) {
	Write((byte*)this + 2528, value);
}
// Member Getter and Setter of FastBuilding
// Declaration: bool FastBuilding
bool UGI_MedievalDynasty_C::M_GetFastBuilding() const {
	return Read<bool>((byte*)this + 2529);
}
bool* UGI_MedievalDynasty_C::M_PtrGetFastBuilding() {
	return reinterpret_cast<bool*>((byte*)this + 2529);
}
void UGI_MedievalDynasty_C::M_SetFastBuilding(const bool& value) {
	Write((byte*)this + 2529, value);
}
// Member Getter and Setter of FastStorage
// Declaration: bool FastStorage
bool UGI_MedievalDynasty_C::M_GetFastStorage() const {
	return Read<bool>((byte*)this + 2530);
}
bool* UGI_MedievalDynasty_C::M_PtrGetFastStorage() {
	return reinterpret_cast<bool*>((byte*)this + 2530);
}
void UGI_MedievalDynasty_C::M_SetFastStorage(const bool& value) {
	Write((byte*)this + 2530, value);
}
// Member Getter and Setter of XPGainMultiplier
// Declaration: float XPGainMultiplier
float UGI_MedievalDynasty_C::M_GetXPGainMultiplier() const {
	return Read<float>((byte*)this + 2532);
}
float* UGI_MedievalDynasty_C::M_PtrGetXPGainMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 2532);
}
void UGI_MedievalDynasty_C::M_SetXPGainMultiplier(const float& value) {
	Write((byte*)this + 2532, value);
}
// Member Getter and Setter of TechnologyGainMultiplier
// Declaration: float TechnologyGainMultiplier
float UGI_MedievalDynasty_C::M_GetTechnologyGainMultiplier() const {
	return Read<float>((byte*)this + 2536);
}
float* UGI_MedievalDynasty_C::M_PtrGetTechnologyGainMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 2536);
}
void UGI_MedievalDynasty_C::M_SetTechnologyGainMultiplier(const float& value) {
	Write((byte*)this + 2536, value);
}
// Member Getter and Setter of DynastyReputationGainMultiplier
// Declaration: float DynastyReputationGainMultiplier
float UGI_MedievalDynasty_C::M_GetDynastyReputationGainMultiplier() const {
	return Read<float>((byte*)this + 2540);
}
float* UGI_MedievalDynasty_C::M_PtrGetDynastyReputationGainMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 2540);
}
void UGI_MedievalDynasty_C::M_SetDynastyReputationGainMultiplier(const float& value) {
	Write((byte*)this + 2540, value);
}
// Member Getter and Setter of StopSpoilForDroppedItems
// Declaration: bool StopSpoilForDroppedItems
bool UGI_MedievalDynasty_C::M_GetStopSpoilForDroppedItems() const {
	return Read<bool>((byte*)this + 2544);
}
bool* UGI_MedievalDynasty_C::M_PtrGetStopSpoilForDroppedItems() {
	return reinterpret_cast<bool*>((byte*)this + 2544);
}
void UGI_MedievalDynasty_C::M_SetStopSpoilForDroppedItems(const bool& value) {
	Write((byte*)this + 2544, value);
}
// Member Getter and Setter of PointLightShadows
// Declaration: bool PointLightShadows
bool UGI_MedievalDynasty_C::M_GetPointLightShadows() const {
	return Read<bool>((byte*)this + 2545);
}
bool* UGI_MedievalDynasty_C::M_PtrGetPointLightShadows() {
	return reinterpret_cast<bool*>((byte*)this + 2545);
}
void UGI_MedievalDynasty_C::M_SetPointLightShadows(const bool& value) {
	Write((byte*)this + 2545, value);
}
// Member Getter and Setter of DefaultPointLightShadows
// Declaration: bool DefaultPointLightShadows
bool UGI_MedievalDynasty_C::M_GetDefaultPointLightShadows() const {
	return Read<bool>((byte*)this + 2546);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultPointLightShadows() {
	return reinterpret_cast<bool*>((byte*)this + 2546);
}
void UGI_MedievalDynasty_C::M_SetDefaultPointLightShadows(const bool& value) {
	Write((byte*)this + 2546, value);
}
// Member Getter and Setter of DynamicCharacterViewInInventory
// Declaration: bool DynamicCharacterViewInInventory
bool UGI_MedievalDynasty_C::M_GetDynamicCharacterViewInInventory() const {
	return Read<bool>((byte*)this + 2547);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDynamicCharacterViewInInventory() {
	return reinterpret_cast<bool*>((byte*)this + 2547);
}
void UGI_MedievalDynasty_C::M_SetDynamicCharacterViewInInventory(const bool& value) {
	Write((byte*)this + 2547, value);
}
// Member Getter and Setter of DefaultDynamicCharacterViewInInventory
// Declaration: bool DefaultDynamicCharacterViewInInventory
bool UGI_MedievalDynasty_C::M_GetDefaultDynamicCharacterViewInInventory() const {
	return Read<bool>((byte*)this + 2548);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultDynamicCharacterViewInInventory() {
	return reinterpret_cast<bool*>((byte*)this + 2548);
}
void UGI_MedievalDynasty_C::M_SetDefaultDynamicCharacterViewInInventory(const bool& value) {
	Write((byte*)this + 2548, value);
}
// Member Getter and Setter of Crossplay
// Declaration: bool Crossplay
bool UGI_MedievalDynasty_C::M_GetCrossplay() const {
	return Read<bool>((byte*)this + 2549);
}
bool* UGI_MedievalDynasty_C::M_PtrGetCrossplay() {
	return reinterpret_cast<bool*>((byte*)this + 2549);
}
void UGI_MedievalDynasty_C::M_SetCrossplay(const bool& value) {
	Write((byte*)this + 2549, value);
}
// Member Getter and Setter of DefaultCrossplay
// Declaration: bool DefaultCrossplay
bool UGI_MedievalDynasty_C::M_GetDefaultCrossplay() const {
	return Read<bool>((byte*)this + 2550);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultCrossplay() {
	return reinterpret_cast<bool*>((byte*)this + 2550);
}
void UGI_MedievalDynasty_C::M_SetDefaultCrossplay(const bool& value) {
	Write((byte*)this + 2550, value);
}
// Member Getter and Setter of ProfanityFilter
// Declaration: class UProfanityFilter* ProfanityFilter
class UProfanityFilter* UGI_MedievalDynasty_C::M_GetProfanityFilter() const {
	return Read<class UProfanityFilter*>((byte*)this + 2552);
}
class UProfanityFilter** UGI_MedievalDynasty_C::M_PtrGetProfanityFilter() {
	return reinterpret_cast<class UProfanityFilter**>((byte*)this + 2552);
}
void UGI_MedievalDynasty_C::M_SetProfanityFilter(const class UProfanityFilter*& value) {
	Write((byte*)this + 2552, value);
}
// Member Getter and Setter of EnableProfanityFilter
// Declaration: bool EnableProfanityFilter
bool UGI_MedievalDynasty_C::M_GetEnableProfanityFilter() const {
	return Read<bool>((byte*)this + 2560);
}
bool* UGI_MedievalDynasty_C::M_PtrGetEnableProfanityFilter() {
	return reinterpret_cast<bool*>((byte*)this + 2560);
}
void UGI_MedievalDynasty_C::M_SetEnableProfanityFilter(const bool& value) {
	Write((byte*)this + 2560, value);
}
// Member Getter and Setter of DefaultEnableProfanityFilter
// Declaration: bool DefaultEnableProfanityFilter
bool UGI_MedievalDynasty_C::M_GetDefaultEnableProfanityFilter() const {
	return Read<bool>((byte*)this + 2561);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultEnableProfanityFilter() {
	return reinterpret_cast<bool*>((byte*)this + 2561);
}
void UGI_MedievalDynasty_C::M_SetDefaultEnableProfanityFilter(const bool& value) {
	Write((byte*)this + 2561, value);
}
// Member Getter and Setter of SaveMutedPlayers
// Declaration: class USAVE_MutedPlayers_C* SaveMutedPlayers
class USAVE_MutedPlayers_C* UGI_MedievalDynasty_C::M_GetSaveMutedPlayers() const {
	return Read<class USAVE_MutedPlayers_C*>((byte*)this + 2568);
}
class USAVE_MutedPlayers_C** UGI_MedievalDynasty_C::M_PtrGetSaveMutedPlayers() {
	return reinterpret_cast<class USAVE_MutedPlayers_C**>((byte*)this + 2568);
}
void UGI_MedievalDynasty_C::M_SetSaveMutedPlayers(const class USAVE_MutedPlayers_C*& value) {
	Write((byte*)this + 2568, value);
}
// Member Getter and Setter of OnInviteReceived
// Declaration: TAssetPtr<class FOnInviteReceived__DelegateSignature> OnInviteReceived
TAssetPtr<class FOnInviteReceived__DelegateSignature> UGI_MedievalDynasty_C::M_GetOnInviteReceived() const {
	return Read<TAssetPtr<class FOnInviteReceived__DelegateSignature>>((byte*)this + 2576);
}
TAssetPtr<class FOnInviteReceived__DelegateSignature>* UGI_MedievalDynasty_C::M_PtrGetOnInviteReceived() {
	return reinterpret_cast<TAssetPtr<class FOnInviteReceived__DelegateSignature>*>((byte*)this + 2576);
}
void UGI_MedievalDynasty_C::M_SetOnInviteReceived(const TAssetPtr<class FOnInviteReceived__DelegateSignature>& value) {
	Write((byte*)this + 2576, value);
}
// Member Getter and Setter of InviteSessionHandler
// Declaration: struct FBlueprintSessionResultCustom InviteSessionHandler
struct FBlueprintSessionResultCustom UGI_MedievalDynasty_C::M_GetInviteSessionHandler() const {
	return Read<struct FBlueprintSessionResultCustom>((byte*)this + 2592);
}
struct FBlueprintSessionResultCustom* UGI_MedievalDynasty_C::M_PtrGetInviteSessionHandler() {
	return reinterpret_cast<struct FBlueprintSessionResultCustom*>((byte*)this + 2592);
}
void UGI_MedievalDynasty_C::M_SetInviteSessionHandler(const struct FBlueprintSessionResultCustom& value) {
	Write((byte*)this + 2592, value);
}
// Member Getter and Setter of InvitedUser
// Declaration: struct FString InvitedUser
struct FString UGI_MedievalDynasty_C::M_GetInvitedUser() const {
	return Read<struct FString>((byte*)this + 2856);
}
struct FString* UGI_MedievalDynasty_C::M_PtrGetInvitedUser() {
	return reinterpret_cast<struct FString*>((byte*)this + 2856);
}
void UGI_MedievalDynasty_C::M_SetInvitedUser(const struct FString& value) {
	Write((byte*)this + 2856, value);
}
// Member Getter and Setter of DefaultBanditsHealthBarVisibility
// Declaration: bool DefaultBanditsHealthBarVisibility
bool UGI_MedievalDynasty_C::M_GetDefaultBanditsHealthBarVisibility() const {
	return Read<bool>((byte*)this + 2872);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultBanditsHealthBarVisibility() {
	return reinterpret_cast<bool*>((byte*)this + 2872);
}
void UGI_MedievalDynasty_C::M_SetDefaultBanditsHealthBarVisibility(const bool& value) {
	Write((byte*)this + 2872, value);
}
// Member Getter and Setter of DefaultAnimalHealthBarVisibility
// Declaration: bool DefaultAnimalHealthBarVisibility
bool UGI_MedievalDynasty_C::M_GetDefaultAnimalHealthBarVisibility() const {
	return Read<bool>((byte*)this + 2873);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultAnimalHealthBarVisibility() {
	return reinterpret_cast<bool*>((byte*)this + 2873);
}
void UGI_MedievalDynasty_C::M_SetDefaultAnimalHealthBarVisibility(const bool& value) {
	Write((byte*)this + 2873, value);
}
// Member Getter and Setter of DefaultPlayersHealthBarVisibility
// Declaration: bool DefaultPlayersHealthBarVisibility
bool UGI_MedievalDynasty_C::M_GetDefaultPlayersHealthBarVisibility() const {
	return Read<bool>((byte*)this + 2874);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultPlayersHealthBarVisibility() {
	return reinterpret_cast<bool*>((byte*)this + 2874);
}
void UGI_MedievalDynasty_C::M_SetDefaultPlayersHealthBarVisibility(const bool& value) {
	Write((byte*)this + 2874, value);
}
// Member Getter and Setter of WeaponDurabilityMultiplier
// Declaration: float WeaponDurabilityMultiplier
float UGI_MedievalDynasty_C::M_GetWeaponDurabilityMultiplier() const {
	return Read<float>((byte*)this + 2876);
}
float* UGI_MedievalDynasty_C::M_PtrGetWeaponDurabilityMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 2876);
}
void UGI_MedievalDynasty_C::M_SetWeaponDurabilityMultiplier(const float& value) {
	Write((byte*)this + 2876, value);
}
// Member Getter and Setter of ArmorDurabilityMultiplier
// Declaration: float ArmorDurabilityMultiplier
float UGI_MedievalDynasty_C::M_GetArmorDurabilityMultiplier() const {
	return Read<float>((byte*)this + 2880);
}
float* UGI_MedievalDynasty_C::M_PtrGetArmorDurabilityMultiplier() {
	return reinterpret_cast<float*>((byte*)this + 2880);
}
void UGI_MedievalDynasty_C::M_SetArmorDurabilityMultiplier(const float& value) {
	Write((byte*)this + 2880, value);
}
// Member Getter and Setter of InspectorOnHold
// Declaration: bool InspectorOnHold
bool UGI_MedievalDynasty_C::M_GetInspectorOnHold() const {
	return Read<bool>((byte*)this + 2884);
}
bool* UGI_MedievalDynasty_C::M_PtrGetInspectorOnHold() {
	return reinterpret_cast<bool*>((byte*)this + 2884);
}
void UGI_MedievalDynasty_C::M_SetInspectorOnHold(const bool& value) {
	Write((byte*)this + 2884, value);
}
// Member Getter and Setter of DefaultInspectorOnHold
// Declaration: bool DefaultInspectorOnHold
bool UGI_MedievalDynasty_C::M_GetDefaultInspectorOnHold() const {
	return Read<bool>((byte*)this + 2885);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultInspectorOnHold() {
	return reinterpret_cast<bool*>((byte*)this + 2885);
}
void UGI_MedievalDynasty_C::M_SetDefaultInspectorOnHold(const bool& value) {
	Write((byte*)this + 2885, value);
}
// Member Getter and Setter of DefaultConsolsInspectorOnHold
// Declaration: bool DefaultConsolsInspectorOnHold
bool UGI_MedievalDynasty_C::M_GetDefaultConsolsInspectorOnHold() const {
	return Read<bool>((byte*)this + 2886);
}
bool* UGI_MedievalDynasty_C::M_PtrGetDefaultConsolsInspectorOnHold() {
	return reinterpret_cast<bool*>((byte*)this + 2886);
}
void UGI_MedievalDynasty_C::M_SetDefaultConsolsInspectorOnHold(const bool& value) {
	Write((byte*)this + 2886, value);
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
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnCreateSessionSuccess__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnCreateSessionSuccess__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnCreateSessionSuccess__DelegateSignature");

	struct UGI_MedievalDynasty_C_OnCreateSessionSuccess__DelegateSignature_Params {
	};
	UGI_MedievalDynasty_C_OnCreateSessionSuccess__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnCreateSessionFailed__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: FailureResult	Type: E_JoinFailureResult	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnCreateSessionFailed__DelegateSignature(E_JoinFailureResult FailureResult) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnCreateSessionFailed__DelegateSignature");

	struct UGI_MedievalDynasty_C_OnCreateSessionFailed__DelegateSignature_Params {
		E_JoinFailureResult FailureResult;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_OnCreateSessionFailed__DelegateSignature_Params params;
	params.FailureResult = FailureResult;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnJoinSessionSuccess__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnJoinSessionSuccess__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnJoinSessionSuccess__DelegateSignature");

	struct UGI_MedievalDynasty_C_OnJoinSessionSuccess__DelegateSignature_Params {
	};
	UGI_MedievalDynasty_C_OnJoinSessionSuccess__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnJoinSessionFailed__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: FailureResult	Type: E_JoinFailureResult	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnJoinSessionFailed__DelegateSignature(E_JoinFailureResult FailureResult) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnJoinSessionFailed__DelegateSignature");

	struct UGI_MedievalDynasty_C_OnJoinSessionFailed__DelegateSignature_Params {
		E_JoinFailureResult FailureResult;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_OnJoinSessionFailed__DelegateSignature_Params params;
	params.FailureResult = FailureResult;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnDestroySessionSuccess__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnDestroySessionSuccess__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnDestroySessionSuccess__DelegateSignature");

	struct UGI_MedievalDynasty_C_OnDestroySessionSuccess__DelegateSignature_Params {
	};
	UGI_MedievalDynasty_C_OnDestroySessionSuccess__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnDestroySessionFailed__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnDestroySessionFailed__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnDestroySessionFailed__DelegateSignature");

	struct UGI_MedievalDynasty_C_OnDestroySessionFailed__DelegateSignature_Params {
	};
	UGI_MedievalDynasty_C_OnDestroySessionFailed__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnTasksEnded__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnTasksEnded__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnTasksEnded__DelegateSignature");

	struct UGI_MedievalDynasty_C_OnTasksEnded__DelegateSignature_Params {
	};
	UGI_MedievalDynasty_C_OnTasksEnded__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFindSessionsSuccess__DelegateSignature
// Flags: Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Results	Type: TArray<struct FBlueprintSessionResultCustom>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnFindSessionsSuccess__DelegateSignature(TArray<struct FBlueprintSessionResultCustom>* Results) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFindSessionsSuccess__DelegateSignature");

	struct UGI_MedievalDynasty_C_OnFindSessionsSuccess__DelegateSignature_Params {
		TArray<struct FBlueprintSessionResultCustom> Results;			//Offset: 0 | ElementSize: 16
	};
	UGI_MedievalDynasty_C_OnFindSessionsSuccess__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Results != nullptr)
		*Results = params.Results;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFindSessionsFailed__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: FailureResult	Type: E_JoinFailureResult	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnFindSessionsFailed__DelegateSignature(E_JoinFailureResult FailureResult) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFindSessionsFailed__DelegateSignature");

	struct UGI_MedievalDynasty_C_OnFindSessionsFailed__DelegateSignature_Params {
		E_JoinFailureResult FailureResult;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_OnFindSessionsFailed__DelegateSignature_Params params;
	params.FailureResult = FailureResult;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnLoginSuccessful__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnLoginSuccessful__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnLoginSuccessful__DelegateSignature");

	struct UGI_MedievalDynasty_C_OnLoginSuccessful__DelegateSignature_Params {
	};
	UGI_MedievalDynasty_C_OnLoginSuccessful__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnLoginFailed__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnLoginFailed__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnLoginFailed__DelegateSignature");

	struct UGI_MedievalDynasty_C_OnLoginFailed__DelegateSignature_Params {
	};
	UGI_MedievalDynasty_C_OnLoginFailed__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnError__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnError__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnError__DelegateSignature");

	struct UGI_MedievalDynasty_C_OnError__DelegateSignature_Params {
	};
	UGI_MedievalDynasty_C_OnError__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnInviteReceived__DelegateSignature
// Flags: Public, Delegate, BlueprintCallable, BlueprintEvent
// Params:
// Name: InviteState	Type: TEnumAsByte<E_InviteState>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnInviteReceived__DelegateSignature(TEnumAsByte<E_InviteState> InviteState) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnInviteReceived__DelegateSignature");

	struct UGI_MedievalDynasty_C_OnInviteReceived__DelegateSignature_Params {
		TEnumAsByte<E_InviteState> InviteState;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_OnInviteReceived__DelegateSignature_Params params;
	params.InviteState = InviteState;

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
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.CallStopTutorialVideo
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::CallStopTutorialVideo() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.CallStopTutorialVideo");

	struct UGI_MedievalDynasty_C_CallStopTutorialVideo_Params {
	};
	UGI_MedievalDynasty_C_CallStopTutorialVideo_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.CheckSocialPermissions
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: ShowSystemMessageIfNeeded	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::CheckSocialPermissions(bool ShowSystemMessageIfNeeded) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.CheckSocialPermissions");

	struct UGI_MedievalDynasty_C_CheckSocialPermissions_Params {
		bool ShowSystemMessageIfNeeded;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_CheckSocialPermissions_Params params;
	params.ShowSystemMessageIfNeeded = ShowSystemMessageIfNeeded;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.ShowSocialFeaturesRestrictionUI_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::ShowSocialFeaturesRestrictionUI_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.ShowSocialFeaturesRestrictionUI_BPI");

	struct UGI_MedievalDynasty_C_ShowSocialFeaturesRestrictionUI_BPI_Params {
	};
	UGI_MedievalDynasty_C_ShowSocialFeaturesRestrictionUI_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnAppReactivatedCrossplayCheck
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnAppReactivatedCrossplayCheck() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnAppReactivatedCrossplayCheck");

	struct UGI_MedievalDynasty_C_OnAppReactivatedCrossplayCheck_Params {
	};
	UGI_MedievalDynasty_C_OnAppReactivatedCrossplayCheck_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.InitOnlineFeaturesOnGameStart_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::InitOnlineFeaturesOnGameStart_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.InitOnlineFeaturesOnGameStart_BPI");

	struct UGI_MedievalDynasty_C_InitOnlineFeaturesOnGameStart_BPI_Params {
	};
	UGI_MedievalDynasty_C_InitOnlineFeaturesOnGameStart_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.InitOnlineFeaturesOnGameStart
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::InitOnlineFeaturesOnGameStart() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.InitOnlineFeaturesOnGameStart");

	struct UGI_MedievalDynasty_C_InitOnlineFeaturesOnGameStart_Params {
	};
	UGI_MedievalDynasty_C_InitOnlineFeaturesOnGameStart_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnAppReactivatedOnCoop
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnAppReactivatedOnCoop() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnAppReactivatedOnCoop");

	struct UGI_MedievalDynasty_C_OnAppReactivatedOnCoop_Params {
	};
	UGI_MedievalDynasty_C_OnAppReactivatedOnCoop_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.CacheBlockList
// Flags: Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::CacheBlockList() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.CacheBlockList");

	struct UGI_MedievalDynasty_C_CacheBlockList_Params {
	};
	UGI_MedievalDynasty_C_CacheBlockList_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnConnectionChanged
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: hasConnection	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnConnectionChanged(bool hasConnection) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnConnectionChanged");

	struct UGI_MedievalDynasty_C_OnConnectionChanged_Params {
		bool hasConnection;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_OnConnectionChanged_Params params;
	params.hasConnection = hasConnection;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.HandleNetworkError
// Flags: Event, Public, BlueprintEvent
// Params:
// Name: FailureType	Type: TEnumAsByte<ENetworkFailure>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: bIsServer	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::HandleNetworkError(TEnumAsByte<ENetworkFailure> FailureType, bool bIsServer) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.HandleNetworkError");

	struct UGI_MedievalDynasty_C_HandleNetworkError_Params {
		TEnumAsByte<ENetworkFailure> FailureType;			//Offset: 0 | ElementSize: 1
		bool bIsServer;			//Offset: 1 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_HandleNetworkError_Params params;
	params.FailureType = FailureType;
	params.bIsServer = bIsServer;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetHUDSettings
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::SetHUDSettings() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetHUDSettings");

	struct UGI_MedievalDynasty_C_SetHUDSettings_Params {
	};
	UGI_MedievalDynasty_C_SetHUDSettings_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetHUDSettingsFromFile
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::GetHUDSettingsFromFile() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetHUDSettingsFromFile");

	struct UGI_MedievalDynasty_C_GetHUDSettingsFromFile_Params {
	};
	UGI_MedievalDynasty_C_GetHUDSettingsFromFile_Params params;

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
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.CreateCutscene_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Type	Type: TEnumAsByte<E_Cutscenes>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MediaFileURL	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::CreateCutscene_BPI(TEnumAsByte<E_Cutscenes> Type, struct FString MediaFileURL) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.CreateCutscene_BPI");

	struct UGI_MedievalDynasty_C_CreateCutscene_BPI_Params {
		TEnumAsByte<E_Cutscenes> Type;			//Offset: 0 | ElementSize: 1
		struct FString MediaFileURL;			//Offset: 8 | ElementSize: 16
	};
	UGI_MedievalDynasty_C_CreateCutscene_BPI_Params params;
	params.Type = Type;
	params.MediaFileURL = MediaFileURL;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.StartMultiAndLoadGame_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveSlotName	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::StartMultiAndLoadGame_BPI(struct FString SaveSlotName) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.StartMultiAndLoadGame_BPI");

	struct UGI_MedievalDynasty_C_StartMultiAndLoadGame_BPI_Params {
		struct FString SaveSlotName;			//Offset: 0 | ElementSize: 16
	};
	UGI_MedievalDynasty_C_StartMultiAndLoadGame_BPI_Params params;
	params.SaveSlotName = SaveSlotName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.StartMulti_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::StartMulti_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.StartMulti_BPI");

	struct UGI_MedievalDynasty_C_StartMulti_BPI_Params {
	};
	UGI_MedievalDynasty_C_StartMulti_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.WaitForTasksEnd_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::WaitForTasksEnd_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.WaitForTasksEnd_BPI");

	struct UGI_MedievalDynasty_C_WaitForTasksEnd_BPI_Params {
	};
	UGI_MedievalDynasty_C_WaitForTasksEnd_BPI_Params params;

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
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.ClearErrors
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::ClearErrors() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.ClearErrors");

	struct UGI_MedievalDynasty_C_ClearErrors_Params {
	};
	UGI_MedievalDynasty_C_ClearErrors_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.TryToLoginPlayer
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::TryToLoginPlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.TryToLoginPlayer");

	struct UGI_MedievalDynasty_C_TryToLoginPlayer_Params {
	};
	UGI_MedievalDynasty_C_TryToLoginPlayer_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.HandleSessionInvite
// Flags: Event, Public, HasOutParms, BlueprintEvent
// Params:
// Name: bWasSuccessful	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: LocalUserNum	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: UserUNiD	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: SessionToJoin	Type: struct FBlueprintSessionResultCustom	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::HandleSessionInvite(bool bWasSuccessful, int32_t LocalUserNum, struct FString UserUNiD, const struct FBlueprintSessionResultCustom& SessionToJoin) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.HandleSessionInvite");

	struct UGI_MedievalDynasty_C_HandleSessionInvite_Params {
		bool bWasSuccessful;			//Offset: 0 | ElementSize: 1
		int32_t LocalUserNum;			//Offset: 4 | ElementSize: 4
		struct FString UserUNiD;			//Offset: 8 | ElementSize: 16
		struct FBlueprintSessionResultCustom SessionToJoin;			//Offset: 24 | ElementSize: 264
	};
	UGI_MedievalDynasty_C_HandleSessionInvite_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.LocalUserNum = LocalUserNum;
	params.UserUNiD = UserUNiD;
	params.SessionToJoin = SessionToJoin;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFindSessionFinished
// Flags: Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Results	Type: TArray<struct FBlueprintSessionResultCustom>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnFindSessionFinished(const TArray<struct FBlueprintSessionResultCustom>& Results) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFindSessionFinished");

	struct UGI_MedievalDynasty_C_OnFindSessionFinished_Params {
		TArray<struct FBlueprintSessionResultCustom> Results;			//Offset: 0 | ElementSize: 16
	};
	UGI_MedievalDynasty_C_OnFindSessionFinished_Params params;
	params.Results = Results;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.CreateSessionAndLoadGame_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SessionName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SessionPassword	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SaveSlotName	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::CreateSessionAndLoadGame_BPI(struct FName SessionName, struct FName SessionPassword, struct FString SaveSlotName) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.CreateSessionAndLoadGame_BPI");

	struct UGI_MedievalDynasty_C_CreateSessionAndLoadGame_BPI_Params {
		struct FName SessionName;			//Offset: 0 | ElementSize: 8
		struct FName SessionPassword;			//Offset: 8 | ElementSize: 8
		struct FString SaveSlotName;			//Offset: 16 | ElementSize: 16
	};
	UGI_MedievalDynasty_C_CreateSessionAndLoadGame_BPI_Params params;
	params.SessionName = SessionName;
	params.SessionPassword = SessionPassword;
	params.SaveSlotName = SaveSlotName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.FindSession_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SearchSessionName	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
// Name: MaxResults	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: UseLan	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::FindSession_BPI(struct FString SearchSessionName, int32_t MaxResults, bool UseLan) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.FindSession_BPI");

	struct UGI_MedievalDynasty_C_FindSession_BPI_Params {
		struct FString SearchSessionName;			//Offset: 0 | ElementSize: 16
		int32_t MaxResults;			//Offset: 16 | ElementSize: 4
		bool UseLan;			//Offset: 20 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_FindSession_BPI_Params params;
	params.SearchSessionName = SearchSessionName;
	params.MaxResults = MaxResults;
	params.UseLan = UseLan;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetCurrentSessionName_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SessionName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::SetCurrentSessionName_BPI(struct FName SessionName) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetCurrentSessionName_BPI");

	struct UGI_MedievalDynasty_C_SetCurrentSessionName_BPI_Params {
		struct FName SessionName;			//Offset: 0 | ElementSize: 8
	};
	UGI_MedievalDynasty_C_SetCurrentSessionName_BPI_Params params;
	params.SessionName = SessionName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.JoinSession_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Session	Type: struct FBlueprintSessionResultCustom	Flags: BlueprintVisible, BlueprintReadOnly, Parm
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::JoinSession_BPI(struct FBlueprintSessionResultCustom Session) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.JoinSession_BPI");

	struct UGI_MedievalDynasty_C_JoinSession_BPI_Params {
		struct FBlueprintSessionResultCustom Session;			//Offset: 0 | ElementSize: 264
	};
	UGI_MedievalDynasty_C_JoinSession_BPI_Params params;
	params.Session = Session;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.DestroySession_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SessionName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::DestroySession_BPI(struct FName SessionName) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.DestroySession_BPI");

	struct UGI_MedievalDynasty_C_DestroySession_BPI_Params {
		struct FName SessionName;			//Offset: 0 | ElementSize: 8
	};
	UGI_MedievalDynasty_C_DestroySession_BPI_Params params;
	params.SessionName = SessionName;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.CreateSession_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: SessionName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: SessionPassword	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::CreateSession_BPI(struct FName SessionName, struct FName SessionPassword) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.CreateSession_BPI");

	struct UGI_MedievalDynasty_C_CreateSession_BPI_Params {
		struct FName SessionName;			//Offset: 0 | ElementSize: 8
		struct FName SessionPassword;			//Offset: 8 | ElementSize: 8
	};
	UGI_MedievalDynasty_C_CreateSession_BPI_Params params;
	params.SessionName = SessionName;
	params.SessionPassword = SessionPassword;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.PlayIntroSound
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: OpenedUrl	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::PlayIntroSound(struct FString OpenedUrl) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.PlayIntroSound");

	struct UGI_MedievalDynasty_C_PlayIntroSound_Params {
		struct FString OpenedUrl;			//Offset: 0 | ElementSize: 16
	};
	UGI_MedievalDynasty_C_PlayIntroSound_Params params;
	params.OpenedUrl = OpenedUrl;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.FinishOxbowIntro
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::FinishOxbowIntro() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.FinishOxbowIntro");

	struct UGI_MedievalDynasty_C_FinishOxbowIntro_Params {
	};
	UGI_MedievalDynasty_C_FinishOxbowIntro_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.SkipOxbowIntro
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::SkipOxbowIntro() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.SkipOxbowIntro");

	struct UGI_MedievalDynasty_C_SkipOxbowIntro_Params {
	};
	UGI_MedievalDynasty_C_SkipOxbowIntro_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.CreateOxbowIntro
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::CreateOxbowIntro() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.CreateOxbowIntro");

	struct UGI_MedievalDynasty_C_CreateOxbowIntro_Params {
	};
	UGI_MedievalDynasty_C_CreateOxbowIntro_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.StopTutorialVideo
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::StopTutorialVideo() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.StopTutorialVideo");

	struct UGI_MedievalDynasty_C_StopTutorialVideo_Params {
	};
	UGI_MedievalDynasty_C_StopTutorialVideo_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.StartTutorialVideo
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: MediaURL	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::StartTutorialVideo(struct FString MediaURL) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.StartTutorialVideo");

	struct UGI_MedievalDynasty_C_StartTutorialVideo_Params {
		struct FString MediaURL;			//Offset: 0 | ElementSize: 16
	};
	UGI_MedievalDynasty_C_StartTutorialVideo_Params params;
	params.MediaURL = MediaURL;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.PauseGameOnCutscene
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: OpenedUrl	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::PauseGameOnCutscene(struct FString OpenedUrl) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.PauseGameOnCutscene");

	struct UGI_MedievalDynasty_C_PauseGameOnCutscene_Params {
		struct FString OpenedUrl;			//Offset: 0 | ElementSize: 16
	};
	UGI_MedievalDynasty_C_PauseGameOnCutscene_Params params;
	params.OpenedUrl = OpenedUrl;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.RemoveCutsceneOnEnd
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::RemoveCutsceneOnEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.RemoveCutsceneOnEnd");

	struct UGI_MedievalDynasty_C_RemoveCutsceneOnEnd_Params {
	};
	UGI_MedievalDynasty_C_RemoveCutsceneOnEnd_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.CreateCutscene
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Type	Type: TEnumAsByte<E_Cutscenes>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MediaFileURL	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::CreateCutscene(TEnumAsByte<E_Cutscenes> Type, struct FString MediaFileURL) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.CreateCutscene");

	struct UGI_MedievalDynasty_C_CreateCutscene_Params {
		TEnumAsByte<E_Cutscenes> Type;			//Offset: 0 | ElementSize: 1
		struct FString MediaFileURL;			//Offset: 8 | ElementSize: 16
	};
	UGI_MedievalDynasty_C_CreateCutscene_Params params;
	params.Type = Type;
	params.MediaFileURL = MediaFileURL;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.UnlockAchievement_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: AchievementID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::UnlockAchievement_BPI(struct FName AchievementID) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.UnlockAchievement_BPI");

	struct UGI_MedievalDynasty_C_UnlockAchievement_BPI_Params {
		struct FName AchievementID;			//Offset: 0 | ElementSize: 8
	};
	UGI_MedievalDynasty_C_UnlockAchievement_BPI_Params params;
	params.AchievementID = AchievementID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.AddStatProgress_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: StatName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StatValue	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TreatAsSet	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::AddStatProgress_BPI(struct FName StatName, int32_t StatValue, bool TreatAsSet) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.AddStatProgress_BPI");

	struct UGI_MedievalDynasty_C_AddStatProgress_BPI_Params {
		struct FName StatName;			//Offset: 0 | ElementSize: 8
		int32_t StatValue;			//Offset: 8 | ElementSize: 4
		bool TreatAsSet;			//Offset: 12 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_AddStatProgress_BPI_Params params;
	params.StatName = StatName;
	params.StatValue = StatValue;
	params.TreatAsSet = TreatAsSet;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.CacheStats_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::CacheStats_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.CacheStats_BPI");

	struct UGI_MedievalDynasty_C_CacheStats_BPI_Params {
	};
	UGI_MedievalDynasty_C_CacheStats_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.StartStatCaching_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::StartStatCaching_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.StartStatCaching_BPI");

	struct UGI_MedievalDynasty_C_StartStatCaching_BPI_Params {
	};
	UGI_MedievalDynasty_C_StartStatCaching_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.TryToAddAchievement
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::TryToAddAchievement() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.TryToAddAchievement");

	struct UGI_MedievalDynasty_C_TryToAddAchievement_Params {
	};
	UGI_MedievalDynasty_C_TryToAddAchievement_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.GiveAchievement
// Flags: HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: AchID	Type: struct FName	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::GiveAchievement(const struct FName& AchID) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.GiveAchievement");

	struct UGI_MedievalDynasty_C_GiveAchievement_Params {
		struct FName AchID;			//Offset: 0 | ElementSize: 8
	};
	UGI_MedievalDynasty_C_GiveAchievement_Params params;
	params.AchID = AchID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.CacheStats
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::CacheStats() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.CacheStats");

	struct UGI_MedievalDynasty_C_CacheStats_Params {
	};
	UGI_MedievalDynasty_C_CacheStats_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.AddStatProgress
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: StatName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StatValue	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: TreatAsSet	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::AddStatProgress(struct FName StatName, int32_t StatValue, bool TreatAsSet) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.AddStatProgress");

	struct UGI_MedievalDynasty_C_AddStatProgress_Params {
		struct FName StatName;			//Offset: 0 | ElementSize: 8
		int32_t StatValue;			//Offset: 8 | ElementSize: 4
		bool TreatAsSet;			//Offset: 12 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_AddStatProgress_Params params;
	params.StatName = StatName;
	params.StatValue = StatValue;
	params.TreatAsSet = TreatAsSet;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.UnlockAchievement
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: AchievementID	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::UnlockAchievement(struct FName AchievementID) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.UnlockAchievement");

	struct UGI_MedievalDynasty_C_UnlockAchievement_Params {
		struct FName AchievementID;			//Offset: 0 | ElementSize: 8
	};
	UGI_MedievalDynasty_C_UnlockAchievement_Params params;
	params.AchievementID = AchievementID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.HasPrivilege_9C348EFF4B71B08A963DF5BD0C1D5D6D
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::HasPrivilege_9C348EFF4B71B08A963DF5BD0C1D5D6D() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.HasPrivilege_9C348EFF4B71B08A963DF5BD0C1D5D6D");

	struct UGI_MedievalDynasty_C_HasPrivilege_9C348EFF4B71B08A963DF5BD0C1D5D6D_Params {
	};
	UGI_MedievalDynasty_C_HasPrivilege_9C348EFF4B71B08A963DF5BD0C1D5D6D_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.NoPrivilege_9C348EFF4B71B08A963DF5BD0C1D5D6D
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::NoPrivilege_9C348EFF4B71B08A963DF5BD0C1D5D6D() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.NoPrivilege_9C348EFF4B71B08A963DF5BD0C1D5D6D");

	struct UGI_MedievalDynasty_C_NoPrivilege_9C348EFF4B71B08A963DF5BD0C1D5D6D_Params {
	};
	UGI_MedievalDynasty_C_NoPrivilege_9C348EFF4B71B08A963DF5BD0C1D5D6D_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.HasPrivilege_4C95E99B4EFC4C7119DF9088A40DF38A
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::HasPrivilege_4C95E99B4EFC4C7119DF9088A40DF38A() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.HasPrivilege_4C95E99B4EFC4C7119DF9088A40DF38A");

	struct UGI_MedievalDynasty_C_HasPrivilege_4C95E99B4EFC4C7119DF9088A40DF38A_Params {
	};
	UGI_MedievalDynasty_C_HasPrivilege_4C95E99B4EFC4C7119DF9088A40DF38A_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.NoPrivilege_4C95E99B4EFC4C7119DF9088A40DF38A
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::NoPrivilege_4C95E99B4EFC4C7119DF9088A40DF38A() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.NoPrivilege_4C95E99B4EFC4C7119DF9088A40DF38A");

	struct UGI_MedievalDynasty_C_NoPrivilege_4C95E99B4EFC4C7119DF9088A40DF38A_Params {
	};
	UGI_MedievalDynasty_C_NoPrivilege_4C95E99B4EFC4C7119DF9088A40DF38A_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.QuerySuccessful_3B41DCC64CB1DA12E7FAE78DFFA4472E
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::QuerySuccessful_3B41DCC64CB1DA12E7FAE78DFFA4472E() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.QuerySuccessful_3B41DCC64CB1DA12E7FAE78DFFA4472E");

	struct UGI_MedievalDynasty_C_QuerySuccessful_3B41DCC64CB1DA12E7FAE78DFFA4472E_Params {
	};
	UGI_MedievalDynasty_C_QuerySuccessful_3B41DCC64CB1DA12E7FAE78DFFA4472E_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.QueryFailed_3B41DCC64CB1DA12E7FAE78DFFA4472E
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::QueryFailed_3B41DCC64CB1DA12E7FAE78DFFA4472E() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.QueryFailed_3B41DCC64CB1DA12E7FAE78DFFA4472E");

	struct UGI_MedievalDynasty_C_QueryFailed_3B41DCC64CB1DA12E7FAE78DFFA4472E_Params {
	};
	UGI_MedievalDynasty_C_QueryFailed_3B41DCC64CB1DA12E7FAE78DFFA4472E_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.HasPrivilege_D05E3D214EA746CD68C47E96EA617F3C
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::HasPrivilege_D05E3D214EA746CD68C47E96EA617F3C() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.HasPrivilege_D05E3D214EA746CD68C47E96EA617F3C");

	struct UGI_MedievalDynasty_C_HasPrivilege_D05E3D214EA746CD68C47E96EA617F3C_Params {
	};
	UGI_MedievalDynasty_C_HasPrivilege_D05E3D214EA746CD68C47E96EA617F3C_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.NoPrivilege_D05E3D214EA746CD68C47E96EA617F3C
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::NoPrivilege_D05E3D214EA746CD68C47E96EA617F3C() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.NoPrivilege_D05E3D214EA746CD68C47E96EA617F3C");

	struct UGI_MedievalDynasty_C_NoPrivilege_D05E3D214EA746CD68C47E96EA617F3C_Params {
	};
	UGI_MedievalDynasty_C_NoPrivilege_D05E3D214EA746CD68C47E96EA617F3C_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.QuerySuccessful_407F179D4E07D46A8C55248C40723537
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::QuerySuccessful_407F179D4E07D46A8C55248C40723537() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.QuerySuccessful_407F179D4E07D46A8C55248C40723537");

	struct UGI_MedievalDynasty_C_QuerySuccessful_407F179D4E07D46A8C55248C40723537_Params {
	};
	UGI_MedievalDynasty_C_QuerySuccessful_407F179D4E07D46A8C55248C40723537_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.QueryFailed_407F179D4E07D46A8C55248C40723537
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::QueryFailed_407F179D4E07D46A8C55248C40723537() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.QueryFailed_407F179D4E07D46A8C55248C40723537");

	struct UGI_MedievalDynasty_C_QueryFailed_407F179D4E07D46A8C55248C40723537_Params {
	};
	UGI_MedievalDynasty_C_QueryFailed_407F179D4E07D46A8C55248C40723537_Params params;

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
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.HasPrivilege_C116C64642F21994A6598099607D79BB
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::HasPrivilege_C116C64642F21994A6598099607D79BB() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.HasPrivilege_C116C64642F21994A6598099607D79BB");

	struct UGI_MedievalDynasty_C_HasPrivilege_C116C64642F21994A6598099607D79BB_Params {
	};
	UGI_MedievalDynasty_C_HasPrivilege_C116C64642F21994A6598099607D79BB_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.NoPrivilege_C116C64642F21994A6598099607D79BB
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::NoPrivilege_C116C64642F21994A6598099607D79BB() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.NoPrivilege_C116C64642F21994A6598099607D79BB");

	struct UGI_MedievalDynasty_C_NoPrivilege_C116C64642F21994A6598099607D79BB_Params {
	};
	UGI_MedievalDynasty_C_NoPrivilege_C116C64642F21994A6598099607D79BB_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.HasPrivilege_119ED878442C786ABDE822A4CA5737C8
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::HasPrivilege_119ED878442C786ABDE822A4CA5737C8() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.HasPrivilege_119ED878442C786ABDE822A4CA5737C8");

	struct UGI_MedievalDynasty_C_HasPrivilege_119ED878442C786ABDE822A4CA5737C8_Params {
	};
	UGI_MedievalDynasty_C_HasPrivilege_119ED878442C786ABDE822A4CA5737C8_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.NoPrivilege_119ED878442C786ABDE822A4CA5737C8
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::NoPrivilege_119ED878442C786ABDE822A4CA5737C8() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.NoPrivilege_119ED878442C786ABDE822A4CA5737C8");

	struct UGI_MedievalDynasty_C_NoPrivilege_119ED878442C786ABDE822A4CA5737C8_Params {
	};
	UGI_MedievalDynasty_C_NoPrivilege_119ED878442C786ABDE822A4CA5737C8_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.HasPrivilege_66721D6A4702CD01F8B008AF65E8CA59
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::HasPrivilege_66721D6A4702CD01F8B008AF65E8CA59() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.HasPrivilege_66721D6A4702CD01F8B008AF65E8CA59");

	struct UGI_MedievalDynasty_C_HasPrivilege_66721D6A4702CD01F8B008AF65E8CA59_Params {
	};
	UGI_MedievalDynasty_C_HasPrivilege_66721D6A4702CD01F8B008AF65E8CA59_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.NoPrivilege_66721D6A4702CD01F8B008AF65E8CA59
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::NoPrivilege_66721D6A4702CD01F8B008AF65E8CA59() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.NoPrivilege_66721D6A4702CD01F8B008AF65E8CA59");

	struct UGI_MedievalDynasty_C_NoPrivilege_66721D6A4702CD01F8B008AF65E8CA59_Params {
	};
	UGI_MedievalDynasty_C_NoPrivilege_66721D6A4702CD01F8B008AF65E8CA59_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.HasPrivilege_D07FEB2B472F6AEEFACF8CAB39F94A3A
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::HasPrivilege_D07FEB2B472F6AEEFACF8CAB39F94A3A() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.HasPrivilege_D07FEB2B472F6AEEFACF8CAB39F94A3A");

	struct UGI_MedievalDynasty_C_HasPrivilege_D07FEB2B472F6AEEFACF8CAB39F94A3A_Params {
	};
	UGI_MedievalDynasty_C_HasPrivilege_D07FEB2B472F6AEEFACF8CAB39F94A3A_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.NoPrivilege_D07FEB2B472F6AEEFACF8CAB39F94A3A
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::NoPrivilege_D07FEB2B472F6AEEFACF8CAB39F94A3A() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.NoPrivilege_D07FEB2B472F6AEEFACF8CAB39F94A3A");

	struct UGI_MedievalDynasty_C_NoPrivilege_D07FEB2B472F6AEEFACF8CAB39F94A3A_Params {
	};
	UGI_MedievalDynasty_C_NoPrivilege_D07FEB2B472F6AEEFACF8CAB39F94A3A_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_DFF5F89D4E2E1A063CD49BBE86E113B0
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnSuccess_DFF5F89D4E2E1A063CD49BBE86E113B0() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_DFF5F89D4E2E1A063CD49BBE86E113B0");

	struct UGI_MedievalDynasty_C_OnSuccess_DFF5F89D4E2E1A063CD49BBE86E113B0_Params {
	};
	UGI_MedievalDynasty_C_OnSuccess_DFF5F89D4E2E1A063CD49BBE86E113B0_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_DFF5F89D4E2E1A063CD49BBE86E113B0
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnFailure_DFF5F89D4E2E1A063CD49BBE86E113B0() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_DFF5F89D4E2E1A063CD49BBE86E113B0");

	struct UGI_MedievalDynasty_C_OnFailure_DFF5F89D4E2E1A063CD49BBE86E113B0_Params {
	};
	UGI_MedievalDynasty_C_OnFailure_DFF5F89D4E2E1A063CD49BBE86E113B0_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_1F3996604F40CB64D5134295185CCC8F
// Flags: HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Results	Type: TArray<struct FBlueprintSessionResultCustom>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnSuccess_1F3996604F40CB64D5134295185CCC8F(const TArray<struct FBlueprintSessionResultCustom>& Results) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_1F3996604F40CB64D5134295185CCC8F");

	struct UGI_MedievalDynasty_C_OnSuccess_1F3996604F40CB64D5134295185CCC8F_Params {
		TArray<struct FBlueprintSessionResultCustom> Results;			//Offset: 0 | ElementSize: 16
	};
	UGI_MedievalDynasty_C_OnSuccess_1F3996604F40CB64D5134295185CCC8F_Params params;
	params.Results = Results;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_1F3996604F40CB64D5134295185CCC8F
// Flags: HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Results	Type: TArray<struct FBlueprintSessionResultCustom>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnFailure_1F3996604F40CB64D5134295185CCC8F(const TArray<struct FBlueprintSessionResultCustom>& Results) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_1F3996604F40CB64D5134295185CCC8F");

	struct UGI_MedievalDynasty_C_OnFailure_1F3996604F40CB64D5134295185CCC8F_Params {
		TArray<struct FBlueprintSessionResultCustom> Results;			//Offset: 0 | ElementSize: 16
	};
	UGI_MedievalDynasty_C_OnFailure_1F3996604F40CB64D5134295185CCC8F_Params params;
	params.Results = Results;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_BD5D365D4B3F74567308D795150BB571
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnSuccess_BD5D365D4B3F74567308D795150BB571() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_BD5D365D4B3F74567308D795150BB571");

	struct UGI_MedievalDynasty_C_OnSuccess_BD5D365D4B3F74567308D795150BB571_Params {
	};
	UGI_MedievalDynasty_C_OnSuccess_BD5D365D4B3F74567308D795150BB571_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_BD5D365D4B3F74567308D795150BB571
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnFailure_BD5D365D4B3F74567308D795150BB571() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_BD5D365D4B3F74567308D795150BB571");

	struct UGI_MedievalDynasty_C_OnFailure_BD5D365D4B3F74567308D795150BB571_Params {
	};
	UGI_MedievalDynasty_C_OnFailure_BD5D365D4B3F74567308D795150BB571_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_D5070B934662AD46C0FAEFB2DF946CD9
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnSuccess_D5070B934662AD46C0FAEFB2DF946CD9() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_D5070B934662AD46C0FAEFB2DF946CD9");

	struct UGI_MedievalDynasty_C_OnSuccess_D5070B934662AD46C0FAEFB2DF946CD9_Params {
	};
	UGI_MedievalDynasty_C_OnSuccess_D5070B934662AD46C0FAEFB2DF946CD9_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_D5070B934662AD46C0FAEFB2DF946CD9
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnFailure_D5070B934662AD46C0FAEFB2DF946CD9() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_D5070B934662AD46C0FAEFB2DF946CD9");

	struct UGI_MedievalDynasty_C_OnFailure_D5070B934662AD46C0FAEFB2DF946CD9_Params {
	};
	UGI_MedievalDynasty_C_OnFailure_D5070B934662AD46C0FAEFB2DF946CD9_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_4AD51AE24F028F491E64C09EAAC80FD7
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnSuccess_4AD51AE24F028F491E64C09EAAC80FD7() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_4AD51AE24F028F491E64C09EAAC80FD7");

	struct UGI_MedievalDynasty_C_OnSuccess_4AD51AE24F028F491E64C09EAAC80FD7_Params {
	};
	UGI_MedievalDynasty_C_OnSuccess_4AD51AE24F028F491E64C09EAAC80FD7_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_4AD51AE24F028F491E64C09EAAC80FD7
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnFailure_4AD51AE24F028F491E64C09EAAC80FD7() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_4AD51AE24F028F491E64C09EAAC80FD7");

	struct UGI_MedievalDynasty_C_OnFailure_4AD51AE24F028F491E64C09EAAC80FD7_Params {
	};
	UGI_MedievalDynasty_C_OnFailure_4AD51AE24F028F491E64C09EAAC80FD7_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_FD482FAD4AAFB71698F32891DBF06156
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: LeaderboardValue	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnSuccess_FD482FAD4AAFB71698F32891DBF06156(int32_t LeaderboardValue) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_FD482FAD4AAFB71698F32891DBF06156");

	struct UGI_MedievalDynasty_C_OnSuccess_FD482FAD4AAFB71698F32891DBF06156_Params {
		int32_t LeaderboardValue;			//Offset: 0 | ElementSize: 4
	};
	UGI_MedievalDynasty_C_OnSuccess_FD482FAD4AAFB71698F32891DBF06156_Params params;
	params.LeaderboardValue = LeaderboardValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_FD482FAD4AAFB71698F32891DBF06156
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: LeaderboardValue	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnFailure_FD482FAD4AAFB71698F32891DBF06156(int32_t LeaderboardValue) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_FD482FAD4AAFB71698F32891DBF06156");

	struct UGI_MedievalDynasty_C_OnFailure_FD482FAD4AAFB71698F32891DBF06156_Params {
		int32_t LeaderboardValue;			//Offset: 0 | ElementSize: 4
	};
	UGI_MedievalDynasty_C_OnFailure_FD482FAD4AAFB71698F32891DBF06156_Params params;
	params.LeaderboardValue = LeaderboardValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_93BF7E71464CEE3F48388F999CC4BD59
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnSuccess_93BF7E71464CEE3F48388F999CC4BD59() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_93BF7E71464CEE3F48388F999CC4BD59");

	struct UGI_MedievalDynasty_C_OnSuccess_93BF7E71464CEE3F48388F999CC4BD59_Params {
	};
	UGI_MedievalDynasty_C_OnSuccess_93BF7E71464CEE3F48388F999CC4BD59_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_93BF7E71464CEE3F48388F999CC4BD59
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnFailure_93BF7E71464CEE3F48388F999CC4BD59() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_93BF7E71464CEE3F48388F999CC4BD59");

	struct UGI_MedievalDynasty_C_OnFailure_93BF7E71464CEE3F48388F999CC4BD59_Params {
	};
	UGI_MedievalDynasty_C_OnFailure_93BF7E71464CEE3F48388F999CC4BD59_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_A131F301426B560513588383512E27A4
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: LeaderboardValue	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnSuccess_A131F301426B560513588383512E27A4(int32_t LeaderboardValue) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_A131F301426B560513588383512E27A4");

	struct UGI_MedievalDynasty_C_OnSuccess_A131F301426B560513588383512E27A4_Params {
		int32_t LeaderboardValue;			//Offset: 0 | ElementSize: 4
	};
	UGI_MedievalDynasty_C_OnSuccess_A131F301426B560513588383512E27A4_Params params;
	params.LeaderboardValue = LeaderboardValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_A131F301426B560513588383512E27A4
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: LeaderboardValue	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnFailure_A131F301426B560513588383512E27A4(int32_t LeaderboardValue) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_A131F301426B560513588383512E27A4");

	struct UGI_MedievalDynasty_C_OnFailure_A131F301426B560513588383512E27A4_Params {
		int32_t LeaderboardValue;			//Offset: 0 | ElementSize: 4
	};
	UGI_MedievalDynasty_C_OnFailure_A131F301426B560513588383512E27A4_Params params;
	params.LeaderboardValue = LeaderboardValue;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_1FDB15CE4C98FA774E7016BE8D95E26A
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnSuccess_1FDB15CE4C98FA774E7016BE8D95E26A() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_1FDB15CE4C98FA774E7016BE8D95E26A");

	struct UGI_MedievalDynasty_C_OnSuccess_1FDB15CE4C98FA774E7016BE8D95E26A_Params {
	};
	UGI_MedievalDynasty_C_OnSuccess_1FDB15CE4C98FA774E7016BE8D95E26A_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_1FDB15CE4C98FA774E7016BE8D95E26A
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnFailure_1FDB15CE4C98FA774E7016BE8D95E26A() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_1FDB15CE4C98FA774E7016BE8D95E26A");

	struct UGI_MedievalDynasty_C_OnFailure_1FDB15CE4C98FA774E7016BE8D95E26A_Params {
	};
	UGI_MedievalDynasty_C_OnFailure_1FDB15CE4C98FA774E7016BE8D95E26A_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_306210D74F3348DF0E1A51A8F83F7DA2
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: WrittenAchievementName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WrittenProgress	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WrittenUserTag	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnSuccess_306210D74F3348DF0E1A51A8F83F7DA2(struct FName WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_306210D74F3348DF0E1A51A8F83F7DA2");

	struct UGI_MedievalDynasty_C_OnSuccess_306210D74F3348DF0E1A51A8F83F7DA2_Params {
		struct FName WrittenAchievementName;			//Offset: 0 | ElementSize: 8
		float WrittenProgress;			//Offset: 8 | ElementSize: 4
		int32_t WrittenUserTag;			//Offset: 12 | ElementSize: 4
	};
	UGI_MedievalDynasty_C_OnSuccess_306210D74F3348DF0E1A51A8F83F7DA2_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_306210D74F3348DF0E1A51A8F83F7DA2
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: WrittenAchievementName	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WrittenProgress	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WrittenUserTag	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnFailure_306210D74F3348DF0E1A51A8F83F7DA2(struct FName WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_306210D74F3348DF0E1A51A8F83F7DA2");

	struct UGI_MedievalDynasty_C_OnFailure_306210D74F3348DF0E1A51A8F83F7DA2_Params {
		struct FName WrittenAchievementName;			//Offset: 0 | ElementSize: 8
		float WrittenProgress;			//Offset: 8 | ElementSize: 4
		int32_t WrittenUserTag;			//Offset: 12 | ElementSize: 4
	};
	UGI_MedievalDynasty_C_OnFailure_306210D74F3348DF0E1A51A8F83F7DA2_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_81495EE74A1F1812597BD6B9EF7972E3
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnSuccess_81495EE74A1F1812597BD6B9EF7972E3() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_81495EE74A1F1812597BD6B9EF7972E3");

	struct UGI_MedievalDynasty_C_OnSuccess_81495EE74A1F1812597BD6B9EF7972E3_Params {
	};
	UGI_MedievalDynasty_C_OnSuccess_81495EE74A1F1812597BD6B9EF7972E3_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_81495EE74A1F1812597BD6B9EF7972E3
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnFailure_81495EE74A1F1812597BD6B9EF7972E3() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_81495EE74A1F1812597BD6B9EF7972E3");

	struct UGI_MedievalDynasty_C_OnFailure_81495EE74A1F1812597BD6B9EF7972E3_Params {
	};
	UGI_MedievalDynasty_C_OnFailure_81495EE74A1F1812597BD6B9EF7972E3_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_AAB804FC4DEFDAB28331DBA6C399A289
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerController	Type: class APlayerController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnSuccess_AAB804FC4DEFDAB28331DBA6C399A289(class APlayerController* PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_AAB804FC4DEFDAB28331DBA6C399A289");

	struct UGI_MedievalDynasty_C_OnSuccess_AAB804FC4DEFDAB28331DBA6C399A289_Params {
		class APlayerController* PlayerController;			//Offset: 0 | ElementSize: 8
	};
	UGI_MedievalDynasty_C_OnSuccess_AAB804FC4DEFDAB28331DBA6C399A289_Params params;
	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_AAB804FC4DEFDAB28331DBA6C399A289
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerController	Type: class APlayerController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnFailure_AAB804FC4DEFDAB28331DBA6C399A289(class APlayerController* PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_AAB804FC4DEFDAB28331DBA6C399A289");

	struct UGI_MedievalDynasty_C_OnFailure_AAB804FC4DEFDAB28331DBA6C399A289_Params {
		class APlayerController* PlayerController;			//Offset: 0 | ElementSize: 8
	};
	UGI_MedievalDynasty_C_OnFailure_AAB804FC4DEFDAB28331DBA6C399A289_Params params;
	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_95F98E5D43F3A815BBCD37A546A2320C
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnSuccess_95F98E5D43F3A815BBCD37A546A2320C() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_95F98E5D43F3A815BBCD37A546A2320C");

	struct UGI_MedievalDynasty_C_OnSuccess_95F98E5D43F3A815BBCD37A546A2320C_Params {
	};
	UGI_MedievalDynasty_C_OnSuccess_95F98E5D43F3A815BBCD37A546A2320C_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_95F98E5D43F3A815BBCD37A546A2320C
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnFailure_95F98E5D43F3A815BBCD37A546A2320C() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_95F98E5D43F3A815BBCD37A546A2320C");

	struct UGI_MedievalDynasty_C_OnFailure_95F98E5D43F3A815BBCD37A546A2320C_Params {
	};
	UGI_MedievalDynasty_C_OnFailure_95F98E5D43F3A815BBCD37A546A2320C_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_AAB804FC4DEFDAB28331DBA606FA0887
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerController	Type: class APlayerController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnSuccess_AAB804FC4DEFDAB28331DBA606FA0887(class APlayerController* PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_AAB804FC4DEFDAB28331DBA606FA0887");

	struct UGI_MedievalDynasty_C_OnSuccess_AAB804FC4DEFDAB28331DBA606FA0887_Params {
		class APlayerController* PlayerController;			//Offset: 0 | ElementSize: 8
	};
	UGI_MedievalDynasty_C_OnSuccess_AAB804FC4DEFDAB28331DBA606FA0887_Params params;
	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_AAB804FC4DEFDAB28331DBA606FA0887
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerController	Type: class APlayerController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnFailure_AAB804FC4DEFDAB28331DBA606FA0887(class APlayerController* PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_AAB804FC4DEFDAB28331DBA606FA0887");

	struct UGI_MedievalDynasty_C_OnFailure_AAB804FC4DEFDAB28331DBA606FA0887_Params {
		class APlayerController* PlayerController;			//Offset: 0 | ElementSize: 8
	};
	UGI_MedievalDynasty_C_OnFailure_AAB804FC4DEFDAB28331DBA606FA0887_Params params;
	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_95F98E5D43F3A815BBCD37A583C19802
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnSuccess_95F98E5D43F3A815BBCD37A583C19802() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_95F98E5D43F3A815BBCD37A583C19802");

	struct UGI_MedievalDynasty_C_OnSuccess_95F98E5D43F3A815BBCD37A583C19802_Params {
	};
	UGI_MedievalDynasty_C_OnSuccess_95F98E5D43F3A815BBCD37A583C19802_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_95F98E5D43F3A815BBCD37A583C19802
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnFailure_95F98E5D43F3A815BBCD37A583C19802() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_95F98E5D43F3A815BBCD37A583C19802");

	struct UGI_MedievalDynasty_C_OnFailure_95F98E5D43F3A815BBCD37A583C19802_Params {
	};
	UGI_MedievalDynasty_C_OnFailure_95F98E5D43F3A815BBCD37A583C19802_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_AAB804FC4DEFDAB28331DBA68C06E210
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerController	Type: class APlayerController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnSuccess_AAB804FC4DEFDAB28331DBA68C06E210(class APlayerController* PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_AAB804FC4DEFDAB28331DBA68C06E210");

	struct UGI_MedievalDynasty_C_OnSuccess_AAB804FC4DEFDAB28331DBA68C06E210_Params {
		class APlayerController* PlayerController;			//Offset: 0 | ElementSize: 8
	};
	UGI_MedievalDynasty_C_OnSuccess_AAB804FC4DEFDAB28331DBA68C06E210_Params params;
	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_AAB804FC4DEFDAB28331DBA68C06E210
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerController	Type: class APlayerController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnFailure_AAB804FC4DEFDAB28331DBA68C06E210(class APlayerController* PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_AAB804FC4DEFDAB28331DBA68C06E210");

	struct UGI_MedievalDynasty_C_OnFailure_AAB804FC4DEFDAB28331DBA68C06E210_Params {
		class APlayerController* PlayerController;			//Offset: 0 | ElementSize: 8
	};
	UGI_MedievalDynasty_C_OnFailure_AAB804FC4DEFDAB28331DBA68C06E210_Params params;
	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_95F98E5D43F3A815BBCD37A5093D7295
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnSuccess_95F98E5D43F3A815BBCD37A5093D7295() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_95F98E5D43F3A815BBCD37A5093D7295");

	struct UGI_MedievalDynasty_C_OnSuccess_95F98E5D43F3A815BBCD37A5093D7295_Params {
	};
	UGI_MedievalDynasty_C_OnSuccess_95F98E5D43F3A815BBCD37A5093D7295_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_95F98E5D43F3A815BBCD37A5093D7295
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnFailure_95F98E5D43F3A815BBCD37A5093D7295() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_95F98E5D43F3A815BBCD37A5093D7295");

	struct UGI_MedievalDynasty_C_OnFailure_95F98E5D43F3A815BBCD37A5093D7295_Params {
	};
	UGI_MedievalDynasty_C_OnFailure_95F98E5D43F3A815BBCD37A5093D7295_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_AAB804FC4DEFDAB28331DBA6962B8AFB
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerController	Type: class APlayerController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnSuccess_AAB804FC4DEFDAB28331DBA6962B8AFB(class APlayerController* PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_AAB804FC4DEFDAB28331DBA6962B8AFB");

	struct UGI_MedievalDynasty_C_OnSuccess_AAB804FC4DEFDAB28331DBA6962B8AFB_Params {
		class APlayerController* PlayerController;			//Offset: 0 | ElementSize: 8
	};
	UGI_MedievalDynasty_C_OnSuccess_AAB804FC4DEFDAB28331DBA6962B8AFB_Params params;
	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_AAB804FC4DEFDAB28331DBA6962B8AFB
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerController	Type: class APlayerController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnFailure_AAB804FC4DEFDAB28331DBA6962B8AFB(class APlayerController* PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_AAB804FC4DEFDAB28331DBA6962B8AFB");

	struct UGI_MedievalDynasty_C_OnFailure_AAB804FC4DEFDAB28331DBA6962B8AFB_Params {
		class APlayerController* PlayerController;			//Offset: 0 | ElementSize: 8
	};
	UGI_MedievalDynasty_C_OnFailure_AAB804FC4DEFDAB28331DBA6962B8AFB_Params params;
	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_95F98E5D43F3A815BBCD37A513101A7E
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnSuccess_95F98E5D43F3A815BBCD37A513101A7E() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_95F98E5D43F3A815BBCD37A513101A7E");

	struct UGI_MedievalDynasty_C_OnSuccess_95F98E5D43F3A815BBCD37A513101A7E_Params {
	};
	UGI_MedievalDynasty_C_OnSuccess_95F98E5D43F3A815BBCD37A513101A7E_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_95F98E5D43F3A815BBCD37A513101A7E
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnFailure_95F98E5D43F3A815BBCD37A513101A7E() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_95F98E5D43F3A815BBCD37A513101A7E");

	struct UGI_MedievalDynasty_C_OnFailure_95F98E5D43F3A815BBCD37A513101A7E_Params {
	};
	UGI_MedievalDynasty_C_OnFailure_95F98E5D43F3A815BBCD37A513101A7E_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_AAB804FC4DEFDAB28331DBA62A554F0C
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerController	Type: class APlayerController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnSuccess_AAB804FC4DEFDAB28331DBA62A554F0C(class APlayerController* PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_AAB804FC4DEFDAB28331DBA62A554F0C");

	struct UGI_MedievalDynasty_C_OnSuccess_AAB804FC4DEFDAB28331DBA62A554F0C_Params {
		class APlayerController* PlayerController;			//Offset: 0 | ElementSize: 8
	};
	UGI_MedievalDynasty_C_OnSuccess_AAB804FC4DEFDAB28331DBA62A554F0C_Params params;
	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_AAB804FC4DEFDAB28331DBA62A554F0C
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: PlayerController	Type: class APlayerController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnFailure_AAB804FC4DEFDAB28331DBA62A554F0C(class APlayerController* PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_AAB804FC4DEFDAB28331DBA62A554F0C");

	struct UGI_MedievalDynasty_C_OnFailure_AAB804FC4DEFDAB28331DBA62A554F0C_Params {
		class APlayerController* PlayerController;			//Offset: 0 | ElementSize: 8
	};
	UGI_MedievalDynasty_C_OnFailure_AAB804FC4DEFDAB28331DBA62A554F0C_Params params;
	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_95F98E5D43F3A815BBCD37A5AF6EDF89
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnSuccess_95F98E5D43F3A815BBCD37A5AF6EDF89() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_95F98E5D43F3A815BBCD37A5AF6EDF89");

	struct UGI_MedievalDynasty_C_OnSuccess_95F98E5D43F3A815BBCD37A5AF6EDF89_Params {
	};
	UGI_MedievalDynasty_C_OnSuccess_95F98E5D43F3A815BBCD37A5AF6EDF89_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_95F98E5D43F3A815BBCD37A5AF6EDF89
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnFailure_95F98E5D43F3A815BBCD37A5AF6EDF89() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_95F98E5D43F3A815BBCD37A5AF6EDF89");

	struct UGI_MedievalDynasty_C_OnFailure_95F98E5D43F3A815BBCD37A5AF6EDF89_Params {
	};
	UGI_MedievalDynasty_C_OnFailure_95F98E5D43F3A815BBCD37A5AF6EDF89_Params params;

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
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.HudSettings
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::HudSettings() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.HudSettings");

	struct UGI_MedievalDynasty_C_HudSettings_Params {
	};
	UGI_MedievalDynasty_C_HudSettings_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.RemoveCutscene
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Delay	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OldVideoURL	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::RemoveCutscene(float Delay, struct FString* OldVideoURL) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.RemoveCutscene");

	struct UGI_MedievalDynasty_C_RemoveCutscene_Params {
		float Delay;			//Offset: 0 | ElementSize: 4
		struct FString OldVideoURL;			//Offset: 8 | ElementSize: 16
	};
	UGI_MedievalDynasty_C_RemoveCutscene_Params params;
	params.Delay = Delay;

	UObject::ProcessEvent(fn, &params);
	if (OldVideoURL != nullptr)
		*OldVideoURL = params.OldVideoURL;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.StartStatCaching
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::StartStatCaching() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.StartStatCaching");

	struct UGI_MedievalDynasty_C_StartStatCaching_Params {
	};
	UGI_MedievalDynasty_C_StartStatCaching_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.ResetAchiStats
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::ResetAchiStats() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.ResetAchiStats");

	struct UGI_MedievalDynasty_C_ResetAchiStats_Params {
	};
	UGI_MedievalDynasty_C_ResetAchiStats_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.TemporarlyFillWithGameCustomizationSettings
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::TemporarlyFillWithGameCustomizationSettings() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.TemporarlyFillWithGameCustomizationSettings");

	struct UGI_MedievalDynasty_C_TemporarlyFillWithGameCustomizationSettings_Params {
	};
	UGI_MedievalDynasty_C_TemporarlyFillWithGameCustomizationSettings_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.FillGameModeWithSetCustomizationSettings
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::FillGameModeWithSetCustomizationSettings() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.FillGameModeWithSetCustomizationSettings");

	struct UGI_MedievalDynasty_C_FillGameModeWithSetCustomizationSettings_Params {
	};
	UGI_MedievalDynasty_C_FillGameModeWithSetCustomizationSettings_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnPlayerIsLoggedIn
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::OnPlayerIsLoggedIn() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnPlayerIsLoggedIn");

	struct UGI_MedievalDynasty_C_OnPlayerIsLoggedIn_Params {
	};
	UGI_MedievalDynasty_C_OnPlayerIsLoggedIn_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.LoadMutedPlayersFromSave
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: SuccessfulLoad	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::LoadMutedPlayersFromSave(bool* SuccessfulLoad) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.LoadMutedPlayersFromSave");

	struct UGI_MedievalDynasty_C_LoadMutedPlayersFromSave_Params {
		bool SuccessfulLoad;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_LoadMutedPlayersFromSave_Params params;

	UObject::ProcessEvent(fn, &params);
	if (SuccessfulLoad != nullptr)
		*SuccessfulLoad = params.SuccessfulLoad;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.IsSessionFull
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Session	Type: struct FBlueprintSessionResultCustom	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: IsFull	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::IsSessionFull(struct FBlueprintSessionResultCustom* Session, bool* IsFull) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.IsSessionFull");

	struct UGI_MedievalDynasty_C_IsSessionFull_Params {
		struct FBlueprintSessionResultCustom Session;			//Offset: 0 | ElementSize: 264
		bool IsFull;			//Offset: 264 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_IsSessionFull_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Session != nullptr)
		*Session = params.Session;
	if (IsFull != nullptr)
		*IsFull = params.IsFull;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetPlayerState
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Achievement	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Valid	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: PlayerState	Type: class ABP_MD_PlayerState_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::GetPlayerState(struct FName Achievement, bool* Valid, class ABP_MD_PlayerState_C** PlayerState) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetPlayerState");

	struct UGI_MedievalDynasty_C_GetPlayerState_Params {
		struct FName Achievement;			//Offset: 0 | ElementSize: 8
		bool Valid;			//Offset: 8 | ElementSize: 1
		class ABP_MD_PlayerState_C* PlayerState;			//Offset: 16 | ElementSize: 8
	};
	UGI_MedievalDynasty_C_GetPlayerState_Params params;
	params.Achievement = Achievement;

	UObject::ProcessEvent(fn, &params);
	if (Valid != nullptr)
		*Valid = params.Valid;
	if (PlayerState != nullptr)
		*PlayerState = params.PlayerState;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.CheckLoginStatus
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure
// Params:
// Name: IsLoggedIn	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::CheckLoginStatus(bool* IsLoggedIn) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.CheckLoginStatus");

	struct UGI_MedievalDynasty_C_CheckLoginStatus_Params {
		bool IsLoggedIn;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_CheckLoginStatus_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsLoggedIn != nullptr)
		*IsLoggedIn = params.IsLoggedIn;
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

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetCurrentSessionName_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
struct FName UGI_MedievalDynasty_C::GetCurrentSessionName_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetCurrentSessionName_BPI");

	struct UGI_MedievalDynasty_C_GetCurrentSessionName_BPI_Params {
		struct FName ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UGI_MedievalDynasty_C_GetCurrentSessionName_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.IsMultiplayerMap
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsMpMap	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::IsMultiplayerMap(bool* IsMpMap) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.IsMultiplayerMap");

	struct UGI_MedievalDynasty_C_IsMultiplayerMap_Params {
		bool IsMpMap;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_IsMultiplayerMap_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsMpMap != nullptr)
		*IsMpMap = params.IsMpMap;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.IsMultiplayerBetaVersion
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::IsMultiplayerBetaVersion(bool* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.IsMultiplayerBetaVersion");

	struct UGI_MedievalDynasty_C_IsMultiplayerBetaVersion_Params {
		bool Value;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_IsMultiplayerBetaVersion_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Value != nullptr)
		*Value = params.Value;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetDynamicCharacterViewInInventory
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Value	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::GetDynamicCharacterViewInInventory(bool* Value) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetDynamicCharacterViewInInventory");

	struct UGI_MedievalDynasty_C_GetDynamicCharacterViewInInventory_Params {
		bool Value;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_GetDynamicCharacterViewInInventory_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Value != nullptr)
		*Value = params.Value;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetNotificationDurationMultiplier
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Mulitplier	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::GetNotificationDurationMultiplier(float* Mulitplier) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetNotificationDurationMultiplier");

	struct UGI_MedievalDynasty_C_GetNotificationDurationMultiplier_Params {
		float Mulitplier;			//Offset: 0 | ElementSize: 4
	};
	UGI_MedievalDynasty_C_GetNotificationDurationMultiplier_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Mulitplier != nullptr)
		*Mulitplier = params.Mulitplier;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetUGCPrivilege_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: HasPrivilege	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::GetUGCPrivilege_BPI(bool* HasPrivilege) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetUGCPrivilege_BPI");

	struct UGI_MedievalDynasty_C_GetUGCPrivilege_BPI_Params {
		bool HasPrivilege;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_GetUGCPrivilege_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (HasPrivilege != nullptr)
		*HasPrivilege = params.HasPrivilege;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetBlockedPlayersOnlineIDs_BPI
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: BlockedPlayers	Type: TArray<struct FString>	Flags: Parm, OutParm
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::GetBlockedPlayersOnlineIDs_BPI(TArray<struct FString>* BlockedPlayers) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetBlockedPlayersOnlineIDs_BPI");

	struct UGI_MedievalDynasty_C_GetBlockedPlayersOnlineIDs_BPI_Params {
		TArray<struct FString> BlockedPlayers;			//Offset: 0 | ElementSize: 16
	};
	UGI_MedievalDynasty_C_GetBlockedPlayersOnlineIDs_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (BlockedPlayers != nullptr)
		*BlockedPlayers = params.BlockedPlayers;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.AddRecentPlayer_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Player	Type: class APlayerController*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PlayerToAdd	Type: class APlayerState*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::AddRecentPlayer_BPI(class APlayerController* Player, class APlayerState* PlayerToAdd, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.AddRecentPlayer_BPI");

	struct UGI_MedievalDynasty_C_AddRecentPlayer_BPI_Params {
		class APlayerController* Player;			//Offset: 0 | ElementSize: 8
		class APlayerState* PlayerToAdd;			//Offset: 8 | ElementSize: 8
		bool Success;			//Offset: 16 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_AddRecentPlayer_BPI_Params params;
	params.Player = Player;
	params.PlayerToAdd = PlayerToAdd;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.DoesCurrentSessionHaveCrossplayEnabled_BPI
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsEnabled	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SuccessfullyRetrieved	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::DoesCurrentSessionHaveCrossplayEnabled_BPI(bool* IsEnabled, bool* SuccessfullyRetrieved) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.DoesCurrentSessionHaveCrossplayEnabled_BPI");

	struct UGI_MedievalDynasty_C_DoesCurrentSessionHaveCrossplayEnabled_BPI_Params {
		bool IsEnabled;			//Offset: 0 | ElementSize: 1
		bool SuccessfullyRetrieved;			//Offset: 1 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_DoesCurrentSessionHaveCrossplayEnabled_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsEnabled != nullptr)
		*IsEnabled = params.IsEnabled;
	if (SuccessfullyRetrieved != nullptr)
		*SuccessfullyRetrieved = params.SuccessfullyRetrieved;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetChromaSetting
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsChromaEnabled	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::GetChromaSetting(bool* IsChromaEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetChromaSetting");

	struct UGI_MedievalDynasty_C_GetChromaSetting_Params {
		bool IsChromaEnabled;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_GetChromaSetting_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsChromaEnabled != nullptr)
		*IsChromaEnabled = params.IsChromaEnabled;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetInviteSessionHandler
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: Invite_Session_Handler	Type: struct FBlueprintSessionResultCustom	Flags: Parm, OutParm
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::GetInviteSessionHandler(struct FBlueprintSessionResultCustom* Invite_Session_Handler)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetInviteSessionHandler");

	struct UGI_MedievalDynasty_C_GetInviteSessionHandler_Params {
		struct FBlueprintSessionResultCustom Invite_Session_Handler;			//Offset: 0 | ElementSize: 264
	};
	UGI_MedievalDynasty_C_GetInviteSessionHandler_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Invite_Session_Handler != nullptr)
		*Invite_Session_Handler = params.Invite_Session_Handler;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetSaveSettings
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: Save_Settings	Type: class USAVE_Settings_C*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::GetSaveSettings(class USAVE_Settings_C** Save_Settings)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetSaveSettings");

	struct UGI_MedievalDynasty_C_GetSaveSettings_Params {
		class USAVE_Settings_C* Save_Settings;			//Offset: 0 | ElementSize: 8
	};
	UGI_MedievalDynasty_C_GetSaveSettings_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Save_Settings != nullptr)
		*Save_Settings = params.Save_Settings;
}

/////////////////////////////////////////////
// Function GI_MedievalDynasty.GI_MedievalDynasty_C.IsBloodEnabled
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const
// Params:
// Name: IsBloodEnabled	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void UGI_MedievalDynasty_C::IsBloodEnabled(bool* IsBloodEnabled)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.IsBloodEnabled");

	struct UGI_MedievalDynasty_C_IsBloodEnabled_Params {
		bool IsBloodEnabled;			//Offset: 0 | ElementSize: 1
	};
	UGI_MedievalDynasty_C_IsBloodEnabled_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsBloodEnabled != nullptr)
		*IsBloodEnabled = params.IsBloodEnabled;
}

#pragma endregion
}