#pragma once
#include "Structs.h"
#include "UMG/Widget.h"
/////////////////////////////////////////////
// Class UMG.CircularThrobber
// Super: Class UMG.Widget
// Size: 448
// Size inherited: 264
/////////////////////////////////////////////
namespace UE4 {
class UCircularThrobber : public UWidget {
public:
#pragma region Members
	//int32_t	NumberOfPieces;		//Offset: 264	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetNumberOfPieces() const;
	int32_t* M_PtrGetNumberOfPieces();
	void M_SetNumberOfPieces(const int32_t& value);

	//float	Period;		//Offset: 268	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetPeriod() const;
	float* M_PtrGetPeriod();
	void M_SetPeriod(const float& value);

	//float	Radius;		//Offset: 272	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float M_GetRadius() const;
	float* M_PtrGetRadius();
	void M_SetRadius(const float& value);

	//class USlateBrushAsset*	PieceImage;		//Offset: 280	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class USlateBrushAsset* M_GetPieceImage() const;
	class USlateBrushAsset** M_PtrGetPieceImage();
	void M_SetPieceImage(const class USlateBrushAsset*& value);

	//struct FSlateBrush	Image;		//Offset: 288	Size: 136	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	struct FSlateBrush M_GetImage() const;
	struct FSlateBrush* M_PtrGetImage();
	void M_SetImage(const struct FSlateBrush& value);

	//bool	bEnableRadius;		//Offset: 424	Size: 1	Flags: Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	bool M_GetbEnableRadius() const;
	bool* M_PtrGetbEnableRadius();
	void M_SetbEnableRadius(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.CircularThrobber");
		return ptr;
	}

#pragma region Functions
	void SetNumberOfPieces(int32_t InNumberOfPieces);

	void SetPeriod(float InPeriod);

	void SetRadius(float InRadius);

#pragma endregion
};
};