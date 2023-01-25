#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "Engine/BlueprintFunctionLibrary.h"
/////////////////////////////////////////////
// Class UMG.SlateBlueprintLibrary
// Super: Class Engine.BlueprintFunctionLibrary
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.SlateBlueprintLibrary");
		return ptr;
	}

#pragma region Functions
	static struct FVector2D AbsoluteToLocal(const struct FGeometry& Geometry, struct FVector2D AbsoluteCoordinate);

	static void AbsoluteToViewport(class UObject* WorldContextObject, struct FVector2D AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);

	static bool EqualEqual_SlateBrush(const struct FSlateBrush& A, const struct FSlateBrush& B);

	static struct FVector2D GetAbsoluteSize(const struct FGeometry& Geometry);

	static struct FVector2D GetLocalSize(const struct FGeometry& Geometry);

	static struct FVector2D GetLocalTopLeft(const struct FGeometry& Geometry);

	static bool IsUnderLocation(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);

	static struct FVector2D LocalToAbsolute(const struct FGeometry& Geometry, struct FVector2D LocalCoordinate);

	static void LocalToViewport(class UObject* WorldContextObject, const struct FGeometry& Geometry, struct FVector2D LocalCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);

	static void ScreenToViewport(class UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D* ViewportPosition);

	static void ScreenToWidgetAbsolute(class UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D* AbsoluteCoordinate, bool bIncludeWindowPosition);

	static void ScreenToWidgetLocal(class UObject* WorldContextObject, const struct FGeometry& Geometry, struct FVector2D ScreenPosition, struct FVector2D* LocalCoordinate, bool bIncludeWindowPosition);

	static float TransformScalarAbsoluteToLocal(const struct FGeometry& Geometry, float AbsoluteScalar);

	static float TransformScalarLocalToAbsolute(const struct FGeometry& Geometry, float LocalScalar);

	static struct FVector2D TransformVectorAbsoluteToLocal(const struct FGeometry& Geometry, struct FVector2D AbsoluteVector);

	static struct FVector2D TransformVectorLocalToAbsolute(const struct FGeometry& Geometry, struct FVector2D LocalVector);

#pragma endregion
};
};