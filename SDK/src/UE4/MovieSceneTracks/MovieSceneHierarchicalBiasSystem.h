#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneEntityInstantiatorSystem.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneHierarchicalBiasSystem
// Super: Class MovieScene.MovieSceneEntityInstantiatorSystem
// Size: 64
// Size inherited: 64
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneHierarchicalBiasSystem : public UMovieSceneEntityInstantiatorSystem {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneHierarchicalBiasSystem");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};