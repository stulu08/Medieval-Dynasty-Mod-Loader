#pragma once
#include "Structs.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class Engine.SkeletalMeshSocket
// Super: Class CoreUObject.Object
// Size: 96
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class USkeletalMeshSocket : public UObject {
public:
#pragma region Members
	//struct FName	SocketName;		//Offset: 40	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FName M_GetSocketName() const;
	struct FName* M_PtrGetSocketName();
	void M_SetSocketName(const struct FName& value);

	//struct FName	BoneName;		//Offset: 48	Size: 8	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FName M_GetBoneName() const;
	struct FName* M_PtrGetBoneName();
	void M_SetBoneName(const struct FName& value);

	//struct FVector	RelativeLocation;		//Offset: 56	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector M_GetRelativeLocation() const;
	struct FVector* M_PtrGetRelativeLocation();
	void M_SetRelativeLocation(const struct FVector& value);

	//struct FRotator	RelativeRotation;		//Offset: 68	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FRotator M_GetRelativeRotation() const;
	struct FRotator* M_PtrGetRelativeRotation();
	void M_SetRelativeRotation(const struct FRotator& value);

	//struct FVector	RelativeScale;		//Offset: 80	Size: 12	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector M_GetRelativeScale() const;
	struct FVector* M_PtrGetRelativeScale();
	void M_SetRelativeScale(const struct FVector& value);

	//bool	bForceAlwaysAnimated;		//Offset: 92	Size: 1	Flags: Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool M_GetbForceAlwaysAnimated() const;
	bool* M_PtrGetbForceAlwaysAnimated();
	void M_SetbForceAlwaysAnimated(const bool& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshSocket");
		return ptr;
	}

#pragma region Functions
	struct FVector GetSocketLocation(class USkeletalMeshComponent* SkelComp)/* const*/;

	void InitializeSocketFromLocation(class USkeletalMeshComponent* SkelComp, struct FVector WorldLocation, struct FVector WorldNormal);

#pragma endregion
};
};