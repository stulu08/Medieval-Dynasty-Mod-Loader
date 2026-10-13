#include "../SDK.h"
#include "WidgetBlueprintGeneratedClass.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of WidgetTree
// Declaration: class UWidgetTree* WidgetTree
class UWidgetTree* UWidgetBlueprintGeneratedClass::M_GetWidgetTree() const {
	return Read<class UWidgetTree*>((byte*)this + 808);
}
class UWidgetTree** UWidgetBlueprintGeneratedClass::M_PtrGetWidgetTree() {
	return reinterpret_cast<class UWidgetTree**>((byte*)this + 808);
}
void UWidgetBlueprintGeneratedClass::M_SetWidgetTree(const class UWidgetTree*& value) {
	Write((byte*)this + 808, value);
}
// Member Getter and Setter of bClassRequiresNativeTick
// Declaration: unsigned char bClassRequiresNativeTick : 1
unsigned char UWidgetBlueprintGeneratedClass::M_GetbClassRequiresNativeTick() const {
	return Read<unsigned char>((byte*)this + 816);
}
unsigned char* UWidgetBlueprintGeneratedClass::M_PtrGetbClassRequiresNativeTick() {
	return reinterpret_cast<unsigned char*>((byte*)this + 816);
}
void UWidgetBlueprintGeneratedClass::M_SetbClassRequiresNativeTick(const unsigned char& value) {
	Write((byte*)this + 816, value);
}
// Member Getter and Setter of Bindings
// Declaration: TArray<struct FDelegateRuntimeBinding> Bindings
TArray<struct FDelegateRuntimeBinding> UWidgetBlueprintGeneratedClass::M_GetBindings() const {
	return Read<TArray<struct FDelegateRuntimeBinding>>((byte*)this + 824);
}
TArray<struct FDelegateRuntimeBinding>* UWidgetBlueprintGeneratedClass::M_PtrGetBindings() {
	return reinterpret_cast<TArray<struct FDelegateRuntimeBinding>*>((byte*)this + 824);
}
void UWidgetBlueprintGeneratedClass::M_SetBindings(const TArray<struct FDelegateRuntimeBinding>& value) {
	Write((byte*)this + 824, value);
}
// Member Getter and Setter of Animations
// Declaration: TArray<class UWidgetAnimation*> Animations
TArray<class UWidgetAnimation*> UWidgetBlueprintGeneratedClass::M_GetAnimations() const {
	return Read<TArray<class UWidgetAnimation*>>((byte*)this + 840);
}
TArray<class UWidgetAnimation*>* UWidgetBlueprintGeneratedClass::M_PtrGetAnimations() {
	return reinterpret_cast<TArray<class UWidgetAnimation*>*>((byte*)this + 840);
}
void UWidgetBlueprintGeneratedClass::M_SetAnimations(const TArray<class UWidgetAnimation*>& value) {
	Write((byte*)this + 840, value);
}
// Member Getter and Setter of NamedSlots
// Declaration: TArray<struct FName> NamedSlots
TArray<struct FName> UWidgetBlueprintGeneratedClass::M_GetNamedSlots() const {
	return Read<TArray<struct FName>>((byte*)this + 856);
}
TArray<struct FName>* UWidgetBlueprintGeneratedClass::M_PtrGetNamedSlots() {
	return reinterpret_cast<TArray<struct FName>*>((byte*)this + 856);
}
void UWidgetBlueprintGeneratedClass::M_SetNamedSlots(const TArray<struct FName>& value) {
	Write((byte*)this + 856, value);
}
#pragma endregion
#pragma region Functions
#pragma endregion
}