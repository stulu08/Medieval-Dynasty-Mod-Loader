#pragma once
#include "Structs.h"
#include "MovieSceneTracks/MovieScenePropertyTrack.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneActorReferenceTrack
// Super: Class MovieSceneTracks.MovieScenePropertyTrack
// Size: 200
// Size inherited: 192
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneActorReferenceTrack");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};