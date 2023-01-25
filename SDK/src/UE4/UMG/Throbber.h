#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "UMG/Widget.h"
/////////////////////////////////////////////
// Class UMG.Throbber
// Super: Class UMG.Widget
// Size: 432
// Size inherited: 264
/////////////////////////////////////////////
namespace UE4 {
class UThrobber : public UWidget {
public:
#pragma region Members
	//int32_t	NumberOfPieces;		//Offset: 264	Size: 4	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t M_GetNumberOfPieces() const;
	int32_t* M_PtrGetNumberOfPieces();
	void M_SetNumberOfPieces(const int32_t& value);

	//bool	bAnimateHorizontally;		//Offset: 268	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbAnimateHorizontally() const;
	bool* M_PtrGetbAnimateHorizontally();
	void M_SetbAnimateHorizontally(const bool& value);

	//bool	bAnimateVertically;		//Offset: 269	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbAnimateVertically() const;
	bool* M_PtrGetbAnimateVertically();
	void M_SetbAnimateVertically(const bool& value);

	//bool	bAnimateOpacity;		//Offset: 270	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbAnimateOpacity() const;
	bool* M_PtrGetbAnimateOpacity();
	void M_SetbAnimateOpacity(const bool& value);

	//class USlateBrushAsset*	PieceImage;		//Offset: 272	Size: 8	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class USlateBrushAsset* M_GetPieceImage() const;
	class USlateBrushAsset** M_PtrGetPieceImage();
	void M_SetPieceImage(const class USlateBrushAsset*& value);

	//struct FSlateBrush	Image;		//Offset: 280	Size: 136	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	struct FSlateBrush M_GetImage() const;
	struct FSlateBrush* M_PtrGetImage();
	void M_SetImage(const struct FSlateBrush& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.Throbber");
		return ptr;
	}

#pragma region Functions
	void SetAnimateHorizontally(bool bInAnimateHorizontally);

	void SetAnimateOpacity(bool bInAnimateOpacity);

	void SetAnimateVertically(bool bInAnimateVertically);

	void SetNumberOfPieces(int32_t InNumberOfPieces);

#pragma endregion
};
};