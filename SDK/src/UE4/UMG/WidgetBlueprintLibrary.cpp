#include "../SDK.h"
#include "WidgetBlueprintLibrary.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.CancelDragDrop
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UWidgetBlueprintLibrary::CancelDragDrop() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.CancelDragDrop");

	struct UWidgetBlueprintLibrary_CancelDragDrop_Params {
	};
	UWidgetBlueprintLibrary_CancelDragDrop_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.CaptureJoystick
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Reply	Type: struct FEventReply	Flags: Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: CapturingWidget	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bInAllJoysticks	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FEventReply	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FEventReply UWidgetBlueprintLibrary::CaptureJoystick(struct FEventReply* Reply, class UWidget* CapturingWidget, bool bInAllJoysticks) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.CaptureJoystick");

	struct UWidgetBlueprintLibrary_CaptureJoystick_Params {
		struct FEventReply Reply;			//Offset: 0 | ElementSize: 184
		class UWidget* CapturingWidget;			//Offset: 184 | ElementSize: 8
		bool bInAllJoysticks;			//Offset: 192 | ElementSize: 1
		struct FEventReply ReturnValue;			//Offset: 200 | ElementSize: 184
	};
	UWidgetBlueprintLibrary_CaptureJoystick_Params params;
	params.CapturingWidget = CapturingWidget;
	params.bInAllJoysticks = bInAllJoysticks;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Reply != nullptr)
		*Reply = params.Reply;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.CaptureMouse
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Reply	Type: struct FEventReply	Flags: Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: CapturingWidget	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FEventReply	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FEventReply UWidgetBlueprintLibrary::CaptureMouse(struct FEventReply* Reply, class UWidget* CapturingWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.CaptureMouse");

	struct UWidgetBlueprintLibrary_CaptureMouse_Params {
		struct FEventReply Reply;			//Offset: 0 | ElementSize: 184
		class UWidget* CapturingWidget;			//Offset: 184 | ElementSize: 8
		struct FEventReply ReturnValue;			//Offset: 192 | ElementSize: 184
	};
	UWidgetBlueprintLibrary_CaptureMouse_Params params;
	params.CapturingWidget = CapturingWidget;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Reply != nullptr)
		*Reply = params.Reply;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.ClearUserFocus
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Reply	Type: struct FEventReply	Flags: Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: bInAllUsers	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FEventReply	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FEventReply UWidgetBlueprintLibrary::ClearUserFocus(struct FEventReply* Reply, bool bInAllUsers) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.ClearUserFocus");

	struct UWidgetBlueprintLibrary_ClearUserFocus_Params {
		struct FEventReply Reply;			//Offset: 0 | ElementSize: 184
		bool bInAllUsers;			//Offset: 184 | ElementSize: 1
		struct FEventReply ReturnValue;			//Offset: 192 | ElementSize: 184
	};
	UWidgetBlueprintLibrary_ClearUserFocus_Params params;
	params.bInAllUsers = bInAllUsers;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Reply != nullptr)
		*Reply = params.Reply;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.Create
// Flags: Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: WidgetType	Type: class UUserWidget*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: OwningPlayer	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UUserWidget*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UUserWidget* UWidgetBlueprintLibrary::Create(class UObject* WorldContextObject, class UUserWidget* WidgetType, class APlayerController* OwningPlayer) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.Create");

	struct UWidgetBlueprintLibrary_Create_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		class UUserWidget* WidgetType;			//Offset: 8 | ElementSize: 8
		class APlayerController* OwningPlayer;			//Offset: 16 | ElementSize: 8
		class UUserWidget* ReturnValue;			//Offset: 24 | ElementSize: 8
	};
	UWidgetBlueprintLibrary_Create_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WidgetType = WidgetType;
	params.OwningPlayer = OwningPlayer;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: OperationClass	Type: class UDragDropOperation*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UDragDropOperation*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UDragDropOperation* UWidgetBlueprintLibrary::CreateDragDropOperation(class UDragDropOperation* OperationClass) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation");

	struct UWidgetBlueprintLibrary_CreateDragDropOperation_Params {
		class UDragDropOperation* OperationClass;			//Offset: 0 | ElementSize: 8
		class UDragDropOperation* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UWidgetBlueprintLibrary_CreateDragDropOperation_Params params;
	params.OperationClass = OperationClass;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.DetectDrag
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Reply	Type: struct FEventReply	Flags: Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: WidgetDetectingDrag	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DragKey	Type: struct FKey	Flags: Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FEventReply	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FEventReply UWidgetBlueprintLibrary::DetectDrag(struct FEventReply* Reply, class UWidget* WidgetDetectingDrag, struct FKey DragKey) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DetectDrag");

	struct UWidgetBlueprintLibrary_DetectDrag_Params {
		struct FEventReply Reply;			//Offset: 0 | ElementSize: 184
		class UWidget* WidgetDetectingDrag;			//Offset: 184 | ElementSize: 8
		struct FKey DragKey;			//Offset: 192 | ElementSize: 24
		struct FEventReply ReturnValue;			//Offset: 216 | ElementSize: 184
	};
	UWidgetBlueprintLibrary_DetectDrag_Params params;
	params.WidgetDetectingDrag = WidgetDetectingDrag;
	params.DragKey = DragKey;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Reply != nullptr)
		*Reply = params.Reply;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: PointerEvent	Type: struct FPointerEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: WidgetDetectingDrag	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DragKey	Type: struct FKey	Flags: Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FEventReply	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FEventReply UWidgetBlueprintLibrary::DetectDragIfPressed(const struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, struct FKey DragKey) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed");

	struct UWidgetBlueprintLibrary_DetectDragIfPressed_Params {
		struct FPointerEvent PointerEvent;			//Offset: 0 | ElementSize: 112
		class UWidget* WidgetDetectingDrag;			//Offset: 112 | ElementSize: 8
		struct FKey DragKey;			//Offset: 120 | ElementSize: 24
		struct FEventReply ReturnValue;			//Offset: 144 | ElementSize: 184
	};
	UWidgetBlueprintLibrary_DetectDragIfPressed_Params params;
	params.PointerEvent = PointerEvent;
	params.WidgetDetectingDrag = WidgetDetectingDrag;
	params.DragKey = DragKey;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.DismissAllMenus
