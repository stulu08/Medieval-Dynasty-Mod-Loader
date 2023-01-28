#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
#pragma endregion

#pragma region Structs
struct FCachedPropertyPath;
struct FPropertyPathSegment;
/////////////////////////////////////////////
// ScriptStruct PropertyPath.CachedPropertyPath
// Size 40
/////////////////////////////////////////////
struct FCachedPropertyPath {
	TArray<struct FPropertyPathSegment>	Segments;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	unsigned char uknownData_0[8];		//Offset: 16	Size: 8
	class UFunction*	CachedFunction;		//Offset: 24	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	unsigned char uknownData_1[8];		//Offset: 32	Size: 8
};
/////////////////////////////////////////////
// ScriptStruct PropertyPath.PropertyPathSegment
// Size 40
/////////////////////////////////////////////
struct FPropertyPathSegment {
	struct FName	Name;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t	ArrayIndex;		//Offset: 8	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 12	Size: 4
	class UStruct*	Struct;		//Offset: 16	Size: 8	Flags: ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	unsigned char uknownData_1[16];		//Offset: 24	Size: 16
};
#pragma endregion
}