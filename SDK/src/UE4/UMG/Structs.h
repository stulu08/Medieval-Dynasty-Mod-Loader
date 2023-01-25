#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// Enum UMG.ESlateAccessibleBehavior
/////////////////////////////////////////////
enum class ESlateAccessibleBehavior : uint8_t {
	NotAccessible = 0,
	Auto = 1,
	Summary = 2,
	Custom = 3,
	ToolTip = 4,
	MAX = 5,
};
/////////////////////////////////////////////
// Enum UMG.ESlateVisibility
/////////////////////////////////////////////
enum class ESlateVisibility : uint8_t {
	Visible = 0,
	Collapsed = 1,
	Hidden = 2,
	HitTestInvisible = 3,
	SelfHitTestInvisible = 4,
	MAX = 5,
};
/////////////////////////////////////////////
// Enum UMG.EVirtualKeyboardType
/////////////////////////////////////////////
enum class EVirtualKeyboardType : uint8_t {
	Default = 0,
	Number = 1,
	Web = 2,
	Email = 3,
	Password = 4,
	AlphaNumeric = 5,
	MAX = 6,
};
/////////////////////////////////////////////
// Enum UMG.EDragPivot
/////////////////////////////////////////////
enum class EDragPivot : uint8_t {
	MouseDown = 0,
	TopLeft = 1,
	TopCenter = 2,
	TopRight = 3,
	CenterLeft = 4,
	CenterCenter = 5,
	CenterRight = 6,
	BottomLeft = 7,
	BottomCenter = 8,
	BottomRight = 9,
	MAX = 10,
};
/////////////////////////////////////////////
// Enum UMG.EDynamicBoxType
/////////////////////////////////////////////
enum class EDynamicBoxType : uint8_t {
	Horizontal = 0,
	Vertical = 1,
	Wrap = 2,
	VerticalWrap = 3,
	Radial = 4,
	Overlay = 5,
	MAX = 6,
};
/////////////////////////////////////////////
// Enum UMG.ESlateSizeRule
/////////////////////////////////////////////
enum class ESlateSizeRule : uint8_t {
	Automatic = 0,
	Fill = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum UMG.EUMGSequencePlayMode
/////////////////////////////////////////////
enum class EUMGSequencePlayMode : uint8_t {
	Forward = 0,
	Reverse = 1,
	PingPong = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum UMG.EWidgetAnimationEvent
/////////////////////////////////////////////
enum class EWidgetAnimationEvent : uint8_t {
	Started = 0,
	Finished = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum UMG.EWidgetTickFrequency
/////////////////////////////////////////////
enum class EWidgetTickFrequency : uint8_t {
	Never = 0,
	Auto = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum UMG.EWidgetDesignFlags
/////////////////////////////////////////////
enum class EWidgetDesignFlags : uint8_t {
	None = 0,
	Designing = 1,
	ShowOutline = 2,
	ExecutePreConstruct = 3,
	MAX = 4,
};
/////////////////////////////////////////////
// Enum UMG.EBindingKind
/////////////////////////////////////////////
enum class EBindingKind : uint8_t {
	Function = 0,
	Property = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum UMG.ETickMode
/////////////////////////////////////////////
enum class ETickMode : uint8_t {
	Disabled = 0,
	Enabled = 1,
	Automatic = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum UMG.EWindowVisibility
/////////////////////////////////////////////
enum class EWindowVisibility : uint8_t {
	Visible = 0,
	SelfHitTestInvisible = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum UMG.EWidgetGeometryMode
/////////////////////////////////////////////
enum class EWidgetGeometryMode : uint8_t {
	Plane = 0,
	Cylinder = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum UMG.EWidgetBlendMode
/////////////////////////////////////////////
enum class EWidgetBlendMode : uint8_t {
	Opaque = 0,
	Masked = 1,
	Transparent = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum UMG.EWidgetTimingPolicy
/////////////////////////////////////////////
enum class EWidgetTimingPolicy : uint8_t {
	RealTime = 0,
	GameTime = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum UMG.EWidgetSpace
/////////////////////////////////////////////
enum class EWidgetSpace : uint8_t {
	World = 0,
	Screen = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum UMG.EWidgetInteractionSource
/////////////////////////////////////////////
enum class EWidgetInteractionSource : uint8_t {
	World = 0,
	Mouse = 1,
	CenterScreen = 2,
	Custom = 3,
	MAX = 4,
};
#pragma endregion

#pragma region Structs
/////////////////////////////////////////////
// ScriptStruct UMG.EventReply
// Size 184
/////////////////////////////////////////////
struct FEventReply {
	unsigned char uknownData_0[184];		//Offset: 0	Size: 184
};
/////////////////////////////////////////////
// ScriptStruct UMG.WidgetTransform
// Size 28
/////////////////////////////////////////////
struct FWidgetTransform {
	struct FVector2D	Translation;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector2D	Scale;		//Offset: 8	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector2D	Shear;		//Offset: 16	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	Angle;		//Offset: 24	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct UMG.PaintContext
// Size 48
/////////////////////////////////////////////
struct FPaintContext {
	unsigned char uknownData_0[48];		//Offset: 0	Size: 48
};
/////////////////////////////////////////////
// ScriptStruct UMG.ShapedTextOptions
// Size 3
/////////////////////////////////////////////
struct FShapedTextOptions {
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bOverride_TextShapingMethod : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bOverride_TextFlowDirection : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[1];		//Offset: 0	Size: 1
	ETextShapingMethod	TextShapingMethod;		//Offset: 1	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	ETextFlowDirection	TextFlowDirection;		//Offset: 2	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct UMG.AnchorData
// Size 40
/////////////////////////////////////////////
struct FAnchorData {
	struct FMargin	Offsets;		//Offset: 0	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FAnchors	Anchors;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	struct FVector2D	Alignment;		//Offset: 32	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct UMG.DynamicPropertyPath
// Super ScriptStruct PropertyPath.CachedPropertyPath
// Size 40
// Size inherited 40
/////////////////////////////////////////////
struct FDynamicPropertyPath : public FCachedPropertyPath {
};
/////////////////////////////////////////////
// ScriptStruct UMG.MovieScene2DTransformMask
// Size 4
/////////////////////////////////////////////
struct FMovieScene2DTransformMask {
	uint32_t	Mask;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
};
/////////////////////////////////////////////
// ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
// Super ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
// Size 144
// Size inherited 128
/////////////////////////////////////////////
struct FMovieSceneWidgetMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate {
	TArray<struct FName>	BrushPropertyNamePath;		//Offset: 128	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
};
/////////////////////////////////////////////
// ScriptStruct UMG.RadialBoxSettings
// Size 16
/////////////////////////////////////////////
struct FRadialBoxSettings {
	float	StartingAngle;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bDistributeItemsEvenly;		//Offset: 4	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[3];		//Offset: 5	Size: 3
	float	AngleBetweenItems;		//Offset: 8	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	SectorCentralAngle;		//Offset: 12	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct UMG.RichTextStyleRow
// Super ScriptStruct Engine.TableRowBase
// Size 632
// Size inherited 8
/////////////////////////////////////////////
struct FRichTextStyleRow : public FTableRowBase {
	struct FTextBlockStyle	TextStyle;		//Offset: 8	Size: 624	Flags: Edit, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct UMG.RichImageRow
// Super ScriptStruct Engine.TableRowBase
// Size 144
// Size inherited 8
/////////////////////////////////////////////
struct FRichImageRow : public FTableRowBase {
	struct FSlateBrush	Brush;		//Offset: 8	Size: 136	Flags: Edit, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct UMG.SlateMeshVertex
// Size 60
/////////////////////////////////////////////
struct FSlateMeshVertex {
	struct FVector2D	Position;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FColor	Color;		//Offset: 8	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector2D	UV0;		//Offset: 12	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector2D	UV1;		//Offset: 20	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector2D	UV2;		//Offset: 28	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector2D	UV3;		//Offset: 36	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector2D	UV4;		//Offset: 44	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector2D	UV5;		//Offset: 52	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct UMG.SlateChildSize
// Size 8
/////////////////////////////////////////////
struct FSlateChildSize {
	float	Value;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<ESlateSizeRule>	SizeRule;		//Offset: 4	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[3];		//Offset: 5	Size: 3
};
/////////////////////////////////////////////
// ScriptStruct UMG.NamedSlotBinding
// Size 16
/////////////////////////////////////////////
struct FNamedSlotBinding {
	struct FName	Name;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UWidget*	Content;		//Offset: 8	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct UMG.AnimationEventBinding
// Size 40
/////////////////////////////////////////////
struct FAnimationEventBinding {
	class UWidgetAnimation*	Animation;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FScriptDelegate	Delegate;		//Offset: 8	Size: 16	Flags: ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	EWidgetAnimationEvent	AnimationEvent;		//Offset: 24	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[3];		//Offset: 25	Size: 3
	struct FName	UserTag;		//Offset: 28	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[4];		//Offset: 36	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct UMG.UserWidgetPool
// Size 128
/////////////////////////////////////////////
struct FUserWidgetPool {
	TArray<class UUserWidget*>	ActiveWidgets;		//Offset: 0	Size: 16	Flags: ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
	TArray<class UUserWidget*>	InactiveWidgets;		//Offset: 16	Size: 16	Flags: ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
	unsigned char uknownData_0[96];		//Offset: 32	Size: 96
};
/////////////////////////////////////////////
// ScriptStruct UMG.WidgetAnimationBinding
// Size 36
/////////////////////////////////////////////
struct FWidgetAnimationBinding {
	struct FName	WidgetName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FName	SlotWidgetName;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FGuid	AnimationGuid;		//Offset: 16	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bIsRootWidget;		//Offset: 32	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[3];		//Offset: 33	Size: 3
};
/////////////////////////////////////////////
// ScriptStruct UMG.BlueprintWidgetAnimationDelegateBinding
// Size 28
/////////////////////////////////////////////
struct FBlueprintWidgetAnimationDelegateBinding {
	EWidgetAnimationEvent	Action;		//Offset: 0	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[3];		//Offset: 1	Size: 3
	struct FName	AnimationToBind;		//Offset: 4	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FName	FunctionNameToBind;		//Offset: 12	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FName	UserTag;		//Offset: 20	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct UMG.DelegateRuntimeBinding
// Size 80
/////////////////////////////////////////////
struct FDelegateRuntimeBinding {
	struct FString	ObjectName;		//Offset: 0	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FName	PropertyName;		//Offset: 16	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FName	FunctionName;		//Offset: 24	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FDynamicPropertyPath	SourcePath;		//Offset: 32	Size: 40	Flags: NativeAccessSpecifierPublic
	EBindingKind	Kind;		//Offset: 72	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[7];		//Offset: 73	Size: 7
};
/////////////////////////////////////////////
// ScriptStruct UMG.WidgetComponentInstanceData
// Super ScriptStruct Engine.SceneComponentInstanceData
// Size 200
// Size inherited 184
/////////////////////////////////////////////
struct FWidgetComponentInstanceData : public FSceneComponentInstanceData {
	unsigned char uknownData_0[16];		//Offset: 184	Size: 16
};
/////////////////////////////////////////////
// ScriptStruct UMG.WidgetNavigationData
// Size 36
/////////////////////////////////////////////
struct FWidgetNavigationData {
	EUINavigationRule	Rule;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[3];		//Offset: 1	Size: 3
	struct FName	WidgetToFocus;		//Offset: 4	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TWeakObjectPtr<class UWidget>	Widget;		//Offset: 12	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FScriptDelegate	CustomDelegate;		//Offset: 20	Size: 16	Flags: ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
};
#pragma endregion
}