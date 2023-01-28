#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneEntityInstantiatorSystem.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneInterrogatedPropertyInstantiatorSystem
// Super: Class MovieScene.MovieSceneEntityInstantiatorSystem
// Size: 488
// Size inherited: 64
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneInterrogatedPropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneInterrogatedPropertyInstantiatorSystem");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};