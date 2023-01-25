#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "UMG/PanelSlot.h"
/////////////////////////////////////////////
// Class UMG.UniformGridSlot
// Super: Class UMG.PanelSlot
// Size: 80
// Size inherited: 56
/////////////////////////////////////////////
namespace UE4 {
class UUniformGridSlot : public UPanelSlot {
public:
#pragma region Members
	//TEnumAsByte<EHorizontalAlignment>	HorizontalAlignment;		//Offset: 56	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EHorizontalAlignment> M_GetHorizontalAlignment() const;
	TEnumAsByte<EHorizontalAlignment>* M_PtrGetHorizontalAlignment();
	void M_SetHorizontalAlignment(const TEnumAsByte<EHorizontalAlignment>& value);

	//TEnumAsByte<EVerticalAlignment>	VerticalAlignment;		//Offset: 57	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EVerticalAlignment> M_GetVerticalAlignment() const;
	TEnumAsByte<EVerticalAlignment>* M_PtrGetVerticalAlignment();
	void M_SetVerticalAlignment(const TEnumAsByte<EVerticalAlignment>& value);

	//int32_t	Row;		//Offset: 60	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetRow() const;
	int32_t* M_PtrGetRow();
	void M_SetRow(const int32_t& value);

	//int32_t	Column;		//Offset: 64	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetColumn() const;
	int32_t* M_PtrGetColumn();
	void M_SetColumn(const int32_t& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.UniformGridSlot");
		return ptr;
	}

#pragma region Functions
	void SetColumn(int32_t InColumn);

	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);

	void SetRow(int32_t InRow);

	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);

#pragma endregion
};
};