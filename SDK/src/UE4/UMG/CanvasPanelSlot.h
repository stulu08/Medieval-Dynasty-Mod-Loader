#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "UMG/PanelSlot.h"
/////////////////////////////////////////////
// Class UMG.CanvasPanelSlot
// Super: Class UMG.PanelSlot
// Size: 112
// Size inherited: 56
/////////////////////////////////////////////
namespace UE4 {
class UCanvasPanelSlot : public UPanelSlot {
public:
#pragma region Members
	//struct FAnchorData	LayoutData;		//Offset: 56	Size: 40	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	struct FAnchorData M_GetLayoutData() const;
	struct FAnchorData* M_PtrGetLayoutData();
	void M_SetLayoutData(const struct FAnchorData& value);

	//bool	bAutoSize;		//Offset: 96	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbAutoSize() const;
	bool* M_PtrGetbAutoSize();
	void M_SetbAutoSize(const bool& value);

	//int32_t	ZOrder;		//Offset: 100	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetZOrder() const;
	int32_t* M_PtrGetZOrder();
	void M_SetZOrder(const int32_t& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.CanvasPanelSlot");
		return ptr;
	}

#pragma region Functions
	struct FVector2D GetAlignment() const;

	struct FAnchors GetAnchors() const;

	bool GetAutoSize() const;

	struct FAnchorData GetLayout() const;

	struct FMargin GetOffsets() const;

	struct FVector2D GetPosition() const;

	struct FVector2D GetSize() const;

	int32_t GetZOrder() const;

	void SetAlignment(struct FVector2D InAlignment);

	void SetAnchors(struct FAnchors InAnchors);

	void SetAutoSize(bool InbAutoSize);

	void SetLayout(const struct FAnchorData& InLayoutData);

	void SetMaximum(struct FVector2D InMaximumAnchors);

	void SetMinimum(struct FVector2D InMinimumAnchors);

	void SetOffsets(struct FMargin InOffset);

	void SetPosition(struct FVector2D InPosition);

	void SetSize(struct FVector2D InSize);

	void SetZOrder(int32_t InZOrder);

#pragma endregion
};
};