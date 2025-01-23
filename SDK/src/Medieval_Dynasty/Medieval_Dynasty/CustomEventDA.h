#pragma once
#include "Structs.h"
#include "Engine/DataAsset.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.CustomEventDA
// Super: Class Engine.DataAsset
// Size: 72
// Size inherited: 48
/////////////////////////////////////////////
namespace UE4 {
class UCustomEventDA : public UDataAsset {
public:
#pragma region Members
	//TArray<class UCustomEventNode*>	EventNodes;		//Offset: 56	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	TArray<class UCustomEventNode*> M_GetEventNodes() const;
	TArray<class UCustomEventNode*>* M_PtrGetEventNodes();
	void M_SetEventNodes(const TArray<class UCustomEventNode*>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.CustomEventDA");
		return ptr;
	}

#pragma region Functions
	void AssignPersistentGI(class UGameInstance* GI);

	void ClearPersistentGI();

#pragma endregion
};
};