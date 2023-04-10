#pragma once
#include "Structs.h"
#include "Engine/BlueprintFunctionLibrary.h"
/////////////////////////////////////////////
// Class Engine.KismetGuidLibrary
// Super: Class Engine.BlueprintFunctionLibrary
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UKismetGuidLibrary : public UBlueprintFunctionLibrary {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.KismetGuidLibrary");
		return ptr;
	}

#pragma region Functions
	static struct FString Conv_GuidToString(const struct FGuid& InGuid);

	static bool EqualEqual_GuidGuid(const struct FGuid& A, const struct FGuid& B);

	static void Invalidate_Guid(struct FGuid* InGuid);

	static bool IsValid_Guid(const struct FGuid& InGuid);

	static struct FGuid NewGuid();

	static bool NotEqual_GuidGuid(const struct FGuid& A, const struct FGuid& B);

	static void Parse_StringToGuid(struct FString GuidString, struct FGuid* OutGuid, bool* Success);

#pragma endregion
};
};