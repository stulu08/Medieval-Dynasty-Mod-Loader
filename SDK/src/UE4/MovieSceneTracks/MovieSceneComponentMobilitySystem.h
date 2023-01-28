#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneEntityInstantiatorSystem.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneComponentMobilitySystem
// Super: Class MovieScene.MovieSceneEntityInstantiatorSystem
// Size: 544
// Size inherited: 64
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneComponentMobilitySystem : public UMovieSceneEntityInstantiatorSystem {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneComponentMobilitySystem");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};