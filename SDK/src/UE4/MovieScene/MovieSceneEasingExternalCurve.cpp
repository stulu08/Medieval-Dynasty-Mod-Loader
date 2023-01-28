#include "../SDK.h"
#include "MovieSceneEasingExternalCurve.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Curve
// Declaration: class UCurveFloat* Curve
class UCurveFloat* UMovieSceneEasingExternalCurve::M_GetCurve() const {
	return Read<class UCurveFloat*>((byte*)this + 48);
}
class UCurveFloat** UMovieSceneEasingExternalCurve::M_PtrGetCurve() {
	return reinterpret_cast<class UCurveFloat**>((byte*)this + 48);
}
void UMovieSceneEasingExternalCurve::M_SetCurve(const class UCurveFloat*& value) {
	Write((byte*)this + 48, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}