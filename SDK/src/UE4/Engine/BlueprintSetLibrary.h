#pragma once
#include "Structs.h"
#include "Engine/BlueprintFunctionLibrary.h"
/////////////////////////////////////////////
// Class Engine.BlueprintSetLibrary
// Super: Class Engine.BlueprintFunctionLibrary
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UBlueprintSetLibrary : public UBlueprintFunctionLibrary {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.BlueprintSetLibrary");
		return ptr;
	}

#pragma region Functions
	static void Set_Add(const TAssetPtr<class FNone_67>& TargetSet, const int32_t& NewItem);

	static void Set_AddItems(const TAssetPtr<class FNone_67>& TargetSet, const TArray<int32_t>& NewItems);

	static void Set_Clear(const TAssetPtr<class FNone_67>& TargetSet);

	static bool Set_Contains(const TAssetPtr<class FNone_67>& TargetSet, const int32_t& ItemToFind);

	static void Set_Difference(const TAssetPtr<class FNone_67>& A, const TAssetPtr<class FNone_67>& B, TAssetPtr<class FNone_67>* Result);

	static void Set_Intersection(const TAssetPtr<class FNone_67>& A, const TAssetPtr<class FNone_67>& B, TAssetPtr<class FNone_67>* Result);

	static int32_t Set_Length(const TAssetPtr<class FNone_67>& TargetSet);

	static bool Set_Remove(const TAssetPtr<class FNone_67>& TargetSet, const int32_t& Item);

	static void Set_RemoveItems(const TAssetPtr<class FNone_67>& TargetSet, const TArray<int32_t>& Items);

	static void Set_ToArray(const TAssetPtr<class FNone_67>& A, TArray<int32_t>* Result);

	static void Set_Union(const TAssetPtr<class FNone_67>& A, const TAssetPtr<class FNone_67>& B, TAssetPtr<class FNone_67>* Result);

	static void SetSetPropertyByName(class UObject* Object, struct FName PropertyName, const TAssetPtr<class FNone_67>& Value);

#pragma endregion
};
};