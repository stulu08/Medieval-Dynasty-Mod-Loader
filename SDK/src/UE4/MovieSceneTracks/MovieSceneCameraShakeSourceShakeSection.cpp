#include "../SDK.h"
#include "MovieSceneCameraShakeSourceShakeSection.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of ShakeData
// Declaration: struct FMovieSceneCameraShakeSectionData ShakeData
struct FMovieSceneCameraShakeSectionData UMovieSceneCameraShakeSourceShakeSection::M_GetShakeData() const {
	return Read<struct FMovieSceneCameraShakeSectionData>((byte*)this + 232);
}
struct FMovieSceneCameraShakeSectionData* UMovieSceneCameraShakeSourceShakeSection::M_PtrGetShakeData() {
	return reinterpret_cast<struct FMovieSceneCameraShakeSectionData*>((byte*)this + 232);
}
void UMovieSceneCameraShakeSourceShakeSection::M_SetShakeData(const struct FMovieSceneCameraShakeSectionData& value) {
	Write((byte*)this + 232, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}