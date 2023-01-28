#include "../SDK.h"
#include "MovieSceneCustomClockSource.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime
// Flags: Native, Public, HasOutParms
// Params:
// Name: InCurrentTime	Type: struct FQualifiedFrameTime	Flags: ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InPlayRate	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FFrameTime	Flags: Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FFrameTime UMovieSceneCustomClockSource::OnRequestCurrentTime(const struct FQualifiedFrameTime& InCurrentTime, float InPlayRate) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime");

	struct UMovieSceneCustomClockSource_OnRequestCurrentTime_Params {
		struct FQualifiedFrameTime InCurrentTime;			//Offset: 0 | ElementSize: 16
		float InPlayRate;			//Offset: 16 | ElementSize: 4
		struct FFrameTime ReturnValue;			//Offset: 20 | ElementSize: 8
	};
	UMovieSceneCustomClockSource_OnRequestCurrentTime_Params params;
	params.InCurrentTime = InCurrentTime;
	params.InPlayRate = InPlayRate;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneCustomClockSource.OnStartPlaying
// Flags: Native, Public, HasOutParms
// Params:
// Name: InStartTime	Type: struct FQualifiedFrameTime	Flags: ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneCustomClockSource::OnStartPlaying(const struct FQualifiedFrameTime& InStartTime) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneCustomClockSource.OnStartPlaying");

	struct UMovieSceneCustomClockSource_OnStartPlaying_Params {
		struct FQualifiedFrameTime InStartTime;			//Offset: 0 | ElementSize: 16
	};
	UMovieSceneCustomClockSource_OnStartPlaying_Params params;
	params.InStartTime = InStartTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneCustomClockSource.OnStopPlaying
// Flags: Native, Public, HasOutParms
// Params:
// Name: InStopTime	Type: struct FQualifiedFrameTime	Flags: ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneCustomClockSource::OnStopPlaying(const struct FQualifiedFrameTime& InStopTime) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneCustomClockSource.OnStopPlaying");

	struct UMovieSceneCustomClockSource_OnStopPlaying_Params {
		struct FQualifiedFrameTime InStopTime;			//Offset: 0 | ElementSize: 16
	};
	UMovieSceneCustomClockSource_OnStopPlaying_Params params;
	params.InStopTime = InStopTime;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneCustomClockSource.OnTick
// Flags: Native, Public
// Params:
// Name: DeltaSeconds	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InPlayRate	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneCustomClockSource::OnTick(float DeltaSeconds, float InPlayRate) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneCustomClockSource.OnTick");

	struct UMovieSceneCustomClockSource_OnTick_Params {
		float DeltaSeconds;			//Offset: 0 | ElementSize: 4
		float InPlayRate;			//Offset: 4 | ElementSize: 4
	};
	UMovieSceneCustomClockSource_OnTick_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.InPlayRate = InPlayRate;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}