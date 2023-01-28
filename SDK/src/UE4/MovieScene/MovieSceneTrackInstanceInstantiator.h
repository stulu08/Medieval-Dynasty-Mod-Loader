#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneEntityInstantiatorSystem.h"
/////////////////////////////////////////////
// Class MovieScene.MovieSceneTrackInstanceInstantiator
// Super: Class MovieScene.MovieSceneEntityInstantiatorSystem
// Size: 240
// Size inherited: 64
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneTrackInstanceInstantiator : public UMovieSceneEntityInstantiatorSystem {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneTrackInstanceInstantiator");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};