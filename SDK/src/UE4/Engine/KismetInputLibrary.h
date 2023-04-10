#pragma once
#include "Structs.h"
#include "Engine/BlueprintFunctionLibrary.h"
#include "SlateCore/Structs.h"
/////////////////////////////////////////////
// Class Engine.KismetInputLibrary
// Super: Class Engine.BlueprintFunctionLibrary
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UKismetInputLibrary : public UBlueprintFunctionLibrary {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.KismetInputLibrary");
		return ptr;
	}

#pragma region Functions
	static void CalibrateTilt();

	static bool EqualEqual_InputChordInputChord(struct FInputChord A, struct FInputChord B);

	static bool EqualEqual_KeyKey(struct FKey A, struct FKey B);

	static float GetAnalogValue(const struct FAnalogInputEvent& Input);

	static struct FKey GetKey(const struct FKeyEvent& Input);

	static int32_t GetUserIndex(const struct FKeyEvent& Input);

	static struct FText InputChord_GetDisplayName(const struct FInputChord& Key);

	static bool InputEvent_IsAltDown(const struct FInputEvent& Input);

	static bool InputEvent_IsCommandDown(const struct FInputEvent& Input);

	static bool InputEvent_IsControlDown(const struct FInputEvent& Input);

	static bool InputEvent_IsLeftAltDown(const struct FInputEvent& Input);

	static bool InputEvent_IsLeftCommandDown(const struct FInputEvent& Input);

	static bool InputEvent_IsLeftControlDown(const struct FInputEvent& Input);

	static bool InputEvent_IsLeftShiftDown(const struct FInputEvent& Input);

	static bool InputEvent_IsRepeat(const struct FInputEvent& Input);

	static bool InputEvent_IsRightAltDown(const struct FInputEvent& Input);

	static bool InputEvent_IsRightCommandDown(const struct FInputEvent& Input);

	static bool InputEvent_IsRightControlDown(const struct FInputEvent& Input);

	static bool InputEvent_IsRightShiftDown(const struct FInputEvent& Input);

	static bool InputEvent_IsShiftDown(const struct FInputEvent& Input);

	static struct FText Key_GetDisplayName(const struct FKey& Key);

	static EUINavigationAction Key_GetNavigationAction(const struct FKey& InKey);

	static EUINavigationAction Key_GetNavigationActionFromKey(const struct FKeyEvent& InKeyEvent);

	static EUINavigation Key_GetNavigationDirectionFromAnalog(const struct FAnalogInputEvent& InAnalogEvent);

	static EUINavigation Key_GetNavigationDirectionFromKey(const struct FKeyEvent& InKeyEvent);

	static bool Key_IsAnalog(const struct FKey& Key);

	static bool Key_IsAxis1D(const struct FKey& Key);

	static bool Key_IsAxis2D(const struct FKey& Key);

	static bool Key_IsAxis3D(const struct FKey& Key);

	static bool Key_IsButtonAxis(const struct FKey& Key);

	static bool Key_IsDigital(const struct FKey& Key);

	static bool Key_IsGamepadKey(const struct FKey& Key);

	static bool Key_IsKeyboardKey(const struct FKey& Key);

	static bool Key_IsModifierKey(const struct FKey& Key);

	static bool Key_IsMouseButton(const struct FKey& Key);

	static bool Key_IsValid(const struct FKey& Key);

	static bool Key_IsVectorAxis(const struct FKey& Key);

	static struct FVector2D PointerEvent_GetCursorDelta(const struct FPointerEvent& Input);

	static struct FKey PointerEvent_GetEffectingButton(const struct FPointerEvent& Input);

	static struct FVector2D PointerEvent_GetGestureDelta(const struct FPointerEvent& Input);

	static ESlateGesture PointerEvent_GetGestureType(const struct FPointerEvent& Input);

	static struct FVector2D PointerEvent_GetLastScreenSpacePosition(const struct FPointerEvent& Input);

	static int32_t PointerEvent_GetPointerIndex(const struct FPointerEvent& Input);

	static struct FVector2D PointerEvent_GetScreenSpacePosition(const struct FPointerEvent& Input);

	static int32_t PointerEvent_GetTouchpadIndex(const struct FPointerEvent& Input);

	static int32_t PointerEvent_GetUserIndex(const struct FPointerEvent& Input);

	static float PointerEvent_GetWheelDelta(const struct FPointerEvent& Input);

	static bool PointerEvent_IsMouseButtonDown(const struct FPointerEvent& Input, struct FKey MouseButton);

	static bool PointerEvent_IsTouchEvent(const struct FPointerEvent& Input);

#pragma endregion
};
};