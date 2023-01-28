#include "../SDK.h"
#include "MovieSceneComponentMaterialTrack.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of MaterialIndex
// Declaration: int32_t MaterialIndex
int32_t UMovieSceneComponentMaterialTrack::M_GetMaterialIndex() const {
	return Read<int32_t>((byte*)this + 168);
}
int32_t* UMovieSceneComponentMaterialTrack::M_PtrGetMaterialIndex() {
	return reinterpret_cast<int32_t*>((byte*)this + 168);
}
void UMovieSceneComponentMaterialTrack::M_SetMaterialIndex(const int32_t& value) {
	Write((byte*)this + 168, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}