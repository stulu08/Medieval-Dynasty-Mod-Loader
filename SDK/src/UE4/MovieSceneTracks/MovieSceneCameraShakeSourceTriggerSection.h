#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSection.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSection
// Super: Class MovieScene.MovieSceneSection
// Size: 368
// Size inherited: 232
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneCameraShakeSourceTriggerSection : public UMovieSceneSection {
public:
#pragma region Members
	//struct FMovieSceneCameraShakeSourceTriggerChannel	Channel;		//Offset: 232	Size: 136	Flags: NativeAccessSpecifierPrivate
	struct FMovieSceneCameraShakeSourceTriggerChannel M_GetChannel() const;
	struct FMovieSceneCameraShakeSourceTriggerChannel* M_PtrGetChannel();
	void M_SetChannel(const struct FMovieSceneCameraShakeSourceTriggerChannel& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSection");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};