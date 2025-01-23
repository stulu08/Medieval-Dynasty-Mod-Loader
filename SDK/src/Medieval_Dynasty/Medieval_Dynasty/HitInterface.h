#pragma once
#include "Structs.h"
#include "CoreUObject/Interface.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.HitInterface
// Super: Class CoreUObject.Interface
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UHitInterface : public UInterface {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.HitInterface");
		return ptr;
	}

#pragma region Functions
	void Hit(const struct FVector& HitLocation, const struct FVector& hitForce);

#pragma endregion
};
};