#include "../SDK.h"
#include "MovieSceneCinematicShotSection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of ShotDisplayName
// Declaration: struct FString ShotDisplayName
struct FString UMovieSceneCinematicShotSection::M_GetShotDisplayName() const {
	return Read<struct FString>((byte*)this + 360);
}
struct FString* UMovieSceneCinematicShotSection::M_PtrGetShotDisplayName() {
	return reinterpret_cast<struct FString*>((byte*)this + 360);
}
void UMovieSceneCinematicShotSection::M_SetShotDisplayName(const struct FString& value) {
	Write((byte*)this + 360, value);
}
// Member Getter and Setter of DisplayName
// Declaration: struct FText DisplayName
struct FText UMovieSceneCinematicShotSection::M_GetDisplayName() const {
	return Read<struct FText>((byte*)this + 376);
}
struct FText* UMovieSceneCinematicShotSection::M_PtrGetDisplayName() {
	return reinterpret_cast<struct FText*>((byte*)this + 376);
}
void UMovieSceneCinematicShotSection::M_SetDisplayName(const struct FText& value) {
	Write((byte*)this + 376, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FString	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FString UMovieSceneCinematicShotSection::GetShotDisplayName()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName");

	struct UMovieSceneCinematicShotSection_GetShotDisplayName_Params {
		struct FString ReturnValue;			//Offset: 0 | ElementSize: 16
	};
	UMovieSceneCinematicShotSection_GetShotDisplayName_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: InShotDisplayName	Type: struct FString	Flags: Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneCinematicShotSection::SetShotDisplayName(struct FString InShotDisplayName) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName");

	struct UMovieSceneCinematicShotSection_SetShotDisplayName_Params {
		struct FString InShotDisplayName;			//Offset: 0 | ElementSize: 16
	};
	UMovieSceneCinematicShotSection_SetShotDisplayName_Params params;
	params.InShotDisplayName = InShotDisplayName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}