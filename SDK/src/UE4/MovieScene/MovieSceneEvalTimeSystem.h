#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneEntitySystem.h"
/////////////////////////////////////////////
// Class MovieScene.MovieSceneEvalTimeSystem
// Super: Class MovieScene.MovieSceneEntitySystem
// Size: 80
// Size inherited: 64
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneEvalTimeSystem : public UMovieSceneEntitySystem {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneEvalTimeSystem");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};