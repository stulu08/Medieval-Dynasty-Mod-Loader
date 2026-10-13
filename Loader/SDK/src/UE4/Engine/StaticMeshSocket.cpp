#include "../SDK.h"
#include "StaticMeshSocket.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of SocketName
// Declaration: struct FName SocketName
struct FName UStaticMeshSocket::M_GetSocketName() const {
	return Read<struct FName>((byte*)this + 40);
}
struct FName* UStaticMeshSocket::M_PtrGetSocketName() {
	return reinterpret_cast<struct FName*>((byte*)this + 40);
}
void UStaticMeshSocket::M_SetSocketName(const struct FName& value) {
	Write((byte*)this + 40, value);
}
// Member Getter and Setter of RelativeLocation
// Declaration: struct FVector RelativeLocation
struct FVector UStaticMeshSocket::M_GetRelativeLocation() const {
	return Read<struct FVector>((byte*)this + 48);
}
struct FVector* UStaticMeshSocket::M_PtrGetRelativeLocation() {
	return reinterpret_cast<struct FVector*>((byte*)this + 48);
}
void UStaticMeshSocket::M_SetRelativeLocation(const struct FVector& value) {
	Write((byte*)this + 48, value);
}
// Member Getter and Setter of RelativeRotation
// Declaration: struct FRotator RelativeRotation
struct FRotator UStaticMeshSocket::M_GetRelativeRotation() const {
	return Read<struct FRotator>((byte*)this + 60);
}
struct FRotator* UStaticMeshSocket::M_PtrGetRelativeRotation() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 60);
}
void UStaticMeshSocket::M_SetRelativeRotation(const struct FRotator& value) {
	Write((byte*)this + 60, value);
}
// Member Getter and Setter of RelativeScale
// Declaration: struct FVector RelativeScale
struct FVector UStaticMeshSocket::M_GetRelativeScale() const {
	return Read<struct FVector>((byte*)this + 72);
}
struct FVector* UStaticMeshSocket::M_PtrGetRelativeScale() {
	return reinterpret_cast<struct FVector*>((byte*)this + 72);
}
void UStaticMeshSocket::M_SetRelativeScale(const struct FVector& value) {
	Write((byte*)this + 72, value);
}
// Member Getter and Setter of Tag
// Declaration: struct FString Tag
struct FString UStaticMeshSocket::M_GetTag() const {
	return Read<struct FString>((byte*)this + 88);
}
struct FString* UStaticMeshSocket::M_PtrGetTag() {
	return reinterpret_cast<struct FString*>((byte*)this + 88);
}
void UStaticMeshSocket::M_SetTag(const struct FString& value) {
	Write((byte*)this + 88, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}