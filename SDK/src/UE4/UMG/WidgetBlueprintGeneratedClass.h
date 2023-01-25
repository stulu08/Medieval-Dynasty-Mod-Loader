#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "Engine/BlueprintGeneratedClass.h"
/////////////////////////////////////////////
// Class UMG.WidgetBlueprintGeneratedClass
// Super: Class Engine.BlueprintGeneratedClass
// Size: 872
// Size inherited: 808
/////////////////////////////////////////////
namespace UE4 {
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass {
public:
#pragma region Members
	//class UWidgetTree*	WidgetTree;		//Offset: 808	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class UWidgetTree* M_GetWidgetTree() const;
	class UWidgetTree** M_PtrGetWidgetTree();
	void M_SetWidgetTree(const class UWidgetTree*& value);

	//unsigned char	bClassRequiresNativeTick : 1;		//Offset: 816	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbClassRequiresNativeTick() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbClassRequiresNativeTick();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbClassRequiresNativeTick(const unsigned char& value);

	//TArray<struct FDelegateRuntimeBinding>	Bindings;		//Offset: 824	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FDelegateRuntimeBinding> M_GetBindings() const;
	TArray<struct FDelegateRuntimeBinding>* M_PtrGetBindings();
	void M_SetBindings(const TArray<struct FDelegateRuntimeBinding>& value);

	//TArray<class UWidgetAnimation*>	Animations;		//Offset: 840	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	TArray<class UWidgetAnimation*> M_GetAnimations() const;
	TArray<class UWidgetAnimation*>* M_PtrGetAnimations();
	void M_SetAnimations(const TArray<class UWidgetAnimation*>& value);

	//TArray<struct FName>	NamedSlots;		//Offset: 856	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FName> M_GetNamedSlots() const;
	TArray<struct FName>* M_PtrGetNamedSlots();
	void M_SetNamedSlots(const TArray<struct FName>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.WidgetBlueprintGeneratedClass");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};