#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class Foliage.ProceduralFoliageTile
// Super: Class CoreUObject.Object
// Size: 344
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UProceduralFoliageTile : public UObject {
public:
#pragma region Members
	//class UProceduralFoliageSpawner*	FoliageSpawner;		//Offset: 40	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class UProceduralFoliageSpawner* M_GetFoliageSpawner() const;
	class UProceduralFoliageSpawner** M_PtrGetFoliageSpawner();
	void M_SetFoliageSpawner(const class UProceduralFoliageSpawner*& value);

	//TArray<struct FProceduralFoliageInstance>	InstancesArray;		//Offset: 208	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	TArray<struct FProceduralFoliageInstance> M_GetInstancesArray() const;
	TArray<struct FProceduralFoliageInstance>* M_PtrGetInstancesArray();
	void M_SetInstancesArray(const TArray<struct FProceduralFoliageInstance>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageTile");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};