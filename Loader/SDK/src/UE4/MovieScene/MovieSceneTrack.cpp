#include "../SDK.h"
#include "MovieSceneTrack.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of EvalOptions
// Declaration: struct FMovieSceneTrackEvalOptions EvalOptions
struct FMovieSceneTrackEvalOptions UMovieSceneTrack::M_GetEvalOptions() const {
	return Read<struct FMovieSceneTrackEvalOptions>((byte*)this + 80);
}
struct FMovieSceneTrackEvalOptions* UMovieSceneTrack::M_PtrGetEvalOptions() {
	return reinterpret_cast<struct FMovieSceneTrackEvalOptions*>((byte*)this + 80);
}
void UMovieSceneTrack::M_SetEvalOptions(const struct FMovieSceneTrackEvalOptions& value) {
	Write((byte*)this + 80, value);
}
// Member Getter and Setter of bIsEvalDisabled
// Declaration: bool bIsEvalDisabled
bool UMovieSceneTrack::M_GetbIsEvalDisabled() const {
	return Read<bool>((byte*)this + 85);
}
bool* UMovieSceneTrack::M_PtrGetbIsEvalDisabled() {
	return reinterpret_cast<bool*>((byte*)this + 85);
}
void UMovieSceneTrack::M_SetbIsEvalDisabled(const bool& value) {
	Write((byte*)this + 85, value);
}
// Member Getter and Setter of RowsDisabled
// Declaration: TArray<int32_t> RowsDisabled
TArray<int32_t> UMovieSceneTrack::M_GetRowsDisabled() const {
	return Read<TArray<int32_t>>((byte*)this + 88);
}
TArray<int32_t>* UMovieSceneTrack::M_PtrGetRowsDisabled() {
	return reinterpret_cast<TArray<int32_t>*>((byte*)this + 88);
}
void UMovieSceneTrack::M_SetRowsDisabled(const TArray<int32_t>& value) {
	Write((byte*)this + 88, value);
}
// Member Getter and Setter of EvaluationFieldGuid
// Declaration: struct FGuid EvaluationFieldGuid
struct FGuid UMovieSceneTrack::M_GetEvaluationFieldGuid() const {
	return Read<struct FGuid>((byte*)this + 108);
}
struct FGuid* UMovieSceneTrack::M_PtrGetEvaluationFieldGuid() {
	return reinterpret_cast<struct FGuid*>((byte*)this + 108);
}
void UMovieSceneTrack::M_SetEvaluationFieldGuid(const struct FGuid& value) {
	Write((byte*)this + 108, value);
}
// Member Getter and Setter of EvaluationField
// Declaration: struct FMovieSceneTrackEvaluationField EvaluationField
struct FMovieSceneTrackEvaluationField UMovieSceneTrack::M_GetEvaluationField() const {
	return Read<struct FMovieSceneTrackEvaluationField>((byte*)this + 128);
}
struct FMovieSceneTrackEvaluationField* UMovieSceneTrack::M_PtrGetEvaluationField() {
	return reinterpret_cast<struct FMovieSceneTrackEvaluationField*>((byte*)this + 128);
}
void UMovieSceneTrack::M_SetEvaluationField(const struct FMovieSceneTrackEvaluationField& value) {
	Write((byte*)this + 128, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}