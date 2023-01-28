#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSection.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneEventSectionBase
// Super: Class MovieScene.MovieSceneSection
// Size: 232
// Size inherited: 232
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneEventSectionBase : public UMovieSceneSection {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventSectionBase");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};