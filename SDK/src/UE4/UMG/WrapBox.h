#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "UMG/PanelWidget.h"
/////////////////////////////////////////////
// Class UMG.WrapBox
// Super: Class UMG.PanelWidget
// Size: 328
// Size inherited: 288
/////////////////////////////////////////////
namespace UE4 {
class UWrapBox : public UPanelWidget {
public:
#pragma region Members
	//struct FVector2D	InnerSlotPadding;		//Offset: 288	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector2D M_GetInnerSlotPadding() const;
	struct FVector2D* M_PtrGetInnerSlotPadding();
	void M_SetInnerSlotPadding(const struct FVector2D& value);

	//float	WrapWidth;		//Offset: 296	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetWrapWidth() const;
	float* M_PtrGetWrapWidth();
	void M_SetWrapWidth(const float& value);

	//float	WrapSize;		//Offset: 300	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetWrapSize() const;
	float* M_PtrGetWrapSize();
	void M_SetWrapSize(const float& value);

	//bool	bExplicitWrapWidth;		//Offset: 304	Size: 1	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbExplicitWrapWidth() const;
	bool* M_PtrGetbExplicitWrapWidth();
	void M_SetbExplicitWrapWidth(const bool& value);

	//bool	bExplicitWrapSize;		//Offset: 305	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbExplicitWrapSize() const;
	bool* M_PtrGetbExplicitWrapSize();
	void M_SetbExplicitWrapSize(const bool& value);

	//TEnumAsByte<EOrientation>	Orientation;		//Offset: 306	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EOrientation> M_GetOrientation() const;
	TEnumAsByte<EOrientation>* M_PtrGetOrientation();
	void M_SetOrientation(const TEnumAsByte<EOrientation>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.WrapBox");
		return ptr;
	}

#pragma region Functions
	class UWrapBoxSlot* AddChildToWrapBox(class UWidget* Content);

	void SetInnerSlotPadding(struct FVector2D InPadding);

#pragma endregion
};
};