// Flags: Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UWidgetBlueprintLibrary::DismissAllMenus() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DismissAllMenus");

	struct UWidgetBlueprintLibrary_DismissAllMenus_Params {
	};
	UWidgetBlueprintLibrary_DismissAllMenus_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.DrawBox
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: Context	Type: struct FPaintContext	Flags: Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic
// Name: Position	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Size	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Brush	Type: class USlateBrushAsset*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Tint	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetBlueprintLibrary::DrawBox(struct FPaintContext* Context, struct FVector2D Position, struct FVector2D Size, class USlateBrushAsset* Brush, struct FLinearColor Tint) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawBox");

	struct UWidgetBlueprintLibrary_DrawBox_Params {
		struct FPaintContext Context;			//Offset: 0 | ElementSize: 48
		struct FVector2D Position;			//Offset: 48 | ElementSize: 8
		struct FVector2D Size;			//Offset: 56 | ElementSize: 8
		class USlateBrushAsset* Brush;			//Offset: 64 | ElementSize: 8
		struct FLinearColor Tint;			//Offset: 72 | ElementSize: 16
	};
	UWidgetBlueprintLibrary_DrawBox_Params params;
	params.Position = Position;
	params.Size = Size;
	params.Brush = Brush;
	params.Tint = Tint;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Context != nullptr)
		*Context = params.Context;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.DrawLine
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: Context	Type: struct FPaintContext	Flags: Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic
// Name: PositionA	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PositionB	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Tint	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAntiAlias	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Thickness	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetBlueprintLibrary::DrawLine(struct FPaintContext* Context, struct FVector2D PositionA, struct FVector2D PositionB, struct FLinearColor Tint, bool bAntiAlias, float Thickness) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawLine");

	struct UWidgetBlueprintLibrary_DrawLine_Params {
		struct FPaintContext Context;			//Offset: 0 | ElementSize: 48
		struct FVector2D PositionA;			//Offset: 48 | ElementSize: 8
		struct FVector2D PositionB;			//Offset: 56 | ElementSize: 8
		struct FLinearColor Tint;			//Offset: 64 | ElementSize: 16
		bool bAntiAlias;			//Offset: 80 | ElementSize: 1
		float Thickness;			//Offset: 84 | ElementSize: 4
	};
	UWidgetBlueprintLibrary_DrawLine_Params params;
	params.PositionA = PositionA;
	params.PositionB = PositionB;
	params.Tint = Tint;
	params.bAntiAlias = bAntiAlias;
	params.Thickness = Thickness;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Context != nullptr)
		*Context = params.Context;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.DrawLines
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: Context	Type: struct FPaintContext	Flags: Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic
// Name: Points	Type: TArray<struct FVector2D>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: Tint	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bAntiAlias	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Thickness	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetBlueprintLibrary::DrawLines(struct FPaintContext* Context, const TArray<struct FVector2D>& Points, struct FLinearColor Tint, bool bAntiAlias, float Thickness) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawLines");

	struct UWidgetBlueprintLibrary_DrawLines_Params {
		struct FPaintContext Context;			//Offset: 0 | ElementSize: 48
		TArray<struct FVector2D> Points;			//Offset: 48 | ElementSize: 16
		struct FLinearColor Tint;			//Offset: 64 | ElementSize: 16
		bool bAntiAlias;			//Offset: 80 | ElementSize: 1
		float Thickness;			//Offset: 84 | ElementSize: 4
	};
	UWidgetBlueprintLibrary_DrawLines_Params params;
	params.Points = Points;
	params.Tint = Tint;
	params.bAntiAlias = bAntiAlias;
	params.Thickness = Thickness;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Context != nullptr)
		*Context = params.Context;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.DrawText
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: Context	Type: struct FPaintContext	Flags: Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic
// Name: inString	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Position	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Tint	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetBlueprintLibrary::DrawText(struct FPaintContext* Context, struct FString inString, struct FVector2D Position, struct FLinearColor Tint) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawText");

	struct UWidgetBlueprintLibrary_DrawText_Params {
		struct FPaintContext Context;			//Offset: 0 | ElementSize: 48
		struct FString inString;			//Offset: 48 | ElementSize: 16
		struct FVector2D Position;			//Offset: 64 | ElementSize: 8
		struct FLinearColor Tint;			//Offset: 72 | ElementSize: 16
	};
	UWidgetBlueprintLibrary_DrawText_Params params;
	params.inString = inString;
	params.Position = Position;
	params.Tint = Tint;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Context != nullptr)
		*Context = params.Context;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.DrawTextFormatted
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: Context	Type: struct FPaintContext	Flags: Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic
// Name: Text	Type: struct FText	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: Position	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Font	Type: class UFont*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FontSize	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FontTypeFace	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Tint	Type: struct FLinearColor	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetBlueprintLibrary::DrawTextFormatted(struct FPaintContext* Context, const struct FText& Text, struct FVector2D Position, class UFont* Font, int32_t FontSize, struct FName FontTypeFace, struct FLinearColor Tint) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawTextFormatted");

	struct UWidgetBlueprintLibrary_DrawTextFormatted_Params {
		struct FPaintContext Context;			//Offset: 0 | ElementSize: 48
		struct FText Text;			//Offset: 48 | ElementSize: 24
		struct FVector2D Position;			//Offset: 72 | ElementSize: 8
		class UFont* Font;			//Offset: 80 | ElementSize: 8
		int32_t FontSize;			//Offset: 88 | ElementSize: 4
		struct FName FontTypeFace;			//Offset: 92 | ElementSize: 8
		struct FLinearColor Tint;			//Offset: 100 | ElementSize: 16
	};
	UWidgetBlueprintLibrary_DrawTextFormatted_Params params;
	params.Text = Text;
	params.Position = Position;
	params.Font = Font;
	params.FontSize = FontSize;
	params.FontTypeFace = FontTypeFace;
	params.Tint = Tint;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Context != nullptr)
		*Context = params.Context;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.EndDragDrop
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Reply	Type: struct FEventReply	Flags: Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FEventReply	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FEventReply UWidgetBlueprintLibrary::EndDragDrop(struct FEventReply* Reply) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.EndDragDrop");

	struct UWidgetBlueprintLibrary_EndDragDrop_Params {
		struct FEventReply Reply;			//Offset: 0 | ElementSize: 184
		struct FEventReply ReturnValue;			//Offset: 184 | ElementSize: 184
	};
	UWidgetBlueprintLibrary_EndDragDrop_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Reply != nullptr)
		*Reply = params.Reply;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
