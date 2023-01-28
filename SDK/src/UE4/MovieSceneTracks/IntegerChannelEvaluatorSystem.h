#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneEntitySystem.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.IntegerChannelEvaluatorSystem
// Super: Class MovieScene.MovieSceneEntitySystem
// Size: 64
// Size inherited: 64
/////////////////////////////////////////////
namespace UE4 {
class UIntegerChannelEvaluatorSystem : public UMovieSceneEntitySystem {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.IntegerChannelEvaluatorSystem");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};