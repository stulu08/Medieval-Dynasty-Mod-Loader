#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneEntitySystem.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneLevelVisibilitySystem
// Super: Class MovieScene.MovieSceneEntitySystem
// Size: 424
// Size inherited: 64
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneLevelVisibilitySystem : public UMovieSceneEntitySystem {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneLevelVisibilitySystem");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};