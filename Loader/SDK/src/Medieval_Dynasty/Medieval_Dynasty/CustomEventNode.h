#pragma once
#include "Structs.h"
#include "Engine/DataAsset.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.CustomEventNode
// Super: Class Engine.DataAsset
// Size: 80
// Size inherited: 48
/////////////////////////////////////////////
namespace UE4 {
class UCustomEventNode : public UDataAsset {
public:
#pragma region Members
	//struct FName	EventId;		//Offset: 56	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FName M_GetEventId() const;
	struct FName* M_PtrGetEventId();
	void M_SetEventId(const struct FName& value);

	//TArray<struct FCustomEventST>	Data;		//Offset: 64	Size: 16	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	TArray<struct FCustomEventST> M_GetData() const;
	TArray<struct FCustomEventST>* M_PtrGetData();
	void M_SetData(const TArray<struct FCustomEventST>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.CustomEventNode");
		return ptr;
	}

#pragma region Functions
	void AssignPersistentWorldContext(class UGameInstance* GI);

	static void CallFunctionByName(class UObject* Object, struct FString FunctionName);

	void ClearPersistentWorldContext();

#pragma endregion
};
};