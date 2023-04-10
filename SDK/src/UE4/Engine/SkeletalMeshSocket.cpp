#include "../SDK.h"
#include "SkeletalMeshSocket.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of SocketName
// Declaration: struct FName SocketName
struct FName USkeletalMeshSocket::M_GetSocketName() const {
	return Read<struct FName>((byte*)this + 40);
}
struct FName* USkeletalMeshSocket::M_PtrGetSocketName() {
	return reinterpret_cast<struct FName*>((byte*)this + 40);
}
void USkeletalMeshSocket::M_SetSocketName(const struct FName& value) {
	Write((byte*)this + 40, value);
}
// Member Getter and Setter of BoneName
// Declaration: struct FName BoneName
struct FName USkeletalMeshSocket::M_GetBoneName() const {
	return Read<struct FName>((byte*)this + 48);
}
struct FName* USkeletalMeshSocket::M_PtrGetBoneName() {
	return reinterpret_cast<struct FName*>((byte*)this + 48);
}
void USkeletalMeshSocket::M_SetBoneName(const struct FName& value) {
	Write((byte*)this + 48, value);
}
// Member Getter and Setter of RelativeLocation
// Declaration: struct FVector RelativeLocation
struct FVector USkeletalMeshSocket::M_GetRelativeLocation() const {
	return Read<struct FVector>((byte*)this + 56);
}
struct FVector* USkeletalMeshSocket::M_PtrGetRelativeLocation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 56);
}
void USkeletalMeshSocket::M_SetRelativeLocation(const struct FVector& value) {
	Write((byte*)this + 56, value);
}
// Member Getter and Setter of RelativeRotation
// Declaration: struct FRotator RelativeRotation
struct FRotator USkeletalMeshSocket::M_GetRelativeRotation() const {
	return Read<struct FRotator>((byte*)this + 68);
}
struct FRotator* USkeletalMeshSocket::M_PtrGetRelativeRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 68);
}
void USkeletalMeshSocket::M_SetRelativeRotation(const struct FRotator& value) {
	Write((byte*)this + 68, value);
}
// Member Getter and Setter of RelativeScale
// Declaration: struct FVector RelativeScale
struct FVector USkeletalMeshSocket::M_GetRelativeScale() const {
	return Read<struct FVector>((byte*)this + 80);
}
struct FVector* USkeletalMeshSocket::M_PtrGetRelativeScale() {
	return reinterpret_cast<struct FVector*>((byte*)this + 80);
}
void USkeletalMeshSocket::M_SetRelativeScale(const struct FVector& value) {
	Write((byte*)this + 80, value);
}
// Member Getter and Setter of bForceAlwaysAnimated
// Declaration: bool bForceAlwaysAnimated
bool USkeletalMeshSocket::M_GetbForceAlwaysAnimated() const {
	return Read<bool>((byte*)this + 92);
}
bool* USkeletalMeshSocket::M_PtrGetbForceAlwaysAnimated() {
	return reinterpret_cast<bool*>((byte*)this + 92);
}
void USkeletalMeshSocket::M_SetbForceAlwaysAnimated(const bool& value) {
	Write((byte*)this + 92, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Engine.SkeletalMeshSocket.GetSocketLocation
// Flags: Final, RequiredAPI, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: SkelComp	Type: class USkeletalMeshComponent*	Flags: ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector USkeletalMeshSocket::GetSocketLocation(class USkeletalMeshComponent* SkelComp)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshSocket.GetSocketLocation");

	struct USkeletalMeshSocket_GetSocketLocation_Params {
		class USkeletalMeshComponent* SkelComp;			//Offset: 0 | ElementSize: 8
		struct FVector ReturnValue;			//Offset: 8 | ElementSize: 12
	};
	USkeletalMeshSocket_GetSocketLocation_Params params;
	params.SkelComp = SkelComp;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Engine.SkeletalMeshSocket.InitializeSocketFromLocation
// Flags: Final, RequiredAPI, Native, Public, HasDefaults, BlueprintCallable
// Params:
// Name: SkelComp	Type: class USkeletalMeshComponent*	Flags: ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: WorldLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: WorldNormal	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void USkeletalMeshSocket::InitializeSocketFromLocation(class USkeletalMeshComponent* SkelComp, struct FVector WorldLocation, struct FVector WorldNormal) {
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SkeletalMeshSocket.InitializeSocketFromLocation");

	struct USkeletalMeshSocket_InitializeSocketFromLocation_Params {
		class USkeletalMeshComponent* SkelComp;			//Offset: 0 | ElementSize: 8
		struct FVector WorldLocation;			//Offset: 8 | ElementSize: 12
		struct FVector WorldNormal;			//Offset: 20 | ElementSize: 12
	};
	USkeletalMeshSocket_InitializeSocketFromLocation_Params params;
	params.SkelComp = SkelComp;
	params.WorldLocation = WorldLocation;
	params.WorldNormal = WorldNormal;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}