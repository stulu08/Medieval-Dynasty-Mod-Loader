#include "../SDK.h"
#include "MovieSceneCompiledData.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of EvaluationTemplate
// Declaration: struct FMovieSceneEvaluationTemplate EvaluationTemplate
struct FMovieSceneEvaluationTemplate UMovieSceneCompiledData::M_GetEvaluationTemplate() const {
	return Read<struct FMovieSceneEvaluationTemplate>((byte*)this + 40);
}
struct FMovieSceneEvaluationTemplate* UMovieSceneCompiledData::M_PtrGetEvaluationTemplate() {
	return reinterpret_cast<struct FMovieSceneEvaluationTemplate*>((byte*)this + 40);
}
void UMovieSceneCompiledData::M_SetEvaluationTemplate(const struct FMovieSceneEvaluationTemplate& value) {
	Write((byte*)this + 40, value);
}
// Member Getter and Setter of Hierarchy
// Declaration: struct FMovieSceneSequenceHierarchy Hierarchy
struct FMovieSceneSequenceHierarchy UMovieSceneCompiledData::M_GetHierarchy() const {
	return Read<struct FMovieSceneSequenceHierarchy>((byte*)this + 392);
}
struct FMovieSceneSequenceHierarchy* UMovieSceneCompiledData::M_PtrGetHierarchy() {
	return reinterpret_cast<struct FMovieSceneSequenceHierarchy*>((byte*)this + 392);
}
void UMovieSceneCompiledData::M_SetHierarchy(const struct FMovieSceneSequenceHierarchy& value) {
	Write((byte*)this + 392, value);
}
// Member Getter and Setter of EntityComponentField
// Declaration: struct FMovieSceneEntityComponentField EntityComponentField
struct FMovieSceneEntityComponentField UMovieSceneCompiledData::M_GetEntityComponentField() const {
	return Read<struct FMovieSceneEntityComponentField>((byte*)this + 672);
}
struct FMovieSceneEntityComponentField* UMovieSceneCompiledData::M_PtrGetEntityComponentField() {
	return reinterpret_cast<struct FMovieSceneEntityComponentField*>((byte*)this + 672);
}
void UMovieSceneCompiledData::M_SetEntityComponentField(const struct FMovieSceneEntityComponentField& value) {
	Write((byte*)this + 672, value);
}
// Member Getter and Setter of TrackTemplateField
// Declaration: struct FMovieSceneEvaluationField TrackTemplateField
struct FMovieSceneEvaluationField UMovieSceneCompiledData::M_GetTrackTemplateField() const {
	return Read<struct FMovieSceneEvaluationField>((byte*)this + 912);
}
struct FMovieSceneEvaluationField* UMovieSceneCompiledData::M_PtrGetTrackTemplateField() {
	return reinterpret_cast<struct FMovieSceneEvaluationField*>((byte*)this + 912);
}
void UMovieSceneCompiledData::M_SetTrackTemplateField(const struct FMovieSceneEvaluationField& value) {
	Write((byte*)this + 912, value);
}
// Member Getter and Setter of DeterminismFences
// Declaration: TArray<struct FFrameTime> DeterminismFences
TArray<struct FFrameTime> UMovieSceneCompiledData::M_GetDeterminismFences() const {
	return Read<TArray<struct FFrameTime>>((byte*)this + 960);
}
TArray<struct FFrameTime>* UMovieSceneCompiledData::M_PtrGetDeterminismFences() {
	return reinterpret_cast<TArray<struct FFrameTime>*>((byte*)this + 960);
}
void UMovieSceneCompiledData::M_SetDeterminismFences(const TArray<struct FFrameTime>& value) {
	Write((byte*)this + 960, value);
}
// Member Getter and Setter of CompiledSignature
// Declaration: struct FGuid CompiledSignature
struct FGuid UMovieSceneCompiledData::M_GetCompiledSignature() const {
	return Read<struct FGuid>((byte*)this + 976);
}
struct FGuid* UMovieSceneCompiledData::M_PtrGetCompiledSignature() {
	return reinterpret_cast<struct FGuid*>((byte*)this + 976);
}
void UMovieSceneCompiledData::M_SetCompiledSignature(const struct FGuid& value) {
	Write((byte*)this + 976, value);
}
// Member Getter and Setter of CompilerVersion
// Declaration: struct FGuid CompilerVersion
struct FGuid UMovieSceneCompiledData::M_GetCompilerVersion() const {
	return Read<struct FGuid>((byte*)this + 992);
}
struct FGuid* UMovieSceneCompiledData::M_PtrGetCompilerVersion() {
	return reinterpret_cast<struct FGuid*>((byte*)this + 992);
}
void UMovieSceneCompiledData::M_SetCompilerVersion(const struct FGuid& value) {
	Write((byte*)this + 992, value);
}
// Member Getter and Setter of AccumulatedMask
// Declaration: struct FMovieSceneSequenceCompilerMaskStruct AccumulatedMask
struct FMovieSceneSequenceCompilerMaskStruct UMovieSceneCompiledData::M_GetAccumulatedMask() const {
	return Read<struct FMovieSceneSequenceCompilerMaskStruct>((byte*)this + 1008);
}
struct FMovieSceneSequenceCompilerMaskStruct* UMovieSceneCompiledData::M_PtrGetAccumulatedMask() {
	return reinterpret_cast<struct FMovieSceneSequenceCompilerMaskStruct*>((byte*)this + 1008);
}
void UMovieSceneCompiledData::M_SetAccumulatedMask(const struct FMovieSceneSequenceCompilerMaskStruct& value) {
	Write((byte*)this + 1008, value);
}
// Member Getter and Setter of AllocatedMask
// Declaration: struct FMovieSceneSequenceCompilerMaskStruct AllocatedMask
struct FMovieSceneSequenceCompilerMaskStruct UMovieSceneCompiledData::M_GetAllocatedMask() const {
	return Read<struct FMovieSceneSequenceCompilerMaskStruct>((byte*)this + 1009);
}
struct FMovieSceneSequenceCompilerMaskStruct* UMovieSceneCompiledData::M_PtrGetAllocatedMask() {
	return reinterpret_cast<struct FMovieSceneSequenceCompilerMaskStruct*>((byte*)this + 1009);
}
void UMovieSceneCompiledData::M_SetAllocatedMask(const struct FMovieSceneSequenceCompilerMaskStruct& value) {
	Write((byte*)this + 1009, value);
}
// Member Getter and Setter of AccumulatedFlags
// Declaration: EMovieSceneSequenceFlags AccumulatedFlags
EMovieSceneSequenceFlags UMovieSceneCompiledData::M_GetAccumulatedFlags() const {
	return Read<EMovieSceneSequenceFlags>((byte*)this + 1010);
}
EMovieSceneSequenceFlags* UMovieSceneCompiledData::M_PtrGetAccumulatedFlags() {
	return reinterpret_cast<EMovieSceneSequenceFlags*>((byte*)this + 1010);
}
void UMovieSceneCompiledData::M_SetAccumulatedFlags(const EMovieSceneSequenceFlags& value) {
	Write((byte*)this + 1010, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}