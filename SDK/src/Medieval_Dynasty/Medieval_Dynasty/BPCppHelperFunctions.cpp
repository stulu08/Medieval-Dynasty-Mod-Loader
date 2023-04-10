#include "../SDK.h"
#include "BPCppHelperFunctions.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.AdjustTeleportLocation
// Flags: Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: TestActor	Type: class AActor*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlaceLocation	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PlaceRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UBPCppHelperFunctions::AdjustTeleportLocation(class AActor* TestActor, struct FVector* PlaceLocation, struct FRotator PlaceRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.AdjustTeleportLocation");

	struct UBPCppHelperFunctions_AdjustTeleportLocation_Params {
		class AActor* TestActor;			//Offset: 0 | ElementSize: 8
		struct FVector PlaceLocation;			//Offset: 8 | ElementSize: 12
		struct FRotator PlaceRotation;			//Offset: 20 | ElementSize: 12
		bool ReturnValue;			//Offset: 32 | ElementSize: 1
	};
	UBPCppHelperFunctions_AdjustTeleportLocation_Params params;
	params.TestActor = TestActor;
	params.PlaceRotation = PlaceRotation;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (PlaceLocation != nullptr)
		*PlaceLocation = params.PlaceLocation;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.AngleBetweenCameraAndActor
// Flags: Final, Native, Static, Private, BlueprintCallable, BlueprintPure
// Params:
// Name: PlayerCameraMan	Type: class APlayerCameraManager*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Actor	Type: class AActor*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UBPCppHelperFunctions::AngleBetweenCameraAndActor(class APlayerCameraManager* PlayerCameraMan, class AActor* Actor) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.AngleBetweenCameraAndActor");

	struct UBPCppHelperFunctions_AngleBetweenCameraAndActor_Params {
		class APlayerCameraManager* PlayerCameraMan;			//Offset: 0 | ElementSize: 8
		class AActor* Actor;			//Offset: 8 | ElementSize: 8
		float ReturnValue;			//Offset: 16 | ElementSize: 4
	};
	UBPCppHelperFunctions_AngleBetweenCameraAndActor_Params params;
	params.PlayerCameraMan = PlayerCameraMan;
	params.Actor = Actor;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.Array_Empty
