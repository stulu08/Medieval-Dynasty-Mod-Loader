#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "Engine/DynamicBlueprintBinding.h"
/////////////////////////////////////////////
// Class UMG.WidgetAnimationDelegateBinding
// Super: Class Engine.DynamicBlueprintBinding
// Size: 56
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding {
public:
#pragma region Members
	//TArray<struct FBlueprintWidgetAnimationDelegateBinding>	WidgetAnimationDelegateBindings;		//Offset: 40	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FBlueprintWidgetAnimationDelegateBinding> M_GetWidgetAnimationDelegateBindings() const;
	TArray<struct FBlueprintWidgetAnimationDelegateBinding>* M_PtrGetWidgetAnimationDelegateBindings();
	void M_SetWidgetAnimationDelegateBindings(const TArray<struct FBlueprintWidgetAnimationDelegateBinding>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.WidgetAnimationDelegateBinding");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};