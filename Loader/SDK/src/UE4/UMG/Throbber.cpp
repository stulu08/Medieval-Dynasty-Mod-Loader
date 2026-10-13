#include "../SDK.h"
#include "Throbber.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of NumberOfPieces
// Declaration: int32_t NumberOfPieces
int32_t UThrobber::M_GetNumberOfPieces() const {
	return Read<int32_t>((byte*)this + 264);
}
int32_t* UThrobber::M_PtrGetNumberOfPieces() {
	return reinterpret_cast<int32_t*>((byte*)this + 264);
}
void UThrobber::M_SetNumberOfPieces(const int32_t& value) {
	Write((byte*)this + 264, value);
}
// Member Getter and Setter of bAnimateHorizontally
// Declaration: bool bAnimateHorizontally
bool UThrobber::M_GetbAnimateHorizontally() const {
	return Read<bool>((byte*)this + 268);
}
bool* UThrobber::M_PtrGetbAnimateHorizontally() {
	return reinterpret_cast<bool*>((byte*)this + 268);
}
void UThrobber::M_SetbAnimateHorizontally(const bool& value) {
	Write((byte*)this + 268, value);
}
// Member Getter and Setter of bAnimateVertically
// Declaration: bool bAnimateVertically
bool UThrobber::M_GetbAnimateVertically() const {
	return Read<bool>((byte*)this + 269);
}
bool* UThrobber::M_PtrGetbAnimateVertically() {
	return reinterpret_cast<bool*>((byte*)this + 269);
}
void UThrobber::M_SetbAnimateVertically(const bool& value) {
	Write((byte*)this + 269, value);
}
// Member Getter and Setter of bAnimateOpacity
// Declaration: bool bAnimateOpacity
bool UThrobber::M_GetbAnimateOpacity() const {
	return Read<bool>((byte*)this + 270);
}
bool* UThrobber::M_PtrGetbAnimateOpacity() {
	return reinterpret_cast<bool*>((byte*)this + 270);
}
void UThrobber::M_SetbAnimateOpacity(const bool& value) {
	Write((byte*)this + 270, value);
}
// Member Getter and Setter of PieceImage
// Declaration: class USlateBrushAsset* PieceImage
class USlateBrushAsset* UThrobber::M_GetPieceImage() const {
	return Read<class USlateBrushAsset*>((byte*)this + 272);
}
class USlateBrushAsset** UThrobber::M_PtrGetPieceImage() {
	return reinterpret_cast<class USlateBrushAsset**>((byte*)this + 272);
}
void UThrobber::M_SetPieceImage(const class USlateBrushAsset*& value) {
	Write((byte*)this + 272, value);
}
// Member Getter and Setter of Image
// Declaration: struct FSlateBrush Image
struct FSlateBrush UThrobber::M_GetImage() const {
	return Read<struct FSlateBrush>((byte*)this + 280);
}
struct FSlateBrush* UThrobber::M_PtrGetImage() {
	return reinterpret_cast<struct FSlateBrush*>((byte*)this + 280);
}
void UThrobber::M_SetImage(const struct FSlateBrush& value) {
	Write((byte*)this + 280, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.Throbber.SetAnimateHorizontally
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bInAnimateHorizontally	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UThrobber::SetAnimateHorizontally(bool bInAnimateHorizontally) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetAnimateHorizontally");

	struct UThrobber_SetAnimateHorizontally_Params {
		bool bInAnimateHorizontally;			//Offset: 0 | ElementSize: 1
	};
	UThrobber_SetAnimateHorizontally_Params params;
	params.bInAnimateHorizontally = bInAnimateHorizontally;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Throbber.SetAnimateOpacity
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bInAnimateOpacity	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UThrobber::SetAnimateOpacity(bool bInAnimateOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetAnimateOpacity");

	struct UThrobber_SetAnimateOpacity_Params {
		bool bInAnimateOpacity;			//Offset: 0 | ElementSize: 1
	};
	UThrobber_SetAnimateOpacity_Params params;
	params.bInAnimateOpacity = bInAnimateOpacity;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Throbber.SetAnimateVertically
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bInAnimateVertically	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UThrobber::SetAnimateVertically(bool bInAnimateVertically) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetAnimateVertically");

	struct UThrobber_SetAnimateVertically_Params {
		bool bInAnimateVertically;			//Offset: 0 | ElementSize: 1
	};
	UThrobber_SetAnimateVertically_Params params;
	params.bInAnimateVertically = bInAnimateVertically;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.Throbber.SetNumberOfPieces
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InNumberOfPieces	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UThrobber::SetNumberOfPieces(int32_t InNumberOfPieces) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetNumberOfPieces");

	struct UThrobber_SetNumberOfPieces_Params {
		int32_t InNumberOfPieces;			//Offset: 0 | ElementSize: 4
	};
	UThrobber_SetNumberOfPieces_Params params;
	params.InNumberOfPieces = InNumberOfPieces;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}