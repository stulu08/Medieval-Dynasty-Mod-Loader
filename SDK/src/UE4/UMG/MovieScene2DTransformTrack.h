#pragma once
#include "Structs.h"
#include "MovieSceneTracks/MovieScenePropertyTrack.h"
/////////////////////////////////////////////
// Class UMG.MovieScene2DTransformTrack
// Super: Class MovieSceneTracks.MovieScenePropertyTrack
// Size: 192
// Size inherited: 192
/////////////////////////////////////////////
namespace UE4 {
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.MovieScene2DTransformTrack");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};