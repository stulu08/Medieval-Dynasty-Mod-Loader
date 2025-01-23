#pragma once
#include "Structs.h"
#include "Engine/DataAsset.h"
/////////////////////////////////////////////
// Class AnimPhysics.AnimPhysicsLimitsDataAsset
// Super: Class Engine.DataAsset
// Size: 96
// Size inherited: 48
/////////////////////////////////////////////
namespace UE4 {
class UAnimPhysicsLimitsDataAsset : public UDataAsset {
public:
#pragma region Members
	//TArray<struct FSphericalLimit>	SphericalLimits;		//Offset: 48	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FSphericalLimit> M_GetSphericalLimits() const;
	TArray<struct FSphericalLimit>* M_PtrGetSphericalLimits();
	void M_SetSphericalLimits(const TArray<struct FSphericalLimit>& value);

	//TArray<struct FCapsuleLimit>	CapsuleLimits;		//Offset: 64	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FCapsuleLimit> M_GetCapsuleLimits() const;
	TArray<struct FCapsuleLimit>* M_PtrGetCapsuleLimits();
	void M_SetCapsuleLimits(const TArray<struct FCapsuleLimit>& value);

	//TArray<struct FPlanarLimit>	PlanarLimits;		//Offset: 80	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FPlanarLimit> M_GetPlanarLimits() const;
	TArray<struct FPlanarLimit>* M_PtrGetPlanarLimits();
	void M_SetPlanarLimits(const TArray<struct FPlanarLimit>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class AnimPhysics.AnimPhysicsLimitsDataAsset");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};