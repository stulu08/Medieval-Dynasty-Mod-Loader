#pragma once
#include "Structs.h"
#include "UMG/PanelWidget.h"
/////////////////////////////////////////////
// Class UMG.GridPanel
// Super: Class UMG.PanelWidget
// Size: 336
// Size inherited: 288
/////////////////////////////////////////////
namespace UE4 {
class UGridPanel : public UPanelWidget {
public:
#pragma region Members
	//TArray<float>	ColumnFill;		//Offset: 288	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<float> M_GetColumnFill() const;
	TArray<float>* M_PtrGetColumnFill();
	void M_SetColumnFill(const TArray<float>& value);

	//TArray<float>	RowFill;		//Offset: 304	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<float> M_GetRowFill() const;
	TArray<float>* M_PtrGetRowFill();
	void M_SetRowFill(const TArray<float>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.GridPanel");
		return ptr;
	}

#pragma region Functions
	class UGridSlot* AddChildToGrid(class UWidget* Content, int32_t InRow, int32_t InColumn);

	void SetColumnFill(int32_t ColumnIndex, float Coefficient);

	void SetRowFill(int32_t ColumnIndex, float Coefficient);

#pragma endregion
};
};