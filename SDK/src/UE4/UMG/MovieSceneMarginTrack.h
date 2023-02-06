#pragma once
#include "Structs.h"
#include "MovieSceneTracks/MovieScenePropertyTrack.h"
/////////////////////////////////////////////
// Class UMG.MovieSceneMarginTrack
// Super: Class MovieSceneTracks.MovieScenePropertyTrack
// Size: 192
// Size inherited: 192
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.MovieSceneMarginTrack");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};