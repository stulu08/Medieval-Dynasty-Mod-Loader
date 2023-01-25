#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "UMG/ContentWidget.h"
/////////////////////////////////////////////
// Class UMG.ScaleBox
// Super: Class UMG.ContentWidget
// Size: 320
// Size inherited: 288
/////////////////////////////////////////////
namespace UE4 {
class UScaleBox : public UContentWidget {
public:
#pragma region Members
	//TEnumAsByte<EStretch>	Stretch;		//Offset: 288	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EStretch> M_GetStretch() const;
	TEnumAsByte<EStretch>* M_PtrGetStretch();
	void M_SetStretch(const TEnumAsByte<EStretch>& value);

	//TEnumAsByte<EStretchDirection>	StretchDirection;		//Offset: 289	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EStretchDirection> M_GetStretchDirection() const;
	TEnumAsByte<EStretchDirection>* M_PtrGetStretchDirection();
	void M_SetStretchDirection(const TEnumAsByte<EStretchDirection>& value);

	//float	UserSpecifiedScale;		//Offset: 292	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetUserSpecifiedScale() const;
	float* M_PtrGetUserSpecifiedScale();
	void M_SetUserSpecifiedScale(const float& value);

	//bool	IgnoreInheritedScale;		//Offset: 296	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetIgnoreInheritedScale() const;
	bool* M_PtrGetIgnoreInheritedScale();
	void M_SetIgnoreInheritedScale(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.ScaleBox");
		return ptr;
	}

#pragma region Functions
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);

	void SetStretch(TEnumAsByte<EStretch> InStretch);

	void SetStretchDirection(TEnumAsByte<EStretchDirection> InStretchDirection);

	void SetUserSpecifiedScale(float InUserSpecifiedScale);

#pragma endregion
};
};