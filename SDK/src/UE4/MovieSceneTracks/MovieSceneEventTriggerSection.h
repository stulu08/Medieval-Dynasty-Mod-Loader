#pragma once
#include "Structs.h"
#include "MovieSceneTracks/MovieSceneEventSectionBase.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneEventTriggerSection
// Super: Class MovieSceneTracks.MovieSceneEventSectionBase
// Size: 376
// Size inherited: 232
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase {
public:
#pragma region Members
	//struct FMovieSceneEventChannel	EventChannel;		//Offset: 240	Size: 136	Flags: NativeAccessSpecifierPublic
	struct FMovieSceneEventChannel M_GetEventChannel() const;
	struct FMovieSceneEventChannel* M_PtrGetEventChannel();
	void M_SetEventChannel(const struct FMovieSceneEventChannel& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventTriggerSection");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};