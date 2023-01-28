#include "../SDK.h"
#include "MovieScenePrimitiveMaterialSection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of MaterialChannel
// Declaration: struct FMovieSceneObjectPathChannel MaterialChannel
struct FMovieSceneObjectPathChannel UMovieScenePrimitiveMaterialSection::M_GetMaterialChannel() const {
	return Read<struct FMovieSceneObjectPathChannel>((byte*)this + 232);
}
struct FMovieSceneObjectPathChannel* UMovieScenePrimitiveMaterialSection::M_PtrGetMaterialChannel() {
	return reinterpret_cast<struct FMovieSceneObjectPathChannel*>((byte*)this + 232);
}
void UMovieScenePrimitiveMaterialSection::M_SetMaterialChannel(const struct FMovieSceneObjectPathChannel& value) {
	Write((byte*)this + 232, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}