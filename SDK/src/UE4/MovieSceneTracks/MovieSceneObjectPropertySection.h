#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSection.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneObjectPropertySection
// Super: Class MovieScene.MovieSceneSection
// Size: 424
// Size inherited: 232
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneObjectPropertySection : public UMovieSceneSection {
public:
#pragma region Members
	//struct FMovieSceneObjectPathChannel	ObjectChannel;		//Offset: 232	Size: 192	Flags: NativeAccessSpecifierPublic
	struct FMovieSceneObjectPathChannel M_GetObjectChannel() const;
	struct FMovieSceneObjectPathChannel* M_PtrGetObjectChannel();
	void M_SetObjectChannel(const struct FMovieSceneObjectPathChannel& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneObjectPropertySection");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};