#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSection.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneFloatSection
// Super: Class MovieScene.MovieSceneSection
// Size: 400
// Size inherited: 232
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneFloatSection : public UMovieSceneSection {
public:
#pragma region Members
	//struct FMovieSceneFloatChannel	FloatCurve;		//Offset: 240	Size: 160	Flags: Protected, NativeAccessSpecifierProtected
	struct FMovieSceneFloatChannel M_GetFloatCurve() const;
	struct FMovieSceneFloatChannel* M_PtrGetFloatCurve();
	void M_SetFloatCurve(const struct FMovieSceneFloatChannel& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFloatSection");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};