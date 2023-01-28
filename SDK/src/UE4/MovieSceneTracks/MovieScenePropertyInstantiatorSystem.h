#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneEntityInstantiatorSystem.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieScenePropertyInstantiatorSystem
// Super: Class MovieScene.MovieSceneEntityInstantiatorSystem
// Size: 584
// Size inherited: 64
/////////////////////////////////////////////
namespace UE4 {
class UMovieScenePropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePropertyInstantiatorSystem");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};