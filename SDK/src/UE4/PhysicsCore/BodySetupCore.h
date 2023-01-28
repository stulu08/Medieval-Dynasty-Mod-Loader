#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class PhysicsCore.BodySetupCore
// Super: Class CoreUObject.Object
// Size: 72
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UBodySetupCore : public UObject {
public:
#pragma region Members
	//struct FName	BoneName;		//Offset: 40	Size: 8	Flags: Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FName M_GetBoneName() const;
	struct FName* M_PtrGetBoneName();
	void M_SetBoneName(const struct FName& value);

	//TEnumAsByte<EPhysicsType>	PhysicsType;		//Offset: 48	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EPhysicsType> M_GetPhysicsType() const;
	TEnumAsByte<EPhysicsType>* M_PtrGetPhysicsType();
	void M_SetPhysicsType(const TEnumAsByte<EPhysicsType>& value);

	//TEnumAsByte<ECollisionTraceFlag>	CollisionTraceFlag;		//Offset: 49	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<ECollisionTraceFlag> M_GetCollisionTraceFlag() const;
	TEnumAsByte<ECollisionTraceFlag>* M_PtrGetCollisionTraceFlag();
	void M_SetCollisionTraceFlag(const TEnumAsByte<ECollisionTraceFlag>& value);

	//TEnumAsByte<EBodyCollisionResponse>	CollisionReponse;		//Offset: 50	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EBodyCollisionResponse> M_GetCollisionReponse() const;
	TEnumAsByte<EBodyCollisionResponse>* M_PtrGetCollisionReponse();
	void M_SetCollisionReponse(const TEnumAsByte<EBodyCollisionResponse>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class PhysicsCore.BodySetupCore");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};