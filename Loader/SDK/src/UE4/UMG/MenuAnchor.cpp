#include "../SDK.h"
#include "MenuAnchor.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of MenuClass
// Declaration: class UUserWidget* MenuClass
class UUserWidget* UMenuAnchor::M_GetMenuClass() const {
	return Read<class UUserWidget*>((byte*)this + 288);
}
class UUserWidget** UMenuAnchor::M_PtrGetMenuClass() {
	return reinterpret_cast<class UUserWidget**>((byte*)this + 288);
}
void UMenuAnchor::M_SetMenuClass(const class UUserWidget*& value) {
	Write((byte*)this + 288, value);
}
// Member Getter and Setter of OnGetMenuContentEvent
// Declaration: struct FScriptDelegate OnGetMenuContentEvent
struct FScriptDelegate UMenuAnchor::M_GetOnGetMenuContentEvent() const {
	return Read<struct FScriptDelegate>((byte*)this + 296);
}
struct FScriptDelegate* UMenuAnchor::M_PtrGetOnGetMenuContentEvent() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 296);
}
void UMenuAnchor::M_SetOnGetMenuContentEvent(const struct FScriptDelegate& value) {
	Write((byte*)this + 296, value);
}
// Member Getter and Setter of OnGetUserMenuContentEvent
// Declaration: struct FScriptDelegate OnGetUserMenuContentEvent
struct FScriptDelegate UMenuAnchor::M_GetOnGetUserMenuContentEvent() const {
	return Read<struct FScriptDelegate>((byte*)this + 312);
}
struct FScriptDelegate* UMenuAnchor::M_PtrGetOnGetUserMenuContentEvent() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 312);
}
void UMenuAnchor::M_SetOnGetUserMenuContentEvent(const struct FScriptDelegate& value) {
	Write((byte*)this + 312, value);
}
// Member Getter and Setter of Placement
// Declaration: TEnumAsByte<EMenuPlacement> Placement
TEnumAsByte<EMenuPlacement> UMenuAnchor::M_GetPlacement() const {
	return Read<TEnumAsByte<EMenuPlacement>>((byte*)this + 328);
}
TEnumAsByte<EMenuPlacement>* UMenuAnchor::M_PtrGetPlacement() {
	return reinterpret_cast<TEnumAsByte<EMenuPlacement>*>((byte*)this + 328);
}
void UMenuAnchor::M_SetPlacement(const TEnumAsByte<EMenuPlacement>& value) {
	Write((byte*)this + 328, value);
}
// Member Getter and Setter of bFitInWindow
// Declaration: bool bFitInWindow
bool UMenuAnchor::M_GetbFitInWindow() const {
	return Read<bool>((byte*)this + 329);
}
bool* UMenuAnchor::M_PtrGetbFitInWindow() {
	return reinterpret_cast<bool*>((byte*)this + 329);
}
void UMenuAnchor::M_SetbFitInWindow(const bool& value) {
	Write((byte*)this + 329, value);
}
// Member Getter and Setter of ShouldDeferPaintingAfterWindowContent
// Declaration: bool ShouldDeferPaintingAfterWindowContent
bool UMenuAnchor::M_GetShouldDeferPaintingAfterWindowContent() const {
	return Read<bool>((byte*)this + 330);
}
bool* UMenuAnchor::M_PtrGetShouldDeferPaintingAfterWindowContent() {
	return reinterpret_cast<bool*>((byte*)this + 330);
}
void UMenuAnchor::M_SetShouldDeferPaintingAfterWindowContent(const bool& value) {
	Write((byte*)this + 330, value);
}
// Member Getter and Setter of UseApplicationMenuStack
// Declaration: bool UseApplicationMenuStack
bool UMenuAnchor::M_GetUseApplicationMenuStack() const {
	return Read<bool>((byte*)this + 331);
}
bool* UMenuAnchor::M_PtrGetUseApplicationMenuStack() {
	return reinterpret_cast<bool*>((byte*)this + 331);
}
void UMenuAnchor::M_SetUseApplicationMenuStack(const bool& value) {
	Write((byte*)this + 331, value);
}
// Member Getter and Setter of OnMenuOpenChanged
// Declaration: TAssetPtr<class FOnMenuOpenChangedEvent__DelegateSignature> OnMenuOpenChanged
TAssetPtr<class FOnMenuOpenChangedEvent__DelegateSignature> UMenuAnchor::M_GetOnMenuOpenChanged() const {
	return Read<TAssetPtr<class FOnMenuOpenChangedEvent__DelegateSignature>>((byte*)this + 336);
}
TAssetPtr<class FOnMenuOpenChangedEvent__DelegateSignature>* UMenuAnchor::M_PtrGetOnMenuOpenChanged() {
	return reinterpret_cast<TAssetPtr<class FOnMenuOpenChangedEvent__DelegateSignature>*>((byte*)this + 336);
}
void UMenuAnchor::M_SetOnMenuOpenChanged(const TAssetPtr<class FOnMenuOpenChangedEvent__DelegateSignature>& value) {
	Write((byte*)this + 336, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.MenuAnchor.Close
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UMenuAnchor::Close() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.Close");

	struct UMenuAnchor_Close_Params {
	};
	UMenuAnchor_Close_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.MenuAnchor.FitInWindow
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bFit	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMenuAnchor::FitInWindow(bool bFit) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.FitInWindow");

	struct UMenuAnchor_FitInWindow_Params {
		bool bFit;			//Offset: 0 | ElementSize: 1
	};
	UMenuAnchor_FitInWindow_Params params;
	params.bFit = bFit;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.MenuAnchor.GetMenuPosition
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FVector2D	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector2D UMenuAnchor::GetMenuPosition()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.GetMenuPosition");

	struct UMenuAnchor_GetMenuPosition_Params {
		struct FVector2D ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UMenuAnchor_GetMenuPosition_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// DelegateFunction UMG.MenuAnchor.GetUserWidget__DelegateSignature
// Flags: Public, Delegate
// Params:
// Name: ReturnValue	Type: class UUserWidget*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UUserWidget* UMenuAnchor::GetUserWidget__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MenuAnchor.GetUserWidget__DelegateSignature");

	struct UMenuAnchor_GetUserWidget__DelegateSignature_Params {
		class UUserWidget* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UMenuAnchor_GetUserWidget__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.MenuAnchor.HasOpenSubMenus
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMenuAnchor::HasOpenSubMenus()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.HasOpenSubMenus");

	struct UMenuAnchor_HasOpenSubMenus_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMenuAnchor_HasOpenSubMenus_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.MenuAnchor.IsOpen
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMenuAnchor::IsOpen()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.IsOpen");

	struct UMenuAnchor_IsOpen_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMenuAnchor_IsOpen_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.MenuAnchor.Open
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bFocusMenu	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMenuAnchor::Open(bool bFocusMenu) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.Open");

	struct UMenuAnchor_Open_Params {
		bool bFocusMenu;			//Offset: 0 | ElementSize: 1
	};
	UMenuAnchor_Open_Params params;
	params.bFocusMenu = bFocusMenu;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.MenuAnchor.SetPlacement
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InPlacement	Type: TEnumAsByte<EMenuPlacement>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMenuAnchor::SetPlacement(TEnumAsByte<EMenuPlacement> InPlacement) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.SetPlacement");

	struct UMenuAnchor_SetPlacement_Params {
		TEnumAsByte<EMenuPlacement> InPlacement;			//Offset: 0 | ElementSize: 1
	};
	UMenuAnchor_SetPlacement_Params params;
	params.InPlacement = InPlacement;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.MenuAnchor.ShouldOpenDueToClick
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMenuAnchor::ShouldOpenDueToClick()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.ShouldOpenDueToClick");

	struct UMenuAnchor_ShouldOpenDueToClick_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMenuAnchor_ShouldOpenDueToClick_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.MenuAnchor.ToggleOpen
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bFocusOnOpen	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMenuAnchor::ToggleOpen(bool bFocusOnOpen) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.ToggleOpen");

	struct UMenuAnchor_ToggleOpen_Params {
		bool bFocusOnOpen;			//Offset: 0 | ElementSize: 1
	};
	UMenuAnchor_ToggleOpen_Params params;
	params.bFocusOnOpen = bFocusOnOpen;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}