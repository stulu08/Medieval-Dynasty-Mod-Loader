#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneEntityInstantiatorSystem.h"
/////////////////////////////////////////////
// Class MovieScene.MovieSceneMasterInstantiatorSystem
// Super: Class MovieScene.MovieSceneEntityInstantiatorSystem
// Size: 64
// Size inherited: 64
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneMasterInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneMasterInstantiatorSystem");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};