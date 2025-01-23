#pragma once
#include "Structs.h"
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
	static int32_t BitwiseShiftLeft_IntInt(int32_t A, int32_t B);

	static int32_t BitwiseShiftRight_IntInt(int32_t A, int32_t B);

	static void CompressRotatorToBytes(const struct FRotator& Rotator, unsigned char* X, unsigned char* Y, unsigned char* Z);

	static void CompressVectorToBytes(const struct FVector& Vector, bool IsScale, int32_t* X, int32_t* Y, int32_t* Z);

	static unsigned char Conv_EnumToByte(unsigned char InEnum);

	static struct FTransform_NetQuantize Conv_TransformToTransformNetQuantize(struct FTransform InTransform);

	static struct FVector_NetQuantize Conv_VectorToVectorNetQuantize(struct FVector InVector);

	static struct FVector_NetQuantize10 Conv_VectorToVectorNetQuantize10(struct FVector InVector);

	static struct FVector_NetQuantize100 Conv_VectorToVectorNetQuantize100(struct FVector InVector);

	static float GetDistanceToClosestPlayer(class UObject* WorldContextObject, class AActor** ClosestActor, class AActor* targetActor);

	static float GetSquaredDistanceToClosestPlayer(class UObject* WorldContextObject, class AActor** ClosestActor, class AActor* targetActor);

	static bool IsPointInsidePolygon(TArray<struct FVector> PolygonVertices, struct FVector Point);

	static struct FRotator MakeRotatorFromBytes(const unsigned char& X, const unsigned char& Y, const unsigned char& Z);

	static struct FVector MakeVectorFromBytes(const int32_t& X, const int32_t& Y, const int32_t& Z, bool IsScale);

	static void SortByFloat(TArray<int32_t>* SortedIndices, TArray<float>* Floats, bool Increasing);

	static void SortByInt(TArray<int32_t>* SortedIndices, TArray<int32_t>* Ints, bool Increasing);

	static void SortByString(TArray<int32_t>* SortedIndices, TArray<struct FString>* Texts, bool Increasing);

	static TArray<int32_t> SplineDjikstra(TArray<class AActor*> Roads, class AActor* StartingSpline, class AActor* EndingSpline, int32_t StartingSplineIndex, int32_t EndingSplineIndex, TArray<struct FST_DoubleActorArray> ConnectionPoints);

#pragma endregion
};
};