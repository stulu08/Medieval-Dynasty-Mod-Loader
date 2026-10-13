#include "../SDK.h"
#include "CircularThrobber.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of NumberOfPieces
// Declaration: int32_t NumberOfPieces
int32_t UCircularThrobber::M_GetNumberOfPieces() const {
	return Read<int32_t>((byte*)this + 264);
}
int32_t* UCircularThrobber::M_PtrGetNumberOfPieces() {
	return reinterpret_cast<int32_t*>((byte*)this + 264);
}
void UCircularThrobber::M_SetNumberOfPieces(const int32_t& value) {
	Write((byte*)this + 264, value);
}
// Member Getter and Setter of Period
// Declaration: float Period
float UCircularThrobber::M_GetPeriod() const {
	return Read<float>((byte*)this + 268);
}
float* UCircularThrobber::M_PtrGetPeriod() {
	return reinterpret_cast<float*>((byte*)this + 268);
}
void UCircularThrobber::M_SetPeriod(const float& value) {
	Write((byte*)this + 268, value);
}
// Member Getter and Setter of Radius
// Declaration: float Radius
float UCircularThrobber::M_GetRadius() const {
	return Read<float>((byte*)this + 272);
}
float* UCircularThrobber::M_PtrGetRadius() {
	return reinterpret_cast<float*>((byte*)this + 272);
}
void UCircularThrobber::M_SetRadius(const float& value) {
	Write((byte*)this + 272, value);
}
// Member Getter and Setter of PieceImage
// Declaration: class USlateBrushAsset* PieceImage
class USlateBrushAsset* UCircularThrobber::M_GetPieceImage() const {
	return Read<class USlateBrushAsset*>((byte*)this + 280);
}
class USlateBrushAsset** UCircularThrobber::M_PtrGetPieceImage() {
	return reinterpret_cast<class USlateBrushAsset**>((byte*)this + 280);
}
void UCircularThrobber::M_SetPieceImage(const class USlateBrushAsset*& value) {
	Write((byte*)this + 280, value);
}
// Member Getter and Setter of Image
// Declaration: struct FSlateBrush Image
struct FSlateBrush UCircularThrobber::M_GetImage() const {
	return Read<struct FSlateBrush>((byte*)this + 288);
}
struct FSlateBrush* UCircularThrobber::M_PtrGetImage() {
	return reinterpret_cast<struct FSlateBrush*>((byte*)this + 288);
}
void UCircularThrobber::M_SetImage(const struct FSlateBrush& value) {
	Write((byte*)this + 288, value);
}
// Member Getter and Setter of bEnableRadius
// Declaration: bool bEnableRadius
bool UCircularThrobber::M_GetbEnableRadius() const {
	return Read<bool>((byte*)this + 424);
}
bool* UCircularThrobber::M_PtrGetbEnableRadius() {
	return reinterpret_cast<bool*>((byte*)this + 424);
}
void UCircularThrobber::M_SetbEnableRadius(const bool& value) {
	Write((byte*)this + 424, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.CircularThrobber.SetNumberOfPieces
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InNumberOfPieces	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCircularThrobber::SetNumberOfPieces(int32_t InNumberOfPieces) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CircularThrobber.SetNumberOfPieces");

	struct UCircularThrobber_SetNumberOfPieces_Params {
		int32_t InNumberOfPieces;			//Offset: 0 | ElementSize: 4
	};
	UCircularThrobber_SetNumberOfPieces_Params params;
	params.InNumberOfPieces = InNumberOfPieces;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.CircularThrobber.SetPeriod
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InPeriod	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCircularThrobber::SetPeriod(float InPeriod) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CircularThrobber.SetPeriod");

	struct UCircularThrobber_SetPeriod_Params {
		float InPeriod;			//Offset: 0 | ElementSize: 4
	};
	UCircularThrobber_SetPeriod_Params params;
	params.InPeriod = InPeriod;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.CircularThrobber.SetRadius
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InRadius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCircularThrobber::SetRadius(float InRadius) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CircularThrobber.SetRadius");

	struct UCircularThrobber_SetRadius_Params {
		float InRadius;			//Offset: 0 | ElementSize: 4
	};
	UCircularThrobber_SetRadius_Params params;
	params.InRadius = InRadius;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}