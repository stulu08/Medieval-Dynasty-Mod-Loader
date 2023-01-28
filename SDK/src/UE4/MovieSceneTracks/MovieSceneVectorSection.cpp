#include "../SDK.h"
#include "MovieSceneVectorSection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Curves
// Declaration: struct FMovieSceneFloatChannel Curves[4]
struct FMovieSceneFloatChannel UMovieSceneVectorSection::M_GetCurves() const {
	return Read<struct FMovieSceneFloatChannel>((byte*)this + 240);
}
struct FMovieSceneFloatChannel* UMovieSceneVectorSection::M_PtrGetCurves() {
	return reinterpret_cast<struct FMovieSceneFloatChannel*>((byte*)this + 240);
}
void UMovieSceneVectorSection::M_SetCurves(const struct FMovieSceneFloatChannel& value) {
	Write((byte*)this + 240, value);
}
// Member Getter and Setter of ChannelsUsed
// Declaration: int32_t ChannelsUsed
int32_t UMovieSceneVectorSection::M_GetChannelsUsed() const {
	return Read<int32_t>((byte*)this + 880);
}
int32_t* UMovieSceneVectorSection::M_PtrGetChannelsUsed() {
	return reinterpret_cast<int32_t*>((byte*)this + 880);
}
void UMovieSceneVectorSection::M_SetChannelsUsed(const int32_t& value) {
	Write((byte*)this + 880, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}