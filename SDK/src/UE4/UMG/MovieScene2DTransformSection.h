#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "MovieScene/MovieSceneSection.h"
/////////////////////////////////////////////
// Class UMG.MovieScene2DTransformSection
// Super: Class MovieScene.MovieSceneSection
// Size: 1368
// Size inherited: 232
/////////////////////////////////////////////
namespace UE4 {
class UMovieScene2DTransformSection : public UMovieSceneSection {
public:
#pragma region Members
	//struct FMovieScene2DTransformMask	TransformMask;		//Offset: 240	Size: 4	Flags: NoDestructor, NativeAccessSpecifierPublic
	struct FMovieScene2DTransformMask M_GetTransformMask() const;
	struct FMovieScene2DTransformMask* M_PtrGetTransformMask();
	void M_SetTransformMask(const struct FMovieScene2DTransformMask& value);

	//struct FMovieSceneFloatChannel	Translation[2];		//Offset: 248	Size: 160	Flags: NativeAccessSpecifierPublic
	struct FMovieSceneFloatChannel M_GetTranslation() const;
	struct FMovieSceneFloatChannel* M_PtrGetTranslation();
	void M_SetTranslation(const struct FMovieSceneFloatChannel& value);

	//struct FMovieSceneFloatChannel	Rotation;		//Offset: 568	Size: 160	Flags: NativeAccessSpecifierPublic
	struct FMovieSceneFloatChannel M_GetRotation() const;
	struct FMovieSceneFloatChannel* M_PtrGetRotation();
	void M_SetRotation(const struct FMovieSceneFloatChannel& value);

	//struct FMovieSceneFloatChannel	Scale[2];		//Offset: 728	Size: 160	Flags: NativeAccessSpecifierPublic
	struct FMovieSceneFloatChannel M_GetScale() const;
	struct FMovieSceneFloatChannel* M_PtrGetScale();
	void M_SetScale(const struct FMovieSceneFloatChannel& value);

	//struct FMovieSceneFloatChannel	Shear[2];		//Offset: 1048	Size: 160	Flags: NativeAccessSpecifierPublic
	struct FMovieSceneFloatChannel M_GetShear() const;
	struct FMovieSceneFloatChannel* M_PtrGetShear();
	void M_SetShear(const struct FMovieSceneFloatChannel& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.MovieScene2DTransformSection");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};