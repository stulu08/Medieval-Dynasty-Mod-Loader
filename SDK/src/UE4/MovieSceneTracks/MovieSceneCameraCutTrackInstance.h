#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneTrackInstance.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneCameraCutTrackInstance
// Super: Class MovieScene.MovieSceneTrackInstance
// Size: 184
// Size inherited: 80
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneCameraCutTrackInstance : public UMovieSceneTrackInstance {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraCutTrackInstance");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};