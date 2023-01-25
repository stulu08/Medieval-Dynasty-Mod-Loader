#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "UMG/ContentWidget.h"
/////////////////////////////////////////////
// Class UMG.SizeBox
// Super: Class UMG.ContentWidget
// Size: 344
// Size inherited: 288
/////////////////////////////////////////////
namespace UE4 {
class USizeBox : public UContentWidget {
public:
#pragma region Members
	//float	WidthOverride;		//Offset: 304	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetWidthOverride() const;
	float* M_PtrGetWidthOverride();
	void M_SetWidthOverride(const float& value);

	//float	HeightOverride;		//Offset: 308	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetHeightOverride() const;
	float* M_PtrGetHeightOverride();
	void M_SetHeightOverride(const float& value);

	//float	MinDesiredWidth;		//Offset: 312	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetMinDesiredWidth() const;
	float* M_PtrGetMinDesiredWidth();
	void M_SetMinDesiredWidth(const float& value);

	//float	MinDesiredHeight;		//Offset: 316	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetMinDesiredHeight() const;
	float* M_PtrGetMinDesiredHeight();
	void M_SetMinDesiredHeight(const float& value);

	//float	MaxDesiredWidth;		//Offset: 320	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetMaxDesiredWidth() const;
	float* M_PtrGetMaxDesiredWidth();
	void M_SetMaxDesiredWidth(const float& value);

	//float	MaxDesiredHeight;		//Offset: 324	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetMaxDesiredHeight() const;
	float* M_PtrGetMaxDesiredHeight();
	void M_SetMaxDesiredHeight(const float& value);

	//float	MinAspectRatio;		//Offset: 328	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetMinAspectRatio() const;
	float* M_PtrGetMinAspectRatio();
	void M_SetMinAspectRatio(const float& value);

	//float	MaxAspectRatio;		//Offset: 332	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetMaxAspectRatio() const;
	float* M_PtrGetMaxAspectRatio();
	void M_SetMaxAspectRatio(const float& value);

	//unsigned char	bOverride_WidthOverride : 1;		//Offset: 336	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbOverride_WidthOverride() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbOverride_WidthOverride();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbOverride_WidthOverride(const unsigned char& value);

	//unsigned char	bOverride_HeightOverride : 1;		//Offset: 336	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbOverride_HeightOverride() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbOverride_HeightOverride();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbOverride_HeightOverride(const unsigned char& value);

	//unsigned char	bOverride_MinDesiredWidth : 1;		//Offset: 336	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbOverride_MinDesiredWidth() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbOverride_MinDesiredWidth();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbOverride_MinDesiredWidth(const unsigned char& value);

	//unsigned char	bOverride_MinDesiredHeight : 1;		//Offset: 336	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbOverride_MinDesiredHeight() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbOverride_MinDesiredHeight();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbOverride_MinDesiredHeight(const unsigned char& value);

	//unsigned char	bOverride_MaxDesiredWidth : 1;		//Offset: 336	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbOverride_MaxDesiredWidth() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbOverride_MaxDesiredWidth();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbOverride_MaxDesiredWidth(const unsigned char& value);

	//unsigned char	bOverride_MaxDesiredHeight : 1;		//Offset: 336	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbOverride_MaxDesiredHeight() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbOverride_MaxDesiredHeight();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbOverride_MaxDesiredHeight(const unsigned char& value);

	//unsigned char	bOverride_MinAspectRatio : 1;		//Offset: 336	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbOverride_MinAspectRatio() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbOverride_MinAspectRatio();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbOverride_MinAspectRatio(const unsigned char& value);

	//unsigned char	bOverride_MaxAspectRatio : 1;		//Offset: 336	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbOverride_MaxAspectRatio() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbOverride_MaxAspectRatio();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbOverride_MaxAspectRatio(const unsigned char& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.SizeBox");
		return ptr;
	}

#pragma region Functions
	void ClearHeightOverride();

	void ClearMaxAspectRatio();

	void ClearMaxDesiredHeight();

	void ClearMaxDesiredWidth();

	void ClearMinAspectRatio();

	void ClearMinDesiredHeight();

	void ClearMinDesiredWidth();

	void ClearWidthOverride();

	void SetHeightOverride(float InHeightOverride);

	void SetMaxAspectRatio(float InMaxAspectRatio);

	void SetMaxDesiredHeight(float InMaxDesiredHeight);

	void SetMaxDesiredWidth(float InMaxDesiredWidth);

	void SetMinAspectRatio(float InMinAspectRatio);

	void SetMinDesiredHeight(float InMinDesiredHeight);

	void SetMinDesiredWidth(float InMinDesiredWidth);

	void SetWidthOverride(float InWidthOverride);

#pragma endregion
};
};