#include "../SDK.h"
#include "MovieSceneCameraShakeSection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of ShakeData
// Declaration: struct FMovieSceneCameraShakeSectionData ShakeData
struct FMovieSceneCameraShakeSectionData UMovieSceneCameraShakeSection::M_GetShakeData() const {
	return Read<struct FMovieSceneCameraShakeSectionData>((byte*)this + 232);
}
struct FMovieSceneCameraShakeSectionData* UMovieSceneCameraShakeSection::M_PtrGetShakeData() {
	return reinterpret_cast<struct FMovieSceneCameraShakeSectionData*>((byte*)this + 232);
}
void UMovieSceneCameraShakeSection::M_SetShakeData(const struct FMovieSceneCameraShakeSectionData& value) {
	Write((byte*)this + 232, value);
}
// Member Getter and Setter of ShakeClass
// Declaration: class UCameraShakeBase* ShakeClass
class UCameraShakeBase* UMovieSceneCameraShakeSection::M_GetShakeClass() const {
	return Read<class UCameraShakeBase*>((byte*)this + 264);
}
class UCameraShakeBase** UMovieSceneCameraShakeSection::M_PtrGetShakeClass() {
	return reinterpret_cast<class UCameraShakeBase**>((byte*)this + 264);
}
void UMovieSceneCameraShakeSection::M_SetShakeClass(const class UCameraShakeBase*& value) {
	Write((byte*)this + 264, value);
}
// Member Getter and Setter of PlayScale
// Declaration: float PlayScale
float UMovieSceneCameraShakeSection::M_GetPlayScale() const {
	return Read<float>((byte*)this + 272);
}
float* UMovieSceneCameraShakeSection::M_PtrGetPlayScale() {
	return reinterpret_cast<float*>((byte*)this + 272);
}
void UMovieSceneCameraShakeSection::M_SetPlayScale(const float& value) {
	Write((byte*)this + 272, value);
}
// Member Getter and Setter of PlaySpace
// Declaration: ECameraShakePlaySpace PlaySpace
ECameraShakePlaySpace UMovieSceneCameraShakeSection::M_GetPlaySpace() const {
	return Read<ECameraShakePlaySpace>((byte*)this + 276);
}
ECameraShakePlaySpace* UMovieSceneCameraShakeSection::M_PtrGetPlaySpace() {
	return reinterpret_cast<ECameraShakePlaySpace*>((byte*)this + 276);
}
void UMovieSceneCameraShakeSection::M_SetPlaySpace(const ECameraShakePlaySpace& value) {
	Write((byte*)this + 276, value);
}
// Member Getter and Setter of UserDefinedPlaySpace
// Declaration: struct FRotator UserDefinedPlaySpace
struct FRotator UMovieSceneCameraShakeSection::M_GetUserDefinedPlaySpace() const {
	return Read<struct FRotator>((byte*)this + 280);
}
struct FRotator* UMovieSceneCameraShakeSection::M_PtrGetUserDefinedPlaySpace() {
	return reinterpret_cast<struct FRotator*>((byte*)this + 280);
}
void UMovieSceneCameraShakeSection::M_SetUserDefinedPlaySpace(const struct FRotator& value) {
	Write((byte*)this + 280, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}