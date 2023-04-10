#pragma once
#include "Structs.h"
#include "Engine/ActorComponent.h"
/////////////////////////////////////////////
// BlueprintGeneratedClass BP_WeatherComponent.BP_WeatherComponent_C
// Super: Class Engine.ActorComponent
// Size: 221
// Size inherited: 176
/////////////////////////////////////////////
namespace UE4 {
class UBP_WeatherComponent_C : public UActorComponent {
public:
#pragma region Members
	//struct FPointerToUberGraphFrame	UberGraphFrame;		//Offset: 176	Size: 8	Flags: ZeroConstructor, Transient, DuplicateTransient
	struct FPointerToUberGraphFrame M_GetUberGraphFrame() const;
	struct FPointerToUberGraphFrame* M_PtrGetUberGraphFrame();
	void M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value);

	//class UParticleSystemComponent*	PrecipitationFX;		//Offset: 184	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UParticleSystemComponent* M_GetPrecipitationFX() const;
	class UParticleSystemComponent** M_PtrGetPrecipitationFX();
	void M_SetPrecipitationFX(const class UParticleSystemComponent*& value);

	//TArray<class UParticleSystem*>	PrecipitationParticleSystems;		//Offset: 192	Size: 16	Flags: Edit, BlueprintVisible
	TArray<class UParticleSystem*> M_GetPrecipitationParticleSystems() const;
	TArray<class UParticleSystem*>* M_PtrGetPrecipitationParticleSystems();
	void M_SetPrecipitationParticleSystems(const TArray<class UParticleSystem*>& value);

	//class UCapsuleComponent*	Root;		//Offset: 208	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	class UCapsuleComponent* M_GetRoot() const;
	class UCapsuleComponent** M_PtrGetRoot();
	void M_SetRoot(const class UCapsuleComponent*& value);

	//int32_t	CurrentSeason;		//Offset: 216	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	int32_t M_GetCurrentSeason() const;
	int32_t* M_PtrGetCurrentSeason();
	void M_SetCurrentSeason(const int32_t& value);

	//bool	Cave;		//Offset: 220	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	bool M_GetCave() const;
	bool* M_PtrGetCave();
	void M_SetCave(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeatherComponent.BP_WeatherComponent_C");
		return ptr;
	}

#pragma region Functions
	void ExecuteUbergraph_BP_WeatherComponent(int32_t EntryPoint);

	void ReceiveBeginPlay();

	void Stop();

	void Start(int32_t Season, float Intensity);

#pragma endregion
};
};