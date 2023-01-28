#pragma once
#include "Structs.h"
#include "MovieSceneTracks/MovieScenePropertyTrack.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneFloatTrack
// Super: Class MovieSceneTracks.MovieScenePropertyTrack
// Size: 192
// Size inherited: 192
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneFloatTrack : public UMovieScenePropertyTrack {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFloatTrack");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};