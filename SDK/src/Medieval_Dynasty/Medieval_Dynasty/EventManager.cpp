#include "../SDK.h"
#include "EventManager.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of AllEvents
// Declaration: class UCustomEventDA* AllEvents
class UCustomEventDA* AEventManager::M_GetAllEvents() const {
	return Read<class UCustomEventDA*>((byte*)this + 552);
}
class UCustomEventDA** AEventManager::M_PtrGetAllEvents() {
	return reinterpret_cast<class UCustomEventDA**>((byte*)this + 552);
}
void AEventManager::M_SetAllEvents(const class UCustomEventDA*& value) {
	Write((byte*)this + 552, value);
}
// Member Getter and Setter of EventQue
// Declaration: TMap<struct FName, struct FEventFireInformation> EventQue
TMap<struct FName, struct FEventFireInformation> AEventManager::M_GetEventQue() const {
	return Read<TMap<struct FName, struct FEventFireInformation>>((byte*)this + 560);
}
TMap<struct FName, struct FEventFireInformation>* AEventManager::M_PtrGetEventQue() {
	return reinterpret_cast<TMap<struct FName, struct FEventFireInformation>*>((byte*)this + 560);
}
void AEventManager::M_SetEventQue(const TMap<struct FName, struct FEventFireInformation>& value) {
	Write((byte*)this + 560, value);
}
// Member Getter and Setter of ImmediateEventsQue
// Declaration: TMap<struct FName, struct FEventFireInformation> ImmediateEventsQue
TMap<struct FName, struct FEventFireInformation> AEventManager::M_GetImmediateEventsQue() const {
	return Read<TMap<struct FName, struct FEventFireInformation>>((byte*)this + 640);
}
TMap<struct FName, struct FEventFireInformation>* AEventManager::M_PtrGetImmediateEventsQue() {
	return reinterpret_cast<TMap<struct FName, struct FEventFireInformation>*>((byte*)this + 640);
}
void AEventManager::M_SetImmediateEventsQue(const TMap<struct FName, struct FEventFireInformation>& value) {
	Write((byte*)this + 640, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.EventManager.CheckForEventErrors
// Flags: Final, Native, Private
// Params:
/////////////////////////////////////////////
void AEventManager::CheckForEventErrors() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.EventManager.CheckForEventErrors");

	struct AEventManager_CheckForEventErrors_Params {
	};
	AEventManager_CheckForEventErrors_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.EventManager.FillEventsDataAsset
// Flags: Final, Native, Private
// Params:
/////////////////////////////////////////////
void AEventManager::FillEventsDataAsset() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.EventManager.FillEventsDataAsset");

	struct AEventManager_FillEventsDataAsset_Params {
	};
	AEventManager_FillEventsDataAsset_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.EventManager.GoThroughBPAssetRegistryToSeeIfThereAreAnyCompilationErrors
// Flags: Final, Native, Private
// Params:
/////////////////////////////////////////////
void AEventManager::GoThroughBPAssetRegistryToSeeIfThereAreAnyCompilationErrors() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.EventManager.GoThroughBPAssetRegistryToSeeIfThereAreAnyCompilationErrors");

	struct AEventManager_GoThroughBPAssetRegistryToSeeIfThereAreAnyCompilationErrors_Params {
	};
	AEventManager_GoThroughBPAssetRegistryToSeeIfThereAreAnyCompilationErrors_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.EventManager.IsImmediateEventsQuePaused
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool AEventManager::IsImmediateEventsQuePaused() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.EventManager.IsImmediateEventsQuePaused");

	struct AEventManager_IsImmediateEventsQuePaused_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	AEventManager_IsImmediateEventsQuePaused_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.EventManager.LoadGameplayEventSystem
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: load	Type: struct FSTGameplayEventManagerSave	Flags: Parm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AEventManager::LoadGameplayEventSystem(struct FSTGameplayEventManagerSave load) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.EventManager.LoadGameplayEventSystem");

	struct AEventManager_LoadGameplayEventSystem_Params {
		struct FSTGameplayEventManagerSave load;			//Offset: 0 | ElementSize: 160
	};
	AEventManager_LoadGameplayEventSystem_Params params;
	params.load = load;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.EventManager.PauseImmediateEventsQue
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void AEventManager::PauseImmediateEventsQue() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.EventManager.PauseImmediateEventsQue");

	struct AEventManager_PauseImmediateEventsQue_Params {
	};
	AEventManager_PauseImmediateEventsQue_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.EventManager.RunEvent
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: successfullyRun	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Event	Type: class UCustomEvent*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: EventVariant	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: WhoRuns	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: AddToQue	Type: EEventQueType	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AEventManager::RunEvent(bool* successfullyRun, class UCustomEvent* Event, int32_t EventVariant, class AActor* WhoRuns, EEventQueType AddToQue) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.EventManager.RunEvent");

	struct AEventManager_RunEvent_Params {
		bool successfullyRun;			//Offset: 0 | ElementSize: 1
		class UCustomEvent* Event;			//Offset: 8 | ElementSize: 8
		int32_t EventVariant;			//Offset: 16 | ElementSize: 4
		class AActor* WhoRuns;			//Offset: 24 | ElementSize: 8
		EEventQueType AddToQue;			//Offset: 32 | ElementSize: 1
	};
	AEventManager_RunEvent_Params params;
	params.Event = Event;
	params.EventVariant = EventVariant;
	params.WhoRuns = WhoRuns;
	params.AddToQue = AddToQue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (successfullyRun != nullptr)
		*successfullyRun = params.successfullyRun;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.EventManager.RunEventById
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: successfullyRun	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: EventId	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: EventVariant	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: WhoRuns	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: AddToQue	Type: EEventQueType	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void AEventManager::RunEventById(bool* successfullyRun, struct FName EventId, int32_t EventVariant, class AActor* WhoRuns, EEventQueType AddToQue) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.EventManager.RunEventById");

	struct AEventManager_RunEventById_Params {
		bool successfullyRun;			//Offset: 0 | ElementSize: 1
		struct FName EventId;			//Offset: 4 | ElementSize: 8
		int32_t EventVariant;			//Offset: 12 | ElementSize: 4
		class AActor* WhoRuns;			//Offset: 16 | ElementSize: 8
		EEventQueType AddToQue;			//Offset: 24 | ElementSize: 1
	};
	AEventManager_RunEventById_Params params;
	params.EventId = EventId;
	params.EventVariant = EventVariant;
	params.WhoRuns = WhoRuns;
	params.AddToQue = AddToQue;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (successfullyRun != nullptr)
		*successfullyRun = params.successfullyRun;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.EventManager.SaveGameplayEventSystem
// Flags: Native, Event, Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ReturnValue	Type: struct FSTGameplayEventManagerSave	Flags: Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FSTGameplayEventManagerSave AEventManager::SaveGameplayEventSystem() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.EventManager.SaveGameplayEventSystem");

	struct AEventManager_SaveGameplayEventSystem_Params {
		struct FSTGameplayEventManagerSave ReturnValue;			//Offset: 0 | ElementSize: 160
	};
	AEventManager_SaveGameplayEventSystem_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.EventManager.TryToRunAllQuedEvents
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void AEventManager::TryToRunAllQuedEvents() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.EventManager.TryToRunAllQuedEvents");

	struct AEventManager_TryToRunAllQuedEvents_Params {
	};
	AEventManager_TryToRunAllQuedEvents_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.EventManager.TryToRunLastQuedEvent
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void AEventManager::TryToRunLastQuedEvent() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.EventManager.TryToRunLastQuedEvent");

	struct AEventManager_TryToRunLastQuedEvent_Params {
	};
	AEventManager_TryToRunLastQuedEvent_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.EventManager.UnpauseImmediateEventsQue
// Flags: Final, Native, Public, BlueprintCallable
// Params:
/////////////////////////////////////////////
void AEventManager::UnpauseImmediateEventsQue() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.EventManager.UnpauseImmediateEventsQue");

	struct AEventManager_UnpauseImmediateEventsQue_Params {
	};
	AEventManager_UnpauseImmediateEventsQue_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}