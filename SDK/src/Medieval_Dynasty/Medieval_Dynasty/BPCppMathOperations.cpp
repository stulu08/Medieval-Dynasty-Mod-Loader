#include "../SDK.h"
#include "BPCppMathOperations.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppMathOperations.IsPointInsidePolygon
// Flags: Final, Native, Static, Private, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: PolygonVertices	Type: TArray<struct FVector>	Flags: Parm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: Point	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UBPCppMathOperations::IsPointInsidePolygon(TArray<struct FVector> PolygonVertices, struct FVector Point) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppMathOperations.IsPointInsidePolygon");

	struct UBPCppMathOperations_IsPointInsidePolygon_Params {
		TArray<struct FVector> PolygonVertices;			//Offset: 0 | ElementSize: 16
		struct FVector Point;			//Offset: 16 | ElementSize: 12
		bool ReturnValue;			//Offset: 28 | ElementSize: 1
	};
	UBPCppMathOperations_IsPointInsidePolygon_Params params;
	params.PolygonVertices = PolygonVertices;
	params.Point = Point;

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
// Function Medieval_Dynasty.BPCppMathOperations.SortByFloat
// Flags: Final, Native, Static, Private, HasOutParms, BlueprintCallable
// Params:
// Name: SortedIndices	Type: TArray<int32_t>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: Floats	Type: TArray<float>	Flags: Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: Increasing	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppMathOperations::SortByFloat(TArray<int32_t>* SortedIndices, TArray<float>* Floats, bool Increasing) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppMathOperations.SortByFloat");

	struct UBPCppMathOperations_SortByFloat_Params {
		TArray<int32_t> SortedIndices;			//Offset: 0 | ElementSize: 16
		TArray<float> Floats;			//Offset: 16 | ElementSize: 16
		bool Increasing;			//Offset: 32 | ElementSize: 1
	};
	UBPCppMathOperations_SortByFloat_Params params;
	params.Increasing = Increasing;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SortedIndices != nullptr)
		*SortedIndices = params.SortedIndices;
	if (Floats != nullptr)
		*Floats = params.Floats;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppMathOperations.SortByInt
// Flags: Final, Native, Static, Private, HasOutParms, BlueprintCallable
// Params:
// Name: SortedIndices	Type: TArray<int32_t>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: Ints	Type: TArray<int32_t>	Flags: Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: Increasing	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppMathOperations::SortByInt(TArray<int32_t>* SortedIndices, TArray<int32_t>* Ints, bool Increasing) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppMathOperations.SortByInt");

	struct UBPCppMathOperations_SortByInt_Params {
		TArray<int32_t> SortedIndices;			//Offset: 0 | ElementSize: 16
		TArray<int32_t> Ints;			//Offset: 16 | ElementSize: 16
		bool Increasing;			//Offset: 32 | ElementSize: 1
	};
	UBPCppMathOperations_SortByInt_Params params;
	params.Increasing = Increasing;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SortedIndices != nullptr)
		*SortedIndices = params.SortedIndices;
	if (Ints != nullptr)
		*Ints = params.Ints;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppMathOperations.SortByString
// Flags: Final, Native, Static, Private, HasOutParms, BlueprintCallable
// Params:
// Name: SortedIndices	Type: TArray<int32_t>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: Texts	Type: TArray<struct FString>	Flags: Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: Increasing	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppMathOperations::SortByString(TArray<int32_t>* SortedIndices, TArray<struct FString>* Texts, bool Increasing) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppMathOperations.SortByString");

	struct UBPCppMathOperations_SortByString_Params {
		TArray<int32_t> SortedIndices;			//Offset: 0 | ElementSize: 16
		TArray<struct FString> Texts;			//Offset: 16 | ElementSize: 16
		bool Increasing;			//Offset: 32 | ElementSize: 1
	};
	UBPCppMathOperations_SortByString_Params params;
	params.Increasing = Increasing;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SortedIndices != nullptr)
		*SortedIndices = params.SortedIndices;
	if (Texts != nullptr)
		*Texts = params.Texts;
}

#pragma endregion
}