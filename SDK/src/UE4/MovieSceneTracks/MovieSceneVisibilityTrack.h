#pragma once
#include "Structs.h"
#include "MovieSceneTracks/MovieSceneBoolTrack.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneVisibilityTrack
// Super: Class MovieSceneTracks.MovieSceneBoolTrack
// Size: 200
// Size inherited: 200
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVisibilityTrack");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};