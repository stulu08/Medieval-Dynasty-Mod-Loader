#include "../SDK.h"
#include "LandscapeManager.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of foliageParticleSystemsDataMap
// Declaration: TMap<struct FName, struct FFoliageParticleSystemData> foliageParticleSystemsDataMap
TMap<struct FName, struct FFoliageParticleSystemData> ALandscapeManager::M_GetfoliageParticleSystemsDataMap() const {
	return Read<TMap<struct FName, struct FFoliageParticleSystemData>>((byte*)this + 624);
}
TMap<struct FName, struct FFoliageParticleSystemData>* ALandscapeManager::M_PtrGetfoliageParticleSystemsDataMap() {
	return reinterpret_cast<TMap<struct FName, struct FFoliageParticleSystemData>*>((byte*)this + 624);
}
void ALandscapeManager::M_SetfoliageParticleSystemsDataMap(const TMap<struct FName, struct FFoliageParticleSystemData>& value) {
	Write((byte*)this + 624, value);
}
// Member Getter and Setter of showFoliageParticlesDebug
// Declaration: bool showFoliageParticlesDebug
bool ALandscapeManager::M_GetshowFoliageParticlesDebug() const {
	return Read<bool>((byte*)this + 704);
}
bool* ALandscapeManager::M_PtrGetshowFoliageParticlesDebug() {
	return reinterpret_cast<bool*>((byte*)this + 704);
}
void ALandscapeManager::M_SetshowFoliageParticlesDebug(const bool& value) {
	Write((byte*)this + 704, value);
}
// Member Getter and Setter of debugDuration
// Declaration: float debugDuration
float ALandscapeManager::M_GetdebugDuration() const {
	return Read<float>((byte*)this + 708);
}
float* ALandscapeManager::M_PtrGetdebugDuration() {
	return reinterpret_cast<float*>((byte*)this + 708);
}
void ALandscapeManager::M_SetdebugDuration(const float& value) {
	Write((byte*)this + 708, value);
}
// Member Getter and Setter of bFinishedLoading
// Declaration: bool bFinishedLoading
bool ALandscapeManager::M_GetbFinishedLoading() const {
	return Read<bool>((byte*)this + 712);
}
bool* ALandscapeManager::M_PtrGetbFinishedLoading() {
	return reinterpret_cast<bool*>((byte*)this + 712);
}
void ALandscapeManager::M_SetbFinishedLoading(const bool& value) {
	Write((byte*)this + 712, value);
}
// Member Getter and Setter of bShowDebugs
// Declaration: bool bShowDebugs
bool ALandscapeManager::M_GetbShowDebugs() const {
	return Read<bool>((byte*)this + 713);
}
bool* ALandscapeManager::M_PtrGetbShowDebugs() {
	return reinterpret_cast<bool*>((byte*)this + 713);
}
void ALandscapeManager::M_SetbShowDebugs(const bool& value) {
	Write((byte*)this + 713, value);
}
// Member Getter and Setter of FoliageDataCollision
// Declaration: struct FST_FoliageDataArray FoliageDataCollision
struct FST_FoliageDataArray ALandscapeManager::M_GetFoliageDataCollision() const {
	return Read<struct FST_FoliageDataArray>((byte*)this + 720);
}
struct FST_FoliageDataArray* ALandscapeManager::M_PtrGetFoliageDataCollision() {
	return reinterpret_cast<struct FST_FoliageDataArray*>((byte*)this + 720);
}
void ALandscapeManager::M_SetFoliageDataCollision(const struct FST_FoliageDataArray& value) {
	Write((byte*)this + 720, value);
}
// Member Getter and Setter of FoliageDataNoCollision
// Declaration: struct FST_FoliageDataArray FoliageDataNoCollision
struct FST_FoliageDataArray ALandscapeManager::M_GetFoliageDataNoCollision() const {
	return Read<struct FST_FoliageDataArray>((byte*)this + 1000);
}
struct FST_FoliageDataArray* ALandscapeManager::M_PtrGetFoliageDataNoCollision() {
	return reinterpret_cast<struct FST_FoliageDataArray*>((byte*)this + 1000);
}
void ALandscapeManager::M_SetFoliageDataNoCollision(const struct FST_FoliageDataArray& value) {
	Write((byte*)this + 1000, value);
}
// Member Getter and Setter of FoliageDepletedData
// Declaration: struct FST_FoliageDepletedDataArray FoliageDepletedData
struct FST_FoliageDepletedDataArray ALandscapeManager::M_GetFoliageDepletedData() const {
	return Read<struct FST_FoliageDepletedDataArray>((byte*)this + 1280);
}
struct FST_FoliageDepletedDataArray* ALandscapeManager::M_PtrGetFoliageDepletedData() {
	return reinterpret_cast<struct FST_FoliageDepletedDataArray*>((byte*)this + 1280);
}
void ALandscapeManager::M_SetFoliageDepletedData(const struct FST_FoliageDepletedDataArray& value) {
	Write((byte*)this + 1280, value);
}
// Member Getter and Setter of LandscapeSubManagers
// Declaration: TArray<class ALandscapeSubManager*> LandscapeSubManagers
TArray<class ALandscapeSubManager*> ALandscapeManager::M_GetLandscapeSubManagers() const {
	return Read<TArray<class ALandscapeSubManager*>>((byte*)this + 1560);
}
TArray<class ALandscapeSubManager*>* ALandscapeManager::M_PtrGetLandscapeSubManagers() {
	return reinterpret_cast<TArray<class ALandscapeSubManager*>*>((byte*)this + 1560);
}
void ALandscapeManager::M_SetLandscapeSubManagers(const TArray<class ALandscapeSubManager*>& value) {
	Write((byte*)this + 1560, value);
}
// Member Getter and Setter of LandscapeSubManagerClass
// Declaration: class UObject* LandscapeSubManagerClass
class UObject* ALandscapeManager::M_GetLandscapeSubManagerClass() const {
	return Read<class UObject*>((byte*)this + 1576);
}
class UObject** ALandscapeManager::M_PtrGetLandscapeSubManagerClass() {
	return reinterpret_cast<class UObject**>((byte*)this + 1576);
}
void ALandscapeManager::M_SetLandscapeSubManagerClass(const class UObject*& value) {
	Write((byte*)this + 1576, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeManager.AddFoliageCollision
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewFoliageCollision	Type: struct FST_FoliageData	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ALandscapeManager::AddFoliageCollision(struct FST_FoliageData NewFoliageCollision) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeManager.AddFoliageCollision");

	struct ALandscapeManager_AddFoliageCollision_Params {
		struct FST_FoliageData NewFoliageCollision;			//Offset: 0 | ElementSize: 144
	};
	ALandscapeManager_AddFoliageCollision_Params params;
	params.NewFoliageCollision = NewFoliageCollision;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeManager.AddFoliageDepleted
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewFoliageDepleted	Type: struct FST_FoliageDepletedData	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ALandscapeManager::AddFoliageDepleted(struct FST_FoliageDepletedData NewFoliageDepleted) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeManager.AddFoliageDepleted");

	struct ALandscapeManager_AddFoliageDepleted_Params {
		struct FST_FoliageDepletedData NewFoliageDepleted;			//Offset: 0 | ElementSize: 80
	};
	ALandscapeManager_AddFoliageDepleted_Params params;
	params.NewFoliageDepleted = NewFoliageDepleted;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeManager.AddFoliageNoCollision
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewFoliageNoCollision	Type: struct FST_FoliageData	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ALandscapeManager::AddFoliageNoCollision(struct FST_FoliageData NewFoliageNoCollision) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeManager.AddFoliageNoCollision");

	struct ALandscapeManager_AddFoliageNoCollision_Params {
		struct FST_FoliageData NewFoliageNoCollision;			//Offset: 0 | ElementSize: 144
	};
	ALandscapeManager_AddFoliageNoCollision_Params params;
	params.NewFoliageNoCollision = NewFoliageNoCollision;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeManager.ChangeElementFoliageCollision
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ItemId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewFoliageCollision	Type: struct FST_FoliageData	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ALandscapeManager::ChangeElementFoliageCollision(int32_t ItemId, struct FST_FoliageData NewFoliageCollision) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeManager.ChangeElementFoliageCollision");

	struct ALandscapeManager_ChangeElementFoliageCollision_Params {
		int32_t ItemId;			//Offset: 0 | ElementSize: 4
		struct FST_FoliageData NewFoliageCollision;			//Offset: 16 | ElementSize: 144
	};
	ALandscapeManager_ChangeElementFoliageCollision_Params params;
	params.ItemId = ItemId;
	params.NewFoliageCollision = NewFoliageCollision;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeManager.ChangeElementFoliageDepleted
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ItemId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewFoliageDepleted	Type: struct FST_FoliageDepletedData	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ALandscapeManager::ChangeElementFoliageDepleted(int32_t ItemId, struct FST_FoliageDepletedData NewFoliageDepleted) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeManager.ChangeElementFoliageDepleted");

	struct ALandscapeManager_ChangeElementFoliageDepleted_Params {
		int32_t ItemId;			//Offset: 0 | ElementSize: 4
		struct FST_FoliageDepletedData NewFoliageDepleted;			//Offset: 16 | ElementSize: 80
	};
	ALandscapeManager_ChangeElementFoliageDepleted_Params params;
	params.ItemId = ItemId;
	params.NewFoliageDepleted = NewFoliageDepleted;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeManager.ChangeElementFoliageNoCollision
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ItemId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewFoliageNoCollision	Type: struct FST_FoliageData	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ALandscapeManager::ChangeElementFoliageNoCollision(int32_t ItemId, struct FST_FoliageData NewFoliageNoCollision) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeManager.ChangeElementFoliageNoCollision");

	struct ALandscapeManager_ChangeElementFoliageNoCollision_Params {
		int32_t ItemId;			//Offset: 0 | ElementSize: 4
		struct FST_FoliageData NewFoliageNoCollision;			//Offset: 16 | ElementSize: 144
	};
	ALandscapeManager_ChangeElementFoliageNoCollision_Params params;
	params.ItemId = ItemId;
	params.NewFoliageNoCollision = NewFoliageNoCollision;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeManager.CheckIfCanCombineManagers
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: SrcManager	Type: class ALandscapeSubManager*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TargetManager	Type: class ALandscapeSubManager*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ALandscapeManager::CheckIfCanCombineManagers(class ALandscapeSubManager* SrcManager, class ALandscapeSubManager* TargetManager) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeManager.CheckIfCanCombineManagers");

	struct ALandscapeManager_CheckIfCanCombineManagers_Params {
		class ALandscapeSubManager* SrcManager;			//Offset: 0 | ElementSize: 8
		class ALandscapeSubManager* TargetManager;			//Offset: 8 | ElementSize: 8
	};
	ALandscapeManager_CheckIfCanCombineManagers_Params params;
	params.SrcManager = SrcManager;
	params.TargetManager = TargetManager;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeManager.ClearFoliageCollision
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void ALandscapeManager::ClearFoliageCollision() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeManager.ClearFoliageCollision");

	struct ALandscapeManager_ClearFoliageCollision_Params {
	};
	ALandscapeManager_ClearFoliageCollision_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeManager.ClearFoliageDepleted
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void ALandscapeManager::ClearFoliageDepleted() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeManager.ClearFoliageDepleted");

	struct ALandscapeManager_ClearFoliageDepleted_Params {
	};
	ALandscapeManager_ClearFoliageDepleted_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeManager.ClearFoliageNoCollision
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void ALandscapeManager::ClearFoliageNoCollision() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeManager.ClearFoliageNoCollision");

	struct ALandscapeManager_ClearFoliageNoCollision_Params {
	};
	ALandscapeManager_ClearFoliageNoCollision_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeManager.FindFoliage
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: InstanceIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ResourceID	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ResourceSubID	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bHasCollision	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FoundManager	Type: class ALandscapeSubManager*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t ALandscapeManager::FindFoliage(int32_t InstanceIndex, unsigned char ResourceID, unsigned char ResourceSubID, bool bHasCollision, class ALandscapeSubManager** FoundManager) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeManager.FindFoliage");

	struct ALandscapeManager_FindFoliage_Params {
		int32_t InstanceIndex;			//Offset: 0 | ElementSize: 4
		unsigned char ResourceID;			//Offset: 4 | ElementSize: 1
		unsigned char ResourceSubID;			//Offset: 5 | ElementSize: 1
		bool bHasCollision;			//Offset: 6 | ElementSize: 1
		class ALandscapeSubManager* FoundManager;			//Offset: 8 | ElementSize: 8
		int32_t ReturnValue;			//Offset: 16 | ElementSize: 4
	};
	ALandscapeManager_FindFoliage_Params params;
	params.InstanceIndex = InstanceIndex;
	params.ResourceID = ResourceID;
	params.ResourceSubID = ResourceSubID;
	params.bHasCollision = bHasCollision;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (FoundManager != nullptr)
		*FoundManager = params.FoundManager;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeManager.GetSpawnedFoliageParticleSystemTags
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ReturnValue	Type: TArray<struct FName>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<struct FName> ALandscapeManager::GetSpawnedFoliageParticleSystemTags() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeManager.GetSpawnedFoliageParticleSystemTags");

	struct ALandscapeManager_GetSpawnedFoliageParticleSystemTags_Params {
		TArray<struct FName> ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	ALandscapeManager_GetSpawnedFoliageParticleSystemTags_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeManager.OnRep_FoliageDataCollision
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ALandscapeManager::OnRep_FoliageDataCollision() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeManager.OnRep_FoliageDataCollision");

	struct ALandscapeManager_OnRep_FoliageDataCollision_Params {
	};
	ALandscapeManager_OnRep_FoliageDataCollision_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeManager.OnRep_FoliageDataNoCollision
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ALandscapeManager::OnRep_FoliageDataNoCollision() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeManager.OnRep_FoliageDataNoCollision");

	struct ALandscapeManager_OnRep_FoliageDataNoCollision_Params {
	};
	ALandscapeManager_OnRep_FoliageDataNoCollision_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeManager.OnRep_FoliageDepletedData
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ALandscapeManager::OnRep_FoliageDepletedData() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeManager.OnRep_FoliageDepletedData");

	struct ALandscapeManager_OnRep_FoliageDepletedData_Params {
	};
	ALandscapeManager_OnRep_FoliageDepletedData_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeManager.OnRep_LandscapeSubManagers
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ALandscapeManager::OnRep_LandscapeSubManagers() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeManager.OnRep_LandscapeSubManagers");

	struct ALandscapeManager_OnRep_LandscapeSubManagers_Params {
	};
	ALandscapeManager_OnRep_LandscapeSubManagers_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeManager.RemoveFoliageCollision
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ItemId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ALandscapeManager::RemoveFoliageCollision(int32_t ItemId) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeManager.RemoveFoliageCollision");

	struct ALandscapeManager_RemoveFoliageCollision_Params {
		int32_t ItemId;			//Offset: 0 | ElementSize: 4
	};
	ALandscapeManager_RemoveFoliageCollision_Params params;
	params.ItemId = ItemId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeManager.RemoveFoliageDepleted
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ItemId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ALandscapeManager::RemoveFoliageDepleted(int32_t ItemId) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeManager.RemoveFoliageDepleted");

	struct ALandscapeManager_RemoveFoliageDepleted_Params {
		int32_t ItemId;			//Offset: 0 | ElementSize: 4
	};
	ALandscapeManager_RemoveFoliageDepleted_Params params;
	params.ItemId = ItemId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeManager.RemoveFoliageNoCollision
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ItemId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ALandscapeManager::RemoveFoliageNoCollision(int32_t ItemId) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeManager.RemoveFoliageNoCollision");

	struct ALandscapeManager_RemoveFoliageNoCollision_Params {
		int32_t ItemId;			//Offset: 0 | ElementSize: 4
	};
	ALandscapeManager_RemoveFoliageNoCollision_Params params;
	params.ItemId = ItemId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeManager.RetrieveFoliageInstancedStaticMeshComponents
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: TArray<class UFoliageInstancedStaticMeshComponent*>	Flags: ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<class UFoliageInstancedStaticMeshComponent*> ALandscapeManager::RetrieveFoliageInstancedStaticMeshComponents() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeManager.RetrieveFoliageInstancedStaticMeshComponents");

	struct ALandscapeManager_RetrieveFoliageInstancedStaticMeshComponents_Params {
		TArray<class UFoliageInstancedStaticMeshComponent*> ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	ALandscapeManager_RetrieveFoliageInstancedStaticMeshComponents_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeManager.RetrieveFoliageParticleEmitterLocalLocationOffset
// Flags: Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: FoliageInstancedStaticMeshComponent	Type: class UFoliageInstancedStaticMeshComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector ALandscapeManager::RetrieveFoliageParticleEmitterLocalLocationOffset(class UFoliageInstancedStaticMeshComponent* FoliageInstancedStaticMeshComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeManager.RetrieveFoliageParticleEmitterLocalLocationOffset");

	struct ALandscapeManager_RetrieveFoliageParticleEmitterLocalLocationOffset_Params {
		class UFoliageInstancedStaticMeshComponent* FoliageInstancedStaticMeshComponent;			//Offset: 0 | ElementSize: 8
		struct FVector ReturnValue;			//Offset: 8 | ElementSize: 12
	};
	ALandscapeManager_RetrieveFoliageParticleEmitterLocalLocationOffset_Params params;
	params.FoliageInstancedStaticMeshComponent = FoliageInstancedStaticMeshComponent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeManager.RetrieveFoliageParticleEmitterRadius
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: FoliageInstancedStaticMeshComponent	Type: class UFoliageInstancedStaticMeshComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float ALandscapeManager::RetrieveFoliageParticleEmitterRadius(class UFoliageInstancedStaticMeshComponent* FoliageInstancedStaticMeshComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeManager.RetrieveFoliageParticleEmitterRadius");

	struct ALandscapeManager_RetrieveFoliageParticleEmitterRadius_Params {
		class UFoliageInstancedStaticMeshComponent* FoliageInstancedStaticMeshComponent;			//Offset: 0 | ElementSize: 8
		float ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	ALandscapeManager_RetrieveFoliageParticleEmitterRadius_Params params;
	params.FoliageInstancedStaticMeshComponent = FoliageInstancedStaticMeshComponent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeManager.SpawnFoliageParticles
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void ALandscapeManager::SpawnFoliageParticles() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeManager.SpawnFoliageParticles");

	struct ALandscapeManager_SpawnFoliageParticles_Params {
	};
	ALandscapeManager_SpawnFoliageParticles_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeManager.UpdateAllFoliageParticles
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: Location	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ALandscapeManager::UpdateAllFoliageParticles(struct FVector Location) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeManager.UpdateAllFoliageParticles");

	struct ALandscapeManager_UpdateAllFoliageParticles_Params {
		struct FVector Location;			//Offset: 0 | ElementSize: 12
	};
	ALandscapeManager_UpdateAllFoliageParticles_Params params;
	params.Location = Location;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeManager.UpdateFoliageParticles
// Flags: Final, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: Location	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Tag	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ALandscapeManager::UpdateFoliageParticles(struct FVector Location, struct FName Tag) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeManager.UpdateFoliageParticles");

	struct ALandscapeManager_UpdateFoliageParticles_Params {
		struct FVector Location;			//Offset: 0 | ElementSize: 12
		struct FName Tag;			//Offset: 12 | ElementSize: 8
	};
	ALandscapeManager_UpdateFoliageParticles_Params params;
	params.Location = Location;
	params.Tag = Tag;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}