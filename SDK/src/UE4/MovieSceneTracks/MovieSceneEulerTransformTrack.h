#pragma once
#include "Structs.h"
#include "MovieSceneTracks/MovieScenePropertyTrack.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneEulerTransformTrack
// Super: Class MovieSceneTracks.MovieScenePropertyTrack
// Size: 192
// Size inherited: 192
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneEulerTransformTrack : public UMovieScenePropertyTrack {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEulerTransformTrack");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};