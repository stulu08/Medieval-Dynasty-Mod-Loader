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
bool UBPCppHelperFunctions::AdjustTeleportLocation(const class AActor* TestActor, struct FVector* PlaceLocation, struct FRotator PlaceRotation) {
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
float UBPCppHelperFunctions::AngleBetweenCameraAndActor(const class APlayerCameraManager* PlayerCameraMan, class AActor* Actor) {
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
// Function Medieval_Dynasty.BPCppHelperFunctions.CalculateDistanceForDisplay
// Flags: Final, Native, Static, Private, HasOutParms, BlueprintCallable
// Params:
// Name: ownerComponent	Type: class ACharacter*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: closeRadiusForDisplay	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: mediumRadiusForDisplay	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: farRadiusForDisplay	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: activeRadius	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: viewDistanceScale	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ignoreRenderVisibility	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Distance	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: optimizationStage	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::CalculateDistanceForDisplay(class ACharacter* ownerComponent, float closeRadiusForDisplay, float mediumRadiusForDisplay, float farRadiusForDisplay, float activeRadius, float viewDistanceScale, bool ignoreRenderVisibility, float* Distance, int32_t* optimizationStage) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.CalculateDistanceForDisplay");

	struct UBPCppHelperFunctions_CalculateDistanceForDisplay_Params {
		class ACharacter* ownerComponent;			//Offset: 0 | ElementSize: 8
		float closeRadiusForDisplay;			//Offset: 8 | ElementSize: 4
		float mediumRadiusForDisplay;			//Offset: 12 | ElementSize: 4
		float farRadiusForDisplay;			//Offset: 16 | ElementSize: 4
		float activeRadius;			//Offset: 20 | ElementSize: 4
		float viewDistanceScale;			//Offset: 24 | ElementSize: 4
		bool ignoreRenderVisibility;			//Offset: 28 | ElementSize: 1
		float Distance;			//Offset: 32 | ElementSize: 4
		int32_t optimizationStage;			//Offset: 36 | ElementSize: 4
	};
	UBPCppHelperFunctions_CalculateDistanceForDisplay_Params params;
	params.ownerComponent = ownerComponent;
	params.closeRadiusForDisplay = closeRadiusForDisplay;
	params.mediumRadiusForDisplay = mediumRadiusForDisplay;
	params.farRadiusForDisplay = farRadiusForDisplay;
	params.activeRadius = activeRadius;
	params.viewDistanceScale = viewDistanceScale;
	params.ignoreRenderVisibility = ignoreRenderVisibility;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (Distance != nullptr)
		*Distance = params.Distance;
	if (optimizationStage != nullptr)
		*optimizationStage = params.optimizationStage;
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
// Function Medieval_Dynasty.BPCppHelperFunctions.GroundedRotation
// Flags: Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: Character	Type: class ACharacter*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: IsMoving	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: lookInVelocityDirection	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: isAiming	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: isFirstPerson	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: currentLookingRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: lastVelocityRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: hasMovementInput	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: lastMovementInputRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: aimYawDelta	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: currentCardinalDirection	Type: ECardinalDirection	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: currentRotationOffset	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: gait	Type: EGait	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Velocity	Type: struct FVector	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: currentRotationRateMultiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: shouldChangeRotation	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: TargetRotation	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: interpRotation	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: interpSpeed	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: cardinalDirection	Type: ECardinalDirection	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: RotationOffset	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: rotationRateMultiplier	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::GroundedRotation(class ACharacter* Character, bool IsMoving, bool lookInVelocityDirection, bool isAiming, bool isFirstPerson, struct FRotator currentLookingRotation, struct FRotator lastVelocityRotation, bool hasMovementInput, struct FRotator lastMovementInputRotation, float aimYawDelta, ECardinalDirection currentCardinalDirection, float currentRotationOffset, EGait gait, struct FVector Velocity, float currentRotationRateMultiplier, bool* shouldChangeRotation, struct FRotator* TargetRotation, bool* interpRotation, float* interpSpeed, ECardinalDirection* cardinalDirection, float* RotationOffset, float* rotationRateMultiplier) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.GroundedRotation");

	struct UBPCppHelperFunctions_GroundedRotation_Params {
		class ACharacter* Character;			//Offset: 0 | ElementSize: 8
		bool IsMoving;			//Offset: 8 | ElementSize: 1
		bool lookInVelocityDirection;			//Offset: 9 | ElementSize: 1
		bool isAiming;			//Offset: 10 | ElementSize: 1
		bool isFirstPerson;			//Offset: 11 | ElementSize: 1
		struct FRotator currentLookingRotation;			//Offset: 12 | ElementSize: 12
		struct FRotator lastVelocityRotation;			//Offset: 24 | ElementSize: 12
		bool hasMovementInput;			//Offset: 36 | ElementSize: 1
		struct FRotator lastMovementInputRotation;			//Offset: 40 | ElementSize: 12
		float aimYawDelta;			//Offset: 52 | ElementSize: 4
		ECardinalDirection currentCardinalDirection;			//Offset: 56 | ElementSize: 1
		float currentRotationOffset;			//Offset: 60 | ElementSize: 4
		EGait gait;			//Offset: 64 | ElementSize: 1
		struct FVector Velocity;			//Offset: 68 | ElementSize: 12
		float currentRotationRateMultiplier;			//Offset: 80 | ElementSize: 4
		bool shouldChangeRotation;			//Offset: 84 | ElementSize: 1
		struct FRotator TargetRotation;			//Offset: 88 | ElementSize: 12
		bool interpRotation;			//Offset: 100 | ElementSize: 1
		float interpSpeed;			//Offset: 104 | ElementSize: 4
		ECardinalDirection cardinalDirection;			//Offset: 108 | ElementSize: 1
		float RotationOffset;			//Offset: 112 | ElementSize: 4
		float rotationRateMultiplier;			//Offset: 116 | ElementSize: 4
	};
	UBPCppHelperFunctions_GroundedRotation_Params params;
	params.Character = Character;
	params.IsMoving = IsMoving;
	params.lookInVelocityDirection = lookInVelocityDirection;
	params.isAiming = isAiming;
	params.isFirstPerson = isFirstPerson;
	params.currentLookingRotation = currentLookingRotation;
	params.lastVelocityRotation = lastVelocityRotation;
	params.hasMovementInput = hasMovementInput;
	params.lastMovementInputRotation = lastMovementInputRotation;
	params.aimYawDelta = aimYawDelta;
	params.currentCardinalDirection = currentCardinalDirection;
	params.currentRotationOffset = currentRotationOffset;
	params.gait = gait;
	params.Velocity = Velocity;
	params.currentRotationRateMultiplier = currentRotationRateMultiplier;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (shouldChangeRotation != nullptr)
		*shouldChangeRotation = params.shouldChangeRotation;
	if (TargetRotation != nullptr)
		*TargetRotation = params.TargetRotation;
	if (interpRotation != nullptr)
		*interpRotation = params.interpRotation;
	if (interpSpeed != nullptr)
		*interpSpeed = params.interpSpeed;
	if (cardinalDirection != nullptr)
		*cardinalDirection = params.cardinalDirection;
	if (RotationOffset != nullptr)
		*RotationOffset = params.RotationOffset;
	if (rotationRateMultiplier != nullptr)
		*rotationRateMultiplier = params.rotationRateMultiplier;
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
// Function Medieval_Dynasty.BPCppHelperFunctions.SetAnimalRotation
// Flags: Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: CharacterMovement	Type: class UCharacterMovementComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: controllerReference	Type: class AController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: currentAnimalRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: TargetRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: interpRotation	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: interpSpeed	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: animalRotation	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::SetAnimalRotation(class UCharacterMovementComponent* CharacterMovement, class AController* controllerReference, struct FRotator currentAnimalRotation, struct FRotator TargetRotation, bool interpRotation, float interpSpeed, struct FRotator* animalRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.SetAnimalRotation");

	struct UBPCppHelperFunctions_SetAnimalRotation_Params {
		class UCharacterMovementComponent* CharacterMovement;			//Offset: 0 | ElementSize: 8
		class AController* controllerReference;			//Offset: 8 | ElementSize: 8
		struct FRotator currentAnimalRotation;			//Offset: 16 | ElementSize: 12
		struct FRotator TargetRotation;			//Offset: 28 | ElementSize: 12
		bool interpRotation;			//Offset: 40 | ElementSize: 1
		float interpSpeed;			//Offset: 44 | ElementSize: 4
		struct FRotator animalRotation;			//Offset: 48 | ElementSize: 12
	};
	UBPCppHelperFunctions_SetAnimalRotation_Params params;
	params.CharacterMovement = CharacterMovement;
	params.controllerReference = controllerReference;
	params.currentAnimalRotation = currentAnimalRotation;
	params.TargetRotation = TargetRotation;
	params.interpRotation = interpRotation;
	params.interpSpeed = interpSpeed;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (animalRotation != nullptr)
		*animalRotation = params.animalRotation;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.SetAnimUpdateRateParams
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: Mesh	Type: class USkinnedMeshComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: LodToSkipSettings	Type: TMap<int32_t, int32_t>	Flags: ConstParm, Parm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::SetAnimUpdateRateParams(class USkinnedMeshComponent* Mesh, const TMap<int32_t, int32_t> LodToSkipSettings) {
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
void UBPCppHelperFunctions::SetAnimUpdateRateParamsScreenSize(class USkinnedMeshComponent* Mesh, const TArray<float> ScreenSizes) {
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
// Function Medieval_Dynasty.BPCppHelperFunctions.SetCharacterRotation
// Flags: Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: CharacterMovement	Type: class UCharacterMovementComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: currentCharacterRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: TargetRotation	Type: struct FRotator	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: interpRotation	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: interpSpeed	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: useControllerRotationYaw	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: characterRotation	Type: struct FRotator	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
// Name: rotationDifference	Type: float	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::SetCharacterRotation(class UCharacterMovementComponent* CharacterMovement, struct FRotator currentCharacterRotation, struct FRotator TargetRotation, bool interpRotation, float interpSpeed, bool useControllerRotationYaw, struct FRotator* characterRotation, float* rotationDifference) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.SetCharacterRotation");

	struct UBPCppHelperFunctions_SetCharacterRotation_Params {
		class UCharacterMovementComponent* CharacterMovement;			//Offset: 0 | ElementSize: 8
		struct FRotator currentCharacterRotation;			//Offset: 8 | ElementSize: 12
		struct FRotator TargetRotation;			//Offset: 20 | ElementSize: 12
		bool interpRotation;			//Offset: 32 | ElementSize: 1
		float interpSpeed;			//Offset: 36 | ElementSize: 4
		bool useControllerRotationYaw;			//Offset: 40 | ElementSize: 1
		struct FRotator characterRotation;			//Offset: 44 | ElementSize: 12
		float rotationDifference;			//Offset: 56 | ElementSize: 4
	};
	UBPCppHelperFunctions_SetCharacterRotation_Params params;
	params.CharacterMovement = CharacterMovement;
	params.currentCharacterRotation = currentCharacterRotation;
	params.TargetRotation = TargetRotation;
	params.interpRotation = interpRotation;
	params.interpSpeed = interpSpeed;
	params.useControllerRotationYaw = useControllerRotationYaw;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (characterRotation != nullptr)
		*characterRotation = params.characterRotation;
	if (rotationDifference != nullptr)
		*rotationDifference = params.rotationDifference;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppHelperFunctions.SetCurrentAspectRatioConstraint
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: Controller	Type: class APlayerController*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ConstraintMode	Type: TEnumAsByte<EAspectRatioAxisConstraint>	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::SetCurrentAspectRatioConstraint(class APlayerController* Controller, const TEnumAsByte<EAspectRatioAxisConstraint> ConstraintMode) {
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
bool UBPCppHelperFunctions::SetMinimumLODForPlatforms(class UStaticMesh* Mesh, const TMap<struct FName, int32_t> PerPlatformMinLods) {
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
bool UBPCppHelperFunctions::SetMinimumLODForPlatformsForSkeletals(class USkeletalMesh* Mesh, const TMap<struct FName, int32_t> PerPlatformMinLods) {
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
// Function Medieval_Dynasty.BPCppHelperFunctions.UpdateCharacterMovementSettings
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: CharacterMovement	Type: class UCharacterMovementComponent*	Flags: Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: stance	Type: EStance	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: gait	Type: EGait	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: isInWater	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: isAiming	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: randomSpeedMultiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: slopeSpeedMultiplier	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: inWaterIntensity	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: WalkingSpeed	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: runningSpeed	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: sprintingSpeed	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: crouchingSpeed	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: WalkingAcceleration	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: runningAcceleration	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: walkingDeceleration	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: runningDeceleration	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: walkingGroundFriction	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: runningGroundFriction	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppHelperFunctions::UpdateCharacterMovementSettings(class UCharacterMovementComponent* CharacterMovement, EStance stance, EGait gait, bool isInWater, bool isAiming, float randomSpeedMultiplier, float slopeSpeedMultiplier, float inWaterIntensity, float WalkingSpeed, float runningSpeed, float sprintingSpeed, float crouchingSpeed, float WalkingAcceleration, float runningAcceleration, float walkingDeceleration, float runningDeceleration, float walkingGroundFriction, float runningGroundFriction) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppHelperFunctions.UpdateCharacterMovementSettings");

	struct UBPCppHelperFunctions_UpdateCharacterMovementSettings_Params {
		class UCharacterMovementComponent* CharacterMovement;			//Offset: 0 | ElementSize: 8
		EStance stance;			//Offset: 8 | ElementSize: 1
		EGait gait;			//Offset: 9 | ElementSize: 1
		bool isInWater;			//Offset: 10 | ElementSize: 1
		bool isAiming;			//Offset: 11 | ElementSize: 1
		float randomSpeedMultiplier;			//Offset: 12 | ElementSize: 4
		float slopeSpeedMultiplier;			//Offset: 16 | ElementSize: 4
		float inWaterIntensity;			//Offset: 20 | ElementSize: 4
		float WalkingSpeed;			//Offset: 24 | ElementSize: 4
		float runningSpeed;			//Offset: 28 | ElementSize: 4
		float sprintingSpeed;			//Offset: 32 | ElementSize: 4
		float crouchingSpeed;			//Offset: 36 | ElementSize: 4
		float WalkingAcceleration;			//Offset: 40 | ElementSize: 4
		float runningAcceleration;			//Offset: 44 | ElementSize: 4
		float walkingDeceleration;			//Offset: 48 | ElementSize: 4
		float runningDeceleration;			//Offset: 52 | ElementSize: 4
		float walkingGroundFriction;			//Offset: 56 | ElementSize: 4
		float runningGroundFriction;			//Offset: 60 | ElementSize: 4
	};
	UBPCppHelperFunctions_UpdateCharacterMovementSettings_Params params;
	params.CharacterMovement = CharacterMovement;
	params.stance = stance;
	params.gait = gait;
	params.isInWater = isInWater;
	params.isAiming = isAiming;
	params.randomSpeedMultiplier = randomSpeedMultiplier;
	params.slopeSpeedMultiplier = slopeSpeedMultiplier;
	params.inWaterIntensity = inWaterIntensity;
	params.WalkingSpeed = WalkingSpeed;
	params.runningSpeed = runningSpeed;
	params.sprintingSpeed = sprintingSpeed;
	params.crouchingSpeed = crouchingSpeed;
	params.WalkingAcceleration = WalkingAcceleration;
	params.runningAcceleration = runningAcceleration;
	params.walkingDeceleration = walkingDeceleration;
	params.runningDeceleration = runningDeceleration;
	params.walkingGroundFriction = walkingGroundFriction;
	params.runningGroundFriction = runningGroundFriction;

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