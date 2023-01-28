#pragma once
#include "Structs.h"
#include "CoreUObject/Interface.h"
/////////////////////////////////////////////
// Class MovieScene.MovieSceneCustomClockSource
// Super: Class CoreUObject.Interface
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneCustomClockSource : public UInterface {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneCustomClockSource");
		return ptr;
	}

#pragma region Functions
	struct FFrameTime OnRequestCurrentTime(const struct FQualifiedFrameTime& InCurrentTime, float InPlayRate);

	void OnStartPlaying(const struct FQualifiedFrameTime& InStartTime);

	void OnStopPlaying(const struct FQualifiedFrameTime& InStopTime);

	void OnTick(float DeltaSeconds, float InPlayRate);

#pragma endregion
};
};