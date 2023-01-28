#include "../SDK.h"
#include "MovieSceneMaterialParameterCollectionTrack.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of MPC
// Declaration: class UMaterialParameterCollection* MPC
class UMaterialParameterCollection* UMovieSceneMaterialParameterCollectionTrack::M_GetMPC() const {
	return Read<class UMaterialParameterCollection*>((byte*)this + 168);
}
class UMaterialParameterCollection** UMovieSceneMaterialParameterCollectionTrack::M_PtrGetMPC() {
	return reinterpret_cast<class UMaterialParameterCollection**>((byte*)this + 168);
}
void UMovieSceneMaterialParameterCollectionTrack::M_SetMPC(const class UMaterialParameterCollection*& value) {
	Write((byte*)this + 168, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}