#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneEntitySystem.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneMotionVectorSimulationSystem
// Super: Class MovieScene.MovieSceneEntitySystem
// Size: 152
// Size inherited: 64
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneMotionVectorSimulationSystem : public UMovieSceneEntitySystem {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneMotionVectorSimulationSystem");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};