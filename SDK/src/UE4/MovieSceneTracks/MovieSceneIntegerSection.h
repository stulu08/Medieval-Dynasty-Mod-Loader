#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSection.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneIntegerSection
// Super: Class MovieScene.MovieSceneSection
// Size: 384
// Size inherited: 232
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneIntegerSection : public UMovieSceneSection {
public:
#pragma region Members
	//struct FMovieSceneIntegerChannel	IntegerCurve;		//Offset: 240	Size: 144	Flags: NativeAccessSpecifierPrivate
	struct FMovieSceneIntegerChannel M_GetIntegerCurve() const;
	struct FMovieSceneIntegerChannel* M_PtrGetIntegerCurve();
	void M_SetIntegerCurve(const struct FMovieSceneIntegerChannel& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneIntegerSection");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};