#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneEntityInstantiatorSystem.h"
/////////////////////////////////////////////
// Class MovieScene.MovieSceneRestorePreAnimatedStateSystem
// Super: Class MovieScene.MovieSceneEntityInstantiatorSystem
// Size: 80
// Size inherited: 64
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneRestorePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneRestorePreAnimatedStateSystem");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};