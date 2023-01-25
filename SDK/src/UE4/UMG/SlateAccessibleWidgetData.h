#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class UMG.SlateAccessibleWidgetData
// Super: Class CoreUObject.Object
// Size: 128
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class USlateAccessibleWidgetData : public UObject {
public:
#pragma region Members
	//bool	bCanChildrenBeAccessible;		//Offset: 40	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbCanChildrenBeAccessible() const;
	bool* M_PtrGetbCanChildrenBeAccessible();
	void M_SetbCanChildrenBeAccessible(const bool& value);

	//ESlateAccessibleBehavior	AccessibleBehavior;		//Offset: 41	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	ESlateAccessibleBehavior M_GetAccessibleBehavior() const;
	ESlateAccessibleBehavior* M_PtrGetAccessibleBehavior();
	void M_SetAccessibleBehavior(const ESlateAccessibleBehavior& value);

	//ESlateAccessibleBehavior	AccessibleSummaryBehavior;		//Offset: 42	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	ESlateAccessibleBehavior M_GetAccessibleSummaryBehavior() const;
	ESlateAccessibleBehavior* M_PtrGetAccessibleSummaryBehavior();
	void M_SetAccessibleSummaryBehavior(const ESlateAccessibleBehavior& value);

	//struct FText	AccessibleText;		//Offset: 48	Size: 24	Flags: NativeAccessSpecifierPublic
	struct FText M_GetAccessibleText() const;
	struct FText* M_PtrGetAccessibleText();
	void M_SetAccessibleText(const struct FText& value);

	//struct FScriptDelegate	AccessibleTextDelegate;		//Offset: 72	Size: 16	Flags: ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	struct FScriptDelegate M_GetAccessibleTextDelegate() const;
	struct FScriptDelegate* M_PtrGetAccessibleTextDelegate();
	void M_SetAccessibleTextDelegate(const struct FScriptDelegate& value);

	//struct FText	AccessibleSummaryText;		//Offset: 88	Size: 24	Flags: NativeAccessSpecifierPublic
	struct FText M_GetAccessibleSummaryText() const;
	struct FText* M_PtrGetAccessibleSummaryText();
	void M_SetAccessibleSummaryText(const struct FText& value);

	//struct FScriptDelegate	AccessibleSummaryTextDelegate;		//Offset: 112	Size: 16	Flags: ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	struct FScriptDelegate M_GetAccessibleSummaryTextDelegate() const;
	struct FScriptDelegate* M_PtrGetAccessibleSummaryTextDelegate();
	void M_SetAccessibleSummaryTextDelegate(const struct FScriptDelegate& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.SlateAccessibleWidgetData");
		return ptr;
	}

#pragma region Functions
	struct FText GetText__DelegateSignature();

#pragma endregion
};
};