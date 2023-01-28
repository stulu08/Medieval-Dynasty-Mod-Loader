#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class MovieScene.MovieSceneSequencePlayer
// Super: Class CoreUObject.Object
// Size: 1256
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneSequencePlayer : public UObject {
public:
#pragma region Members
	//TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature>	OnPlay;		//Offset: 608	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature> M_GetOnPlay() const;
	TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature>* M_PtrGetOnPlay();
	void M_SetOnPlay(const TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature>& value);

	//TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature>	OnPlayReverse;		//Offset: 624	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature> M_GetOnPlayReverse() const;
	TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature>* M_PtrGetOnPlayReverse();
	void M_SetOnPlayReverse(const TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature>& value);

	//TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature>	OnStop;		//Offset: 640	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature> M_GetOnStop() const;
	TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature>* M_PtrGetOnStop();
	void M_SetOnStop(const TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature>& value);

	//TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature>	OnPause;		//Offset: 656	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature> M_GetOnPause() const;
	TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature>* M_PtrGetOnPause();
	void M_SetOnPause(const TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature>& value);

	//TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature>	OnFinished;		//Offset: 672	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature> M_GetOnFinished() const;
	TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature>* M_PtrGetOnFinished();
	void M_SetOnFinished(const TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature>& value);

	//TEnumAsByte<EMovieScenePlayerStatus>	Status;		//Offset: 688	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	TEnumAsByte<EMovieScenePlayerStatus> M_GetStatus() const;
	TEnumAsByte<EMovieScenePlayerStatus>* M_PtrGetStatus();
	void M_SetStatus(const TEnumAsByte<EMovieScenePlayerStatus>& value);

	//unsigned char	bReversePlayback : 1;		//Offset: 692	Size: 1	Flags: Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbReversePlayback() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbReversePlayback();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbReversePlayback(const unsigned char& value);

	//class UMovieSceneSequence*	Sequence;		//Offset: 696	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UMovieSceneSequence* M_GetSequence() const;
	class UMovieSceneSequence** M_PtrGetSequence();
	void M_SetSequence(const class UMovieSceneSequence*& value);

	//struct FFrameNumber	StartTime;		//Offset: 704	Size: 4	Flags: Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FFrameNumber M_GetStartTime() const;
	struct FFrameNumber* M_PtrGetStartTime();
	void M_SetStartTime(const struct FFrameNumber& value);

	//int32_t	DurationFrames;		//Offset: 708	Size: 4	Flags: Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	int32_t M_GetDurationFrames() const;
	int32_t* M_PtrGetDurationFrames();
	void M_SetDurationFrames(const int32_t& value);

	//float	DurationSubFrames;		//Offset: 712	Size: 4	Flags: Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetDurationSubFrames() const;
	float* M_PtrGetDurationSubFrames();
	void M_SetDurationSubFrames(const float& value);

	//int32_t	CurrentNumLoops;		//Offset: 716	Size: 4	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	int32_t M_GetCurrentNumLoops() const;
	int32_t* M_PtrGetCurrentNumLoops();
	void M_SetCurrentNumLoops(const int32_t& value);

	//struct FMovieSceneSequencePlaybackSettings	PlaybackSettings;		//Offset: 720	Size: 20	Flags: Net, NoDestructor, Protected, NativeAccessSpecifierProtected
	struct FMovieSceneSequencePlaybackSettings M_GetPlaybackSettings() const;
	struct FMovieSceneSequencePlaybackSettings* M_PtrGetPlaybackSettings();
	void M_SetPlaybackSettings(const struct FMovieSceneSequencePlaybackSettings& value);

	//struct FMovieSceneRootEvaluationTemplateInstance	RootTemplateInstance;		//Offset: 744	Size: 232	Flags: Transient, Protected, NativeAccessSpecifierProtected
	struct FMovieSceneRootEvaluationTemplateInstance M_GetRootTemplateInstance() const;
	struct FMovieSceneRootEvaluationTemplateInstance* M_PtrGetRootTemplateInstance();
	void M_SetRootTemplateInstance(const struct FMovieSceneRootEvaluationTemplateInstance& value);

	//struct FMovieSceneSequenceReplProperties	NetSyncProps;		//Offset: 1080	Size: 16	Flags: Net, NoDestructor, Protected, NativeAccessSpecifierProtected
	struct FMovieSceneSequenceReplProperties M_GetNetSyncProps() const;
	struct FMovieSceneSequenceReplProperties* M_PtrGetNetSyncProps();
	void M_SetNetSyncProps(const struct FMovieSceneSequenceReplProperties& value);

	//TScriptInterface<class UMovieScenePlaybackClient>	PlaybackClient;		//Offset: 1096	Size: 16	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
	TScriptInterface<class UMovieScenePlaybackClient> M_GetPlaybackClient() const;
	TScriptInterface<class UMovieScenePlaybackClient>* M_PtrGetPlaybackClient();
	void M_SetPlaybackClient(const TScriptInterface<class UMovieScenePlaybackClient>& value);

	//class UMovieSceneSequenceTickManager*	TickManager;		//Offset: 1112	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UMovieSceneSequenceTickManager* M_GetTickManager() const;
	class UMovieSceneSequenceTickManager** M_PtrGetTickManager();
	void M_SetTickManager(const class UMovieSceneSequenceTickManager*& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSequencePlayer");
		return ptr;
	}

#pragma region Functions
	void ChangePlaybackDirection();

	TArray<class UObject*> GetBoundObjects(struct FMovieSceneObjectBindingID ObjectBinding);

	struct FQualifiedFrameTime GetCurrentTime()/* const*/;

	bool GetDisableCameraCuts();

	struct FQualifiedFrameTime GetDuration()/* const*/;

	struct FQualifiedFrameTime GetEndTime()/* const*/;

	int32_t GetFrameDuration()/* const*/;

	struct FFrameRate GetFrameRate()/* const*/;

	TArray<struct FMovieSceneObjectBindingID> GetObjectBindings(class UObject* InObject);

	float GetPlayRate()/* const*/;

	class UMovieSceneSequence* GetSequence()/* const*/;

	struct FQualifiedFrameTime GetStartTime()/* const*/;

	void GoToEndAndStop();

	bool IsPaused()/* const*/;

	bool IsPlaying()/* const*/;

	bool IsReversed()/* const*/;

	void JumpToFrame(struct FFrameTime NewPosition);

	bool JumpToMarkedFrame(struct FString InLabel);

	void JumpToSeconds(float TimeInSeconds);

	void Pause();

	void Play();

	void PlayLooping(int32_t NumLoops);

	void PlayReverse();

	void PlayTo(struct FMovieSceneSequencePlaybackParams PlaybackParams);

	void PlayToFrame(struct FFrameTime NewPosition);

	bool PlayToMarkedFrame(struct FString InLabel);

	void PlayToSeconds(float TimeInSeconds);

	void RestoreState();

	void RPC_ExplicitServerUpdateEvent(EUpdatePositionMethod Method, struct FFrameTime RelevantTime);

	void RPC_OnStopEvent(struct FFrameTime StoppedTime);

	void Scrub();

	void ScrubToFrame(struct FFrameTime NewPosition);

	bool ScrubToMarkedFrame(struct FString InLabel);

	void ScrubToSeconds(float TimeInSeconds);

	void SetDisableCameraCuts(bool bInDisableCameraCuts);

	void SetFrameRange(int32_t StartFrame, int32_t Duration, float SubFrames);

	void SetFrameRate(struct FFrameRate FrameRate);

	void SetPlaybackPosition(struct FMovieSceneSequencePlaybackParams PlaybackParams);

	void SetPlayRate(float PlayRate);

	void SetTimeRange(float StartTime, float Duration);

	void Stop();

	void StopAtCurrentTime();

#pragma endregion
};
};