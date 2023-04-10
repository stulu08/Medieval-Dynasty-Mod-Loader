#include "../SDK.h"
#include "AIC_NPC_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame AAIC_NPC_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 808);
}
struct FPointerToUberGraphFrame* AAIC_NPC_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 808);
}
void AAIC_NPC_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 808, value);
}
// Member Getter and Setter of AIPerception
// Declaration: class UAIPerceptionComponent* AIPerception
class UAIPerceptionComponent* AAIC_NPC_C::M_GetAIPerception() const {
	return Read<class UAIPerceptionComponent*>((byte*)this + 816);
}
class UAIPerceptionComponent** AAIC_NPC_C::M_PtrGetAIPerception() {
	return reinterpret_cast<class UAIPerceptionComponent**>((byte*)this + 816);
}
void AAIC_NPC_C::M_SetAIPerception(const class UAIPerceptionComponent*& value) {
	Write((byte*)this + 816, value);
}
// Member Getter and Setter of NPCReference
// Declaration: class ABP_NPC_C* NPCReference
class ABP_NPC_C* AAIC_NPC_C::M_GetNPCReference() const {
	return Read<class ABP_NPC_C*>((byte*)this + 824);
}
class ABP_NPC_C** AAIC_NPC_C::M_PtrGetNPCReference() {
	return reinterpret_cast<class ABP_NPC_C**>((byte*)this + 824);
}
void AAIC_NPC_C::M_SetNPCReference(const class ABP_NPC_C*& value) {
	Write((byte*)this + 824, value);
}
// Member Getter and Setter of NavInvokerRadius
// Declaration: float NavInvokerRadius
float AAIC_NPC_C::M_GetNavInvokerRadius() const {
	return Read<float>((byte*)this + 832);
}
float* AAIC_NPC_C::M_PtrGetNavInvokerRadius() {
	return reinterpret_cast<float*>((byte*)this + 832);
}
void AAIC_NPC_C::M_SetNavInvokerRadius(const float& value) {
	Write((byte*)this + 832, value);
}
// Member Getter and Setter of PreviousLocation
// Declaration: struct FVector PreviousLocation
struct FVector AAIC_NPC_C::M_GetPreviousLocation() const {
	return Read<struct FVector>((byte*)this + 836);
}
struct FVector* AAIC_NPC_C::M_PtrGetPreviousLocation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 836);
}
void AAIC_NPC_C::M_SetPreviousLocation(const struct FVector& value) {
	Write((byte*)this + 836, value);
}
// Member Getter and Setter of GetOut
// Declaration: bool GetOut
bool AAIC_NPC_C::M_GetGetOut() const {
	return Read<bool>((byte*)this + 848);
}
bool* AAIC_NPC_C::M_PtrGetGetOut() {
	return reinterpret_cast<bool*>((byte*)this + 848);
}
void AAIC_NPC_C::M_SetGetOut(const bool& value) {
	Write((byte*)this + 848, value);
}
// Member Getter and Setter of HasMovedAside
// Declaration: bool HasMovedAside
bool AAIC_NPC_C::M_GetHasMovedAside() const {
	return Read<bool>((byte*)this + 849);
}
bool* AAIC_NPC_C::M_PtrGetHasMovedAside() {
	return reinterpret_cast<bool*>((byte*)this + 849);
}
void AAIC_NPC_C::M_SetHasMovedAside(const bool& value) {
	Write((byte*)this + 849, value);
}
// Member Getter and Setter of HasComeBack
// Declaration: bool HasComeBack
bool AAIC_NPC_C::M_GetHasComeBack() const {
	return Read<bool>((byte*)this + 850);
}
bool* AAIC_NPC_C::M_PtrGetHasComeBack() {
	return reinterpret_cast<bool*>((byte*)this + 850);
}
void AAIC_NPC_C::M_SetHasComeBack(const bool& value) {
	Write((byte*)this + 850, value);
}
// Member Getter and Setter of GoHome_Activity
// Declaration: bool GoHome_Activity
bool AAIC_NPC_C::M_GetGoHome_Activity() const {
	return Read<bool>((byte*)this + 851);
}
bool* AAIC_NPC_C::M_PtrGetGoHome_Activity() {
	return reinterpret_cast<bool*>((byte*)this + 851);
}
void AAIC_NPC_C::M_SetGoHome_Activity(const bool& value) {
	Write((byte*)this + 851, value);
}
// Member Getter and Setter of OnPerceptionMove
// Declaration: bool OnPerceptionMove
bool AAIC_NPC_C::M_GetOnPerceptionMove() const {
	return Read<bool>((byte*)this + 852);
}
bool* AAIC_NPC_C::M_PtrGetOnPerceptionMove() {
	return reinterpret_cast<bool*>((byte*)this + 852);
}
void AAIC_NPC_C::M_SetOnPerceptionMove(const bool& value) {
	Write((byte*)this + 852, value);
}
// Member Getter and Setter of DetectedActorVelocity
// Declaration: struct FVector DetectedActorVelocity
struct FVector AAIC_NPC_C::M_GetDetectedActorVelocity() const {
	return Read<struct FVector>((byte*)this + 856);
}
struct FVector* AAIC_NPC_C::M_PtrGetDetectedActorVelocity() {
	return reinterpret_cast<struct FVector*>((byte*)this + 856);
}
void AAIC_NPC_C::M_SetDetectedActorVelocity(const struct FVector& value) {
	Write((byte*)this + 856, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.ExecuteUbergraph_AIC_NPC
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::ExecuteUbergraph_AIC_NPC(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.ExecuteUbergraph_AIC_NPC");

	struct AAIC_NPC_C_ExecuteUbergraph_AIC_NPC_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	AAIC_NPC_C_ExecuteUbergraph_AIC_NPC_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.ActivitySitting
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::ActivitySitting() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.ActivitySitting");

	struct AAIC_NPC_C_ActivitySitting_Params {
	};
	AAIC_NPC_C_ActivitySitting_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.ActivityTalking
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::ActivityTalking() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.ActivityTalking");

	struct AAIC_NPC_C_ActivityTalking_Params {
	};
	AAIC_NPC_C_ActivityTalking_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.ActivityNothing
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::ActivityNothing() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.ActivityNothing");

	struct AAIC_NPC_C_ActivityNothing_Params {
	};
	AAIC_NPC_C_ActivityNothing_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.GoOutsidePoint
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::GoOutsidePoint() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.GoOutsidePoint");

	struct AAIC_NPC_C_GoOutsidePoint_Params {
	};
	AAIC_NPC_C_GoOutsidePoint_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.WorkBabysit
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::WorkBabysit() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.WorkBabysit");

	struct AAIC_NPC_C_WorkBabysit_Params {
	};
	AAIC_NPC_C_WorkBabysit_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.WorkPatrol
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::WorkPatrol() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.WorkPatrol");

	struct AAIC_NPC_C_WorkPatrol_Params {
	};
	AAIC_NPC_C_WorkPatrol_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.ActivityTavern
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::ActivityTavern() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.ActivityTavern");

	struct AAIC_NPC_C_ActivityTavern_Params {
	};
	AAIC_NPC_C_ActivityTavern_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.OutsideRandomSitting
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::OutsideRandomSitting() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.OutsideRandomSitting");

	struct AAIC_NPC_C_OutsideRandomSitting_Params {
	};
	AAIC_NPC_C_OutsideRandomSitting_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.ActivityGoHome
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::ActivityGoHome() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.ActivityGoHome");

	struct AAIC_NPC_C_ActivityGoHome_Params {
	};
	AAIC_NPC_C_ActivityGoHome_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.GoOutsideHome
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::GoOutsideHome() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.GoOutsideHome");

	struct AAIC_NPC_C_GoOutsideHome_Params {
	};
	AAIC_NPC_C_GoOutsideHome_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetPerceptionActive
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Enabled	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: TickInterval	Type: float	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetPerceptionActive(bool Enabled, float TickInterval) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetPerceptionActive");

	struct AAIC_NPC_C_AI_SetPerceptionActive_Params {
		bool Enabled;			//Offset: 0 | ElementSize: 1
		float TickInterval;			//Offset: 4 | ElementSize: 4
	};
	AAIC_NPC_C_AI_SetPerceptionActive_Params params;
	params.Enabled = Enabled;
	params.TickInterval = TickInterval;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_DestroyOnGetOut
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::AI_DestroyOnGetOut() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_DestroyOnGetOut");

	struct AAIC_NPC_C_AI_DestroyOnGetOut_Params {
	};
	AAIC_NPC_C_AI_DestroyOnGetOut_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetGoHome_Activity
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: GoHome_Activity	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetGoHome_Activity(bool GoHome_Activity) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetGoHome_Activity");

	struct AAIC_NPC_C_AI_SetGoHome_Activity_Params {
		bool GoHome_Activity;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_SetGoHome_Activity_Params params;
	params.GoHome_Activity = GoHome_Activity;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetActivity
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: SpecifiedActivities	Type: TArray<int32_t>	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetActivity(const TArray<int32_t>& SpecifiedActivities) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetActivity");

	struct AAIC_NPC_C_AI_SetActivity_Params {
		TArray<int32_t> SpecifiedActivities;			//Offset: 0 | ElementSize: 16
	};
	AAIC_NPC_C_AI_SetActivity_Params params;
	params.SpecifiedActivities = SpecifiedActivities;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.ComeBack
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::ComeBack() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.ComeBack");

	struct AAIC_NPC_C_ComeBack_Params {
	};
	AAIC_NPC_C_ComeBack_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.Init_AI
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: NPCReference	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: LoadGame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::Init_AI(class ABP_NPC_C* NPCReference, bool LoadGame) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.Init_AI");

	struct AAIC_NPC_C_Init_AI_Params {
		class ABP_NPC_C* NPCReference;			//Offset: 0 | ElementSize: 8
		bool LoadGame;			//Offset: 8 | ElementSize: 1
	};
	AAIC_NPC_C_Init_AI_Params params;
	params.NPCReference = NPCReference;
	params.LoadGame = LoadGame;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.UpdateWork
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::UpdateWork() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.UpdateWork");

	struct AAIC_NPC_C_UpdateWork_Params {
	};
	AAIC_NPC_C_UpdateWork_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_ResetNavInvoker
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::AI_ResetNavInvoker() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_ResetNavInvoker");

	struct AAIC_NPC_C_AI_ResetNavInvoker_Params {
	};
	AAIC_NPC_C_AI_ResetNavInvoker_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetOut
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CheckChildrenAffection	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetOut(bool CheckChildrenAffection) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetOut");

	struct AAIC_NPC_C_AI_GetOut_Params {
		bool CheckChildrenAffection;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_GetOut_Params params;
	params.CheckChildrenAffection = CheckChildrenAffection;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature
// Flags: BlueprintEvent
// Params:
// Name: Actor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Stimulus	Type: struct FAIStimulus	Flags: BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, struct FAIStimulus Stimulus) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature");

	struct AAIC_NPC_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature_Params {
		class AActor* Actor;			//Offset: 0 | ElementSize: 8
		struct FAIStimulus Stimulus;			//Offset: 8 | ElementSize: 60
	};
	AAIC_NPC_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature_Params params;
	params.Actor = Actor;
	params.Stimulus = Stimulus;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.NPCsStartTimer_Stamina_BPI
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::NPCsStartTimer_Stamina_BPI() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.NPCsStartTimer_Stamina_BPI");

	struct AAIC_NPC_C_NPCsStartTimer_Stamina_BPI_Params {
	};
	AAIC_NPC_C_NPCsStartTimer_Stamina_BPI_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetMotherParameters
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetMotherParameters() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetMotherParameters");

	struct AAIC_NPC_C_AI_SetMotherParameters_Params {
	};
	AAIC_NPC_C_AI_SetMotherParameters_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetQuestBlocking
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestBlocking	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetQuestBlocking(bool QuestBlocking) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetQuestBlocking");

	struct AAIC_NPC_C_AI_SetQuestBlocking_Params {
		bool QuestBlocking;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_SetQuestBlocking_Params params;
	params.QuestBlocking = QuestBlocking;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetCanChangeMovementActive
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CanChangeMovementActive	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetCanChangeMovementActive(bool CanChangeMovementActive) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetCanChangeMovementActive");

	struct AAIC_NPC_C_AI_SetCanChangeMovementActive_Params {
		bool CanChangeMovementActive;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_SetCanChangeMovementActive_Params params;
	params.CanChangeMovementActive = CanChangeMovementActive;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetWaitTask
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CheckDayActivities	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetWaitTask(bool CheckDayActivities) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetWaitTask");

	struct AAIC_NPC_C_AI_SetWaitTask_Params {
		bool CheckDayActivities;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_SetWaitTask_Params params;
	params.CheckDayActivities = CheckDayActivities;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI Start Combat
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Actor	Type: class AActor*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_Start_Combat(class AActor*& Actor) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI Start Combat");

	struct AAIC_NPC_C_AI_Start_Combat_Params {
		class AActor* Actor;			//Offset: 0 | ElementSize: 8
	};
	AAIC_NPC_C_AI_Start_Combat_Params params;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetRotationManaged
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: isRotationManaged	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetRotationManaged(bool isRotationManaged) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetRotationManaged");

	struct AAIC_NPC_C_AI_SetRotationManaged_Params {
		bool isRotationManaged;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_SetRotationManaged_Params params;
	params.isRotationManaged = isRotationManaged;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetHasInfant
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: HasInfant	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetHasInfant(bool HasInfant) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetHasInfant");

	struct AAIC_NPC_C_AI_SetHasInfant_Params {
		bool HasInfant;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_SetHasInfant_Params params;
	params.HasInfant = HasInfant;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetNPCAfterGetOrWakeUp
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetNPCAfterGetOrWakeUp() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetNPCAfterGetOrWakeUp");

	struct AAIC_NPC_C_AI_SetNPCAfterGetOrWakeUp_Params {
	};
	AAIC_NPC_C_AI_SetNPCAfterGetOrWakeUp_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetChangeCollision
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ChangeCollision	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetChangeCollision(bool ChangeCollision) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetChangeCollision");

	struct AAIC_NPC_C_AI_SetChangeCollision_Params {
		bool ChangeCollision;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_SetChangeCollision_Params params;
	params.ChangeCollision = ChangeCollision;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_StopFurnitureAnimation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Furniture	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_StopFurnitureAnimation(class AActor* Furniture) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_StopFurnitureAnimation");

	struct AAIC_NPC_C_AI_StopFurnitureAnimation_Params {
		class AActor* Furniture;			//Offset: 0 | ElementSize: 8
	};
	AAIC_NPC_C_AI_StopFurnitureAnimation_Params params;
	params.Furniture = Furniture;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_DestroyAudioComponent
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: WaitForSoundToFinish	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_DestroyAudioComponent(bool WaitForSoundToFinish) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_DestroyAudioComponent");

	struct AAIC_NPC_C_AI_DestroyAudioComponent_Params {
		bool WaitForSoundToFinish;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_DestroyAudioComponent_Params params;
	params.WaitForSoundToFinish = WaitForSoundToFinish;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_StopAudio
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::AI_StopAudio() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_StopAudio");

	struct AAIC_NPC_C_AI_StopAudio_Params {
	};
	AAIC_NPC_C_AI_StopAudio_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_PlayAudio
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Audio	Type: class USoundBase*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StartTime	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: DestroyAfterPlaying	Type: bool	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_PlayAudio(class USoundBase*& Audio, float StartTime, bool DestroyAfterPlaying) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_PlayAudio");

	struct AAIC_NPC_C_AI_PlayAudio_Params {
		class USoundBase* Audio;			//Offset: 0 | ElementSize: 8
		float StartTime;			//Offset: 8 | ElementSize: 4
		bool DestroyAfterPlaying;			//Offset: 12 | ElementSize: 1
	};
	AAIC_NPC_C_AI_PlayAudio_Params params;
	params.Audio = Audio;
	params.StartTime = StartTime;
	params.DestroyAfterPlaying = DestroyAfterPlaying;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_ResetBehaviorOnWakeUp
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::AI_ResetBehaviorOnWakeUp() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_ResetBehaviorOnWakeUp");

	struct AAIC_NPC_C_AI_ResetBehaviorOnWakeUp_Params {
	};
	AAIC_NPC_C_AI_ResetBehaviorOnWakeUp_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_UnbindAllEventsFromOnSitFinished
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::AI_UnbindAllEventsFromOnSitFinished() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_UnbindAllEventsFromOnSitFinished");

	struct AAIC_NPC_C_AI_UnbindAllEventsFromOnSitFinished_Params {
	};
	AAIC_NPC_C_AI_UnbindAllEventsFromOnSitFinished_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_UnbindEventFromOnSitFinished
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::AI_UnbindEventFromOnSitFinished() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_UnbindEventFromOnSitFinished");

	struct AAIC_NPC_C_AI_UnbindEventFromOnSitFinished_Params {
	};
	AAIC_NPC_C_AI_UnbindEventFromOnSitFinished_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_BindEventToOnSitFinished
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BTTask	Type: class UBTTask_BlueprintBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_BindEventToOnSitFinished(class UBTTask_BlueprintBase* BTTask) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_BindEventToOnSitFinished");

	struct AAIC_NPC_C_AI_BindEventToOnSitFinished_Params {
		class UBTTask_BlueprintBase* BTTask;			//Offset: 0 | ElementSize: 8
	};
	AAIC_NPC_C_AI_BindEventToOnSitFinished_Params params;
	params.BTTask = BTTask;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_UnbindAllEventsFromOnSleepFinished
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::AI_UnbindAllEventsFromOnSleepFinished() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_UnbindAllEventsFromOnSleepFinished");

	struct AAIC_NPC_C_AI_UnbindAllEventsFromOnSleepFinished_Params {
	};
	AAIC_NPC_C_AI_UnbindAllEventsFromOnSleepFinished_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_UnbindEventFromOnSleepFinished
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::AI_UnbindEventFromOnSleepFinished() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_UnbindEventFromOnSleepFinished");

	struct AAIC_NPC_C_AI_UnbindEventFromOnSleepFinished_Params {
	};
	AAIC_NPC_C_AI_UnbindEventFromOnSleepFinished_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_BindEventToOnSleepFinished
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BTTask	Type: class UBTTask_BlueprintBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_BindEventToOnSleepFinished(class UBTTask_BlueprintBase* BTTask) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_BindEventToOnSleepFinished");

	struct AAIC_NPC_C_AI_BindEventToOnSleepFinished_Params {
		class UBTTask_BlueprintBase* BTTask;			//Offset: 0 | ElementSize: 8
	};
	AAIC_NPC_C_AI_BindEventToOnSleepFinished_Params params;
	params.BTTask = BTTask;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetGetOutSettings
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetGetOutSettings() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetGetOutSettings");

	struct AAIC_NPC_C_AI_SetGetOutSettings_Params {
	};
	AAIC_NPC_C_AI_SetGetOutSettings_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_UnbindEventsFromOnIdleAnimFinished
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::AI_UnbindEventsFromOnIdleAnimFinished() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_UnbindEventsFromOnIdleAnimFinished");

	struct AAIC_NPC_C_AI_UnbindEventsFromOnIdleAnimFinished_Params {
	};
	AAIC_NPC_C_AI_UnbindEventsFromOnIdleAnimFinished_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_BindEventToOnIdleAnimFinished
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BTTask	Type: class UBTTask_BlueprintBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_BindEventToOnIdleAnimFinished(class UBTTask_BlueprintBase* BTTask) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_BindEventToOnIdleAnimFinished");

	struct AAIC_NPC_C_AI_BindEventToOnIdleAnimFinished_Params {
		class UBTTask_BlueprintBase* BTTask;			//Offset: 0 | ElementSize: 8
	};
	AAIC_NPC_C_AI_BindEventToOnIdleAnimFinished_Params params;
	params.BTTask = BTTask;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_UnbindAllEventsFromBreakMontageComplete
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::AI_UnbindAllEventsFromBreakMontageComplete() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_UnbindAllEventsFromBreakMontageComplete");

	struct AAIC_NPC_C_AI_UnbindAllEventsFromBreakMontageComplete_Params {
	};
	AAIC_NPC_C_AI_UnbindAllEventsFromBreakMontageComplete_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_UnbindEventFromBreakMontageComplete
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::AI_UnbindEventFromBreakMontageComplete() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_UnbindEventFromBreakMontageComplete");

	struct AAIC_NPC_C_AI_UnbindEventFromBreakMontageComplete_Params {
	};
	AAIC_NPC_C_AI_UnbindEventFromBreakMontageComplete_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_BindEventToBreakMontageComplete
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BTTask	Type: class UBTTask_BlueprintBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_BindEventToBreakMontageComplete(class UBTTask_BlueprintBase* BTTask) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_BindEventToBreakMontageComplete");

	struct AAIC_NPC_C_AI_BindEventToBreakMontageComplete_Params {
		class UBTTask_BlueprintBase* BTTask;			//Offset: 0 | ElementSize: 8
	};
	AAIC_NPC_C_AI_BindEventToBreakMontageComplete_Params params;
	params.BTTask = BTTask;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_UnbindAllEventsFromWorkMontageComplete
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::AI_UnbindAllEventsFromWorkMontageComplete() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_UnbindAllEventsFromWorkMontageComplete");

	struct AAIC_NPC_C_AI_UnbindAllEventsFromWorkMontageComplete_Params {
	};
	AAIC_NPC_C_AI_UnbindAllEventsFromWorkMontageComplete_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_UnbindEventFromWorkMontageComplete
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::AI_UnbindEventFromWorkMontageComplete() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_UnbindEventFromWorkMontageComplete");

	struct AAIC_NPC_C_AI_UnbindEventFromWorkMontageComplete_Params {
	};
	AAIC_NPC_C_AI_UnbindEventFromWorkMontageComplete_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_BindEventToWorkMontageComplete
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BTTask	Type: class UBTTask_BlueprintBase*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_BindEventToWorkMontageComplete(class UBTTask_BlueprintBase* BTTask) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_BindEventToWorkMontageComplete");

	struct AAIC_NPC_C_AI_BindEventToWorkMontageComplete_Params {
		class UBTTask_BlueprintBase* BTTask;			//Offset: 0 | ElementSize: 8
	};
	AAIC_NPC_C_AI_BindEventToWorkMontageComplete_Params params;
	params.BTTask = BTTask;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetAnimationState
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sleeping	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Sitting	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Working	Type: bool	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: TakingBreak	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetAnimationState(bool Sleeping, bool Sitting, bool Working, bool TakingBreak) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetAnimationState");

	struct AAIC_NPC_C_AI_SetAnimationState_Params {
		bool Sleeping;			//Offset: 0 | ElementSize: 1
		bool Sitting;			//Offset: 1 | ElementSize: 1
		bool Working;			//Offset: 2 | ElementSize: 1
		bool TakingBreak;			//Offset: 3 | ElementSize: 1
	};
	AAIC_NPC_C_AI_SetAnimationState_Params params;
	params.Sleeping = Sleeping;
	params.Sitting = Sitting;
	params.Working = Working;
	params.TakingBreak = TakingBreak;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_CancelInteractWithFurniture
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::AI_CancelInteractWithFurniture() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_CancelInteractWithFurniture");

	struct AAIC_NPC_C_AI_CancelInteractWithFurniture_Params {
	};
	AAIC_NPC_C_AI_CancelInteractWithFurniture_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_InteractWithFurniture
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Hit	Type: struct FHitResult	Flags: BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference
// Name: Timer	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_InteractWithFurniture(struct FHitResult Hit, bool Timer) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_InteractWithFurniture");

	struct AAIC_NPC_C_AI_InteractWithFurniture_Params {
		struct FHitResult Hit;			//Offset: 0 | ElementSize: 136
		bool Timer;			//Offset: 136 | ElementSize: 1
	};
	AAIC_NPC_C_AI_InteractWithFurniture_Params params;
	params.Hit = Hit;
	params.Timer = Timer;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetCurrentWorkStateLoop
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CurrentWorkStateLoop	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetCurrentWorkStateLoop(int32_t CurrentWorkStateLoop) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetCurrentWorkStateLoop");

	struct AAIC_NPC_C_AI_SetCurrentWorkStateLoop_Params {
		int32_t CurrentWorkStateLoop;			//Offset: 0 | ElementSize: 4
	};
	AAIC_NPC_C_AI_SetCurrentWorkStateLoop_Params params;
	params.CurrentWorkStateLoop = CurrentWorkStateLoop;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetBeginSleepTime
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetBeginSleepTime() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetBeginSleepTime");

	struct AAIC_NPC_C_AI_SetBeginSleepTime_Params {
	};
	AAIC_NPC_C_AI_SetBeginSleepTime_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetBeginWakeUpTime
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetBeginWakeUpTime() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetBeginWakeUpTime");

	struct AAIC_NPC_C_AI_SetBeginWakeUpTime_Params {
	};
	AAIC_NPC_C_AI_SetBeginWakeUpTime_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetMontages
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: WorkMontage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BreakMontage	Type: class UAnimMontage*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetMontages(class UAnimMontage* WorkMontage, class UAnimMontage* BreakMontage) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetMontages");

	struct AAIC_NPC_C_AI_SetMontages_Params {
		class UAnimMontage* WorkMontage;			//Offset: 0 | ElementSize: 8
		class UAnimMontage* BreakMontage;			//Offset: 8 | ElementSize: 8
	};
	AAIC_NPC_C_AI_SetMontages_Params params;
	params.WorkMontage = WorkMontage;
	params.BreakMontage = BreakMontage;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_LightCampfire
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::AI_LightCampfire() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_LightCampfire");

	struct AAIC_NPC_C_AI_LightCampfire_Params {
	};
	AAIC_NPC_C_AI_LightCampfire_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_FlipTool
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: UnFlip	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_FlipTool(bool UnFlip) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FlipTool");

	struct AAIC_NPC_C_AI_FlipTool_Params {
		bool UnFlip;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_FlipTool_Params params;
	params.UnFlip = UnFlip;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_UnoccupyNPC_FieldTask
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::AI_UnoccupyNPC_FieldTask() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_UnoccupyNPC_FieldTask");

	struct AAIC_NPC_C_AI_UnoccupyNPC_FieldTask_Params {
	};
	AAIC_NPC_C_AI_UnoccupyNPC_FieldTask_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_UnoccupyBuildingWorkSlot
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::AI_UnoccupyBuildingWorkSlot() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_UnoccupyBuildingWorkSlot");

	struct AAIC_NPC_C_AI_UnoccupyBuildingWorkSlot_Params {
	};
	AAIC_NPC_C_AI_UnoccupyBuildingWorkSlot_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetWorkSlotIndex
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: WorkSlotIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetWorkSlotIndex(int32_t WorkSlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetWorkSlotIndex");

	struct AAIC_NPC_C_AI_SetWorkSlotIndex_Params {
		int32_t WorkSlotIndex;			//Offset: 0 | ElementSize: 4
	};
	AAIC_NPC_C_AI_SetWorkSlotIndex_Params params;
	params.WorkSlotIndex = WorkSlotIndex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetBanditType
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BanditType	Type: TEnumAsByte<E_BanditType>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetBanditType(TEnumAsByte<E_BanditType> BanditType) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetBanditType");

	struct AAIC_NPC_C_AI_SetBanditType_Params {
		TEnumAsByte<E_BanditType> BanditType;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_SetBanditType_Params params;
	params.BanditType = BanditType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetWhetherAffectNavigation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: WhetherAffectNavigation	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetWhetherAffectNavigation(bool WhetherAffectNavigation) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetWhetherAffectNavigation");

	struct AAIC_NPC_C_AI_SetWhetherAffectNavigation_Params {
		bool WhetherAffectNavigation;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_SetWhetherAffectNavigation_Params params;
	params.WhetherAffectNavigation = WhetherAffectNavigation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetCanAffectNavigation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CanAffectNavigation	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetCanAffectNavigation(bool CanAffectNavigation) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetCanAffectNavigation");

	struct AAIC_NPC_C_AI_SetCanAffectNavigation_Params {
		bool CanAffectNavigation;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_SetCanAffectNavigation_Params params;
	params.CanAffectNavigation = CanAffectNavigation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetIsLookAtTargetRotation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsLookAtTargetRotation	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetIsLookAtTargetRotation(bool IsLookAtTargetRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetIsLookAtTargetRotation");

	struct AAIC_NPC_C_AI_SetIsLookAtTargetRotation_Params {
		bool IsLookAtTargetRotation;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_SetIsLookAtTargetRotation_Params params;
	params.IsLookAtTargetRotation = IsLookAtTargetRotation;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_HideItemsInHands
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsWorking	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_HideItemsInHands(bool IsWorking) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_HideItemsInHands");

	struct AAIC_NPC_C_AI_HideItemsInHands_Params {
		bool IsWorking;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_HideItemsInHands_Params params;
	params.IsWorking = IsWorking;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_HideOff-HandItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsWorking	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_HideOff_HandItem(bool IsWorking) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_HideOff-HandItem");

	struct AAIC_NPC_C_AI_HideOff_HandItem_Params {
		bool IsWorking;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_HideOff_HandItem_Params params;
	params.IsWorking = IsWorking;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_HideHeldItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsWorking	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: UpdateToolType	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_HideHeldItem(bool IsWorking, bool UpdateToolType) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_HideHeldItem");

	struct AAIC_NPC_C_AI_HideHeldItem_Params {
		bool IsWorking;			//Offset: 0 | ElementSize: 1
		bool UpdateToolType;			//Offset: 1 | ElementSize: 1
	};
	AAIC_NPC_C_AI_HideHeldItem_Params params;
	params.IsWorking = IsWorking;
	params.UpdateToolType = UpdateToolType;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_AfterRemovalFromWorkplace
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::AI_AfterRemovalFromWorkplace() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_AfterRemovalFromWorkplace");

	struct AAIC_NPC_C_AI_AfterRemovalFromWorkplace_Params {
	};
	AAIC_NPC_C_AI_AfterRemovalFromWorkplace_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_AfterRemovalFromHouse
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::AI_AfterRemovalFromHouse() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_AfterRemovalFromHouse");

	struct AAIC_NPC_C_AI_AfterRemovalFromHouse_Params {
	};
	AAIC_NPC_C_AI_AfterRemovalFromHouse_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_RemovePathsPoint
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Index	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_RemovePathsPoint(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_RemovePathsPoint");

	struct AAIC_NPC_C_AI_RemovePathsPoint_Params {
		int32_t Index;			//Offset: 0 | ElementSize: 4
	};
	AAIC_NPC_C_AI_RemovePathsPoint_Params params;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_RemoveAnimalReference
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::AI_RemoveAnimalReference() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_RemoveAnimalReference");

	struct AAIC_NPC_C_AI_RemoveAnimalReference_Params {
	};
	AAIC_NPC_C_AI_RemoveAnimalReference_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetFieldTask
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Field_Task	Type: struct FST_FieldTasksLists	Flags: BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetFieldTask(struct FST_FieldTasksLists Field_Task) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetFieldTask");

	struct AAIC_NPC_C_AI_SetFieldTask_Params {
		struct FST_FieldTasksLists Field_Task;			//Offset: 0 | ElementSize: 56
	};
	AAIC_NPC_C_AI_SetFieldTask_Params params;
	params.Field_Task = Field_Task;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetCasualClothes
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: LoadGame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetCasualClothes(bool LoadGame) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetCasualClothes");

	struct AAIC_NPC_C_AI_SetCasualClothes_Params {
		bool LoadGame;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_SetCasualClothes_Params params;
	params.LoadGame = LoadGame;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetProfessionClothes
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: LoadGame	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetProfessionClothes(bool LoadGame) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetProfessionClothes");

	struct AAIC_NPC_C_AI_SetProfessionClothes_Params {
		bool LoadGame;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_SetProfessionClothes_Params params;
	params.LoadGame = LoadGame;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetNeedItemName
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NeedItem	Type: struct FName	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetNeedItemName(struct FName NeedItem) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetNeedItemName");

	struct AAIC_NPC_C_AI_SetNeedItemName_Params {
		struct FName NeedItem;			//Offset: 0 | ElementSize: 8
	};
	AAIC_NPC_C_AI_SetNeedItemName_Params params;
	params.NeedItem = NeedItem;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetNPC_Status
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_Status	Type: TEnumAsByte<E_NPCStatus>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetNPC_Status(TEnumAsByte<E_NPCStatus> NPC_Status) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetNPC_Status");

	struct AAIC_NPC_C_AI_SetNPC_Status_Params {
		TEnumAsByte<E_NPCStatus> NPC_Status;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_SetNPC_Status_Params params;
	params.NPC_Status = NPC_Status;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetNPC_MustBeDeactivated
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_MustBeDeactivated	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetNPC_MustBeDeactivated(bool NPC_MustBeDeactivated) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetNPC_MustBeDeactivated");

	struct AAIC_NPC_C_AI_SetNPC_MustBeDeactivated_Params {
		bool NPC_MustBeDeactivated;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_SetNPC_MustBeDeactivated_Params params;
	params.NPC_MustBeDeactivated = NPC_MustBeDeactivated;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_EnableDeadMethods
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::AI_EnableDeadMethods() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_EnableDeadMethods");

	struct AAIC_NPC_C_AI_EnableDeadMethods_Params {
	};
	AAIC_NPC_C_AI_EnableDeadMethods_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetIsChangedTimeOfDay
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: TimeOfDay	Type: TEnumAsByte<E_TimeOfDay>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetIsChangedTimeOfDay(TEnumAsByte<E_TimeOfDay> TimeOfDay, bool Value) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetIsChangedTimeOfDay");

	struct AAIC_NPC_C_AI_SetIsChangedTimeOfDay_Params {
		TEnumAsByte<E_TimeOfDay> TimeOfDay;			//Offset: 0 | ElementSize: 1
		bool Value;			//Offset: 1 | ElementSize: 1
	};
	AAIC_NPC_C_AI_SetIsChangedTimeOfDay_Params params;
	params.TimeOfDay = TimeOfDay;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_EndTalking
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::AI_EndTalking() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_EndTalking");

	struct AAIC_NPC_C_AI_EndTalking_Params {
	};
	AAIC_NPC_C_AI_EndTalking_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetInteractionSlotIndex
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractionSlotIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetInteractionSlotIndex(int32_t InteractionSlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetInteractionSlotIndex");

	struct AAIC_NPC_C_AI_SetInteractionSlotIndex_Params {
		int32_t InteractionSlotIndex;			//Offset: 0 | ElementSize: 4
	};
	AAIC_NPC_C_AI_SetInteractionSlotIndex_Params params;
	params.InteractionSlotIndex = InteractionSlotIndex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetInteractedActor
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractedActor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetInteractedActor(class AActor* InteractedActor) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetInteractedActor");

	struct AAIC_NPC_C_AI_SetInteractedActor_Params {
		class AActor* InteractedActor;			//Offset: 0 | ElementSize: 8
	};
	AAIC_NPC_C_AI_SetInteractedActor_Params params;
	params.InteractedActor = InteractedActor;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetBlockTalking
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BlockTalking	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetBlockTalking(bool BlockTalking) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetBlockTalking");

	struct AAIC_NPC_C_AI_SetBlockTalking_Params {
		bool BlockTalking;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_SetBlockTalking_Params params;
	params.BlockTalking = BlockTalking;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetPlayingTagNPC
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetPlayingTagNPC() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetPlayingTagNPC");

	struct AAIC_NPC_C_AI_SetPlayingTagNPC_Params {
	};
	AAIC_NPC_C_AI_SetPlayingTagNPC_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_TalkingNPC
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::AI_TalkingNPC() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_TalkingNPC");

	struct AAIC_NPC_C_AI_TalkingNPC_Params {
	};
	AAIC_NPC_C_AI_TalkingNPC_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_StopMovement
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::AI_StopMovement() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_StopMovement");

	struct AAIC_NPC_C_AI_StopMovement_Params {
	};
	AAIC_NPC_C_AI_StopMovement_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_OutsideInteract
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: FlipTool	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_OutsideInteract(bool FlipTool) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_OutsideInteract");

	struct AAIC_NPC_C_AI_OutsideInteract_Params {
		bool FlipTool;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_OutsideInteract_Params params;
	params.FlipTool = FlipTool;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetCollisionResponse
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Channel	Type: TEnumAsByte<ECollisionChannel>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Response	Type: TEnumAsByte<ECollisionResponse>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetCollisionResponse(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> Response) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetCollisionResponse");

	struct AAIC_NPC_C_AI_SetCollisionResponse_Params {
		TEnumAsByte<ECollisionChannel> Channel;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<ECollisionResponse> Response;			//Offset: 1 | ElementSize: 1
	};
	AAIC_NPC_C_AI_SetCollisionResponse_Params params;
	params.Channel = Channel;
	params.Response = Response;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetCharacterRotation
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: TargetRotation	Type: struct FRotator	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: interpRotation	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: interpSpeed	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetCharacterRotation(struct FRotator TargetRotation, bool interpRotation, float interpSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetCharacterRotation");

	struct AAIC_NPC_C_AI_SetCharacterRotation_Params {
		struct FRotator TargetRotation;			//Offset: 0 | ElementSize: 12
		bool interpRotation;			//Offset: 12 | ElementSize: 1
		float interpSpeed;			//Offset: 16 | ElementSize: 4
	};
	AAIC_NPC_C_AI_SetCharacterRotation_Params params;
	params.TargetRotation = TargetRotation;
	params.interpRotation = interpRotation;
	params.interpSpeed = interpSpeed;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetBedIndexes
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: BedIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BedSlotIndex	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetBedIndexes(int32_t BedIndex, int32_t BedSlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetBedIndexes");

	struct AAIC_NPC_C_AI_SetBedIndexes_Params {
		int32_t BedIndex;			//Offset: 0 | ElementSize: 4
		int32_t BedSlotIndex;			//Offset: 4 | ElementSize: 4
	};
	AAIC_NPC_C_AI_SetBedIndexes_Params params;
	params.BedIndex = BedIndex;
	params.BedSlotIndex = BedSlotIndex;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetWorkTask
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetWorkTask() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetWorkTask");

	struct AAIC_NPC_C_AI_SetWorkTask_Params {
	};
	AAIC_NPC_C_AI_SetWorkTask_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetID
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: ID	Type: struct FString	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetID(struct FString ID) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetID");

	struct AAIC_NPC_C_AI_SetID_Params {
		struct FString ID;			//Offset: 0 | ElementSize: 16
	};
	AAIC_NPC_C_AI_SetID_Params params;
	params.ID = ID;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_MoveAside
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::AI_MoveAside() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_MoveAside");

	struct AAIC_NPC_C_AI_MoveAside_Params {
	};
	AAIC_NPC_C_AI_MoveAside_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_UnlockThings
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::AI_UnlockThings() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_UnlockThings");

	struct AAIC_NPC_C_AI_UnlockThings_Params {
	};
	AAIC_NPC_C_AI_UnlockThings_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_AddSkills
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Skill	Type: TEnumAsByte<E_Skills>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Value	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_AddSkills(TEnumAsByte<E_Skills> Skill, float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_AddSkills");

	struct AAIC_NPC_C_AI_AddSkills_Params {
		TEnumAsByte<E_Skills> Skill;			//Offset: 0 | ElementSize: 1
		float Value;			//Offset: 4 | ElementSize: 4
	};
	AAIC_NPC_C_AI_AddSkills_Params params;
	params.Skill = Skill;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_ToolInteractFoliage
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::AI_ToolInteractFoliage() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_ToolInteractFoliage");

	struct AAIC_NPC_C_AI_ToolInteractFoliage_Params {
	};
	AAIC_NPC_C_AI_ToolInteractFoliage_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SpawnOff-HandItem
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Item	Type: TEnumAsByte<E_Tools>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SpawnOff_HandItem(TEnumAsByte<E_Tools> Item) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SpawnOff-HandItem");

	struct AAIC_NPC_C_AI_SpawnOff_HandItem_Params {
		TEnumAsByte<E_Tools> Item;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_SpawnOff_HandItem_Params params;
	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SpawnTool
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Tool	Type: TEnumAsByte<E_Tools>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CheckInInventory	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: FlipTool	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SpawnTool(TEnumAsByte<E_Tools> Tool, bool CheckInInventory, bool FlipTool) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SpawnTool");

	struct AAIC_NPC_C_AI_SpawnTool_Params {
		TEnumAsByte<E_Tools> Tool;			//Offset: 0 | ElementSize: 1
		bool CheckInInventory;			//Offset: 1 | ElementSize: 1
		bool FlipTool;			//Offset: 2 | ElementSize: 1
	};
	AAIC_NPC_C_AI_SpawnTool_Params params;
	params.Tool = Tool;
	params.CheckInInventory = CheckInInventory;
	params.FlipTool = FlipTool;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_InteractFoliage
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: Timer	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_InteractFoliage(bool Timer) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_InteractFoliage");

	struct AAIC_NPC_C_AI_InteractFoliage_Params {
		bool Timer;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_InteractFoliage_Params params;
	params.Timer = Timer;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_InteractResource
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: FlipTool	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_InteractResource(bool FlipTool) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_InteractResource");

	struct AAIC_NPC_C_AI_InteractResource_Params {
		bool FlipTool;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_InteractResource_Params params;
	params.FlipTool = FlipTool;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.OnSuccess_EA7E5A524CC7AD1119E526BA2570C457
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: MovementResult	Type: TEnumAsByte<EPathFollowingResult>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::OnSuccess_EA7E5A524CC7AD1119E526BA2570C457(TEnumAsByte<EPathFollowingResult> MovementResult) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.OnSuccess_EA7E5A524CC7AD1119E526BA2570C457");

	struct AAIC_NPC_C_OnSuccess_EA7E5A524CC7AD1119E526BA2570C457_Params {
		TEnumAsByte<EPathFollowingResult> MovementResult;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_OnSuccess_EA7E5A524CC7AD1119E526BA2570C457_Params params;
	params.MovementResult = MovementResult;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.OnFail_EA7E5A524CC7AD1119E526BA2570C457
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: MovementResult	Type: TEnumAsByte<EPathFollowingResult>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::OnFail_EA7E5A524CC7AD1119E526BA2570C457(TEnumAsByte<EPathFollowingResult> MovementResult) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.OnFail_EA7E5A524CC7AD1119E526BA2570C457");

	struct AAIC_NPC_C_OnFail_EA7E5A524CC7AD1119E526BA2570C457_Params {
		TEnumAsByte<EPathFollowingResult> MovementResult;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_OnFail_EA7E5A524CC7AD1119E526BA2570C457_Params params;
	params.MovementResult = MovementResult;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.OnSuccess_297B00BD4C1D9B65E914BFB94009257B
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: MovementResult	Type: TEnumAsByte<EPathFollowingResult>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::OnSuccess_297B00BD4C1D9B65E914BFB94009257B(TEnumAsByte<EPathFollowingResult> MovementResult) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.OnSuccess_297B00BD4C1D9B65E914BFB94009257B");

	struct AAIC_NPC_C_OnSuccess_297B00BD4C1D9B65E914BFB94009257B_Params {
		TEnumAsByte<EPathFollowingResult> MovementResult;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_OnSuccess_297B00BD4C1D9B65E914BFB94009257B_Params params;
	params.MovementResult = MovementResult;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.OnFail_297B00BD4C1D9B65E914BFB94009257B
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: MovementResult	Type: TEnumAsByte<EPathFollowingResult>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::OnFail_297B00BD4C1D9B65E914BFB94009257B(TEnumAsByte<EPathFollowingResult> MovementResult) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.OnFail_297B00BD4C1D9B65E914BFB94009257B");

	struct AAIC_NPC_C_OnFail_297B00BD4C1D9B65E914BFB94009257B_Params {
		TEnumAsByte<EPathFollowingResult> MovementResult;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_OnFail_297B00BD4C1D9B65E914BFB94009257B_Params params;
	params.MovementResult = MovementResult;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.OnSuccess_FFE60B014075BFB86DA926BD8D4E619A
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: MovementResult	Type: TEnumAsByte<EPathFollowingResult>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::OnSuccess_FFE60B014075BFB86DA926BD8D4E619A(TEnumAsByte<EPathFollowingResult> MovementResult) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.OnSuccess_FFE60B014075BFB86DA926BD8D4E619A");

	struct AAIC_NPC_C_OnSuccess_FFE60B014075BFB86DA926BD8D4E619A_Params {
		TEnumAsByte<EPathFollowingResult> MovementResult;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_OnSuccess_FFE60B014075BFB86DA926BD8D4E619A_Params params;
	params.MovementResult = MovementResult;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.OnFail_FFE60B014075BFB86DA926BD8D4E619A
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: MovementResult	Type: TEnumAsByte<EPathFollowingResult>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::OnFail_FFE60B014075BFB86DA926BD8D4E619A(TEnumAsByte<EPathFollowingResult> MovementResult) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.OnFail_FFE60B014075BFB86DA926BD8D4E619A");

	struct AAIC_NPC_C_OnFail_FFE60B014075BFB86DA926BD8D4E619A_Params {
		TEnumAsByte<EPathFollowingResult> MovementResult;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_OnFail_FFE60B014075BFB86DA926BD8D4E619A_Params params;
	params.MovementResult = MovementResult;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.OnSuccess_0A0414E3447604926B5365B0ED2C24D3
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: MovementResult	Type: TEnumAsByte<EPathFollowingResult>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::OnSuccess_0A0414E3447604926B5365B0ED2C24D3(TEnumAsByte<EPathFollowingResult> MovementResult) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.OnSuccess_0A0414E3447604926B5365B0ED2C24D3");

	struct AAIC_NPC_C_OnSuccess_0A0414E3447604926B5365B0ED2C24D3_Params {
		TEnumAsByte<EPathFollowingResult> MovementResult;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_OnSuccess_0A0414E3447604926B5365B0ED2C24D3_Params params;
	params.MovementResult = MovementResult;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.OnFail_0A0414E3447604926B5365B0ED2C24D3
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: MovementResult	Type: TEnumAsByte<EPathFollowingResult>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::OnFail_0A0414E3447604926B5365B0ED2C24D3(TEnumAsByte<EPathFollowingResult> MovementResult) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.OnFail_0A0414E3447604926B5365B0ED2C24D3");

	struct AAIC_NPC_C_OnFail_0A0414E3447604926B5365B0ED2C24D3_Params {
		TEnumAsByte<EPathFollowingResult> MovementResult;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_OnFail_0A0414E3447604926B5365B0ED2C24D3_Params params;
	params.MovementResult = MovementResult;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.SetSceneName
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::SetSceneName(class ABP_NPC_C* NPC) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.SetSceneName");

	struct AAIC_NPC_C_SetSceneName_Params {
		class ABP_NPC_C* NPC;			//Offset: 0 | ElementSize: 8
	};
	AAIC_NPC_C_SetSceneName_Params params;
	params.NPC = NPC;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.GetOutSetting
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::GetOutSetting() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.GetOutSetting");

	struct AAIC_NPC_C_GetOutSetting_Params {
	};
	AAIC_NPC_C_GetOutSetting_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.FamilyGetOut
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: CheckChildrenAffection	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::FamilyGetOut(bool CheckChildrenAffection) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.FamilyGetOut");

	struct AAIC_NPC_C_FamilyGetOut_Params {
		bool CheckChildrenAffection;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_FamilyGetOut_Params params;
	params.CheckChildrenAffection = CheckChildrenAffection;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.Set Activity
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: SpecifiedActivities	Type: TArray<int32_t>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
/////////////////////////////////////////////
void AAIC_NPC_C::Set_Activity(TArray<int32_t>* SpecifiedActivities) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.Set Activity");

	struct AAIC_NPC_C_Set_Activity_Params {
		TArray<int32_t> SpecifiedActivities;			//Offset: 0 | ElementSize: 16
	};
	AAIC_NPC_C_Set_Activity_Params params;

	UObject::ProcessEvent(fn, &params);
	if (SpecifiedActivities != nullptr)
		*SpecifiedActivities = params.SpecifiedActivities;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.SetHeraldActivity
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::SetHeraldActivity() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.SetHeraldActivity");

	struct AAIC_NPC_C_SetHeraldActivity_Params {
	};
	AAIC_NPC_C_SetHeraldActivity_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.SetPlayerReferenceBlackboard
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::SetPlayerReferenceBlackboard() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.SetPlayerReferenceBlackboard");

	struct AAIC_NPC_C_SetPlayerReferenceBlackboard_Params {
	};
	AAIC_NPC_C_SetPlayerReferenceBlackboard_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.SetQuestNPCsBehavior
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::SetQuestNPCsBehavior() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.SetQuestNPCsBehavior");

	struct AAIC_NPC_C_SetQuestNPCsBehavior_Params {
	};
	AAIC_NPC_C_SetQuestNPCsBehavior_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_FindAnimal
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Animal	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_FindAnimal(struct FVector* Destination, bool* Animal) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FindAnimal");

	struct AAIC_NPC_C_AI_FindAnimal_Params {
		struct FVector Destination;			//Offset: 0 | ElementSize: 12
		bool Animal;			//Offset: 12 | ElementSize: 1
	};
	AAIC_NPC_C_AI_FindAnimal_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (Animal != nullptr)
		*Animal = params.Animal;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_FindFoliage
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: TargetType	Type: TEnumAsByte<E_Resources>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Foliage	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_FindFoliage(TEnumAsByte<E_Resources> TargetType, struct FVector* Destination, bool* Foliage) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FindFoliage");

	struct AAIC_NPC_C_AI_FindFoliage_Params {
		TEnumAsByte<E_Resources> TargetType;			//Offset: 0 | ElementSize: 1
		struct FVector Destination;			//Offset: 4 | ElementSize: 12
		bool Foliage;			//Offset: 16 | ElementSize: 1
	};
	AAIC_NPC_C_AI_FindFoliage_Params params;
	params.TargetType = TargetType;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (Foliage != nullptr)
		*Foliage = params.Foliage;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetTargetLocation
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Target	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MaxDistance	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: MaxDirection	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: OutsideLastPoint	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Location	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetTargetLocation(struct FVector Target, float MaxDistance, float MaxDirection, bool OutsideLastPoint, struct FVector* Location) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetTargetLocation");

	struct AAIC_NPC_C_AI_GetTargetLocation_Params {
		struct FVector Target;			//Offset: 0 | ElementSize: 12
		float MaxDistance;			//Offset: 12 | ElementSize: 4
		float MaxDirection;			//Offset: 16 | ElementSize: 4
		bool OutsideLastPoint;			//Offset: 20 | ElementSize: 1
		struct FVector Location;			//Offset: 24 | ElementSize: 12
	};
	AAIC_NPC_C_AI_GetTargetLocation_Params params;
	params.Target = Target;
	params.MaxDistance = MaxDistance;
	params.MaxDirection = MaxDirection;
	params.OutsideLastPoint = OutsideLastPoint;

	UObject::ProcessEvent(fn, &params);
	if (Location != nullptr)
		*Location = params.Location;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_FindField
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Field	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: TaskList	Type: struct FST_FieldTasksLists	Flags: Parm, OutParm, HasGetValueTypeHash
// Name: IsTask	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_FindField(struct FVector* Destination, bool* Field, struct FST_FieldTasksLists* TaskList, bool* IsTask) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FindField");

	struct AAIC_NPC_C_AI_FindField_Params {
		struct FVector Destination;			//Offset: 0 | ElementSize: 12
		bool Field;			//Offset: 12 | ElementSize: 1
		struct FST_FieldTasksLists TaskList;			//Offset: 16 | ElementSize: 56
		bool IsTask;			//Offset: 72 | ElementSize: 1
	};
	AAIC_NPC_C_AI_FindField_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (Field != nullptr)
		*Field = params.Field;
	if (TaskList != nullptr)
		*TaskList = params.TaskList;
	if (IsTask != nullptr)
		*IsTask = params.IsTask;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_IncreaseNavInvoker
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ToBig	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_IncreaseNavInvoker(bool* ToBig) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_IncreaseNavInvoker");

	struct AAIC_NPC_C_AI_IncreaseNavInvoker_Params {
		bool ToBig;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_IncreaseNavInvoker_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ToBig != nullptr)
		*ToBig = params.ToBig;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetMesh
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Mesh	Type: class USkeletalMeshComponent*	Flags: Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetMesh(class USkeletalMeshComponent** Mesh) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetMesh");

	struct AAIC_NPC_C_AI_GetMesh_Params {
		class USkeletalMeshComponent* Mesh;			//Offset: 0 | ElementSize: 8
	};
	AAIC_NPC_C_AI_GetMesh_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Mesh != nullptr)
		*Mesh = params.Mesh;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_FindHouse
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: FindBed	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Occupy	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Find	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_FindHouse(bool FindBed, bool Occupy, struct FVector* Destination, bool* Find) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FindHouse");

	struct AAIC_NPC_C_AI_FindHouse_Params {
		bool FindBed;			//Offset: 0 | ElementSize: 1
		bool Occupy;			//Offset: 1 | ElementSize: 1
		struct FVector Destination;			//Offset: 4 | ElementSize: 12
		bool Find;			//Offset: 16 | ElementSize: 1
	};
	AAIC_NPC_C_AI_FindHouse_Params params;
	params.FindBed = FindBed;
	params.Occupy = Occupy;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (Find != nullptr)
		*Find = params.Find;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_FindWorkPlace
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WorkRadius	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WorkPlace	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_FindWorkPlace(struct FVector* Destination, float* WorkRadius, bool* WorkPlace) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FindWorkPlace");

	struct AAIC_NPC_C_AI_FindWorkPlace_Params {
		struct FVector Destination;			//Offset: 0 | ElementSize: 12
		float WorkRadius;			//Offset: 12 | ElementSize: 4
		bool WorkPlace;			//Offset: 16 | ElementSize: 1
	};
	AAIC_NPC_C_AI_FindWorkPlace_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (WorkRadius != nullptr)
		*WorkRadius = params.WorkRadius;
	if (WorkPlace != nullptr)
		*WorkPlace = params.WorkPlace;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_FindClosestFurniture
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Location	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FurnitureCategory	Type: TEnumAsByte<E_FurnitureCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IgnoreOwnership	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsFurniture	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_FindClosestFurniture(TEnumAsByte<E_Ownership> Location, TEnumAsByte<E_FurnitureCategories> FurnitureCategory, bool IgnoreOwnership, struct FVector* Destination, bool* IsFurniture) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FindClosestFurniture");

	struct AAIC_NPC_C_AI_FindClosestFurniture_Params {
		TEnumAsByte<E_Ownership> Location;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_FurnitureCategories> FurnitureCategory;			//Offset: 1 | ElementSize: 1
		bool IgnoreOwnership;			//Offset: 2 | ElementSize: 1
		struct FVector Destination;			//Offset: 4 | ElementSize: 12
		bool IsFurniture;			//Offset: 16 | ElementSize: 1
	};
	AAIC_NPC_C_AI_FindClosestFurniture_Params params;
	params.Location = Location;
	params.FurnitureCategory = FurnitureCategory;
	params.IgnoreOwnership = IgnoreOwnership;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (IsFurniture != nullptr)
		*IsFurniture = params.IsFurniture;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_CheckTargetFoliage
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsTargetFoliage	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_CheckTargetFoliage(bool* IsTargetFoliage) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_CheckTargetFoliage");

	struct AAIC_NPC_C_AI_CheckTargetFoliage_Params {
		bool IsTargetFoliage;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_CheckTargetFoliage_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsTargetFoliage != nullptr)
		*IsTargetFoliage = params.IsTargetFoliage;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetStats
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Name	Type: struct FText	Flags: Parm, OutParm
// Name: Sex	Type: TEnumAsByte<E_Sex>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Age	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: CharacterType	Type: TEnumAsByte<E_CharacterType>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetStats(struct FText* Name, TEnumAsByte<E_Sex>* Sex, float* Age, TEnumAsByte<E_CharacterType>* CharacterType) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetStats");

	struct AAIC_NPC_C_AI_GetStats_Params {
		struct FText Name;			//Offset: 0 | ElementSize: 24
		TEnumAsByte<E_Sex> Sex;			//Offset: 24 | ElementSize: 1
		float Age;			//Offset: 28 | ElementSize: 4
		TEnumAsByte<E_CharacterType> CharacterType;			//Offset: 32 | ElementSize: 1
	};
	AAIC_NPC_C_AI_GetStats_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Name != nullptr)
		*Name = params.Name;
	if (Sex != nullptr)
		*Sex = params.Sex;
	if (Age != nullptr)
		*Age = params.Age;
	if (CharacterType != nullptr)
		*CharacterType = params.CharacterType;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetIDFromNPC
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_ID	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetIDFromNPC(struct FString* NPC_ID) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetIDFromNPC");

	struct AAIC_NPC_C_AI_GetIDFromNPC_Params {
		struct FString NPC_ID;			//Offset: 0 | ElementSize: 16
	};
	AAIC_NPC_C_AI_GetIDFromNPC_Params params;

	UObject::ProcessEvent(fn, &params);
	if (NPC_ID != nullptr)
		*NPC_ID = params.NPC_ID;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_CheckBuildingIsConstructed
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsConstructed	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_CheckBuildingIsConstructed(bool* IsConstructed) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_CheckBuildingIsConstructed");

	struct AAIC_NPC_C_AI_CheckBuildingIsConstructed_Params {
		bool IsConstructed;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_CheckBuildingIsConstructed_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsConstructed != nullptr)
		*IsConstructed = params.IsConstructed;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetOwnership
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Ownership	Type: TEnumAsByte<E_Ownership>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetOwnership(TEnumAsByte<E_Ownership>* Ownership) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetOwnership");

	struct AAIC_NPC_C_AI_GetOwnership_Params {
		TEnumAsByte<E_Ownership> Ownership;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_GetOwnership_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Ownership != nullptr)
		*Ownership = params.Ownership;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetBedIndex
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BedIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BedSlotIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetBedIndex(int32_t* BedIndex, int32_t* BedSlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetBedIndex");

	struct AAIC_NPC_C_AI_GetBedIndex_Params {
		int32_t BedIndex;			//Offset: 0 | ElementSize: 4
		int32_t BedSlotIndex;			//Offset: 4 | ElementSize: 4
	};
	AAIC_NPC_C_AI_GetBedIndex_Params params;

	UObject::ProcessEvent(fn, &params);
	if (BedIndex != nullptr)
		*BedIndex = params.BedIndex;
	if (BedSlotIndex != nullptr)
		*BedSlotIndex = params.BedSlotIndex;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_FindNPCtoTalk
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: lookAt	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsNPC	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_FindNPCtoTalk(struct FVector* Destination, struct FVector* lookAt, bool* IsNPC) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FindNPCtoTalk");

	struct AAIC_NPC_C_AI_FindNPCtoTalk_Params {
		struct FVector Destination;			//Offset: 0 | ElementSize: 12
		struct FVector lookAt;			//Offset: 12 | ElementSize: 12
		bool IsNPC;			//Offset: 24 | ElementSize: 1
	};
	AAIC_NPC_C_AI_FindNPCtoTalk_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (lookAt != nullptr)
		*lookAt = params.lookAt;
	if (IsNPC != nullptr)
		*IsNPC = params.IsNPC;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetNightPatrol
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NightPatrol	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetNightPatrol(bool* NightPatrol) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetNightPatrol");

	struct AAIC_NPC_C_AI_GetNightPatrol_Params {
		bool NightPatrol;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_GetNightPatrol_Params params;

	UObject::ProcessEvent(fn, &params);
	if (NightPatrol != nullptr)
		*NightPatrol = params.NightPatrol;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_FindBuildingWorkbenches
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsWorkbenches	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_FindBuildingWorkbenches(struct FVector* Destination, bool* IsWorkbenches) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FindBuildingWorkbenches");

	struct AAIC_NPC_C_AI_FindBuildingWorkbenches_Params {
		struct FVector Destination;			//Offset: 0 | ElementSize: 12
		bool IsWorkbenches;			//Offset: 12 | ElementSize: 1
	};
	AAIC_NPC_C_AI_FindBuildingWorkbenches_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (IsWorkbenches != nullptr)
		*IsWorkbenches = params.IsWorkbenches;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetCapsuleHalfHeight
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CapsuleHalfHeight	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetCapsuleHalfHeight(float* CapsuleHalfHeight) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetCapsuleHalfHeight");

	struct AAIC_NPC_C_AI_GetCapsuleHalfHeight_Params {
		float CapsuleHalfHeight;			//Offset: 0 | ElementSize: 4
	};
	AAIC_NPC_C_AI_GetCapsuleHalfHeight_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CapsuleHalfHeight != nullptr)
		*CapsuleHalfHeight = params.CapsuleHalfHeight;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_FindTavernFurniture
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Occupy	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Find	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_FindTavernFurniture(bool Occupy, struct FVector* Destination, bool* Find) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FindTavernFurniture");

	struct AAIC_NPC_C_AI_FindTavernFurniture_Params {
		bool Occupy;			//Offset: 0 | ElementSize: 1
		struct FVector Destination;			//Offset: 4 | ElementSize: 12
		bool Find;			//Offset: 16 | ElementSize: 1
	};
	AAIC_NPC_C_AI_FindTavernFurniture_Params params;
	params.Occupy = Occupy;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (Find != nullptr)
		*Find = params.Find;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_FindRandomFurniture
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Location	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: FurnitureCategory	Type: TEnumAsByte<E_FurnitureCategories>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IgnoreOwnership	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsFurniture	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_FindRandomFurniture(TEnumAsByte<E_Ownership> Location, TEnumAsByte<E_FurnitureCategories> FurnitureCategory, bool IgnoreOwnership, struct FVector* Destination, bool* IsFurniture) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FindRandomFurniture");

	struct AAIC_NPC_C_AI_FindRandomFurniture_Params {
		TEnumAsByte<E_Ownership> Location;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_FurnitureCategories> FurnitureCategory;			//Offset: 1 | ElementSize: 1
		bool IgnoreOwnership;			//Offset: 2 | ElementSize: 1
		struct FVector Destination;			//Offset: 4 | ElementSize: 12
		bool IsFurniture;			//Offset: 16 | ElementSize: 1
	};
	AAIC_NPC_C_AI_FindRandomFurniture_Params params;
	params.Location = Location;
	params.FurnitureCategory = FurnitureCategory;
	params.IgnoreOwnership = IgnoreOwnership;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (IsFurniture != nullptr)
		*IsFurniture = params.IsFurniture;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetQuestBlocking
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: QuestBlocking	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetQuestBlocking(bool* QuestBlocking) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetQuestBlocking");

	struct AAIC_NPC_C_AI_GetQuestBlocking_Params {
		bool QuestBlocking;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_GetQuestBlocking_Params params;

	UObject::ProcessEvent(fn, &params);
	if (QuestBlocking != nullptr)
		*QuestBlocking = params.QuestBlocking;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetAnimationState
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Sleeping	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Sitting	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Working	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: TakingBreak	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetAnimationState(bool* Sleeping, bool* Sitting, bool* Working, bool* TakingBreak) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetAnimationState");

	struct AAIC_NPC_C_AI_GetAnimationState_Params {
		bool Sleeping;			//Offset: 0 | ElementSize: 1
		bool Sitting;			//Offset: 1 | ElementSize: 1
		bool Working;			//Offset: 2 | ElementSize: 1
		bool TakingBreak;			//Offset: 3 | ElementSize: 1
	};
	AAIC_NPC_C_AI_GetAnimationState_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Sleeping != nullptr)
		*Sleeping = params.Sleeping;
	if (Sitting != nullptr)
		*Sitting = params.Sitting;
	if (Working != nullptr)
		*Working = params.Working;
	if (TakingBreak != nullptr)
		*TakingBreak = params.TakingBreak;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetInteractionSlotIndex
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: InteractionSlotIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetInteractionSlotIndex(int32_t* InteractionSlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetInteractionSlotIndex");

	struct AAIC_NPC_C_AI_GetInteractionSlotIndex_Params {
		int32_t InteractionSlotIndex;			//Offset: 0 | ElementSize: 4
	};
	AAIC_NPC_C_AI_GetInteractionSlotIndex_Params params;

	UObject::ProcessEvent(fn, &params);
	if (InteractionSlotIndex != nullptr)
		*InteractionSlotIndex = params.InteractionSlotIndex;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetIsChangedTimeOfDay
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: TimeOfDay	Type: TEnumAsByte<E_TimeOfDay>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsChanged	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetIsChangedTimeOfDay(TEnumAsByte<E_TimeOfDay> TimeOfDay, bool* IsChanged) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetIsChangedTimeOfDay");

	struct AAIC_NPC_C_AI_GetIsChangedTimeOfDay_Params {
		TEnumAsByte<E_TimeOfDay> TimeOfDay;			//Offset: 0 | ElementSize: 1
		bool IsChanged;			//Offset: 1 | ElementSize: 1
	};
	AAIC_NPC_C_AI_GetIsChangedTimeOfDay_Params params;
	params.TimeOfDay = TimeOfDay;

	UObject::ProcessEvent(fn, &params);
	if (IsChanged != nullptr)
		*IsChanged = params.IsChanged;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetCollisionResponse
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Channel	Type: TEnumAsByte<ECollisionChannel>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Response	Type: TEnumAsByte<ECollisionResponse>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetCollisionResponse(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse>* Response) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetCollisionResponse");

	struct AAIC_NPC_C_AI_GetCollisionResponse_Params {
		TEnumAsByte<ECollisionChannel> Channel;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<ECollisionResponse> Response;			//Offset: 1 | ElementSize: 1
	};
	AAIC_NPC_C_AI_GetCollisionResponse_Params params;
	params.Channel = Channel;

	UObject::ProcessEvent(fn, &params);
	if (Response != nullptr)
		*Response = params.Response;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetOptimizationBlackboards
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: OptimizationBlackboards	Type: struct FST_SAVE_NPC_Blackboards	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetOptimizationBlackboards(struct FST_SAVE_NPC_Blackboards* OptimizationBlackboards) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetOptimizationBlackboards");

	struct AAIC_NPC_C_AI_GetOptimizationBlackboards_Params {
		struct FST_SAVE_NPC_Blackboards OptimizationBlackboards;			//Offset: 0 | ElementSize: 40
	};
	AAIC_NPC_C_AI_GetOptimizationBlackboards_Params params;

	UObject::ProcessEvent(fn, &params);
	if (OptimizationBlackboards != nullptr)
		*OptimizationBlackboards = params.OptimizationBlackboards;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetDead
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: isDead	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetDead(bool* isDead) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetDead");

	struct AAIC_NPC_C_AI_GetDead_Params {
		bool isDead;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_GetDead_Params params;

	UObject::ProcessEvent(fn, &params);
	if (isDead != nullptr)
		*isDead = params.isDead;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetMontages
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: WorkMontage	Type: class UAnimMontage*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BreakMontage	Type: class UAnimMontage*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetMontages(class UAnimMontage** WorkMontage, class UAnimMontage** BreakMontage) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetMontages");

	struct AAIC_NPC_C_AI_GetMontages_Params {
		class UAnimMontage* WorkMontage;			//Offset: 0 | ElementSize: 8
		class UAnimMontage* BreakMontage;			//Offset: 8 | ElementSize: 8
	};
	AAIC_NPC_C_AI_GetMontages_Params params;

	UObject::ProcessEvent(fn, &params);
	if (WorkMontage != nullptr)
		*WorkMontage = params.WorkMontage;
	if (BreakMontage != nullptr)
		*BreakMontage = params.BreakMontage;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetIsGetOut
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: GetOut	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetIsGetOut(bool* GetOut) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetIsGetOut");

	struct AAIC_NPC_C_AI_GetIsGetOut_Params {
		bool GetOut;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_GetIsGetOut_Params params;

	UObject::ProcessEvent(fn, &params);
	if (GetOut != nullptr)
		*GetOut = params.GetOut;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetWorkHours
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: StartWorkingTime	Type: struct FST_Hour	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: StopWorkingTime	Type: struct FST_Hour	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetWorkHours(struct FST_Hour* StartWorkingTime, struct FST_Hour* StopWorkingTime) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetWorkHours");

	struct AAIC_NPC_C_AI_GetWorkHours_Params {
		struct FST_Hour StartWorkingTime;			//Offset: 0 | ElementSize: 12
		struct FST_Hour StopWorkingTime;			//Offset: 12 | ElementSize: 12
	};
	AAIC_NPC_C_AI_GetWorkHours_Params params;

	UObject::ProcessEvent(fn, &params);
	if (StartWorkingTime != nullptr)
		*StartWorkingTime = params.StartWorkingTime;
	if (StopWorkingTime != nullptr)
		*StopWorkingTime = params.StopWorkingTime;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetNPC_MustBeDeactivated
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_MustBeDeactivated	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetNPC_MustBeDeactivated(bool* NPC_MustBeDeactivated) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetNPC_MustBeDeactivated");

	struct AAIC_NPC_C_AI_GetNPC_MustBeDeactivated_Params {
		bool NPC_MustBeDeactivated;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_GetNPC_MustBeDeactivated_Params params;

	UObject::ProcessEvent(fn, &params);
	if (NPC_MustBeDeactivated != nullptr)
		*NPC_MustBeDeactivated = params.NPC_MustBeDeactivated;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_FindFishingPoint
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Find	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_FindFishingPoint(struct FVector* Destination, bool* Find) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FindFishingPoint");

	struct AAIC_NPC_C_AI_FindFishingPoint_Params {
		struct FVector Destination;			//Offset: 0 | ElementSize: 12
		bool Find;			//Offset: 12 | ElementSize: 1
	};
	AAIC_NPC_C_AI_FindFishingPoint_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (Find != nullptr)
		*Find = params.Find;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetOptimizationStage
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: optimizationStage	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetOptimizationStage(int32_t* optimizationStage) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetOptimizationStage");

	struct AAIC_NPC_C_AI_GetOptimizationStage_Params {
		int32_t optimizationStage;			//Offset: 0 | ElementSize: 4
	};
	AAIC_NPC_C_AI_GetOptimizationStage_Params params;

	UObject::ProcessEvent(fn, &params);
	if (optimizationStage != nullptr)
		*optimizationStage = params.optimizationStage;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetOutsideNPC_Ownership
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: OutsideNPC_Ownership	Type: TEnumAsByte<E_Ownership>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetOutsideNPC_Ownership(TEnumAsByte<E_Ownership>* OutsideNPC_Ownership) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetOutsideNPC_Ownership");

	struct AAIC_NPC_C_AI_GetOutsideNPC_Ownership_Params {
		TEnumAsByte<E_Ownership> OutsideNPC_Ownership;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_GetOutsideNPC_Ownership_Params params;

	UObject::ProcessEvent(fn, &params);
	if (OutsideNPC_Ownership != nullptr)
		*OutsideNPC_Ownership = params.OutsideNPC_Ownership;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_CheckSeedsInChest
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: RemoveItem	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: BagSeeds	Type: TEnumAsByte<E_BagMode>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsBag	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_CheckSeedsInChest(bool RemoveItem, TEnumAsByte<E_BagMode> BagSeeds, bool* IsBag) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_CheckSeedsInChest");

	struct AAIC_NPC_C_AI_CheckSeedsInChest_Params {
		bool RemoveItem;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_BagMode> BagSeeds;			//Offset: 1 | ElementSize: 1
		bool IsBag;			//Offset: 2 | ElementSize: 1
	};
	AAIC_NPC_C_AI_CheckSeedsInChest_Params params;
	params.RemoveItem = RemoveItem;
	params.BagSeeds = BagSeeds;

	UObject::ProcessEvent(fn, &params);
	if (IsBag != nullptr)
		*IsBag = params.IsBag;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetNPC_Status
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC_Status	Type: TEnumAsByte<E_NPCStatus>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NeedTool	Type: TEnumAsByte<E_Tools_Activity>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: NeedItem	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetNPC_Status(TEnumAsByte<E_NPCStatus>* NPC_Status, TEnumAsByte<E_Tools_Activity>* NeedTool, struct FName* NeedItem) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetNPC_Status");

	struct AAIC_NPC_C_AI_GetNPC_Status_Params {
		TEnumAsByte<E_NPCStatus> NPC_Status;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_Tools_Activity> NeedTool;			//Offset: 1 | ElementSize: 1
		struct FName NeedItem;			//Offset: 4 | ElementSize: 8
	};
	AAIC_NPC_C_AI_GetNPC_Status_Params params;

	UObject::ProcessEvent(fn, &params);
	if (NPC_Status != nullptr)
		*NPC_Status = params.NPC_Status;
	if (NeedTool != nullptr)
		*NeedTool = params.NeedTool;
	if (NeedItem != nullptr)
		*NeedItem = params.NeedItem;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetNeedItemName
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: NeedItem	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetNeedItemName(struct FName* NeedItem) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetNeedItemName");

	struct AAIC_NPC_C_AI_GetNeedItemName_Params {
		struct FName NeedItem;			//Offset: 0 | ElementSize: 8
	};
	AAIC_NPC_C_AI_GetNeedItemName_Params params;

	UObject::ProcessEvent(fn, &params);
	if (NeedItem != nullptr)
		*NeedItem = params.NeedItem;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_FindAnimalsBreederPoint
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Point	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_FindAnimalsBreederPoint(struct FVector* Destination, bool* Point) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FindAnimalsBreederPoint");

	struct AAIC_NPC_C_AI_FindAnimalsBreederPoint_Params {
		struct FVector Destination;			//Offset: 0 | ElementSize: 12
		bool Point;			//Offset: 12 | ElementSize: 1
	};
	AAIC_NPC_C_AI_FindAnimalsBreederPoint_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (Point != nullptr)
		*Point = params.Point;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SpawnBow
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CheckInInventory	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IsBow	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SpawnBow(bool CheckInInventory, bool* IsBow) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SpawnBow");

	struct AAIC_NPC_C_AI_SpawnBow_Params {
		bool CheckInInventory;			//Offset: 0 | ElementSize: 1
		bool IsBow;			//Offset: 1 | ElementSize: 1
	};
	AAIC_NPC_C_AI_SpawnBow_Params params;
	params.CheckInInventory = CheckInInventory;

	UObject::ProcessEvent(fn, &params);
	if (IsBow != nullptr)
		*IsBow = params.IsBow;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SnapToFurnitureSlot
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ToFinishSlot	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SnapToFurnitureSlot(bool ToFinishSlot, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SnapToFurnitureSlot");

	struct AAIC_NPC_C_AI_SnapToFurnitureSlot_Params {
		bool ToFinishSlot;			//Offset: 0 | ElementSize: 1
		bool Success;			//Offset: 1 | ElementSize: 1
	};
	AAIC_NPC_C_AI_SnapToFurnitureSlot_Params params;
	params.ToFinishSlot = ToFinishSlot;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_CheckIsChunkInteractable
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Interactable	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_CheckIsChunkInteractable(bool* Interactable) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_CheckIsChunkInteractable");

	struct AAIC_NPC_C_AI_CheckIsChunkInteractable_Params {
		bool Interactable;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_CheckIsChunkInteractable_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Interactable != nullptr)
		*Interactable = params.Interactable;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetIsLookAtTargetRotation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsLookAtTargetRotation	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetIsLookAtTargetRotation(bool* IsLookAtTargetRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetIsLookAtTargetRotation");

	struct AAIC_NPC_C_AI_GetIsLookAtTargetRotation_Params {
		bool IsLookAtTargetRotation;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_GetIsLookAtTargetRotation_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsLookAtTargetRotation != nullptr)
		*IsLookAtTargetRotation = params.IsLookAtTargetRotation;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetCanAffectNavigation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CanAffectNavigation	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetCanAffectNavigation(bool* CanAffectNavigation) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetCanAffectNavigation");

	struct AAIC_NPC_C_AI_GetCanAffectNavigation_Params {
		bool CanAffectNavigation;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_GetCanAffectNavigation_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CanAffectNavigation != nullptr)
		*CanAffectNavigation = params.CanAffectNavigation;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_FindWorkSlot
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WorkSlot	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_FindWorkSlot(struct FVector* Destination, bool* WorkSlot) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FindWorkSlot");

	struct AAIC_NPC_C_AI_FindWorkSlot_Params {
		struct FVector Destination;			//Offset: 0 | ElementSize: 12
		bool WorkSlot;			//Offset: 12 | ElementSize: 1
	};
	AAIC_NPC_C_AI_FindWorkSlot_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (WorkSlot != nullptr)
		*WorkSlot = params.WorkSlot;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetGoHome_Activity
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: GoHome_Activity	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetGoHome_Activity(bool* GoHome_Activity) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetGoHome_Activity");

	struct AAIC_NPC_C_AI_GetGoHome_Activity_Params {
		bool GoHome_Activity;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_GetGoHome_Activity_Params params;

	UObject::ProcessEvent(fn, &params);
	if (GoHome_Activity != nullptr)
		*GoHome_Activity = params.GoHome_Activity;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetPaths
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Paths	Type: TArray<struct FVector>	Flags: Parm, OutParm
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetPaths(TArray<struct FVector>* Paths) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetPaths");

	struct AAIC_NPC_C_AI_GetPaths_Params {
		TArray<struct FVector> Paths;			//Offset: 0 | ElementSize: 16
	};
	AAIC_NPC_C_AI_GetPaths_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Paths != nullptr)
		*Paths = params.Paths;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetPathsPoint
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Succes	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: PathsPoint	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetPathsPoint(bool* Succes, struct FVector* PathsPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetPathsPoint");

	struct AAIC_NPC_C_AI_GetPathsPoint_Params {
		bool Succes;			//Offset: 0 | ElementSize: 1
		struct FVector PathsPoint;			//Offset: 4 | ElementSize: 12
	};
	AAIC_NPC_C_AI_GetPathsPoint_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Succes != nullptr)
		*Succes = params.Succes;
	if (PathsPoint != nullptr)
		*PathsPoint = params.PathsPoint;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_FindVillageCenter
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: VillageCenter	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_FindVillageCenter(struct FVector* VillageCenter) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FindVillageCenter");

	struct AAIC_NPC_C_AI_FindVillageCenter_Params {
		struct FVector VillageCenter;			//Offset: 0 | ElementSize: 12
	};
	AAIC_NPC_C_AI_FindVillageCenter_Params params;

	UObject::ProcessEvent(fn, &params);
	if (VillageCenter != nullptr)
		*VillageCenter = params.VillageCenter;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetWhetherAffectNavigation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: WhetherAffectNavigation	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetWhetherAffectNavigation(bool* WhetherAffectNavigation) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetWhetherAffectNavigation");

	struct AAIC_NPC_C_AI_GetWhetherAffectNavigation_Params {
		bool WhetherAffectNavigation;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_GetWhetherAffectNavigation_Params params;

	UObject::ProcessEvent(fn, &params);
	if (WhetherAffectNavigation != nullptr)
		*WhetherAffectNavigation = params.WhetherAffectNavigation;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_FindPOIFurniture
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: FurnitureTypes	Type: TArray<TEnumAsByte<E_FurnitureType>>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: IsFurniture	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_FindPOIFurniture(TArray<TEnumAsByte<E_FurnitureType>>* FurnitureTypes, bool* IsFurniture, struct FVector* Destination) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FindPOIFurniture");

	struct AAIC_NPC_C_AI_FindPOIFurniture_Params {
		TArray<TEnumAsByte<E_FurnitureType>> FurnitureTypes;			//Offset: 0 | ElementSize: 16
		bool IsFurniture;			//Offset: 16 | ElementSize: 1
		struct FVector Destination;			//Offset: 20 | ElementSize: 12
	};
	AAIC_NPC_C_AI_FindPOIFurniture_Params params;

	UObject::ProcessEvent(fn, &params);
	if (FurnitureTypes != nullptr)
		*FurnitureTypes = params.FurnitureTypes;
	if (IsFurniture != nullptr)
		*IsFurniture = params.IsFurniture;
	if (Destination != nullptr)
		*Destination = params.Destination;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetBanditType
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BanditType	Type: TEnumAsByte<E_BanditType>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetBanditType(TEnumAsByte<E_BanditType>* BanditType) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetBanditType");

	struct AAIC_NPC_C_AI_GetBanditType_Params {
		TEnumAsByte<E_BanditType> BanditType;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_GetBanditType_Params params;

	UObject::ProcessEvent(fn, &params);
	if (BanditType != nullptr)
		*BanditType = params.BanditType;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_FindGetOutPoint
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: GetOutPoint	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_FindGetOutPoint(struct FVector* GetOutPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FindGetOutPoint");

	struct AAIC_NPC_C_AI_FindGetOutPoint_Params {
		struct FVector GetOutPoint;			//Offset: 0 | ElementSize: 12
	};
	AAIC_NPC_C_AI_FindGetOutPoint_Params params;

	UObject::ProcessEvent(fn, &params);
	if (GetOutPoint != nullptr)
		*GetOutPoint = params.GetOutPoint;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetWorkSlotIndex
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: WorkSlotIndex	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetWorkSlotIndex(int32_t* WorkSlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetWorkSlotIndex");

	struct AAIC_NPC_C_AI_GetWorkSlotIndex_Params {
		int32_t WorkSlotIndex;			//Offset: 0 | ElementSize: 4
	};
	AAIC_NPC_C_AI_GetWorkSlotIndex_Params params;

	UObject::ProcessEvent(fn, &params);
	if (WorkSlotIndex != nullptr)
		*WorkSlotIndex = params.WorkSlotIndex;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetBuildingType
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsValidBuilding	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: BuildingType	Type: TEnumAsByte<E_Buildings>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetBuildingType(bool* IsValidBuilding, TEnumAsByte<E_Buildings>* BuildingType) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetBuildingType");

	struct AAIC_NPC_C_AI_GetBuildingType_Params {
		bool IsValidBuilding;			//Offset: 0 | ElementSize: 1
		TEnumAsByte<E_Buildings> BuildingType;			//Offset: 1 | ElementSize: 1
	};
	AAIC_NPC_C_AI_GetBuildingType_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsValidBuilding != nullptr)
		*IsValidBuilding = params.IsValidBuilding;
	if (BuildingType != nullptr)
		*BuildingType = params.BuildingType;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SpawnCrossbow
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CheckInInventory	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: IsCrossBow	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SpawnCrossbow(bool CheckInInventory, bool* IsCrossBow) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SpawnCrossbow");

	struct AAIC_NPC_C_AI_SpawnCrossbow_Params {
		bool CheckInInventory;			//Offset: 0 | ElementSize: 1
		bool IsCrossBow;			//Offset: 1 | ElementSize: 1
	};
	AAIC_NPC_C_AI_SpawnCrossbow_Params params;
	params.CheckInInventory = CheckInInventory;

	UObject::ProcessEvent(fn, &params);
	if (IsCrossBow != nullptr)
		*IsCrossBow = params.IsCrossBow;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetVendor
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Vendor	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetVendor(bool* Vendor) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetVendor");

	struct AAIC_NPC_C_AI_GetVendor_Params {
		bool Vendor;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_GetVendor_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Vendor != nullptr)
		*Vendor = params.Vendor;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetSpawnerLocation
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsValidSpawner	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: SpawnerLocation	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetSpawnerLocation(bool* IsValidSpawner, struct FVector* SpawnerLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetSpawnerLocation");

	struct AAIC_NPC_C_AI_GetSpawnerLocation_Params {
		bool IsValidSpawner;			//Offset: 0 | ElementSize: 1
		struct FVector SpawnerLocation;			//Offset: 4 | ElementSize: 12
	};
	AAIC_NPC_C_AI_GetSpawnerLocation_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsValidSpawner != nullptr)
		*IsValidSpawner = params.IsValidSpawner;
	if (SpawnerLocation != nullptr)
		*SpawnerLocation = params.SpawnerLocation;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.CharacterVoice
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ST_CharacterVoice	Type: struct FST_CharacterVoiceCues	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::CharacterVoice(struct FST_CharacterVoiceCues* ST_CharacterVoice) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.CharacterVoice");

	struct AAIC_NPC_C_CharacterVoice_Params {
		struct FST_CharacterVoiceCues ST_CharacterVoice;			//Offset: 0 | ElementSize: 24
	};
	AAIC_NPC_C_CharacterVoice_Params params;

	UObject::ProcessEvent(fn, &params);
	if (ST_CharacterVoice != nullptr)
		*ST_CharacterVoice = params.ST_CharacterVoice;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_FindBreakSlot
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BreakSlot	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_FindBreakSlot(struct FVector* Destination, bool* BreakSlot) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FindBreakSlot");

	struct AAIC_NPC_C_AI_FindBreakSlot_Params {
		struct FVector Destination;			//Offset: 0 | ElementSize: 12
		bool BreakSlot;			//Offset: 12 | ElementSize: 1
	};
	AAIC_NPC_C_AI_FindBreakSlot_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (BreakSlot != nullptr)
		*BreakSlot = params.BreakSlot;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetBreakAnimID
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BreakAnimID	Type: unsigned char	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetBreakAnimID(unsigned char* BreakAnimID) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetBreakAnimID");

	struct AAIC_NPC_C_AI_GetBreakAnimID_Params {
		unsigned char BreakAnimID;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_GetBreakAnimID_Params params;

	UObject::ProcessEvent(fn, &params);
	if (BreakAnimID != nullptr)
		*BreakAnimID = params.BreakAnimID;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetBuildingsWorkSlotWorldTransforms
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsValidSlot	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Slot	Type: struct FTransform	Flags: Parm, OutParm, IsPlainOldData, NoDestructor
// Name: StartPoint	Type: struct FTransform	Flags: Parm, OutParm, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetBuildingsWorkSlotWorldTransforms(bool* IsValidSlot, struct FTransform* Slot, struct FTransform* StartPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetBuildingsWorkSlotWorldTransforms");

	struct AAIC_NPC_C_AI_GetBuildingsWorkSlotWorldTransforms_Params {
		bool IsValidSlot;			//Offset: 0 | ElementSize: 1
		struct FTransform Slot;			//Offset: 16 | ElementSize: 48
		struct FTransform StartPoint;			//Offset: 64 | ElementSize: 48
	};
	AAIC_NPC_C_AI_GetBuildingsWorkSlotWorldTransforms_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsValidSlot != nullptr)
		*IsValidSlot = params.IsValidSlot;
	if (Slot != nullptr)
		*Slot = params.Slot;
	if (StartPoint != nullptr)
		*StartPoint = params.StartPoint;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetWakeUpAndSleepTimes
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BeginWakeUpTime	Type: struct FST_Hour	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: BeginSleepTime	Type: struct FST_Hour	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetWakeUpAndSleepTimes(struct FST_Hour* BeginWakeUpTime, struct FST_Hour* BeginSleepTime) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetWakeUpAndSleepTimes");

	struct AAIC_NPC_C_AI_GetWakeUpAndSleepTimes_Params {
		struct FST_Hour BeginWakeUpTime;			//Offset: 0 | ElementSize: 12
		struct FST_Hour BeginSleepTime;			//Offset: 12 | ElementSize: 12
	};
	AAIC_NPC_C_AI_GetWakeUpAndSleepTimes_Params params;

	UObject::ProcessEvent(fn, &params);
	if (BeginWakeUpTime != nullptr)
		*BeginWakeUpTime = params.BeginWakeUpTime;
	if (BeginSleepTime != nullptr)
		*BeginSleepTime = params.BeginSleepTime;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetOutsideNPC_Type
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Outside_NPC_Type	Type: TEnumAsByte<E_OutsideNPCTypes>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetOutsideNPC_Type(TEnumAsByte<E_OutsideNPCTypes>* Outside_NPC_Type) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetOutsideNPC_Type");

	struct AAIC_NPC_C_AI_GetOutsideNPC_Type_Params {
		TEnumAsByte<E_OutsideNPCTypes> Outside_NPC_Type;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_GetOutsideNPC_Type_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Outside_NPC_Type != nullptr)
		*Outside_NPC_Type = params.Outside_NPC_Type;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_FindNPCtoPlayingTag
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: lookAt	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsNPC	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_FindNPCtoPlayingTag(struct FVector* Destination, struct FVector* lookAt, bool* IsNPC) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FindNPCtoPlayingTag");

	struct AAIC_NPC_C_AI_FindNPCtoPlayingTag_Params {
		struct FVector Destination;			//Offset: 0 | ElementSize: 12
		struct FVector lookAt;			//Offset: 12 | ElementSize: 12
		bool IsNPC;			//Offset: 24 | ElementSize: 1
	};
	AAIC_NPC_C_AI_FindNPCtoPlayingTag_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (lookAt != nullptr)
		*lookAt = params.lookAt;
	if (IsNPC != nullptr)
		*IsNPC = params.IsNPC;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetWorkStateLoops
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CurrentWorkStateLoop	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: WorkStateLoops	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetWorkStateLoops(int32_t* CurrentWorkStateLoop, int32_t* WorkStateLoops) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetWorkStateLoops");

	struct AAIC_NPC_C_AI_GetWorkStateLoops_Params {
		int32_t CurrentWorkStateLoop;			//Offset: 0 | ElementSize: 4
		int32_t WorkStateLoops;			//Offset: 4 | ElementSize: 4
	};
	AAIC_NPC_C_AI_GetWorkStateLoops_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CurrentWorkStateLoop != nullptr)
		*CurrentWorkStateLoop = params.CurrentWorkStateLoop;
	if (WorkStateLoops != nullptr)
		*WorkStateLoops = params.WorkStateLoops;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetDistanceToPlayer
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Distance	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetDistanceToPlayer(float* Distance) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetDistanceToPlayer");

	struct AAIC_NPC_C_AI_GetDistanceToPlayer_Params {
		float Distance;			//Offset: 0 | ElementSize: 4
	};
	AAIC_NPC_C_AI_GetDistanceToPlayer_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Distance != nullptr)
		*Distance = params.Distance;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_FindCampfire
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Location	Type: TEnumAsByte<E_Ownership>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IgnoreOwnership	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: IsCampfire	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_FindCampfire(TEnumAsByte<E_Ownership> Location, bool IgnoreOwnership, struct FVector* Destination, bool* IsCampfire) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FindCampfire");

	struct AAIC_NPC_C_AI_FindCampfire_Params {
		TEnumAsByte<E_Ownership> Location;			//Offset: 0 | ElementSize: 1
		bool IgnoreOwnership;			//Offset: 1 | ElementSize: 1
		struct FVector Destination;			//Offset: 4 | ElementSize: 12
		bool IsCampfire;			//Offset: 16 | ElementSize: 1
	};
	AAIC_NPC_C_AI_FindCampfire_Params params;
	params.Location = Location;
	params.IgnoreOwnership = IgnoreOwnership;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (IsCampfire != nullptr)
		*IsCampfire = params.IsCampfire;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_SetPath
// Flags: Public, BlueprintCallable, BlueprintEvent
// Params:
// Name: CheckDistance	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Distance	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Destination	Type: struct FVector	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_SetPath(bool CheckDistance, float Distance, struct FVector Destination) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_SetPath");

	struct AAIC_NPC_C_AI_SetPath_Params {
		bool CheckDistance;			//Offset: 0 | ElementSize: 1
		float Distance;			//Offset: 4 | ElementSize: 4
		struct FVector Destination;			//Offset: 8 | ElementSize: 12
	};
	AAIC_NPC_C_AI_SetPath_Params params;
	params.CheckDistance = CheckDistance;
	params.Distance = Distance;
	params.Destination = Destination;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetCustomNPC_DTHandler
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: CustomNPC_DTHandler	Type: struct FDataTableRowHandle	Flags: Parm, OutParm, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetCustomNPC_DTHandler(struct FDataTableRowHandle* CustomNPC_DTHandler) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetCustomNPC_DTHandler");

	struct AAIC_NPC_C_AI_GetCustomNPC_DTHandler_Params {
		struct FDataTableRowHandle CustomNPC_DTHandler;			//Offset: 0 | ElementSize: 16
	};
	AAIC_NPC_C_AI_GetCustomNPC_DTHandler_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CustomNPC_DTHandler != nullptr)
		*CustomNPC_DTHandler = params.CustomNPC_DTHandler;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_FindOutsidePoint
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: OutsidePoint	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_FindOutsidePoint(struct FVector* OutsidePoint) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FindOutsidePoint");

	struct AAIC_NPC_C_AI_FindOutsidePoint_Params {
		struct FVector OutsidePoint;			//Offset: 0 | ElementSize: 12
	};
	AAIC_NPC_C_AI_FindOutsidePoint_Params params;

	UObject::ProcessEvent(fn, &params);
	if (OutsidePoint != nullptr)
		*OutsidePoint = params.OutsidePoint;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetTalkingCharacter
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: TalkingCharacter	Type: class AActor*	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetTalkingCharacter(bool* Success, class AActor** TalkingCharacter) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetTalkingCharacter");

	struct AAIC_NPC_C_AI_GetTalkingCharacter_Params {
		bool Success;			//Offset: 0 | ElementSize: 1
		class AActor* TalkingCharacter;			//Offset: 8 | ElementSize: 8
	};
	AAIC_NPC_C_AI_GetTalkingCharacter_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
	if (TalkingCharacter != nullptr)
		*TalkingCharacter = params.TalkingCharacter;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_CheckIsPlayerPartner
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsPlayerPartner	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_CheckIsPlayerPartner(bool* IsPlayerPartner) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_CheckIsPlayerPartner");

	struct AAIC_NPC_C_AI_CheckIsPlayerPartner_Params {
		bool IsPlayerPartner;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_CheckIsPlayerPartner_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsPlayerPartner != nullptr)
		*IsPlayerPartner = params.IsPlayerPartner;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_TeleportToHouseOrWorkplace
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: ToHouse	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_TeleportToHouseOrWorkplace(bool ToHouse, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_TeleportToHouseOrWorkplace");

	struct AAIC_NPC_C_AI_TeleportToHouseOrWorkplace_Params {
		bool ToHouse;			//Offset: 0 | ElementSize: 1
		bool Success;			//Offset: 1 | ElementSize: 1
	};
	AAIC_NPC_C_AI_TeleportToHouseOrWorkplace_Params params;
	params.ToHouse = ToHouse;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetTimeOfDay
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: TimeOfDay	Type: TEnumAsByte<E_TimeOfDay>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetTimeOfDay(TEnumAsByte<E_TimeOfDay>* TimeOfDay) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetTimeOfDay");

	struct AAIC_NPC_C_AI_GetTimeOfDay_Params {
		TEnumAsByte<E_TimeOfDay> TimeOfDay;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_GetTimeOfDay_Params params;

	UObject::ProcessEvent(fn, &params);
	if (TimeOfDay != nullptr)
		*TimeOfDay = params.TimeOfDay;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_CheckCanMove
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CanMove	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_CheckCanMove(bool* CanMove) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_CheckCanMove");

	struct AAIC_NPC_C_AI_CheckCanMove_Params {
		bool CanMove;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_CheckCanMove_Params params;

	UObject::ProcessEvent(fn, &params);
	if (CanMove != nullptr)
		*CanMove = params.CanMove;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_FindApprenticeSlot
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: ApprenticeSlot	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_FindApprenticeSlot(struct FVector* Destination, bool* ApprenticeSlot) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FindApprenticeSlot");

	struct AAIC_NPC_C_AI_FindApprenticeSlot_Params {
		struct FVector Destination;			//Offset: 0 | ElementSize: 12
		bool ApprenticeSlot;			//Offset: 12 | ElementSize: 1
	};
	AAIC_NPC_C_AI_FindApprenticeSlot_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Destination != nullptr)
		*Destination = params.Destination;
	if (ApprenticeSlot != nullptr)
		*ApprenticeSlot = params.ApprenticeSlot;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetBreakAnimType
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: BreakAnimType	Type: TEnumAsByte<E_AnimBreakType>	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetBreakAnimType(TEnumAsByte<E_AnimBreakType>* BreakAnimType) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetBreakAnimType");

	struct AAIC_NPC_C_AI_GetBreakAnimType_Params {
		TEnumAsByte<E_AnimBreakType> BreakAnimType;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_GetBreakAnimType_Params params;

	UObject::ProcessEvent(fn, &params);
	if (BreakAnimType != nullptr)
		*BreakAnimType = params.BreakAnimType;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetHasInfant
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: HasInfant	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetHasInfant(bool* HasInfant) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetHasInfant");

	struct AAIC_NPC_C_AI_GetHasInfant_Params {
		bool HasInfant;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_GetHasInfant_Params params;

	UObject::ProcessEvent(fn, &params);
	if (HasInfant != nullptr)
		*HasInfant = params.HasInfant;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetToys
// Flags: Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: Toys	Type: TArray<struct FName>	Flags: Parm, OutParm
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetToys(TArray<struct FName>* Toys) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetToys");

	struct AAIC_NPC_C_AI_GetToys_Params {
		TArray<struct FName> Toys;			//Offset: 0 | ElementSize: 16
	};
	AAIC_NPC_C_AI_GetToys_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Toys != nullptr)
		*Toys = params.Toys;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_CheckCanTalk
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: CheckResourceState	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: CanTalk	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_CheckCanTalk(bool CheckResourceState, bool* CanTalk) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_CheckCanTalk");

	struct AAIC_NPC_C_AI_CheckCanTalk_Params {
		bool CheckResourceState;			//Offset: 0 | ElementSize: 1
		bool CanTalk;			//Offset: 1 | ElementSize: 1
	};
	AAIC_NPC_C_AI_CheckCanTalk_Params params;
	params.CheckResourceState = CheckResourceState;

	UObject::ProcessEvent(fn, &params);
	if (CanTalk != nullptr)
		*CanTalk = params.CanTalk;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GetRotationManaged
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: isRotationManaged	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GetRotationManaged(bool* isRotationManaged) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GetRotationManaged");

	struct AAIC_NPC_C_AI_GetRotationManaged_Params {
		bool isRotationManaged;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_GetRotationManaged_Params params;

	UObject::ProcessEvent(fn, &params);
	if (isRotationManaged != nullptr)
		*isRotationManaged = params.isRotationManaged;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_CheckIsInGoToCenterTask
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_CheckIsInGoToCenterTask(bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_CheckIsInGoToCenterTask");

	struct AAIC_NPC_C_AI_CheckIsInGoToCenterTask_Params {
		bool Success;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_CheckIsInGoToCenterTask_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_ChangeSex
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: TargetSex	Type: TEnumAsByte<E_Sex>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_ChangeSex(TEnumAsByte<E_Sex> TargetSex, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_ChangeSex");

	struct AAIC_NPC_C_AI_ChangeSex_Params {
		TEnumAsByte<E_Sex> TargetSex;			//Offset: 0 | ElementSize: 1
		bool Success;			//Offset: 1 | ElementSize: 1
	};
	AAIC_NPC_C_AI_ChangeSex_Params params;
	params.TargetSex = TargetSex;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_ChangeHeiressToHeir
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_ChangeHeiressToHeir(bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_ChangeHeiressToHeir");

	struct AAIC_NPC_C_AI_ChangeHeiressToHeir_Params {
		bool Success;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_ChangeHeiressToHeir_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_CheckIsWorkHours
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_CheckIsWorkHours(bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_CheckIsWorkHours");

	struct AAIC_NPC_C_AI_CheckIsWorkHours_Params {
		bool Success;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_CheckIsWorkHours_Params params;

	UObject::ProcessEvent(fn, &params);
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_CheckIsField
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsField	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_CheckIsField(bool* IsField) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_CheckIsField");

	struct AAIC_NPC_C_AI_CheckIsField_Params {
		bool IsField;			//Offset: 0 | ElementSize: 1
	};
	AAIC_NPC_C_AI_CheckIsField_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsField != nullptr)
		*IsField = params.IsField;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_GoToTeleport
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: OnSuccess	Type: bool	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Location	Type: struct FVector	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: PathPoints	Type: TArray<struct FVector>	Flags: BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm
// Name: Success	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_C::AI_GoToTeleport(bool OnSuccess, struct FVector Location, TArray<struct FVector>* PathPoints, bool* Success) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_GoToTeleport");

	struct AAIC_NPC_C_AI_GoToTeleport_Params {
		bool OnSuccess;			//Offset: 0 | ElementSize: 1
		struct FVector Location;			//Offset: 4 | ElementSize: 12
		TArray<struct FVector> PathPoints;			//Offset: 16 | ElementSize: 16
		bool Success;			//Offset: 32 | ElementSize: 1
	};
	AAIC_NPC_C_AI_GoToTeleport_Params params;
	params.OnSuccess = OnSuccess;
	params.Location = Location;

	UObject::ProcessEvent(fn, &params);
	if (PathPoints != nullptr)
		*PathPoints = params.PathPoints;
	if (Success != nullptr)
		*Success = params.Success;
}

/////////////////////////////////////////////
// Function AIC_NPC.AIC_NPC_C.AI_FindPOISpawnPoint
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: IsSpawnPoint	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor
// Name: Destination	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_C::AI_FindPOISpawnPoint(bool* IsSpawnPoint, struct FVector* Destination) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC.AIC_NPC_C.AI_FindPOISpawnPoint");

	struct AAIC_NPC_C_AI_FindPOISpawnPoint_Params {
		bool IsSpawnPoint;			//Offset: 0 | ElementSize: 1
		struct FVector Destination;			//Offset: 4 | ElementSize: 12
	};
	AAIC_NPC_C_AI_FindPOISpawnPoint_Params params;

	UObject::ProcessEvent(fn, &params);
	if (IsSpawnPoint != nullptr)
		*IsSpawnPoint = params.IsSpawnPoint;
	if (Destination != nullptr)
		*Destination = params.Destination;
}

/////////////////////////////////////////////
// ComponentDelegateBinding AIC_NPC.AIC_NPC_C.ComponentDelegateBinding_1
// Flags: Native, MulticastDelegate, Public, Protected, NetClient, DLLImport, BlueprintPure, Const
// Params:
/////////////////////////////////////////////
void AAIC_NPC_C::ComponentDelegateBinding_1()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("ComponentDelegateBinding AIC_NPC.AIC_NPC_C.ComponentDelegateBinding_1");

	struct AAIC_NPC_C_ComponentDelegateBinding_1_Params {
	};
	AAIC_NPC_C_ComponentDelegateBinding_1_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}