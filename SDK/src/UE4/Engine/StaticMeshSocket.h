#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class Engine.StaticMeshSocket
// Super: Class CoreUObject.Object
// Size: 104
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UStaticMeshSocket : public UObject {
public:
#pragma region Members
	//struct FName	SocketName;		//Offset: 40	Size: 8	Flags: BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FName M_GetSocketName() const;
	struct FName* M_PtrGetSocketName();
	void M_SetSocketName(const struct FName& value);

	//struct FVector	RelativeLocation;		//Offset: 48	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector M_GetRelativeLocation() const;
	struct FVector* M_PtrGetRelativeLocation();
	void M_SetRelativeLocation(const struct FVector& value);

	//struct FRotator	RelativeRotation;		//Offset: 60	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FRotator M_GetRelativeRotation() const;
	struct FRotator* M_PtrGetRelativeRotation();
	void M_SetRelativeRotation(const struct FRotator& value);

	//struct FVector	RelativeScale;		//Offset: 72	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector M_GetRelativeScale() const;
	struct FVector* M_PtrGetRelativeScale();
	void M_SetRelativeScale(const struct FVector& value);

	//struct FString	Tag;		//Offset: 88	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FString M_GetTag() const;
	struct FString* M_PtrGetTag();
	void M_SetTag(const struct FString& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshSocket");
		return ptr;
	}

#pragma region Functions
#pragma endregion
};
};