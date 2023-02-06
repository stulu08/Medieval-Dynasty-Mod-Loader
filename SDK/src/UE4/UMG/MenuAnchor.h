#pragma once
#include "Structs.h"
#include "UMG/ContentWidget.h"
/////////////////////////////////////////////
// Class UMG.MenuAnchor
// Super: Class UMG.ContentWidget
// Size: 368
// Size inherited: 288
/////////////////////////////////////////////
namespace UE4 {
class UMenuAnchor : public UContentWidget {
public:
#pragma region Members
	//class UUserWidget*	MenuClass;		//Offset: 288	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UUserWidget* M_GetMenuClass() const;
	class UUserWidget** M_PtrGetMenuClass();
	void M_SetMenuClass(const class UUserWidget*& value);

	//struct FScriptDelegate	OnGetMenuContentEvent;		//Offset: 296	Size: 16	Flags: Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	struct FScriptDelegate M_GetOnGetMenuContentEvent() const;
	struct FScriptDelegate* M_PtrGetOnGetMenuContentEvent();
	void M_SetOnGetMenuContentEvent(const struct FScriptDelegate& value);

	//struct FScriptDelegate	OnGetUserMenuContentEvent;		//Offset: 312	Size: 16	Flags: Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	struct FScriptDelegate M_GetOnGetUserMenuContentEvent() const;
	struct FScriptDelegate* M_PtrGetOnGetUserMenuContentEvent();
	void M_SetOnGetUserMenuContentEvent(const struct FScriptDelegate& value);

	//TEnumAsByte<EMenuPlacement>	Placement;		//Offset: 328	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EMenuPlacement> M_GetPlacement() const;
	TEnumAsByte<EMenuPlacement>* M_PtrGetPlacement();
	void M_SetPlacement(const TEnumAsByte<EMenuPlacement>& value);

	//bool	bFitInWindow;		//Offset: 329	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbFitInWindow() const;
	bool* M_PtrGetbFitInWindow();
	void M_SetbFitInWindow(const bool& value);

	//bool	ShouldDeferPaintingAfterWindowContent;		//Offset: 330	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetShouldDeferPaintingAfterWindowContent() const;
	bool* M_PtrGetShouldDeferPaintingAfterWindowContent();
	void M_SetShouldDeferPaintingAfterWindowContent(const bool& value);

	//bool	UseApplicationMenuStack;		//Offset: 331	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetUseApplicationMenuStack() const;
	bool* M_PtrGetUseApplicationMenuStack();
	void M_SetUseApplicationMenuStack(const bool& value);

	//TAssetPtr<class FOnMenuOpenChangedEvent__DelegateSignature>	OnMenuOpenChanged;		//Offset: 336	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnMenuOpenChangedEvent__DelegateSignature> M_GetOnMenuOpenChanged() const;
	TAssetPtr<class FOnMenuOpenChangedEvent__DelegateSignature>* M_PtrGetOnMenuOpenChanged();
	void M_SetOnMenuOpenChanged(const TAssetPtr<class FOnMenuOpenChangedEvent__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.MenuAnchor");
		return ptr;
	}

#pragma region Functions
	void Close();

	void FitInWindow(bool bFit);

	struct FVector2D GetMenuPosition()/* const*/;

	class UUserWidget* GetUserWidget__DelegateSignature();

	bool HasOpenSubMenus()/* const*/;

	bool IsOpen()/* const*/;

	void Open(bool bFocusMenu);

	void SetPlacement(TEnumAsByte<EMenuPlacement> InPlacement);

	bool ShouldOpenDueToClick()/* const*/;

	void ToggleOpen(bool bFocusOnOpen);

#pragma endregion
};
};