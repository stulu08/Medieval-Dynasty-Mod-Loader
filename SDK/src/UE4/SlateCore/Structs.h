#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// Enum SlateCore.EWidgetClipping
/////////////////////////////////////////////
enum class EWidgetClipping : uint8_t {
	Inherit = 0,
	ClipToBounds = 1,
	ClipToBoundsWithoutIntersecting = 2,
	ClipToBoundsAlways = 3,
	OnDemand = 4,
	MAX = 5,
};
/////////////////////////////////////////////
// Enum SlateCore.EFontLayoutMethod
/////////////////////////////////////////////
enum class EFontLayoutMethod : uint8_t {
	Metrics = 0,
	BoundingBox = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum SlateCore.EFontLoadingPolicy
/////////////////////////////////////////////
enum class EFontLoadingPolicy : uint8_t {
	LazyLoad = 0,
	Stream = 1,
	Inline = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum SlateCore.EFontHinting
/////////////////////////////////////////////
enum class EFontHinting : uint8_t {
	Default = 0,
	Auto = 1,
	AutoLight = 2,
	Monochrome = 3,
	None = 4,
	MAX = 5,
};
/////////////////////////////////////////////
// Enum SlateCore.EFocusCause
/////////////////////////////////////////////
enum class EFocusCause : uint8_t {
	Mouse = 0,
	Navigation = 1,
	SetDirectly = 2,
	Cleared = 3,
	OtherWidgetLostFocus = 4,
	WindowActivate = 5,
	MAX = 6,
};
/////////////////////////////////////////////
// Enum SlateCore.EFlowDirectionPreference
/////////////////////////////////////////////
enum class EFlowDirectionPreference : uint8_t {
	Inherit = 0,
	Culture = 1,
	LeftToRight = 2,
	RightToLeft = 3,
	MAX = 4,
};
/////////////////////////////////////////////
// Enum SlateCore.ETextShapingMethod
/////////////////////////////////////////////
enum class ETextShapingMethod : uint8_t {
	Auto = 0,
	KerningOnly = 1,
	FullShaping = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum SlateCore.EUINavigationRule
/////////////////////////////////////////////
enum class EUINavigationRule : uint8_t {
	Escape = 0,
	Explicit = 1,
	Wrap = 2,
	Stop = 3,
	Custom = 4,
	CustomBoundary = 5,
	Invalid = 6,
	MAX = 7,
};
/////////////////////////////////////////////
// Enum SlateCore.EColorVisionDeficiency
/////////////////////////////////////////////
enum class EColorVisionDeficiency : uint8_t {
	NormalVision = 0,
	Deuteranope = 1,
	Protanope = 2,
	Tritanope = 3,
	MAX = 4,
};
/////////////////////////////////////////////
// Enum SlateCore.ESlateBrushImageType
/////////////////////////////////////////////
enum class ESlateBrushImageType : uint8_t {
	NoImage = 0,
	FullColor = 1,
	Linear = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum SlateCore.ESlateBrushMirrorType
/////////////////////////////////////////////
enum class ESlateBrushMirrorType : uint8_t {
	NoMirror = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	MAX = 4,
};
/////////////////////////////////////////////
// Enum SlateCore.ESlateBrushTileType
/////////////////////////////////////////////
enum class ESlateBrushTileType : uint8_t {
	NoTile = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	MAX = 4,
};
/////////////////////////////////////////////
// Enum SlateCore.ESlateBrushDrawType
/////////////////////////////////////////////
enum class ESlateBrushDrawType : uint8_t {
	NoDrawType = 0,
	Box = 1,
	Border = 2,
	Image = 3,
	MAX = 4,
};
/////////////////////////////////////////////
// Enum SlateCore.ESlateColorStylingMode
/////////////////////////////////////////////
enum class ESlateColorStylingMode : uint8_t {
	UseColor_Specified = 0,
	UseColor_Specified_Link = 1,
	UseColor_Foreground = 2,
	UseColor_Foreground_Subdued = 3,
	UseColor_MAX = 4,
};
/////////////////////////////////////////////
// Enum SlateCore.ESlateDebuggingFocusEvent
/////////////////////////////////////////////
enum class ESlateDebuggingFocusEvent : uint8_t {
	FocusChanging = 0,
	FocusLost = 1,
	FocusReceived = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum SlateCore.ESlateDebuggingNavigationMethod
/////////////////////////////////////////////
enum class ESlateDebuggingNavigationMethod : uint8_t {
	Unknown = 0,
	Explicit = 1,
	CustomDelegateBound = 2,
	CustomDelegateUnbound = 3,
	NextOrPrevious = 4,
	HitTestGrid = 5,
	MAX = 6,
};
/////////////////////////////////////////////
// Enum SlateCore.ESlateDebuggingStateChangeEvent
/////////////////////////////////////////////
enum class ESlateDebuggingStateChangeEvent : uint8_t {
	MouseCaptureGained = 0,
	MouseCaptureLost = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum SlateCore.ESlateDebuggingInputEvent
/////////////////////////////////////////////
enum class ESlateDebuggingInputEvent : uint8_t {
	MouseMove = 0,
	MouseEnter = 1,
	MouseLeave = 2,
	PreviewMouseButtonDown = 3,
	MouseButtonDown = 4,
	MouseButtonUp = 5,
	MouseButtonDoubleClick = 6,
	MouseWheel = 7,
	TouchStart = 8,
	TouchEnd = 9,
	TouchForceChanged = 10,
	TouchFirstMove = 11,
	TouchMoved = 12,
	DragDetected = 13,
	DragEnter = 14,
	DragLeave = 15,
	DragOver = 16,
	DragDrop = 17,
	DropMessage = 18,
	PreviewKeyDown = 19,
	KeyDown = 20,
	KeyUp = 21,
	KeyChar = 22,
	AnalogInput = 23,
	TouchGesture = 24,
	MotionDetected = 25,
	MAX = 26,
};
/////////////////////////////////////////////
// Enum SlateCore.ESelectInfo
/////////////////////////////////////////////
enum class ESelectInfo : uint8_t {
	OnKeyPress = 0,
	OnNavigation = 1,
	OnMouseClick = 2,
	Direct = 3,
	MAX = 4,
};
/////////////////////////////////////////////
// Enum SlateCore.ETextCommit
/////////////////////////////////////////////
enum class ETextCommit : uint8_t {
	Default = 0,
	OnEnter = 1,
	OnUserMovedFocus = 2,
	OnCleared = 3,
	MAX = 4,
};
/////////////////////////////////////////////
// Enum SlateCore.EScrollDirection
/////////////////////////////////////////////
enum class EScrollDirection : uint8_t {
	Scroll_Down = 0,
	Scroll_Up = 1,
	Scroll_MAX = 2,
};
/////////////////////////////////////////////
// Enum SlateCore.EOrientation
/////////////////////////////////////////////
enum class EOrientation : uint8_t {
	Orient_Horizontal = 0,
	Orient_Vertical = 1,
	Orient_MAX = 2,
};
/////////////////////////////////////////////
// Enum SlateCore.EMenuPlacement
/////////////////////////////////////////////
enum class EMenuPlacement : uint8_t {
	MenuPlacement_BelowAnchor = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_BelowRightAnchor = 2,
	MenuPlacement_ComboBox = 3,
	MenuPlacement_ComboBoxRight = 4,
	MenuPlacement_MenuRight = 5,
	MenuPlacement_AboveAnchor = 6,
	MenuPlacement_CenteredAboveAnchor = 7,
	MenuPlacement_AboveRightAnchor = 8,
	MenuPlacement_MenuLeft = 9,
	MenuPlacement_Center = 10,
	MenuPlacement_RightLeftCenter = 11,
	MenuPlacement_MatchBottomLeft = 12,
	MenuPlacement_MAX = 13,
};
/////////////////////////////////////////////
// Enum SlateCore.EVerticalAlignment
/////////////////////////////////////////////
enum class EVerticalAlignment : uint8_t {
	VAlign_Fill = 0,
	VAlign_Top = 1,
	VAlign_Center = 2,
	VAlign_Bottom = 3,
	VAlign_MAX = 4,
};
/////////////////////////////////////////////
// Enum SlateCore.EHorizontalAlignment
/////////////////////////////////////////////
enum class EHorizontalAlignment : uint8_t {
	HAlign_Fill = 0,
	HAlign_Left = 1,
	HAlign_Center = 2,
	HAlign_Right = 3,
	HAlign_MAX = 4,
};
/////////////////////////////////////////////
// Enum SlateCore.ENavigationGenesis
/////////////////////////////////////////////
enum class ENavigationGenesis : uint8_t {
	Keyboard = 0,
	Controller = 1,
	User = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum SlateCore.ENavigationSource
/////////////////////////////////////////////
enum class ENavigationSource : uint8_t {
	FocusedWidget = 0,
	WidgetUnderCursor = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum SlateCore.EUINavigationAction
/////////////////////////////////////////////
enum class EUINavigationAction : uint8_t {
	Accept = 0,
	Back = 1,
	Num = 2,
	Invalid = 3,
	MAX = 4,
};
/////////////////////////////////////////////
// Enum SlateCore.EUINavigation
/////////////////////////////////////////////
enum class EUINavigation : uint8_t {
	Left = 0,
	Right = 1,
	Up = 2,
	Down = 3,
	Next = 4,
	Previous = 5,
	Num = 6,
	Invalid = 7,
	MAX = 8,
};
/////////////////////////////////////////////
// Enum SlateCore.EButtonPressMethod
/////////////////////////////////////////////
enum class EButtonPressMethod : uint8_t {
	DownAndUp = 0,
	ButtonPress = 1,
	ButtonRelease = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum SlateCore.EButtonTouchMethod
/////////////////////////////////////////////
enum class EButtonTouchMethod : uint8_t {
	DownAndUp = 0,
	Down = 1,
	PreciseTap = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum SlateCore.EButtonClickMethod
/////////////////////////////////////////////
enum class EButtonClickMethod : uint8_t {
	DownAndUp = 0,
	MouseDown = 1,
	MouseUp = 2,
	PreciseClick = 3,
	MAX = 4,
};
/////////////////////////////////////////////
// Enum SlateCore.ECheckBoxState
/////////////////////////////////////////////
enum class ECheckBoxState : uint8_t {
	Unchecked = 0,
	Checked = 1,
	Undetermined = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum SlateCore.ESlateCheckBoxType
/////////////////////////////////////////////
enum class ESlateCheckBoxType : uint8_t {
	CheckBox = 0,
	ToggleButton = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum SlateCore.ESlateParentWindowSearchMethod
/////////////////////////////////////////////
enum class ESlateParentWindowSearchMethod : uint8_t {
	ActiveWindow = 0,
	MainWindow = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum SlateCore.EConsumeMouseWheel
/////////////////////////////////////////////
enum class EConsumeMouseWheel : uint8_t {
	WhenScrollingPossible = 0,
	Always = 1,
	Never = 2,
	MAX = 3,
};
#pragma endregion

#pragma region Structs
struct FGeometry;
struct FMargin;
struct FSlateColor;
struct FSlateBrush;
struct FInputEvent;
struct FPointerEvent;
struct FCharacterEvent;
struct FKeyEvent;
struct FNavigationEvent;
struct FAnalogInputEvent;
struct FFontOutlineSettings;
struct FSlateFontInfo;
struct FSlateWidgetStyle;
struct FTableRowStyle;
struct FSlateSound;
struct FButtonStyle;
struct FComboButtonStyle;
struct FComboBoxStyle;
struct FEditableTextStyle;
struct FScrollBarStyle;
struct FEditableTextBoxStyle;
struct FTextBlockStyle;
struct FSpinBoxStyle;
struct FTypeface;
struct FCompositeFallbackFont;
struct FCompositeFont;
struct FFontData;
struct FTypefaceEntry;
struct FCompositeSubFont;
struct FMotionEvent;
struct FCaptureLostEvent;
struct FFocusEvent;
struct FWindowStyle;
struct FScrollBorderStyle;
struct FScrollBoxStyle;
struct FDockTabStyle;
struct FTableColumnHeaderStyle;
struct FSplitterStyle;
struct FHeaderRowStyle;
struct FInlineTextImageStyle;
struct FSliderStyle;
struct FVolumeControlStyle;
struct FSearchBoxStyle;
struct FExpandableAreaStyle;
struct FProgressBarStyle;
struct FInlineEditableTextBlockStyle;
struct FHyperlinkStyle;
struct FCheckBoxStyle;
/////////////////////////////////////////////
// ScriptStruct SlateCore.Geometry
// Size 56
/////////////////////////////////////////////
struct FGeometry {
	unsigned char uknownData_0[56];		//Offset: 0	Size: 56
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.Margin
// Size 16
/////////////////////////////////////////////
struct FMargin {
	float	Left;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	Top;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	Right;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	Bottom;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.SlateColor
// Size 40
/////////////////////////////////////////////
struct FSlateColor {
	struct FLinearColor	SpecifiedColor;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	TEnumAsByte<ESlateColorStylingMode>	ColorUseRule;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	unsigned char uknownData_0[23];		//Offset: 17	Size: 23
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.SlateBrush
// Size 136
/////////////////////////////////////////////
struct FSlateBrush {
	unsigned char uknownData_0[8];		//Offset: 0	Size: 8
	struct FVector2D	ImageSize;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FMargin	Margin;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FSlateColor	TintColor;		//Offset: 32	Size: 40	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	class UObject*	ResourceObject;		//Offset: 72	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FName	ResourceName;		//Offset: 80	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	struct FBox2D	UVRegion;		//Offset: 88	Size: 20	Flags: ZeroConstructor, NoDestructor, Protected, NativeAccessSpecifierProtected
	TEnumAsByte<ESlateBrushDrawType>	DrawAs;		//Offset: 108	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<ESlateBrushTileType>	Tiling;		//Offset: 109	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<ESlateBrushMirrorType>	Mirroring;		//Offset: 110	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<ESlateBrushImageType>	ImageType;		//Offset: 111	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[16];		//Offset: 112	Size: 16
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bIsDynamicallyLoaded : 1;		//Offset: 128	Size: 1	Flags: NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bHasUObject : 1;		//Offset: 128	Size: 1	Flags: Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	unsigned char uknownData_2[8];		//Offset: 128	Size: 8
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.InputEvent
// Size 24
/////////////////////////////////////////////
struct FInputEvent {
	unsigned char uknownData_0[24];		//Offset: 0	Size: 24
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.PointerEvent
// Super ScriptStruct SlateCore.InputEvent
// Size 112
// Size inherited 24
/////////////////////////////////////////////
struct FPointerEvent : public FInputEvent {
	unsigned char uknownData_0[88];		//Offset: 24	Size: 88
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.CharacterEvent
// Super ScriptStruct SlateCore.InputEvent
// Size 32
// Size inherited 24
/////////////////////////////////////////////
struct FCharacterEvent : public FInputEvent {
	unsigned char uknownData_0[8];		//Offset: 24	Size: 8
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.KeyEvent
// Super ScriptStruct SlateCore.InputEvent
// Size 56
// Size inherited 24
/////////////////////////////////////////////
struct FKeyEvent : public FInputEvent {
	unsigned char uknownData_0[32];		//Offset: 24	Size: 32
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.NavigationEvent
// Super ScriptStruct SlateCore.InputEvent
// Size 32
// Size inherited 24
/////////////////////////////////////////////
struct FNavigationEvent : public FInputEvent {
	unsigned char uknownData_0[8];		//Offset: 24	Size: 8
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.AnalogInputEvent
// Super ScriptStruct SlateCore.KeyEvent
// Size 64
// Size inherited 56
/////////////////////////////////////////////
struct FAnalogInputEvent : public FKeyEvent {
	unsigned char uknownData_0[8];		//Offset: 56	Size: 8
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.FontOutlineSettings
// Size 32
/////////////////////////////////////////////
struct FFontOutlineSettings {
	int32_t	OutlineSize;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bSeparateFillAlpha;		//Offset: 4	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bApplyOutlineToDropShadows;		//Offset: 5	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[2];		//Offset: 6	Size: 2
	class UObject*	OutlineMaterial;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FLinearColor	OutlineColor;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.SlateFontInfo
// Size 88
/////////////////////////////////////////////
struct FSlateFontInfo {
	class UObject*	FontObject;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UObject*	FontMaterial;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FFontOutlineSettings	OutlineSettings;		//Offset: 16	Size: 32	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[16];		//Offset: 48	Size: 16
	struct FName	TypefaceFontName;		//Offset: 64	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t	Size;		//Offset: 72	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t	LetterSpacing;		//Offset: 76	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[8];		//Offset: 80	Size: 8
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.SlateWidgetStyle
// Size 8
/////////////////////////////////////////////
struct FSlateWidgetStyle {
	unsigned char uknownData_0[8];		//Offset: 0	Size: 8
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.TableRowStyle
// Super ScriptStruct SlateCore.SlateWidgetStyle
// Size 1992
// Size inherited 8
/////////////////////////////////////////////
struct FTableRowStyle : public FSlateWidgetStyle {
	struct FSlateBrush	SelectorFocusedBrush;		//Offset: 8	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	ActiveHoveredBrush;		//Offset: 144	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	ActiveBrush;		//Offset: 280	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	InactiveHoveredBrush;		//Offset: 416	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	InactiveBrush;		//Offset: 552	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	EvenRowBackgroundHoveredBrush;		//Offset: 688	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	EvenRowBackgroundBrush;		//Offset: 824	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	OddRowBackgroundHoveredBrush;		//Offset: 960	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	OddRowBackgroundBrush;		//Offset: 1096	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateColor	TextColor;		//Offset: 1232	Size: 40	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateColor	SelectedTextColor;		//Offset: 1272	Size: 40	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	DropIndicator_Above;		//Offset: 1312	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	DropIndicator_Onto;		//Offset: 1448	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	DropIndicator_Below;		//Offset: 1584	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	ActiveHighlightedBrush;		//Offset: 1720	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	InactiveHighlightedBrush;		//Offset: 1856	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.SlateSound
// Size 24
/////////////////////////////////////////////
struct FSlateSound {
	class UObject*	ResourceObject;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	unsigned char uknownData_0[16];		//Offset: 8	Size: 16
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.ButtonStyle
// Super ScriptStruct SlateCore.SlateWidgetStyle
// Size 632
// Size inherited 8
/////////////////////////////////////////////
struct FButtonStyle : public FSlateWidgetStyle {
	struct FSlateBrush	Normal;		//Offset: 8	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	Hovered;		//Offset: 144	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	Pressed;		//Offset: 280	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	Disabled;		//Offset: 416	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FMargin	NormalPadding;		//Offset: 552	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FMargin	PressedPadding;		//Offset: 568	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FSlateSound	PressedSlateSound;		//Offset: 584	Size: 24	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	struct FSlateSound	HoveredSlateSound;		//Offset: 608	Size: 24	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.ComboButtonStyle
// Super ScriptStruct SlateCore.SlateWidgetStyle
// Size 952
// Size inherited 8
/////////////////////////////////////////////
struct FComboButtonStyle : public FSlateWidgetStyle {
	struct FButtonStyle	ButtonStyle;		//Offset: 8	Size: 632	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	DownArrowImage;		//Offset: 640	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FVector2D	ShadowOffset;		//Offset: 776	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FLinearColor	ShadowColorAndOpacity;		//Offset: 784	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FSlateBrush	MenuBorderBrush;		//Offset: 800	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FMargin	MenuBorderPadding;		//Offset: 936	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.ComboBoxStyle
// Super ScriptStruct SlateCore.SlateWidgetStyle
// Size 1008
// Size inherited 8
/////////////////////////////////////////////
struct FComboBoxStyle : public FSlateWidgetStyle {
	struct FComboButtonStyle	ComboButtonStyle;		//Offset: 8	Size: 952	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateSound	PressedSlateSound;		//Offset: 960	Size: 24	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	struct FSlateSound	SelectionChangeSlateSound;		//Offset: 984	Size: 24	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.EditableTextStyle
// Super ScriptStruct SlateCore.SlateWidgetStyle
// Size 544
// Size inherited 8
/////////////////////////////////////////////
struct FEditableTextStyle : public FSlateWidgetStyle {
	struct FSlateFontInfo	Font;		//Offset: 8	Size: 88	Flags: Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FSlateColor	ColorAndOpacity;		//Offset: 96	Size: 40	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	BackgroundImageSelected;		//Offset: 136	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	BackgroundImageComposing;		//Offset: 272	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	CaretImage;		//Offset: 408	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.ScrollBarStyle
// Super ScriptStruct SlateCore.SlateWidgetStyle
// Size 1232
// Size inherited 8
/////////////////////////////////////////////
struct FScrollBarStyle : public FSlateWidgetStyle {
	struct FSlateBrush	HorizontalBackgroundImage;		//Offset: 8	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	VerticalBackgroundImage;		//Offset: 144	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	VerticalTopSlotImage;		//Offset: 280	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	HorizontalTopSlotImage;		//Offset: 416	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	VerticalBottomSlotImage;		//Offset: 552	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	HorizontalBottomSlotImage;		//Offset: 688	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	NormalThumbImage;		//Offset: 824	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	HoveredThumbImage;		//Offset: 960	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	DraggedThumbImage;		//Offset: 1096	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.EditableTextBoxStyle
// Super ScriptStruct SlateCore.SlateWidgetStyle
// Size 2040
// Size inherited 8
/////////////////////////////////////////////
struct FEditableTextBoxStyle : public FSlateWidgetStyle {
	struct FSlateBrush	BackgroundImageNormal;		//Offset: 8	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	BackgroundImageHovered;		//Offset: 144	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	BackgroundImageFocused;		//Offset: 280	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	BackgroundImageReadOnly;		//Offset: 416	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FMargin	Padding;		//Offset: 552	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FSlateFontInfo	Font;		//Offset: 568	Size: 88	Flags: Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FSlateColor	ForegroundColor;		//Offset: 656	Size: 40	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateColor	BackgroundColor;		//Offset: 696	Size: 40	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateColor	ReadOnlyForegroundColor;		//Offset: 736	Size: 40	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FMargin	HScrollBarPadding;		//Offset: 776	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FMargin	VScrollBarPadding;		//Offset: 792	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FScrollBarStyle	ScrollBarStyle;		//Offset: 808	Size: 1232	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.TextBlockStyle
// Super ScriptStruct SlateCore.SlateWidgetStyle
// Size 624
// Size inherited 8
/////////////////////////////////////////////
struct FTextBlockStyle : public FSlateWidgetStyle {
	struct FSlateFontInfo	Font;		//Offset: 8	Size: 88	Flags: Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FSlateColor	ColorAndOpacity;		//Offset: 96	Size: 40	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FVector2D	ShadowOffset;		//Offset: 136	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FLinearColor	ShadowColorAndOpacity;		//Offset: 144	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FSlateColor	SelectedBackgroundColor;		//Offset: 160	Size: 40	Flags: Edit, NativeAccessSpecifierPublic
	struct FLinearColor	HighlightColor;		//Offset: 200	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FSlateBrush	HighlightShape;		//Offset: 216	Size: 136	Flags: Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic
	struct FSlateBrush	StrikeBrush;		//Offset: 352	Size: 136	Flags: Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic
	struct FSlateBrush	UnderlineBrush;		//Offset: 488	Size: 136	Flags: Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.SpinBoxStyle
// Super ScriptStruct SlateCore.SlateWidgetStyle
// Size 744
// Size inherited 8
/////////////////////////////////////////////
struct FSpinBoxStyle : public FSlateWidgetStyle {
	struct FSlateBrush	BackgroundBrush;		//Offset: 8	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	HoveredBackgroundBrush;		//Offset: 144	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	ActiveFillBrush;		//Offset: 280	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	InactiveFillBrush;		//Offset: 416	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	ArrowsImage;		//Offset: 552	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateColor	ForegroundColor;		//Offset: 688	Size: 40	Flags: NativeAccessSpecifierPublic
	struct FMargin	TextPadding;		//Offset: 728	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.Typeface
// Size 16
/////////////////////////////////////////////
struct FTypeface {
	TArray<struct FTypefaceEntry>	Fonts;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.CompositeFallbackFont
// Size 24
/////////////////////////////////////////////
struct FCompositeFallbackFont {
	struct FTypeface	Typeface;		//Offset: 0	Size: 16	Flags: NativeAccessSpecifierPublic
	float	ScalingFactor;		//Offset: 16	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 20	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.CompositeFont
// Size 56
/////////////////////////////////////////////
struct FCompositeFont {
	struct FTypeface	DefaultTypeface;		//Offset: 0	Size: 16	Flags: NativeAccessSpecifierPublic
	struct FCompositeFallbackFont	FallbackTypeface;		//Offset: 16	Size: 24	Flags: NativeAccessSpecifierPublic
	TArray<struct FCompositeSubFont>	SubTypefaces;		//Offset: 40	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.FontData
// Size 32
/////////////////////////////////////////////
struct FFontData {
	struct FString	FontFilename;		//Offset: 0	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	EFontHinting	Hinting;		//Offset: 16	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	EFontLoadingPolicy	LoadingPolicy;		//Offset: 17	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	unsigned char uknownData_0[2];		//Offset: 18	Size: 2
	int32_t	SubFaceIndex;		//Offset: 20	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class UObject*	FontFaceAsset;		//Offset: 24	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.TypefaceEntry
// Size 40
/////////////////////////////////////////////
struct FTypefaceEntry {
	struct FName	Name;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FFontData	Font;		//Offset: 8	Size: 32	Flags: HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.CompositeSubFont
// Super ScriptStruct SlateCore.CompositeFallbackFont
// Size 56
// Size inherited 24
/////////////////////////////////////////////
struct FCompositeSubFont : public FCompositeFallbackFont {
	TArray<struct FInt32Range>	CharacterRanges;		//Offset: 24	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	struct FString	Cultures;		//Offset: 40	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.MotionEvent
// Super ScriptStruct SlateCore.InputEvent
// Size 72
// Size inherited 24
/////////////////////////////////////////////
struct FMotionEvent : public FInputEvent {
	unsigned char uknownData_0[48];		//Offset: 24	Size: 48
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.CaptureLostEvent
// Size 8
/////////////////////////////////////////////
struct FCaptureLostEvent {
	unsigned char uknownData_0[8];		//Offset: 0	Size: 8
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.FocusEvent
// Size 8
/////////////////////////////////////////////
struct FFocusEvent {
	unsigned char uknownData_0[8];		//Offset: 0	Size: 8
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.WindowStyle
// Super ScriptStruct SlateCore.SlateWidgetStyle
// Size 4192
// Size inherited 8
/////////////////////////////////////////////
struct FWindowStyle : public FSlateWidgetStyle {
	struct FButtonStyle	MinimizeButtonStyle;		//Offset: 8	Size: 632	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FButtonStyle	MaximizeButtonStyle;		//Offset: 640	Size: 632	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FButtonStyle	RestoreButtonStyle;		//Offset: 1272	Size: 632	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FButtonStyle	CloseButtonStyle;		//Offset: 1904	Size: 632	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FTextBlockStyle	TitleTextStyle;		//Offset: 2536	Size: 624	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	ActiveTitleBrush;		//Offset: 3160	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	InactiveTitleBrush;		//Offset: 3296	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	FlashTitleBrush;		//Offset: 3432	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateColor	BackgroundColor;		//Offset: 3568	Size: 40	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	OutlineBrush;		//Offset: 3608	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateColor	OutlineColor;		//Offset: 3744	Size: 40	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	BorderBrush;		//Offset: 3784	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	BackgroundBrush;		//Offset: 3920	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	ChildBackgroundBrush;		//Offset: 4056	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.ScrollBorderStyle
// Super ScriptStruct SlateCore.SlateWidgetStyle
// Size 280
// Size inherited 8
/////////////////////////////////////////////
struct FScrollBorderStyle : public FSlateWidgetStyle {
	struct FSlateBrush	TopShadowBrush;		//Offset: 8	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	BottomShadowBrush;		//Offset: 144	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.ScrollBoxStyle
// Super ScriptStruct SlateCore.SlateWidgetStyle
// Size 552
// Size inherited 8
/////////////////////////////////////////////
struct FScrollBoxStyle : public FSlateWidgetStyle {
	struct FSlateBrush	TopShadowBrush;		//Offset: 8	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	BottomShadowBrush;		//Offset: 144	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	LeftShadowBrush;		//Offset: 280	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	RightShadowBrush;		//Offset: 416	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.DockTabStyle
// Super ScriptStruct SlateCore.SlateWidgetStyle
// Size 1792
// Size inherited 8
/////////////////////////////////////////////
struct FDockTabStyle : public FSlateWidgetStyle {
	struct FButtonStyle	CloseButtonStyle;		//Offset: 8	Size: 632	Flags: Edit, NativeAccessSpecifierPublic
	struct FSlateBrush	NormalBrush;		//Offset: 640	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
	struct FSlateBrush	ActiveBrush;		//Offset: 776	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
	struct FSlateBrush	ColorOverlayTabBrush;		//Offset: 912	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
	struct FSlateBrush	ColorOverlayIconBrush;		//Offset: 1048	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
	struct FSlateBrush	ForegroundBrush;		//Offset: 1184	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
	struct FSlateBrush	HoveredBrush;		//Offset: 1320	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
	struct FSlateBrush	ContentAreaBrush;		//Offset: 1456	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
	struct FSlateBrush	TabWellBrush;		//Offset: 1592	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
	struct FMargin	TabPadding;		//Offset: 1728	Size: 16	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	float	OverlapWidth;		//Offset: 1744	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 1748	Size: 4
	struct FSlateColor	FlashColor;		//Offset: 1752	Size: 40	Flags: Edit, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.TableColumnHeaderStyle
// Super ScriptStruct SlateCore.SlateWidgetStyle
// Size 1232
// Size inherited 8
/////////////////////////////////////////////
struct FTableColumnHeaderStyle : public FSlateWidgetStyle {
	struct FSlateBrush	SortPrimaryAscendingImage;		//Offset: 8	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
	struct FSlateBrush	SortPrimaryDescendingImage;		//Offset: 144	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
	struct FSlateBrush	SortSecondaryAscendingImage;		//Offset: 280	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
	struct FSlateBrush	SortSecondaryDescendingImage;		//Offset: 416	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
	struct FSlateBrush	NormalBrush;		//Offset: 552	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
	struct FSlateBrush	HoveredBrush;		//Offset: 688	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
	struct FSlateBrush	MenuDropdownImage;		//Offset: 824	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
	struct FSlateBrush	MenuDropdownNormalBorderBrush;		//Offset: 960	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
	struct FSlateBrush	MenuDropdownHoveredBorderBrush;		//Offset: 1096	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.SplitterStyle
// Super ScriptStruct SlateCore.SlateWidgetStyle
// Size 280
// Size inherited 8
/////////////////////////////////////////////
struct FSplitterStyle : public FSlateWidgetStyle {
	struct FSlateBrush	HandleNormalBrush;		//Offset: 8	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	HandleHighlightBrush;		//Offset: 144	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.HeaderRowStyle
// Super ScriptStruct SlateCore.SlateWidgetStyle
// Size 2928
// Size inherited 8
/////////////////////////////////////////////
struct FHeaderRowStyle : public FSlateWidgetStyle {
	struct FTableColumnHeaderStyle	ColumnStyle;		//Offset: 8	Size: 1232	Flags: Edit, NativeAccessSpecifierPublic
	struct FTableColumnHeaderStyle	LastColumnStyle;		//Offset: 1240	Size: 1232	Flags: Edit, NativeAccessSpecifierPublic
	struct FSplitterStyle	ColumnSplitterStyle;		//Offset: 2472	Size: 280	Flags: Edit, NativeAccessSpecifierPublic
	struct FSlateBrush	BackgroundBrush;		//Offset: 2752	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
	struct FSlateColor	ForegroundColor;		//Offset: 2888	Size: 40	Flags: Edit, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.InlineTextImageStyle
// Super ScriptStruct SlateCore.SlateWidgetStyle
// Size 152
// Size inherited 8
/////////////////////////////////////////////
struct FInlineTextImageStyle : public FSlateWidgetStyle {
	struct FSlateBrush	Image;		//Offset: 8	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
	int16_t	Baseline;		//Offset: 144	Size: 2	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[6];		//Offset: 146	Size: 6
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.SliderStyle
// Super ScriptStruct SlateCore.SlateWidgetStyle
// Size 832
// Size inherited 8
/////////////////////////////////////////////
struct FSliderStyle : public FSlateWidgetStyle {
	struct FSlateBrush	NormalBarImage;		//Offset: 8	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	HoveredBarImage;		//Offset: 144	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	DisabledBarImage;		//Offset: 280	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	NormalThumbImage;		//Offset: 416	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	HoveredThumbImage;		//Offset: 552	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	DisabledThumbImage;		//Offset: 688	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	float	BarThickness;		//Offset: 824	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 828	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.VolumeControlStyle
// Super ScriptStruct SlateCore.SlateWidgetStyle
// Size 1520
// Size inherited 8
/////////////////////////////////////////////
struct FVolumeControlStyle : public FSlateWidgetStyle {
	struct FSliderStyle	SliderStyle;		//Offset: 8	Size: 832	Flags: Edit, NativeAccessSpecifierPublic
	struct FSlateBrush	HighVolumeImage;		//Offset: 840	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
	struct FSlateBrush	MidVolumeImage;		//Offset: 976	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
	struct FSlateBrush	LowVolumeImage;		//Offset: 1112	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
	struct FSlateBrush	NoVolumeImage;		//Offset: 1248	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
	struct FSlateBrush	MutedImage;		//Offset: 1384	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.SearchBoxStyle
// Super ScriptStruct SlateCore.SlateWidgetStyle
// Size 2704
// Size inherited 8
/////////////////////////////////////////////
struct FSearchBoxStyle : public FSlateWidgetStyle {
	struct FEditableTextBoxStyle	TextBoxStyle;		//Offset: 8	Size: 2040	Flags: Edit, NativeAccessSpecifierPublic
	struct FSlateFontInfo	ActiveFontInfo;		//Offset: 2048	Size: 88	Flags: Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FSlateBrush	UpArrowImage;		//Offset: 2136	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
	struct FSlateBrush	DownArrowImage;		//Offset: 2272	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
	struct FSlateBrush	GlassImage;		//Offset: 2408	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
	struct FSlateBrush	ClearImage;		//Offset: 2544	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
	struct FMargin	ImagePadding;		//Offset: 2680	Size: 16	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	bool	bLeftAlignButtons;		//Offset: 2696	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[7];		//Offset: 2697	Size: 7
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.ExpandableAreaStyle
// Super ScriptStruct SlateCore.SlateWidgetStyle
// Size 288
// Size inherited 8
/////////////////////////////////////////////
struct FExpandableAreaStyle : public FSlateWidgetStyle {
	struct FSlateBrush	CollapsedImage;		//Offset: 8	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
	struct FSlateBrush	ExpandedImage;		//Offset: 144	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
	float	RolloutAnimationSeconds;		//Offset: 280	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 284	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.ProgressBarStyle
// Super ScriptStruct SlateCore.SlateWidgetStyle
// Size 416
// Size inherited 8
/////////////////////////////////////////////
struct FProgressBarStyle : public FSlateWidgetStyle {
	struct FSlateBrush	BackgroundImage;		//Offset: 8	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	FillImage;		//Offset: 144	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	MarqueeImage;		//Offset: 280	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.InlineEditableTextBlockStyle
// Super ScriptStruct SlateCore.SlateWidgetStyle
// Size 2672
// Size inherited 8
/////////////////////////////////////////////
struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle {
	struct FEditableTextBoxStyle	EditableTextBoxStyle;		//Offset: 8	Size: 2040	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FTextBlockStyle	TextStyle;		//Offset: 2048	Size: 624	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.HyperlinkStyle
// Super ScriptStruct SlateCore.SlateWidgetStyle
// Size 1280
// Size inherited 8
/////////////////////////////////////////////
struct FHyperlinkStyle : public FSlateWidgetStyle {
	struct FButtonStyle	UnderlineStyle;		//Offset: 8	Size: 632	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FTextBlockStyle	TextStyle;		//Offset: 640	Size: 624	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FMargin	Padding;		//Offset: 1264	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct SlateCore.CheckBoxStyle
// Super ScriptStruct SlateCore.SlateWidgetStyle
// Size 1408
// Size inherited 8
/////////////////////////////////////////////
struct FCheckBoxStyle : public FSlateWidgetStyle {
	TEnumAsByte<ESlateCheckBoxType>	CheckBoxType;		//Offset: 8	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[7];		//Offset: 9	Size: 7
	struct FSlateBrush	UncheckedImage;		//Offset: 16	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	UncheckedHoveredImage;		//Offset: 152	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	UncheckedPressedImage;		//Offset: 288	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	CheckedImage;		//Offset: 424	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	CheckedHoveredImage;		//Offset: 560	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	CheckedPressedImage;		//Offset: 696	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	UndeterminedImage;		//Offset: 832	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	UndeterminedHoveredImage;		//Offset: 968	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateBrush	UndeterminedPressedImage;		//Offset: 1104	Size: 136	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FMargin	Padding;		//Offset: 1240	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FSlateColor	ForegroundColor;		//Offset: 1256	Size: 40	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateColor	BorderBackgroundColor;		//Offset: 1296	Size: 40	Flags: Edit, BlueprintVisible, NativeAccessSpecifierPublic
	struct FSlateSound	CheckedSlateSound;		//Offset: 1336	Size: 24	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	struct FSlateSound	UncheckedSlateSound;		//Offset: 1360	Size: 24	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	struct FSlateSound	HoveredSlateSound;		//Offset: 1384	Size: 24	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
};
#pragma endregion
}