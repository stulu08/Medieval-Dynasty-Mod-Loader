#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneEntitySystem.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneTransformOriginSystem
// Super: Class MovieScene.MovieSceneEntitySystem
// Size: 120
// Size inherited: 64
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneTransformOriginSystem : public UMovieSceneEntitySystem {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneTransformOriginSystem");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};