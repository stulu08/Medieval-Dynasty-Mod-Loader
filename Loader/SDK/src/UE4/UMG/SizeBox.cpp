#include "../SDK.h"
#include "SizeBox.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of WidthOverride
// Declaration: float WidthOverride
float USizeBox::M_GetWidthOverride() const {
	return Read<float>((byte*)this + 304);
}
float* USizeBox::M_PtrGetWidthOverride() {
	return reinterpret_cast<float*>((byte*)this + 304);
}
void USizeBox::M_SetWidthOverride(const float& value) {
	Write((byte*)this + 304, value);
}
// Member Getter and Setter of HeightOverride
// Declaration: float HeightOverride
float USizeBox::M_GetHeightOverride() const {
	return Read<float>((byte*)this + 308);
}
float* USizeBox::M_PtrGetHeightOverride() {
	return reinterpret_cast<float*>((byte*)this + 308);
}
void USizeBox::M_SetHeightOverride(const float& value) {
	Write((byte*)this + 308, value);
}
// Member Getter and Setter of MinDesiredWidth
// Declaration: float MinDesiredWidth
float USizeBox::M_GetMinDesiredWidth() const {
	return Read<float>((byte*)this + 312);
}
float* USizeBox::M_PtrGetMinDesiredWidth() {
	return reinterpret_cast<float*>((byte*)this + 312);
}
void USizeBox::M_SetMinDesiredWidth(const float& value) {
	Write((byte*)this + 312, value);
}
// Member Getter and Setter of MinDesiredHeight
// Declaration: float MinDesiredHeight
float USizeBox::M_GetMinDesiredHeight() const {
	return Read<float>((byte*)this + 316);
}
float* USizeBox::M_PtrGetMinDesiredHeight() {
	return reinterpret_cast<float*>((byte*)this + 316);
}
void USizeBox::M_SetMinDesiredHeight(const float& value) {
	Write((byte*)this + 316, value);
}
// Member Getter and Setter of MaxDesiredWidth
// Declaration: float MaxDesiredWidth
float USizeBox::M_GetMaxDesiredWidth() const {
	return Read<float>((byte*)this + 320);
}
float* USizeBox::M_PtrGetMaxDesiredWidth() {
	return reinterpret_cast<float*>((byte*)this + 320);
}
void USizeBox::M_SetMaxDesiredWidth(const float& value) {
	Write((byte*)this + 320, value);
}
// Member Getter and Setter of MaxDesiredHeight
// Declaration: float MaxDesiredHeight
float USizeBox::M_GetMaxDesiredHeight() const {
	return Read<float>((byte*)this + 324);
}
float* USizeBox::M_PtrGetMaxDesiredHeight() {
	return reinterpret_cast<float*>((byte*)this + 324);
}
void USizeBox::M_SetMaxDesiredHeight(const float& value) {
	Write((byte*)this + 324, value);
}
// Member Getter and Setter of MinAspectRatio
// Declaration: float MinAspectRatio
float USizeBox::M_GetMinAspectRatio() const {
	return Read<float>((byte*)this + 328);
}
float* USizeBox::M_PtrGetMinAspectRatio() {
	return reinterpret_cast<float*>((byte*)this + 328);
}
void USizeBox::M_SetMinAspectRatio(const float& value) {
	Write((byte*)this + 328, value);
}
// Member Getter and Setter of MaxAspectRatio
// Declaration: float MaxAspectRatio
float USizeBox::M_GetMaxAspectRatio() const {
	return Read<float>((byte*)this + 332);
}
float* USizeBox::M_PtrGetMaxAspectRatio() {
	return reinterpret_cast<float*>((byte*)this + 332);
}
void USizeBox::M_SetMaxAspectRatio(const float& value) {
	Write((byte*)this + 332, value);
}
// Member Getter and Setter of bOverride_WidthOverride
// Declaration: unsigned char bOverride_WidthOverride : 1
unsigned char USizeBox::M_GetbOverride_WidthOverride() const {
	return Read<unsigned char>((byte*)this + 336);
}
unsigned char* USizeBox::M_PtrGetbOverride_WidthOverride() {
	return reinterpret_cast<unsigned char*>((byte*)this + 336);
}
void USizeBox::M_SetbOverride_WidthOverride(const unsigned char& value) {
	Write((byte*)this + 336, value);
}
// Member Getter and Setter of bOverride_HeightOverride
// Declaration: unsigned char bOverride_HeightOverride : 1
unsigned char USizeBox::M_GetbOverride_HeightOverride() const {
	return Read<unsigned char>((byte*)this + 336);
}
unsigned char* USizeBox::M_PtrGetbOverride_HeightOverride() {
	return reinterpret_cast<unsigned char*>((byte*)this + 336);
}
void USizeBox::M_SetbOverride_HeightOverride(const unsigned char& value) {
	Write((byte*)this + 336, value);
}
// Member Getter and Setter of bOverride_MinDesiredWidth
// Declaration: unsigned char bOverride_MinDesiredWidth : 1
unsigned char USizeBox::M_GetbOverride_MinDesiredWidth() const {
	return Read<unsigned char>((byte*)this + 336);
}
unsigned char* USizeBox::M_PtrGetbOverride_MinDesiredWidth() {
	return reinterpret_cast<unsigned char*>((byte*)this + 336);
}
void USizeBox::M_SetbOverride_MinDesiredWidth(const unsigned char& value) {
	Write((byte*)this + 336, value);
}
// Member Getter and Setter of bOverride_MinDesiredHeight
// Declaration: unsigned char bOverride_MinDesiredHeight : 1
unsigned char USizeBox::M_GetbOverride_MinDesiredHeight() const {
	return Read<unsigned char>((byte*)this + 336);
}
unsigned char* USizeBox::M_PtrGetbOverride_MinDesiredHeight() {
	return reinterpret_cast<unsigned char*>((byte*)this + 336);
}
void USizeBox::M_SetbOverride_MinDesiredHeight(const unsigned char& value) {
	Write((byte*)this + 336, value);
}
// Member Getter and Setter of bOverride_MaxDesiredWidth
// Declaration: unsigned char bOverride_MaxDesiredWidth : 1
unsigned char USizeBox::M_GetbOverride_MaxDesiredWidth() const {
	return Read<unsigned char>((byte*)this + 336);
}
unsigned char* USizeBox::M_PtrGetbOverride_MaxDesiredWidth() {
	return reinterpret_cast<unsigned char*>((byte*)this + 336);
}
void USizeBox::M_SetbOverride_MaxDesiredWidth(const unsigned char& value) {
	Write((byte*)this + 336, value);
}
// Member Getter and Setter of bOverride_MaxDesiredHeight
// Declaration: unsigned char bOverride_MaxDesiredHeight : 1
unsigned char USizeBox::M_GetbOverride_MaxDesiredHeight() const {
	return Read<unsigned char>((byte*)this + 336);
}
unsigned char* USizeBox::M_PtrGetbOverride_MaxDesiredHeight() {
	return reinterpret_cast<unsigned char*>((byte*)this + 336);
}
void USizeBox::M_SetbOverride_MaxDesiredHeight(const unsigned char& value) {
	Write((byte*)this + 336, value);
}
// Member Getter and Setter of bOverride_MinAspectRatio
// Declaration: unsigned char bOverride_MinAspectRatio : 1
unsigned char USizeBox::M_GetbOverride_MinAspectRatio() const {
	return Read<unsigned char>((byte*)this + 336);
}
unsigned char* USizeBox::M_PtrGetbOverride_MinAspectRatio() {
	return reinterpret_cast<unsigned char*>((byte*)this + 336);
}
void USizeBox::M_SetbOverride_MinAspectRatio(const unsigned char& value) {
	Write((byte*)this + 336, value);
}
// Member Getter and Setter of bOverride_MaxAspectRatio
// Declaration: unsigned char bOverride_MaxAspectRatio : 1
unsigned char USizeBox::M_GetbOverride_MaxAspectRatio() const {
	return Read<unsigned char>((byte*)this + 336);
}
unsigned char* USizeBox::M_PtrGetbOverride_MaxAspectRatio() {
	return reinterpret_cast<unsigned char*>((byte*)this + 336);
}
void USizeBox::M_SetbOverride_MaxAspectRatio(const unsigned char& value) {
	Write((byte*)this + 336, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.SizeBox.ClearHeightOverride
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void USizeBox::ClearHeightOverride() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearHeightOverride");

	struct USizeBox_ClearHeightOverride_Params {
	};
	USizeBox_ClearHeightOverride_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.SizeBox.ClearMaxAspectRatio
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void USizeBox::ClearMaxAspectRatio() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMaxAspectRatio");

	struct USizeBox_ClearMaxAspectRatio_Params {
	};
	USizeBox_ClearMaxAspectRatio_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.SizeBox.ClearMaxDesiredHeight
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void USizeBox::ClearMaxDesiredHeight() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMaxDesiredHeight");

	struct USizeBox_ClearMaxDesiredHeight_Params {
	};
	USizeBox_ClearMaxDesiredHeight_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.SizeBox.ClearMaxDesiredWidth
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void USizeBox::ClearMaxDesiredWidth() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMaxDesiredWidth");

	struct USizeBox_ClearMaxDesiredWidth_Params {
	};
	USizeBox_ClearMaxDesiredWidth_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.SizeBox.ClearMinAspectRatio
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void USizeBox::ClearMinAspectRatio() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMinAspectRatio");

	struct USizeBox_ClearMinAspectRatio_Params {
	};
	USizeBox_ClearMinAspectRatio_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.SizeBox.ClearMinDesiredHeight
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void USizeBox::ClearMinDesiredHeight() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMinDesiredHeight");

	struct USizeBox_ClearMinDesiredHeight_Params {
	};
	USizeBox_ClearMinDesiredHeight_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.SizeBox.ClearMinDesiredWidth
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void USizeBox::ClearMinDesiredWidth() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMinDesiredWidth");

	struct USizeBox_ClearMinDesiredWidth_Params {
	};
	USizeBox_ClearMinDesiredWidth_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.SizeBox.ClearWidthOverride
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void USizeBox::ClearWidthOverride() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearWidthOverride");

	struct USizeBox_ClearWidthOverride_Params {
	};
	USizeBox_ClearWidthOverride_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.SizeBox.SetHeightOverride
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InHeightOverride	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USizeBox::SetHeightOverride(float InHeightOverride) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetHeightOverride");

	struct USizeBox_SetHeightOverride_Params {
		float InHeightOverride;			//Offset: 0 | ElementSize: 4
	};
	USizeBox_SetHeightOverride_Params params;
	params.InHeightOverride = InHeightOverride;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.SizeBox.SetMaxAspectRatio
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InMaxAspectRatio	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USizeBox::SetMaxAspectRatio(float InMaxAspectRatio) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMaxAspectRatio");

	struct USizeBox_SetMaxAspectRatio_Params {
		float InMaxAspectRatio;			//Offset: 0 | ElementSize: 4
	};
	USizeBox_SetMaxAspectRatio_Params params;
	params.InMaxAspectRatio = InMaxAspectRatio;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.SizeBox.SetMaxDesiredHeight
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InMaxDesiredHeight	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USizeBox::SetMaxDesiredHeight(float InMaxDesiredHeight) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMaxDesiredHeight");

	struct USizeBox_SetMaxDesiredHeight_Params {
		float InMaxDesiredHeight;			//Offset: 0 | ElementSize: 4
	};
	USizeBox_SetMaxDesiredHeight_Params params;
	params.InMaxDesiredHeight = InMaxDesiredHeight;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.SizeBox.SetMaxDesiredWidth
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InMaxDesiredWidth	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USizeBox::SetMaxDesiredWidth(float InMaxDesiredWidth) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMaxDesiredWidth");

	struct USizeBox_SetMaxDesiredWidth_Params {
		float InMaxDesiredWidth;			//Offset: 0 | ElementSize: 4
	};
	USizeBox_SetMaxDesiredWidth_Params params;
	params.InMaxDesiredWidth = InMaxDesiredWidth;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.SizeBox.SetMinAspectRatio
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InMinAspectRatio	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USizeBox::SetMinAspectRatio(float InMinAspectRatio) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMinAspectRatio");

	struct USizeBox_SetMinAspectRatio_Params {
		float InMinAspectRatio;			//Offset: 0 | ElementSize: 4
	};
	USizeBox_SetMinAspectRatio_Params params;
	params.InMinAspectRatio = InMinAspectRatio;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.SizeBox.SetMinDesiredHeight
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InMinDesiredHeight	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USizeBox::SetMinDesiredHeight(float InMinDesiredHeight) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMinDesiredHeight");

	struct USizeBox_SetMinDesiredHeight_Params {
		float InMinDesiredHeight;			//Offset: 0 | ElementSize: 4
	};
	USizeBox_SetMinDesiredHeight_Params params;
	params.InMinDesiredHeight = InMinDesiredHeight;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.SizeBox.SetMinDesiredWidth
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InMinDesiredWidth	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USizeBox::SetMinDesiredWidth(float InMinDesiredWidth) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMinDesiredWidth");

	struct USizeBox_SetMinDesiredWidth_Params {
		float InMinDesiredWidth;			//Offset: 0 | ElementSize: 4
	};
	USizeBox_SetMinDesiredWidth_Params params;
	params.InMinDesiredWidth = InMinDesiredWidth;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.SizeBox.SetWidthOverride
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InWidthOverride	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USizeBox::SetWidthOverride(float InWidthOverride) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetWidthOverride");

	struct USizeBox_SetWidthOverride_Params {
		float InWidthOverride;			//Offset: 0 | ElementSize: 4
	};
	USizeBox_SetWidthOverride_Params params;
	params.InWidthOverride = InWidthOverride;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}