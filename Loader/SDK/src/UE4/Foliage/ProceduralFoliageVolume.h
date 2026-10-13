#pragma once
#include "Structs.h"
#include "Engine/Volume.h"
/////////////////////////////////////////////
// Class Foliage.ProceduralFoliageVolume
// Super: Class Engine.Volume
// Size: 608
// Size inherited: 600
/////////////////////////////////////////////
namespace UE4 {
class AProceduralFoliageVolume : public AVolume {
public:
#pragma region Members
	//class UProceduralFoliageComponent*	ProceduralComponent;		//Offset: 600	Size: 8	Flags: Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UProceduralFoliageComponent* M_GetProceduralComponent() const;
	class UProceduralFoliageComponent** M_PtrGetProceduralComponent();
	void M_SetProceduralComponent(const class UProceduralFoliageComponent*& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageVolume");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};