// Flags: Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FoundWidgets	Type: TArray<class UUserWidget*>	Flags: Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: WidgetClass	Type: class UUserWidget*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TopLevelOnly	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetBlueprintLibrary::GetAllWidgetsOfClass(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, class UUserWidget* WidgetClass, bool TopLevelOnly) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass");

	struct UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		TArray<class UUserWidget*> FoundWidgets;			//Offset: 8 | ElementSize: 16
		class UUserWidget* WidgetClass;			//Offset: 24 | ElementSize: 8
		bool TopLevelOnly;			//Offset: 32 | ElementSize: 1
	};
	UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WidgetClass = WidgetClass;
	params.TopLevelOnly = TopLevelOnly;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (FoundWidgets != nullptr)
		*FoundWidgets = params.FoundWidgets;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
// Flags: Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FoundWidgets	Type: TArray<class UUserWidget*>	Flags: Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
// Name: Interface	Type: class UInterface*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TopLevelOnly	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetBlueprintLibrary::GetAllWidgetsWithInterface(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, class UInterface* Interface, bool TopLevelOnly) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface");

	struct UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		TArray<class UUserWidget*> FoundWidgets;			//Offset: 8 | ElementSize: 16
		class UInterface* Interface;			//Offset: 24 | ElementSize: 8
		bool TopLevelOnly;			//Offset: 32 | ElementSize: 1
	};
	UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Interface = Interface;
	params.TopLevelOnly = TopLevelOnly;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (FoundWidgets != nullptr)
		*FoundWidgets = params.FoundWidgets;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.GetBrushResource
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Brush	Type: struct FSlateBrush	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UObject*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UObject* UWidgetBlueprintLibrary::GetBrushResource(const struct FSlateBrush& Brush) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetBrushResource");

	struct UWidgetBlueprintLibrary_GetBrushResource_Params {
		struct FSlateBrush Brush;			//Offset: 0 | ElementSize: 136
		class UObject* ReturnValue;			//Offset: 136 | ElementSize: 8
	};
	UWidgetBlueprintLibrary_GetBrushResource_Params params;
	params.Brush = Brush;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Brush	Type: struct FSlateBrush	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UMaterialInterface*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UMaterialInterface* UWidgetBlueprintLibrary::GetBrushResourceAsMaterial(const struct FSlateBrush& Brush) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial");

	struct UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Params {
		struct FSlateBrush Brush;			//Offset: 0 | ElementSize: 136
		class UMaterialInterface* ReturnValue;			//Offset: 136 | ElementSize: 8
	};
	UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Params params;
	params.Brush = Brush;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Brush	Type: struct FSlateBrush	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UTexture2D*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UTexture2D* UWidgetBlueprintLibrary::GetBrushResourceAsTexture2D(const struct FSlateBrush& Brush) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D");

	struct UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Params {
		struct FSlateBrush Brush;			//Offset: 0 | ElementSize: 136
		class UTexture2D* ReturnValue;			//Offset: 136 | ElementSize: 8
	};
	UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Params params;
	params.Brush = Brush;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent
