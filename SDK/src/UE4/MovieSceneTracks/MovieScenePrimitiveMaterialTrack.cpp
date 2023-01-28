#include "../SDK.h"
#include "MovieScenePrimitiveMaterialTrack.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of MaterialIndex
// Declaration: int32_t MaterialIndex
int32_t UMovieScenePrimitiveMaterialTrack::M_GetMaterialIndex() const {
	return Read<int32_t>((byte*)this + 200);
}
int32_t* UMovieScenePrimitiveMaterialTrack::M_PtrGetMaterialIndex() {
	return reinterpret_cast<int32_t*>((byte*)this + 200);
}
void UMovieScenePrimitiveMaterialTrack::M_SetMaterialIndex(const int32_t& value) {
	Write((byte*)this + 200, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}