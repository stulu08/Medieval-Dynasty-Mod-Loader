#pragma once
#include "Structs.h"
#include "MovieSceneTracks/MovieScenePropertySystem.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieScene3DTransformPropertySystem
// Super: Class MovieSceneTracks.MovieScenePropertySystem
// Size: 88
// Size inherited: 88
/////////////////////////////////////////////
namespace UE4 {
class UMovieScene3DTransformPropertySystem : public UMovieScenePropertySystem {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DTransformPropertySystem");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};