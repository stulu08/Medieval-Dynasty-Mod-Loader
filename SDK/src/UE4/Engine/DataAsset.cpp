#include "../SDK.h"
#include "DataAsset.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of NativeClass
// Declaration: class UDataAsset* NativeClass
class UDataAsset* UDataAsset::M_GetNativeClass() const {
	return Read<class UDataAsset*>((byte*)this + 40);
}
class UDataAsset** UDataAsset::M_PtrGetNativeClass() {
	return reinterpret_cast<class UDataAsset**>((byte*)this + 40);
}
void UDataAsset::M_SetNativeClass(const class UDataAsset*& value) {
	Write((byte*)this + 40, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}