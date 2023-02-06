#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// Enum Slate.EVirtualKeyboardDismissAction
/////////////////////////////////////////////
enum class EVirtualKeyboardDismissAction : uint8_t {
	TextChangeOnDismiss = 0,
	TextCommitOnAccept = 1,
	TextCommitOnDismiss = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum Slate.EVirtualKeyboardTrigger
/////////////////////////////////////////////
enum class EVirtualKeyboardTrigger : uint8_t {
	OnFocusByPointer = 0,
	OnAllFocusEvents = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum Slate.ETableViewMode
/////////////////////////////////////////////
enum class ETableViewMode : uint8_t {
	List = 0,
	Tile = 1,
	Tree = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum Slate.ESelectionMode
/////////////////////////////////////////////
enum class ESelectionMode : uint8_t {
	None = 0,
	Single = 1,
	SingleToggle = 2,
	Multi = 3,
	MAX = 4,
};
/////////////////////////////////////////////
// Enum Slate.EMultiBlockType
/////////////////////////////////////////////
enum class EMultiBlockType : uint8_t {
	None = 0,
	ButtonRow = 1,
	EditableText = 2,
	Heading = 3,
	MenuEntry = 4,
	Separator = 5,
	ToolBarButton = 6,
	ToolBarComboButton = 7,
	Widget = 8,
	MAX = 9,
};
/////////////////////////////////////////////
// Enum Slate.EMultiBoxType
/////////////////////////////////////////////
enum class EMultiBoxType : uint8_t {
	MenuBar = 0,
	ToolBar = 1,
	VerticalToolBar = 2,
	UniformToolBar = 3,
	Menu = 4,
	ButtonRow = 5,
	MAX = 6,
};
/////////////////////////////////////////////
// Enum Slate.EProgressBarFillType
/////////////////////////////////////////////
enum class EProgressBarFillType : uint8_t {
	LeftToRight = 0,
	RightToLeft = 1,
	FillFromCenter = 2,
	TopToBottom = 3,
	BottomToTop = 4,
	MAX = 5,
};
/////////////////////////////////////////////
// Enum Slate.EStretch
/////////////////////////////////////////////
enum class EStretch : uint8_t {
	None = 0,
	Fill = 1,
	ScaleToFit = 2,
	ScaleToFitX = 3,
	ScaleToFitY = 4,
	ScaleToFill = 5,
	ScaleBySafeZone = 6,
	UserSpecified = 7,
	MAX = 8,
};
/////////////////////////////////////////////
// Enum Slate.EStretchDirection
/////////////////////////////////////////////
enum class EStretchDirection : uint8_t {
	Both = 0,
	DownOnly = 1,
	UpOnly = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum Slate.EScrollWhenFocusChanges
/////////////////////////////////////////////
enum class EScrollWhenFocusChanges : uint8_t {
	NoScroll = 0,
	InstantScroll = 1,
	AnimatedScroll = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum Slate.EDescendantScrollDestination
/////////////////////////////////////////////
enum class EDescendantScrollDestination : uint8_t {
	IntoView = 0,
	TopOrLeft = 1,
	Center = 2,
	BottomOrRight = 3,
	MAX = 4,
};
/////////////////////////////////////////////
// Enum Slate.EListItemAlignment
/////////////////////////////////////////////
enum class EListItemAlignment : uint8_t {
	EvenlyDistributed = 0,
	EvenlySize = 1,
	EvenlyWide = 2,
	LeftAligned = 3,
	RightAligned = 4,
	CenterAligned = 5,
	Fill = 6,
	MAX = 7,
};
/////////////////////////////////////////////
// Enum Slate.ETextFlowDirection
/////////////////////////////////////////////
enum class ETextFlowDirection : uint8_t {
	Auto = 0,
	LeftToRight = 1,
	RightToLeft = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum Slate.ETextWrappingPolicy
/////////////////////////////////////////////
enum class ETextWrappingPolicy : uint8_t {
	DefaultWrapping = 0,
	AllowPerCharacterWrapping = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum Slate.ETextTransformPolicy
/////////////////////////////////////////////
enum class ETextTransformPolicy : uint8_t {
	None = 0,
	ToLower = 1,
	ToUpper = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum Slate.ETextJustify
/////////////////////////////////////////////
enum class ETextJustify : uint8_t {
	Left = 0,
	Center = 1,
	Right = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum Slate.ECustomizedToolMenuVisibility
/////////////////////////////////////////////
enum class ECustomizedToolMenuVisibility : uint8_t {
	None = 0,
	Visible = 1,
	Hidden = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum Slate.EMultipleKeyBindingIndex
/////////////////////////////////////////////
enum class EMultipleKeyBindingIndex : uint8_t {
	Primary = 0,
	Secondary = 1,
	NumChords = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum Slate.EUserInterfaceActionType
/////////////////////////////////////////////
enum class EUserInterfaceActionType : uint8_t {
	None = 0,
	Button = 1,
	ToggleButton = 2,
	RadioButton = 3,
	Check = 4,
	CollapsedButton = 5,
	MAX = 6,
};
#pragma endregion

#pragma region Structs
struct FVirtualKeyboardOptions;
struct FInputChord;
struct FAnchors;
struct FCustomizedToolMenu;
struct FCustomizedToolMenuNameArray;
struct FCustomizedToolMenuSection;
struct FCustomizedToolMenuEntry;
/////////////////////////////////////////////
// ScriptStruct Slate.VirtualKeyboardOptions
// Size 1
/////////////////////////////////////////////
struct FVirtualKeyboardOptions {
	bool	bEnableAutocorrect;		//Offset: 0	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct Slate.InputChord
// Size 32
/////////////////////////////////////////////
struct FInputChord {
	struct FKey	Key;		//Offset: 0	Size: 24	Flags: Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bShift : 1;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bCtrl : 1;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bAlt : 1;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bCmd : 1;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[8];		//Offset: 24	Size: 8
};
/////////////////////////////////////////////
// ScriptStruct Slate.Anchors
// Size 16
/////////////////////////////////////////////
struct FAnchors {
	struct FVector2D	Minimum;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector2D	Maximum;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct Slate.CustomizedToolMenu
// Size 488
/////////////////////////////////////////////
struct FCustomizedToolMenu {
	struct FName	Name;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TMap<struct FName, struct FCustomizedToolMenuEntry>	Entries;		//Offset: 8	Size: 80	Flags: NativeAccessSpecifierPublic
	TMap<struct FName, struct FCustomizedToolMenuSection>	Sections;		//Offset: 88	Size: 80	Flags: NativeAccessSpecifierPublic
	TMap<struct FName, struct FCustomizedToolMenuNameArray>	EntryOrder;		//Offset: 168	Size: 80	Flags: NativeAccessSpecifierPublic
	TArray<struct FName>	SectionOrder;		//Offset: 248	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	unsigned char uknownData_0[224];		//Offset: 264	Size: 224
};
/////////////////////////////////////////////
// ScriptStruct Slate.CustomizedToolMenuNameArray
// Size 16
/////////////////////////////////////////////
struct FCustomizedToolMenuNameArray {
	TArray<struct FName>	Names;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct Slate.CustomizedToolMenuSection
// Size 4
/////////////////////////////////////////////
struct FCustomizedToolMenuSection {
	ECustomizedToolMenuVisibility	Visibility;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct Slate.CustomizedToolMenuEntry
// Size 4
/////////////////////////////////////////////
struct FCustomizedToolMenuEntry {
	ECustomizedToolMenuVisibility	Visibility;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
#pragma endregion
}