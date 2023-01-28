#include "../SDK.h"
#include "MovieSceneSkeletalAnimationTrack.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of AnimationSections
// Declaration: TArray<class UMovieSceneSection*> AnimationSections
TArray<class UMovieSceneSection*> UMovieSceneSkeletalAnimationTrack::M_GetAnimationSections() const {
	return Read<TArray<class UMovieSceneSection*>>((byte*)this + 152);
}
TArray<class UMovieSceneSection*>* UMovieSceneSkeletalAnimationTrack::M_PtrGetAnimationSections() {
	return reinterpret_cast<TArray<class UMovieSceneSection*>*>((byte*)this + 152);
}
void UMovieSceneSkeletalAnimationTrack::M_SetAnimationSections(const TArray<class UMovieSceneSection*>& value) {
	Write((byte*)this + 152, value);
}
// Member Getter and Setter of bUseLegacySectionIndexBlend
// Declaration: bool bUseLegacySectionIndexBlend
bool UMovieSceneSkeletalAnimationTrack::M_GetbUseLegacySectionIndexBlend() const {
	return Read<bool>((byte*)this + 168);
}
bool* UMovieSceneSkeletalAnimationTrack::M_PtrGetbUseLegacySectionIndexBlend() {
	return reinterpret_cast<bool*>((byte*)this + 168);
}
void UMovieSceneSkeletalAnimationTrack::M_SetbUseLegacySectionIndexBlend(const bool& value) {
	Write((byte*)this + 168, value);
}
// Member Getter and Setter of RootMotionParams
// Declaration: struct FMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams
struct FMovieSceneSkeletalAnimRootMotionTrackParams UMovieSceneSkeletalAnimationTrack::M_GetRootMotionParams() const {
	return Read<struct FMovieSceneSkeletalAnimRootMotionTrackParams>((byte*)this + 176);
}
struct FMovieSceneSkeletalAnimRootMotionTrackParams* UMovieSceneSkeletalAnimationTrack::M_PtrGetRootMotionParams() {
	return reinterpret_cast<struct FMovieSceneSkeletalAnimRootMotionTrackParams*>((byte*)this + 176);
}
void UMovieSceneSkeletalAnimationTrack::M_SetRootMotionParams(const struct FMovieSceneSkeletalAnimRootMotionTrackParams& value) {
	Write((byte*)this + 176, value);
}
// Member Getter and Setter of bBlendFirstChildOfRoot
// Declaration: bool bBlendFirstChildOfRoot
bool UMovieSceneSkeletalAnimationTrack::M_GetbBlendFirstChildOfRoot() const {
	return Read<bool>((byte*)this + 224);
}
bool* UMovieSceneSkeletalAnimationTrack::M_PtrGetbBlendFirstChildOfRoot() {
	return reinterpret_cast<bool*>((byte*)this + 224);
}
void UMovieSceneSkeletalAnimationTrack::M_SetbBlendFirstChildOfRoot(const bool& value) {
	Write((byte*)this + 224, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}