#pragma once
#include "Structs.h"
#include "MovieScene/MovieSceneSection.h"
/////////////////////////////////////////////
// Class MovieSceneTracks.MovieSceneCameraCutSection
// Super: Class MovieScene.MovieSceneSection
// Size: 352
// Size inherited: 232
/////////////////////////////////////////////
namespace UE4 {
class UMovieSceneCameraCutSection : public UMovieSceneSection {
public:
#pragma region Members
	//bool	bLockPreviousCamera;		//Offset: 240	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbLockPreviousCamera() const;
	bool* M_PtrGetbLockPreviousCamera();
	void M_SetbLockPreviousCamera(const bool& value);

	//struct FGuid	CameraGuid;		//Offset: 244	Size: 16	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FGuid M_GetCameraGuid() const;
	struct FGuid* M_PtrGetCameraGuid();
	void M_SetCameraGuid(const struct FGuid& value);

	//struct FMovieSceneObjectBindingID	CameraBindingID;		//Offset: 260	Size: 24	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FMovieSceneObjectBindingID M_GetCameraBindingID() const;
	struct FMovieSceneObjectBindingID* M_PtrGetCameraBindingID();
	void M_SetCameraBindingID(const struct FMovieSceneObjectBindingID& value);

	//struct FTransform	InitialCameraCutTransform;		//Offset: 288	Size: 48	Flags: IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
	struct FTransform M_GetInitialCameraCutTransform() const;
	struct FTransform* M_PtrGetInitialCameraCutTransform();
	void M_SetInitialCameraCutTransform(const struct FTransform& value);

	//bool	bHasInitialCameraCutTransform;		//Offset: 336	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	bool M_GetbHasInitialCameraCutTransform() const;
	bool* M_PtrGetbHasInitialCameraCutTransform();
	void M_SetbHasInitialCameraCutTransform(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraCutSection");
		return ptr;
	}

#pragma region Functions
	struct FMovieSceneObjectBindingID GetCameraBindingID()/* const*/;

	void SetCameraBindingID(const struct FMovieSceneObjectBindingID& InCameraBindingID);

#pragma endregion
};
};