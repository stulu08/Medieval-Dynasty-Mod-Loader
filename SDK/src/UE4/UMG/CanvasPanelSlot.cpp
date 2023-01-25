#include "../SDK.h"
#include "CanvasPanelSlot.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of LayoutData
// Declaration: struct FAnchorData LayoutData
struct FAnchorData UCanvasPanelSlot::M_GetLayoutData() const {
	return Read<struct FAnchorData>((byte*)this + 56);
}
struct FAnchorData* UCanvasPanelSlot::M_PtrGetLayoutData() {
	return reinterpret_cast<struct FAnchorData*>((byte*)this + 56);
}
void UCanvasPanelSlot::M_SetLayoutData(const struct FAnchorData& value) {
	Write((byte*)this + 56, value);
}
// Member Getter and Setter of bAutoSize
// Declaration: bool bAutoSize
bool UCanvasPanelSlot::M_GetbAutoSize() const {
	return Read<bool>((byte*)this + 96);
}
bool* UCanvasPanelSlot::M_PtrGetbAutoSize() {
	return reinterpret_cast<bool*>((byte*)this + 96);
}
void UCanvasPanelSlot::M_SetbAutoSize(const bool& value) {
	Write((byte*)this + 96, value);
}
// Member Getter and Setter of ZOrder
// Declaration: int32_t ZOrder
int32_t UCanvasPanelSlot::M_GetZOrder() const {
	return Read<int32_t>((byte*)this + 100);
}
int32_t* UCanvasPanelSlot::M_PtrGetZOrder() {
	return reinterpret_cast<int32_t*>((byte*)this + 100);
}
void UCanvasPanelSlot::M_SetZOrder(const int32_t& value) {
	Write((byte*)this + 100, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.CanvasPanelSlot.GetAlignment
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FVector2D	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector2D UCanvasPanelSlot::GetAlignment() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetAlignment");

	struct UCanvasPanelSlot_GetAlignment_Params {
		struct FVector2D ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UCanvasPanelSlot_GetAlignment_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.CanvasPanelSlot.GetAnchors
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FAnchors	Flags: Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FAnchors UCanvasPanelSlot::GetAnchors() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetAnchors");

	struct UCanvasPanelSlot_GetAnchors_Params {
		struct FAnchors ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UCanvasPanelSlot_GetAnchors_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.CanvasPanelSlot.GetAutoSize
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UCanvasPanelSlot::GetAutoSize() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetAutoSize");

	struct UCanvasPanelSlot_GetAutoSize_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UCanvasPanelSlot_GetAutoSize_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.CanvasPanelSlot.GetLayout
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FAnchorData	Flags: Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FAnchorData UCanvasPanelSlot::GetLayout() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetLayout");

	struct UCanvasPanelSlot_GetLayout_Params {
		struct FAnchorData ReturnValue;			//Offset: 0 | ElementSize: 40
	};
	UCanvasPanelSlot_GetLayout_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.CanvasPanelSlot.GetOffsets
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FMargin	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FMargin UCanvasPanelSlot::GetOffsets() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetOffsets");

	struct UCanvasPanelSlot_GetOffsets_Params {
		struct FMargin ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UCanvasPanelSlot_GetOffsets_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.CanvasPanelSlot.GetPosition
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FVector2D	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector2D UCanvasPanelSlot::GetPosition() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetPosition");

	struct UCanvasPanelSlot_GetPosition_Params {
		struct FVector2D ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UCanvasPanelSlot_GetPosition_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.CanvasPanelSlot.GetSize
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FVector2D	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector2D UCanvasPanelSlot::GetSize() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetSize");

	struct UCanvasPanelSlot_GetSize_Params {
		struct FVector2D ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UCanvasPanelSlot_GetSize_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.CanvasPanelSlot.GetZOrder
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UCanvasPanelSlot::GetZOrder() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetZOrder");

	struct UCanvasPanelSlot_GetZOrder_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UCanvasPanelSlot_GetZOrder_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.CanvasPanelSlot.SetAlignment
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: InAlignment	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCanvasPanelSlot::SetAlignment(struct FVector2D InAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetAlignment");

	struct UCanvasPanelSlot_SetAlignment_Params {
		struct FVector2D InAlignment;			//Offset: 0 | ElementSize: 8
	};
	UCanvasPanelSlot_SetAlignment_Params params;
	params.InAlignment = InAlignment;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.CanvasPanelSlot.SetAnchors
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InAnchors	Type: struct FAnchors	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCanvasPanelSlot::SetAnchors(struct FAnchors InAnchors) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetAnchors");

	struct UCanvasPanelSlot_SetAnchors_Params {
		struct FAnchors InAnchors;			//Offset: 0 | ElementSize: 16
	};
	UCanvasPanelSlot_SetAnchors_Params params;
	params.InAnchors = InAnchors;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.CanvasPanelSlot.SetAutoSize
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InbAutoSize	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCanvasPanelSlot::SetAutoSize(bool InbAutoSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetAutoSize");

	struct UCanvasPanelSlot_SetAutoSize_Params {
		bool InbAutoSize;			//Offset: 0 | ElementSize: 1
	};
	UCanvasPanelSlot_SetAutoSize_Params params;
	params.InbAutoSize = InbAutoSize;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.CanvasPanelSlot.SetLayout
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: InLayoutData	Type: struct FAnchorData	Flags: ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCanvasPanelSlot::SetLayout(const struct FAnchorData& InLayoutData) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetLayout");

	struct UCanvasPanelSlot_SetLayout_Params {
		struct FAnchorData InLayoutData;			//Offset: 0 | ElementSize: 40
	};
	UCanvasPanelSlot_SetLayout_Params params;
	params.InLayoutData = InLayoutData;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.CanvasPanelSlot.SetMaximum
// Flags: Final, Native, Public, HasDefaults
// Params:
// Name: InMaximumAnchors	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCanvasPanelSlot::SetMaximum(struct FVector2D InMaximumAnchors) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetMaximum");

	struct UCanvasPanelSlot_SetMaximum_Params {
		struct FVector2D InMaximumAnchors;			//Offset: 0 | ElementSize: 8
	};
	UCanvasPanelSlot_SetMaximum_Params params;
	params.InMaximumAnchors = InMaximumAnchors;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.CanvasPanelSlot.SetMinimum
// Flags: Final, Native, Public, HasDefaults
// Params:
// Name: InMinimumAnchors	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCanvasPanelSlot::SetMinimum(struct FVector2D InMinimumAnchors) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetMinimum");

	struct UCanvasPanelSlot_SetMinimum_Params {
		struct FVector2D InMinimumAnchors;			//Offset: 0 | ElementSize: 8
	};
	UCanvasPanelSlot_SetMinimum_Params params;
	params.InMinimumAnchors = InMinimumAnchors;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.CanvasPanelSlot.SetOffsets
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InOffset	Type: struct FMargin	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCanvasPanelSlot::SetOffsets(struct FMargin InOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetOffsets");

	struct UCanvasPanelSlot_SetOffsets_Params {
		struct FMargin InOffset;			//Offset: 0 | ElementSize: 16
	};
	UCanvasPanelSlot_SetOffsets_Params params;
	params.InOffset = InOffset;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.CanvasPanelSlot.SetPosition
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: InPosition	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCanvasPanelSlot::SetPosition(struct FVector2D InPosition) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetPosition");

	struct UCanvasPanelSlot_SetPosition_Params {
		struct FVector2D InPosition;			//Offset: 0 | ElementSize: 8
	};
	UCanvasPanelSlot_SetPosition_Params params;
	params.InPosition = InPosition;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.CanvasPanelSlot.SetSize
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: InSize	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCanvasPanelSlot::SetSize(struct FVector2D InSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetSize");

	struct UCanvasPanelSlot_SetSize_Params {
		struct FVector2D InSize;			//Offset: 0 | ElementSize: 8
	};
	UCanvasPanelSlot_SetSize_Params params;
	params.InSize = InSize;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.CanvasPanelSlot.SetZOrder
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InZOrder	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCanvasPanelSlot::SetZOrder(int32_t InZOrder) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetZOrder");

	struct UCanvasPanelSlot_SetZOrder_Params {
		int32_t InZOrder;			//Offset: 0 | ElementSize: 4
	};
	UCanvasPanelSlot_SetZOrder_Params params;
	params.InZOrder = InZOrder;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}