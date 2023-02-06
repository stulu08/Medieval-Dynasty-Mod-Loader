#pragma once
#include "Structs.h"
#include "Engine/GameStateBase.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass GS_GameState.GS_GameState_C
// Super: Class Engine.GameStateBase
// Size: 640
// Size inherited: 624
/////////////////////////////////////////////
namespace UE4 {
class AGS_GameState_C : public AGameStateBase {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 624	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//class USceneComponent*	DefaultSceneRoot;		//Offset: 632	Size: 8	Flags: BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
	class USceneComponent* M_GetDefaultSceneRoot() const;
	class USceneComponent** M_PtrGetDefaultSceneRoot();
	void M_SetDefaultSceneRoot(const class USceneComponent*& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GS_GameState.GS_GameState_C");
		return ptr;
	}

#pragma region Functions
	void ExecuteUbergraph_GS_GameState(int32_t EntryPoint);

	void Replicate_RemoveInstance(class UInstancedStaticMeshComponent* Target, int32_t InputPin, struct FTransform InputPin1);

	void RemoveFoliageInstance(class UInstancedStaticMeshComponent* Target, int32_t InputPin, struct FTransform InputPin1);

#pragma endregion
};
};