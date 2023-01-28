#pragma once
#include "Structs.h"
#include "UMG/TextLayoutWidget.h"
/////////////////////////////////////////////
// Class UMG.TextBlock
// Super: Class UMG.TextLayoutWidget
// Size: 680
// Size inherited: 296
/////////////////////////////////////////////
namespace UE4 {
class UTextBlock : public UTextLayoutWidget {
public:
#pragma region Members
	//struct FText	Text;		//Offset: 296	Size: 24	Flags: Edit, NativeAccessSpecifierPublic
	struct FText M_GetText() const;
	struct FText* M_PtrGetText();
	void M_SetText(const struct FText& value);

	//struct FScriptDelegate	TextDelegate;		//Offset: 320	Size: 16	Flags: ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	struct FScriptDelegate M_GetTextDelegate() const;
	struct FScriptDelegate* M_PtrGetTextDelegate();
	void M_SetTextDelegate(const struct FScriptDelegate& value);

	//struct FSlateColor	ColorAndOpacity;		//Offset: 336	Size: 40	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	struct FSlateColor M_GetColorAndOpacity() const;
	struct FSlateColor* M_PtrGetColorAndOpacity();
	void M_SetColorAndOpacity(const struct FSlateColor& value);

	//struct FScriptDelegate	ColorAndOpacityDelegate;		//Offset: 376	Size: 16	Flags: ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	struct FScriptDelegate M_GetColorAndOpacityDelegate() const;
	struct FScriptDelegate* M_PtrGetColorAndOpacityDelegate();
	void M_SetColorAndOpacityDelegate(const struct FScriptDelegate& value);

	//struct FSlateFontInfo	Font;		//Offset: 392	Size: 88	Flags: Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FSlateFontInfo M_GetFont() const;
	struct FSlateFontInfo* M_PtrGetFont();
	void M_SetFont(const struct FSlateFontInfo& value);

	//struct FSlateBrush	StrikeBrush;		//Offset: 480	Size: 136	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	struct FSlateBrush M_GetStrikeBrush() const;
	struct FSlateBrush* M_PtrGetStrikeBrush();
	void M_SetStrikeBrush(const struct FSlateBrush& value);

	//struct FVector2D	ShadowOffset;		//Offset: 616	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector2D M_GetShadowOffset() const;
	struct FVector2D* M_PtrGetShadowOffset();
	void M_SetShadowOffset(const struct FVector2D& value);

	//struct FLinearColor	ShadowColorAndOpacity;		//Offset: 624	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FLinearColor M_GetShadowColorAndOpacity() const;
	struct FLinearColor* M_PtrGetShadowColorAndOpacity();
	void M_SetShadowColorAndOpacity(const struct FLinearColor& value);

	//struct FScriptDelegate	ShadowColorAndOpacityDelegate;		//Offset: 640	Size: 16	Flags: ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	struct FScriptDelegate M_GetShadowColorAndOpacityDelegate() const;
	struct FScriptDelegate* M_PtrGetShadowColorAndOpacityDelegate();
	void M_SetShadowColorAndOpacityDelegate(const struct FScriptDelegate& value);

	//float	MinDesiredWidth;		//Offset: 656	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetMinDesiredWidth() const;
	float* M_PtrGetMinDesiredWidth();
	void M_SetMinDesiredWidth(const float& value);

	//bool	bWrapWithInvalidationPanel;		//Offset: 660	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbWrapWithInvalidationPanel() const;
	bool* M_PtrGetbWrapWithInvalidationPanel();
	void M_SetbWrapWithInvalidationPanel(const bool& value);

	//bool	bAutoWrapText;		//Offset: 661	Size: 1	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbAutoWrapText() const;
	bool* M_PtrGetbAutoWrapText();
	void M_SetbAutoWrapText(const bool& value);

	//ETextTransformPolicy	TextTransformPolicy;		//Offset: 662	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	ETextTransformPolicy M_GetTextTransformPolicy() const;
	ETextTransformPolicy* M_PtrGetTextTransformPolicy();
	void M_SetTextTransformPolicy(const ETextTransformPolicy& value);

	//bool	bSimpleTextMode;		//Offset: 663	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbSimpleTextMode() const;
	bool* M_PtrGetbSimpleTextMode();
	void M_SetbSimpleTextMode(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.TextBlock");
		return ptr;
	}

#pragma region Functions
	class UMaterialInstanceDynamic* GetDynamicFontMaterial();

	class UMaterialInstanceDynamic* GetDynamicOutlineMaterial();

	struct FText GetText()/* const*/;

	void SetAutoWrapText(bool InAutoTextWrap);

	void SetColorAndOpacity(struct FSlateColor InColorAndOpacity);

	void SetFont(struct FSlateFontInfo InFontInfo);

	void SetMinDesiredWidth(float InMinDesiredWidth);

	void SetOpacity(float InOpacity);

	void SetShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity);

	void SetShadowOffset(struct FVector2D InShadowOffset);

	void SetStrikeBrush(struct FSlateBrush InStrikeBrush);

	void SetText(struct FText InText);

	void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy);

#pragma endregion
};
};