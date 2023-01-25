#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "UMG/PanelSlot.h"
/////////////////////////////////////////////
// Class UMG.GridSlot
// Super: Class UMG.PanelSlot
// Size: 112
// Size inherited: 56
/////////////////////////////////////////////
namespace UE4 {
class UGridSlot : public UPanelSlot {
public:
#pragma region Members
	//struct FMargin	Padding;		//Offset: 56	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FMargin M_GetPadding() const;
	struct FMargin* M_PtrGetPadding();
	void M_SetPadding(const struct FMargin& value);

	//TEnumAsByte<EHorizontalAlignment>	HorizontalAlignment;		//Offset: 72	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EHorizontalAlignment> M_GetHorizontalAlignment() const;
	TEnumAsByte<EHorizontalAlignment>* M_PtrGetHorizontalAlignment();
	void M_SetHorizontalAlignment(const TEnumAsByte<EHorizontalAlignment>& value);

	//TEnumAsByte<EVerticalAlignment>	VerticalAlignment;		//Offset: 73	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EVerticalAlignment> M_GetVerticalAlignment() const;
	TEnumAsByte<EVerticalAlignment>* M_PtrGetVerticalAlignment();
	void M_SetVerticalAlignment(const TEnumAsByte<EVerticalAlignment>& value);

	//int32_t	Row;		//Offset: 76	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetRow() const;
	int32_t* M_PtrGetRow();
	void M_SetRow(const int32_t& value);

	//int32_t	RowSpan;		//Offset: 80	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetRowSpan() const;
	int32_t* M_PtrGetRowSpan();
	void M_SetRowSpan(const int32_t& value);

	//int32_t	Column;		//Offset: 84	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetColumn() const;
	int32_t* M_PtrGetColumn();
	void M_SetColumn(const int32_t& value);

	//int32_t	ColumnSpan;		//Offset: 88	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetColumnSpan() const;
	int32_t* M_PtrGetColumnSpan();
	void M_SetColumnSpan(const int32_t& value);

	//int32_t	Layer;		//Offset: 92	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetLayer() const;
	int32_t* M_PtrGetLayer();
	void M_SetLayer(const int32_t& value);

	//struct FVector2D	Nudge;		//Offset: 96	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector2D M_GetNudge() const;
	struct FVector2D* M_PtrGetNudge();
	void M_SetNudge(const struct FVector2D& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.GridSlot");
		return ptr;
	}

#pragma region Functions
	void SetColumn(int32_t InColumn);

	void SetColumnSpan(int32_t InColumnSpan);

	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);

	void SetLayer(int32_t InLayer);

	void SetNudge(struct FVector2D InNudge);

	void SetPadding(struct FMargin InPadding);

	void SetRow(int32_t InRow);

	void SetRowSpan(int32_t InRowSpan);

	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);

#pragma endregion
};
};