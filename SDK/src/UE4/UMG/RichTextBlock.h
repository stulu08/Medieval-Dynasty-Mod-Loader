#pragma once
#include "Structs.h"
#include "UMG/TextLayoutWidget.h"
/////////////////////////////////////////////
// Class UMG.RichTextBlock
// Super: Class UMG.TextLayoutWidget
// Size: 1656
// Size inherited: 296
/////////////////////////////////////////////
namespace UE4 {
class URichTextBlock : public UTextLayoutWidget {
public:
#pragma region Members
	//struct FText	Text;		//Offset: 296	Size: 24	Flags: Edit, Protected, NativeAccessSpecifierProtected
	struct FText M_GetText() const;
	struct FText* M_PtrGetText();
	void M_SetText(const struct FText& value);

	//class UDataTable*	TextStyleSet;		//Offset: 320	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UDataTable* M_GetTextStyleSet() const;
	class UDataTable** M_PtrGetTextStyleSet();
	void M_SetTextStyleSet(const class UDataTable*& value);

	//TArray<class URichTextBlockDecorator*>	DecoratorClasses;		//Offset: 328	Size: 16	Flags: Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
	TArray<class URichTextBlockDecorator*> M_GetDecoratorClasses() const;
	TArray<class URichTextBlockDecorator*>* M_PtrGetDecoratorClasses();
	void M_SetDecoratorClasses(const TArray<class URichTextBlockDecorator*>& value);

	//bool	bOverrideDefaultStyle;		//Offset: 344	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	bool M_GetbOverrideDefaultStyle() const;
	bool* M_PtrGetbOverrideDefaultStyle();
	void M_SetbOverrideDefaultStyle(const bool& value);

	//struct FTextBlockStyle	DefaultTextStyleOverride;		//Offset: 352	Size: 624	Flags: Edit, Protected, NativeAccessSpecifierProtected
	struct FTextBlockStyle M_GetDefaultTextStyleOverride() const;
	struct FTextBlockStyle* M_PtrGetDefaultTextStyleOverride();
	void M_SetDefaultTextStyleOverride(const struct FTextBlockStyle& value);

	//float	MinDesiredWidth;		//Offset: 976	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetMinDesiredWidth() const;
	float* M_PtrGetMinDesiredWidth();
	void M_SetMinDesiredWidth(const float& value);

	//ETextTransformPolicy	TextTransformPolicy;		//Offset: 980	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	ETextTransformPolicy M_GetTextTransformPolicy() const;
	ETextTransformPolicy* M_PtrGetTextTransformPolicy();
	void M_SetTextTransformPolicy(const ETextTransformPolicy& value);

	//struct FTextBlockStyle	DefaultTextStyle;		//Offset: 984	Size: 624	Flags: Transient, Protected, NativeAccessSpecifierProtected
	struct FTextBlockStyle M_GetDefaultTextStyle() const;
	struct FTextBlockStyle* M_PtrGetDefaultTextStyle();
	void M_SetDefaultTextStyle(const struct FTextBlockStyle& value);

	//TArray<class URichTextBlockDecorator*>	InstanceDecorators;		//Offset: 1608	Size: 16	Flags: ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
	TArray<class URichTextBlockDecorator*> M_GetInstanceDecorators() const;
	TArray<class URichTextBlockDecorator*>* M_PtrGetInstanceDecorators();
	void M_SetInstanceDecorators(const TArray<class URichTextBlockDecorator*>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.RichTextBlock");
		return ptr;
	}

#pragma region Functions
	void ClearAllDefaultStyleOverrides();

	class URichTextBlockDecorator* GetDecoratorByClass(class URichTextBlockDecorator* DecoratorClass);

	struct FText GetText()/* const*/;

	void SetAutoWrapText(bool InAutoTextWrap);

	void SetDefaultColorAndOpacity(struct FSlateColor InColorAndOpacity);

	void SetDefaultFont(struct FSlateFontInfo InFontInfo);

	void SetDefaultShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity);

	void SetDefaultShadowOffset(struct FVector2D InShadowOffset);

	void SetDefaultStrikeBrush(struct FSlateBrush* InStrikeBrush);

	void SetDefaultTextStyle(const struct FTextBlockStyle& InDefaultTextStyle);

	void SetMinDesiredWidth(float InMinDesiredWidth);

	void SetText(const struct FText& InText);

	void SetTextStyleSet(class UDataTable* NewTextStyleSet);

	void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy);

#pragma endregion
};
};