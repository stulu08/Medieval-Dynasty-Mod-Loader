#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSubTrack.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneCinematicShotTrack
// Super: Class MovieScene.MovieSceneSubTrack
// Size: 160
// Size inherited: 160
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCinematicShotTrack");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};