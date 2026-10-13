#include "../SDK.h"
#include "PropertyBinding.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of SourceObject
// Declaration: TWeakObjectPtr<class UObject> SourceObject
TWeakObjectPtr<class UObject> UPropertyBinding::M_GetSourceObject() const {
	return Read<TWeakObjectPtr<class UObject>>((byte*)this + 40);
}
TWeakObjectPtr<class UObject>* UPropertyBinding::M_PtrGetSourceObject() {
	return reinterpret_cast<TWeakObjectPtr<class UObject>*>((byte*)this + 40);
}
void UPropertyBinding::M_SetSourceObject(const TWeakObjectPtr<class UObject>& value) {
	Write((byte*)this + 40, value);
}
// Member Getter and Setter of SourcePath
// Declaration: struct FDynamicPropertyPath SourcePath
struct FDynamicPropertyPath UPropertyBinding::M_GetSourcePath() const {
	return Read<struct FDynamicPropertyPath>((byte*)this + 48);
}
struct FDynamicPropertyPath* UPropertyBinding::M_PtrGetSourcePath() {
	return reinterpret_cast<struct FDynamicPropertyPath*>((byte*)this + 48);
}
void UPropertyBinding::M_SetSourcePath(const struct FDynamicPropertyPath& value) {
	Write((byte*)this + 48, value);
}
// Member Getter and Setter of DestinationProperty
// Declaration: struct FName DestinationProperty
struct FName UPropertyBinding::M_GetDestinationProperty() const {
	return Read<struct FName>((byte*)this + 88);
}
struct FName* UPropertyBinding::M_PtrGetDestinationProperty() {
	return reinterpret_cast<struct FName*>((byte*)this + 88);
}
void UPropertyBinding::M_SetDestinationProperty(const struct FName& value) {
	Write((byte*)this + 88, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}