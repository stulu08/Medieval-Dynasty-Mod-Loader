#pragma once
#include "Structs.h"
#include "Engine/Actor.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.RepActor
// Super: Class Engine.Actor
// Size: 560
// Size inherited: 544
/////////////////////////////////////////////
namespace UE4 {
class ARepActor : public AActor {
public:
#pragma region Members
	//bool	bUseCustomMovementGather;		//Offset: 544	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbUseCustomMovementGather() const;
	bool* M_PtrGetbUseCustomMovementGather();
	void M_SetbUseCustomMovementGather(const bool& value);

	//class UInterpComp*	InterpolationComponent;		//Offset: 552	Size: 8	Flags: Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UInterpComp* M_GetInterpolationComponent() const;
	class UInterpComp** M_PtrGetInterpolationComponent();
	void M_SetInterpolationComponent(const class UInterpComp*& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.RepActor");
		return ptr;
	}

#pragma region Functions
	void AfterAttachmentReplication();

	void BeforeAttachmentReplication();

#pragma endregion
};
};