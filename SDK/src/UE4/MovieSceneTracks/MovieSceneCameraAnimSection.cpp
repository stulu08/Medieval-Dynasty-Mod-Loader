#include "../SDK.h"
#include "MovieSceneCameraAnimSection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of AnimData
// Declaration: struct FMovieSceneCameraAnimSectionData AnimData
struct FMovieSceneCameraAnimSectionData UMovieSceneCameraAnimSection::M_GetAnimData() const {
	return Read<struct FMovieSceneCameraAnimSectionData>((byte*)this + 232);
}
struct FMovieSceneCameraAnimSectionData* UMovieSceneCameraAnimSection::M_PtrGetAnimData() {
	return reinterpret_cast<struct FMovieSceneCameraAnimSectionData*>((byte*)this + 232);
}
void UMovieSceneCameraAnimSection::M_SetAnimData(const struct FMovieSceneCameraAnimSectionData& value) {
	Write((byte*)this + 232, value);
}
// Member Getter and Setter of CameraAnim
// Declaration: class UCameraAnim* CameraAnim
class UCameraAnim* UMovieSceneCameraAnimSection::M_GetCameraAnim() const {
	return Read<class UCameraAnim*>((byte*)this + 264);
}
class UCameraAnim** UMovieSceneCameraAnimSection::M_PtrGetCameraAnim() {
	return reinterpret_cast<class UCameraAnim**>((byte*)this + 264);
}
void UMovieSceneCameraAnimSection::M_SetCameraAnim(const class UCameraAnim*& value) {
	Write((byte*)this + 264, value);
}
// Member Getter and Setter of PlayRate
// Declaration: float PlayRate
float UMovieSceneCameraAnimSection::M_GetPlayRate() const {
	return Read<float>((byte*)this + 272);
}
float* UMovieSceneCameraAnimSection::M_PtrGetPlayRate() {
	return reinterpret_cast<float*>((byte*)this + 272);
}
void UMovieSceneCameraAnimSection::M_SetPlayRate(const float& value) {
	Write((byte*)this + 272, value);
}
// Member Getter and Setter of PlayScale
// Declaration: float PlayScale
float UMovieSceneCameraAnimSection::M_GetPlayScale() const {
	return Read<float>((byte*)this + 276);
}
float* UMovieSceneCameraAnimSection::M_PtrGetPlayScale() {
	return reinterpret_cast<float*>((byte*)this + 276);
}
void UMovieSceneCameraAnimSection::M_SetPlayScale(const float& value) {
	Write((byte*)this + 276, value);
}
// Member Getter and Setter of BlendInTime
// Declaration: float BlendInTime
float UMovieSceneCameraAnimSection::M_GetBlendInTime() const {
	return Read<float>((byte*)this + 280);
}
float* UMovieSceneCameraAnimSection::M_PtrGetBlendInTime() {
	return reinterpret_cast<float*>((byte*)this + 280);
}
void UMovieSceneCameraAnimSection::M_SetBlendInTime(const float& value) {
	Write((byte*)this + 280, value);
}
// Member Getter and Setter of BlendOutTime
// Declaration: float BlendOutTime
float UMovieSceneCameraAnimSection::M_GetBlendOutTime() const {
	return Read<float>((byte*)this + 284);
}
float* UMovieSceneCameraAnimSection::M_PtrGetBlendOutTime() {
	return reinterpret_cast<float*>((byte*)this + 284);
}
void UMovieSceneCameraAnimSection::M_SetBlendOutTime(const float& value) {
	Write((byte*)this + 284, value);
}
// Member Getter and Setter of bLooping
// Declaration: bool bLooping
bool UMovieSceneCameraAnimSection::M_GetbLooping() const {
	return Read<bool>((byte*)this + 288);
}
bool* UMovieSceneCameraAnimSection::M_PtrGetbLooping() {
	return reinterpret_cast<bool*>((byte*)this + 288);
}
void UMovieSceneCameraAnimSection::M_SetbLooping(const bool& value) {
	Write((byte*)this + 288, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}