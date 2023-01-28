#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneEntitySystem.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneEventSystem
// Super: Class MovieScene.MovieSceneEntitySystem
// Size: 144
// Size inherited: 64
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneEventSystem : public UMovieSceneEntitySystem {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventSystem");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};