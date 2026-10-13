#include "../SDK.h"
#include "MovieSceneSection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of EvalOptions
// Declaration: struct FMovieSceneSectionEvalOptions EvalOptions
struct FMovieSceneSectionEvalOptions UMovieSceneSection::M_GetEvalOptions() const {
	return Read<struct FMovieSceneSectionEvalOptions>((byte*)this + 80);
}
struct FMovieSceneSectionEvalOptions* UMovieSceneSection::M_PtrGetEvalOptions() {
	return reinterpret_cast<struct FMovieSceneSectionEvalOptions*>((byte*)this + 80);
}
void UMovieSceneSection::M_SetEvalOptions(const struct FMovieSceneSectionEvalOptions& value) {
	Write((byte*)this + 80, value);
}
// Member Getter and Setter of Easing
// Declaration: struct FMovieSceneEasingSettings Easing
struct FMovieSceneEasingSettings UMovieSceneSection::M_GetEasing() const {
	return Read<struct FMovieSceneEasingSettings>((byte*)this + 88);
}
struct FMovieSceneEasingSettings* UMovieSceneSection::M_PtrGetEasing() {
	return reinterpret_cast<struct FMovieSceneEasingSettings*>((byte*)this + 88);
}
void UMovieSceneSection::M_SetEasing(const struct FMovieSceneEasingSettings& value) {
	Write((byte*)this + 88, value);
}
// Member Getter and Setter of SectionRange
// Declaration: struct FMovieSceneFrameRange SectionRange
struct FMovieSceneFrameRange UMovieSceneSection::M_GetSectionRange() const {
	return Read<struct FMovieSceneFrameRange>((byte*)this + 144);
}
struct FMovieSceneFrameRange* UMovieSceneSection::M_PtrGetSectionRange() {
	return reinterpret_cast<struct FMovieSceneFrameRange*>((byte*)this + 144);
}
void UMovieSceneSection::M_SetSectionRange(const struct FMovieSceneFrameRange& value) {
	Write((byte*)this + 144, value);
}
// Member Getter and Setter of PreRollFrames
// Declaration: struct FFrameNumber PreRollFrames
struct FFrameNumber UMovieSceneSection::M_GetPreRollFrames() const {
	return Read<struct FFrameNumber>((byte*)this + 160);
}
struct FFrameNumber* UMovieSceneSection::M_PtrGetPreRollFrames() {
	return reinterpret_cast<struct FFrameNumber*>((byte*)this + 160);
}
void UMovieSceneSection::M_SetPreRollFrames(const struct FFrameNumber& value) {
	Write((byte*)this + 160, value);
}
// Member Getter and Setter of PostRollFrames
// Declaration: struct FFrameNumber PostRollFrames
struct FFrameNumber UMovieSceneSection::M_GetPostRollFrames() const {
	return Read<struct FFrameNumber>((byte*)this + 164);
}
struct FFrameNumber* UMovieSceneSection::M_PtrGetPostRollFrames() {
	return reinterpret_cast<struct FFrameNumber*>((byte*)this + 164);
}
void UMovieSceneSection::M_SetPostRollFrames(const struct FFrameNumber& value) {
	Write((byte*)this + 164, value);
}
// Member Getter and Setter of RowIndex
// Declaration: int32_t RowIndex
int32_t UMovieSceneSection::M_GetRowIndex() const {
	return Read<int32_t>((byte*)this + 168);
}
int32_t* UMovieSceneSection::M_PtrGetRowIndex() {
	return reinterpret_cast<int32_t*>((byte*)this + 168);
}
void UMovieSceneSection::M_SetRowIndex(const int32_t& value) {
	Write((byte*)this + 168, value);
}
// Member Getter and Setter of OverlapPriority
// Declaration: int32_t OverlapPriority
int32_t UMovieSceneSection::M_GetOverlapPriority() const {
	return Read<int32_t>((byte*)this + 172);
}
int32_t* UMovieSceneSection::M_PtrGetOverlapPriority() {
	return reinterpret_cast<int32_t*>((byte*)this + 172);
}
void UMovieSceneSection::M_SetOverlapPriority(const int32_t& value) {
	Write((byte*)this + 172, value);
}
// Member Getter and Setter of bIsActive
// Declaration: unsigned char bIsActive : 1
unsigned char UMovieSceneSection::M_GetbIsActive() const {
	return Read<unsigned char>((byte*)this + 176);
}
unsigned char* UMovieSceneSection::M_PtrGetbIsActive() {
	return reinterpret_cast<unsigned char*>((byte*)this + 176);
}
void UMovieSceneSection::M_SetbIsActive(const unsigned char& value) {
	Write((byte*)this + 176, value);
}
// Member Getter and Setter of bIsLocked
// Declaration: unsigned char bIsLocked : 1
unsigned char UMovieSceneSection::M_GetbIsLocked() const {
	return Read<unsigned char>((byte*)this + 176);
}
unsigned char* UMovieSceneSection::M_PtrGetbIsLocked() {
	return reinterpret_cast<unsigned char*>((byte*)this + 176);
}
void UMovieSceneSection::M_SetbIsLocked(const unsigned char& value) {
	Write((byte*)this + 176, value);
}
// Member Getter and Setter of StartTime
// Declaration: float StartTime
float UMovieSceneSection::M_GetStartTime() const {
	return Read<float>((byte*)this + 180);
}
float* UMovieSceneSection::M_PtrGetStartTime() {
	return reinterpret_cast<float*>((byte*)this + 180);
}
void UMovieSceneSection::M_SetStartTime(const float& value) {
	Write((byte*)this + 180, value);
}
// Member Getter and Setter of EndTime
// Declaration: float EndTime
float UMovieSceneSection::M_GetEndTime() const {
	return Read<float>((byte*)this + 184);
}
float* UMovieSceneSection::M_PtrGetEndTime() {
	return reinterpret_cast<float*>((byte*)this + 184);
}
void UMovieSceneSection::M_SetEndTime(const float& value) {
	Write((byte*)this + 184, value);
}
// Member Getter and Setter of PrerollTime
// Declaration: float PrerollTime
float UMovieSceneSection::M_GetPrerollTime() const {
	return Read<float>((byte*)this + 188);
}
float* UMovieSceneSection::M_PtrGetPrerollTime() {
	return reinterpret_cast<float*>((byte*)this + 188);
}
void UMovieSceneSection::M_SetPrerollTime(const float& value) {
	Write((byte*)this + 188, value);
}
// Member Getter and Setter of PostrollTime
// Declaration: float PostrollTime
float UMovieSceneSection::M_GetPostrollTime() const {
	return Read<float>((byte*)this + 192);
}
float* UMovieSceneSection::M_PtrGetPostrollTime() {
	return reinterpret_cast<float*>((byte*)this + 192);
}
void UMovieSceneSection::M_SetPostrollTime(const float& value) {
	Write((byte*)this + 192, value);
}
// Member Getter and Setter of bIsInfinite
// Declaration: unsigned char bIsInfinite : 1
unsigned char UMovieSceneSection::M_GetbIsInfinite() const {
	return Read<unsigned char>((byte*)this + 196);
}
unsigned char* UMovieSceneSection::M_PtrGetbIsInfinite() {
	return reinterpret_cast<unsigned char*>((byte*)this + 196);
}
void UMovieSceneSection::M_SetbIsInfinite(const unsigned char& value) {
	Write((byte*)this + 196, value);
}
// Member Getter and Setter of bSupportsInfiniteRange
// Declaration: bool bSupportsInfiniteRange
bool UMovieSceneSection::M_GetbSupportsInfiniteRange() const {
	return Read<bool>((byte*)this + 200);
}
bool* UMovieSceneSection::M_PtrGetbSupportsInfiniteRange() {
	return reinterpret_cast<bool*>((byte*)this + 200);
}
void UMovieSceneSection::M_SetbSupportsInfiniteRange(const bool& value) {
	Write((byte*)this + 200, value);
}
// Member Getter and Setter of BlendType
// Declaration: struct FOptionalMovieSceneBlendType BlendType
struct FOptionalMovieSceneBlendType UMovieSceneSection::M_GetBlendType() const {
	return Read<struct FOptionalMovieSceneBlendType>((byte*)this + 201);
}
struct FOptionalMovieSceneBlendType* UMovieSceneSection::M_PtrGetBlendType() {
	return reinterpret_cast<struct FOptionalMovieSceneBlendType*>((byte*)this + 201);
}
void UMovieSceneSection::M_SetBlendType(const struct FOptionalMovieSceneBlendType& value) {
	Write((byte*)this + 201, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function MovieScene.MovieSceneSection.GetBlendType
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FOptionalMovieSceneBlendType	Flags: Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FOptionalMovieSceneBlendType UMovieSceneSection::GetBlendType()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetBlendType");

	struct UMovieSceneSection_GetBlendType_Params {
		struct FOptionalMovieSceneBlendType ReturnValue;			//Offset: 0 | ElementSize: 2
	};
	UMovieSceneSection_GetBlendType_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSection.GetCompletionMode
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: EMovieSceneCompletionMode	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
EMovieSceneCompletionMode UMovieSceneSection::GetCompletionMode()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetCompletionMode");

	struct UMovieSceneSection_GetCompletionMode_Params {
		EMovieSceneCompletionMode ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMovieSceneSection_GetCompletionMode_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSection.GetOverlapPriority
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UMovieSceneSection::GetOverlapPriority()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetOverlapPriority");

	struct UMovieSceneSection_GetOverlapPriority_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UMovieSceneSection_GetOverlapPriority_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSection.GetPostRollFrames
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UMovieSceneSection::GetPostRollFrames()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetPostRollFrames");

	struct UMovieSceneSection_GetPostRollFrames_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UMovieSceneSection_GetPostRollFrames_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSection.GetPreRollFrames
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UMovieSceneSection::GetPreRollFrames()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetPreRollFrames");

	struct UMovieSceneSection_GetPreRollFrames_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UMovieSceneSection_GetPreRollFrames_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSection.GetRowIndex
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: int32_t	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
int32_t UMovieSceneSection::GetRowIndex()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetRowIndex");

	struct UMovieSceneSection_GetRowIndex_Params {
		int32_t ReturnValue;			//Offset: 0 | ElementSize: 4
	};
	UMovieSceneSection_GetRowIndex_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSection.IsActive
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMovieSceneSection::IsActive()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.IsActive");

	struct UMovieSceneSection_IsActive_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMovieSceneSection_IsActive_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSection.IsLocked
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: bool	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
bool UMovieSceneSection::IsLocked()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.IsLocked");

	struct UMovieSceneSection_IsLocked_Params {
		bool ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMovieSceneSection_IsLocked_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSection.SetBlendType
// Flags: RequiredAPI, Native, Public, BlueprintCallable
// Params:
// Name: InBlendType	Type: EMovieSceneBlendType	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneSection::SetBlendType(EMovieSceneBlendType InBlendType) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetBlendType");

	struct UMovieSceneSection_SetBlendType_Params {
		EMovieSceneBlendType InBlendType;			//Offset: 0 | ElementSize: 1
	};
	UMovieSceneSection_SetBlendType_Params params;
	params.InBlendType = InBlendType;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSection.SetCompletionMode
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InCompletionMode	Type: EMovieSceneCompletionMode	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneSection::SetCompletionMode(EMovieSceneCompletionMode InCompletionMode) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetCompletionMode");

	struct UMovieSceneSection_SetCompletionMode_Params {
		EMovieSceneCompletionMode InCompletionMode;			//Offset: 0 | ElementSize: 1
	};
	UMovieSceneSection_SetCompletionMode_Params params;
	params.InCompletionMode = InCompletionMode;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSection.SetIsActive
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bInIsActive	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneSection::SetIsActive(bool bInIsActive) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetIsActive");

	struct UMovieSceneSection_SetIsActive_Params {
		bool bInIsActive;			//Offset: 0 | ElementSize: 1
	};
	UMovieSceneSection_SetIsActive_Params params;
	params.bInIsActive = bInIsActive;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSection.SetIsLocked
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: bInIsLocked	Type: bool	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneSection::SetIsLocked(bool bInIsLocked) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetIsLocked");

	struct UMovieSceneSection_SetIsLocked_Params {
		bool bInIsLocked;			//Offset: 0 | ElementSize: 1
	};
	UMovieSceneSection_SetIsLocked_Params params;
	params.bInIsLocked = bInIsLocked;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSection.SetOverlapPriority
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewPriority	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneSection::SetOverlapPriority(int32_t NewPriority) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetOverlapPriority");

	struct UMovieSceneSection_SetOverlapPriority_Params {
		int32_t NewPriority;			//Offset: 0 | ElementSize: 4
	};
	UMovieSceneSection_SetOverlapPriority_Params params;
	params.NewPriority = NewPriority;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSection.SetPostRollFrames
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InPostRollFrames	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneSection::SetPostRollFrames(int32_t InPostRollFrames) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetPostRollFrames");

	struct UMovieSceneSection_SetPostRollFrames_Params {
		int32_t InPostRollFrames;			//Offset: 0 | ElementSize: 4
	};
	UMovieSceneSection_SetPostRollFrames_Params params;
	params.InPostRollFrames = InPostRollFrames;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSection.SetPreRollFrames
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InPreRollFrames	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneSection::SetPreRollFrames(int32_t InPreRollFrames) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetPreRollFrames");

	struct UMovieSceneSection_SetPreRollFrames_Params {
		int32_t InPreRollFrames;			//Offset: 0 | ElementSize: 4
	};
	UMovieSceneSection_SetPreRollFrames_Params params;
	params.InPreRollFrames = InPreRollFrames;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSection.SetRowIndex
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: NewRowIndex	Type: int32_t	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneSection::SetRowIndex(int32_t NewRowIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetRowIndex");

	struct UMovieSceneSection_SetRowIndex_Params {
		int32_t NewRowIndex;			//Offset: 0 | ElementSize: 4
	};
	UMovieSceneSection_SetRowIndex_Params params;
	params.NewRowIndex = NewRowIndex;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}