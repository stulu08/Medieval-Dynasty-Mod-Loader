#include "../SDK.h"
#include "BP_CameraManager_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame ABP_CameraManager_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 10256);
}
struct FPointerToUberGraphFrame* ABP_CameraManager_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 10256);
}
void ABP_CameraManager_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 10256, value);
}
// Member Getter and Setter of BodyLODs
// Declaration: TMap<class USkeletalMeshComponent*, int32_t> BodyLODs
TMap<class USkeletalMeshComponent*, int32_t> ABP_CameraManager_C::M_GetBodyLODs() const {
	return Read<TMap<class USkeletalMeshComponent*, int32_t>>((byte*)this + 10264);
}
TMap<class USkeletalMeshComponent*, int32_t>* ABP_CameraManager_C::M_PtrGetBodyLODs() {
	return reinterpret_cast<TMap<class USkeletalMeshComponent*, int32_t>*>((byte*)this + 10264);
}
void ABP_CameraManager_C::M_SetBodyLODs(const TMap<class USkeletalMeshComponent*, int32_t>& value) {
	Write((byte*)this + 10264, value);
}
// Member Getter and Setter of MotionVectorsCleared
// Declaration: bool MotionVectorsCleared
bool ABP_CameraManager_C::M_GetMotionVectorsCleared() const {
	return Read<bool>((byte*)this + 10344);
}
bool* ABP_CameraManager_C::M_PtrGetMotionVectorsCleared() {
	return reinterpret_cast<bool*>((byte*)this + 10344);
}
void ABP_CameraManager_C::M_SetMotionVectorsCleared(const bool& value) {
	Write((byte*)this + 10344, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BP_CameraManager.BP_CameraManager_C.ExecuteUbergraph_BP_CameraManager
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_CameraManager_C::ExecuteUbergraph_BP_CameraManager(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraManager.BP_CameraManager_C.ExecuteUbergraph_BP_CameraManager");

	struct ABP_CameraManager_C_ExecuteUbergraph_BP_CameraManager_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	ABP_CameraManager_C_ExecuteUbergraph_BP_CameraManager_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CameraManager.BP_CameraManager_C.OnPhotographySessionEnd
// Flags: BlueprintCosmetic, Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_CameraManager_C::OnPhotographySessionEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraManager.BP_CameraManager_C.OnPhotographySessionEnd");

	struct ABP_CameraManager_C_OnPhotographySessionEnd_Params {
	};
	ABP_CameraManager_C_OnPhotographySessionEnd_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CameraManager.BP_CameraManager_C.OnPhotographySessionStart
// Flags: BlueprintCosmetic, Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ABP_CameraManager_C::OnPhotographySessionStart() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraManager.BP_CameraManager_C.OnPhotographySessionStart");

	struct ABP_CameraManager_C_OnPhotographySessionStart_Params {
	};
	ABP_CameraManager_C_OnPhotographySessionStart_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_CameraManager.BP_CameraManager_C.PhotographyCameraModify
// Flags: BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NewCameraLocation	Type: struct FVector	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PreviousCameraLocation	Type: struct FVector	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OriginalCameraLocation	Type: struct FVector	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ResultCameraLocation	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void ABP_CameraManager_C::PhotographyCameraModify(struct FVector NewCameraLocation, struct FVector PreviousCameraLocation, struct FVector OriginalCameraLocation, struct FVector* ResultCameraLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraManager.BP_CameraManager_C.PhotographyCameraModify");

	struct ABP_CameraManager_C_PhotographyCameraModify_Params {
		struct FVector NewCameraLocation;			//Offset: 0 | ElementSize: 12
		struct FVector PreviousCameraLocation;			//Offset: 12 | ElementSize: 12
		struct FVector OriginalCameraLocation;			//Offset: 24 | ElementSize: 12
		struct FVector ResultCameraLocation;			//Offset: 36 | ElementSize: 12
	};
	ABP_CameraManager_C_PhotographyCameraModify_Params params;
	params.NewCameraLocation = NewCameraLocation;
	params.PreviousCameraLocation = PreviousCameraLocation;
	params.OriginalCameraLocation = OriginalCameraLocation;

	UObject::ProcessEvent(fn, &params);
	if (ResultCameraLocation != nullptr)
		*ResultCameraLocation = params.ResultCameraLocation;
}

#pragma endregion
}