#pragma once
#include "Structs.h"
#include "Engine/PlayerCameraManager.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_CameraManager.BP_CameraManager_C
// Super: Class Engine.PlayerCameraManager
// Size: 10345
// Size inherited: 10256
/////////////////////////////////////////////
namespace UE4 {
class ABP_CameraManager_C : public APlayerCameraManager {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 10256	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//TMap<class USkeletalMeshComponent*, int32_t>	BodyLODs;		//Offset: 10264	Size: 80	Flags: Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
	TMap<class USkeletalMeshComponent*, int32_t> M_GetBodyLODs() const;
	TMap<class USkeletalMeshComponent*, int32_t>* M_PtrGetBodyLODs();
	void M_SetBodyLODs(const TMap<class USkeletalMeshComponent*, int32_t>& value);

	//bool	MotionVectorsCleared;		//Offset: 10344	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetMotionVectorsCleared() const;
	bool* M_PtrGetMotionVectorsCleared();
	void M_SetMotionVectorsCleared(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CameraManager.BP_CameraManager_C");
		return ptr;
	}

#pragma region Functions
	void ExecuteUbergraph_BP_CameraManager(int32_t EntryPoint);

	void OnPhotographySessionEnd();

	void OnPhotographySessionStart();

	void PhotographyCameraModify(struct FVector NewCameraLocation, struct FVector PreviousCameraLocation, struct FVector OriginalCameraLocation, struct FVector* ResultCameraLocation);

#pragma endregion
};
};