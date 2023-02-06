#include "../SDK.h"
#include "MovieSceneSequence.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of CompiledData
// Declaration: class UMovieSceneCompiledData* CompiledData
class UMovieSceneCompiledData* UMovieSceneSequence::M_GetCompiledData() const {
	return Read<class UMovieSceneCompiledData*>((byte*)this + 80);
}
class UMovieSceneCompiledData** UMovieSceneSequence::M_PtrGetCompiledData() {
	return reinterpret_cast<class UMovieSceneCompiledData**>((byte*)this + 80);
}
void UMovieSceneSequence::M_SetCompiledData(const class UMovieSceneCompiledData*& value) {
	Write((byte*)this + 80, value);
}
// Member Getter and Setter of DefaultCompletionMode
// Declaration: EMovieSceneCompletionMode DefaultCompletionMode
EMovieSceneCompletionMode UMovieSceneSequence::M_GetDefaultCompletionMode() const {
	return Read<EMovieSceneCompletionMode>((byte*)this + 88);
}
EMovieSceneCompletionMode* UMovieSceneSequence::M_PtrGetDefaultCompletionMode() {
	return reinterpret_cast<EMovieSceneCompletionMode*>((byte*)this + 88);
}
void UMovieSceneSequence::M_SetDefaultCompletionMode(const EMovieSceneCompletionMode& value) {
	Write((byte*)this + 88, value);
}
// Member Getter and Setter of bParentContextsAreSignificant
// Declaration: bool bParentContextsAreSignificant
bool UMovieSceneSequence::M_GetbParentContextsAreSignificant() const {
	return Read<bool>((byte*)this + 89);
}
bool* UMovieSceneSequence::M_PtrGetbParentContextsAreSignificant() {
	return reinterpret_cast<bool*>((byte*)this + 89);
}
void UMovieSceneSequence::M_SetbParentContextsAreSignificant(const bool& value) {
	Write((byte*)this + 89, value);
}
// Member Getter and Setter of bPlayableDirectly
// Declaration: bool bPlayableDirectly
bool UMovieSceneSequence::M_GetbPlayableDirectly() const {
	return Read<bool>((byte*)this + 90);
}
bool* UMovieSceneSequence::M_PtrGetbPlayableDirectly() {
	return reinterpret_cast<bool*>((byte*)this + 90);
}
void UMovieSceneSequence::M_SetbPlayableDirectly(const bool& value) {
	Write((byte*)this + 90, value);
}
// Member Getter and Setter of SequenceFlags
// Declaration: EMovieSceneSequenceFlags SequenceFlags
EMovieSceneSequenceFlags UMovieSceneSequence::M_GetSequenceFlags() const {
	return Read<EMovieSceneSequenceFlags>((byte*)this + 91);
}
EMovieSceneSequenceFlags* UMovieSceneSequence::M_PtrGetSequenceFlags() {
	return reinterpret_cast<EMovieSceneSequenceFlags*>((byte*)this + 91);
}
void UMovieSceneSequence::M_SetSequenceFlags(const EMovieSceneSequenceFlags& value) {
	Write((byte*)this + 91, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequence.FindBindingByTag
// Flags: Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: InBindingName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: struct FMovieSceneObjectBindingID	Flags: Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
struct FMovieSceneObjectBindingID UMovieSceneSequence::FindBindingByTag(struct FName InBindingName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequence.FindBindingByTag");

	struct UMovieSceneSequence_FindBindingByTag_Params {
		struct FName InBindingName;			//Offset: 0 | ElementSize: 8
		struct FMovieSceneObjectBindingID ReturnValue;			//Offset: 8 | ElementSize: 24
	};
	UMovieSceneSequence_FindBindingByTag_Params params;
	params.InBindingName = InBindingName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSequence.FindBindingsByTag
// Flags: Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: InBindingName	Type: struct FName	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
// Name: ReturnValue	Type: TArray<struct FMovieSceneObjectBindingID>	Flags: ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
TArray<struct FMovieSceneObjectBindingID> UMovieSceneSequence::FindBindingsByTag(struct FName InBindingName)/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequence.FindBindingsByTag");

	struct UMovieSceneSequence_FindBindingsByTag_Params {
		struct FName InBindingName;			//Offset: 0 | ElementSize: 8
		TArray<struct FMovieSceneObjectBindingID> ReturnValue;			//Offset: 8 | ElementSize: 16
	};
	UMovieSceneSequence_FindBindingsByTag_Params params;
	params.InBindingName = InBindingName;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

#pragma endregion
}