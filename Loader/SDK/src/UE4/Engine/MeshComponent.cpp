#include "../SDK.h"
#include "MeshComponent.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of OverrideMaterials
// Declaration: TArray<class UMaterialInterface*> OverrideMaterials
TArray<class UMaterialInterface*> UMeshComponent::M_GetOverrideMaterials() const {
	return Read<TArray<class UMaterialInterface*>>((byte*)this + 1104);
}
TArray<class UMaterialInterface*>* UMeshComponent::M_PtrGetOverrideMaterials() {
	return reinterpret_cast<TArray<class UMaterialInterface*>*>((byte*)this + 1104);
}
void UMeshComponent::M_SetOverrideMaterials(const TArray<class UMaterialInterface*>& value) {
	Write((byte*)this + 1104, value);
}
// Member Getter and Setter of bEnableMaterialParameterCaching
// Declaration: unsigned char bEnableMaterialParameterCaching : 1
unsigned char UMeshComponent::M_GetbEnableMaterialParameterCaching() const {
	return Read<unsigned char>((byte*)this + 1136);
}
unsigned char* UMeshComponent::M_PtrGetbEnableMaterialParameterCaching() {
	return reinterpret_cast<unsigned char*>((byte*)this + 1136);
}
void UMeshComponent::M_SetbEnableMaterialParameterCaching(const unsigned char& value) {
	Write((byte*)this + 1136, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.MeshComponent.GetMaterialIndex
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: MaterialSlotName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UMeshComponent::GetMaterialIndex(struct FName MaterialSlotName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MeshComponent.GetMaterialIndex");

	struct UMeshComponent_GetMaterialIndex_Params {
		struct FName MaterialSlotName;			//Offset: 0 | ElementSize: 8
		int32_t ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	UMeshComponent_GetMaterialIndex_Params params;
	params.MaterialSlotName = MaterialSlotName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.MeshComponent.GetMaterials
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: TArray<class UMaterialInterface*>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<class UMaterialInterface*> UMeshComponent::GetMaterials()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MeshComponent.GetMaterials");

	struct UMeshComponent_GetMaterials_Params {
		TArray<class UMaterialInterface*> ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UMeshComponent_GetMaterials_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.MeshComponent.GetMaterialSlotNames
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: TArray<struct FName>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<struct FName> UMeshComponent::GetMaterialSlotNames()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MeshComponent.GetMaterialSlotNames");

	struct UMeshComponent_GetMaterialSlotNames_Params {
		TArray<struct FName> ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UMeshComponent_GetMaterialSlotNames_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.MeshComponent.IsMaterialSlotNameValid
// Flags: Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: MaterialSlotName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMeshComponent::IsMaterialSlotNameValid(struct FName MaterialSlotName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MeshComponent.IsMaterialSlotNameValid");

	struct UMeshComponent_IsMaterialSlotNameValid_Params {
		struct FName MaterialSlotName;			//Offset: 0 | ElementSize: 8
		bool ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UMeshComponent_IsMaterialSlotNameValid_Params params;
	params.MaterialSlotName = MaterialSlotName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.MeshComponent.PrestreamTextures
// Flags: Native, Public, BlueprintCallable
// Params:
// Name: Seconds	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bPrioritizeCharacterTextures	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: CinematicTextureGroups	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMeshComponent::PrestreamTextures(float Seconds, bool bPrioritizeCharacterTextures, int32_t CinematicTextureGroups) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MeshComponent.PrestreamTextures");

	struct UMeshComponent_PrestreamTextures_Params {
		float Seconds;			//Offset: 0 | ElementSize: 4
		bool bPrioritizeCharacterTextures;			//Offset: 4 | ElementSize: 1
		int32_t CinematicTextureGroups;			//Offset: 8 | ElementSize: 4
	};
	UMeshComponent_PrestreamTextures_Params params;
	params.Seconds = Seconds;
	params.bPrioritizeCharacterTextures = bPrioritizeCharacterTextures;
	params.CinematicTextureGroups = CinematicTextureGroups;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.MeshComponent.SetScalarParameterValueOnMaterials
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ParameterName	Type: struct FName	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ParameterValue	Type: float	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMeshComponent::SetScalarParameterValueOnMaterials(struct FName ParameterName, float ParameterValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MeshComponent.SetScalarParameterValueOnMaterials");

	struct UMeshComponent_SetScalarParameterValueOnMaterials_Params {
		struct FName ParameterName;			//Offset: 0 | ElementSize: 8
		float ParameterValue;			//Offset: 8 | ElementSize: 4
	};
	UMeshComponent_SetScalarParameterValueOnMaterials_Params params;
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Engine.MeshComponent.SetVectorParameterValueOnMaterials
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: ParameterName	Type: struct FName	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ParameterValue	Type: struct FVector	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMeshComponent::SetVectorParameterValueOnMaterials(struct FName ParameterName, struct FVector ParameterValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MeshComponent.SetVectorParameterValueOnMaterials");

	struct UMeshComponent_SetVectorParameterValueOnMaterials_Params {
		struct FName ParameterName;			//Offset: 0 | ElementSize: 8
		struct FVector ParameterValue;			//Offset: 8 | ElementSize: 12
	};
	UMeshComponent_SetVectorParameterValueOnMaterials_Params params;
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}