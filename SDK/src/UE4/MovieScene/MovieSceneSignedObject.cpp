#include "../SDK.h"
#include "MovieSceneSignedObject.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Signature
// Declaration: struct FGuid Signature
struct FGuid UMovieSceneSignedObject::M_GetSignature() const {
	return Read<struct FGuid>((byte*)this + 40);
}
struct FGuid* UMovieSceneSignedObject::M_PtrGetSignature() {
	return reinterpret_cast<struct FGuid*>((byte*)this + 40);
}
void UMovieSceneSignedObject::M_SetSignature(const struct FGuid& value) {
	Write((byte*)this + 40, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}