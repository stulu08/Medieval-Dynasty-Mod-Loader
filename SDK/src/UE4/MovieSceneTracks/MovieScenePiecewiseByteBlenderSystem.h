#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneBlenderSystem.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieScenePiecewiseByteBlenderSystem
// Super: Class MovieScene.MovieSceneBlenderSystem
// Size: 144
// Size inherited: 104
/////////////////////////////////////////////
namespace UE4 {
class UMovieScenePiecewiseByteBlenderSystem : public UMovieSceneBlenderSystem {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePiecewiseByteBlenderSystem");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};