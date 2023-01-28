#pragma once
#include "Structs.h"
#include "MovieSceneTracks/MovieSceneEventSystem.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieScenePreSpawnEventSystem
// Super: Class MovieSceneTracks.MovieSceneEventSystem
// Size: 144
// Size inherited: 144
/////////////////////////////////////////////
namespace UE4 {
class UMovieScenePreSpawnEventSystem : public UMovieSceneEventSystem {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePreSpawnEventSystem");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};