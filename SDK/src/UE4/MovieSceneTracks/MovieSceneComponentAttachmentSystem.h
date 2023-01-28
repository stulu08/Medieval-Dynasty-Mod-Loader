#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneEntityInstantiatorSystem.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneComponentAttachmentSystem
// Super: Class MovieScene.MovieSceneEntityInstantiatorSystem
// Size: 448
// Size inherited: 64
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneComponentAttachmentSystem : public UMovieSceneEntityInstantiatorSystem {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneComponentAttachmentSystem");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};