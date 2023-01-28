#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSection.h"
/////////////////////////////////////////////
// Class MovieScene.TestMovieSceneSection
// Super: Class MovieScene.MovieSceneSection
// Size: 232
// Size inherited: 232
/////////////////////////////////////////////
namespace UE4 {
class UTestMovieSceneSection : public UMovieSceneSection {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieScene.TestMovieSceneSection");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};