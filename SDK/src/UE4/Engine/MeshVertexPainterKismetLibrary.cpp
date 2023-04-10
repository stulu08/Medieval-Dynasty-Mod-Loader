#include "../SDK.h"
#include "MeshVertexPainterKismetLibrary.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.MeshVertexPainterKismetLibrary.PaintVerticesLerpAlongAxis
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: StaticMeshComponent	Type: class UStaticMeshComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: StartColor	Type: struct FLinearColor	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: EndColor	Type: struct FLinearColor	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Axis	Type: EVertexPaintAxis	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bConvertToSRGB	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMeshVertexPainterKismetLibrary::PaintVerticesLerpAlongAxis(class UStaticMeshComponent* StaticMeshComponent, const struct FLinearColor& StartColor, const struct FLinearColor& EndColor, EVertexPaintAxis Axis, bool bConvertToSRGB) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MeshVertexPainterKismetLibrary.PaintVerticesLerpAlongAxis");

	struct UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Params {
		class UStaticMeshComponent* StaticMeshComponent;			//Offset: 0 | ElementSize: 8
		struct FLinearColor StartColor;			//Offset: 8 | ElementSize: 16
		struct FLinearColor EndColor;			//Offset: 24 | ElementSize: 16
		EVertexPaintAxis Axis;			//Offset: 40 | ElementSize: 1
		bool bConvertToSRGB;			//Offset: 41 | ElementSize: 1
	};
	UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Params params;
	params.StaticMeshComponent = StaticMeshComponent;
	params.StartColor = StartColor;
	params.EndColor = EndColor;
	params.Axis = Axis;
	params.bConvertToSRGB = bConvertToSRGB;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.MeshVertexPainterKismetLibrary.PaintVerticesSingleColor
// Flags: Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: StaticMeshComponent	Type: class UStaticMeshComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FillColor	Type: struct FLinearColor	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bConvertToSRGB	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMeshVertexPainterKismetLibrary::PaintVerticesSingleColor(class UStaticMeshComponent* StaticMeshComponent, const struct FLinearColor& FillColor, bool bConvertToSRGB) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MeshVertexPainterKismetLibrary.PaintVerticesSingleColor");

	struct UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Params {
		class UStaticMeshComponent* StaticMeshComponent;			//Offset: 0 | ElementSize: 8
		struct FLinearColor FillColor;			//Offset: 8 | ElementSize: 16
		bool bConvertToSRGB;			//Offset: 24 | ElementSize: 1
	};
	UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Params params;
	params.StaticMeshComponent = StaticMeshComponent;
	params.FillColor = FillColor;
	params.bConvertToSRGB = bConvertToSRGB;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.MeshVertexPainterKismetLibrary.RemovePaintedVertices
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: StaticMeshComponent	Type: class UStaticMeshComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMeshVertexPainterKismetLibrary::RemovePaintedVertices(class UStaticMeshComponent* StaticMeshComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MeshVertexPainterKismetLibrary.RemovePaintedVertices");

	struct UMeshVertexPainterKismetLibrary_RemovePaintedVertices_Params {
		class UStaticMeshComponent* StaticMeshComponent;			//Offset: 0 | ElementSize: 8
	};
	UMeshVertexPainterKismetLibrary_RemovePaintedVertices_Params params;
	params.StaticMeshComponent = StaticMeshComponent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}