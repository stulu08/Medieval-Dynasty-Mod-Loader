#include "../SDK.h"
#include "TileView.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of EntryHeight
// Declaration: float EntryHeight
float UTileView::M_GetEntryHeight() const {
	return Read<float>((byte*)this + 872);
}
float* UTileView::M_PtrGetEntryHeight() {
	return reinterpret_cast<float*>((byte*)this + 872);
}
void UTileView::M_SetEntryHeight(const float& value) {
	Write((byte*)this + 872, value);
}
// Member Getter and Setter of EntryWidth
// Declaration: float EntryWidth
float UTileView::M_GetEntryWidth() const {
	return Read<float>((byte*)this + 876);
}
float* UTileView::M_PtrGetEntryWidth() {
	return reinterpret_cast<float*>((byte*)this + 876);
}
void UTileView::M_SetEntryWidth(const float& value) {
	Write((byte*)this + 876, value);
}
// Member Getter and Setter of TileAlignment
// Declaration: EListItemAlignment TileAlignment
EListItemAlignment UTileView::M_GetTileAlignment() const {
	return Read<EListItemAlignment>((byte*)this + 880);
}
EListItemAlignment* UTileView::M_PtrGetTileAlignment() {
	return reinterpret_cast<EListItemAlignment*>((byte*)this + 880);
}
void UTileView::M_SetTileAlignment(const EListItemAlignment& value) {
	Write((byte*)this + 880, value);
}
// Member Getter and Setter of bWrapHorizontalNavigation
// Declaration: bool bWrapHorizontalNavigation
bool UTileView::M_GetbWrapHorizontalNavigation() const {
	return Read<bool>((byte*)this + 881);
}
bool* UTileView::M_PtrGetbWrapHorizontalNavigation() {
	return reinterpret_cast<bool*>((byte*)this + 881);
}
void UTileView::M_SetbWrapHorizontalNavigation(const bool& value) {
	Write((byte*)this + 881, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.TileView.GetEntryHeight
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UTileView::GetEntryHeight() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TileView.GetEntryHeight");

	struct UTileView_GetEntryHeight_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UTileView_GetEntryHeight_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.TileView.GetEntryWidth
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UTileView::GetEntryWidth() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TileView.GetEntryWidth");

	struct UTileView_GetEntryWidth_Params {
		float ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UTileView_GetEntryWidth_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.TileView.SetEntryHeight
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewHeight	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UTileView::SetEntryHeight(float NewHeight) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TileView.SetEntryHeight");

	struct UTileView_SetEntryHeight_Params {
		float NewHeight;			//Offset: 0 | ElementSize: 4
	};
	UTileView_SetEntryHeight_Params params;
	params.NewHeight = NewHeight;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.TileView.SetEntryWidth
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewWidth	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UTileView::SetEntryWidth(float NewWidth) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TileView.SetEntryWidth");

	struct UTileView_SetEntryWidth_Params {
		float NewWidth;			//Offset: 0 | ElementSize: 4
	};
	UTileView_SetEntryWidth_Params params;
	params.NewWidth = NewWidth;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}