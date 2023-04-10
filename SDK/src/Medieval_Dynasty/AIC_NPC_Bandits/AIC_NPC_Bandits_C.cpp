#include "../SDK.h"
#include "AIC_NPC_Bandits_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame AAIC_NPC_Bandits_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 872);
}
struct FPointerToUberGraphFrame* AAIC_NPC_Bandits_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 872);
}
void AAIC_NPC_Bandits_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 872, value);
}
// Member Getter and Setter of NewTarget
// Declaration: class AActor* NewTarget
class AActor* AAIC_NPC_Bandits_C::M_GetNewTarget() const {
	return Read<class AActor*>((byte*)this + 880);
}
class AActor** AAIC_NPC_Bandits_C::M_PtrGetNewTarget() {
	return reinterpret_cast<class AActor**>((byte*)this + 880);
}
void AAIC_NPC_Bandits_C::M_SetNewTarget(const class AActor*& value) {
	Write((byte*)this + 880, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function AIC_NPC_Bandits.AIC_NPC_Bandits_C.ExecuteUbergraph_AIC_NPC_Bandits
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_Bandits_C::ExecuteUbergraph_AIC_NPC_Bandits(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC_Bandits.AIC_NPC_Bandits_C.ExecuteUbergraph_AIC_NPC_Bandits");

	struct AAIC_NPC_Bandits_C_ExecuteUbergraph_AIC_NPC_Bandits_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	AAIC_NPC_Bandits_C_ExecuteUbergraph_AIC_NPC_Bandits_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC_Bandits.AIC_NPC_Bandits_C.EndFocus
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void AAIC_NPC_Bandits_C::EndFocus() {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC_Bandits.AIC_NPC_Bandits_C.EndFocus");

	struct AAIC_NPC_Bandits_C_EndFocus_Params {
	};
	AAIC_NPC_Bandits_C_EndFocus_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC_Bandits.AIC_NPC_Bandits_C.BndEvt__AIC_NPC_Bandit_AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature
// Flags: BlueprintEvent
// Params:
// Name: Actor	Type: class AActor*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Stimulus	Type: struct FAIStimulus	Flags: BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor
/////////////////////////////////////////////
void AAIC_NPC_Bandits_C::BndEvt__AIC_NPC_Bandit_AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, struct FAIStimulus Stimulus) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC_Bandits.AIC_NPC_Bandits_C.BndEvt__AIC_NPC_Bandit_AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature");

	struct AAIC_NPC_Bandits_C_BndEvt__AIC_NPC_Bandit_AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature_Params {
		class AActor* Actor;			//Offset: 0 | ElementSize: 8
		struct FAIStimulus Stimulus;			//Offset: 8 | ElementSize: 60
	};
	AAIC_NPC_Bandits_C_BndEvt__AIC_NPC_Bandit_AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature_Params params;
	params.Actor = Actor;
	params.Stimulus = Stimulus;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// ComponentDelegateBinding AIC_NPC_Bandits.AIC_NPC_Bandits_C.ComponentDelegateBinding_1
// Flags: Final, Net, Private, Protected, HasOutParms
// Params:
/////////////////////////////////////////////
void AAIC_NPC_Bandits_C::ComponentDelegateBinding_1() {
	static auto fn = UObject::FindObject<UFunction>("ComponentDelegateBinding AIC_NPC_Bandits.AIC_NPC_Bandits_C.ComponentDelegateBinding_1");

	struct AAIC_NPC_Bandits_C_ComponentDelegateBinding_1_Params {
	};
	AAIC_NPC_Bandits_C_ComponentDelegateBinding_1_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// InheritableComponentHandler AIC_NPC_Bandits.AIC_NPC_Bandits_C.InheritableComponentHandler
// Flags: Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic
// Params:
/////////////////////////////////////////////
void AAIC_NPC_Bandits_C::InheritableComponentHandler() {
	static auto fn = UObject::FindObject<UFunction>("InheritableComponentHandler AIC_NPC_Bandits.AIC_NPC_Bandits_C.InheritableComponentHandler");

	struct AAIC_NPC_Bandits_C_InheritableComponentHandler_Params {
	};
	AAIC_NPC_Bandits_C_InheritableComponentHandler_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC_Bandits.AIC_NPC_Bandits_C.AI Start Combat
// Flags: Public, HasOutParms, BlueprintCallable, BlueprintEvent
// Params:
// Name: Actor	Type: class AActor*	Flags: ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_Bandits_C::AI_Start_Combat(class AActor*& Actor) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC_Bandits.AIC_NPC_Bandits_C.AI Start Combat");

	struct AAIC_NPC_Bandits_C_AI_Start_Combat_Params {
		class AActor* Actor;			//Offset: 0 | ElementSize: 8
	};
	AAIC_NPC_Bandits_C_AI_Start_Combat_Params params;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function AIC_NPC_Bandits.AIC_NPC_Bandits_C.SetSceneName
// Flags: Public, HasDefaults, BlueprintCallable, BlueprintEvent
// Params:
// Name: NPC	Type: class ABP_NPC_C*	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void AAIC_NPC_Bandits_C::SetSceneName(class ABP_NPC_C* NPC) {
	static auto fn = UObject::FindObject<UFunction>("Function AIC_NPC_Bandits.AIC_NPC_Bandits_C.SetSceneName");

	struct AAIC_NPC_Bandits_C_SetSceneName_Params {
		class ABP_NPC_C* NPC;			//Offset: 0 | ElementSize: 8
	};
	AAIC_NPC_Bandits_C_SetSceneName_Params params;
	params.NPC = NPC;

	UObject::ProcessEvent(fn, &params);
}

#pragma endregion
}