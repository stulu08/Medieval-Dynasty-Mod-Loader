#pragma once
#include "Structs.h"
#include "AIC_NPC/AIC_NPC_C.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass AIC_NPC_Bandits.AIC_NPC_Bandits_C
// Super: BlueprintGeneratedClass AIC_NPC.AIC_NPC_C
// Size: 888
// Size inherited: 868
/////////////////////////////////////////////
namespace UE4 {
class AAIC_NPC_Bandits_C : public AAIC_NPC_C {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 872	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//class AActor*	NewTarget;		//Offset: 880	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class AActor* M_GetNewTarget() const;
	class AActor** M_PtrGetNewTarget();
	void M_SetNewTarget(const class AActor*& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AIC_NPC_Bandits.AIC_NPC_Bandits_C");
		return ptr;
	}

#pragma region Functions
	void ExecuteUbergraph_AIC_NPC_Bandits(int32_t EntryPoint);

	void EndFocus();

	void BndEvt__AIC_NPC_Bandit_AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, struct FAIStimulus Stimulus);

	TAssetPtr<class FNone_1447122241> ComponentDelegateBinding_1()/* const*/;

	void AI_Start_Combat(class AActor* Actor);

	void SetSceneName(class ABP_NPC_C* NPC);

#pragma endregion
};
};