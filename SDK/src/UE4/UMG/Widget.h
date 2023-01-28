#pragma once
#include "Structs.h"
#include "UMG/Visual.h"
/////////////////////////////////////////////
// Class UMG.Widget
// Super: Class UMG.Visual
// Size: 264
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UWidget : public UVisual {
public:
#pragma region Members
	//class UPanelSlot*	Slot;		//Offset: 40	Size: 8	Flags: Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UPanelSlot* M_GetSlot() const;
	class UPanelSlot** M_PtrGetSlot();
	void M_SetSlot(const class UPanelSlot*& value);

	//struct FScriptDelegate	bIsEnabledDelegate;		//Offset: 48	Size: 16	Flags: ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	struct FScriptDelegate M_GetbIsEnabledDelegate() const;
	struct FScriptDelegate* M_PtrGetbIsEnabledDelegate();
	void M_SetbIsEnabledDelegate(const struct FScriptDelegate& value);

	//struct FText	ToolTipText;		//Offset: 64	Size: 24	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	struct FText M_GetToolTipText() const;
	struct FText* M_PtrGetToolTipText();
	void M_SetToolTipText(const struct FText& value);

	//struct FScriptDelegate	ToolTipTextDelegate;		//Offset: 88	Size: 16	Flags: ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	struct FScriptDelegate M_GetToolTipTextDelegate() const;
	struct FScriptDelegate* M_PtrGetToolTipTextDelegate();
	void M_SetToolTipTextDelegate(const struct FScriptDelegate& value);

	//class UWidget*	ToolTipWidget;		//Offset: 104	Size: 8	Flags: Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UWidget* M_GetToolTipWidget() const;
	class UWidget** M_PtrGetToolTipWidget();
	void M_SetToolTipWidget(const class UWidget*& value);

	//struct FScriptDelegate	ToolTipWidgetDelegate;		//Offset: 112	Size: 16	Flags: ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	struct FScriptDelegate M_GetToolTipWidgetDelegate() const;
	struct FScriptDelegate* M_PtrGetToolTipWidgetDelegate();
	void M_SetToolTipWidgetDelegate(const struct FScriptDelegate& value);

	//struct FScriptDelegate	VisibilityDelegate;		//Offset: 128	Size: 16	Flags: ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	struct FScriptDelegate M_GetVisibilityDelegate() const;
	struct FScriptDelegate* M_PtrGetVisibilityDelegate();
	void M_SetVisibilityDelegate(const struct FScriptDelegate& value);

	//struct FWidgetTransform	RenderTransform;		//Offset: 144	Size: 28	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	struct FWidgetTransform M_GetRenderTransform() const;
	struct FWidgetTransform* M_PtrGetRenderTransform();
	void M_SetRenderTransform(const struct FWidgetTransform& value);

	//struct FVector2D	RenderTransformPivot;		//Offset: 172	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector2D M_GetRenderTransformPivot() const;
	struct FVector2D* M_PtrGetRenderTransformPivot();
	void M_SetRenderTransformPivot(const struct FVector2D& value);

	//unsigned char	bIsVariable : 1;		//Offset: 180	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbIsVariable() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbIsVariable();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbIsVariable(const unsigned char& value);

	//unsigned char	bCreatedByConstructionScript : 1;		//Offset: 180	Size: 1	Flags: Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbCreatedByConstructionScript() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbCreatedByConstructionScript();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbCreatedByConstructionScript(const unsigned char& value);

	//unsigned char	bIsEnabled : 1;		//Offset: 180	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbIsEnabled() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbIsEnabled();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbIsEnabled(const unsigned char& value);

	//unsigned char	bOverride_Cursor : 1;		//Offset: 180	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbOverride_Cursor() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbOverride_Cursor();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbOverride_Cursor(const unsigned char& value);

	//class USlateAccessibleWidgetData*	AccessibleWidgetData;		//Offset: 184	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class USlateAccessibleWidgetData* M_GetAccessibleWidgetData() const;
	class USlateAccessibleWidgetData** M_PtrGetAccessibleWidgetData();
	void M_SetAccessibleWidgetData(const class USlateAccessibleWidgetData*& value);

	//unsigned char	bIsVolatile : 1;		//Offset: 192	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbIsVolatile() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbIsVolatile();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbIsVolatile(const unsigned char& value);

	//TEnumAsByte<EMouseCursor>	Cursor;		//Offset: 193	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EMouseCursor> M_GetCursor() const;
	TEnumAsByte<EMouseCursor>* M_PtrGetCursor();
	void M_SetCursor(const TEnumAsByte<EMouseCursor>& value);

	//EWidgetClipping	Clipping;		//Offset: 194	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EWidgetClipping M_GetClipping() const;
	EWidgetClipping* M_PtrGetClipping();
	void M_SetClipping(const EWidgetClipping& value);

	//ESlateVisibility	Visibility;		//Offset: 195	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	ESlateVisibility M_GetVisibility() const;
	ESlateVisibility* M_PtrGetVisibility();
	void M_SetVisibility(const ESlateVisibility& value);

	//float	RenderOpacity;		//Offset: 196	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetRenderOpacity() const;
	float* M_PtrGetRenderOpacity();
	void M_SetRenderOpacity(const float& value);

	//class UWidgetNavigation*	Navigation;		//Offset: 200	Size: 8	Flags: Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UWidgetNavigation* M_GetNavigation() const;
	class UWidgetNavigation** M_PtrGetNavigation();
	void M_SetNavigation(const class UWidgetNavigation*& value);

	//EFlowDirectionPreference	FlowDirectionPreference;		//Offset: 208	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EFlowDirectionPreference M_GetFlowDirectionPreference() const;
	EFlowDirectionPreference* M_PtrGetFlowDirectionPreference();
	void M_SetFlowDirectionPreference(const EFlowDirectionPreference& value);

	//TArray<class UPropertyBinding*>	NativeBindings;		//Offset: 248	Size: 16	Flags: ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
	TArray<class UPropertyBinding*> M_GetNativeBindings() const;
	TArray<class UPropertyBinding*>* M_PtrGetNativeBindings();
	void M_SetNativeBindings(const TArray<class UPropertyBinding*>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.Widget");
		return ptr;
	}

#pragma region Functions
	void ForceLayoutPrepass();

	void ForceVolatile(bool bForce);

	class UWidget* GenerateWidgetForObject__DelegateSignature(class UObject* Item);

	class UWidget* GenerateWidgetForString__DelegateSignature(struct FString Item);

	struct FText GetAccessibleSummaryText()/* const*/;

	struct FText GetAccessibleText()/* const*/;

	bool GetBool__DelegateSignature();

	struct FGeometry GetCachedGeometry()/* const*/;

	ECheckBoxState GetCheckBoxState__DelegateSignature();

	EWidgetClipping GetClipping()/* const*/;

	struct FVector2D GetDesiredSize()/* const*/;

	float GetFloat__DelegateSignature();

	class UGameInstance* GetGameInstance()/* const*/;

	int32_t GetInt32__DelegateSignature();

	bool GetIsEnabled()/* const*/;

	struct FLinearColor GetLinearColor__DelegateSignature();

	TEnumAsByte<EMouseCursor> GetMouseCursor__DelegateSignature();

	class ULocalPlayer* GetOwningLocalPlayer()/* const*/;

	class APlayerController* GetOwningPlayer()/* const*/;

	struct FGeometry GetPaintSpaceGeometry()/* const*/;

	class UPanelWidget* GetParent()/* const*/;

	float GetRenderOpacity()/* const*/;

	float GetRenderTransformAngle()/* const*/;

	struct FSlateBrush GetSlateBrush__DelegateSignature();

	struct FSlateColor GetSlateColor__DelegateSignature();

	ESlateVisibility GetSlateVisibility__DelegateSignature();

	struct FText GetText__DelegateSignature();

	struct FGeometry GetTickSpaceGeometry()/* const*/;

	ESlateVisibility GetVisibility()/* const*/;

	class UWidget* GetWidget__DelegateSignature();

	bool HasAnyUserFocus()/* const*/;

	bool HasFocusedDescendants()/* const*/;

	bool HasKeyboardFocus()/* const*/;

	bool HasMouseCapture()/* const*/;

	bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex)/* const*/;

	bool HasUserFocus(class APlayerController* PlayerController)/* const*/;

	bool HasUserFocusedDescendants(class APlayerController* PlayerController)/* const*/;

	void InvalidateLayoutAndVolatility();

	bool IsHovered()/* const*/;

	bool IsVisible()/* const*/;

	struct FEventReply OnPointerEvent__DelegateSignature(struct FGeometry MyGeometry, const struct FPointerEvent& MouseEvent);

	struct FEventReply OnReply__DelegateSignature();

	void RemoveFromParent();

	void ResetCursor();

	void SetAllNavigationRules(EUINavigationRule Rule, struct FName WidgetToFocus);

	void SetClipping(EWidgetClipping InClipping);

	void SetCursor(TEnumAsByte<EMouseCursor> InCursor);

	void SetFocus();

	void SetIsEnabled(bool bInIsEnabled);

	void SetKeyboardFocus();

	void SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, struct FName WidgetToFocus);

	void SetNavigationRuleBase(EUINavigation Direction, EUINavigationRule Rule);

	void SetNavigationRuleCustom(EUINavigation Direction, struct FScriptDelegate InCustomDelegate);

	void SetNavigationRuleCustomBoundary(EUINavigation Direction, struct FScriptDelegate InCustomDelegate);

	void SetNavigationRuleExplicit(EUINavigation Direction, class UWidget* InWidget);

	void SetRenderOpacity(float InOpacity);

	void SetRenderScale(struct FVector2D Scale);

	void SetRenderShear(struct FVector2D Shear);

	void SetRenderTransform(struct FWidgetTransform InTransform);

	void SetRenderTransformAngle(float Angle);

	void SetRenderTransformPivot(struct FVector2D Pivot);

	void SetRenderTranslation(struct FVector2D Translation);

	void SetToolTip(class UWidget* Widget);

	void SetToolTipText(const struct FText& InToolTipText);

	void SetUserFocus(class APlayerController* PlayerController);

	void SetVisibility(ESlateVisibility InVisibility);

#pragma endregion
};
};