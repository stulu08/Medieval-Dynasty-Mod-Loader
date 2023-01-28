#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSection.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneEventSection
// Super: Class MovieScene.MovieSceneSection
// Size: 488
// Size inherited: 232
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneEventSection : public UMovieSceneSection {
public:
#pragma region Members
	//struct FNameCurve	Events;		//Offset: 232	Size: 120	Flags: Deprecated, NativeAccessSpecifierPrivate
	struct FNameCurve M_GetEvents() const;
	struct FNameCurve* M_PtrGetEvents();
	void M_SetEvents(const struct FNameCurve& value);

	//struct FMovieSceneEventSectionData	EventData;		//Offset: 352	Size: 136	Flags: NativeAccessSpecifierPrivate
	struct FMovieSceneEventSectionData M_GetEventData() const;
	struct FMovieSceneEventSectionData* M_PtrGetEventData();
	void M_SetEventData(const struct FMovieSceneEventSectionData& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventSection");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};