#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSection.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneByteSection
// Super: Class MovieScene.MovieSceneSection
// Size: 392
// Size inherited: 232
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneByteSection : public UMovieSceneSection {
public:
#pragma region Members
	//struct FMovieSceneByteChannel	ByteCurve;		//Offset: 240	Size: 152	Flags: NativeAccessSpecifierPublic
	struct FMovieSceneByteChannel M_GetByteCurve() const;
	struct FMovieSceneByteChannel* M_PtrGetByteCurve();
	void M_SetByteCurve(const struct FMovieSceneByteChannel& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneByteSection");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};