#pragma once
#include "Structs.h"
#include "Engine/PrimitiveComponent.h"
/////////////////////////////////////////////
// Class Engine.MeshComponent
// Super: Class Engine.PrimitiveComponent
// Size: 1152
// Size inherited: 1104
/////////////////////////////////////////////
namespace UE4 {
class UMeshComponent : public UPrimitiveComponent {
public:
#pragma region Members
	//TArray<class UMaterialInterface*>	OverrideMaterials;		//Offset: 1104	Size: 16	Flags: Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
	TArray<class UMaterialInterface*> M_GetOverrideMaterials() const;
	TArray<class UMaterialInterface*>* M_PtrGetOverrideMaterials();
	void M_SetOverrideMaterials(const TArray<class UMaterialInterface*>& value);

	//unsigned char	bEnableMaterialParameterCaching : 1;		//Offset: 1136	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char M_GetbEnableMaterialParameterCaching() const;
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	unsigned char* M_PtrGetbEnableMaterialParameterCaching();
	[[deprecated("This member is a bit field, you cannot get the value using this function accurately")]]
	void M_SetbEnableMaterialParameterCaching(const unsigned char& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.MeshComponent");
		return ptr;
	}

#pragma region Functions
	int32_t GetMaterialIndex(struct FName MaterialSlotName)/* const*/;

	TArray<class UMaterialInterface*> GetMaterials()/* const*/;

	TArray<struct FName> GetMaterialSlotNames()/* const*/;

	bool IsMaterialSlotNameValid(struct FName MaterialSlotName)/* const*/;

	void PrestreamTextures(float Seconds, bool bPrioritizeCharacterTextures, int32_t CinematicTextureGroups);

	void SetScalarParameterValueOnMaterials(struct FName ParameterName, float ParameterValue);

	void SetVectorParameterValueOnMaterials(struct FName ParameterName, struct FVector ParameterValue);

#pragma endregion
};
};