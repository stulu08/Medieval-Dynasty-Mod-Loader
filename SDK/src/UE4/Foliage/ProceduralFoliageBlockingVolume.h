#pragma once
#include "Structs.h"
#include "Engine/Volume.h"
/////////////////////////////////////////////
// Class Foliage.ProceduralFoliageBlockingVolume
// Super: Class Engine.Volume
// Size: 608
// Size inherited: 600
/////////////////////////////////////////////
namespace UE4 {
class AProceduralFoliageBlockingVolume : public AVolume {
public:
#pragma region Members
	//class AProceduralFoliageVolume*	ProceduralFoliageVolume;		//Offset: 600	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class AProceduralFoliageVolume* M_GetProceduralFoliageVolume() const;
	class AProceduralFoliageVolume** M_PtrGetProceduralFoliageVolume();
	void M_SetProceduralFoliageVolume(const class AProceduralFoliageVolume*& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageBlockingVolume");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};