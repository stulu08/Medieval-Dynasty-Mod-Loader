#pragma once
#include "Structs.h"
#include "Engine/BlueprintFunctionLibrary.h"
/////////////////////////////////////////////
// Class Engine.BlueprintMapLibrary
// Super: Class Engine.BlueprintFunctionLibrary
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UBlueprintMapLibrary : public UBlueprintFunctionLibrary {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.BlueprintMapLibrary");
		return ptr;
	}

#pragma region Functions
	static void Map_Add(const TMap<int32_t, int32_t>& TargetMap, const int32_t& Key, const int32_t& Value);

	static void Map_Clear(const TMap<int32_t, int32_t>& TargetMap);

	static bool Map_Contains(const TMap<int32_t, int32_t>& TargetMap, const int32_t& Key);

	static bool Map_Find(const TMap<int32_t, int32_t>& TargetMap, const int32_t& Key, int32_t* Value);

	static void Map_Keys(const TMap<int32_t, int32_t>& TargetMap, TArray<int32_t>* Keys);

	static int32_t Map_Length(const TMap<int32_t, int32_t>& TargetMap);

	static bool Map_Remove(const TMap<int32_t, int32_t>& TargetMap, const int32_t& Key);

	static void Map_Values(const TMap<int32_t, int32_t>& TargetMap, TArray<int32_t>* Values);

	static void SetMapPropertyByName(class UObject* Object, struct FName PropertyName, const TMap<int32_t, int32_t>& Value);

#pragma endregion
};
};