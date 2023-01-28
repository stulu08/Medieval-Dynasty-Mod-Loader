#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class UMG.WidgetNavigation
// Super: Class CoreUObject.Object
// Size: 256
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UWidgetNavigation : public UObject {
public:
#pragma region Members
	//struct FWidgetNavigationData	Up;		//Offset: 40	Size: 36	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	struct FWidgetNavigationData M_GetUp() const;
	struct FWidgetNavigationData* M_PtrGetUp();
	void M_SetUp(const struct FWidgetNavigationData& value);

	//struct FWidgetNavigationData	Down;		//Offset: 76	Size: 36	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	struct FWidgetNavigationData M_GetDown() const;
	struct FWidgetNavigationData* M_PtrGetDown();
	void M_SetDown(const struct FWidgetNavigationData& value);

	//struct FWidgetNavigationData	Left;		//Offset: 112	Size: 36	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	struct FWidgetNavigationData M_GetLeft() const;
	struct FWidgetNavigationData* M_PtrGetLeft();
	void M_SetLeft(const struct FWidgetNavigationData& value);

	//struct FWidgetNavigationData	Right;		//Offset: 148	Size: 36	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	struct FWidgetNavigationData M_GetRight() const;
	struct FWidgetNavigationData* M_PtrGetRight();
	void M_SetRight(const struct FWidgetNavigationData& value);

	//struct FWidgetNavigationData	Next;		//Offset: 184	Size: 36	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	struct FWidgetNavigationData M_GetNext() const;
	struct FWidgetNavigationData* M_PtrGetNext();
	void M_SetNext(const struct FWidgetNavigationData& value);

	//struct FWidgetNavigationData	Previous;		//Offset: 220	Size: 36	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	struct FWidgetNavigationData M_GetPrevious() const;
	struct FWidgetNavigationData* M_PtrGetPrevious();
	void M_SetPrevious(const struct FWidgetNavigationData& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.WidgetNavigation");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};