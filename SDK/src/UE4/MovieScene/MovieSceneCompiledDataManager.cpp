#include "../SDK.h"
#include "MovieSceneCompiledDataManager.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Hierarchies
// Declaration: TMap<int32_t, struct FMovieSceneSequenceHierarchy> Hierarchies
TMap<int32_t, struct FMovieSceneSequenceHierarchy> UMovieSceneCompiledDataManager::M_GetHierarchies() const {
	return Read<TMap<int32_t, struct FMovieSceneSequenceHierarchy>>((byte*)this + 216);
}
TMap<int32_t, struct FMovieSceneSequenceHierarchy>* UMovieSceneCompiledDataManager::M_PtrGetHierarchies() {
	return reinterpret_cast<TMap<int32_t, struct FMovieSceneSequenceHierarchy>*>((byte*)this + 216);
}
void UMovieSceneCompiledDataManager::M_SetHierarchies(const TMap<int32_t, struct FMovieSceneSequenceHierarchy>& value) {
	Write((byte*)this + 216, value);
}
// Member Getter and Setter of TrackTemplates
// Declaration: TMap<int32_t, struct FMovieSceneEvaluationTemplate> TrackTemplates
TMap<int32_t, struct FMovieSceneEvaluationTemplate> UMovieSceneCompiledDataManager::M_GetTrackTemplates() const {
	return Read<TMap<int32_t, struct FMovieSceneEvaluationTemplate>>((byte*)this + 296);
}
TMap<int32_t, struct FMovieSceneEvaluationTemplate>* UMovieSceneCompiledDataManager::M_PtrGetTrackTemplates() {
	return reinterpret_cast<TMap<int32_t, struct FMovieSceneEvaluationTemplate>*>((byte*)this + 296);
}
void UMovieSceneCompiledDataManager::M_SetTrackTemplates(const TMap<int32_t, struct FMovieSceneEvaluationTemplate>& value) {
	Write((byte*)this + 296, value);
}
// Member Getter and Setter of TrackTemplateFields
// Declaration: TMap<int32_t, struct FMovieSceneEvaluationField> TrackTemplateFields
TMap<int32_t, struct FMovieSceneEvaluationField> UMovieSceneCompiledDataManager::M_GetTrackTemplateFields() const {
	return Read<TMap<int32_t, struct FMovieSceneEvaluationField>>((byte*)this + 376);
}
TMap<int32_t, struct FMovieSceneEvaluationField>* UMovieSceneCompiledDataManager::M_PtrGetTrackTemplateFields() {
	return reinterpret_cast<TMap<int32_t, struct FMovieSceneEvaluationField>*>((byte*)this + 376);
}
void UMovieSceneCompiledDataManager::M_SetTrackTemplateFields(const TMap<int32_t, struct FMovieSceneEvaluationField>& value) {
	Write((byte*)this + 376, value);
}
// Member Getter and Setter of EntityComponentFields
// Declaration: TMap<int32_t, struct FMovieSceneEntityComponentField> EntityComponentFields
TMap<int32_t, struct FMovieSceneEntityComponentField> UMovieSceneCompiledDataManager::M_GetEntityComponentFields() const {
	return Read<TMap<int32_t, struct FMovieSceneEntityComponentField>>((byte*)this + 456);
}
TMap<int32_t, struct FMovieSceneEntityComponentField>* UMovieSceneCompiledDataManager::M_PtrGetEntityComponentFields() {
	return reinterpret_cast<TMap<int32_t, struct FMovieSceneEntityComponentField>*>((byte*)this + 456);
}
void UMovieSceneCompiledDataManager::M_SetEntityComponentFields(const TMap<int32_t, struct FMovieSceneEntityComponentField>& value) {
	Write((byte*)this + 456, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}