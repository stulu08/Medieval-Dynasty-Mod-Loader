#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneHookSection.h"
/////////////////////////////////////////////
// Class MovieScene.TestMovieSceneEvalHookSection
// Super: Class MovieScene.MovieSceneHookSection
// Size: 280
// Size inherited: 256
/////////////////////////////////////////////
namespace UE4 {
class UTestMovieSceneEvalHookSection : public UMovieSceneHookSection {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.TestMovieSceneEvalHookSection");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};