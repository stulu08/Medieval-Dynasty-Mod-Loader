#include "../SDK.h"
#include "MovieSceneWidgetMaterialTrack.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of BrushPropertyNamePath
// Declaration: TArray<struct FName> BrushPropertyNamePath
TArray<struct FName> UMovieSceneWidgetMaterialTrack::M_GetBrushPropertyNamePath() const {
	return Read<TArray<struct FName>>((byte*)this + 168);
}
TArray<struct FName>* UMovieSceneWidgetMaterialTrack::M_PtrGetBrushPropertyNamePath() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 168);
}
void UMovieSceneWidgetMaterialTrack::M_SetBrushPropertyNamePath(const TArray<struct FName>& value) {
	Write((byte*)this + 168, value);
}
// Member Getter and Setter of TrackName
// Declaration: struct FName TrackName
struct FName UMovieSceneWidgetMaterialTrack::M_GetTrackName() const {
	return Read<struct FName>((byte*)this + 184);
}
struct FName* UMovieSceneWidgetMaterialTrack::M_PtrGetTrackName() {
	return reinterpret_cast<struct FName*>((byte*)this + 184);
}
void UMovieSceneWidgetMaterialTrack::M_SetTrackName(const struct FName& value) {
	Write((byte*)this + 184, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}