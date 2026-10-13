#pragma once
#include "Structs.h"
#include "Engine/SceneComponent.h"
/////////////////////////////////////////////
// Class Engine.SpringArmComponent
// Super: Class Engine.SceneComponent
// Size: 640
// Size inherited: 512
/////////////////////////////////////////////
namespace UE4 {
class USpringArmComponent : public USceneComponent {
public:
#pragma region Members
	//float	TargetArmLength;		//Offset: 504	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetTargetArmLength() const;
	float* M_PtrGetTargetArmLength();
	void M_SetTargetArmLength(const float& value);

	//struct FVector	SocketOffset;		//Offset: 508	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector M_GetSocketOffset() const;
	struct FVector* M_PtrGetSocketOffset();
	void M_SetSocketOffset(const struct FVector& value);

	//struct FVector	TargetOffset;		//Offset: 520	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector M_GetTargetOffset() const;
	struct FVector* M_PtrGetTargetOffset();
	void M_SetTargetOffset(const struct FVector& value);

	//float	ProbeSize;		//Offset: 532	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetProbeSize() const;
	float* M_PtrGetProbeSize();
	void M_SetProbeSize(const float& value);

	//TEnumAsByte<ECollisionChannel>	ProbeChannel;		//Offset: 536	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<ECollisionChannel> M_GetProbeChannel() const;
	TEnumAsByte<ECollisionChannel>* M_PtrGetProbeChannel();
	void M_SetProbeChannel(const TEnumAsByte<ECollisionChannel>& value);

	//unsigned char	bDoCollisionTest : 1;		//Offset: 540	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbDoCollisionTest() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbDoCollisionTest();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbDoCollisionTest(const unsigned char& value);

	//unsigned char	bUsePawnControlRotation : 1;		//Offset: 540	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUsePawnControlRotation() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUsePawnControlRotation();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUsePawnControlRotation(const unsigned char& value);

	//unsigned char	bInheritPitch : 1;		//Offset: 540	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbInheritPitch() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbInheritPitch();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbInheritPitch(const unsigned char& value);

	//unsigned char	bInheritYaw : 1;		//Offset: 540	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbInheritYaw() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbInheritYaw();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbInheritYaw(const unsigned char& value);

	//unsigned char	bInheritRoll : 1;		//Offset: 540	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbInheritRoll() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbInheritRoll();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbInheritRoll(const unsigned char& value);

	//unsigned char	bEnableCameraLag : 1;		//Offset: 540	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbEnableCameraLag() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbEnableCameraLag();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbEnableCameraLag(const unsigned char& value);

	//unsigned char	bEnableCameraRotationLag : 1;		//Offset: 540	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbEnableCameraRotationLag() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbEnableCameraRotationLag();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbEnableCameraRotationLag(const unsigned char& value);

	//unsigned char	bUseCameraLagSubstepping : 1;		//Offset: 540	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbUseCameraLagSubstepping() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbUseCameraLagSubstepping();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbUseCameraLagSubstepping(const unsigned char& value);

	//unsigned char	bDrawDebugLagMarkers : 1;		//Offset: 541	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbDrawDebugLagMarkers() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbDrawDebugLagMarkers();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbDrawDebugLagMarkers(const unsigned char& value);

	//float	CameraLagSpeed;		//Offset: 544	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetCameraLagSpeed() const;
	float* M_PtrGetCameraLagSpeed();
	void M_SetCameraLagSpeed(const float& value);

	//float	CameraRotationLagSpeed;		//Offset: 548	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetCameraRotationLagSpeed() const;
	float* M_PtrGetCameraRotationLagSpeed();
	void M_SetCameraRotationLagSpeed(const float& value);

	//float	CameraLagMaxTimeStep;		//Offset: 552	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetCameraLagMaxTimeStep() const;
	float* M_PtrGetCameraLagMaxTimeStep();
	void M_SetCameraLagMaxTimeStep(const float& value);

	//float	CameraLagMaxDistance;		//Offset: 556	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetCameraLagMaxDistance() const;
	float* M_PtrGetCameraLagMaxDistance();
	void M_SetCameraLagMaxDistance(const float& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.SpringArmComponent");
		return ptr;
	}

#pragma region Functions
	struct FRotator GetTargetRotation()/* const*/;

	struct FVector GetUnfixedCameraPosition()/* const*/;

	bool IsCollisionFixApplied()/* const*/;

#pragma endregion
};
};