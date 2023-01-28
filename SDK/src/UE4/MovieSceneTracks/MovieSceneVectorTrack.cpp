#include "../SDK.h"
#include "MovieSceneVectorTrack.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of NumChannelsUsed
// Declaration: int32_t NumChannelsUsed
int32_t UMovieSceneVectorTrack::M_GetNumChannelsUsed() const {
	return Read<int32_t>((byte*)this + 192);
}
int32_t* UMovieSceneVectorTrack::M_PtrGetNumChannelsUsed() {
	return reinterpret_cast<int32_t*>((byte*)this + 192);
}
void UMovieSceneVectorTrack::M_SetNumChannelsUsed(const int32_t& value) {
	Write((byte*)this + 192, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}