#include "../SDK.h"
#include "MovieSceneSequencePlayer.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of OnPlay
// Declaration: TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature> OnPlay
TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature> UMovieSceneSequencePlayer::M_GetOnPlay() const {
	return Read<TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature>>((byte*)this + 608);
}
TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature>* UMovieSceneSequencePlayer::M_PtrGetOnPlay() {
	return reinterpret_cast<TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature>*>((byte*)this + 608);
}
void UMovieSceneSequencePlayer::M_SetOnPlay(const TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature>& value) {
	Write((byte*)this + 608, value);
}
// Member Getter and Setter of OnPlayReverse
// Declaration: TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature> OnPlayReverse
TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature> UMovieSceneSequencePlayer::M_GetOnPlayReverse() const {
	return Read<TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature>>((byte*)this + 624);
}
TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature>* UMovieSceneSequencePlayer::M_PtrGetOnPlayReverse() {
	return reinterpret_cast<TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature>*>((byte*)this + 624);
}
void UMovieSceneSequencePlayer::M_SetOnPlayReverse(const TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature>& value) {
	Write((byte*)this + 624, value);
}
// Member Getter and Setter of OnStop
// Declaration: TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature> OnStop
TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature> UMovieSceneSequencePlayer::M_GetOnStop() const {
	return Read<TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature>>((byte*)this + 640);
}
TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature>* UMovieSceneSequencePlayer::M_PtrGetOnStop() {
	return reinterpret_cast<TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature>*>((byte*)this + 640);
}
void UMovieSceneSequencePlayer::M_SetOnStop(const TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature>& value) {
	Write((byte*)this + 640, value);
}
// Member Getter and Setter of OnPause
// Declaration: TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature> OnPause
TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature> UMovieSceneSequencePlayer::M_GetOnPause() const {
	return Read<TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature>>((byte*)this + 656);
}
TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature>* UMovieSceneSequencePlayer::M_PtrGetOnPause() {
	return reinterpret_cast<TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature>*>((byte*)this + 656);
}
void UMovieSceneSequencePlayer::M_SetOnPause(const TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature>& value) {
	Write((byte*)this + 656, value);
}
// Member Getter and Setter of OnFinished
// Declaration: TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature> OnFinished
TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature> UMovieSceneSequencePlayer::M_GetOnFinished() const {
	return Read<TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature>>((byte*)this + 672);
}
TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature>* UMovieSceneSequencePlayer::M_PtrGetOnFinished() {
	return reinterpret_cast<TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature>*>((byte*)this + 672);
}
void UMovieSceneSequencePlayer::M_SetOnFinished(const TAssetPtr<class FOnMovieSceneSequencePlayerEvent__DelegateSignature>& value) {
	Write((byte*)this + 672, value);
}
// Member Getter and Setter of Status
// Declaration: TEnumAsByte<EMovieScenePlayerStatus> Status
TEnumAsByte<EMovieScenePlayerStatus> UMovieSceneSequencePlayer::M_GetStatus() const {
	return Read<TEnumAsByte<EMovieScenePlayerStatus>>((byte*)this + 688);
}
TEnumAsByte<EMovieScenePlayerStatus>* UMovieSceneSequencePlayer::M_PtrGetStatus() {
	return reinterpret_cast<TEnumAsByte<EMovieScenePlayerStatus>*>((byte*)this + 688);
}
void UMovieSceneSequencePlayer::M_SetStatus(const TEnumAsByte<EMovieScenePlayerStatus>& value) {
	Write((byte*)this + 688, value);
}
// Member Getter and Setter of bReversePlayback
// Declaration: unsigned char bReversePlayback : 1
unsigned char UMovieSceneSequencePlayer::M_GetbReversePlayback() const {
	return Read<unsigned char>((byte*)this + 692);
}
unsigned char* UMovieSceneSequencePlayer::M_PtrGetbReversePlayback() {
	return reinterpret_cast<unsigned char*>((byte*)this + 692);
}
void UMovieSceneSequencePlayer::M_SetbReversePlayback(const unsigned char& value) {
	Write((byte*)this + 692, value);
}
// Member Getter and Setter of Sequence
// Declaration: class UMovieSceneSequence* Sequence
class UMovieSceneSequence* UMovieSceneSequencePlayer::M_GetSequence() const {
	return Read<class UMovieSceneSequence*>((byte*)this + 696);
}
class UMovieSceneSequence** UMovieSceneSequencePlayer::M_PtrGetSequence() {
	return reinterpret_cast<class UMovieSceneSequence**>((byte*)this + 696);
}
void UMovieSceneSequencePlayer::M_SetSequence(const class UMovieSceneSequence*& value) {
	Write((byte*)this + 696, value);
}
// Member Getter and Setter of StartTime
// Declaration: struct FFrameNumber StartTime
struct FFrameNumber UMovieSceneSequencePlayer::M_GetStartTime() const {
	return Read<struct FFrameNumber>((byte*)this + 704);
}
struct FFrameNumber* UMovieSceneSequencePlayer::M_PtrGetStartTime() {
	return reinterpret_cast<struct FFrameNumber*>((byte*)this + 704);
}
void UMovieSceneSequencePlayer::M_SetStartTime(const struct FFrameNumber& value) {
	Write((byte*)this + 704, value);
}
// Member Getter and Setter of DurationFrames
// Declaration: int32_t DurationFrames
int32_t UMovieSceneSequencePlayer::M_GetDurationFrames() const {
	return Read<int32_t>((byte*)this + 708);
}
int32_t* UMovieSceneSequencePlayer::M_PtrGetDurationFrames() {
	return reinterpret_cast<int32_t*>((byte*)this + 708);
}
void UMovieSceneSequencePlayer::M_SetDurationFrames(const int32_t& value) {
	Write((byte*)this + 708, value);
}
// Member Getter and Setter of DurationSubFrames
// Declaration: float DurationSubFrames
float UMovieSceneSequencePlayer::M_GetDurationSubFrames() const {
	return Read<float>((byte*)this + 712);
}
float* UMovieSceneSequencePlayer::M_PtrGetDurationSubFrames() {
	return reinterpret_cast<float*>((byte*)this + 712);
}
void UMovieSceneSequencePlayer::M_SetDurationSubFrames(const float& value) {
	Write((byte*)this + 712, value);
}
// Member Getter and Setter of CurrentNumLoops
// Declaration: int32_t CurrentNumLoops
int32_t UMovieSceneSequencePlayer::M_GetCurrentNumLoops() const {
	return Read<int32_t>((byte*)this + 716);
}
int32_t* UMovieSceneSequencePlayer::M_PtrGetCurrentNumLoops() {
	return reinterpret_cast<int32_t*>((byte*)this + 716);
}
void UMovieSceneSequencePlayer::M_SetCurrentNumLoops(const int32_t& value) {
	Write((byte*)this + 716, value);
}
// Member Getter and Setter of PlaybackSettings
// Declaration: struct FMovieSceneSequencePlaybackSettings PlaybackSettings
struct FMovieSceneSequencePlaybackSettings UMovieSceneSequencePlayer::M_GetPlaybackSettings() const {
	return Read<struct FMovieSceneSequencePlaybackSettings>((byte*)this + 720);
}
struct FMovieSceneSequencePlaybackSettings* UMovieSceneSequencePlayer::M_PtrGetPlaybackSettings() {
	return reinterpret_cast<struct FMovieSceneSequencePlaybackSettings*>((byte*)this + 720);
}
void UMovieSceneSequencePlayer::M_SetPlaybackSettings(const struct FMovieSceneSequencePlaybackSettings& value) {
	Write((byte*)this + 720, value);
}
// Member Getter and Setter of RootTemplateInstance
// Declaration: struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance
struct FMovieSceneRootEvaluationTemplateInstance UMovieSceneSequencePlayer::M_GetRootTemplateInstance() const {
	return Read<struct FMovieSceneRootEvaluationTemplateInstance>((byte*)this + 744);
}
struct FMovieSceneRootEvaluationTemplateInstance* UMovieSceneSequencePlayer::M_PtrGetRootTemplateInstance() {
	return reinterpret_cast<struct FMovieSceneRootEvaluationTemplateInstance*>((byte*)this + 744);
}
void UMovieSceneSequencePlayer::M_SetRootTemplateInstance(const struct FMovieSceneRootEvaluationTemplateInstance& value) {
	Write((byte*)this + 744, value);
}
// Member Getter and Setter of NetSyncProps
// Declaration: struct FMovieSceneSequenceReplProperties NetSyncProps
struct FMovieSceneSequenceReplProperties UMovieSceneSequencePlayer::M_GetNetSyncProps() const {
	return Read<struct FMovieSceneSequenceReplProperties>((byte*)this + 1080);
}
struct FMovieSceneSequenceReplProperties* UMovieSceneSequencePlayer::M_PtrGetNetSyncProps() {
	return reinterpret_cast<struct FMovieSceneSequenceReplProperties*>((byte*)this + 1080);
}
void UMovieSceneSequencePlayer::M_SetNetSyncProps(const struct FMovieSceneSequenceReplProperties& value) {
	Write((byte*)this + 1080, value);
}
// Member Getter and Setter of PlaybackClient
// Declaration: TScriptInterface<class UMovieScenePlaybackClient> PlaybackClient
TScriptInterface<class UMovieScenePlaybackClient> UMovieSceneSequencePlayer::M_GetPlaybackClient() const {
	return Read<TScriptInterface<class UMovieScenePlaybackClient>>((byte*)this + 1096);
}
TScriptInterface<class UMovieScenePlaybackClient>* UMovieSceneSequencePlayer::M_PtrGetPlaybackClient() {
	return reinterpret_cast<TScriptInterface<class UMovieScenePlaybackClient>*>((byte*)this + 1096);
}
void UMovieSceneSequencePlayer::M_SetPlaybackClient(const TScriptInterface<class UMovieScenePlaybackClient>& value) {
	Write((byte*)this + 1096, value);
}
// Member Getter and Setter of TickManager
// Declaration: class UMovieSceneSequenceTickManager* TickManager
class UMovieSceneSequenceTickManager* UMovieSceneSequencePlayer::M_GetTickManager() const {
	return Read<class UMovieSceneSequenceTickManager*>((byte*)this + 1112);
}
class UMovieSceneSequenceTickManager** UMovieSceneSequencePlayer::M_PtrGetTickManager() {
	return reinterpret_cast<class UMovieSceneSequenceTickManager**>((byte*)this + 1112);
}
void UMovieSceneSequencePlayer::M_SetTickManager(const class UMovieSceneSequenceTickManager*& value) {
	Write((byte*)this + 1112, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UMovieSceneSequencePlayer::ChangePlaybackDirection() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection");

	struct UMovieSceneSequencePlayer_ChangePlaybackDirection_Params {
	};
	UMovieSceneSequencePlayer_ChangePlaybackDirection_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ObjectBinding	Type: struct FMovieSceneObjectBindingID	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TArray<class UObject*>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<class UObject*> UMovieSceneSequencePlayer::GetBoundObjects(struct FMovieSceneObjectBindingID ObjectBinding) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects");

	struct UMovieSceneSequencePlayer_GetBoundObjects_Params {
		struct FMovieSceneObjectBindingID ObjectBinding;			//Offset: 0 | ElementSize: 24
		TArray<class UObject*> ReturnValue;			//Offset: 24 | ElementSize: 16
	};
	UMovieSceneSequencePlayer_GetBoundObjects_Params params;
	params.ObjectBinding = ObjectBinding;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FQualifiedFrameTime	Flags: Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetCurrentTime()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime");

	struct UMovieSceneSequencePlayer_GetCurrentTime_Params {
		struct FQualifiedFrameTime ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UMovieSceneSequencePlayer_GetCurrentTime_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMovieSceneSequencePlayer::GetDisableCameraCuts() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts");

	struct UMovieSceneSequencePlayer_GetDisableCameraCuts_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMovieSceneSequencePlayer_GetDisableCameraCuts_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.GetDuration
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FQualifiedFrameTime	Flags: Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetDuration()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetDuration");

	struct UMovieSceneSequencePlayer_GetDuration_Params {
		struct FQualifiedFrameTime ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UMovieSceneSequencePlayer_GetDuration_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.GetEndTime
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FQualifiedFrameTime	Flags: Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetEndTime()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetEndTime");

	struct UMovieSceneSequencePlayer_GetEndTime_Params {
		struct FQualifiedFrameTime ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UMovieSceneSequencePlayer_GetEndTime_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UMovieSceneSequencePlayer::GetFrameDuration()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration");

	struct UMovieSceneSequencePlayer_GetFrameDuration_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UMovieSceneSequencePlayer_GetFrameDuration_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.GetFrameRate
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FFrameRate	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FFrameRate UMovieSceneSequencePlayer::GetFrameRate()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetFrameRate");

	struct UMovieSceneSequencePlayer_GetFrameRate_Params {
		struct FFrameRate ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UMovieSceneSequencePlayer_GetFrameRate_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TArray<struct FMovieSceneObjectBindingID>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<struct FMovieSceneObjectBindingID> UMovieSceneSequencePlayer::GetObjectBindings(class UObject* InObject) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings");

	struct UMovieSceneSequencePlayer_GetObjectBindings_Params {
		class UObject* InObject;			//Offset: 0 | ElementSize: 8
		TArray<struct FMovieSceneObjectBindingID> ReturnValue;			//Offset: 8 | ElementSize: 16
	};
	UMovieSceneSequencePlayer_GetObjectBindings_Params params;
	params.InObject = InObject;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UMovieSceneSequencePlayer::GetPlayRate()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlayRate");

	struct UMovieSceneSequencePlayer_GetPlayRate_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UMovieSceneSequencePlayer_GetPlayRate_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.GetSequence
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class UMovieSceneSequence*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UMovieSceneSequence* UMovieSceneSequencePlayer::GetSequence()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetSequence");

	struct UMovieSceneSequencePlayer_GetSequence_Params {
		class UMovieSceneSequence* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UMovieSceneSequencePlayer_GetSequence_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.GetStartTime
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FQualifiedFrameTime	Flags: Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetStartTime()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetStartTime");

	struct UMovieSceneSequencePlayer_GetStartTime_Params {
		struct FQualifiedFrameTime ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UMovieSceneSequencePlayer_GetStartTime_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UMovieSceneSequencePlayer::GoToEndAndStop() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop");

	struct UMovieSceneSequencePlayer_GoToEndAndStop_Params {
	};
	UMovieSceneSequencePlayer_GoToEndAndStop_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.IsPaused
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMovieSceneSequencePlayer::IsPaused()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.IsPaused");

	struct UMovieSceneSequencePlayer_IsPaused_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMovieSceneSequencePlayer_IsPaused_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.IsPlaying
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMovieSceneSequencePlayer::IsPlaying()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.IsPlaying");

	struct UMovieSceneSequencePlayer_IsPlaying_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMovieSceneSequencePlayer_IsPlaying_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.IsReversed
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMovieSceneSequencePlayer::IsReversed()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.IsReversed");

	struct UMovieSceneSequencePlayer_IsReversed_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMovieSceneSequencePlayer_IsReversed_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.JumpToFrame
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewPosition	Type: struct FFrameTime	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneSequencePlayer::JumpToFrame(struct FFrameTime NewPosition) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToFrame");

	struct UMovieSceneSequencePlayer_JumpToFrame_Params {
		struct FFrameTime NewPosition;			//Offset: 0 | ElementSize: 8
	};
	UMovieSceneSequencePlayer_JumpToFrame_Params params;
	params.NewPosition = NewPosition;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InLabel	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMovieSceneSequencePlayer::JumpToMarkedFrame(struct FString InLabel) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame");

	struct UMovieSceneSequencePlayer_JumpToMarkedFrame_Params {
		struct FString InLabel;			//Offset: 0 | ElementSize: 16
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UMovieSceneSequencePlayer_JumpToMarkedFrame_Params params;
	params.InLabel = InLabel;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: TimeInSeconds	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneSequencePlayer::JumpToSeconds(float TimeInSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds");

	struct UMovieSceneSequencePlayer_JumpToSeconds_Params {
		float TimeInSeconds;			//Offset: 0 | ElementSize: 4
	};
	UMovieSceneSequencePlayer_JumpToSeconds_Params params;
	params.TimeInSeconds = TimeInSeconds;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.Pause
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UMovieSceneSequencePlayer::Pause() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Pause");

	struct UMovieSceneSequencePlayer_Pause_Params {
	};
	UMovieSceneSequencePlayer_Pause_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.Play
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UMovieSceneSequencePlayer::Play() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Play");

	struct UMovieSceneSequencePlayer_Play_Params {
	};
	UMovieSceneSequencePlayer_Play_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.PlayLooping
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NumLoops	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneSequencePlayer::PlayLooping(int32_t NumLoops) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayLooping");

	struct UMovieSceneSequencePlayer_PlayLooping_Params {
		int32_t NumLoops;			//Offset: 0 | ElementSize: 4
	};
	UMovieSceneSequencePlayer_PlayLooping_Params params;
	params.NumLoops = NumLoops;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.PlayReverse
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UMovieSceneSequencePlayer::PlayReverse() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayReverse");

	struct UMovieSceneSequencePlayer_PlayReverse_Params {
	};
	UMovieSceneSequencePlayer_PlayReverse_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.PlayTo
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: PlaybackParams	Type: struct FMovieSceneSequencePlaybackParams	Flags: Parm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneSequencePlayer::PlayTo(struct FMovieSceneSequencePlaybackParams PlaybackParams) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayTo");

	struct UMovieSceneSequencePlayer_PlayTo_Params {
		struct FMovieSceneSequencePlaybackParams PlaybackParams;			//Offset: 0 | ElementSize: 40
	};
	UMovieSceneSequencePlayer_PlayTo_Params params;
	params.PlaybackParams = PlaybackParams;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.PlayToFrame
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewPosition	Type: struct FFrameTime	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneSequencePlayer::PlayToFrame(struct FFrameTime NewPosition) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayToFrame");

	struct UMovieSceneSequencePlayer_PlayToFrame_Params {
		struct FFrameTime NewPosition;			//Offset: 0 | ElementSize: 8
	};
	UMovieSceneSequencePlayer_PlayToFrame_Params params;
	params.NewPosition = NewPosition;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InLabel	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMovieSceneSequencePlayer::PlayToMarkedFrame(struct FString InLabel) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame");

	struct UMovieSceneSequencePlayer_PlayToMarkedFrame_Params {
		struct FString InLabel;			//Offset: 0 | ElementSize: 16
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UMovieSceneSequencePlayer_PlayToMarkedFrame_Params params;
	params.InLabel = InLabel;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: TimeInSeconds	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneSequencePlayer::PlayToSeconds(float TimeInSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds");

	struct UMovieSceneSequencePlayer_PlayToSeconds_Params {
		float TimeInSeconds;			//Offset: 0 | ElementSize: 4
	};
	UMovieSceneSequencePlayer_PlayToSeconds_Params params;
	params.TimeInSeconds = TimeInSeconds;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.RestoreState
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UMovieSceneSequencePlayer::RestoreState() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.RestoreState");

	struct UMovieSceneSequencePlayer_RestoreState_Params {
	};
	UMovieSceneSequencePlayer_RestoreState_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent
// Flags: Final, Net, NetReliable, Native, Event, NetMulticast, Private
// Params:
// Name: Method	Type: EUpdatePositionMethod	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: RelevantTime	Type: struct FFrameTime	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneSequencePlayer::RPC_ExplicitServerUpdateEvent(EUpdatePositionMethod Method, struct FFrameTime RelevantTime) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent");

	struct UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Params {
		EUpdatePositionMethod Method;			//Offset: 0 | ElementSize: 1
		struct FFrameTime RelevantTime;			//Offset: 4 | ElementSize: 8
	};
	UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Params params;
	params.Method = Method;
	params.RelevantTime = RelevantTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent
// Flags: Final, Net, NetReliable, Native, Event, NetMulticast, Private
// Params:
// Name: StoppedTime	Type: struct FFrameTime	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneSequencePlayer::RPC_OnStopEvent(struct FFrameTime StoppedTime) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent");

	struct UMovieSceneSequencePlayer_RPC_OnStopEvent_Params {
		struct FFrameTime StoppedTime;			//Offset: 0 | ElementSize: 8
	};
	UMovieSceneSequencePlayer_RPC_OnStopEvent_Params params;
	params.StoppedTime = StoppedTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.Scrub
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UMovieSceneSequencePlayer::Scrub() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Scrub");

	struct UMovieSceneSequencePlayer_Scrub_Params {
	};
	UMovieSceneSequencePlayer_Scrub_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewPosition	Type: struct FFrameTime	Flags: Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneSequencePlayer::ScrubToFrame(struct FFrameTime NewPosition) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame");

	struct UMovieSceneSequencePlayer_ScrubToFrame_Params {
		struct FFrameTime NewPosition;			//Offset: 0 | ElementSize: 8
	};
	UMovieSceneSequencePlayer_ScrubToFrame_Params params;
	params.NewPosition = NewPosition;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InLabel	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMovieSceneSequencePlayer::ScrubToMarkedFrame(struct FString InLabel) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame");

	struct UMovieSceneSequencePlayer_ScrubToMarkedFrame_Params {
		struct FString InLabel;			//Offset: 0 | ElementSize: 16
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UMovieSceneSequencePlayer_ScrubToMarkedFrame_Params params;
	params.InLabel = InLabel;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: TimeInSeconds	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneSequencePlayer::ScrubToSeconds(float TimeInSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds");

	struct UMovieSceneSequencePlayer_ScrubToSeconds_Params {
		float TimeInSeconds;			//Offset: 0 | ElementSize: 4
	};
	UMovieSceneSequencePlayer_ScrubToSeconds_Params params;
	params.TimeInSeconds = TimeInSeconds;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bInDisableCameraCuts	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneSequencePlayer::SetDisableCameraCuts(bool bInDisableCameraCuts) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts");

	struct UMovieSceneSequencePlayer_SetDisableCameraCuts_Params {
		bool bInDisableCameraCuts;			//Offset: 0 | ElementSize: 1
	};
	UMovieSceneSequencePlayer_SetDisableCameraCuts_Params params;
	params.bInDisableCameraCuts = bInDisableCameraCuts;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.SetFrameRange
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: StartFrame	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Duration	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SubFrames	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneSequencePlayer::SetFrameRange(int32_t StartFrame, int32_t Duration, float SubFrames) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetFrameRange");

	struct UMovieSceneSequencePlayer_SetFrameRange_Params {
		int32_t StartFrame;			//Offset: 0 | ElementSize: 4
		int32_t Duration;			//Offset: 4 | ElementSize: 4
		float SubFrames;			//Offset: 8 | ElementSize: 4
	};
	UMovieSceneSequencePlayer_SetFrameRange_Params params;
	params.StartFrame = StartFrame;
	params.Duration = Duration;
	params.SubFrames = SubFrames;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.SetFrameRate
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: FrameRate	Type: struct FFrameRate	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneSequencePlayer::SetFrameRate(struct FFrameRate FrameRate) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetFrameRate");

	struct UMovieSceneSequencePlayer_SetFrameRate_Params {
		struct FFrameRate FrameRate;			//Offset: 0 | ElementSize: 8
	};
	UMovieSceneSequencePlayer_SetFrameRate_Params params;
	params.FrameRate = FrameRate;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: PlaybackParams	Type: struct FMovieSceneSequencePlaybackParams	Flags: Parm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneSequencePlayer::SetPlaybackPosition(struct FMovieSceneSequencePlaybackParams PlaybackParams) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition");

	struct UMovieSceneSequencePlayer_SetPlaybackPosition_Params {
		struct FMovieSceneSequencePlaybackParams PlaybackParams;			//Offset: 0 | ElementSize: 40
	};
	UMovieSceneSequencePlayer_SetPlaybackPosition_Params params;
	params.PlaybackParams = PlaybackParams;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: PlayRate	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneSequencePlayer::SetPlayRate(float PlayRate) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetPlayRate");

	struct UMovieSceneSequencePlayer_SetPlayRate_Params {
		float PlayRate;			//Offset: 0 | ElementSize: 4
	};
	UMovieSceneSequencePlayer_SetPlayRate_Params params;
	params.PlayRate = PlayRate;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.SetTimeRange
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: StartTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Duration	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneSequencePlayer::SetTimeRange(float StartTime, float Duration) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetTimeRange");

	struct UMovieSceneSequencePlayer_SetTimeRange_Params {
		float StartTime;			//Offset: 0 | ElementSize: 4
		float Duration;			//Offset: 4 | ElementSize: 4
	};
	UMovieSceneSequencePlayer_SetTimeRange_Params params;
	params.StartTime = StartTime;
	params.Duration = Duration;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.Stop
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UMovieSceneSequencePlayer::Stop() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Stop");

	struct UMovieSceneSequencePlayer_Stop_Params {
	};
	UMovieSceneSequencePlayer_Stop_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UMovieSceneSequencePlayer::StopAtCurrentTime() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime");

	struct UMovieSceneSequencePlayer_StopAtCurrentTime_Params {
	};
	UMovieSceneSequencePlayer_StopAtCurrentTime_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}