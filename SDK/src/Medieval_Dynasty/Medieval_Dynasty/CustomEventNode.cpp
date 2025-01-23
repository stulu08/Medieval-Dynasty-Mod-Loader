#include "../SDK.h"
#include "CustomEventNode.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of EventId
// Declaration: struct FName EventId
struct FName UCustomEventNode::M_GetEventId() const {
	return Read<struct FName>((byte*)this + 56);
}
struct FName* UCustomEventNode::M_PtrGetEventId() {
	return reinterpret_cast<struct FName*>((byte*)this + 56);
}
void UCustomEventNode::M_SetEventId(const struct FName& value) {
	Write((byte*)this + 56, value);
}
// Member Getter and Setter of Data
// Declaration: TArray<struct FCustomEventST> Data
TArray<struct FCustomEventST> UCustomEventNode::M_GetData() const {
	return Read<TArray<struct FCustomEventST>>((byte*)this + 64);
}
TArray<struct FCustomEventST>* UCustomEventNode::M_PtrGetData() {
	return reinterpret_cast<TArray<struct FCustomEventST>*>((byte*)this + 64);
}
void UCustomEventNode::M_SetData(const TArray<struct FCustomEventST>& value) {
	Write((byte*)this + 64, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.CustomEventNode.AssignPersistentWorldContext
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: GI	Type: class UGameInstance*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCustomEventNode::AssignPersistentWorldContext(class UGameInstance* GI) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomEventNode.AssignPersistentWorldContext");

	struct UCustomEventNode_AssignPersistentWorldContext_Params {
		class UGameInstance* GI;			//Offset: 0 | ElementSize: 8
	};
	UCustomEventNode_AssignPersistentWorldContext_Params params;
	params.GI = GI;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CustomEventNode.CallFunctionByName
// Flags: Final, Native, Static, Public, BlueprintCallable
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FunctionName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCustomEventNode::CallFunctionByName(class UObject* Object, struct FString FunctionName) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomEventNode.CallFunctionByName");

	struct UCustomEventNode_CallFunctionByName_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FString FunctionName;			//Offset: 8 | ElementSize: 16
	};
	UCustomEventNode_CallFunctionByName_Params params;
	params.Object = Object;
	params.FunctionName = FunctionName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CustomEventNode.ClearPersistentWorldContext
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UCustomEventNode::ClearPersistentWorldContext() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomEventNode.ClearPersistentWorldContext");

	struct UCustomEventNode_ClearPersistentWorldContext_Params {
	};
	UCustomEventNode_ClearPersistentWorldContext_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}