#pragma once
#include "Structs.h"
#include "Engine/AnimNotify.h"
/////////////////////////////////////////////
// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// Super: Class Engine.AnimNotify
// Size: 64
// Size inherited: 56
/////////////////////////////////////////////
namespace UE4 {
class UAnimNotify_PlayMontageNotify : public UAnimNotify {
public:
#pragma region Members
	//struct FName	NotifyName;		//Offset: 56	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FName M_GetNotifyName() const;
	struct FName* M_PtrGetNotifyName();
	void M_SetNotifyName(const struct FName& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.AnimNotify_PlayMontageNotify");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};