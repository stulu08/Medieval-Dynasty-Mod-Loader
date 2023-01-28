#include "../SDK.h"
#include "MovieScene3DConstraintSection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of ConstraintId
// Declaration: struct FGuid ConstraintId
struct FGuid UMovieScene3DConstraintSection::M_GetConstraintId() const {
	return Read<struct FGuid>((byte*)this + 232);
}
struct FGuid* UMovieScene3DConstraintSection::M_PtrGetConstraintId() {
	return reinterpret_cast<struct FGuid*>((byte*)this + 232);
}
void UMovieScene3DConstraintSection::M_SetConstraintId(const struct FGuid& value) {
	Write((byte*)this + 232, value);
}
// Member Getter and Setter of ConstraintBindingID
// Declaration: struct FMovieSceneObjectBindingID ConstraintBindingID
struct FMovieSceneObjectBindingID UMovieScene3DConstraintSection::M_GetConstraintBindingID() const {
	return Read<struct FMovieSceneObjectBindingID>((byte*)this + 248);
}
struct FMovieSceneObjectBindingID* UMovieScene3DConstraintSection::M_PtrGetConstraintBindingID() {
	return reinterpret_cast<struct FMovieSceneObjectBindingID*>((byte*)this + 248);
}
void UMovieScene3DConstraintSection::M_SetConstraintBindingID(const struct FMovieSceneObjectBindingID& value) {
	Write((byte*)this + 248, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: struct FMovieSceneObjectBindingID	Flags: ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FMovieSceneObjectBindingID UMovieScene3DConstraintSection::GetConstraintBindingID()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID");

	struct UMovieScene3DConstraintSection_GetConstraintBindingID_Params {
		struct FMovieSceneObjectBindingID ReturnValue;			//Offset: 0 | ElementSize: 24
	};
	UMovieScene3DConstraintSection_GetConstraintBindingID_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
// Flags: Final, Native, Public, HasOutParms, BlueprintCallable
// Params:
// Name: InConstraintBindingID	Type: struct FMovieSceneObjectBindingID	Flags: ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieScene3DConstraintSection::SetConstraintBindingID(const struct FMovieSceneObjectBindingID& InConstraintBindingID) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID");

	struct UMovieScene3DConstraintSection_SetConstraintBindingID_Params {
		struct FMovieSceneObjectBindingID InConstraintBindingID;			//Offset: 0 | ElementSize: 24
	};
	UMovieScene3DConstraintSection_SetConstraintBindingID_Params params;
	params.InConstraintBindingID = InConstraintBindingID;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}