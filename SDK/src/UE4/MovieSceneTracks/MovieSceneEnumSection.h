#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSection.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneEnumSection
// Super: Class MovieScene.MovieSceneSection
// Size: 392
// Size inherited: 232
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneEnumSection : public UMovieSceneSection {
public:
#pragma region Members
	//struct FMovieSceneByteChannel	EnumCurve;		//Offset: 240	Size: 152	Flags: NativeAccessSpecifierPublic
	struct FMovieSceneByteChannel M_GetEnumCurve() const;
	struct FMovieSceneByteChannel* M_PtrGetEnumCurve();
	void M_SetEnumCurve(const struct FMovieSceneByteChannel& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEnumSection");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};