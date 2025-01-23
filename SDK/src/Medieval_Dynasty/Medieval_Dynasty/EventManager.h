#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.EventManager
// Super: Class Engine.Actor
// Size: 720
// Size inherited: 544
/////////////////////////////////////////////
namespace UE4 {
class AEventManager : public AActor {
public:
#pragma region Members
	//class UCustomEventDA*	AllEvents;		//Offset: 552	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	class UCustomEventDA* M_GetAllEvents() const;
	class UCustomEventDA** M_PtrGetAllEvents();
	void M_SetAllEvents(const class UCustomEventDA*& value);

	//TMap<struct FName, struct FEventFireInformation>	EventQue;		//Offset: 560	Size: 80	Flags: Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, Protected, NativeAccessSpecifierProtected
	TMap<struct FName, struct FEventFireInformation> M_GetEventQue() const;
	TMap<struct FName, struct FEventFireInformation>* M_PtrGetEventQue();
	void M_SetEventQue(const TMap<struct FName, struct FEventFireInformation>& value);

	//TMap<struct FName, struct FEventFireInformation>	ImmediateEventsQue;		//Offset: 640	Size: 80	Flags: Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, Protected, NativeAccessSpecifierProtected
	TMap<struct FName, struct FEventFireInformation> M_GetImmediateEventsQue() const;
	TMap<struct FName, struct FEventFireInformation>* M_PtrGetImmediateEventsQue();
	void M_SetImmediateEventsQue(const TMap<struct FName, struct FEventFireInformation>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.EventManager");
		return ptr;
	}

#pragma region Functions
	void CheckForEventErrors();

	void FillEventsDataAsset();

	void GoThroughBPAssetRegistryToSeeIfThereAreAnyCompilationErrors();

	bool IsImmediateEventsQuePaused();

	void LoadGameplayEventSystem(struct FSTGameplayEventManagerSave load);

	void PauseImmediateEventsQue();

	void RunEvent(bool* successfullyRun, class UCustomEvent* Event, int32_t EventVariant, class AActor* WhoRuns, EEventQueType AddToQue);

	void RunEventById(bool* successfullyRun, struct FName EventId, int32_t EventVariant, class AActor* WhoRuns, EEventQueType AddToQue);

	struct FSTGameplayEventManagerSave SaveGameplayEventSystem();

	void TryToRunAllQuedEvents();

	void TryToRunLastQuedEvent();

	void UnpauseImmediateEventsQue();

#pragma endregion
};
};