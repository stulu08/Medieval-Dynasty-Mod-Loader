#pragma once
#include "Structs.h"
#include "Engine/BlueprintFunctionLibrary.h"
/////////////////////////////////////////////
// Class UMG.WidgetLayoutLibrary
// Super: Class Engine.BlueprintFunctionLibrary
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.WidgetLayoutLibrary");
		return ptr;
	}

#pragma region Functions
	static struct FVector2D GetMousePositionOnPlatform();

	static struct FVector2D GetMousePositionOnViewport(class UObject* WorldContextObject);

	static bool GetMousePositionScaledByDPI(class APlayerController* Player, float* LocationX, float* LocationY);

	static struct FGeometry GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController);

	static float GetViewportScale(class UObject* WorldContextObject);

	static struct FVector2D GetViewportSize(class UObject* WorldContextObject);

	static struct FGeometry GetViewportWidgetGeometry(class UObject* WorldContextObject);

	static bool ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, struct FVector WorldLocation, struct FVector2D* ScreenPosition, bool bPlayerViewportRelative);

	static void RemoveAllWidgets(class UObject* WorldContextObject);

	static class UBorderSlot* SlotAsBorderSlot(class UWidget* Widget);

	static class UCanvasPanelSlot* SlotAsCanvasSlot(class UWidget* Widget);

	static class UGridSlot* SlotAsGridSlot(class UWidget* Widget);

	static class UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(class UWidget* Widget);

	static class UOverlaySlot* SlotAsOverlaySlot(class UWidget* Widget);

	static class USafeZoneSlot* SlotAsSafeBoxSlot(class UWidget* Widget);

	static class UScaleBoxSlot* SlotAsScaleBoxSlot(class UWidget* Widget);

	static class UScrollBoxSlot* SlotAsScrollBoxSlot(class UWidget* Widget);

	static class USizeBoxSlot* SlotAsSizeBoxSlot(class UWidget* Widget);

	static class UUniformGridSlot* SlotAsUniformGridSlot(class UWidget* Widget);

	static class UVerticalBoxSlot* SlotAsVerticalBoxSlot(class UWidget* Widget);

	static class UWidgetSwitcherSlot* SlotAsWidgetSwitcherSlot(class UWidget* Widget);

	static class UWrapBoxSlot* SlotAsWrapBoxSlot(class UWidget* Widget);

#pragma endregion
};
};