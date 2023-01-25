#include "../SDK.h"
#include "RetainerBox.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of bRetainRender
// Declaration: bool bRetainRender
bool URetainerBox::M_GetbRetainRender() const {
	return Read<bool>((byte*)this + 288);
}
bool* URetainerBox::M_PtrGetbRetainRender() {
	return reinterpret_cast<bool*>((byte*)this + 288);
}
void URetainerBox::M_SetbRetainRender(const bool& value) {
	Write((byte*)this + 288, value);
}
// Member Getter and Setter of RenderOnInvalidation
// Declaration: bool RenderOnInvalidation
bool URetainerBox::M_GetRenderOnInvalidation() const {
	return Read<bool>((byte*)this + 289);
}
bool* URetainerBox::M_PtrGetRenderOnInvalidation() {
	return reinterpret_cast<bool*>((byte*)this + 289);
}
void URetainerBox::M_SetRenderOnInvalidation(const bool& value) {
	Write((byte*)this + 289, value);
}
// Member Getter and Setter of RenderOnPhase
// Declaration: bool RenderOnPhase
bool URetainerBox::M_GetRenderOnPhase() const {
	return Read<bool>((byte*)this + 290);
}
bool* URetainerBox::M_PtrGetRenderOnPhase() {
	return reinterpret_cast<bool*>((byte*)this + 290);
}
void URetainerBox::M_SetRenderOnPhase(const bool& value) {
	Write((byte*)this + 290, value);
}
// Member Getter and Setter of Phase
// Declaration: int32_t Phase
int32_t URetainerBox::M_GetPhase() const {
	return Read<int32_t>((byte*)this + 292);
}
int32_t* URetainerBox::M_PtrGetPhase() {
	return reinterpret_cast<int32_t*>((byte*)this + 292);
}
void URetainerBox::M_SetPhase(const int32_t& value) {
	Write((byte*)this + 292, value);
}
// Member Getter and Setter of PhaseCount
// Declaration: int32_t PhaseCount
int32_t URetainerBox::M_GetPhaseCount() const {
	return Read<int32_t>((byte*)this + 296);
}
int32_t* URetainerBox::M_PtrGetPhaseCount() {
	return reinterpret_cast<int32_t*>((byte*)this + 296);
}
void URetainerBox::M_SetPhaseCount(const int32_t& value) {
	Write((byte*)this + 296, value);
}
// Member Getter and Setter of EffectMaterial
// Declaration: class UMaterialInterface* EffectMaterial
class UMaterialInterface* URetainerBox::M_GetEffectMaterial() const {
	return Read<class UMaterialInterface*>((byte*)this + 304);
}
class UMaterialInterface** URetainerBox::M_PtrGetEffectMaterial() {
	return reinterpret_cast<class UMaterialInterface**>((byte*)this + 304);
}
void URetainerBox::M_SetEffectMaterial(const class UMaterialInterface*& value) {
	Write((byte*)this + 304, value);
}
// Member Getter and Setter of TextureParameter
// Declaration: struct FName TextureParameter
struct FName URetainerBox::M_GetTextureParameter() const {
	return Read<struct FName>((byte*)this + 312);
}
struct FName* URetainerBox::M_PtrGetTextureParameter() {
	return reinterpret_cast<struct FName*>((byte*)this + 312);
}
void URetainerBox::M_SetTextureParameter(const struct FName& value) {
	Write((byte*)this + 312, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.RetainerBox.GetEffectMaterial
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class UMaterialInstanceDynamic*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UMaterialInstanceDynamic* URetainerBox::GetEffectMaterial() const {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.GetEffectMaterial");

	struct URetainerBox_GetEffectMaterial_Params {
		class UMaterialInstanceDynamic* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	URetainerBox_GetEffectMaterial_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function UMG.RetainerBox.RequestRender
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void URetainerBox::RequestRender() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.RequestRender");

	struct URetainerBox_RequestRender_Params {
	};
	URetainerBox_RequestRender_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.RetainerBox.SetEffectMaterial
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: EffectMaterial	Type: class UMaterialInterface*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void URetainerBox::SetEffectMaterial(class UMaterialInterface* EffectMaterial) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.SetEffectMaterial");

	struct URetainerBox_SetEffectMaterial_Params {
		class UMaterialInterface* EffectMaterial;			//Offset: 0 | ElementSize: 8
	};
	URetainerBox_SetEffectMaterial_Params params;
	params.EffectMaterial = EffectMaterial;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.RetainerBox.SetRenderingPhase
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: RenderPhase	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TotalPhases	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void URetainerBox::SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.SetRenderingPhase");

	struct URetainerBox_SetRenderingPhase_Params {
		int32_t RenderPhase;			//Offset: 0 | ElementSize: 4
		int32_t TotalPhases;			//Offset: 4 | ElementSize: 4
	};
	URetainerBox_SetRenderingPhase_Params params;
	params.RenderPhase = RenderPhase;
	params.TotalPhases = TotalPhases;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.RetainerBox.SetRetainRendering
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bInRetainRendering	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void URetainerBox::SetRetainRendering(bool bInRetainRendering) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.SetRetainRendering");

	struct URetainerBox_SetRetainRendering_Params {
		bool bInRetainRendering;			//Offset: 0 | ElementSize: 1
	};
	URetainerBox_SetRetainRendering_Params params;
	params.bInRetainRendering = bInRetainRendering;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.RetainerBox.SetTextureParameter
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: TextureParameter	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void URetainerBox::SetTextureParameter(struct FName TextureParameter) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.SetTextureParameter");

	struct URetainerBox_SetTextureParameter_Params {
		struct FName TextureParameter;			//Offset: 0 | ElementSize: 8
	};
	URetainerBox_SetTextureParameter_Params params;
	params.TextureParameter = TextureParameter;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}