#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneTrack.h"
/////////////////////////////////////////////
// Class MovieScene.MovieSceneNameableTrack
// Super: Class MovieScene.MovieSceneTrack
// Size: 144
// Size inherited: 144
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneNameableTrack : public UMovieSceneTrack {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneNameableTrack");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};