#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneEntitySystem.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneDeferredComponentMovementSystem
// Super: Class MovieScene.MovieSceneEntitySystem
// Size: 88
// Size inherited: 64
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneDeferredComponentMovementSystem : public UMovieSceneEntitySystem {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneDeferredComponentMovementSystem");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};