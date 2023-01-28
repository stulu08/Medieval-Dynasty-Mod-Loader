#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSection.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieScene3DTransformSection
// Super: Class MovieScene.MovieSceneSection
// Size: 1856
// Size inherited: 232
/////////////////////////////////////////////
namespace UE4 {
class UMovieScene3DTransformSection : public UMovieSceneSection {
public:
#pragma region Members
	//struct FMovieSceneTransformMask	TransformMask;		//Offset: 240	Size: 4	Flags: NoDestructor, NativeAccessSpecifierPrivate
	struct FMovieSceneTransformMask M_GetTransformMask() const;
	struct FMovieSceneTransformMask* M_PtrGetTransformMask();
	void M_SetTransformMask(const struct FMovieSceneTransformMask& value);

	//struct FMovieSceneFloatChannel	Translation[3];		//Offset: 248	Size: 160	Flags: NativeAccessSpecifierPrivate
	struct FMovieSceneFloatChannel M_GetTranslation() const;
	struct FMovieSceneFloatChannel* M_PtrGetTranslation();
	void M_SetTranslation(const struct FMovieSceneFloatChannel& value);

	//struct FMovieSceneFloatChannel	Rotation[3];		//Offset: 728	Size: 160	Flags: NativeAccessSpecifierPrivate
	struct FMovieSceneFloatChannel M_GetRotation() const;
	struct FMovieSceneFloatChannel* M_PtrGetRotation();
	void M_SetRotation(const struct FMovieSceneFloatChannel& value);

	//struct FMovieSceneFloatChannel	Scale[3];		//Offset: 1208	Size: 160	Flags: NativeAccessSpecifierPrivate
	struct FMovieSceneFloatChannel M_GetScale() const;
	struct FMovieSceneFloatChannel* M_PtrGetScale();
	void M_SetScale(const struct FMovieSceneFloatChannel& value);

	//struct FMovieSceneFloatChannel	ManualWeight;		//Offset: 1688	Size: 160	Flags: NativeAccessSpecifierPrivate
	struct FMovieSceneFloatChannel M_GetManualWeight() const;
	struct FMovieSceneFloatChannel* M_PtrGetManualWeight();
	void M_SetManualWeight(const struct FMovieSceneFloatChannel& value);

	//bool	bUseQuaternionInterpolation;		//Offset: 1848	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	bool M_GetbUseQuaternionInterpolation() const;
	bool* M_PtrGetbUseQuaternionInterpolation();
	void M_SetbUseQuaternionInterpolation(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DTransformSection");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};