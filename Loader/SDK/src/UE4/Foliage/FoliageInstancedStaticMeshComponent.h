#pragma once
#include "Structs.h"
#include "Engine/HierarchicalInstancedStaticMeshComponent.h"
/////////////////////////////////////////////
// Class Foliage.FoliageInstancedStaticMeshComponent
// Super: Class Engine.HierarchicalInstancedStaticMeshComponent
// Size: 1712
// Size inherited: 1664
/////////////////////////////////////////////
namespace UE4 {
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent {
public:
#pragma region Members
	//TAssetPtr<class FInstancePointDamageSignature__DelegateSignature>	OnInstanceTakePointDamage;		//Offset: 1656	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FInstancePointDamageSignature__DelegateSignature> M_GetOnInstanceTakePointDamage() const;
	TAssetPtr<class FInstancePointDamageSignature__DelegateSignature>* M_PtrGetOnInstanceTakePointDamage();
	void M_SetOnInstanceTakePointDamage(const TAssetPtr<class FInstancePointDamageSignature__DelegateSignature>& value);

	//TAssetPtr<class FInstanceRadialDamageSignature__DelegateSignature>	OnInstanceTakeRadialDamage;		//Offset: 1672	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FInstanceRadialDamageSignature__DelegateSignature> M_GetOnInstanceTakeRadialDamage() const;
	TAssetPtr<class FInstanceRadialDamageSignature__DelegateSignature>* M_PtrGetOnInstanceTakeRadialDamage();
	void M_SetOnInstanceTakeRadialDamage(const TAssetPtr<class FInstanceRadialDamageSignature__DelegateSignature>& value);

	//struct FGuid	GenerationGuid;		//Offset: 1688	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FGuid M_GetGenerationGuid() const;
	struct FGuid* M_PtrGetGenerationGuid();
	void M_SetGenerationGuid(const struct FGuid& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Foliage.FoliageInstancedStaticMeshComponent");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};