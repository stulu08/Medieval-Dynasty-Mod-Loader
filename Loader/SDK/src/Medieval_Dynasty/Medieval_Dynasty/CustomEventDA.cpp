#include "../SDK.h"
#include "CustomEventDA.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of EventNodes
// Declaration: TArray<class UCustomEventNode*> EventNodes
TArray<class UCustomEventNode*> UCustomEventDA::M_GetEventNodes() const {
	return Read<TArray<class UCustomEventNode*>>((byte*)this + 56);
}
TArray<class UCustomEventNode*>* UCustomEventDA::M_PtrGetEventNodes() {
	return reinterpret_cast<TArray<class UCustomEventNode*>*>((byte*)this + 56);
}
void UCustomEventDA::M_SetEventNodes(const TArray<class UCustomEventNode*>& value) {
	Write((byte*)this + 56, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.CustomEventDA.AssignPersistentGI
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: GI	Type: class UGameInstance*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UCustomEventDA::AssignPersistentGI(class UGameInstance* GI) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomEventDA.AssignPersistentGI");

	struct UCustomEventDA_AssignPersistentGI_Params {
		class UGameInstance* GI;			//Offset: 0 | ElementSize: 8
	};
	UCustomEventDA_AssignPersistentGI_Params params;
	params.GI = GI;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.CustomEventDA.ClearPersistentGI
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UCustomEventDA::ClearPersistentGI() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.CustomEventDA.ClearPersistentGI");

	struct UCustomEventDA_ClearPersistentGI_Params {
	};
	UCustomEventDA_ClearPersistentGI_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}