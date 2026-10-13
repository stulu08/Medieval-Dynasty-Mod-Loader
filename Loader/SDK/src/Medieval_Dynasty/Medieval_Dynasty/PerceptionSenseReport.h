#pragma once
#include "Structs.h"
#include "Medieval_Dynasty/PerceptionSense.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.PerceptionSenseReport
// Super: Class Medieval_Dynasty.PerceptionSense
// Size: 176
// Size inherited: 168
/////////////////////////////////////////////
namespace UE4 {
class UPerceptionSenseReport : public UPerceptionSense {
public:
#pragma region Members
	//float	Range;		//Offset: 168	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	float M_GetRange() const;
	float* M_PtrGetRange();
	void M_SetRange(const float& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.PerceptionSenseReport");
		return ptr;
	}

#pragma region Functions
	void OnActorSensed(class AActor* sensedActor, class UPerceptionSense* sensedBySenseClass, const struct FPerceptionSenseStimulationData& senseStimulationData);

#pragma endregion
};
};