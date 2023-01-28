#pragma once
#include "Structs.h"
#include "MovieSceneTracks/MovieSceneFloatTrack.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneFadeTrack
// Super: Class MovieSceneTracks.MovieSceneFloatTrack
// Size: 200
// Size inherited: 192
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneFadeTrack : public UMovieSceneFloatTrack {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFadeTrack");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};