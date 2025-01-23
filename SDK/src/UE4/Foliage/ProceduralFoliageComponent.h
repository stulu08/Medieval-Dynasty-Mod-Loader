#pragma once
#include "Structs.h"
#include "Engine/ActorComponent.h"
/////////////////////////////////////////////
// Class Foliage.ProceduralFoliageComponent
// Super: Class Engine.ActorComponent
// Size: 216
// Size inherited: 176
/////////////////////////////////////////////
namespace UE4 {
class UProceduralFoliageComponent : public UActorComponent {
public:
#pragma region Members
	//class UProceduralFoliageSpawner*	FoliageSpawner;		//Offset: 176	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UProceduralFoliageSpawner* M_GetFoliageSpawner() const;
	class UProceduralFoliageSpawner** M_PtrGetFoliageSpawner();
	void M_SetFoliageSpawner(const class UProceduralFoliageSpawner*& value);

	//float	TileOverlap;		//Offset: 184	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetTileOverlap() const;
	float* M_PtrGetTileOverlap();
	void M_SetTileOverlap(const float& value);

	//class AVolume*	SpawningVolume;		//Offset: 192	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class AVolume* M_GetSpawningVolume() const;
	class AVolume** M_PtrGetSpawningVolume();
	void M_SetSpawningVolume(const class AVolume*& value);

	//struct FGuid	ProceduralGuid;		//Offset: 200	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FGuid M_GetProceduralGuid() const;
	struct FGuid* M_PtrGetProceduralGuid();
	void M_SetProceduralGuid(const struct FGuid& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageComponent");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};