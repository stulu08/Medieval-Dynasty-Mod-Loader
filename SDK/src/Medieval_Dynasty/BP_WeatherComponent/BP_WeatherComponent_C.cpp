#include "../SDK.h"
#include "BP_WeatherComponent_C.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of UberGraphFrame
// Declaration: struct FPointerToUberGraphFrame UberGraphFrame
struct FPointerToUberGraphFrame UBP_WeatherComponent_C::M_GetUberGraphFrame() const {
	return Read<struct FPointerToUberGraphFrame>((byte*)this + 176);
}
struct FPointerToUberGraphFrame* UBP_WeatherComponent_C::M_PtrGetUberGraphFrame() {
	return reinterpret_cast<struct FPointerToUberGraphFrame*>((byte*)this + 176);
}
void UBP_WeatherComponent_C::M_SetUberGraphFrame(const struct FPointerToUberGraphFrame& value) {
	Write((byte*)this + 176, value);
}
// Member Getter and Setter of PrecipitationFX
// Declaration: class UParticleSystemComponent* PrecipitationFX
class UParticleSystemComponent* UBP_WeatherComponent_C::M_GetPrecipitationFX() const {
	return Read<class UParticleSystemComponent*>((byte*)this + 184);
}
class UParticleSystemComponent** UBP_WeatherComponent_C::M_PtrGetPrecipitationFX() {
	return reinterpret_cast<class UParticleSystemComponent**>((byte*)this + 184);
}
void UBP_WeatherComponent_C::M_SetPrecipitationFX(const class UParticleSystemComponent*& value) {
	Write((byte*)this + 184, value);
}
// Member Getter and Setter of PrecipitationParticleSystems
// Declaration: TArray<class UParticleSystem*> PrecipitationParticleSystems
TArray<class UParticleSystem*> UBP_WeatherComponent_C::M_GetPrecipitationParticleSystems() const {
	return Read<TArray<class UParticleSystem*>>((byte*)this + 192);
}
TArray<class UParticleSystem*>* UBP_WeatherComponent_C::M_PtrGetPrecipitationParticleSystems() {
	return reinterpret_cast<TArray<class UParticleSystem*>*>((byte*)this + 192);
}
void UBP_WeatherComponent_C::M_SetPrecipitationParticleSystems(const TArray<class UParticleSystem*>& value) {
	Write((byte*)this + 192, value);
}
// Member Getter and Setter of Root
// Declaration: class UCapsuleComponent* Root
class UCapsuleComponent* UBP_WeatherComponent_C::M_GetRoot() const {
	return Read<class UCapsuleComponent*>((byte*)this + 208);
}
class UCapsuleComponent** UBP_WeatherComponent_C::M_PtrGetRoot() {
	return reinterpret_cast<class UCapsuleComponent**>((byte*)this + 208);
}
void UBP_WeatherComponent_C::M_SetRoot(const class UCapsuleComponent*& value) {
	Write((byte*)this + 208, value);
}
// Member Getter and Setter of CurrentSeason
// Declaration: int32_t CurrentSeason
int32_t UBP_WeatherComponent_C::M_GetCurrentSeason() const {
	return Read<int32_t>((byte*)this + 216);
}
int32_t* UBP_WeatherComponent_C::M_PtrGetCurrentSeason() {
	return reinterpret_cast<int32_t*>((byte*)this + 216);
}
void UBP_WeatherComponent_C::M_SetCurrentSeason(const int32_t& value) {
	Write((byte*)this + 216, value);
}
// Member Getter and Setter of Cave
// Declaration: bool Cave
bool UBP_WeatherComponent_C::M_GetCave() const {
	return Read<bool>((byte*)this + 220);
}
bool* UBP_WeatherComponent_C::M_PtrGetCave() {
	return reinterpret_cast<bool*>((byte*)this + 220);
}
void UBP_WeatherComponent_C::M_SetCave(const bool& value) {
	Write((byte*)this + 220, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function BP_WeatherComponent.BP_WeatherComponent_C.ExecuteUbergraph_BP_WeatherComponent
// Flags: Final, HasDefaults
// Params:
// Name: EntryPoint	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_WeatherComponent_C::ExecuteUbergraph_BP_WeatherComponent(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherComponent.BP_WeatherComponent_C.ExecuteUbergraph_BP_WeatherComponent");

	struct UBP_WeatherComponent_C_ExecuteUbergraph_BP_WeatherComponent_Params {
		int32_t EntryPoint;			//Offset: 0 | ElementSize: 4
	};
	UBP_WeatherComponent_C_ExecuteUbergraph_BP_WeatherComponent_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeatherComponent.BP_WeatherComponent_C.ReceiveBeginPlay
// Flags: Event, Public, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_WeatherComponent_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherComponent.BP_WeatherComponent_C.ReceiveBeginPlay");

	struct UBP_WeatherComponent_C_ReceiveBeginPlay_Params {
	};
	UBP_WeatherComponent_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeatherComponent.BP_WeatherComponent_C.Stop
// Flags: BlueprintCallable, BlueprintEvent
// Params:
/////////////////////////////////////////////
void UBP_WeatherComponent_C::Stop() {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherComponent.BP_WeatherComponent_C.Stop");

	struct UBP_WeatherComponent_C_Stop_Params {
	};
	UBP_WeatherComponent_C_Stop_Params params;

	UObject::ProcessEvent(fn, &params);
}

/////////////////////////////////////////////
// Function BP_WeatherComponent.BP_WeatherComponent_C.Start
// Flags: BlueprintCallable, BlueprintEvent
// Params:
// Name: Season	Type: int32_t	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
// Name: Intensity	Type: float	Flags: BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
/////////////////////////////////////////////
void UBP_WeatherComponent_C::Start(int32_t Season, float Intensity) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherComponent.BP_WeatherComponent_C.Start");

	struct UBP_WeatherComponent_C_Start_Params {
		int32_t Season;			//Offset: 0 | ElementSize: 4
		float Intensity;			//Offset: 4 | ElementSize: 4
	};
	UBP_WeatherComponent_C_Start_Params params;
	params.Season = Season;
	params.Intensity = Intensity;

	UObject::ProcessEvent(fn, &params);
}

#pragma endregion
}