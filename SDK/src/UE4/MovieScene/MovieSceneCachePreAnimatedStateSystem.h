#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneEntityInstantiatorSystem.h"
/////////////////////////////////////////////
// Class MovieScene.MovieSceneCachePreAnimatedStateSystem
// Super: Class MovieScene.MovieSceneEntityInstantiatorSystem
// Size: 96
// Size inherited: 64
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneCachePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneCachePreAnimatedStateSystem");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};