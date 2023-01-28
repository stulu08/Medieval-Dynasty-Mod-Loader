#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSection.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneAudioSection
// Super: Class MovieScene.MovieSceneSection
// Size: 824
// Size inherited: 232
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneAudioSection : public UMovieSceneSection {
public:
#pragma region Members
	//class USoundBase*	Sound;		//Offset: 232	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class USoundBase* M_GetSound() const;
	class USoundBase** M_PtrGetSound();
	void M_SetSound(const class USoundBase*& value);

	//struct FFrameNumber	StartFrameOffset;		//Offset: 240	Size: 4	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FFrameNumber M_GetStartFrameOffset() const;
	struct FFrameNumber* M_PtrGetStartFrameOffset();
	void M_SetStartFrameOffset(const struct FFrameNumber& value);

	//float	StartOffset;		//Offset: 244	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	float M_GetStartOffset() const;
	float* M_PtrGetStartOffset();
	void M_SetStartOffset(const float& value);

	//float	AudioStartTime;		//Offset: 248	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	float M_GetAudioStartTime() const;
	float* M_PtrGetAudioStartTime();
	void M_SetAudioStartTime(const float& value);

	//float	AudioDilationFactor;		//Offset: 252	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	float M_GetAudioDilationFactor() const;
	float* M_PtrGetAudioDilationFactor();
	void M_SetAudioDilationFactor(const float& value);

	//float	AudioVolume;		//Offset: 256	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	float M_GetAudioVolume() const;
	float* M_PtrGetAudioVolume();
	void M_SetAudioVolume(const float& value);

	//struct FMovieSceneFloatChannel	SoundVolume;		//Offset: 264	Size: 160	Flags: NativeAccessSpecifierPrivate
	struct FMovieSceneFloatChannel M_GetSoundVolume() const;
	struct FMovieSceneFloatChannel* M_PtrGetSoundVolume();
	void M_SetSoundVolume(const struct FMovieSceneFloatChannel& value);

	//struct FMovieSceneFloatChannel	PitchMultiplier;		//Offset: 424	Size: 160	Flags: NativeAccessSpecifierPrivate
	struct FMovieSceneFloatChannel M_GetPitchMultiplier() const;
	struct FMovieSceneFloatChannel* M_PtrGetPitchMultiplier();
	void M_SetPitchMultiplier(const struct FMovieSceneFloatChannel& value);

	//struct FMovieSceneActorReferenceData	AttachActorData;		//Offset: 584	Size: 176	Flags: NativeAccessSpecifierPrivate
	struct FMovieSceneActorReferenceData M_GetAttachActorData() const;
	struct FMovieSceneActorReferenceData* M_PtrGetAttachActorData();
	void M_SetAttachActorData(const struct FMovieSceneActorReferenceData& value);

	//bool	bLooping;		//Offset: 760	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	bool M_GetbLooping() const;
	bool* M_PtrGetbLooping();
	void M_SetbLooping(const bool& value);

	//bool	bSuppressSubtitles;		//Offset: 761	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	bool M_GetbSuppressSubtitles() const;
	bool* M_PtrGetbSuppressSubtitles();
	void M_SetbSuppressSubtitles(const bool& value);

	//bool	bOverrideAttenuation;		//Offset: 762	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	bool M_GetbOverrideAttenuation() const;
	bool* M_PtrGetbOverrideAttenuation();
	void M_SetbOverrideAttenuation(const bool& value);

	//class USoundAttenuation*	AttenuationSettings;		//Offset: 768	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class USoundAttenuation* M_GetAttenuationSettings() const;
	class USoundAttenuation** M_PtrGetAttenuationSettings();
	void M_SetAttenuationSettings(const class USoundAttenuation*& value);

	//struct FScriptDelegate	OnQueueSubtitles;		//Offset: 776	Size: 16	Flags: ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate
	struct FScriptDelegate M_GetOnQueueSubtitles() const;
	struct FScriptDelegate* M_PtrGetOnQueueSubtitles();
	void M_SetOnQueueSubtitles(const struct FScriptDelegate& value);

	//TAssetPtr<class FOnAudioFinished__DelegateSignature>	OnAudioFinished;		//Offset: 792	Size: 16	Flags: ZeroConstructor, InstancedReference, NativeAccessSpecifierPrivate
	TAssetPtr<class FOnAudioFinished__DelegateSignature> M_GetOnAudioFinished() const;
	TAssetPtr<class FOnAudioFinished__DelegateSignature>* M_PtrGetOnAudioFinished();
	void M_SetOnAudioFinished(const TAssetPtr<class FOnAudioFinished__DelegateSignature>& value);

	//TAssetPtr<class FOnAudioPlaybackPercent__DelegateSignature>	OnAudioPlaybackPercent;		//Offset: 808	Size: 16	Flags: ZeroConstructor, InstancedReference, NativeAccessSpecifierPrivate
	TAssetPtr<class FOnAudioPlaybackPercent__DelegateSignature> M_GetOnAudioPlaybackPercent() const;
	TAssetPtr<class FOnAudioPlaybackPercent__DelegateSignature>* M_PtrGetOnAudioPlaybackPercent();
	void M_SetOnAudioPlaybackPercent(const TAssetPtr<class FOnAudioPlaybackPercent__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneAudioSection");
		return ptr;
	}

#pragma region Functions
	class USoundBase* GetSound()/* const*/;

	struct FFrameNumber GetStartOffset()/* const*/;

	void SetSound(class USoundBase* InSound);

	void SetStartOffset(struct FFrameNumber InStartOffset);

#pragma endregion
};
};