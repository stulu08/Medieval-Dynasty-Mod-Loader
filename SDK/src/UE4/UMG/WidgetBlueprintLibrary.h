#pragma once
#include "Structs.h"
#include "Engine/BlueprintFunctionLibrary.h"
/////////////////////////////////////////////
// Class UMG.WidgetBlueprintLibrary
// Super: Class Engine.BlueprintFunctionLibrary
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.WidgetBlueprintLibrary");
		return ptr;
	}

#pragma region Functions
	static void CancelDragDrop();

	static struct FEventReply CaptureJoystick(struct FEventReply* Reply, class UWidget* CapturingWidget, bool bInAllJoysticks);

	static struct FEventReply CaptureMouse(struct FEventReply* Reply, class UWidget* CapturingWidget);

	static struct FEventReply ClearUserFocus(struct FEventReply* Reply, bool bInAllUsers);

	static class UUserWidget* Create(class UObject* WorldContextObject, class UUserWidget* WidgetType, class APlayerController* OwningPlayer);

	static class UDragDropOperation* CreateDragDropOperation(class UDragDropOperation* OperationClass);

	static struct FEventReply DetectDrag(struct FEventReply* Reply, class UWidget* WidgetDetectingDrag, struct FKey DragKey);

	static struct FEventReply DetectDragIfPressed(const struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, struct FKey DragKey);

	static void DismissAllMenus();

	static void DrawBox(struct FPaintContext* Context, struct FVector2D Position, struct FVector2D Size, class USlateBrushAsset* Brush, struct FLinearColor Tint);

	static void DrawLine(struct FPaintContext* Context, struct FVector2D PositionA, struct FVector2D PositionB, struct FLinearColor Tint, bool bAntiAlias, float Thickness);

	static void DrawLines(struct FPaintContext* Context, const TArray<struct FVector2D>& Points, struct FLinearColor Tint, bool bAntiAlias, float Thickness);

	static void DrawText(struct FPaintContext* Context, struct FString inString, struct FVector2D Position, struct FLinearColor Tint);

	static void DrawTextFormatted(struct FPaintContext* Context, const struct FText& Text, struct FVector2D Position, class UFont* Font, int32_t FontSize, struct FName FontTypeFace, struct FLinearColor Tint);

	static struct FEventReply EndDragDrop(struct FEventReply* Reply);

	static void GetAllWidgetsOfClass(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, class UUserWidget* WidgetClass, bool TopLevelOnly);

	static void GetAllWidgetsWithInterface(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, class UInterface* Interface, bool TopLevelOnly);

	static class UObject* GetBrushResource(const struct FSlateBrush& Brush);

	static class UMaterialInterface* GetBrushResourceAsMaterial(const struct FSlateBrush& Brush);

	static class UTexture2D* GetBrushResourceAsTexture2D(const struct FSlateBrush& Brush);

	static class UDragDropOperation* GetDragDroppingContent();

	static class UMaterialInstanceDynamic* GetDynamicMaterial(struct FSlateBrush* Brush);

	static struct FInputEvent GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event);

	static struct FInputEvent GetInputEventFromKeyEvent(const struct FKeyEvent& Event);

	static struct FInputEvent GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event);

	static struct FInputEvent GetInputEventFromPointerEvent(const struct FPointerEvent& Event);

	static struct FKeyEvent GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event);

	static void GetSafeZonePadding(class UObject* WorldContextObject, struct FVector4* SafePadding, struct FVector2D* SafePaddingScale, struct FVector4* SpillOverPadding);

	static struct FEventReply Handled();

	static bool IsDragDropping();

	static struct FEventReply LockMouse(struct FEventReply* Reply, class UWidget* CapturingWidget);

	static struct FSlateBrush MakeBrushFromAsset(class USlateBrushAsset* BrushAsset);

	static struct FSlateBrush MakeBrushFromMaterial(class UMaterialInterface* Material, int32_t Width, int32_t Height);

	static struct FSlateBrush MakeBrushFromTexture(class UTexture2D* Texture, int32_t Width, int32_t Height);

	static struct FSlateBrush NoResourceBrush();

	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature();

	static struct FEventReply ReleaseJoystickCapture(struct FEventReply* Reply, bool bInAllJoysticks);

	static struct FEventReply ReleaseMouseCapture(struct FEventReply* Reply);

	static void RestorePreviousWindowTitleBarState();

	static void SetBrushResourceToMaterial(struct FSlateBrush* Brush, class UMaterialInterface* Material);

	static void SetBrushResourceToTexture(struct FSlateBrush* Brush, class UTexture2D* Texture);

	static void SetColorVisionDeficiencyType(EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency);

	static void SetFocusToGameViewport();

	static bool SetHardwareCursor(class UObject* WorldContextObject, TEnumAsByte<EMouseCursor> CursorShape, struct FName CursorName, struct FVector2D HotSpot);

	static void SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture);

	static void SetInputMode_GameAndUIEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture);

	static void SetInputMode_GameOnly(class APlayerController* PlayerController);

	static void SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport);

	static void SetInputMode_UIOnlyEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode);

	static struct FEventReply SetMousePosition(struct FEventReply* Reply, struct FVector2D NewMousePosition);

	static struct FEventReply SetUserFocus(struct FEventReply* Reply, class UWidget* FocusWidget, bool bInAllUsers);

	static void SetWindowTitleBarCloseButtonActive(bool bActive);

	static void SetWindowTitleBarOnCloseClickedDelegate(struct FScriptDelegate Delegate);

	static void SetWindowTitleBarState(class UWidget* TitleBarContent, EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible);

	static struct FEventReply Unhandled();

	static struct FEventReply UnlockMouse(struct FEventReply* Reply);

#pragma endregion
};
};