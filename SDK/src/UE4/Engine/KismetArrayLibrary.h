#pragma once
#include "Structs.h"
#include "Engine/BlueprintFunctionLibrary.h"
/////////////////////////////////////////////
// Class Engine.KismetArrayLibrary
// Super: Class Engine.BlueprintFunctionLibrary
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UKismetArrayLibrary : public UBlueprintFunctionLibrary {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.KismetArrayLibrary");
		return ptr;
	}

#pragma region Functions
	static int32_t Array_Add(const TArray<int32_t>& TargetArray, const int32_t& NewItem);

	static int32_t Array_AddUnique(const TArray<int32_t>& TargetArray, const int32_t& NewItem);

	static void Array_Append(const TArray<int32_t>& TargetArray, const TArray<int32_t>& SourceArray);

	static void Array_Clear(const TArray<int32_t>& TargetArray);

	static bool Array_Contains(const TArray<int32_t>& TargetArray, const int32_t& ItemToFind);

	static int32_t Array_Find(const TArray<int32_t>& TargetArray, const int32_t& ItemToFind);

	static void Array_Get(const TArray<int32_t>& TargetArray, int32_t Index, int32_t* Item);

	static bool Array_Identical(const TArray<int32_t>& ArrayA, const TArray<int32_t>& ArrayB);

	static void Array_Insert(const TArray<int32_t>& TargetArray, const int32_t& NewItem, int32_t Index);

	static bool Array_IsValidIndex(const TArray<int32_t>& TargetArray, int32_t IndexToTest);

	static int32_t Array_LastIndex(const TArray<int32_t>& TargetArray);

	static int32_t Array_Length(const TArray<int32_t>& TargetArray);

	static void Array_Random(const TArray<int32_t>& TargetArray, int32_t* OutItem, int32_t* OutIndex);

	static void Array_RandomFromStream(const TArray<int32_t>& TargetArray, struct FRandomStream* RandomStream, int32_t* OutItem, int32_t* OutIndex);

	static void Array_Remove(const TArray<int32_t>& TargetArray, int32_t IndexToRemove);

	static bool Array_RemoveItem(const TArray<int32_t>& TargetArray, const int32_t& Item);

	static void Array_Resize(const TArray<int32_t>& TargetArray, int32_t Size);

	static void Array_Reverse(const TArray<int32_t>& TargetArray);

	static void Array_Set(const TArray<int32_t>& TargetArray, int32_t Index, const int32_t& Item, bool bSizeToFit);

	static void Array_Shuffle(const TArray<int32_t>& TargetArray);

	static void Array_Swap(const TArray<int32_t>& TargetArray, int32_t FirstIndex, int32_t SecondIndex);

	static void FilterArray(const TArray<class AActor*>& TargetArray, class AActor* FilterClass, TArray<class AActor*>* FilteredArray);

	static void SetArrayPropertyByName(class UObject* Object, struct FName PropertyName, const TArray<int32_t>& Value);

#pragma endregion
};
};