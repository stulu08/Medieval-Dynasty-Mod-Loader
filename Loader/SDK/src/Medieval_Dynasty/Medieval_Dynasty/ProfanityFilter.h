#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.ProfanityFilter
// Super: Class CoreUObject.Object
// Size: 152
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UProfanityFilter : public UObject {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.ProfanityFilter");
		return ptr;
	}

#pragma region Functions
	struct FString CensorIllegalWords(struct FString IllegalWord);

	struct FString CreateFunnyWord(struct FString IllegalWord);

	bool DoesContainIllegalWords(struct FString IllegalWord);

	void PrepareCurseSentencesList(class UDataTable* Table);

	void PrepareCurseWordsList(class UDataTable* Table);

#pragma endregion
};
};