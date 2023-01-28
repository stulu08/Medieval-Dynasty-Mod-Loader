#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSubSection.h"
/////////////////////////////////////////////
// Class MovieScene.TestMovieSceneSubSection
// Super: Class MovieScene.MovieSceneSubSection
// Size: 360
// Size inherited: 360
/////////////////////////////////////////////
namespace UE4 {
class UTestMovieSceneSubSection : public UMovieSceneSubSection {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.TestMovieSceneSubSection");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};