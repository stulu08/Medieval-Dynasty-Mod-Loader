#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "MovieScene/MovieSceneSection.h"
/////////////////////////////////////////////
// Class UMG.MovieSceneMarginSection
// Super: Class MovieScene.MovieSceneSection
// Size: 880
// Size inherited: 232
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneMarginSection : public UMovieSceneSection {
public:
#pragma region Members
	//struct FMovieSceneFloatChannel	TopCurve;		//Offset: 240	Size: 160	Flags: NativeAccessSpecifierPublic
	struct FMovieSceneFloatChannel M_GetTopCurve() const;
	struct FMovieSceneFloatChannel* M_PtrGetTopCurve();
	void M_SetTopCurve(const struct FMovieSceneFloatChannel& value);

	//struct FMovieSceneFloatChannel	LeftCurve;		//Offset: 400	Size: 160	Flags: NativeAccessSpecifierPublic
	struct FMovieSceneFloatChannel M_GetLeftCurve() const;
	struct FMovieSceneFloatChannel* M_PtrGetLeftCurve();
	void M_SetLeftCurve(const struct FMovieSceneFloatChannel& value);

	//struct FMovieSceneFloatChannel	RightCurve;		//Offset: 560	Size: 160	Flags: NativeAccessSpecifierPublic
	struct FMovieSceneFloatChannel M_GetRightCurve() const;
	struct FMovieSceneFloatChannel* M_PtrGetRightCurve();
	void M_SetRightCurve(const struct FMovieSceneFloatChannel& value);

	//struct FMovieSceneFloatChannel	BottomCurve;		//Offset: 720	Size: 160	Flags: NativeAccessSpecifierPublic
	struct FMovieSceneFloatChannel M_GetBottomCurve() const;
	struct FMovieSceneFloatChannel* M_PtrGetBottomCurve();
	void M_SetBottomCurve(const struct FMovieSceneFloatChannel& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.MovieSceneMarginSection");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};