#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class UMG.SlateVectorArtData
// Super: Class CoreUObject.Object
// Size: 96
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class USlateVectorArtData : public UObject {
public:
#pragma region Members
	//TArray<struct FSlateMeshVertex>	VertexData;		//Offset: 40	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	TArray<struct FSlateMeshVertex> M_GetVertexData() const;
	TArray<struct FSlateMeshVertex>* M_PtrGetVertexData();
	void M_SetVertexData(const TArray<struct FSlateMeshVertex>& value);

	//TArray<uint32_t>	IndexData;		//Offset: 56	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	TArray<uint32_t> M_GetIndexData() const;
	TArray<uint32_t>* M_PtrGetIndexData();
	void M_SetIndexData(const TArray<uint32_t>& value);

	//class UMaterialInterface*	Material;		//Offset: 72	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class UMaterialInterface* M_GetMaterial() const;
	class UMaterialInterface** M_PtrGetMaterial();
	void M_SetMaterial(const class UMaterialInterface*& value);

	//struct FVector2D	ExtentMin;		//Offset: 80	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FVector2D M_GetExtentMin() const;
	struct FVector2D* M_PtrGetExtentMin();
	void M_SetExtentMin(const struct FVector2D& value);

	//struct FVector2D	ExtentMax;		//Offset: 88	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FVector2D M_GetExtentMax() const;
	struct FVector2D* M_PtrGetExtentMax();
	void M_SetExtentMax(const struct FVector2D& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.SlateVectorArtData");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};