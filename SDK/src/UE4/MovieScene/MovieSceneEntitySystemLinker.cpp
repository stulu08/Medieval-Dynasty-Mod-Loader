#include "../SDK.h"
#include "MovieSceneEntitySystemLinker.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of SystemGraph
// Declaration: struct FMovieSceneEntitySystemGraph SystemGraph
struct FMovieSceneEntitySystemGraph UMovieSceneEntitySystemLinker::M_GetSystemGraph() const {
	return Read<struct FMovieSceneEntitySystemGraph>((byte*)this + 664);
}
struct FMovieSceneEntitySystemGraph* UMovieSceneEntitySystemLinker::M_PtrGetSystemGraph() {
	return reinterpret_cast<struct FMovieSceneEntitySystemGraph*>((byte*)this + 664);
}
void UMovieSceneEntitySystemLinker::M_SetSystemGraph(const struct FMovieSceneEntitySystemGraph& value) {
	Write((byte*)this + 664, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}