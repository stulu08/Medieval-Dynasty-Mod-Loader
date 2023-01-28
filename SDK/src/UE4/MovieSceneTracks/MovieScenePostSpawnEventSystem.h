#pragma once
#include "Structs.h"
#include "MovieSceneTracks/MovieSceneEventSystem.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieScenePostSpawnEventSystem
// Super: Class MovieSceneTracks.MovieSceneEventSystem
// Size: 144
// Size inherited: 144
/////////////////////////////////////////////
namespace UE4 {
class UMovieScenePostSpawnEventSystem : public UMovieSceneEventSystem {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePostSpawnEventSystem");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};