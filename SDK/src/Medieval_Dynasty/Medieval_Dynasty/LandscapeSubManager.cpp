#include "../SDK.h"
#include "LandscapeSubManager.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of FoliageDataCollision
// Declaration: struct FST_FoliageDataArray FoliageDataCollision
struct FST_FoliageDataArray ALandscapeSubManager::M_GetFoliageDataCollision() const {
	return Read<struct FST_FoliageDataArray>((byte*)this + 664);
}
struct FST_FoliageDataArray* ALandscapeSubManager::M_PtrGetFoliageDataCollision() {
	return reinterpret_cast<struct FST_FoliageDataArray*>((byte*)this + 664);
}
void ALandscapeSubManager::M_SetFoliageDataCollision(const struct FST_FoliageDataArray& value) {
	Write((byte*)this + 664, value);
}
// Member Getter and Setter of FoliageDataNoCollision
// Declaration: struct FST_FoliageDataArray FoliageDataNoCollision
struct FST_FoliageDataArray ALandscapeSubManager::M_GetFoliageDataNoCollision() const {
	return Read<struct FST_FoliageDataArray>((byte*)this + 944);
}
struct FST_FoliageDataArray* ALandscapeSubManager::M_PtrGetFoliageDataNoCollision() {
	return reinterpret_cast<struct FST_FoliageDataArray*>((byte*)this + 944);
}
void ALandscapeSubManager::M_SetFoliageDataNoCollision(const struct FST_FoliageDataArray& value) {
	Write((byte*)this + 944, value);
}
// Member Getter and Setter of FoliageDepletedData
// Declaration: struct FST_FoliageDepletedDataArray FoliageDepletedData
struct FST_FoliageDepletedDataArray ALandscapeSubManager::M_GetFoliageDepletedData() const {
	return Read<struct FST_FoliageDepletedDataArray>((byte*)this + 1224);
}
struct FST_FoliageDepletedDataArray* ALandscapeSubManager::M_PtrGetFoliageDepletedData() {
	return reinterpret_cast<struct FST_FoliageDepletedDataArray*>((byte*)this + 1224);
}
void ALandscapeSubManager::M_SetFoliageDepletedData(const struct FST_FoliageDepletedDataArray& value) {
	Write((byte*)this + 1224, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeSubManager.AddFoliageCollision
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewFoliageCollision	Type: struct FST_FoliageData	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ALandscapeSubManager::AddFoliageCollision(struct FST_FoliageData NewFoliageCollision) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeSubManager.AddFoliageCollision");

	struct ALandscapeSubManager_AddFoliageCollision_Params {
		struct FST_FoliageData NewFoliageCollision;			//Offset: 0 | ElementSize: 144
	};
	ALandscapeSubManager_AddFoliageCollision_Params params;
	params.NewFoliageCollision = NewFoliageCollision;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeSubManager.AddFoliageDepleted
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewFoliageDepleted	Type: struct FST_FoliageDepletedData	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ALandscapeSubManager::AddFoliageDepleted(struct FST_FoliageDepletedData NewFoliageDepleted) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeSubManager.AddFoliageDepleted");

	struct ALandscapeSubManager_AddFoliageDepleted_Params {
		struct FST_FoliageDepletedData NewFoliageDepleted;			//Offset: 0 | ElementSize: 80
	};
	ALandscapeSubManager_AddFoliageDepleted_Params params;
	params.NewFoliageDepleted = NewFoliageDepleted;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeSubManager.AddFoliageNoCollision
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewFoliageNoCollision	Type: struct FST_FoliageData	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ALandscapeSubManager::AddFoliageNoCollision(struct FST_FoliageData NewFoliageNoCollision) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeSubManager.AddFoliageNoCollision");

	struct ALandscapeSubManager_AddFoliageNoCollision_Params {
		struct FST_FoliageData NewFoliageNoCollision;			//Offset: 0 | ElementSize: 144
	};
	ALandscapeSubManager_AddFoliageNoCollision_Params params;
	params.NewFoliageNoCollision = NewFoliageNoCollision;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeSubManager.ChangeElementFoliageCollision
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ItemId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewFoliageCollision	Type: struct FST_FoliageData	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ALandscapeSubManager::ChangeElementFoliageCollision(int32_t ItemId, struct FST_FoliageData NewFoliageCollision) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeSubManager.ChangeElementFoliageCollision");

	struct ALandscapeSubManager_ChangeElementFoliageCollision_Params {
		int32_t ItemId;			//Offset: 0 | ElementSize: 4
		struct FST_FoliageData NewFoliageCollision;			//Offset: 16 | ElementSize: 144
	};
	ALandscapeSubManager_ChangeElementFoliageCollision_Params params;
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
// Function Medieval_Dynasty.LandscapeSubManager.ChangeElementFoliageDepleted
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ItemId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewFoliageDepleted	Type: struct FST_FoliageDepletedData	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ALandscapeSubManager::ChangeElementFoliageDepleted(int32_t ItemId, struct FST_FoliageDepletedData NewFoliageDepleted) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeSubManager.ChangeElementFoliageDepleted");

	struct ALandscapeSubManager_ChangeElementFoliageDepleted_Params {
		int32_t ItemId;			//Offset: 0 | ElementSize: 4
		struct FST_FoliageDepletedData NewFoliageDepleted;			//Offset: 16 | ElementSize: 80
	};
	ALandscapeSubManager_ChangeElementFoliageDepleted_Params params;
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
// Function Medieval_Dynasty.LandscapeSubManager.ChangeElementFoliageNoCollision
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ItemId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: NewFoliageNoCollision	Type: struct FST_FoliageData	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ALandscapeSubManager::ChangeElementFoliageNoCollision(int32_t ItemId, struct FST_FoliageData NewFoliageNoCollision) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeSubManager.ChangeElementFoliageNoCollision");

	struct ALandscapeSubManager_ChangeElementFoliageNoCollision_Params {
		int32_t ItemId;			//Offset: 0 | ElementSize: 4
		struct FST_FoliageData NewFoliageNoCollision;			//Offset: 16 | ElementSize: 144
	};
	ALandscapeSubManager_ChangeElementFoliageNoCollision_Params params;
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
// Function Medieval_Dynasty.LandscapeSubManager.ClearFoliageCollision
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void ALandscapeSubManager::ClearFoliageCollision() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeSubManager.ClearFoliageCollision");

	struct ALandscapeSubManager_ClearFoliageCollision_Params {
	};
	ALandscapeSubManager_ClearFoliageCollision_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeSubManager.ClearFoliageDepleted
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void ALandscapeSubManager::ClearFoliageDepleted() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeSubManager.ClearFoliageDepleted");

	struct ALandscapeSubManager_ClearFoliageDepleted_Params {
	};
	ALandscapeSubManager_ClearFoliageDepleted_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeSubManager.ClearFoliageNoCollision
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void ALandscapeSubManager::ClearFoliageNoCollision() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeSubManager.ClearFoliageNoCollision");

	struct ALandscapeSubManager_ClearFoliageNoCollision_Params {
	};
	ALandscapeSubManager_ClearFoliageNoCollision_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeSubManager.FindFoliage
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InstanceIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ResourceID	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ResourceSubID	Type: unsigned char	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: bHasCollision	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t ALandscapeSubManager::FindFoliage(int32_t InstanceIndex, unsigned char ResourceID, unsigned char ResourceSubID, bool bHasCollision) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeSubManager.FindFoliage");

	struct ALandscapeSubManager_FindFoliage_Params {
		int32_t InstanceIndex;			//Offset: 0 | ElementSize: 4
		unsigned char ResourceID;			//Offset: 4 | ElementSize: 1
		unsigned char ResourceSubID;			//Offset: 5 | ElementSize: 1
		bool bHasCollision;			//Offset: 6 | ElementSize: 1
		int32_t ReturnValue;			//Offset: 8 | ElementSize: 4
	};
	ALandscapeSubManager_FindFoliage_Params params;
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

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeSubManager.OnRep_FoliageDataCollision
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ALandscapeSubManager::OnRep_FoliageDataCollision() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeSubManager.OnRep_FoliageDataCollision");

	struct ALandscapeSubManager_OnRep_FoliageDataCollision_Params {
	};
	ALandscapeSubManager_OnRep_FoliageDataCollision_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeSubManager.OnRep_FoliageDataNoCollision
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ALandscapeSubManager::OnRep_FoliageDataNoCollision() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeSubManager.OnRep_FoliageDataNoCollision");

	struct ALandscapeSubManager_OnRep_FoliageDataNoCollision_Params {
	};
	ALandscapeSubManager_OnRep_FoliageDataNoCollision_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeSubManager.OnRep_FoliageDepletedData
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void ALandscapeSubManager::OnRep_FoliageDepletedData() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeSubManager.OnRep_FoliageDepletedData");

	struct ALandscapeSubManager_OnRep_FoliageDepletedData_Params {
	};
	ALandscapeSubManager_OnRep_FoliageDepletedData_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeSubManager.RemoveFoliageCollision
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ItemId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ALandscapeSubManager::RemoveFoliageCollision(int32_t ItemId) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeSubManager.RemoveFoliageCollision");

	struct ALandscapeSubManager_RemoveFoliageCollision_Params {
		int32_t ItemId;			//Offset: 0 | ElementSize: 4
	};
	ALandscapeSubManager_RemoveFoliageCollision_Params params;
	params.ItemId = ItemId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeSubManager.RemoveFoliageDepleted
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ItemId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ALandscapeSubManager::RemoveFoliageDepleted(int32_t ItemId) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeSubManager.RemoveFoliageDepleted");

	struct ALandscapeSubManager_RemoveFoliageDepleted_Params {
		int32_t ItemId;			//Offset: 0 | ElementSize: 4
	};
	ALandscapeSubManager_RemoveFoliageDepleted_Params params;
	params.ItemId = ItemId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.LandscapeSubManager.RemoveFoliageNoCollision
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: ItemId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void ALandscapeSubManager::RemoveFoliageNoCollision(int32_t ItemId) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.LandscapeSubManager.RemoveFoliageNoCollision");

	struct ALandscapeSubManager_RemoveFoliageNoCollision_Params {
		int32_t ItemId;			//Offset: 0 | ElementSize: 4
	};
	ALandscapeSubManager_RemoveFoliageNoCollision_Params params;
	params.ItemId = ItemId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}