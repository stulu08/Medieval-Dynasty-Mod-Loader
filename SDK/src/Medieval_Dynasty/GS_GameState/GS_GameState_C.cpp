#include "../SDK.h"
#include "GS_GameState_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame AGS_GameState_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 624);
}
struct FPointerToUberGraphFrame* AGS_GameState_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 624);
}
void AGS_GameState_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 624, value);
}
// Member Getter and Setter of DefaultSceneRoot
// Declaration: class USceneComponent* DefaultSceneRoot
class USceneComponent* AGS_GameState_C::M_GetDefaultSceneRoot() const {
	return Read<class USceneComponent*>((byte*)this + 632);
}
class USceneComponent** AGS_GameState_C::M_PtrGetDefaultSceneRoot() {
	return reinterpret_cast<class USceneComponent**>((byte*)this + 632);
}
void AGS_GameState_C::M_SetDefaultSceneRoot(const class USceneComponent*& value) {
	Write((byte*)this + 632, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function GS_GameState.GS_GameState_C.ExecuteUbergraph_GS_GameState
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AGS_GameState_C::ExecuteUbergraph_GS_GameState(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function GS_GameState.GS_GameState_C.ExecuteUbergraph_GS_GameState");

	struct AGS_GameState_C_ExecuteUbergraph_GS_GameState_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	AGS_GameState_C_ExecuteUbergraph_GS_GameState_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GS_GameState.GS_GameState_C.Replicate_RemoveInstance
// Flags: Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent
// Params:
// Name: Target	Type: class UInstancedStaticMeshComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InputPin	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InputPin1	Type: struct FTransform	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AGS_GameState_C::Replicate_RemoveInstance(class UInstancedStaticMeshComponent* Target, int32_t InputPin, struct FTransform InputPin1) {
	static auto fn = UObject::FindObject<UFunction>("Function GS_GameState.GS_GameState_C.Replicate_RemoveInstance");

	struct AGS_GameState_C_Replicate_RemoveInstance_Params {
		class UInstancedStaticMeshComponent* Target;			//Offset: 0 | ElementSize: 8
		int32_t InputPin;			//Offset: 8 | ElementSize: 4
		struct FTransform InputPin1;			//Offset: 16 | ElementSize: 48
	};
	AGS_GameState_C_Replicate_RemoveInstance_Params params;
	params.Target = Target;
	params.InputPin = InputPin;
	params.InputPin1 = InputPin1;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function GS_GameState.GS_GameState_C.RemoveFoliageInstance
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Target	Type: class UInstancedStaticMeshComponent*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InputPin	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: InputPin1	Type: struct FTransform	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AGS_GameState_C::RemoveFoliageInstance(class UInstancedStaticMeshComponent* Target, int32_t InputPin, struct FTransform InputPin1) {
	static auto fn = UObject::FindObject<UFunction>("Function GS_GameState.GS_GameState_C.RemoveFoliageInstance");

	struct AGS_GameState_C_RemoveFoliageInstance_Params {
		class UInstancedStaticMeshComponent* Target;			//Offset: 0 | ElementSize: 8
		int32_t InputPin;			//Offset: 8 | ElementSize: 4
		struct FTransform InputPin1;			//Offset: 16 | ElementSize: 48
	};
	AGS_GameState_C_RemoveFoliageInstance_Params params;
	params.Target = Target;
	params.InputPin = InputPin;
	params.InputPin1 = InputPin1;

	UObject::ProcessEvent(fn, &params);
}

#pragma endregion
}