// Flags: Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: class UDragDropOperation*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UDragDropOperation* UWidgetBlueprintLibrary::GetDragDroppingContent() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent");

	struct UWidgetBlueprintLibrary_GetDragDroppingContent_Params {
		class UDragDropOperation* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UWidgetBlueprintLibrary_GetDragDroppingContent_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Brush	Type: struct FSlateBrush	Flags: Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UMaterialInstanceDynamic*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UMaterialInstanceDynamic* UWidgetBlueprintLibrary::GetDynamicMaterial(struct FSlateBrush* Brush) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial");

	struct UWidgetBlueprintLibrary_GetDynamicMaterial_Params {
		struct FSlateBrush Brush;			//Offset: 0 | ElementSize: 136
		class UMaterialInstanceDynamic* ReturnValue;			//Offset: 136 | ElementSize: 8
	};
	UWidgetBlueprintLibrary_GetDynamicMaterial_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Brush != nullptr)
		*Brush = params.Brush;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Event	Type: struct FCharacterEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FInputEvent	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent");

	struct UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Params {
		struct FCharacterEvent Event;			//Offset: 0 | ElementSize: 32
		struct FInputEvent ReturnValue;			//Offset: 32 | ElementSize: 24
	};
	UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Params params;
	params.Event = Event;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Event	Type: struct FKeyEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FInputEvent	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromKeyEvent(const struct FKeyEvent& Event) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent");

	struct UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Params {
		struct FKeyEvent Event;			//Offset: 0 | ElementSize: 56
		struct FInputEvent ReturnValue;			//Offset: 56 | ElementSize: 24
	};
	UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Params params;
	params.Event = Event;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Event	Type: struct FNavigationEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FInputEvent	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent");

	struct UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Params {
		struct FNavigationEvent Event;			//Offset: 0 | ElementSize: 32
		struct FInputEvent ReturnValue;			//Offset: 32 | ElementSize: 24
	};
	UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Params params;
	params.Event = Event;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Event	Type: struct FPointerEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FInputEvent	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromPointerEvent(const struct FPointerEvent& Event) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent");

	struct UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Params {
		struct FPointerEvent Event;			//Offset: 0 | ElementSize: 112
		struct FInputEvent ReturnValue;			//Offset: 112 | ElementSize: 24
	};
	UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Params params;
	params.Event = Event;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Event	Type: struct FAnalogInputEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FKeyEvent	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FKeyEvent UWidgetBlueprintLibrary::GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent");

	struct UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Params {
		struct FAnalogInputEvent Event;			//Offset: 0 | ElementSize: 64
		struct FKeyEvent ReturnValue;			//Offset: 64 | ElementSize: 56
	};
	UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Params params;
	params.Event = Event;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SafePadding	Type: struct FVector4	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SafePaddingScale	Type: struct FVector2D	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SpillOverPadding	Type: struct FVector4	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetBlueprintLibrary::GetSafeZonePadding(class UObject* WorldContextObject, struct FVector4* SafePadding, struct FVector2D* SafePaddingScale, struct FVector4* SpillOverPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding");

	struct UWidgetBlueprintLibrary_GetSafeZonePadding_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector4 SafePadding;			//Offset: 16 | ElementSize: 16
		struct FVector2D SafePaddingScale;			//Offset: 32 | ElementSize: 8
		struct FVector4 SpillOverPadding;			//Offset: 48 | ElementSize: 16
	};
	UWidgetBlueprintLibrary_GetSafeZonePadding_Params params;
	params.WorldContextObject = WorldContextObject;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (SafePadding != nullptr)
		*SafePadding = params.SafePadding;
	if (SafePaddingScale != nullptr)
		*SafePaddingScale = params.SafePaddingScale;
	if (SpillOverPadding != nullptr)
		*SpillOverPadding = params.SpillOverPadding;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.Handled
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FEventReply	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FEventReply UWidgetBlueprintLibrary::Handled() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.Handled");

	struct UWidgetBlueprintLibrary_Handled_Params {
		struct FEventReply ReturnValue;			//Offset: 0 | ElementSize: 184
	};
	UWidgetBlueprintLibrary_Handled_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.IsDragDropping
