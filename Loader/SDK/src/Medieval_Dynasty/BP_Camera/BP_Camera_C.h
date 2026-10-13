#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_Camera.BP_Camera_C
// Super: Class Engine.Actor
// Size: 1940
// Size inherited: 544
/////////////////////////////////////////////
namespace UE4 {
class ABP_Camera_C : public AActor {
public:
#pragma region Members
	//class UCameraComponent*	FP_ActionCamera;		//Offset: 544	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class UCameraComponent* M_GetFP_ActionCamera() const;
	class UCameraComponent** M_PtrGetFP_ActionCamera();
	void M_SetFP_ActionCamera(const class UCameraComponent*& value);

	//struct FPostProcessSettings	PostProcess;		//Offset: 560	Size: 1376	Flags: Edit, BlueprintVisible, ExposeOnSpawn
	struct FPostProcessSettings M_GetPostProcess() const;
	struct FPostProcessSettings* M_PtrGetPostProcess();
	void M_SetPostProcess(const struct FPostProcessSettings& value);

	//float	FieldOfView;		//Offset: 1936	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
	float M_GetFieldOfView() const;
	float* M_PtrGetFieldOfView();
	void M_SetFieldOfView(const float& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Camera.BP_Camera_C");
		return ptr;
	}

#pragma region Functions
	void UserConstructionScript();

#pragma endregion
};
};