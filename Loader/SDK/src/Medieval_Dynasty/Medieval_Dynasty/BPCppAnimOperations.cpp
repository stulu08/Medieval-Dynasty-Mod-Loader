#include "../SDK.h"
#include "BPCppAnimOperations.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppAnimOperations.ActivateMontageData
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: InWorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: AnimInst	Type: class UAnimInstance*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MontageData	Type: TArray<struct FMontageDataForRep>	Flags: Parm, ZeroConstructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppAnimOperations::ActivateMontageData(class UObject* InWorldContextObject, class UAnimInstance* AnimInst, TArray<struct FMontageDataForRep> MontageData) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppAnimOperations.ActivateMontageData");

	struct UBPCppAnimOperations_ActivateMontageData_Params {
		class UObject* InWorldContextObject;			//Offset: 0 | ElementSize: 8
		class UAnimInstance* AnimInst;			//Offset: 8 | ElementSize: 8
		TArray<struct FMontageDataForRep> MontageData;			//Offset: 16 | ElementSize: 16
	};
	UBPCppAnimOperations_ActivateMontageData_Params params;
	params.InWorldContextObject = InWorldContextObject;
	params.AnimInst = AnimInst;
	params.MontageData = MontageData;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppAnimOperations.CalculateMontagePositionFromRepData