// Flags: Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UWidgetBlueprintLibrary::IsDragDropping() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.IsDragDropping");

	struct UWidgetBlueprintLibrary_IsDragDropping_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UWidgetBlueprintLibrary_IsDragDropping_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.LockMouse
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Reply	Type: struct FEventReply	Flags: Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: CapturingWidget	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FEventReply	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FEventReply UWidgetBlueprintLibrary::LockMouse(struct FEventReply* Reply, class UWidget* CapturingWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.LockMouse");

	struct UWidgetBlueprintLibrary_LockMouse_Params {
		struct FEventReply Reply;			//Offset: 0 | ElementSize: 184
		class UWidget* CapturingWidget;			//Offset: 184 | ElementSize: 8
		struct FEventReply ReturnValue;			//Offset: 192 | ElementSize: 184
	};
	UWidgetBlueprintLibrary_LockMouse_Params params;
	params.CapturingWidget = CapturingWidget;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Reply != nullptr)
		*Reply = params.Reply;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: BrushAsset	Type: class USlateBrushAsset*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FSlateBrush	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromAsset(class USlateBrushAsset* BrushAsset) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset");

	struct UWidgetBlueprintLibrary_MakeBrushFromAsset_Params {
		class USlateBrushAsset* BrushAsset;			//Offset: 0 | ElementSize: 8
		struct FSlateBrush ReturnValue;			//Offset: 8 | ElementSize: 136
	};
	UWidgetBlueprintLibrary_MakeBrushFromAsset_Params params;
	params.BrushAsset = BrushAsset;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Material	Type: class UMaterialInterface*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Width	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Height	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FSlateBrush	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromMaterial(class UMaterialInterface* Material, int32_t Width, int32_t Height) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial");

	struct UWidgetBlueprintLibrary_MakeBrushFromMaterial_Params {
		class UMaterialInterface* Material;			//Offset: 0 | ElementSize: 8
		int32_t Width;			//Offset: 8 | ElementSize: 4
		int32_t Height;			//Offset: 12 | ElementSize: 4
		struct FSlateBrush ReturnValue;			//Offset: 16 | ElementSize: 136
	};
	UWidgetBlueprintLibrary_MakeBrushFromMaterial_Params params;
	params.Material = Material;
	params.Width = Width;
	params.Height = Height;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Texture	Type: class UTexture2D*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Width	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Height	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FSlateBrush	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromTexture(class UTexture2D* Texture, int32_t Width, int32_t Height) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture");

	struct UWidgetBlueprintLibrary_MakeBrushFromTexture_Params {
		class UTexture2D* Texture;			//Offset: 0 | ElementSize: 8
		int32_t Width;			//Offset: 8 | ElementSize: 4
		int32_t Height;			//Offset: 12 | ElementSize: 4
		struct FSlateBrush ReturnValue;			//Offset: 16 | ElementSize: 136
	};
	UWidgetBlueprintLibrary_MakeBrushFromTexture_Params params;
	params.Texture = Texture;
	params.Width = Width;
	params.Height = Height;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.NoResourceBrush
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FSlateBrush	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FSlateBrush UWidgetBlueprintLibrary::NoResourceBrush() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.NoResourceBrush");

	struct UWidgetBlueprintLibrary_NoResourceBrush_Params {
		struct FSlateBrush ReturnValue;			//Offset: 0 | ElementSize: 136
	};
	UWidgetBlueprintLibrary_NoResourceBrush_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// DelegateFunction UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature
