#include "../SDK.h"
#include "WidgetLayoutLibrary.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable
// Params:
// Name: ReturnValue	Type: struct FVector2D	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector2D UWidgetLayoutLibrary::GetMousePositionOnPlatform() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform");

	struct UWidgetLayoutLibrary_GetMousePositionOnPlatform_Params {
		struct FVector2D ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UWidgetLayoutLibrary_GetMousePositionOnPlatform_Params params;

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
// Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport
// Flags: Final, Native, Static, Public, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FVector2D	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector2D UWidgetLayoutLibrary::GetMousePositionOnViewport(class UObject* WorldContextObject) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport");

	struct UWidgetLayoutLibrary_GetMousePositionOnViewport_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector2D ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UWidgetLayoutLibrary_GetMousePositionOnViewport_Params params;
	params.WorldContextObject = WorldContextObject;

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
// Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
// Flags: Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Player	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LocationX	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LocationY	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UWidgetLayoutLibrary::GetMousePositionScaledByDPI(class APlayerController* Player, float* LocationX, float* LocationY) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI");

	struct UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Params {
		class APlayerController* Player;			//Offset: 0 | ElementSize: 8
		float LocationX;			//Offset: 8 | ElementSize: 4
		float LocationY;			//Offset: 12 | ElementSize: 4
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Params params;
	params.Player = Player;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (LocationX != nullptr)
		*LocationX = params.LocationX;
	if (LocationY != nullptr)
		*LocationY = params.LocationY;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: PlayerController	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FGeometry	Flags: Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FGeometry UWidgetLayoutLibrary::GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry");

	struct UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Params {
		class APlayerController* PlayerController;			//Offset: 0 | ElementSize: 8
		struct FGeometry ReturnValue;			//Offset: 8 | ElementSize: 56
	};
	UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Params params;
	params.PlayerController = PlayerController;

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
// Function UMG.WidgetLayoutLibrary.GetViewportScale
// Flags: Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UWidgetLayoutLibrary::GetViewportScale(class UObject* WorldContextObject) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetViewportScale");

	struct UWidgetLayoutLibrary_GetViewportScale_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		float ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	UWidgetLayoutLibrary_GetViewportScale_Params params;
	params.WorldContextObject = WorldContextObject;

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
// Function UMG.WidgetLayoutLibrary.GetViewportSize
// Flags: Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FVector2D	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector2D UWidgetLayoutLibrary::GetViewportSize(class UObject* WorldContextObject) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetViewportSize");

	struct UWidgetLayoutLibrary_GetViewportSize_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector2D ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UWidgetLayoutLibrary_GetViewportSize_Params params;
	params.WorldContextObject = WorldContextObject;

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
// Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FGeometry	Flags: Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FGeometry UWidgetLayoutLibrary::GetViewportWidgetGeometry(class UObject* WorldContextObject) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry");

	struct UWidgetLayoutLibrary_GetViewportWidgetGeometry_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FGeometry ReturnValue;			//Offset: 8 | ElementSize: 56
	};
	UWidgetLayoutLibrary_GetViewportWidgetGeometry_Params params;
	params.WorldContextObject = WorldContextObject;

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
// Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
// Flags: Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure
// Params:
// Name: PlayerController	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: WorldLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ScreenPosition	Type: struct FVector2D	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bPlayerViewportRelative	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UWidgetLayoutLibrary::ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, struct FVector WorldLocation, struct FVector2D* ScreenPosition, bool bPlayerViewportRelative) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition");

	struct UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Params {
		class APlayerController* PlayerController;			//Offset: 0 | ElementSize: 8
		struct FVector WorldLocation;			//Offset: 8 | ElementSize: 12
		struct FVector2D ScreenPosition;			//Offset: 20 | ElementSize: 8
		bool bPlayerViewportRelative;			//Offset: 28 | ElementSize: 1
		bool ReturnValue;			//Offset: 29 | ElementSize: 1
	};
	UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Params params;
	params.PlayerController = PlayerController;
	params.WorldLocation = WorldLocation;
	params.bPlayerViewportRelative = bPlayerViewportRelative;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (ScreenPosition != nullptr)
		*ScreenPosition = params.ScreenPosition;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.WidgetLayoutLibrary.RemoveAllWidgets
// Flags: Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UWidgetLayoutLibrary::RemoveAllWidgets(class UObject* WorldContextObject) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.RemoveAllWidgets");

	struct UWidgetLayoutLibrary_RemoveAllWidgets_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
	};
	UWidgetLayoutLibrary_RemoveAllWidgets_Params params;
	params.WorldContextObject = WorldContextObject;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Widget	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UBorderSlot*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UBorderSlot* UWidgetLayoutLibrary::SlotAsBorderSlot(class UWidget* Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot");

	struct UWidgetLayoutLibrary_SlotAsBorderSlot_Params {
		class UWidget* Widget;			//Offset: 0 | ElementSize: 8
		class UBorderSlot* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UWidgetLayoutLibrary_SlotAsBorderSlot_Params params;
	params.Widget = Widget;

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
// Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Widget	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UCanvasPanelSlot*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UCanvasPanelSlot* UWidgetLayoutLibrary::SlotAsCanvasSlot(class UWidget* Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot");

	struct UWidgetLayoutLibrary_SlotAsCanvasSlot_Params {
		class UWidget* Widget;			//Offset: 0 | ElementSize: 8
		class UCanvasPanelSlot* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UWidgetLayoutLibrary_SlotAsCanvasSlot_Params params;
	params.Widget = Widget;

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
// Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Widget	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UGridSlot*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UGridSlot* UWidgetLayoutLibrary::SlotAsGridSlot(class UWidget* Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsGridSlot");

	struct UWidgetLayoutLibrary_SlotAsGridSlot_Params {
		class UWidget* Widget;			//Offset: 0 | ElementSize: 8
		class UGridSlot* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UWidgetLayoutLibrary_SlotAsGridSlot_Params params;
	params.Widget = Widget;

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
// Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Widget	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UHorizontalBoxSlot*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UHorizontalBoxSlot* UWidgetLayoutLibrary::SlotAsHorizontalBoxSlot(class UWidget* Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot");

	struct UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Params {
		class UWidget* Widget;			//Offset: 0 | ElementSize: 8
		class UHorizontalBoxSlot* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Params params;
	params.Widget = Widget;

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
// Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Widget	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UOverlaySlot*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UOverlaySlot* UWidgetLayoutLibrary::SlotAsOverlaySlot(class UWidget* Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot");

	struct UWidgetLayoutLibrary_SlotAsOverlaySlot_Params {
		class UWidget* Widget;			//Offset: 0 | ElementSize: 8
		class UOverlaySlot* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UWidgetLayoutLibrary_SlotAsOverlaySlot_Params params;
	params.Widget = Widget;

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
// Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Widget	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class USafeZoneSlot*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class USafeZoneSlot* UWidgetLayoutLibrary::SlotAsSafeBoxSlot(class UWidget* Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot");

	struct UWidgetLayoutLibrary_SlotAsSafeBoxSlot_Params {
		class UWidget* Widget;			//Offset: 0 | ElementSize: 8
		class USafeZoneSlot* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UWidgetLayoutLibrary_SlotAsSafeBoxSlot_Params params;
	params.Widget = Widget;

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
// Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Widget	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UScaleBoxSlot*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UScaleBoxSlot* UWidgetLayoutLibrary::SlotAsScaleBoxSlot(class UWidget* Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot");

	struct UWidgetLayoutLibrary_SlotAsScaleBoxSlot_Params {
		class UWidget* Widget;			//Offset: 0 | ElementSize: 8
		class UScaleBoxSlot* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UWidgetLayoutLibrary_SlotAsScaleBoxSlot_Params params;
	params.Widget = Widget;

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
// Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Widget	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UScrollBoxSlot*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UScrollBoxSlot* UWidgetLayoutLibrary::SlotAsScrollBoxSlot(class UWidget* Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot");

	struct UWidgetLayoutLibrary_SlotAsScrollBoxSlot_Params {
		class UWidget* Widget;			//Offset: 0 | ElementSize: 8
		class UScrollBoxSlot* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UWidgetLayoutLibrary_SlotAsScrollBoxSlot_Params params;
	params.Widget = Widget;

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
// Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Widget	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class USizeBoxSlot*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class USizeBoxSlot* UWidgetLayoutLibrary::SlotAsSizeBoxSlot(class UWidget* Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot");

	struct UWidgetLayoutLibrary_SlotAsSizeBoxSlot_Params {
		class UWidget* Widget;			//Offset: 0 | ElementSize: 8
		class USizeBoxSlot* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UWidgetLayoutLibrary_SlotAsSizeBoxSlot_Params params;
	params.Widget = Widget;

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
// Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Widget	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UUniformGridSlot*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UUniformGridSlot* UWidgetLayoutLibrary::SlotAsUniformGridSlot(class UWidget* Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot");

	struct UWidgetLayoutLibrary_SlotAsUniformGridSlot_Params {
		class UWidget* Widget;			//Offset: 0 | ElementSize: 8
		class UUniformGridSlot* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UWidgetLayoutLibrary_SlotAsUniformGridSlot_Params params;
	params.Widget = Widget;

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
// Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Widget	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UVerticalBoxSlot*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UVerticalBoxSlot* UWidgetLayoutLibrary::SlotAsVerticalBoxSlot(class UWidget* Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot");

	struct UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Params {
		class UWidget* Widget;			//Offset: 0 | ElementSize: 8
		class UVerticalBoxSlot* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Params params;
	params.Widget = Widget;

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
// Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Widget	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UWidgetSwitcherSlot*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UWidgetSwitcherSlot* UWidgetLayoutLibrary::SlotAsWidgetSwitcherSlot(class UWidget* Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot");

	struct UWidgetLayoutLibrary_SlotAsWidgetSwitcherSlot_Params {
		class UWidget* Widget;			//Offset: 0 | ElementSize: 8
		class UWidgetSwitcherSlot* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UWidgetLayoutLibrary_SlotAsWidgetSwitcherSlot_Params params;
	params.Widget = Widget;

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
// Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot
// Flags: Final, Native, Static, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: Widget	Type: class UWidget*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UWrapBoxSlot*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UWrapBoxSlot* UWidgetLayoutLibrary::SlotAsWrapBoxSlot(class UWidget* Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot");

	struct UWidgetLayoutLibrary_SlotAsWrapBoxSlot_Params {
		class UWidget* Widget;			//Offset: 0 | ElementSize: 8
		class UWrapBoxSlot* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UWidgetLayoutLibrary_SlotAsWrapBoxSlot_Params params;
	params.Widget = Widget;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

#pragma endregion
}