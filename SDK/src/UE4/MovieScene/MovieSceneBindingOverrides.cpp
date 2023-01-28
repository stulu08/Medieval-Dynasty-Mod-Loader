#include "../SDK.h"
#include "MovieSceneBindingOverrides.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of BindingData
// Declaration: TArray<struct FMovieSceneBindingOverrideData> BindingData
TArray<struct FMovieSceneBindingOverrideData> UMovieSceneBindingOverrides::M_GetBindingData() const {
	return Read<TArray<struct FMovieSceneBindingOverrideData>>((byte*)this + 40);
}
TArray<struct FMovieSceneBindingOverrideData>* UMovieSceneBindingOverrides::M_PtrGetBindingData() {
	return reinterpret_cast<TArray<struct FMovieSceneBindingOverrideData>*>((byte*)this + 40);
}
void UMovieSceneBindingOverrides::M_SetBindingData(const TArray<struct FMovieSceneBindingOverrideData>& value) {
	Write((byte*)this + 40, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}