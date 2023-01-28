#include "../SDK.h"
#include "MovieSceneLevelVisibilitySection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Visibility
// Declaration: ELevelVisibility Visibility
ELevelVisibility UMovieSceneLevelVisibilitySection::M_GetVisibility() const {
	return Read<ELevelVisibility>((byte*)this + 240);
}
ELevelVisibility* UMovieSceneLevelVisibilitySection::M_PtrGetVisibility() {
	return reinterpret_cast<ELevelVisibility*>((byte*)this + 240);
}
void UMovieSceneLevelVisibilitySection::M_SetVisibility(const ELevelVisibility& value) {
	Write((byte*)this + 240, value);
}
// Member Getter and Setter of LevelNames
// Declaration: TArray<struct FName> LevelNames
TArray<struct FName> UMovieSceneLevelVisibilitySection::M_GetLevelNames() const {
	return Read<TArray<struct FName>>((byte*)this + 248);
}
TArray<struct FName>* UMovieSceneLevelVisibilitySection::M_PtrGetLevelNames() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 248);
}
void UMovieSceneLevelVisibilitySection::M_SetLevelNames(const TArray<struct FName>& value) {
	Write((byte*)this + 248, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: TArray<struct FName>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<struct FName> UMovieSceneLevelVisibilitySection::GetLevelNames()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames");

	struct UMovieSceneLevelVisibilitySection_GetLevelNames_Params {
		TArray<struct FName> ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UMovieSceneLevelVisibilitySection_GetLevelNames_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: ELevelVisibility	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
ELevelVisibility UMovieSceneLevelVisibilitySection::GetVisibility()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility");

	struct UMovieSceneLevelVisibilitySection_GetVisibility_Params {
		ELevelVisibility ReturnValue;			//Offset: 0 | ElementSize: 1
	};
	UMovieSceneLevelVisibilitySection_GetVisibility_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: InLevelNames	Type: TArray<struct FName>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneLevelVisibilitySection::SetLevelNames(const TArray<struct FName>& InLevelNames) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames");

	struct UMovieSceneLevelVisibilitySection_SetLevelNames_Params {
		TArray<struct FName> InLevelNames;			//Offset: 0 | ElementSize: 16
	};
	UMovieSceneLevelVisibilitySection_SetLevelNames_Params params;
	params.InLevelNames = InLevelNames;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InVisibility	Type: ELevelVisibility	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneLevelVisibilitySection::SetVisibility(ELevelVisibility InVisibility) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility");

	struct UMovieSceneLevelVisibilitySection_SetVisibility_Params {
		ELevelVisibility InVisibility;			//Offset: 0 | ElementSize: 1
	};
	UMovieSceneLevelVisibilitySection_SetVisibility_Params params;
	params.InVisibility = InVisibility;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}