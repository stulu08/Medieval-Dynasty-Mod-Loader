#include "../SDK.h"
#include "MovieSceneMarginSection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of TopCurve
// Declaration: struct FMovieSceneFloatChannel TopCurve
struct FMovieSceneFloatChannel UMovieSceneMarginSection::M_GetTopCurve() const {
	return Read<struct FMovieSceneFloatChannel>((byte*)this + 240);
}
struct FMovieSceneFloatChannel* UMovieSceneMarginSection::M_PtrGetTopCurve() {
	return reinterpret_cast<struct FMovieSceneFloatChannel*>((byte*)this + 240);
}
void UMovieSceneMarginSection::M_SetTopCurve(const struct FMovieSceneFloatChannel& value) {
	Write((byte*)this + 240, value);
}
// Member Getter and Setter of LeftCurve
// Declaration: struct FMovieSceneFloatChannel LeftCurve
struct FMovieSceneFloatChannel UMovieSceneMarginSection::M_GetLeftCurve() const {
	return Read<struct FMovieSceneFloatChannel>((byte*)this + 400);
}
struct FMovieSceneFloatChannel* UMovieSceneMarginSection::M_PtrGetLeftCurve() {
	return reinterpret_cast<struct FMovieSceneFloatChannel*>((byte*)this + 400);
}
void UMovieSceneMarginSection::M_SetLeftCurve(const struct FMovieSceneFloatChannel& value) {
	Write((byte*)this + 400, value);
}
// Member Getter and Setter of RightCurve
// Declaration: struct FMovieSceneFloatChannel RightCurve
struct FMovieSceneFloatChannel UMovieSceneMarginSection::M_GetRightCurve() const {
	return Read<struct FMovieSceneFloatChannel>((byte*)this + 560);
}
struct FMovieSceneFloatChannel* UMovieSceneMarginSection::M_PtrGetRightCurve() {
	return reinterpret_cast<struct FMovieSceneFloatChannel*>((byte*)this + 560);
}
void UMovieSceneMarginSection::M_SetRightCurve(const struct FMovieSceneFloatChannel& value) {
	Write((byte*)this + 560, value);
}
// Member Getter and Setter of BottomCurve
// Declaration: struct FMovieSceneFloatChannel BottomCurve
struct FMovieSceneFloatChannel UMovieSceneMarginSection::M_GetBottomCurve() const {
	return Read<struct FMovieSceneFloatChannel>((byte*)this + 720);
}
struct FMovieSceneFloatChannel* UMovieSceneMarginSection::M_PtrGetBottomCurve() {
	return reinterpret_cast<struct FMovieSceneFloatChannel*>((byte*)this + 720);
}
void UMovieSceneMarginSection::M_SetBottomCurve(const struct FMovieSceneFloatChannel& value) {
	Write((byte*)this + 720, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}