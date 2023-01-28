#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSection.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneStringSection
// Super: Class MovieScene.MovieSceneSection
// Size: 392
// Size inherited: 232
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneStringSection : public UMovieSceneSection {
public:
#pragma region Members
	//struct FMovieSceneStringChannel	StringCurve;		//Offset: 232	Size: 160	Flags: NativeAccessSpecifierPrivate
	struct FMovieSceneStringChannel M_GetStringCurve() const;
	struct FMovieSceneStringChannel* M_PtrGetStringCurve();
	void M_SetStringCurve(const struct FMovieSceneStringChannel& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneStringSection");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};