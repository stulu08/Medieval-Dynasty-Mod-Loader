#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneEntitySystem.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.FloatChannelEvaluatorSystem
// Super: Class MovieScene.MovieSceneEntitySystem
// Size: 64
// Size inherited: 64
/////////////////////////////////////////////
namespace UE4 {
class UFloatChannelEvaluatorSystem : public UMovieSceneEntitySystem {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.FloatChannelEvaluatorSystem");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};