#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneBlenderSystem.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieScenePiecewiseBoolBlenderSystem
// Super: Class MovieScene.MovieSceneBlenderSystem
// Size: 144
// Size inherited: 104
/////////////////////////////////////////////
namespace UE4 {
class UMovieScenePiecewiseBoolBlenderSystem : public UMovieSceneBlenderSystem {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePiecewiseBoolBlenderSystem");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};