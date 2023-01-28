#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneEntityInstantiatorSystem.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneHierarchicalEasingInstantiatorSystem
// Super: Class MovieScene.MovieSceneEntityInstantiatorSystem
// Size: 144
// Size inherited: 64
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneHierarchicalEasingInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneHierarchicalEasingInstantiatorSystem");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};