#pragma once
#include "Structs.h"
#include "Engine/GameInstanceSubsystem.h"
/////////////////////////////////////////////
// Class Medieval_Dynasty.PerceptionSubsystem
// Super: Class Engine.GameInstanceSubsystem
// Size: 80
// Size inherited: 48
/////////////////////////////////////////////
namespace UE4 {
class UPerceptionSubsystem : public UGameInstanceSubsystem {
public:
#pragma region Members
#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.PerceptionSubsystem");
		return ptr;
	}

#pragma region Functions
	TArray<class UPerceptionComponent*> GetPerceptionComponents()/* const*/;

	TArray<class UPerceptionStimuliSourceComponent*> GetStimuliSourceComponents()/* const*/;

	void RegisterPerceptionComponent(class UPerceptionComponent* PerceptionComponent);

	void RegisterStimuliSourceComponent(class UPerceptionStimuliSourceComponent* stimuliSourceComponent);

	void UnregisterPerceptionComponent(class UPerceptionComponent* PerceptionComponent);

	void UnregisterStimuliSourceComponent(class UPerceptionStimuliSourceComponent* stimuliSourceComponent);

#pragma endregion
};
};