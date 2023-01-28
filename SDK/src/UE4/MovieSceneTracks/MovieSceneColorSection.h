#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSection.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneColorSection
// Super: Class MovieScene.MovieSceneSection
// Size: 880
// Size inherited: 232
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneColorSection : public UMovieSceneSection {
public:
#pragma region Members
	//struct FMovieSceneFloatChannel	RedCurve;		//Offset: 240	Size: 160	Flags: NativeAccessSpecifierPrivate
	struct FMovieSceneFloatChannel M_GetRedCurve() const;
	struct FMovieSceneFloatChannel* M_PtrGetRedCurve();
	void M_SetRedCurve(const struct FMovieSceneFloatChannel& value);

	//struct FMovieSceneFloatChannel	GreenCurve;		//Offset: 400	Size: 160	Flags: NativeAccessSpecifierPrivate
	struct FMovieSceneFloatChannel M_GetGreenCurve() const;
	struct FMovieSceneFloatChannel* M_PtrGetGreenCurve();
	void M_SetGreenCurve(const struct FMovieSceneFloatChannel& value);

	//struct FMovieSceneFloatChannel	BlueCurve;		//Offset: 560	Size: 160	Flags: NativeAccessSpecifierPrivate
	struct FMovieSceneFloatChannel M_GetBlueCurve() const;
	struct FMovieSceneFloatChannel* M_PtrGetBlueCurve();
	void M_SetBlueCurve(const struct FMovieSceneFloatChannel& value);

	//struct FMovieSceneFloatChannel	AlphaCurve;		//Offset: 720	Size: 160	Flags: NativeAccessSpecifierPrivate
	struct FMovieSceneFloatChannel M_GetAlphaCurve() const;
	struct FMovieSceneFloatChannel* M_PtrGetAlphaCurve();
	void M_SetAlphaCurve(const struct FMovieSceneFloatChannel& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneColorSection");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};