// Flags: Public, Delegate
// Params:
/////////////////////////////////////////////
void UWidgetBlueprintLibrary::OnGameWindowCloseButtonClickedDelegate__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature");

	struct UWidgetBlueprintLibrary_OnGameWindowCloseButtonClickedDelegate__DelegateSignature_Params {
	};
	UWidgetBlueprintLibrary_OnGameWindowCloseButtonClickedDelegate__DelegateSignature_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Reply	Type: struct FEventReply	Flags: Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: bInAllJoysticks	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FEventReply	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FEventReply UWidgetBlueprintLibrary::ReleaseJoystickCapture(struct FEventReply* Reply, bool bInAllJoysticks) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture");

	struct UWidgetBlueprintLibrary_ReleaseJoystickCapture_Params {
		struct FEventReply Reply;			//Offset: 0 | ElementSize: 184
		bool bInAllJoysticks;			//Offset: 184 | ElementSize: 1
		struct FEventReply ReturnValue;			//Offset: 192 | ElementSize: 184
	};
	UWidgetBlueprintLibrary_ReleaseJoystickCapture_Params params;
	params.bInAllJoysticks = bInAllJoysticks;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Reply != nullptr)
		*Reply = params.Reply;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Reply	Type: struct FEventReply	Flags: Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FEventReply	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FEventReply UWidgetBlueprintLibrary::ReleaseMouseCapture(struct FEventReply* Reply) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture");

	struct UWidgetBlueprintLibrary_ReleaseMouseCapture_Params {
		struct FEventReply Reply;			//Offset: 0 | ElementSize: 184
		struct FEventReply ReturnValue;			//Offset: 184 | ElementSize: 184
	};
	UWidgetBlueprintLibrary_ReleaseMouseCapture_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Reply != nullptr)
		*Reply = params.Reply;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UWidgetBlueprintLibrary::RestorePreviousWindowTitleBarState() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState");

	struct UWidgetBlueprintLibrary_RestorePreviousWindowTitleBarState_Params {
	};
	UWidgetBlueprintLibrary_RestorePreviousWindowTitleBarState_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: Brush	Type: struct FSlateBrush	Flags: Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: Material	Type: class UMaterialInterface*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetBlueprintLibrary::SetBrushResourceToMaterial(struct FSlateBrush* Brush, class UMaterialInterface* Material) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial");

	struct UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Params {
		struct FSlateBrush Brush;			//Offset: 0 | ElementSize: 136
		class UMaterialInterface* Material;			//Offset: 136 | ElementSize: 8
	};
	UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Params params;
	params.Material = Material;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Brush != nullptr)
		*Brush = params.Brush;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable
// Params:
// Name: Brush	Type: struct FSlateBrush	Flags: Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: Texture	Type: class UTexture2D*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetBlueprintLibrary::SetBrushResourceToTexture(struct FSlateBrush* Brush, class UTexture2D* Texture) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture");

	struct UWidgetBlueprintLibrary_SetBrushResourceToTexture_Params {
		struct FSlateBrush Brush;			//Offset: 0 | ElementSize: 136
		class UTexture2D* Texture;			//Offset: 136 | ElementSize: 8
	};
	UWidgetBlueprintLibrary_SetBrushResourceToTexture_Params params;
	params.Texture = Texture;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Brush != nullptr)
		*Brush = params.Brush;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType
// Flags: Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable
// Params:
// Name: Type	Type: EColorVisionDeficiency	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Severity	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: CorrectDeficiency	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ShowCorrectionWithDeficiency	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetBlueprintLibrary::SetColorVisionDeficiencyType(EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType");

	struct UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Params {
		EColorVisionDeficiency Type;			//Offset: 0 | ElementSize: 1
		float Severity;			//Offset: 4 | ElementSize: 4
		bool CorrectDeficiency;			//Offset: 8 | ElementSize: 1
		bool ShowCorrectionWithDeficiency;			//Offset: 9 | ElementSize: 1
	};
	UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Params params;
	params.Type = Type;
	params.Severity = Severity;
	params.CorrectDeficiency = CorrectDeficiency;
	params.ShowCorrectionWithDeficiency = ShowCorrectionWithDeficiency;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
