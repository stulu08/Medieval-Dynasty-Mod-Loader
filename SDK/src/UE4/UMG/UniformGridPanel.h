#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "UMG/PanelWidget.h"
/////////////////////////////////////////////
// Class UMG.UniformGridPanel
// Super: Class UMG.PanelWidget
// Size: 328
// Size inherited: 288
/////////////////////////////////////////////
namespace UE4 {
class UUniformGridPanel : public UPanelWidget {
public:
#pragma region Members
	//struct FMargin	SlotPadding;		//Offset: 288	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FMargin M_GetSlotPadding() const;
	struct FMargin* M_PtrGetSlotPadding();
	void M_SetSlotPadding(const struct FMargin& value);

	//float	MinDesiredSlotWidth;		//Offset: 304	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetMinDesiredSlotWidth() const;
	float* M_PtrGetMinDesiredSlotWidth();
	void M_SetMinDesiredSlotWidth(const float& value);

	//float	MinDesiredSlotHeight;		//Offset: 308	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetMinDesiredSlotHeight() const;
	float* M_PtrGetMinDesiredSlotHeight();
	void M_SetMinDesiredSlotHeight(const float& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.UniformGridPanel");
		return ptr;
	}

#pragma region Functions
	class UUniformGridSlot* AddChildToUniformGrid(class UWidget* Content, int32_t InRow, int32_t InColumn);

	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);

	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);

	void SetSlotPadding(struct FMargin InSlotPadding);

#pragma endregion
};
};