#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSection.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneCameraAnimSection
// Super: Class MovieScene.MovieSceneSection
// Size: 296
// Size inherited: 232
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneCameraAnimSection : public UMovieSceneSection {
public:
#pragma region Members
	//struct FMovieSceneCameraAnimSectionData	AnimData;		//Offset: 232	Size: 32	Flags: Edit, NoDestructor, NativeAccessSpecifierPublic
	struct FMovieSceneCameraAnimSectionData M_GetAnimData() const;
	struct FMovieSceneCameraAnimSectionData* M_PtrGetAnimData();
	void M_SetAnimData(const struct FMovieSceneCameraAnimSectionData& value);

	//class UCameraAnim*	CameraAnim;		//Offset: 264	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class UCameraAnim* M_GetCameraAnim() const;
	class UCameraAnim** M_PtrGetCameraAnim();
	void M_SetCameraAnim(const class UCameraAnim*& value);

	//float	PlayRate;		//Offset: 272	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	float M_GetPlayRate() const;
	float* M_PtrGetPlayRate();
	void M_SetPlayRate(const float& value);

	//float	PlayScale;		//Offset: 276	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	float M_GetPlayScale() const;
	float* M_PtrGetPlayScale();
	void M_SetPlayScale(const float& value);

	//float	BlendInTime;		//Offset: 280	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	float M_GetBlendInTime() const;
	float* M_PtrGetBlendInTime();
	void M_SetBlendInTime(const float& value);

	//float	BlendOutTime;		//Offset: 284	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	float M_GetBlendOutTime() const;
	float* M_PtrGetBlendOutTime();
	void M_SetBlendOutTime(const float& value);

	//bool	bLooping;		//Offset: 288	Size: 1	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	bool M_GetbLooping() const;
	bool* M_PtrGetbLooping();
	void M_SetbLooping(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraAnimSection");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};