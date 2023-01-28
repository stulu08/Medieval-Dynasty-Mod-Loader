#include "../SDK.h"
#include "MovieScene3DPathSection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of TimingCurve
// Declaration: struct FMovieSceneFloatChannel TimingCurve
struct FMovieSceneFloatChannel UMovieScene3DPathSection::M_GetTimingCurve() const {
	return Read<struct FMovieSceneFloatChannel>((byte*)this + 272);
}
struct FMovieSceneFloatChannel* UMovieScene3DPathSection::M_PtrGetTimingCurve() {
	return reinterpret_cast<struct FMovieSceneFloatChannel*>((byte*)this + 272);
}
void UMovieScene3DPathSection::M_SetTimingCurve(const struct FMovieSceneFloatChannel& value) {
	Write((byte*)this + 272, value);
}
// Member Getter and Setter of FrontAxisEnum
// Declaration: EMovieScene3DPathSection_Axis FrontAxisEnum
EMovieScene3DPathSection_Axis UMovieScene3DPathSection::M_GetFrontAxisEnum() const {
	return Read<EMovieScene3DPathSection_Axis>((byte*)this + 432);
}
EMovieScene3DPathSection_Axis* UMovieScene3DPathSection::M_PtrGetFrontAxisEnum() {
	return reinterpret_cast<EMovieScene3DPathSection_Axis*>((byte*)this + 432);
}
void UMovieScene3DPathSection::M_SetFrontAxisEnum(const EMovieScene3DPathSection_Axis& value) {
	Write((byte*)this + 432, value);
}
// Member Getter and Setter of UpAxisEnum
// Declaration: EMovieScene3DPathSection_Axis UpAxisEnum
EMovieScene3DPathSection_Axis UMovieScene3DPathSection::M_GetUpAxisEnum() const {
	return Read<EMovieScene3DPathSection_Axis>((byte*)this + 433);
}
EMovieScene3DPathSection_Axis* UMovieScene3DPathSection::M_PtrGetUpAxisEnum() {
	return reinterpret_cast<EMovieScene3DPathSection_Axis*>((byte*)this + 433);
}
void UMovieScene3DPathSection::M_SetUpAxisEnum(const EMovieScene3DPathSection_Axis& value) {
	Write((byte*)this + 433, value);
}
// Member Getter and Setter of bFollow
// Declaration: unsigned char bFollow : 1
unsigned char UMovieScene3DPathSection::M_GetbFollow() const {
	return Read<unsigned char>((byte*)this + 436);
}
unsigned char* UMovieScene3DPathSection::M_PtrGetbFollow() {
	return reinterpret_cast<unsigned char*>((byte*)this + 436);
}
void UMovieScene3DPathSection::M_SetbFollow(const unsigned char& value) {
	Write((byte*)this + 436, value);
}
// Member Getter and Setter of bReverse
// Declaration: unsigned char bReverse : 1
unsigned char UMovieScene3DPathSection::M_GetbReverse() const {
	return Read<unsigned char>((byte*)this + 436);
}
unsigned char* UMovieScene3DPathSection::M_PtrGetbReverse() {
	return reinterpret_cast<unsigned char*>((byte*)this + 436);
}
void UMovieScene3DPathSection::M_SetbReverse(const unsigned char& value) {
	Write((byte*)this + 436, value);
}
// Member Getter and Setter of bForceUpright
// Declaration: unsigned char bForceUpright : 1
unsigned char UMovieScene3DPathSection::M_GetbForceUpright() const {
	return Read<unsigned char>((byte*)this + 436);
}
unsigned char* UMovieScene3DPathSection::M_PtrGetbForceUpright() {
	return reinterpret_cast<unsigned char*>((byte*)this + 436);
}
void UMovieScene3DPathSection::M_SetbForceUpright(const unsigned char& value) {
	Write((byte*)this + 436, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}