// Flags: Final, Native, Static, Private, BlueprintCallable, BlueprintPure
// Params:
// Name: InWorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MontageData	Type: struct FMontageDataForRep	Flags: Parm, NoDestructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UBPCppAnimOperations::CalculateMontagePositionFromRepData(class UObject* InWorldContextObject, struct FMontageDataForRep MontageData) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppAnimOperations.CalculateMontagePositionFromRepData");

	struct UBPCppAnimOperations_CalculateMontagePositionFromRepData_Params {
		class UObject* InWorldContextObject;			//Offset: 0 | ElementSize: 8
		struct FMontageDataForRep MontageData;			//Offset: 8 | ElementSize: 40
		float ReturnValue;			//Offset: 48 | ElementSize: 4
	};
	UBPCppAnimOperations_CalculateMontagePositionFromRepData_Params params;
	params.InWorldContextObject = InWorldContextObject;
	params.MontageData = MontageData;

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
// Function Medieval_Dynasty.BPCppAnimOperations.ChangeMontageBlendTime
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: Montage	Type: class UAnimMontage*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: BlendTime	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ChangeBlendOut	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppAnimOperations::ChangeMontageBlendTime(class UAnimMontage* Montage, float BlendTime, bool ChangeBlendOut) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppAnimOperations.ChangeMontageBlendTime");

	struct UBPCppAnimOperations_ChangeMontageBlendTime_Params {
		class UAnimMontage* Montage;			//Offset: 0 | ElementSize: 8
		float BlendTime;			//Offset: 8 | ElementSize: 4
		bool ChangeBlendOut;			//Offset: 12 | ElementSize: 1
	};
	UBPCppAnimOperations_ChangeMontageBlendTime_Params params;
	params.Montage = Montage;
	params.BlendTime = BlendTime;
	params.ChangeBlendOut = ChangeBlendOut;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppAnimOperations.CopyCurve
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: Source	Type: class UAnimSequence*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Target	Type: class UAnimSequence*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppAnimOperations::CopyCurve(class UAnimSequence* Source, class UAnimSequence* Target) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppAnimOperations.CopyCurve");

	struct UBPCppAnimOperations_CopyCurve_Params {
		class UAnimSequence* Source;			//Offset: 0 | ElementSize: 8
		class UAnimSequence* Target;			//Offset: 8 | ElementSize: 8
	};
	UBPCppAnimOperations_CopyCurve_Params params;
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
// Function Medieval_Dynasty.BPCppAnimOperations.CopyCurves
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: sourceAnimationSequence	Type: class UAnimSequence*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: targetAnimationSequence	Type: class UAnimSequence*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: shouldOverwriteExistingCurves	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppAnimOperations::CopyCurves(class UAnimSequence* sourceAnimationSequence, class UAnimSequence* targetAnimationSequence, bool shouldOverwriteExistingCurves) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppAnimOperations.CopyCurves");

	struct UBPCppAnimOperations_CopyCurves_Params {
		class UAnimSequence* sourceAnimationSequence;			//Offset: 0 | ElementSize: 8
		class UAnimSequence* targetAnimationSequence;			//Offset: 8 | ElementSize: 8
		bool shouldOverwriteExistingCurves;			//Offset: 16 | ElementSize: 1
	};
	UBPCppAnimOperations_CopyCurves_Params params;
	params.sourceAnimationSequence = sourceAnimationSequence;
	params.targetAnimationSequence = targetAnimationSequence;
	params.shouldOverwriteExistingCurves = shouldOverwriteExistingCurves;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppAnimOperations.CreateMontageCopyWithNewSlot
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: MontageToCopy	Type: class UAnimMontage*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SlotNodeName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SlotIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UAnimMontage*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UAnimMontage* UBPCppAnimOperations::CreateMontageCopyWithNewSlot(class UAnimMontage* MontageToCopy, struct FName SlotNodeName, int32_t SlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppAnimOperations.CreateMontageCopyWithNewSlot");

	struct UBPCppAnimOperations_CreateMontageCopyWithNewSlot_Params {
		class UAnimMontage* MontageToCopy;			//Offset: 0 | ElementSize: 8
		struct FName SlotNodeName;			//Offset: 8 | ElementSize: 8
		int32_t SlotIndex;			//Offset: 16 | ElementSize: 4
		class UAnimMontage* ReturnValue;			//Offset: 24 | ElementSize: 8
	};
	UBPCppAnimOperations_CreateMontageCopyWithNewSlot_Params params;
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
// Function Medieval_Dynasty.BPCppAnimOperations.DoesGivenSectionExist
// Flags: Final, Native, Static, Private, BlueprintCallable, BlueprintPure
// Params:
// Name: Montage	Type: class UAnimMontage*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SectionName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UBPCppAnimOperations::DoesGivenSectionExist(class UAnimMontage* Montage, struct FName SectionName) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppAnimOperations.DoesGivenSectionExist");

	struct UBPCppAnimOperations_DoesGivenSectionExist_Params {
		class UAnimMontage* Montage;			//Offset: 0 | ElementSize: 8
		struct FName SectionName;			//Offset: 8 | ElementSize: 8
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UBPCppAnimOperations_DoesGivenSectionExist_Params params;
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
// Function Medieval_Dynasty.BPCppAnimOperations.GatherMontageData
// Flags: Final, Native, Static, Private, BlueprintCallable, BlueprintPure
// Params:
// Name: InWorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: AnimInst	Type: class UAnimInstance*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TArray<struct FMontageDataForRep>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<struct FMontageDataForRep> UBPCppAnimOperations::GatherMontageData(class UObject* InWorldContextObject, class UAnimInstance* AnimInst) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppAnimOperations.GatherMontageData");

	struct UBPCppAnimOperations_GatherMontageData_Params {
		class UObject* InWorldContextObject;			//Offset: 0 | ElementSize: 8
		class UAnimInstance* AnimInst;			//Offset: 8 | ElementSize: 8
		TArray<struct FMontageDataForRep> ReturnValue;			//Offset: 16 | ElementSize: 16
	};
	UBPCppAnimOperations_GatherMontageData_Params params;
	params.InWorldContextObject = InWorldContextObject;
	params.AnimInst = AnimInst;

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
// Function Medieval_Dynasty.BPCppAnimOperations.GatherMontageDataForSlots
// Flags: Final, Native, Static, Private, BlueprintCallable, BlueprintPure
// Params:
// Name: InWorldContextObject	Type: class UObject*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: AnimInst	Type: class UAnimInstance*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Slots	Type: TArray<struct FName>	Flags: Parm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TArray<struct FMontageDataForRep>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<struct FMontageDataForRep> UBPCppAnimOperations::GatherMontageDataForSlots(class UObject* InWorldContextObject, class UAnimInstance* AnimInst, TArray<struct FName> Slots) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppAnimOperations.GatherMontageDataForSlots");

	struct UBPCppAnimOperations_GatherMontageDataForSlots_Params {
		class UObject* InWorldContextObject;			//Offset: 0 | ElementSize: 8
		class UAnimInstance* AnimInst;			//Offset: 8 | ElementSize: 8
		TArray<struct FName> Slots;			//Offset: 16 | ElementSize: 16
		TArray<struct FMontageDataForRep> ReturnValue;			//Offset: 32 | ElementSize: 16
	};
	UBPCppAnimOperations_GatherMontageDataForSlots_Params params;
	params.InWorldContextObject = InWorldContextObject;
	params.AnimInst = AnimInst;
	params.Slots = Slots;

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
// Function Medieval_Dynasty.BPCppAnimOperations.GetActiveMontageForSlot
// Flags: Final, Native, Static, Private, BlueprintCallable, BlueprintPure
// Params:
// Name: AnimInst	Type: class UAnimInstance*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: AnimSlot	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UAnimMontage*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UAnimMontage* UBPCppAnimOperations::GetActiveMontageForSlot(class UAnimInstance* AnimInst, struct FName AnimSlot) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppAnimOperations.GetActiveMontageForSlot");

	struct UBPCppAnimOperations_GetActiveMontageForSlot_Params {
		class UAnimInstance* AnimInst;			//Offset: 0 | ElementSize: 8
		struct FName AnimSlot;			//Offset: 8 | ElementSize: 8
		class UAnimMontage* ReturnValue;			//Offset: 16 | ElementSize: 8
	};
	UBPCppAnimOperations_GetActiveMontageForSlot_Params params;
	params.AnimInst = AnimInst;
	params.AnimSlot = AnimSlot;

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
// Function Medieval_Dynasty.BPCppAnimOperations.GetAllActiveMontages
// Flags: Final, Native, Static, Private, BlueprintCallable, BlueprintPure
// Params:
// Name: AnimInst	Type: class UAnimInstance*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TArray<class UAnimMontage*>	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<class UAnimMontage*> UBPCppAnimOperations::GetAllActiveMontages(class UAnimInstance* AnimInst) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppAnimOperations.GetAllActiveMontages");

	struct UBPCppAnimOperations_GetAllActiveMontages_Params {
		class UAnimInstance* AnimInst;			//Offset: 0 | ElementSize: 8
		TArray<class UAnimMontage*> ReturnValue;			//Offset: 8 | ElementSize: 16
	};
	UBPCppAnimOperations_GetAllActiveMontages_Params params;
	params.AnimInst = AnimInst;

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
// Function Medieval_Dynasty.BPCppAnimOperations.GetAnimMetaData
// Flags: Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Animation	Type: class UAnimationAsset*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: MetaData	Type: TArray<class UAnimMetaData*>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: IsValid	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppAnimOperations::GetAnimMetaData(class UAnimationAsset* Animation, const TArray<class UAnimMetaData*> MetaData, bool* IsValid) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppAnimOperations.GetAnimMetaData");

	struct UBPCppAnimOperations_GetAnimMetaData_Params {
		class UAnimationAsset* Animation;			//Offset: 0 | ElementSize: 8
		TArray<class UAnimMetaData*> MetaData;			//Offset: 8 | ElementSize: 16
		bool IsValid;			//Offset: 24 | ElementSize: 1
	};
	UBPCppAnimOperations_GetAnimMetaData_Params params;
	params.Animation = Animation;
	params.MetaData = MetaData;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppAnimOperations.GetAnimMetaDataSpecific
// Flags: Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure
// Params:
// Name: Animation	Type: class UAnimationAsset*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SearchedClass	Type: class UObject*	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: IsValid	Type: bool	Flags: Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: class UAnimMetaData*	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UAnimMetaData* UBPCppAnimOperations::GetAnimMetaDataSpecific(class UAnimationAsset* Animation, class UObject* SearchedClass, bool* IsValid) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppAnimOperations.GetAnimMetaDataSpecific");

	struct UBPCppAnimOperations_GetAnimMetaDataSpecific_Params {
		class UAnimationAsset* Animation;			//Offset: 0 | ElementSize: 8
		class UObject* SearchedClass;			//Offset: 8 | ElementSize: 8
		bool IsValid;			//Offset: 16 | ElementSize: 1
		class UAnimMetaData* ReturnValue;			//Offset: 24 | ElementSize: 8
	};
	UBPCppAnimOperations_GetAnimMetaDataSpecific_Params params;
	params.Animation = Animation;
	params.SearchedClass = SearchedClass;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppAnimOperations.GetSectionPosition
// Flags: Final, Native, Static, Private, BlueprintCallable, BlueprintPure
// Params:
// Name: Montage	Type: class UAnimMontage*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SectionName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: float	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
float UBPCppAnimOperations::GetSectionPosition(class UAnimMontage* Montage, struct FName SectionName) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppAnimOperations.GetSectionPosition");

	struct UBPCppAnimOperations_GetSectionPosition_Params {
		class UAnimMontage* Montage;			//Offset: 0 | ElementSize: 8
		struct FName SectionName;			//Offset: 8 | ElementSize: 8
		float ReturnValue;			//Offset: 16 | ElementSize: 4
	};
	UBPCppAnimOperations_GetSectionPosition_Params params;
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
// Function Medieval_Dynasty.BPCppAnimOperations.IsAnyMontagePlayingOnGivenSlot
// Flags: Final, Native, Static, Private, BlueprintCallable, BlueprintPure
// Params:
// Name: AnimInstance	Type: class UAnimInstance*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SlotName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UBPCppAnimOperations::IsAnyMontagePlayingOnGivenSlot(class UAnimInstance* AnimInstance, struct FName SlotName) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppAnimOperations.IsAnyMontagePlayingOnGivenSlot");

	struct UBPCppAnimOperations_IsAnyMontagePlayingOnGivenSlot_Params {
		class UAnimInstance* AnimInstance;			//Offset: 0 | ElementSize: 8
		struct FName SlotName;			//Offset: 8 | ElementSize: 8
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UBPCppAnimOperations_IsAnyMontagePlayingOnGivenSlot_Params params;
	params.AnimInstance = AnimInstance;
	params.SlotName = SlotName;

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
// Function Medieval_Dynasty.BPCppAnimOperations.RemoveBoneAnimations
// Flags: Final, Native, Static, Private, HasOutParms, BlueprintCallable
// Params:
// Name: animationSequences	Type: TArray<class UAnimSequence*>	Flags: ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: BoneNames	Type: TArray<struct FName>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
// Name: includeChildren	Type: bool	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: keepParent	Type: bool	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: postProcessAnimationSequence	Type: bool	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppAnimOperations::RemoveBoneAnimations(TArray<class UAnimSequence*> animationSequences, const TArray<struct FName>& BoneNames, bool includeChildren, bool keepParent, bool postProcessAnimationSequence) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppAnimOperations.RemoveBoneAnimations");

	struct UBPCppAnimOperations_RemoveBoneAnimations_Params {
		TArray<class UAnimSequence*> animationSequences;			//Offset: 0 | ElementSize: 16
		TArray<struct FName> BoneNames;			//Offset: 16 | ElementSize: 16
		bool includeChildren;			//Offset: 32 | ElementSize: 1
		bool keepParent;			//Offset: 33 | ElementSize: 1
		bool postProcessAnimationSequence;			//Offset: 34 | ElementSize: 1
	};
	UBPCppAnimOperations_RemoveBoneAnimations_Params params;
	params.animationSequences = animationSequences;
	params.BoneNames = BoneNames;
	params.includeChildren = includeChildren;
	params.keepParent = keepParent;
	params.postProcessAnimationSequence = postProcessAnimationSequence;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.BPCppAnimOperations.UpdateMontageSlot
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: Montage	Type: class UAnimMontage*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SlotName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: SlotIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UBPCppAnimOperations::UpdateMontageSlot(class UAnimMontage* Montage, struct FName SlotName, int32_t SlotIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.BPCppAnimOperations.UpdateMontageSlot");

	struct UBPCppAnimOperations_UpdateMontageSlot_Params {
		class UAnimMontage* Montage;			//Offset: 0 | ElementSize: 8
		struct FName SlotName;			//Offset: 8 | ElementSize: 8
		int32_t SlotIndex;			//Offset: 16 | ElementSize: 4
	};
	UBPCppAnimOperations_UpdateMontageSlot_Params params;
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