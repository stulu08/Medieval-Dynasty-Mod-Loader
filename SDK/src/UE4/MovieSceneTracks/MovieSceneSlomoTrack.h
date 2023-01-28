#pragma once
#include "Structs.h"
#include "MovieSceneTracks/MovieSceneFloatTrack.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneSlomoTrack
// Super: Class MovieSceneTracks.MovieSceneFloatTrack
// Size: 200
// Size inherited: 192
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSlomoTrack");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};