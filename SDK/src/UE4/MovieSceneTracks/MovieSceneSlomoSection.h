#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSection.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneSlomoSection
// Super: Class MovieScene.MovieSceneSection
// Size: 392
// Size inherited: 232
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneSlomoSection : public UMovieSceneSection {
public:
#pragma region Members
	//struct FMovieSceneFloatChannel	FloatCurve;		//Offset: 232	Size: 160	Flags: NativeAccessSpecifierPublic
	struct FMovieSceneFloatChannel M_GetFloatCurve() const;
	struct FMovieSceneFloatChannel* M_PtrGetFloatCurve();
	void M_SetFloatCurve(const struct FMovieSceneFloatChannel& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSlomoSection");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};