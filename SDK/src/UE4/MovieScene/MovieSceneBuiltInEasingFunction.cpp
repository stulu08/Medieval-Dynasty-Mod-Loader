#include "../SDK.h"
#include "MovieSceneBuiltInEasingFunction.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Type
// Declaration: EMovieSceneBuiltInEasing Type
EMovieSceneBuiltInEasing UMovieSceneBuiltInEasingFunction::M_GetType() const {
	return Read<EMovieSceneBuiltInEasing>((byte*)this + 48);
}
EMovieSceneBuiltInEasing* UMovieSceneBuiltInEasingFunction::M_PtrGetType() {
	return reinterpret_cast<EMovieSceneBuiltInEasing*>((byte*)this + 48);
}
void UMovieSceneBuiltInEasingFunction::M_SetType(const EMovieSceneBuiltInEasing& value) {
	Write((byte*)this + 48, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}