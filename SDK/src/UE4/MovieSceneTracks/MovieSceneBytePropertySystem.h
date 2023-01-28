#pragma once
#include "Structs.h"
#include "MovieSceneTracks/MovieScenePropertySystem.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneBytePropertySystem
// Super: Class MovieSceneTracks.MovieScenePropertySystem
// Size: 88
// Size inherited: 88
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneBytePropertySystem : public UMovieScenePropertySystem {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneBytePropertySystem");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};