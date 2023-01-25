#include "../SDK.h"
#include "MovieScene2DTransformSection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of TransformMask
// Declaration: struct FMovieScene2DTransformMask TransformMask
struct FMovieScene2DTransformMask UMovieScene2DTransformSection::M_GetTransformMask() const {
	return Read<struct FMovieScene2DTransformMask>((byte*)this + 240);
}
struct FMovieScene2DTransformMask* UMovieScene2DTransformSection::M_PtrGetTransformMask() {
	return reinterpret_cast<struct FMovieScene2DTransformMask*>((byte*)this + 240);
}
void UMovieScene2DTransformSection::M_SetTransformMask(const struct FMovieScene2DTransformMask& value) {
	Write((byte*)this + 240, value);
}
// Member Getter and Setter of Translation
// Declaration: struct FMovieSceneFloatChannel Translation[2]
struct FMovieSceneFloatChannel UMovieScene2DTransformSection::M_GetTranslation() const {
	return Read<struct FMovieSceneFloatChannel>((byte*)this + 248);
}
struct FMovieSceneFloatChannel* UMovieScene2DTransformSection::M_PtrGetTranslation() {
	return reinterpret_cast<struct FMovieSceneFloatChannel*>((byte*)this + 248);
}
void UMovieScene2DTransformSection::M_SetTranslation(const struct FMovieSceneFloatChannel& value) {
	Write((byte*)this + 248, value);
}
// Member Getter and Setter of Rotation
// Declaration: struct FMovieSceneFloatChannel Rotation
struct FMovieSceneFloatChannel UMovieScene2DTransformSection::M_GetRotation() const {
	return Read<struct FMovieSceneFloatChannel>((byte*)this + 568);
}
struct FMovieSceneFloatChannel* UMovieScene2DTransformSection::M_PtrGetRotation() {
	return reinterpret_cast<struct FMovieSceneFloatChannel*>((byte*)this + 568);
}
void UMovieScene2DTransformSection::M_SetRotation(const struct FMovieSceneFloatChannel& value) {
	Write((byte*)this + 568, value);
}
// Member Getter and Setter of Scale
// Declaration: struct FMovieSceneFloatChannel Scale[2]
struct FMovieSceneFloatChannel UMovieScene2DTransformSection::M_GetScale() const {
	return Read<struct FMovieSceneFloatChannel>((byte*)this + 728);
}
struct FMovieSceneFloatChannel* UMovieScene2DTransformSection::M_PtrGetScale() {
	return reinterpret_cast<struct FMovieSceneFloatChannel*>((byte*)this + 728);
}
void UMovieScene2DTransformSection::M_SetScale(const struct FMovieSceneFloatChannel& value) {
	Write((byte*)this + 728, value);
}
// Member Getter and Setter of Shear
// Declaration: struct FMovieSceneFloatChannel Shear[2]
struct FMovieSceneFloatChannel UMovieScene2DTransformSection::M_GetShear() const {
	return Read<struct FMovieSceneFloatChannel>((byte*)this + 1048);
}
struct FMovieSceneFloatChannel* UMovieScene2DTransformSection::M_PtrGetShear() {
	return reinterpret_cast<struct FMovieSceneFloatChannel*>((byte*)this + 1048);
}
void UMovieScene2DTransformSection::M_SetShear(const struct FMovieSceneFloatChannel& value) {
	Write((byte*)this + 1048, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}