#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSection.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneCameraShakeSection
// Super: Class MovieScene.MovieSceneSection
// Size: 296
// Size inherited: 232
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneCameraShakeSection : public UMovieSceneSection {
public:
#pragma region Members
	//struct FMovieSceneCameraShakeSectionData	ShakeData;		//Offset: 232	Size: 32	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FMovieSceneCameraShakeSectionData M_GetShakeData() const;
	struct FMovieSceneCameraShakeSectionData* M_PtrGetShakeData();
	void M_SetShakeData(const struct FMovieSceneCameraShakeSectionData& value);

	//class UCameraShakeBase*	ShakeClass;		//Offset: 264	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UCameraShakeBase* M_GetShakeClass() const;
	class UCameraShakeBase** M_PtrGetShakeClass();
	void M_SetShakeClass(const class UCameraShakeBase*& value);

	//float	PlayScale;		//Offset: 272	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetPlayScale() const;
	float* M_PtrGetPlayScale();
	void M_SetPlayScale(const float& value);

	//ECameraShakePlaySpace	PlaySpace;		//Offset: 276	Size: 1	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	ECameraShakePlaySpace M_GetPlaySpace() const;
	ECameraShakePlaySpace* M_PtrGetPlaySpace();
	void M_SetPlaySpace(const ECameraShakePlaySpace& value);

	//struct FRotator	UserDefinedPlaySpace;		//Offset: 280	Size: 12	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FRotator M_GetUserDefinedPlaySpace() const;
	struct FRotator* M_PtrGetUserDefinedPlaySpace();
	void M_SetUserDefinedPlaySpace(const struct FRotator& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraShakeSection");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};