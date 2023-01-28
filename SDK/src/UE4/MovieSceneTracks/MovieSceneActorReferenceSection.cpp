#include "../SDK.h"
#include "MovieSceneActorReferenceSection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of ActorReferenceData
// Declaration: struct FMovieSceneActorReferenceData ActorReferenceData
struct FMovieSceneActorReferenceData UMovieSceneActorReferenceSection::M_GetActorReferenceData() const {
	return Read<struct FMovieSceneActorReferenceData>((byte*)this + 232);
}
struct FMovieSceneActorReferenceData* UMovieSceneActorReferenceSection::M_PtrGetActorReferenceData() {
	return reinterpret_cast<struct FMovieSceneActorReferenceData*>((byte*)this + 232);
}
void UMovieSceneActorReferenceSection::M_SetActorReferenceData(const struct FMovieSceneActorReferenceData& value) {
	Write((byte*)this + 232, value);
}
// Member Getter and Setter of ActorGuidIndexCurve
// Declaration: struct FIntegralCurve ActorGuidIndexCurve
struct FIntegralCurve UMovieSceneActorReferenceSection::M_GetActorGuidIndexCurve() const {
	return Read<struct FIntegralCurve>((byte*)this + 408);
}
struct FIntegralCurve* UMovieSceneActorReferenceSection::M_PtrGetActorGuidIndexCurve() {
	return reinterpret_cast<struct FIntegralCurve*>((byte*)this + 408);
}
void UMovieSceneActorReferenceSection::M_SetActorGuidIndexCurve(const struct FIntegralCurve& value) {
	Write((byte*)this + 408, value);
}
// Member Getter and Setter of ActorGuidStrings
// Declaration: TArray<struct FString> ActorGuidStrings
TArray<struct FString> UMovieSceneActorReferenceSection::M_GetActorGuidStrings() const {
	return Read<TArray<struct FString>>((byte*)this + 536);
}
TArray<struct FString>* UMovieSceneActorReferenceSection::M_PtrGetActorGuidStrings() {
	return reinterpret_cast<TArray<struct FString>*>((byte*)this + 536);
}
void UMovieSceneActorReferenceSection::M_SetActorGuidStrings(const TArray<struct FString>& value) {
	Write((byte*)this + 536, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}