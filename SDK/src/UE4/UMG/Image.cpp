#include "../SDK.h"
#include "Image.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Brush
// Declaration: struct FSlateBrush Brush
struct FSlateBrush UImage::M_GetBrush() const {
	return Read<struct FSlateBrush>((byte*)this + 264);
}
struct FSlateBrush* UImage::M_PtrGetBrush() {
	return reinterpret_cast<struct FSlateBrush*>((byte*)this + 264);
}
void UImage::M_SetBrush(const struct FSlateBrush& value) {
	Write((byte*)this + 264, value);
}
// Member Getter and Setter of BrushDelegate
// Declaration: struct FScriptDelegate BrushDelegate
struct FScriptDelegate UImage::M_GetBrushDelegate() const {
	return Read<struct FScriptDelegate>((byte*)this + 400);
}
struct FScriptDelegate* UImage::M_PtrGetBrushDelegate() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 400);
}
void UImage::M_SetBrushDelegate(const struct FScriptDelegate& value) {
	Write((byte*)this + 400, value);
}
// Member Getter and Setter of ColorAndOpacity
// Declaration: struct FLinearColor ColorAndOpacity
struct FLinearColor UImage::M_GetColorAndOpacity() const {
	return Read<struct FLinearColor>((byte*)this + 416);
}
struct FLinearColor* UImage::M_PtrGetColorAndOpacity() {
	return reinterpret_cast<struct FLinearColor*>((byte*)this + 416);
}
void UImage::M_SetColorAndOpacity(const struct FLinearColor& value) {
	Write((byte*)this + 416, value);
}
// Member Getter and Setter of ColorAndOpacityDelegate
// Declaration: struct FScriptDelegate ColorAndOpacityDelegate
struct FScriptDelegate UImage::M_GetColorAndOpacityDelegate() const {
	return Read<struct FScriptDelegate>((byte*)this + 432);
}
struct FScriptDelegate* UImage::M_PtrGetColorAndOpacityDelegate() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 432);
}
void UImage::M_SetColorAndOpacityDelegate(const struct FScriptDelegate& value) {
	Write((byte*)this + 432, value);
}
// Member Getter and Setter of bFlipForRightToLeftFlowDirection
// Declaration: bool bFlipForRightToLeftFlowDirection
bool UImage::M_GetbFlipForRightToLeftFlowDirection() const {
	return Read<bool>((byte*)this + 448);
}
bool* UImage::M_PtrGetbFlipForRightToLeftFlowDirection() {
	return reinterpret_cast<bool*>((byte*)this + 448);
}
void UImage::M_SetbFlipForRightToLeftFlowDirection(const bool& value) {
	Write((byte*)this + 448, value);
}
// Member Getter and Setter of OnMouseButtonDownEvent
// Declaration: struct FScriptDelegate OnMouseButtonDownEvent
struct FScriptDelegate UImage::M_GetOnMouseButtonDownEvent() const {
	return Read<struct FScriptDelegate>((byte*)this + 452);
}
struct FScriptDelegate* UImage::M_PtrGetOnMouseButtonDownEvent() {
	return reinterpret_cast<struct FScriptDelegate*>((byte*)this + 452);
}
void UImage::M_SetOnMouseButtonDownEvent(const struct FScriptDelegate& value) {
	Write((byte*)this + 452, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.Image.GetDynamicMaterial
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ReturnValue	Type: class UMaterialInstanceDynamic*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UMaterialInstanceDynamic* UImage::GetDynamicMaterial() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.GetDynamicMaterial");

	struct UImage_GetDynamicMaterial_Params {
		class UMaterialInstanceDynamic* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UImage_GetDynamicMaterial_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.Image.SetBrush
// Flags: Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: InBrush	Type: struct FSlateBrush	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UImage::SetBrush(const struct FSlateBrush& InBrush) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrush");

	struct UImage_SetBrush_Params {
		struct FSlateBrush InBrush;			//Offset: 0 | ElementSize: 136
	};
	UImage_SetBrush_Params params;
	params.InBrush = InBrush;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Image.SetBrushFromAsset
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: Asset	Type: class USlateBrushAsset*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UImage::SetBrushFromAsset(class USlateBrushAsset* Asset) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromAsset");

	struct UImage_SetBrushFromAsset_Params {
		class USlateBrushAsset* Asset;			//Offset: 0 | ElementSize: 8
	};
	UImage_SetBrushFromAsset_Params params;
	params.Asset = Asset;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Image.SetBrushFromAtlasInterface
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: AtlasRegion	Type: TScriptInterface<class USlateTextureAtlasInterface>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
// Name: bMatchSize	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UImage::SetBrushFromAtlasInterface(TScriptInterface<class USlateTextureAtlasInterface> AtlasRegion, bool bMatchSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromAtlasInterface");

	struct UImage_SetBrushFromAtlasInterface_Params {
		TScriptInterface<class USlateTextureAtlasInterface> AtlasRegion;			//Offset: 0 | ElementSize: 16
		bool bMatchSize;			//Offset: 16 | ElementSize: 1
	};
	UImage_SetBrushFromAtlasInterface_Params params;
	params.AtlasRegion = AtlasRegion;
	params.bMatchSize = bMatchSize;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Image.SetBrushFromMaterial
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: Material	Type: class UMaterialInterface*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UImage::SetBrushFromMaterial(class UMaterialInterface* Material) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromMaterial");

	struct UImage_SetBrushFromMaterial_Params {
		class UMaterialInterface* Material;			//Offset: 0 | ElementSize: 8
	};
	UImage_SetBrushFromMaterial_Params params;
	params.Material = Material;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Image.SetBrushFromSoftMaterial
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: SoftMaterial	Type: TAssetPtr<class UMaterialInterface>	Flags: Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UImage::SetBrushFromSoftMaterial(TAssetPtr<class UMaterialInterface> SoftMaterial) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromSoftMaterial");

	struct UImage_SetBrushFromSoftMaterial_Params {
		TAssetPtr<class UMaterialInterface> SoftMaterial;			//Offset: 0 | ElementSize: 40
	};
	UImage_SetBrushFromSoftMaterial_Params params;
	params.SoftMaterial = SoftMaterial;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Image.SetBrushFromSoftTexture
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: SoftTexture	Type: TAssetPtr<class UTexture2D>	Flags: Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bMatchSize	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UImage::SetBrushFromSoftTexture(TAssetPtr<class UTexture2D> SoftTexture, bool bMatchSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromSoftTexture");

	struct UImage_SetBrushFromSoftTexture_Params {
		TAssetPtr<class UTexture2D> SoftTexture;			//Offset: 0 | ElementSize: 40
		bool bMatchSize;			//Offset: 40 | ElementSize: 1
	};
	UImage_SetBrushFromSoftTexture_Params params;
	params.SoftTexture = SoftTexture;
	params.bMatchSize = bMatchSize;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Image.SetBrushFromTexture
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: Texture	Type: class UTexture2D*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bMatchSize	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UImage::SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromTexture");

	struct UImage_SetBrushFromTexture_Params {
		class UTexture2D* Texture;			//Offset: 0 | ElementSize: 8
		bool bMatchSize;			//Offset: 8 | ElementSize: 1
	};
	UImage_SetBrushFromTexture_Params params;
	params.Texture = Texture;
	params.bMatchSize = bMatchSize;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Image.SetBrushFromTextureDynamic
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: Texture	Type: class UTexture2DDynamic*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bMatchSize	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UImage::SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromTextureDynamic");

	struct UImage_SetBrushFromTextureDynamic_Params {
		class UTexture2DDynamic* Texture;			//Offset: 0 | ElementSize: 8
		bool bMatchSize;			//Offset: 8 | ElementSize: 1
	};
	UImage_SetBrushFromTextureDynamic_Params params;
	params.Texture = Texture;
	params.bMatchSize = bMatchSize;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Image.SetBrushResourceObject
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ResourceObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UImage::SetBrushResourceObject(class UObject* ResourceObject) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushResourceObject");

	struct UImage_SetBrushResourceObject_Params {
		class UObject* ResourceObject;			//Offset: 0 | ElementSize: 8
	};
	UImage_SetBrushResourceObject_Params params;
	params.ResourceObject = ResourceObject;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Image.SetBrushSize
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: DesiredSize	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UImage::SetBrushSize(struct FVector2D DesiredSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushSize");

	struct UImage_SetBrushSize_Params {
		struct FVector2D DesiredSize;			//Offset: 0 | ElementSize: 8
	};
	UImage_SetBrushSize_Params params;
	params.DesiredSize = DesiredSize;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Image.SetBrushTintColor
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: TintColor	Type: struct FSlateColor	Flags: Parm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UImage::SetBrushTintColor(struct FSlateColor TintColor) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushTintColor");

	struct UImage_SetBrushTintColor_Params {
		struct FSlateColor TintColor;			//Offset: 0 | ElementSize: 40
	};
	UImage_SetBrushTintColor_Params params;
	params.TintColor = TintColor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Image.SetColorAndOpacity
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: InColorAndOpacity	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UImage::SetColorAndOpacity(struct FLinearColor InColorAndOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetColorAndOpacity");

	struct UImage_SetColorAndOpacity_Params {
		struct FLinearColor InColorAndOpacity;			//Offset: 0 | ElementSize: 16
	};
	UImage_SetColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Image.SetOpacity
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InOpacity	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UImage::SetOpacity(float InOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetOpacity");

	struct UImage_SetOpacity_Params {
		float InOpacity;			//Offset: 0 | ElementSize: 4
	};
	UImage_SetOpacity_Params params;
	params.InOpacity = InOpacity;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}