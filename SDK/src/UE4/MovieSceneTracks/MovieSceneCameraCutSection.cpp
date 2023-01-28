#include "../SDK.h"
#include "MovieSceneCameraCutSection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of bLockPreviousCamera
// Declaration: bool bLockPreviousCamera
bool UMovieSceneCameraCutSection::M_GetbLockPreviousCamera() const {
	return Read<bool>((byte*)this + 240);
}
bool* UMovieSceneCameraCutSection::M_PtrGetbLockPreviousCamera() {
	return reinterpret_cast<bool*>((byte*)this + 240);
}
void UMovieSceneCameraCutSection::M_SetbLockPreviousCamera(const bool& value) {
	Write((byte*)this + 240, value);
}
// Member Getter and Setter of CameraGuid
// Declaration: struct FGuid CameraGuid
struct FGuid UMovieSceneCameraCutSection::M_GetCameraGuid() const {
	return Read<struct FGuid>((byte*)this + 244);
}
struct FGuid* UMovieSceneCameraCutSection::M_PtrGetCameraGuid() {
	return reinterpret_cast<struct FGuid*>((byte*)this + 244);
}
void UMovieSceneCameraCutSection::M_SetCameraGuid(const struct FGuid& value) {
	Write((byte*)this + 244, value);
}
// Member Getter and Setter of CameraBindingID
// Declaration: struct FMovieSceneObjectBindingID CameraBindingID
struct FMovieSceneObjectBindingID UMovieSceneCameraCutSection::M_GetCameraBindingID() const {
	return Read<struct FMovieSceneObjectBindingID>((byte*)this + 260);
}
struct FMovieSceneObjectBindingID* UMovieSceneCameraCutSection::M_PtrGetCameraBindingID() {
	return reinterpret_cast<struct FMovieSceneObjectBindingID*>((byte*)this + 260);
}
void UMovieSceneCameraCutSection::M_SetCameraBindingID(const struct FMovieSceneObjectBindingID& value) {
	Write((byte*)this + 260, value);
}
// Member Getter and Setter of InitialCameraCutTransform
// Declaration: struct FTransform InitialCameraCutTransform
struct FTransform UMovieSceneCameraCutSection::M_GetInitialCameraCutTransform() const {
	return Read<struct FTransform>((byte*)this + 288);
}
struct FTransform* UMovieSceneCameraCutSection::M_PtrGetInitialCameraCutTransform() {
	return reinterpret_cast<struct FTransform*>((byte*)this + 288);
}
void UMovieSceneCameraCutSection::M_SetInitialCameraCutTransform(const struct FTransform& value) {
	Write((byte*)this + 288, value);
}
// Member Getter and Setter of bHasInitialCameraCutTransform
// Declaration: bool bHasInitialCameraCutTransform
bool UMovieSceneCameraCutSection::M_GetbHasInitialCameraCutTransform() const {
	return Read<bool>((byte*)this + 336);
}
bool* UMovieSceneCameraCutSection::M_PtrGetbHasInitialCameraCutTransform() {
	return reinterpret_cast<bool*>((byte*)this + 336);
}
void UMovieSceneCameraCutSection::M_SetbHasInitialCameraCutTransform(const bool& value) {
	Write((byte*)this + 336, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FMovieSceneObjectBindingID	Flags: ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FMovieSceneObjectBindingID UMovieSceneCameraCutSection::GetCameraBindingID()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID");

	struct UMovieSceneCameraCutSection_GetCameraBindingID_Params {
		struct FMovieSceneObjectBindingID ReturnValue;			//Offset: 0 | ElementSize: 24
	};
	UMovieSceneCameraCutSection_GetCameraBindingID_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: InCameraBindingID	Type: struct FMovieSceneObjectBindingID	Flags: ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneCameraCutSection::SetCameraBindingID(const struct FMovieSceneObjectBindingID& InCameraBindingID) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID");

	struct UMovieSceneCameraCutSection_SetCameraBindingID_Params {
		struct FMovieSceneObjectBindingID InCameraBindingID;			//Offset: 0 | ElementSize: 24
	};
	UMovieSceneCameraCutSection_SetCameraBindingID_Params params;
	params.InCameraBindingID = InCameraBindingID;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}