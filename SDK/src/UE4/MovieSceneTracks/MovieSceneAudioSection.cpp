#include "../SDK.h"
#include "MovieSceneAudioSection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Sound
// Declaration: class USoundBase* Sound
class USoundBase* UMovieSceneAudioSection::M_GetSound() const {
	return Read<class USoundBase*>((byte*)this + 232);
}
class USoundBase** UMovieSceneAudioSection::M_PtrGetSound() {
	return reinterpret_cast<class USoundBase**>((byte*)this + 232);
}
void UMovieSceneAudioSection::M_SetSound(const class USoundBase*& value) {
	Write((byte*)this + 232, value);
}
// Member Getter and Setter of StartFrameOffset
// Declaration: struct FFrameNumber StartFrameOffset
struct FFrameNumber UMovieSceneAudioSection::M_GetStartFrameOffset() const {
	return Read<struct FFrameNumber>((byte*)this + 240);
}
struct FFrameNumber* UMovieSceneAudioSection::M_PtrGetStartFrameOffset() {
	return reinterpret_cast<struct FFrameNumber*>((byte*)this + 240);
}
void UMovieSceneAudioSection::M_SetStartFrameOffset(const struct FFrameNumber& value) {
	Write((byte*)this + 240, value);
}
// Member Getter and Setter of StartOffset
// Declaration: float StartOffset
float UMovieSceneAudioSection::M_GetStartOffset() const {
	return Read<float>((byte*)this + 244);
}
float* UMovieSceneAudioSection::M_PtrGetStartOffset() {
	return reinterpret_cast<float*>((byte*)this + 244);
}
void UMovieSceneAudioSection::M_SetStartOffset(const float& value) {
	Write((byte*)this + 244, value);
}
// Member Getter and Setter of AudioStartTime
// Declaration: float AudioStartTime
float UMovieSceneAudioSection::M_GetAudioStartTime() const {
	return Read<float>((byte*)this + 248);
}
float* UMovieSceneAudioSection::M_PtrGetAudioStartTime() {
	return reinterpret_cast<float*>((byte*)this + 248);
}
void UMovieSceneAudioSection::M_SetAudioStartTime(const float& value) {
	Write((byte*)this + 248, value);
}
// Member Getter and Setter of AudioDilationFactor
// Declaration: float AudioDilationFactor
float UMovieSceneAudioSection::M_GetAudioDilationFactor() const {
	return Read<float>((byte*)this + 252);
}
float* UMovieSceneAudioSection::M_PtrGetAudioDilationFactor() {
	return reinterpret_cast<float*>((byte*)this + 252);
}
void UMovieSceneAudioSection::M_SetAudioDilationFactor(const float& value) {
	Write((byte*)this + 252, value);
}
// Member Getter and Setter of AudioVolume
// Declaration: float AudioVolume
float UMovieSceneAudioSection::M_GetAudioVolume() const {
	return Read<float>((byte*)this + 256);
}
float* UMovieSceneAudioSection::M_PtrGetAudioVolume() {
	return reinterpret_cast<float*>((byte*)this + 256);
}
void UMovieSceneAudioSection::M_SetAudioVolume(const float& value) {
	Write((byte*)this + 256, value);
}
// Member Getter and Setter of SoundVolume
// Declaration: struct FMovieSceneFloatChannel SoundVolume
struct FMovieSceneFloatChannel UMovieSceneAudioSection::M_GetSoundVolume() const {
	return Read<struct FMovieSceneFloatChannel>((byte*)this + 264);
}
struct FMovieSceneFloatChannel* UMovieSceneAudioSection::M_PtrGetSoundVolume() {
	return reinterpret_cast<struct FMovieSceneFloatChannel*>((byte*)this + 264);
}
void UMovieSceneAudioSection::M_SetSoundVolume(const struct FMovieSceneFloatChannel& value) {
	Write((byte*)this + 264, value);
}
// Member Getter and Setter of PitchMultiplier
// Declaration: struct FMovieSceneFloatChannel PitchMultiplier
struct FMovieSceneFloatChannel UMovieSceneAudioSection::M_GetPitchMultiplier() const {
	return Read<struct FMovieSceneFloatChannel>((byte*)this + 424);
}
struct FMovieSceneFloatChannel* UMovieSceneAudioSection::M_PtrGetPitchMultiplier() {
	return reinterpret_cast<struct FMovieSceneFloatChannel*>((byte*)this + 424);
}
void UMovieSceneAudioSection::M_SetPitchMultiplier(const struct FMovieSceneFloatChannel& value) {
	Write((byte*)this + 424, value);
}
// Member Getter and Setter of AttachActorData
// Declaration: struct FMovieSceneActorReferenceData AttachActorData
struct FMovieSceneActorReferenceData UMovieSceneAudioSection::M_GetAttachActorData() const {
	return Read<struct FMovieSceneActorReferenceData>((byte*)this + 584);
}
struct FMovieSceneActorReferenceData* UMovieSceneAudioSection::M_PtrGetAttachActorData() {
	return reinterpret_cast<struct FMovieSceneActorReferenceData*>((byte*)this + 584);
}
void UMovieSceneAudioSection::M_SetAttachActorData(const struct FMovieSceneActorReferenceData& value) {
	Write((byte*)this + 584, value);
}
// Member Getter and Setter of bLooping
// Declaration: bool bLooping
bool UMovieSceneAudioSection::M_GetbLooping() const {
	return Read<bool>((byte*)this + 760);
}
bool* UMovieSceneAudioSection::M_PtrGetbLooping() {
	return reinterpret_cast<bool*>((byte*)this + 760);
}
void UMovieSceneAudioSection::M_SetbLooping(const bool& value) {
	Write((byte*)this + 760, value);
}
// Member Getter and Setter of bSuppressSubtitles
// Declaration: bool bSuppressSubtitles
bool UMovieSceneAudioSection::M_GetbSuppressSubtitles() const {
	return Read<bool>((byte*)this + 761);
}
bool* UMovieSceneAudioSection::M_PtrGetbSuppressSubtitles() {
	return reinterpret_cast<bool*>((byte*)this + 761);
}
void UMovieSceneAudioSection::M_SetbSuppressSubtitles(const bool& value) {
	Write((byte*)this + 761, value);
}
// Member Getter and Setter of bOverrideAttenuation
// Declaration: bool bOverrideAttenuation
bool UMovieSceneAudioSection::M_GetbOverrideAttenuation() const {
	return Read<bool>((byte*)this + 762);
}
bool* UMovieSceneAudioSection::M_PtrGetbOverrideAttenuation() {
	return reinterpret_cast<bool*>((byte*)this + 762);
}
void UMovieSceneAudioSection::M_SetbOverrideAttenuation(const bool& value) {
	Write((byte*)this + 762, value);
}
// Member Getter and Setter of AttenuationSettings
// Declaration: class USoundAttenuation* AttenuationSettings
class USoundAttenuation* UMovieSceneAudioSection::M_GetAttenuationSettings() const {
	return Read<class USoundAttenuation*>((byte*)this + 768);
}
class USoundAttenuation** UMovieSceneAudioSection::M_PtrGetAttenuationSettings() {
	return reinterpret_cast<class USoundAttenuation**>((byte*)this + 768);
}
void UMovieSceneAudioSection::M_SetAttenuationSettings(const class USoundAttenuation*& value) {
	Write((byte*)this + 768, value);
}
// Member Getter and Setter of OnQueueSubtitles
// Declaration: struct FScriptDelegate OnQueueSubtitles
struct FScriptDelegate UMovieSceneAudioSection::M_GetOnQueueSubtitles() const {
	return Read<struct FScriptDelegate>((byte*)this + 776);
}
struct FScriptDelegate* UMovieSceneAudioSection::M_PtrGetOnQueueSubtitles() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 776);
}
void UMovieSceneAudioSection::M_SetOnQueueSubtitles(const struct FScriptDelegate& value) {
	Write((byte*)this + 776, value);
}
// Member Getter and Setter of OnAudioFinished
// Declaration: TAssetPtr<class FOnAudioFinished__DelegateSignature> OnAudioFinished
TAssetPtr<class FOnAudioFinished__DelegateSignature> UMovieSceneAudioSection::M_GetOnAudioFinished() const {
	return Read<TAssetPtr<class FOnAudioFinished__DelegateSignature>>((byte*)this + 792);
}
TAssetPtr<class FOnAudioFinished__DelegateSignature>* UMovieSceneAudioSection::M_PtrGetOnAudioFinished() {
	return reinterpret_cast<TAssetPtr<class FOnAudioFinished__DelegateSignature>*>((byte*)this + 792);
}
void UMovieSceneAudioSection::M_SetOnAudioFinished(const TAssetPtr<class FOnAudioFinished__DelegateSignature>& value) {
	Write((byte*)this + 792, value);
}
// Member Getter and Setter of OnAudioPlaybackPercent
// Declaration: TAssetPtr<class FOnAudioPlaybackPercent__DelegateSignature> OnAudioPlaybackPercent
TAssetPtr<class FOnAudioPlaybackPercent__DelegateSignature> UMovieSceneAudioSection::M_GetOnAudioPlaybackPercent() const {
	return Read<TAssetPtr<class FOnAudioPlaybackPercent__DelegateSignature>>((byte*)this + 808);
}
TAssetPtr<class FOnAudioPlaybackPercent__DelegateSignature>* UMovieSceneAudioSection::M_PtrGetOnAudioPlaybackPercent() {
	return reinterpret_cast<TAssetPtr<class FOnAudioPlaybackPercent__DelegateSignature>*>((byte*)this + 808);
}
void UMovieSceneAudioSection::M_SetOnAudioPlaybackPercent(const TAssetPtr<class FOnAudioPlaybackPercent__DelegateSignature>& value) {
	Write((byte*)this + 808, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function MovieSceneTracks.MovieSceneAudioSection.GetSound
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class USoundBase*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class USoundBase* UMovieSceneAudioSection::GetSound()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.GetSound");

	struct UMovieSceneAudioSection_GetSound_Params {
		class USoundBase* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UMovieSceneAudioSection_GetSound_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FFrameNumber	Flags: Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FFrameNumber UMovieSceneAudioSection::GetStartOffset()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset");

	struct UMovieSceneAudioSection_GetStartOffset_Params {
		struct FFrameNumber ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UMovieSceneAudioSection_GetStartOffset_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieSceneTracks.MovieSceneAudioSection.SetSound
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InSound	Type: class USoundBase*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneAudioSection::SetSound(class USoundBase* InSound) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.SetSound");

	struct UMovieSceneAudioSection_SetSound_Params {
		class USoundBase* InSound;			//Offset: 0 | ElementSize: 8
	};
	UMovieSceneAudioSection_SetSound_Params params;
	params.InSound = InSound;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: InStartOffset	Type: struct FFrameNumber	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneAudioSection::SetStartOffset(struct FFrameNumber InStartOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset");

	struct UMovieSceneAudioSection_SetStartOffset_Params {
		struct FFrameNumber InStartOffset;			//Offset: 0 | ElementSize: 4
	};
	UMovieSceneAudioSection_SetStartOffset_Params params;
	params.InStartOffset = InStartOffset;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}