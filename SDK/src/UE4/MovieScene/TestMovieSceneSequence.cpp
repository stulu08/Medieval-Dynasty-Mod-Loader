#include "../SDK.h"
#include "TestMovieSceneSequence.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of MovieScene
// Declaration: class UMovieScene* MovieScene
class UMovieScene* UTestMovieSceneSequence::M_GetMovieScene() const {
	return Read<class UMovieScene*>((byte*)this + 96);
}
class UMovieScene** UTestMovieSceneSequence::M_PtrGetMovieScene() {
	return reinterpret_cast<class UMovieScene**>((byte*)this + 96);
}
void UTestMovieSceneSequence::M_SetMovieScene(const class UMovieScene*& value) {
	Write((byte*)this + 96, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}