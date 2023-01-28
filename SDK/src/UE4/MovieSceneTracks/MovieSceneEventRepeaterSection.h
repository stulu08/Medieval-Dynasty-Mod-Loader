#pragma once
#include "Structs.h"
#include "MovieSceneTracks/MovieSceneEventSectionBase.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneEventRepeaterSection
// Super: Class MovieSceneTracks.MovieSceneEventSectionBase
// Size: 280
// Size inherited: 232
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase {
public:
#pragma region Members
	//struct FMovieSceneEvent	Event;		//Offset: 240	Size: 40	Flags: Edit, NativeAccessSpecifierPublic
	struct FMovieSceneEvent M_GetEvent() const;
	struct FMovieSceneEvent* M_PtrGetEvent();
	void M_SetEvent(const struct FMovieSceneEvent& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventRepeaterSection");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};