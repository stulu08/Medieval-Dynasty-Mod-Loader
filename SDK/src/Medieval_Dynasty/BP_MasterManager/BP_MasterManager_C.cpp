#include "../SDK.h"
#include "BP_MasterManager_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of DefaultSceneRoot
// Declaration: class USceneComponent* DefaultSceneRoot
class USceneComponent* ABP_MasterManager_C::M_GetDefaultSceneRoot() const {
	return Read<class USceneComponent*>((byte*)this + 544);
}
class USceneComponent** ABP_MasterManager_C::M_PtrGetDefaultSceneRoot() {
	return reinterpret_cast<class USceneComponent**>((byte*)this + 544);
}
void ABP_MasterManager_C::M_SetDefaultSceneRoot(const class USceneComponent*& value) {
	Write((byte*)this + 544, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BP_MasterManager.BP_MasterManager_C.SaveData
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterManager_C::SaveData(class USAVE_Game_C* SaveReference, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterManager.BP_MasterManager_C.SaveData");

	struct ABP_MasterManager_C_SaveData_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
		bool Success;			//Offset: 8 | ElementSize: 1
	};
	ABP_MasterManager_C_SaveData_Params params;
	params.SaveReference = SaveReference;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function BP_MasterManager.BP_MasterManager_C.LoadData
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: SaveReference	Type: class USAVE_Game_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void ABP_MasterManager_C::LoadData(class USAVE_Game_C* SaveReference, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterManager.BP_MasterManager_C.LoadData");

	struct ABP_MasterManager_C_LoadData_Params {
		class USAVE_Game_C* SaveReference;			//Offset: 0 | ElementSize: 8
		bool Success;			//Offset: 8 | ElementSize: 1
	};
	ABP_MasterManager_C_LoadData_Params params;
	params.SaveReference = SaveReference;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

#pragma endregion
}