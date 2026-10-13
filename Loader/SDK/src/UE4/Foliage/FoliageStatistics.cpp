#include "../SDK.h"
#include "FoliageStatistics.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: StaticMesh	Type: class UStaticMesh*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Box	Type: struct FBox	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UFoliageStatistics::FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, struct FBox Box) {
	static auto fn = UObject::FindObject<UFunction>("Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount");

	struct UFoliageStatistics_FoliageOverlappingBoxCount_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class UStaticMesh* StaticMesh;			//Offset: 8 | ElementSize: 8
		struct FBox Box;			//Offset: 16 | ElementSize: 28
		int32_t ReturnValue;			//Offset: 44 | ElementSize: 4
	};
	UFoliageStatistics_FoliageOverlappingBoxCount_Params params;
	params.WorldContextObject = WorldContextObject;
	params.StaticMesh = StaticMesh;
	params.Box = Box;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: StaticMesh	Type: class UStaticMesh*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: CenterPosition	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Radius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UFoliageStatistics::FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, struct FVector CenterPosition, float Radius) {
	static auto fn = UObject::FindObject<UFunction>("Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount");

	struct UFoliageStatistics_FoliageOverlappingSphereCount_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class UStaticMesh* StaticMesh;			//Offset: 8 | ElementSize: 8
		struct FVector CenterPosition;			//Offset: 16 | ElementSize: 12
		float Radius;			//Offset: 28 | ElementSize: 4
		int32_t ReturnValue;			//Offset: 32 | ElementSize: 4
	};
	UFoliageStatistics_FoliageOverlappingSphereCount_Params params;
	params.WorldContextObject = WorldContextObject;
	params.StaticMesh = StaticMesh;
	params.CenterPosition = CenterPosition;
	params.Radius = Radius;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

#pragma endregion
}