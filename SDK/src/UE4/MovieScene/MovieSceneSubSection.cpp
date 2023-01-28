#include "../SDK.h"
#include "MovieSceneSubSection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Parameters
// Declaration: struct FMovieSceneSectionParameters Parameters
struct FMovieSceneSectionParameters UMovieSceneSubSection::M_GetParameters() const {
	return Read<struct FMovieSceneSectionParameters>((byte*)this + 232);
}
struct FMovieSceneSectionParameters* UMovieSceneSubSection::M_PtrGetParameters() {
	return reinterpret_cast<struct FMovieSceneSectionParameters*>((byte*)this + 232);
}
void UMovieSceneSubSection::M_SetParameters(const struct FMovieSceneSectionParameters& value) {
	Write((byte*)this + 232, value);
}
// Member Getter and Setter of StartOffset
// Declaration: float StartOffset
float UMovieSceneSubSection::M_GetStartOffset() const {
	return Read<float>((byte*)this + 268);
}
float* UMovieSceneSubSection::M_PtrGetStartOffset() {
	return reinterpret_cast<float*>((byte*)this + 268);
}
void UMovieSceneSubSection::M_SetStartOffset(const float& value) {
	Write((byte*)this + 268, value);
}
// Member Getter and Setter of TimeScale
// Declaration: float TimeScale
float UMovieSceneSubSection::M_GetTimeScale() const {
	return Read<float>((byte*)this + 272);
}
float* UMovieSceneSubSection::M_PtrGetTimeScale() {
	return reinterpret_cast<float*>((byte*)this + 272);
}
void UMovieSceneSubSection::M_SetTimeScale(const float& value) {
	Write((byte*)this + 272, value);
}
// Member Getter and Setter of PrerollTime
// Declaration: float PrerollTime
float UMovieSceneSubSection::M_GetPrerollTime() const {
	return Read<float>((byte*)this + 276);
}
float* UMovieSceneSubSection::M_PtrGetPrerollTime() {
	return reinterpret_cast<float*>((byte*)this + 276);
}
void UMovieSceneSubSection::M_SetPrerollTime(const float& value) {
	Write((byte*)this + 276, value);
}
// Member Getter and Setter of NetworkMask
// Declaration: unsigned char NetworkMask
unsigned char UMovieSceneSubSection::M_GetNetworkMask() const {
	return Read<unsigned char>((byte*)this + 280);
}
unsigned char* UMovieSceneSubSection::M_PtrGetNetworkMask() {
	return reinterpret_cast<unsigned char*>((byte*)this + 280);
}
void UMovieSceneSubSection::M_SetNetworkMask(const unsigned char& value) {
	Write((byte*)this + 280, value);
}
// Member Getter and Setter of SubSequence
// Declaration: class UMovieSceneSequence* SubSequence
class UMovieSceneSequence* UMovieSceneSubSection::M_GetSubSequence() const {
	return Read<class UMovieSceneSequence*>((byte*)this + 288);
}
class UMovieSceneSequence** UMovieSceneSubSection::M_PtrGetSubSequence() {
	return reinterpret_cast<class UMovieSceneSequence**>((byte*)this + 288);
}
void UMovieSceneSubSection::M_SetSubSequence(const class UMovieSceneSequence*& value) {
	Write((byte*)this + 288, value);
}
// Member Getter and Setter of ActorToRecord
// Declaration: TLazyObjectPtr<class AActor> ActorToRecord
TLazyObjectPtr<class AActor> UMovieSceneSubSection::M_GetActorToRecord() const {
	return Read<TLazyObjectPtr<class AActor>>((byte*)this + 296);
}
TLazyObjectPtr<class AActor>* UMovieSceneSubSection::M_PtrGetActorToRecord() {
	return reinterpret_cast<TLazyObjectPtr<class AActor>*>((byte*)this + 296);
}
void UMovieSceneSubSection::M_SetActorToRecord(const TLazyObjectPtr<class AActor>& value) {
	Write((byte*)this + 296, value);
}
// Member Getter and Setter of TargetSequenceName
// Declaration: struct FString TargetSequenceName
struct FString UMovieSceneSubSection::M_GetTargetSequenceName() const {
	return Read<struct FString>((byte*)this + 328);
}
struct FString* UMovieSceneSubSection::M_PtrGetTargetSequenceName() {
	return reinterpret_cast<struct FString*>((byte*)this + 328);
}
void UMovieSceneSubSection::M_SetTargetSequenceName(const struct FString& value) {
	Write((byte*)this + 328, value);
}
// Member Getter and Setter of TargetPathToRecordTo
// Declaration: struct FDirectoryPath TargetPathToRecordTo
struct FDirectoryPath UMovieSceneSubSection::M_GetTargetPathToRecordTo() const {
	return Read<struct FDirectoryPath>((byte*)this + 344);
}
struct FDirectoryPath* UMovieSceneSubSection::M_PtrGetTargetPathToRecordTo() {
	return reinterpret_cast<struct FDirectoryPath*>((byte*)this + 344);
}
void UMovieSceneSubSection::M_SetTargetPathToRecordTo(const struct FDirectoryPath& value) {
	Write((byte*)this + 344, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function MovieScene.MovieSceneSubSection.GetSequence
// Flags: Final, Native, Public, BlueprintCallable, BlueprintPure, Const
// Params:
// Name: ReturnValue	Type: class UMovieSceneSequence*	Flags: Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
class UMovieSceneSequence* UMovieSceneSubSection::GetSequence()/* const*/ {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSubSection.GetSequence");

	struct UMovieSceneSubSection_GetSequence_Params {
		class UMovieSceneSequence* ReturnValue;			//Offset: 0 | ElementSize: 8
	};
	UMovieSceneSubSection_GetSequence_Params params;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

	return params.ReturnValue;
}

/////////////////////////////////////////////
// Function MovieScene.MovieSceneSubSection.SetSequence
// Flags: Final, Native, Public, BlueprintCallable
// Params:
// Name: Sequence	Type: class UMovieSceneSequence*	Flags: Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UMovieSceneSubSection::SetSequence(class UMovieSceneSequence* Sequence) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSubSection.SetSequence");

	struct UMovieSceneSubSection_SetSequence_Params {
		class UMovieSceneSequence* Sequence;			//Offset: 0 | ElementSize: 8
	};
	UMovieSceneSubSection_SetSequence_Params params;
	params.Sequence = Sequence;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}