#pragma once
#include "Structs.h"
#include "Engine/BlueprintFunctionLibrary.h"
/////////////////////////////////////////////
// Class Engine.MeshVertexPainterKismetLibrary
// Super: Class Engine.BlueprintFunctionLibrary
// Size: 40
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UMeshVertexPainterKismetLibrary : public UBlueprintFunctionLibrary {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.MeshVertexPainterKismetLibrary");
		return ptr;
	}

#pragma region Functions
	static void PaintVerticesLerpAlongAxis(class UStaticMeshComponent* StaticMeshComponent, const struct FLinearColor& StartColor, const struct FLinearColor& EndColor, EVertexPaintAxis Axis, bool bConvertToSRGB);

	static void PaintVerticesSingleColor(class UStaticMeshComponent* StaticMeshComponent, const struct FLinearColor& FillColor, bool bConvertToSRGB);

	static void RemovePaintedVertices(class UStaticMeshComponent* StaticMeshComponent);

#pragma endregion
};
};