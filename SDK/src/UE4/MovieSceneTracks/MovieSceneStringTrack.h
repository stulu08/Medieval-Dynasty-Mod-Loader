#pragma once
#include "Structs.h"
#include "MovieSceneTracks/MovieScenePropertyTrack.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneStringTrack
// Super: Class MovieSceneTracks.MovieScenePropertyTrack
// Size: 200
// Size inherited: 192
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneStringTrack : public UMovieScenePropertyTrack {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneStringTrack");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};