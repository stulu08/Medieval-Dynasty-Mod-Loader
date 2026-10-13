#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class Foliage.ProceduralFoliageSpawner
// Super: Class CoreUObject.Object
// Size: 104
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UProceduralFoliageSpawner : public UObject {
public:
#pragma region Members
	//int32_t	RandomSeed;		//Offset: 40	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetRandomSeed() const;
	int32_t* M_PtrGetRandomSeed();
	void M_SetRandomSeed(const int32_t& value);

	//float	TileSize;		//Offset: 44	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetTileSize() const;
	float* M_PtrGetTileSize();
	void M_SetTileSize(const float& value);

	//int32_t	NumUniqueTiles;		//Offset: 48	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetNumUniqueTiles() const;
	int32_t* M_PtrGetNumUniqueTiles();
	void M_SetNumUniqueTiles(const int32_t& value);

	//float	MinimumQuadTreeSize;		//Offset: 52	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetMinimumQuadTreeSize() const;
	float* M_PtrGetMinimumQuadTreeSize();
	void M_SetMinimumQuadTreeSize(const float& value);

	//TArray<struct FFoliageTypeObject>	FoliageTypes;		//Offset: 64	Size: 16	Flags: Edit, ZeroConstructor, NativeAccessSpecifierPrivate
	TArray<struct FFoliageTypeObject> M_GetFoliageTypes() const;
	TArray<struct FFoliageTypeObject>* M_PtrGetFoliageTypes();
	void M_SetFoliageTypes(const TArray<struct FFoliageTypeObject>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageSpawner");
		return ptr;
	}

#pragma region Functions
	void Simulate(int32_t NumSteps);

#pragma endregion
};
};