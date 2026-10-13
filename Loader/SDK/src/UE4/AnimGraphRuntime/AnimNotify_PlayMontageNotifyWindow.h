#pragma once
#include "Structs.h"
#include "Engine/AnimNotifyState.h"
/////////////////////////////////////////////
// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// Super: Class Engine.AnimNotifyState
// Size: 56
// Size inherited: 48
/////////////////////////////////////////////
namespace UE4 {
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState {
public:
#pragma region Members
	//struct FName	NotifyName;		//Offset: 48	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FName M_GetNotifyName() const;
	struct FName* M_PtrGetNotifyName();
	void M_SetNotifyName(const struct FName& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};