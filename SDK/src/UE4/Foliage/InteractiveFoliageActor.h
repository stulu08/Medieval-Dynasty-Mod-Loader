#pragma once
#include "Structs.h"
#include "Engine/StaticMeshActor.h"
/////////////////////////////////////////////
// Class Foliage.InteractiveFoliageActor
// Super: Class Engine.StaticMeshActor
// Size: 656
// Size inherited: 560
/////////////////////////////////////////////
namespace UE4 {
class AInteractiveFoliageActor : public AStaticMeshActor {
public:
#pragma region Members
	//class UCapsuleComponent*	CapsuleComponent;		//Offset: 560	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class UCapsuleComponent* M_GetCapsuleComponent() const;
	class UCapsuleComponent** M_PtrGetCapsuleComponent();
	void M_SetCapsuleComponent(const class UCapsuleComponent*& value);

	//struct FVector	TouchingActorEntryPosition;		//Offset: 568	Size: 12	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FVector M_GetTouchingActorEntryPosition() const;
	struct FVector* M_PtrGetTouchingActorEntryPosition();
	void M_SetTouchingActorEntryPosition(const struct FVector& value);

	//struct FVector	FoliageVelocity;		//Offset: 580	Size: 12	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FVector M_GetFoliageVelocity() const;
	struct FVector* M_PtrGetFoliageVelocity();
	void M_SetFoliageVelocity(const struct FVector& value);

	//struct FVector	FoliageForce;		//Offset: 592	Size: 12	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FVector M_GetFoliageForce() const;
	struct FVector* M_PtrGetFoliageForce();
	void M_SetFoliageForce(const struct FVector& value);

	//struct FVector	FoliagePosition;		//Offset: 604	Size: 12	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FVector M_GetFoliagePosition() const;
	struct FVector* M_PtrGetFoliagePosition();
	void M_SetFoliagePosition(const struct FVector& value);

	//float	FoliageDamageImpulseScale;		//Offset: 616	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetFoliageDamageImpulseScale() const;
	float* M_PtrGetFoliageDamageImpulseScale();
	void M_SetFoliageDamageImpulseScale(const float& value);

	//float	FoliageTouchImpulseScale;		//Offset: 620	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetFoliageTouchImpulseScale() const;
	float* M_PtrGetFoliageTouchImpulseScale();
	void M_SetFoliageTouchImpulseScale(const float& value);

	//float	FoliageStiffness;		//Offset: 624	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetFoliageStiffness() const;
	float* M_PtrGetFoliageStiffness();
	void M_SetFoliageStiffness(const float& value);

	//float	FoliageStiffnessQuadratic;		//Offset: 628	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetFoliageStiffnessQuadratic() const;
	float* M_PtrGetFoliageStiffnessQuadratic();
	void M_SetFoliageStiffnessQuadratic(const float& value);

	//float	FoliageDamping;		//Offset: 632	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetFoliageDamping() const;
	float* M_PtrGetFoliageDamping();
	void M_SetFoliageDamping(const float& value);

	//float	MaxDamageImpulse;		//Offset: 636	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetMaxDamageImpulse() const;
	float* M_PtrGetMaxDamageImpulse();
	void M_SetMaxDamageImpulse(const float& value);

	//float	MaxTouchImpulse;		//Offset: 640	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetMaxTouchImpulse() const;
	float* M_PtrGetMaxTouchImpulse();
	void M_SetMaxTouchImpulse(const float& value);

	//float	MaxForce;		//Offset: 644	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetMaxForce() const;
	float* M_PtrGetMaxForce();
	void M_SetMaxForce(const float& value);

	//float	Mass;		//Offset: 648	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetMass() const;
	float* M_PtrGetMass();
	void M_SetMass(const float& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Foliage.InteractiveFoliageActor");
		return ptr;
	}

#pragma region Functions
	void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo);

#pragma endregion
};
};