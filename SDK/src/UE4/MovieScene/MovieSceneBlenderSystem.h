#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneEntitySystem.h"
/////////////////////////////////////////////
// Class MovieScene.MovieSceneBlenderSystem
// Super: Class MovieScene.MovieSceneEntitySystem
// Size: 104
// Size inherited: 64
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneBlenderSystem : public UMovieSceneEntitySystem {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneBlenderSystem");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};