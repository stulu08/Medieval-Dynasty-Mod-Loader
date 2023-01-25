#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "UMG/Widget.h"
/////////////////////////////////////////////
// Class UMG.Image
// Super: Class UMG.Widget
// Size: 528
// Size inherited: 264
/////////////////////////////////////////////
namespace UE4 {
class UImage : public UWidget {
public:
#pragma region Members
	//struct FSlateBrush	Brush;		//Offset: 264	Size: 136	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	struct FSlateBrush M_GetBrush() const;
	struct FSlateBrush* M_PtrGetBrush();
	void M_SetBrush(const struct FSlateBrush& value);

	//struct FScriptDelegate	BrushDelegate;		//Offset: 400	Size: 16	Flags: ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	struct FScriptDelegate M_GetBrushDelegate() const;
	struct FScriptDelegate* M_PtrGetBrushDelegate();
	void M_SetBrushDelegate(const struct FScriptDelegate& value);

	//struct FLinearColor	ColorAndOpacity;		//Offset: 416	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FLinearColor M_GetColorAndOpacity() const;
	struct FLinearColor* M_PtrGetColorAndOpacity();
	void M_SetColorAndOpacity(const struct FLinearColor& value);

	//struct FScriptDelegate	ColorAndOpacityDelegate;		//Offset: 432	Size: 16	Flags: ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	struct FScriptDelegate M_GetColorAndOpacityDelegate() const;
	struct FScriptDelegate* M_PtrGetColorAndOpacityDelegate();
	void M_SetColorAndOpacityDelegate(const struct FScriptDelegate& value);

	//bool	bFlipForRightToLeftFlowDirection;		//Offset: 448	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbFlipForRightToLeftFlowDirection() const;
	bool* M_PtrGetbFlipForRightToLeftFlowDirection();
	void M_SetbFlipForRightToLeftFlowDirection(const bool& value);

	//struct FScriptDelegate	OnMouseButtonDownEvent;		//Offset: 452	Size: 16	Flags: Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	struct FScriptDelegate M_GetOnMouseButtonDownEvent() const;
	struct FScriptDelegate* M_PtrGetOnMouseButtonDownEvent();
	void M_SetOnMouseButtonDownEvent(const struct FScriptDelegate& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.Image");
		return ptr;
	}

#pragma region Functions
	class UMaterialInstanceDynamic* GetDynamicMaterial();

	void SetBrush(const struct FSlateBrush& InBrush);

	void SetBrushFromAsset(class USlateBrushAsset* Asset);

	void SetBrushFromAtlasInterface(TScriptInterface<class USlateTextureAtlasInterface> AtlasRegion, bool bMatchSize);

	void SetBrushFromMaterial(class UMaterialInterface* Material);

	void SetBrushFromSoftMaterial(TAssetPtr<class UMaterialInterface> SoftMaterial);

	void SetBrushFromSoftTexture(TAssetPtr<class UTexture2D> SoftTexture, bool bMatchSize);

	void SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);

	void SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize);

	void SetBrushResourceObject(class UObject* ResourceObject);

	void SetBrushSize(struct FVector2D DesiredSize);

	void SetBrushTintColor(struct FSlateColor TintColor);

	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity);

	void SetOpacity(float InOpacity);

#pragma endregion
};
};