// Flags: Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: TargetArray	Type: TArray<int32_t>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UBPCppHelperFunctions::Array_Empty(const TArray<int32_t>& TargetArray) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.Array_Empty");

	struct UBPCppHelperFunctions_Array_Empty_Params {
		TArray<int32_t> TargetArray;			//Offset: 0 | ElementSize: 16
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UBPCppHelperFunctions_Array_Empty_Params params;
	params.TargetArray = TargetArray;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.CheckAnotherAppInstance
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: IsEnabled	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::CheckAnotherAppInstance(bool IsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.CheckAnotherAppInstance");

	struct UBPCppHelperFunctions_CheckAnotherAppInstance_Params {
		bool IsEnabled;			//Offset: 0 | ElementSize: 1
	};
	UBPCppHelperFunctions_CheckAnotherAppInstance_Params params;
	params.IsEnabled = IsEnabled;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.CheckIsBuilding
// Flags: Final, Native, Static, Private, HasDefaults, BlueprintCallable
// Params:
// Name: WorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: actorLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: checkLocation	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Destination	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: capsuleRadius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: CapsuleHalfHeight	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FVector	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FVector UBPCppHelperFunctions::CheckIsBuilding(class UObject* WorldContextObject, struct FVector actorLocation, struct FVector checkLocation, struct FVector Destination, float capsuleRadius, float CapsuleHalfHeight) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.CheckIsBuilding");

	struct UBPCppHelperFunctions_CheckIsBuilding_Params {
		class UObject* WorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FVector actorLocation;			//Offset: 8 | ElementSize: 12
		struct FVector checkLocation;			//Offset: 20 | ElementSize: 12
		struct FVector Destination;			//Offset: 32 | ElementSize: 12
		float capsuleRadius;			//Offset: 44 | ElementSize: 4
		float CapsuleHalfHeight;			//Offset: 48 | ElementSize: 4
		struct FVector ReturnValue;			//Offset: 52 | ElementSize: 12
	};
	UBPCppHelperFunctions_CheckIsBuilding_Params params;
	params.WorldContextObject = WorldContextObject;
	params.actorLocation = actorLocation;
	params.checkLocation = checkLocation;
	params.Destination = Destination;
	params.capsuleRadius = capsuleRadius;
	params.CapsuleHalfHeight = CapsuleHalfHeight;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.CopyCurve
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: Source	Type: class UAnimSequence*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Target	Type: class UAnimSequence*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::CopyCurve(class UAnimSequence* Source, class UAnimSequence* Target) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.CopyCurve");

	struct UBPCppHelperFunctions_CopyCurve_Params {
		class UAnimSequence* Source;			//Offset: 0 | ElementSize: 8
		class UAnimSequence* Target;			//Offset: 8 | ElementSize: 8
	};
	UBPCppHelperFunctions_CopyCurve_Params params;
	params.Source = Source;
	params.Target = Target;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.CopyCurves
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: Source	Type: class UAnimSequence*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Target	Type: class UAnimSequence*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: overwriteIfExists	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::CopyCurves(class UAnimSequence* Source, class UAnimSequence* Target, bool overwriteIfExists) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.CopyCurves");

	struct UBPCppHelperFunctions_CopyCurves_Params {
		class UAnimSequence* Source;			//Offset: 0 | ElementSize: 8
		class UAnimSequence* Target;			//Offset: 8 | ElementSize: 8
		bool overwriteIfExists;			//Offset: 16 | ElementSize: 1
	};
	UBPCppHelperFunctions_CopyCurves_Params params;
	params.Source = Source;
	params.Target = Target;
	params.overwriteIfExists = overwriteIfExists;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.CreateMontageCopyWithNewSlot
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: MontageToCopy	Type: class UAnimMontage*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SlotNodeName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SlotIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UAnimMontage*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UAnimMontage* UBPCppHelperFunctions::CreateMontageCopyWithNewSlot(class UAnimMontage* MontageToCopy, struct FName SlotNodeName, int32_t SlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.CreateMontageCopyWithNewSlot");

	struct UBPCppHelperFunctions_CreateMontageCopyWithNewSlot_Params {
		class UAnimMontage* MontageToCopy;			//Offset: 0 | ElementSize: 8
		struct FName SlotNodeName;			//Offset: 8 | ElementSize: 8
		int32_t SlotIndex;			//Offset: 16 | ElementSize: 4
		class UAnimMontage* ReturnValue;			//Offset: 24 | ElementSize: 8
	};
	UBPCppHelperFunctions_CreateMontageCopyWithNewSlot_Params params;
	params.MontageToCopy = MontageToCopy;
	params.SlotNodeName = SlotNodeName;
	params.SlotIndex = SlotIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.FStrToInt64
// Flags: Final, Native, Static, Private, BlueprintCallable, BlueprintPure
// Params:
// Name: String	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int64_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int64_t UBPCppHelperFunctions::FStrToInt64(struct FString String) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.FStrToInt64");

	struct UBPCppHelperFunctions_FStrToInt64_Params {
		struct FString String;			//Offset: 0 | ElementSize: 16
		int64_t ReturnValue;			//Offset: 16 | ElementSize: 8
	};
	UBPCppHelperFunctions_FStrToInt64_Params params;
	params.String = String;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.GetCurrentAspectRatioConstraint
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: Controller	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TEnumAsByte<EAspectRatioAxisConstraint>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TEnumAsByte<EAspectRatioAxisConstraint> UBPCppHelperFunctions::GetCurrentAspectRatioConstraint(class APlayerController* Controller) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.GetCurrentAspectRatioConstraint");

	struct UBPCppHelperFunctions_GetCurrentAspectRatioConstraint_Params {
		class APlayerController* Controller;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<EAspectRatioAxisConstraint> ReturnValue;			//Offset: 8 | ElementSize: 1
	};
	UBPCppHelperFunctions_GetCurrentAspectRatioConstraint_Params params;
	params.Controller = Controller;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.GetFiles
// Flags: Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Files	Type: TArray<struct FString>	Flags: Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: RootFolderFullPath	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Ext	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: FileNameFilters	Type: TArray<struct FString>	Flags: Parm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: FilesToExclude	Type: TArray<struct FString>	Flags: Parm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: UserID	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UBPCppHelperFunctions::GetFiles(TArray<struct FString>* Files, struct FString RootFolderFullPath, struct FString Ext, TArray<struct FString> FileNameFilters, TArray<struct FString> FilesToExclude, int32_t UserID) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.GetFiles");

	struct UBPCppHelperFunctions_GetFiles_Params {
		TArray<struct FString> Files;			//Offset: 0 | ElementSize: 16
		struct FString RootFolderFullPath;			//Offset: 16 | ElementSize: 16
		struct FString Ext;			//Offset: 32 | ElementSize: 16
		TArray<struct FString> FileNameFilters;			//Offset: 48 | ElementSize: 16
		TArray<struct FString> FilesToExclude;			//Offset: 64 | ElementSize: 16
		int32_t UserID;			//Offset: 80 | ElementSize: 4
		bool ReturnValue;			//Offset: 84 | ElementSize: 1
	};
	UBPCppHelperFunctions_GetFiles_Params params;
	params.RootFolderFullPath = RootFolderFullPath;
	params.Ext = Ext;
	params.FileNameFilters = FileNameFilters;
	params.FilesToExclude = FilesToExclude;
	params.UserID = UserID;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Files != nullptr)
		*Files = params.Files;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.GetFileSize
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: Filename	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int64_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int64_t UBPCppHelperFunctions::GetFileSize(struct FString Filename) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.GetFileSize");

	struct UBPCppHelperFunctions_GetFileSize_Params {
		struct FString Filename;			//Offset: 0 | ElementSize: 16
		int64_t ReturnValue;			//Offset: 16 | ElementSize: 8
	};
	UBPCppHelperFunctions_GetFileSize_Params params;
	params.Filename = Filename;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.GetOnlineSubsystem
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: InWorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FName	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FName UBPCppHelperFunctions::GetOnlineSubsystem(class UObject* InWorldContextObject) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.GetOnlineSubsystem");

	struct UBPCppHelperFunctions_GetOnlineSubsystem_Params {
		class UObject* InWorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FName ReturnValue;			//Offset: 8 | ElementSize: 8
	};
	UBPCppHelperFunctions_GetOnlineSubsystem_Params params;
	params.InWorldContextObject = InWorldContextObject;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.GetPlatformType
// Flags: Final, Native, Static, Private, BlueprintCallable, BlueprintPure
// Params:
// Name: ReturnValue	Type: EMD_SpecificPlatform	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
EMD_SpecificPlatform UBPCppHelperFunctions::GetPlatformType() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.GetPlatformType");

	struct UBPCppHelperFunctions_GetPlatformType_Params {
		EMD_SpecificPlatform ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UBPCppHelperFunctions_GetPlatformType_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.GetSectionPosition
// Flags: Final, Native, Static, Private, BlueprintCallable, BlueprintPure
// Params:
// Name: Montage	Type: class UAnimMontage*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SectionName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UBPCppHelperFunctions::GetSectionPosition(class UAnimMontage* Montage, struct FName SectionName) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.GetSectionPosition");

	struct UBPCppHelperFunctions_GetSectionPosition_Params {
		class UAnimMontage* Montage;			//Offset: 0 | ElementSize: 8
		struct FName SectionName;			//Offset: 8 | ElementSize: 8
		float ReturnValue;			//Offset: 16 | ElementSize: 4
	};
	UBPCppHelperFunctions_GetSectionPosition_Params params;
	params.Montage = Montage;
	params.SectionName = SectionName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.InitSaveModule
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UBPCppHelperFunctions::InitSaveModule() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.InitSaveModule");

	struct UBPCppHelperFunctions_InitSaveModule_Params {
	};
	UBPCppHelperFunctions_InitSaveModule_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.Int64ToFStr
// Flags: Final, Native, Static, Private, BlueprintCallable, BlueprintPure
// Params:
// Name: Value	Type: int64_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UBPCppHelperFunctions::Int64ToFStr(int64_t Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.Int64ToFStr");

	struct UBPCppHelperFunctions_Int64ToFStr_Params {
		int64_t Value;			//Offset: 0 | ElementSize: 8
		struct FString ReturnValue;			//Offset: 8 | ElementSize: 16
	};
	UBPCppHelperFunctions_Int64ToFStr_Params params;
	params.Value = Value;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.IsInCameraRange
// Flags: Final, Native, Static, Private, HasOutParms, BlueprintCallable
// Params:
// Name: SceneComponent	Type: class USceneComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Range	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: IsInRange	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::IsInCameraRange(class USceneComponent* SceneComponent, float Range, bool* IsInRange) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.IsInCameraRange");

	struct UBPCppHelperFunctions_IsInCameraRange_Params {
		class USceneComponent* SceneComponent;			//Offset: 0 | ElementSize: 8
		float Range;			//Offset: 8 | ElementSize: 4
		bool IsInRange;			//Offset: 12 | ElementSize: 1
	};
	UBPCppHelperFunctions_IsInCameraRange_Params params;
	params.SceneComponent = SceneComponent;
	params.Range = Range;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (IsInRange != nullptr)
		*IsInRange = params.IsInRange;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.KillGameInstance
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
/////////////////////////////////////////////
void UBPCppHelperFunctions::KillGameInstance() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.KillGameInstance");

	struct UBPCppHelperFunctions_KillGameInstance_Params {
	};
	UBPCppHelperFunctions_KillGameInstance_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.SaveKeyMappingsNoSort
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: Target	Type: class UInputSettings*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::SaveKeyMappingsNoSort(class UInputSettings* Target) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.SaveKeyMappingsNoSort");

	struct UBPCppHelperFunctions_SaveKeyMappingsNoSort_Params {
		class UInputSettings* Target;			//Offset: 0 | ElementSize: 8
	};
	UBPCppHelperFunctions_SaveKeyMappingsNoSort_Params params;
	params.Target = Target;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.SetActorName
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: Object	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: DisplayName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::SetActorName(class UObject* Object, struct FString DisplayName) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.SetActorName");

	struct UBPCppHelperFunctions_SetActorName_Params {
		class UObject* Object;			//Offset: 0 | ElementSize: 8
		struct FString DisplayName;			//Offset: 8 | ElementSize: 16
	};
	UBPCppHelperFunctions_SetActorName_Params params;
	params.Object = Object;
	params.DisplayName = DisplayName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.SetAnimUpdateRateParams
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: Mesh	Type: class USkinnedMeshComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LodToSkipSettings	Type: TMap<int32_t, int32_t>	Flags: ConstParm, Parm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::SetAnimUpdateRateParams(class USkinnedMeshComponent* Mesh, TMap<int32_t, int32_t> LodToSkipSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.SetAnimUpdateRateParams");

	struct UBPCppHelperFunctions_SetAnimUpdateRateParams_Params {
		class USkinnedMeshComponent* Mesh;			//Offset: 0 | ElementSize: 8
		TMap<int32_t, int32_t> LodToSkipSettings;			//Offset: 8 | ElementSize: 80
	};
	UBPCppHelperFunctions_SetAnimUpdateRateParams_Params params;
	params.Mesh = Mesh;
	params.LodToSkipSettings = LodToSkipSettings;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.SetAnimUpdateRateParamsScreenSize
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: Mesh	Type: class USkinnedMeshComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ScreenSizes	Type: TArray<float>	Flags: ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::SetAnimUpdateRateParamsScreenSize(class USkinnedMeshComponent* Mesh, TArray<float> ScreenSizes) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.SetAnimUpdateRateParamsScreenSize");

	struct UBPCppHelperFunctions_SetAnimUpdateRateParamsScreenSize_Params {
		class USkinnedMeshComponent* Mesh;			//Offset: 0 | ElementSize: 8
		TArray<float> ScreenSizes;			//Offset: 8 | ElementSize: 16
	};
	UBPCppHelperFunctions_SetAnimUpdateRateParamsScreenSize_Params params;
	params.Mesh = Mesh;
	params.ScreenSizes = ScreenSizes;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.SetCurrentAspectRatioConstraint
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: Controller	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ConstraintMode	Type: TEnumAsByte<EAspectRatioAxisConstraint>	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::SetCurrentAspectRatioConstraint(class APlayerController* Controller, TEnumAsByte<EAspectRatioAxisConstraint> ConstraintMode) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.SetCurrentAspectRatioConstraint");

	struct UBPCppHelperFunctions_SetCurrentAspectRatioConstraint_Params {
		class APlayerController* Controller;			//Offset: 0 | ElementSize: 8
		TEnumAsByte<EAspectRatioAxisConstraint> ConstraintMode;			//Offset: 8 | ElementSize: 1
	};
	UBPCppHelperFunctions_SetCurrentAspectRatioConstraint_Params params;
	params.Controller = Controller;
	params.ConstraintMode = ConstraintMode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.SetMinimumLODForPlatforms
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: Mesh	Type: class UStaticMesh*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PerPlatformMinLods	Type: TMap<struct FName, int32_t>	Flags: ConstParm, Parm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UBPCppHelperFunctions::SetMinimumLODForPlatforms(class UStaticMesh* Mesh, TMap<struct FName, int32_t> PerPlatformMinLods) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.SetMinimumLODForPlatforms");

	struct UBPCppHelperFunctions_SetMinimumLODForPlatforms_Params {
		class UStaticMesh* Mesh;			//Offset: 0 | ElementSize: 8
		TMap<struct FName, int32_t> PerPlatformMinLods;			//Offset: 8 | ElementSize: 80
		bool ReturnValue;			//Offset: 88 | ElementSize: 1
	};
	UBPCppHelperFunctions_SetMinimumLODForPlatforms_Params params;
	params.Mesh = Mesh;
	params.PerPlatformMinLods = PerPlatformMinLods;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.SetMinimumLODForPlatformsForSkeletals
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: Mesh	Type: class USkeletalMesh*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: PerPlatformMinLods	Type: TMap<struct FName, int32_t>	Flags: ConstParm, Parm, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UBPCppHelperFunctions::SetMinimumLODForPlatformsForSkeletals(class USkeletalMesh* Mesh, TMap<struct FName, int32_t> PerPlatformMinLods) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.SetMinimumLODForPlatformsForSkeletals");

	struct UBPCppHelperFunctions_SetMinimumLODForPlatformsForSkeletals_Params {
		class USkeletalMesh* Mesh;			//Offset: 0 | ElementSize: 8
		TMap<struct FName, int32_t> PerPlatformMinLods;			//Offset: 8 | ElementSize: 80
		bool ReturnValue;			//Offset: 88 | ElementSize: 1
	};
	UBPCppHelperFunctions_SetMinimumLODForPlatformsForSkeletals_Params params;
	params.Mesh = Mesh;
	params.PerPlatformMinLods = PerPlatformMinLods;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.SetUnfocusedVolumeMultiplier
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: Multiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::SetUnfocusedVolumeMultiplier(float Multiplier) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.SetUnfocusedVolumeMultiplier");

	struct UBPCppHelperFunctions_SetUnfocusedVolumeMultiplier_Params {
		float Multiplier;			//Offset: 0 | ElementSize: 4
	};
	UBPCppHelperFunctions_SetUnfocusedVolumeMultiplier_Params params;
	params.Multiplier = Multiplier;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.UpdateMontageSlot
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: Montage	Type: class UAnimMontage*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SlotName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SlotIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::UpdateMontageSlot(class UAnimMontage* Montage, struct FName SlotName, int32_t SlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.UpdateMontageSlot");

	struct UBPCppHelperFunctions_UpdateMontageSlot_Params {
		class UAnimMontage* Montage;			//Offset: 0 | ElementSize: 8
		struct FName SlotName;			//Offset: 8 | ElementSize: 8
		int32_t SlotIndex;			//Offset: 16 | ElementSize: 4
	};
	UBPCppHelperFunctions_UpdateMontageSlot_Params params;
	params.Montage = Montage;
	params.SlotName = SlotName;
	params.SlotIndex = SlotIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}