// Flags: Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UWidgetBlueprintLibrary::SetFocusToGameViewport() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport");

	struct UWidgetBlueprintLibrary_SetFocusToGameViewport_Params {
	};
	UWidgetBlueprintLibrary_SetFocusToGameViewport_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.SetHardwareCursor
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: CursorShape	Type: TEnumAsByte<EMouseCursor>	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: CursorName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: HotSpot	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UWidgetBlueprintLibrary::SetHardwareCursor(class UObject* WorldContextObject, TEnumAsByte<EMouseCursor> CursorShape, struct FName CursorName, struct FVector2D HotSpot) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetHardwareCursor");

	struct UWidgetBlueprintLibrary_SetHardwareCursor_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<EMouseCursor> CursorShape;			//Offset: 8 | ElementSize: 1
		struct FName CursorName;			//Offset: 12 | ElementSize: 8
		struct FVector2D HotSpot;			//Offset: 20 | ElementSize: 8
		bool ReturnValue;			//Offset: 28 | ElementSize: 1
	};
	UWidgetBlueprintLibrary_SetHardwareCursor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.CursorShape = CursorShape;
	params.CursorName = CursorName;
	params.HotSpot = HotSpot;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI
// Flags: Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable
// Params:
// Name: Target	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InWidgetToFocus	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bLockMouseToViewport	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bHideCursorDuringCapture	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetBlueprintLibrary::SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI");

	struct UWidgetBlueprintLibrary_SetInputMode_GameAndUI_Params {
		class APlayerController* Target;			//Offset: 0 | ElementSize: 8
		class UWidget* InWidgetToFocus;			//Offset: 8 | ElementSize: 8
		bool bLockMouseToViewport;			//Offset: 16 | ElementSize: 1
		bool bHideCursorDuringCapture;			//Offset: 17 | ElementSize: 1
	};
	UWidgetBlueprintLibrary_SetInputMode_GameAndUI_Params params;
	params.Target = Target;
	params.InWidgetToFocus = InWidgetToFocus;
	params.bLockMouseToViewport = bLockMouseToViewport;
	params.bHideCursorDuringCapture = bHideCursorDuringCapture;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
// Flags: Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable
// Params:
// Name: PlayerController	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InWidgetToFocus	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InMouseLockMode	Type: EMouseLockMode	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bHideCursorDuringCapture	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx");

	struct UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Params {
		class APlayerController* PlayerController;			//Offset: 0 | ElementSize: 8
		class UWidget* InWidgetToFocus;			//Offset: 8 | ElementSize: 8
		EMouseLockMode InMouseLockMode;			//Offset: 16 | ElementSize: 1
		bool bHideCursorDuringCapture;			//Offset: 17 | ElementSize: 1
	};
	UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Params params;
	params.PlayerController = PlayerController;
	params.InWidgetToFocus = InWidgetToFocus;
	params.InMouseLockMode = InMouseLockMode;
	params.bHideCursorDuringCapture = bHideCursorDuringCapture;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
// Flags: Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable
// Params:
// Name: PlayerController	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetBlueprintLibrary::SetInputMode_GameOnly(class APlayerController* PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly");

	struct UWidgetBlueprintLibrary_SetInputMode_GameOnly_Params {
		class APlayerController* PlayerController;			//Offset: 0 | ElementSize: 8
	};
	UWidgetBlueprintLibrary_SetInputMode_GameOnly_Params params;
	params.PlayerController = PlayerController;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly
// Flags: Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable
// Params:
// Name: Target	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InWidgetToFocus	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bLockMouseToViewport	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetBlueprintLibrary::SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly");

	struct UWidgetBlueprintLibrary_SetInputMode_UIOnly_Params {
		class APlayerController* Target;			//Offset: 0 | ElementSize: 8
		class UWidget* InWidgetToFocus;			//Offset: 8 | ElementSize: 8
		bool bLockMouseToViewport;			//Offset: 16 | ElementSize: 1
	};
	UWidgetBlueprintLibrary_SetInputMode_UIOnly_Params params;
	params.Target = Target;
	params.InWidgetToFocus = InWidgetToFocus;
	params.bLockMouseToViewport = bLockMouseToViewport;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
