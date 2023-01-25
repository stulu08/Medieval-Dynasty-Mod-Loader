#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "Engine/BlueprintFunctionLibrary.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.BPCppMathOperations
// Super: Class Engine.BlueprintFunctionLibrary
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UBPCppMathOperations : public UBlueprintFunctionLibrary {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.BPCppMathOperations");
		return ptr;
	}

#pragma region Functions
	static bool IsPointInsidePolygon(TArray<struct FVector> PolygonVertices, struct FVector Point);

	static void SortByFloat(TArray<int32_t>* SortedIndices, TArray<float>* Floats, bool Increasing);

	static void SortByInt(TArray<int32_t>* SortedIndices, TArray<int32_t>* Ints, bool Increasing);

	static void SortByString(TArray<int32_t>* SortedIndices, TArray<struct FString>* Texts, bool Increasing);

#pragma endregion
};
};