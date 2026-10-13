#pragma once
#include "Structs.h"
#include "Engine/SpringArmComponent.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.MD_SpringArmComponent
// Super: Class Engine.SpringArmComponent
// Size: 656
// Size inherited: 640
/////////////////////////////////////////////
namespace UE4 {
class UMD_SpringArmComponent : public USpringArmComponent {
public:
#pragma region Members
	//struct FLagContraint	LocationConstraints;		//Offset: 640	Size: 3	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	struct FLagContraint M_GetLocationConstraints() const;
	struct FLagContraint* M_PtrGetLocationConstraints();
	void M_SetLocationConstraints(const struct FLagContraint& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.MD_SpringArmComponent");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};