// Flags: Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable
// Params:
// Name: PlayerController	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InWidgetToFocus	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: InMouseLockMode	Type: EMouseLockMode	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx");

	struct UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Params {
		class APlayerController* PlayerController;			//Offset: 0 | ElementSize: 8
		class UWidget* InWidgetToFocus;			//Offset: 8 | ElementSize: 8
		EMouseLockMode InMouseLockMode;			//Offset: 16 | ElementSize: 1
	};
	UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Params params;
	params.PlayerController = PlayerController;
	params.InWidgetToFocus = InWidgetToFocus;
	params.InMouseLockMode = InMouseLockMode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.SetMousePosition
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: Reply	Type: struct FEventReply	Flags: Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: NewMousePosition	Type: struct FVector2D	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FEventReply	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FEventReply UWidgetBlueprintLibrary::SetMousePosition(struct FEventReply* Reply, struct FVector2D NewMousePosition) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetMousePosition");

	struct UWidgetBlueprintLibrary_SetMousePosition_Params {
		struct FEventReply Reply;			//Offset: 0 | ElementSize: 184
		struct FVector2D NewMousePosition;			//Offset: 184 | ElementSize: 8
		struct FEventReply ReturnValue;			//Offset: 192 | ElementSize: 184
	};
	UWidgetBlueprintLibrary_SetMousePosition_Params params;
	params.NewMousePosition = NewMousePosition;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Reply != nullptr)
		*Reply = params.Reply;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.SetUserFocus
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Reply	Type: struct FEventReply	Flags: Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: FocusWidget	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bInAllUsers	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FEventReply	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FEventReply UWidgetBlueprintLibrary::SetUserFocus(struct FEventReply* Reply, class UWidget* FocusWidget, bool bInAllUsers) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetUserFocus");

	struct UWidgetBlueprintLibrary_SetUserFocus_Params {
		struct FEventReply Reply;			//Offset: 0 | ElementSize: 184
		class UWidget* FocusWidget;			//Offset: 184 | ElementSize: 8
		bool bInAllUsers;			//Offset: 192 | ElementSize: 1
		struct FEventReply ReturnValue;			//Offset: 200 | ElementSize: 184
	};
	UWidgetBlueprintLibrary_SetUserFocus_Params params;
	params.FocusWidget = FocusWidget;
	params.bInAllUsers = bInAllUsers;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Reply != nullptr)
		*Reply = params.Reply;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: bActive	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetBlueprintLibrary::SetWindowTitleBarCloseButtonActive(bool bActive) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive");

	struct UWidgetBlueprintLibrary_SetWindowTitleBarCloseButtonActive_Params {
		bool bActive;			//Offset: 0 | ElementSize: 1
	};
	UWidgetBlueprintLibrary_SetWindowTitleBarCloseButtonActive_Params params;
	params.bActive = bActive;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Delegate	Type: struct FScriptDelegate	Flags: Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetBlueprintLibrary::SetWindowTitleBarOnCloseClickedDelegate(struct FScriptDelegate Delegate) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate");

	struct UWidgetBlueprintLibrary_SetWindowTitleBarOnCloseClickedDelegate_Params {
		struct FScriptDelegate Delegate;			//Offset: 0 | ElementSize: 16
	};
	UWidgetBlueprintLibrary_SetWindowTitleBarOnCloseClickedDelegate_Params params;
	params.Delegate = Delegate;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: TitleBarContent	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Mode	Type: EWindowTitleBarMode	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bTitleBarDragEnabled	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bWindowButtonsVisible	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bTitleBarVisible	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetBlueprintLibrary::SetWindowTitleBarState(class UWidget* TitleBarContent, EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState");

	struct UWidgetBlueprintLibrary_SetWindowTitleBarState_Params {
		class UWidget* TitleBarContent;			//Offset: 0 | ElementSize: 8
		EWindowTitleBarMode Mode;			//Offset: 8 | ElementSize: 1
		bool bTitleBarDragEnabled;			//Offset: 9 | ElementSize: 1
		bool bWindowButtonsVisible;			//Offset: 10 | ElementSize: 1
		bool bTitleBarVisible;			//Offset: 11 | ElementSize: 1
	};
	UWidgetBlueprintLibrary_SetWindowTitleBarState_Params params;
	params.TitleBarContent = TitleBarContent;
	params.Mode = Mode;
	params.bTitleBarDragEnabled = bTitleBarDragEnabled;
	params.bWindowButtonsVisible = bWindowButtonsVisible;
	params.bTitleBarVisible = bTitleBarVisible;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.Unhandled
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: struct FEventReply	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FEventReply UWidgetBlueprintLibrary::Unhandled() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.Unhandled");

	struct UWidgetBlueprintLibrary_Unhandled_Params {
		struct FEventReply ReturnValue;			//Offset: 0 | ElementSize: 184
	};
	UWidgetBlueprintLibrary_Unhandled_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetBlueprintLibrary.UnlockMouse
// Flags: Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Reply	Type: struct FEventReply	Flags: Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FEventReply	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FEventReply UWidgetBlueprintLibrary::UnlockMouse(struct FEventReply* Reply) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.UnlockMouse");

	struct UWidgetBlueprintLibrary_UnlockMouse_Params {
		struct FEventReply Reply;			//Offset: 0 | ElementSize: 184
		struct FEventReply ReturnValue;			//Offset: 184 | ElementSize: 184
	};
	UWidgetBlueprintLibrary_UnlockMouse_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Reply != nullptr)
		*Reply = params.Reply;
	return params.ReturnValue;
}

#pragma endregion
}