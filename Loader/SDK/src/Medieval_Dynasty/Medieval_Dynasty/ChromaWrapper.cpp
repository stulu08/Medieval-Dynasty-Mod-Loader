#include "../SDK.h"
#include "ChromaWrapper.h"
namespace UE4 {
#pragma region Members
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function Medieval_Dynasty.ChromaWrapper.CloseAnimationName
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: animationName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UChromaWrapper::CloseAnimationName(struct FString animationName) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.ChromaWrapper.CloseAnimationName");

	struct UChromaWrapper_CloseAnimationName_Params {
		struct FString animationName;			//Offset: 0 | ElementSize: 16
	};
	UChromaWrapper_CloseAnimationName_Params params;
	params.animationName = animationName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.ChromaWrapper.CopyKeysColorAllFrames
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: sourceAnimationId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: targetAnimationId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: KeyIDs	Type: TArray<int32_t>	Flags: Parm, ZeroConstructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UChromaWrapper::CopyKeysColorAllFrames(int32_t sourceAnimationId, int32_t targetAnimationId, TArray<int32_t> KeyIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.ChromaWrapper.CopyKeysColorAllFrames");

	struct UChromaWrapper_CopyKeysColorAllFrames_Params {
		int32_t sourceAnimationId;			//Offset: 0 | ElementSize: 4
		int32_t targetAnimationId;			//Offset: 4 | ElementSize: 4
		TArray<int32_t> KeyIDs;			//Offset: 8 | ElementSize: 16
	};
	UChromaWrapper_CopyKeysColorAllFrames_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.KeyIDs = KeyIDs;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.ChromaWrapper.CopyNonZeroKeysColorAllFrames
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: sourceAnimationId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: targetAnimationId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: KeyIDs	Type: TArray<int32_t>	Flags: Parm, ZeroConstructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UChromaWrapper::CopyNonZeroKeysColorAllFrames(int32_t sourceAnimationId, int32_t targetAnimationId, TArray<int32_t> KeyIDs) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.ChromaWrapper.CopyNonZeroKeysColorAllFrames");

	struct UChromaWrapper_CopyNonZeroKeysColorAllFrames_Params {
		int32_t sourceAnimationId;			//Offset: 0 | ElementSize: 4
		int32_t targetAnimationId;			//Offset: 4 | ElementSize: 4
		TArray<int32_t> KeyIDs;			//Offset: 8 | ElementSize: 16
	};
	UChromaWrapper_CopyNonZeroKeysColorAllFrames_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.KeyIDs = KeyIDs;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.ChromaWrapper.GetAnimationId
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: animationName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UChromaWrapper::GetAnimationId(struct FString animationName) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.ChromaWrapper.GetAnimationId");

	struct UChromaWrapper_GetAnimationId_Params {
		struct FString animationName;			//Offset: 0 | ElementSize: 16
		int32_t ReturnValue;			//Offset: 16 | ElementSize: 4
	};
	UChromaWrapper_GetAnimationId_Params params;
	params.animationName = animationName;

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
// Function Medieval_Dynasty.ChromaWrapper.GetChromaAnimation
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: animationName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UChromaWrapper::GetChromaAnimation(struct FString animationName) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.ChromaWrapper.GetChromaAnimation");

	struct UChromaWrapper_GetChromaAnimation_Params {
		struct FString animationName;			//Offset: 0 | ElementSize: 16
		int32_t ReturnValue;			//Offset: 16 | ElementSize: 4
	};
	UChromaWrapper_GetChromaAnimation_Params params;
	params.animationName = animationName;

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
// Function Medieval_Dynasty.ChromaWrapper.GetFrameCount
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: animationId	Type: int32_t	Flags: ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UChromaWrapper::GetFrameCount(int32_t animationId) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.ChromaWrapper.GetFrameCount");

	struct UChromaWrapper_GetFrameCount_Params {
		int32_t animationId;			//Offset: 0 | ElementSize: 4
		int32_t ReturnValue;			//Offset: 4 | ElementSize: 4
	};
	UChromaWrapper_GetFrameCount_Params params;
	params.animationId = animationId;

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
// Function Medieval_Dynasty.ChromaWrapper.InitChromaSDK
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UChromaWrapper::InitChromaSDK() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.ChromaWrapper.InitChromaSDK");

	struct UChromaWrapper_InitChromaSDK_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UChromaWrapper_InitChromaSDK_Params params;

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
// Function Medieval_Dynasty.ChromaWrapper.IsChromaAnimationPlaying
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: animationName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UChromaWrapper::IsChromaAnimationPlaying(struct FString animationName) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.ChromaWrapper.IsChromaAnimationPlaying");

	struct UChromaWrapper_IsChromaAnimationPlaying_Params {
		struct FString animationName;			//Offset: 0 | ElementSize: 16
		bool ReturnValue;			//Offset: 16 | ElementSize: 1
	};
	UChromaWrapper_IsChromaAnimationPlaying_Params params;
	params.animationName = animationName;

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
// Function Medieval_Dynasty.ChromaWrapper.IsInitialized
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UChromaWrapper::IsInitialized() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.ChromaWrapper.IsInitialized");

	struct UChromaWrapper_IsInitialized_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UChromaWrapper_IsInitialized_Params params;

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
// Function Medieval_Dynasty.ChromaWrapper.LoadAnimationName
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: animationName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UChromaWrapper::LoadAnimationName(struct FString animationName) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.ChromaWrapper.LoadAnimationName");

	struct UChromaWrapper_LoadAnimationName_Params {
		struct FString animationName;			//Offset: 0 | ElementSize: 16
	};
	UChromaWrapper_LoadAnimationName_Params params;
	params.animationName = animationName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.ChromaWrapper.MultiplyIntensity
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: animationId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: frameId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Intensity	Type: float	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UChromaWrapper::MultiplyIntensity(int32_t animationId, int32_t frameId, float Intensity) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.ChromaWrapper.MultiplyIntensity");

	struct UChromaWrapper_MultiplyIntensity_Params {
		int32_t animationId;			//Offset: 0 | ElementSize: 4
		int32_t frameId;			//Offset: 4 | ElementSize: 4
		float Intensity;			//Offset: 8 | ElementSize: 4
	};
	UChromaWrapper_MultiplyIntensity_Params params;
	params.animationId = animationId;
	params.frameId = frameId;
	params.Intensity = Intensity;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.ChromaWrapper.PlayChromaAnimation
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: animationName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Loop	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UChromaWrapper::PlayChromaAnimation(struct FString animationName, bool Loop) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.ChromaWrapper.PlayChromaAnimation");

	struct UChromaWrapper_PlayChromaAnimation_Params {
		struct FString animationName;			//Offset: 0 | ElementSize: 16
		bool Loop;			//Offset: 16 | ElementSize: 1
	};
	UChromaWrapper_PlayChromaAnimation_Params params;
	params.animationName = animationName;
	params.Loop = Loop;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.ChromaWrapper.SetKeyColorAllFrames
// Flags: Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: animationId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: Key	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: colorParam	Type: struct FLinearColor	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UChromaWrapper::SetKeyColorAllFrames(int32_t animationId, int32_t Key, const struct FLinearColor& colorParam) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.ChromaWrapper.SetKeyColorAllFrames");

	struct UChromaWrapper_SetKeyColorAllFrames_Params {
		int32_t animationId;			//Offset: 0 | ElementSize: 4
		int32_t Key;			//Offset: 4 | ElementSize: 4
		struct FLinearColor colorParam;			//Offset: 8 | ElementSize: 16
	};
	UChromaWrapper_SetKeyColorAllFrames_Params params;
	params.animationId = animationId;
	params.Key = Key;
	params.colorParam = colorParam;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.ChromaWrapper.SetKeysColorAllFrames
// Flags: Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable
// Params:
// Name: animationId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: KeyIDs	Type: TArray<int32_t>	Flags: Parm, ZeroConstructor, NativeAccessSpecifierPublic
// Name: colorParam	Type: struct FLinearColor	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UChromaWrapper::SetKeysColorAllFrames(int32_t animationId, TArray<int32_t> KeyIDs, const struct FLinearColor& colorParam) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.ChromaWrapper.SetKeysColorAllFrames");

	struct UChromaWrapper_SetKeysColorAllFrames_Params {
		int32_t animationId;			//Offset: 0 | ElementSize: 4
		TArray<int32_t> KeyIDs;			//Offset: 8 | ElementSize: 16
		struct FLinearColor colorParam;			//Offset: 24 | ElementSize: 16
	};
	UChromaWrapper_SetKeysColorAllFrames_Params params;
	params.animationId = animationId;
	params.KeyIDs = KeyIDs;
	params.colorParam = colorParam;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.ChromaWrapper.TrimEndFrames
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: animationId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: lastFrameId	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UChromaWrapper::TrimEndFrames(int32_t animationId, int32_t lastFrameId) {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.ChromaWrapper.TrimEndFrames");

	struct UChromaWrapper_TrimEndFrames_Params {
		int32_t animationId;			//Offset: 0 | ElementSize: 4
		int32_t lastFrameId;			//Offset: 4 | ElementSize: 4
	};
	UChromaWrapper_TrimEndFrames_Params params;
	params.animationId = animationId;
	params.lastFrameId = lastFrameId;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function Medieval_Dynasty.ChromaWrapper.UnInitChromaSDK
// Flags: Final, Native, Static, Private, BlueprintCallable
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UChromaWrapper::UnInitChromaSDK() {
	static auto fn = UObject::FindObject<UFunction>("Function Medieval_Dynasty.ChromaWrapper.UnInitChromaSDK");

	struct UChromaWrapper_UnInitChromaSDK_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UChromaWrapper_UnInitChromaSDK_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	static auto Obj = StaticClass()->CreateDefaultObject();
	Obj->ProcessEvent(fn, &params);

	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

#pragma endregion
}