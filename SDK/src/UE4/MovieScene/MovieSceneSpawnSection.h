#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneBoolSection.h"
/////////////////////////////////////////////
// Class MovieScene.MovieSceneSpawnSection
// Super: Class MovieScene.MovieSceneBoolSection
// Size: 392
// Size inherited: 384
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneSpawnSection : public UMovieSceneBoolSection {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSpawnSection");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};