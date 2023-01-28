#include "../SDK.h"
#include "MovieScene3DTransformSection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of TransformMask
// Declaration: struct FMovieSceneTransformMask TransformMask
struct FMovieSceneTransformMask UMovieScene3DTransformSection::M_GetTransformMask() const {
	return Read<struct FMovieSceneTransformMask>((byte*)this + 240);
}
struct FMovieSceneTransformMask* UMovieScene3DTransformSection::M_PtrGetTransformMask() {
	return reinterpret_cast<struct FMovieSceneTransformMask*>((byte*)this + 240);
}
void UMovieScene3DTransformSection::M_SetTransformMask(const struct FMovieSceneTransformMask& value) {
	Write((byte*)this + 240, value);
}
// Member Getter and Setter of Translation
// Declaration: struct FMovieSceneFloatChannel Translation[3]
struct FMovieSceneFloatChannel UMovieScene3DTransformSection::M_GetTranslation() const {
	return Read<struct FMovieSceneFloatChannel>((byte*)this + 248);
}
struct FMovieSceneFloatChannel* UMovieScene3DTransformSection::M_PtrGetTranslation() {
	return reinterpret_cast<struct FMovieSceneFloatChannel*>((byte*)this + 248);
}
void UMovieScene3DTransformSection::M_SetTranslation(const struct FMovieSceneFloatChannel& value) {
	Write((byte*)this + 248, value);
}
// Member Getter and Setter of Rotation
// Declaration: struct FMovieSceneFloatChannel Rotation[3]
struct FMovieSceneFloatChannel UMovieScene3DTransformSection::M_GetRotation() const {
	return Read<struct FMovieSceneFloatChannel>((byte*)this + 728);
}
struct FMovieSceneFloatChannel* UMovieScene3DTransformSection::M_PtrGetRotation() {
	return reinterpret_cast<struct FMovieSceneFloatChannel*>((byte*)this + 728);
}
void UMovieScene3DTransformSection::M_SetRotation(const struct FMovieSceneFloatChannel& value) {
	Write((byte*)this + 728, value);
}
// Member Getter and Setter of Scale
// Declaration: struct FMovieSceneFloatChannel Scale[3]
struct FMovieSceneFloatChannel UMovieScene3DTransformSection::M_GetScale() const {
	return Read<struct FMovieSceneFloatChannel>((byte*)this + 1208);
}
struct FMovieSceneFloatChannel* UMovieScene3DTransformSection::M_PtrGetScale() {
	return reinterpret_cast<struct FMovieSceneFloatChannel*>((byte*)this + 1208);
}
void UMovieScene3DTransformSection::M_SetScale(const struct FMovieSceneFloatChannel& value) {
	Write((byte*)this + 1208, value);
}
// Member Getter and Setter of ManualWeight
// Declaration: struct FMovieSceneFloatChannel ManualWeight
struct FMovieSceneFloatChannel UMovieScene3DTransformSection::M_GetManualWeight() const {
	return Read<struct FMovieSceneFloatChannel>((byte*)this + 1688);
}
struct FMovieSceneFloatChannel* UMovieScene3DTransformSection::M_PtrGetManualWeight() {
	return reinterpret_cast<struct FMovieSceneFloatChannel*>((byte*)this + 1688);
}
void UMovieScene3DTransformSection::M_SetManualWeight(const struct FMovieSceneFloatChannel& value) {
	Write((byte*)this + 1688, value);
}
// Member Getter and Setter of bUseQuaternionInterpolation
// Declaration: bool bUseQuaternionInterpolation
bool UMovieScene3DTransformSection::M_GetbUseQuaternionInterpolation() const {
	return Read<bool>((byte*)this + 1848);
}
bool* UMovieScene3DTransformSection::M_PtrGetbUseQuaternionInterpolation() {
	return reinterpret_cast<bool*>((byte*)this + 1848);
}
void UMovieScene3DTransformSection::M_SetbUseQuaternionInterpolation(const bool& value) {
	Write((byte*)this + 1848, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}