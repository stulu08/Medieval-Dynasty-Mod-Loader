#include "../SDK.h"
#include "LandscapeManager.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of areFoliageCollisionActorsEnabled
// Declaration: bool areFoliageCollisionActorsEnabled
bool ALandscapeManager::M_GetareFoliageCollisionActorsEnabled() const {
	return Read<bool>((byte*)this + 576);
}
bool* ALandscapeManager::M_PtrGetareFoliageCollisionActorsEnabled() {
	return reinterpret_cast<bool*>((byte*)this + 576);
}
void ALandscapeManager::M_SetareFoliageCollisionActorsEnabled(const bool& value) {
	Write((byte*)this + 576, value);
}
// Member Getter and Setter of spawnAdditionalCollisionActors
// Declaration: bool spawnAdditionalCollisionActors
bool ALandscapeManager::M_GetspawnAdditionalCollisionActors() const {
	return Read<bool>((byte*)this + 577);
}
bool* ALandscapeManager::M_PtrGetspawnAdditionalCollisionActors() {
	return reinterpret_cast<bool*>((byte*)this + 577);
}
void ALandscapeManager::M_SetspawnAdditionalCollisionActors(const bool& value) {
	Write((byte*)this + 577, value);
}
// Member Getter and Setter of masterResourceComponentFoliageCollisionActors
// Declaration: TMap<class UFoliageInstancedResource*, class AFoliageCollisionActor*> masterResourceComponentFoliageCollisionActors
TMap<class UFoliageInstancedResource*, class AFoliageCollisionActor*> ALandscapeManager::M_GetmasterResourceComponentFoliageCollisionActors() const {
	return Read<TMap<class UFoliageInstancedResource*, class AFoliageCollisionActor*>>((byte*)this + 584);
}
TMap<class UFoliageInstancedResource*, class AFoliageCollisionActor*>* ALandscapeManager::M_PtrGetmasterResourceComponentFoliageCollisionActors() {
	return reinterpret_cast<TMap<class UFoliageInstancedResource*, class AFoliageCollisionActor*>*>((byte*)this + 584);
}
void ALandscapeManager::M_SetmasterResourceComponentFoliageCollisionActors(const TMap<class UFoliageInstancedResource*, class AFoliageCollisionActor*>& value) {
	Write((byte*)this + 584, value);
}
// Member Getter and Setter of initialFoliageCollisionActorsPerTypeCount
// Declaration: int32_t initialFoliageCollisionActorsPerTypeCount
int32_t ALandscapeManager::M_GetinitialFoliageCollisionActorsPerTypeCount() const {
	return Read<int32_t>((byte*)this + 664);
}
int32_t* ALandscapeManager::M_PtrGetinitialFoliageCollisionActorsPerTypeCount() {
	return reinterpret_cast<int32_t*>((byte*)this + 664);
}
void ALandscapeManager::M_SetinitialFoliageCollisionActorsPerTypeCount(const int32_t& value) {
	Write((byte*)this + 664, value);
}
// Member Getter and Setter of foliageCollisionActorsActivationRange
// Declaration: float foliageCollisionActorsActivationRange
float ALandscapeManager::M_GetfoliageCollisionActorsActivationRange() const {
	return Read<float>((byte*)this + 668);
}
float* ALandscapeManager::M_PtrGetfoliageCollisionActorsActivationRange() {
	return reinterpret_cast<float*>((byte*)this + 668);
}
void ALandscapeManager::M_SetfoliageCollisionActorsActivationRange(const float& value) {
	Write((byte*)this + 668, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeManager.AddCollisionActivator
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Actor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ALandscapeManager::AddCollisionActivator(class AActor* Actor) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeManager.AddCollisionActivator");

	struct ALandscapeManager_AddCollisionActivator_Params {
		class AActor* Actor;			//Offset: 0 | ElementSize: 8
	};
	ALandscapeManager_AddCollisionActivator_Params params;
	params.Actor = Actor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeManager.GetFoliageInstancedResource
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: FoliageCollisionActor	Type: class AFoliageCollisionActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UFoliageInstancedResource*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UFoliageInstancedResource* ALandscapeManager::GetFoliageInstancedResource(class AFoliageCollisionActor* FoliageCollisionActor) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeManager.GetFoliageInstancedResource");

	struct ALandscapeManager_GetFoliageInstancedResource_Params {
		class AFoliageCollisionActor* FoliageCollisionActor;			//Offset: 0 | ElementSize: 8
		class UFoliageInstancedResource* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	ALandscapeManager_GetFoliageInstancedResource_Params params;
	params.FoliageCollisionActor = FoliageCollisionActor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeManager.RemoveCollisionActivator
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Actor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ALandscapeManager::RemoveCollisionActivator(class AActor* Actor) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeManager.RemoveCollisionActivator");

	struct ALandscapeManager_RemoveCollisionActivator_Params {
		class AActor* Actor;			//Offset: 0 | ElementSize: 8
	};
	ALandscapeManager_RemoveCollisionActivator_Params params;
	params.Actor = Actor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeManager.RetrieveFoliageInstancedResource
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: FoliageInstancedResource	Type: class UFoliageInstancedResource*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UFoliageInstancedResource*	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UFoliageInstancedResource* ALandscapeManager::RetrieveFoliageInstancedResource(class UFoliageInstancedResource* FoliageInstancedResource) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeManager.RetrieveFoliageInstancedResource");

	struct ALandscapeManager_RetrieveFoliageInstancedResource_Params {
		class UFoliageInstancedResource* FoliageInstancedResource;			//Offset: 0 | ElementSize: 8
		class UFoliageInstancedResource* ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	ALandscapeManager_RetrieveFoliageInstancedResource_Params params;
	params.FoliageInstancedResource = FoliageInstancedResource;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

#pragma endregion
}