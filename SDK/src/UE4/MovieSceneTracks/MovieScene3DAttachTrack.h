#pragma once
#include "Structs.h"
#include "MovieSceneTracks/MovieScene3DConstraintTrack.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieScene3DAttachTrack
// Super: Class MovieSceneTracks.MovieScene3DConstraintTrack
// Size: 160
// Size inherited: 160
/////////////////////////////////////////////
namespace UE4 {
class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DAttachTrack");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};