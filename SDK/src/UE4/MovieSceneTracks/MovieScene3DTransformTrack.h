#pragma once
#include "Structs.h"
#include "MovieSceneTracks/MovieScenePropertyTrack.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieScene3DTransformTrack
// Super: Class MovieSceneTracks.MovieScenePropertyTrack
// Size: 192
// Size inherited: 192
/////////////////////////////////////////////
namespace UE4 {
class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DTransformTrack");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};