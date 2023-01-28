#include "../SDK.h"
#include "MovieSceneColorSection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of RedCurve
// Declaration: struct FMovieSceneFloatChannel RedCurve
struct FMovieSceneFloatChannel UMovieSceneColorSection::M_GetRedCurve() const {
	return Read<struct FMovieSceneFloatChannel>((byte*)this + 240);
}
struct FMovieSceneFloatChannel* UMovieSceneColorSection::M_PtrGetRedCurve() {
	return reinterpret_cast<struct FMovieSceneFloatChannel*>((byte*)this + 240);
}
void UMovieSceneColorSection::M_SetRedCurve(const struct FMovieSceneFloatChannel& value) {
	Write((byte*)this + 240, value);
}
// Member Getter and Setter of GreenCurve
// Declaration: struct FMovieSceneFloatChannel GreenCurve
struct FMovieSceneFloatChannel UMovieSceneColorSection::M_GetGreenCurve() const {
	return Read<struct FMovieSceneFloatChannel>((byte*)this + 400);
}
struct FMovieSceneFloatChannel* UMovieSceneColorSection::M_PtrGetGreenCurve() {
	return reinterpret_cast<struct FMovieSceneFloatChannel*>((byte*)this + 400);
}
void UMovieSceneColorSection::M_SetGreenCurve(const struct FMovieSceneFloatChannel& value) {
	Write((byte*)this + 400, value);
}
// Member Getter and Setter of BlueCurve
// Declaration: struct FMovieSceneFloatChannel BlueCurve
struct FMovieSceneFloatChannel UMovieSceneColorSection::M_GetBlueCurve() const {
	return Read<struct FMovieSceneFloatChannel>((byte*)this + 560);
}
struct FMovieSceneFloatChannel* UMovieSceneColorSection::M_PtrGetBlueCurve() {
	return reinterpret_cast<struct FMovieSceneFloatChannel*>((byte*)this + 560);
}
void UMovieSceneColorSection::M_SetBlueCurve(const struct FMovieSceneFloatChannel& value) {
	Write((byte*)this + 560, value);
}
// Member Getter and Setter of AlphaCurve
// Declaration: struct FMovieSceneFloatChannel AlphaCurve
struct FMovieSceneFloatChannel UMovieSceneColorSection::M_GetAlphaCurve() const {
	return Read<struct FMovieSceneFloatChannel>((byte*)this + 720);
}
struct FMovieSceneFloatChannel* UMovieSceneColorSection::M_PtrGetAlphaCurve() {
	return reinterpret_cast<struct FMovieSceneFloatChannel*>((byte*)this + 720);
}
void UMovieSceneColorSection::M_SetAlphaCurve(const struct FMovieSceneFloatChannel& value) {
	Write((byte*)this + 720, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}