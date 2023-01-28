#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneEntityInstantiatorSystem.h"
/////////////////////////////////////////////
// Class MovieScene.MovieSceneGenericBoundObjectInstantiator
// Super: Class MovieScene.MovieSceneEntityInstantiatorSystem
// Size: 64
// Size inherited: 64
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneGenericBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneGenericBoundObjectInstantiator");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};