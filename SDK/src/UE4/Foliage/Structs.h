#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// Enum Foliage.EFoliageScaling
/////////////////////////////////////////////
enum class EFoliageScaling : uint8_t {
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	LockXZ = 3,
	LockYZ = 4,
	MAX = 5,
};
/////////////////////////////////////////////
// Enum Foliage.EVertexColorMaskChannel
/////////////////////////////////////////////
enum class EVertexColorMaskChannel : uint8_t {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	MAX_None = 4,
	MAX = 5,
};
/////////////////////////////////////////////
// Enum Foliage.FoliageVertexColorMask
/////////////////////////////////////////////
enum class EFoliageVertexColorMask : uint8_t {
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red = 1,
	FOLIAGEVERTEXCOLORMASK_Green = 2,
	FOLIAGEVERTEXCOLORMASK_Blue = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha = 4,
	FOLIAGEVERTEXCOLORMASK_MAX = 5,
};
/////////////////////////////////////////////
// Enum Foliage.ESimulationQuery
/////////////////////////////////////////////
enum class ESimulationQuery : uint8_t {
	None = 0,
	CollisionOverlap = 1,
	ShadeOverlap = 2,
	AnyOverlap = 3,
	MAX = 4,
};
/////////////////////////////////////////////
// Enum Foliage.ESimulationOverlap
/////////////////////////////////////////////
enum class ESimulationOverlap : uint8_t {
	CollisionOverlap = 0,
	ShadeOverlap = 1,
	None = 2,
	MAX = 3,
};
#pragma endregion

#pragma region Structs
struct FFoliageVertexColorChannelMask;
struct FFoliageTypeObject;
struct FProceduralFoliageInstance;
/////////////////////////////////////////////
// ScriptStruct Foliage.FoliageVertexColorChannelMask
// Size 12
/////////////////////////////////////////////
struct FFoliageVertexColorChannelMask {
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	UseMask : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 0	Size: 4
	float	MaskThreshold;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	InvertMask : 1;		//Offset: 8	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[4];		//Offset: 8	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct Foliage.FoliageTypeObject
// Size 32
/////////////////////////////////////////////
struct FFoliageTypeObject {
	class UObject*	FoliageTypeObject;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class UFoliageType*	TypeInstance;		//Offset: 8	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	bool	bIsAsset;		//Offset: 16	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	unsigned char uknownData_0[7];		//Offset: 17	Size: 7
	class UFoliageType_InstancedStaticMesh*	Type;		//Offset: 24	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
};
/////////////////////////////////////////////
// ScriptStruct Foliage.ProceduralFoliageInstance
// Size 80
/////////////////////////////////////////////
struct FProceduralFoliageInstance {
	struct FQuat	Rotation;		//Offset: 0	Size: 16	Flags: IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FVector	Location;		//Offset: 16	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	Age;		//Offset: 28	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector	Normal;		//Offset: 32	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	Scale;		//Offset: 44	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UFoliageType*	Type;		//Offset: 48	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[24];		//Offset: 56	Size: 24
};
#pragma endregion
}