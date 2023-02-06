#include "../SDK.h"
#include "DragDropOperation.h"
namespace UE4 {
#pragma region Members
// Member Getter and Setter of Tag
// Declaration: struct FString Tag
struct FString UDragDropOperation::M_GetTag() const {
	return Read<struct FString>((byte*)this + 40);
}
struct FString* UDragDropOperation::M_PtrGetTag() {
	return reinterpret_cast<struct FString*>((byte*)this + 40);
}
void UDragDropOperation::M_SetTag(const struct FString& value) {
	Write((byte*)this + 40, value);
}
// Member Getter and Setter of Payload
// Declaration: class UObject* Payload
class UObject* UDragDropOperation::M_GetPayload() const {
	return Read<class UObject*>((byte*)this + 56);
}
class UObject** UDragDropOperation::M_PtrGetPayload() {
	return reinterpret_cast<class UObject**>((byte*)this + 56);
}
void UDragDropOperation::M_SetPayload(const class UObject*& value) {
	Write((byte*)this + 56, value);
}
// Member Getter and Setter of DefaultDragVisual
// Declaration: class UWidget* DefaultDragVisual
class UWidget* UDragDropOperation::M_GetDefaultDragVisual() const {
	return Read<class UWidget*>((byte*)this + 64);
}
class UWidget** UDragDropOperation::M_PtrGetDefaultDragVisual() {
	return reinterpret_cast<class UWidget**>((byte*)this + 64);
}
void UDragDropOperation::M_SetDefaultDragVisual(const class UWidget*& value) {
	Write((byte*)this + 64, value);
}
// Member Getter and Setter of Pivot
// Declaration: EDragPivot Pivot
EDragPivot UDragDropOperation::M_GetPivot() const {
	return Read<EDragPivot>((byte*)this + 72);
}
EDragPivot* UDragDropOperation::M_PtrGetPivot() {
	return reinterpret_cast<EDragPivot*>((byte*)this + 72);
}
void UDragDropOperation::M_SetPivot(const EDragPivot& value) {
	Write((byte*)this + 72, value);
}
// Member Getter and Setter of Offset
// Declaration: struct FVector2D Offset
struct FVector2D UDragDropOperation::M_GetOffset() const {
	return Read<struct FVector2D>((byte*)this + 76);
}
struct FVector2D* UDragDropOperation::M_PtrGetOffset() {
	return reinterpret_cast<struct FVector2D*>((byte*)this + 76);
}
void UDragDropOperation::M_SetOffset(const struct FVector2D& value) {
	Write((byte*)this + 76, value);
}
// Member Getter and Setter of OnDrop
// Declaration: TAssetPtr<class FOnDragDropMulticast__DelegateSignature> OnDrop
TAssetPtr<class FOnDragDropMulticast__DelegateSignature> UDragDropOperation::M_GetOnDrop() const {
	return Read<TAssetPtr<class FOnDragDropMulticast__DelegateSignature>>((byte*)this + 88);
}
TAssetPtr<class FOnDragDropMulticast__DelegateSignature>* UDragDropOperation::M_PtrGetOnDrop() {
	return reinterpret_cast<TAssetPtr<class FOnDragDropMulticast__DelegateSignature>*>((byte*)this + 88);
}
void UDragDropOperation::M_SetOnDrop(const TAssetPtr<class FOnDragDropMulticast__DelegateSignature>& value) {
	Write((byte*)this + 88, value);
}
// Member Getter and Setter of OnDragCancelled
// Declaration: TAssetPtr<class FOnDragDropMulticast__DelegateSignature> OnDragCancelled
TAssetPtr<class FOnDragDropMulticast__DelegateSignature> UDragDropOperation::M_GetOnDragCancelled() const {
	return Read<TAssetPtr<class FOnDragDropMulticast__DelegateSignature>>((byte*)this + 104);
}
TAssetPtr<class FOnDragDropMulticast__DelegateSignature>* UDragDropOperation::M_PtrGetOnDragCancelled() {
	return reinterpret_cast<TAssetPtr<class FOnDragDropMulticast__DelegateSignature>*>((byte*)this + 104);
}
void UDragDropOperation::M_SetOnDragCancelled(const TAssetPtr<class FOnDragDropMulticast__DelegateSignature>& value) {
	Write((byte*)this + 104, value);
}
// Member Getter and Setter of OnDragged
// Declaration: TAssetPtr<class FOnDragDropMulticast__DelegateSignature> OnDragged
TAssetPtr<class FOnDragDropMulticast__DelegateSignature> UDragDropOperation::M_GetOnDragged() const {
	return Read<TAssetPtr<class FOnDragDropMulticast__DelegateSignature>>((byte*)this + 120);
}
TAssetPtr<class FOnDragDropMulticast__DelegateSignature>* UDragDropOperation::M_PtrGetOnDragged() {
	return reinterpret_cast<TAssetPtr<class FOnDragDropMulticast__DelegateSignature>*>((byte*)this + 120);
}
void UDragDropOperation::M_SetOnDragged(const TAssetPtr<class FOnDragDropMulticast__DelegateSignature>& value) {
	Write((byte*)this + 120, value);
}
#pragma endregion
#pragma region Functions
/////////////////////////////////////////////
// Function UMG.DragDropOperation.DragCancelled
// Flags: Native, Event, Public, HasOutParms, BlueprintEvent
// Params:
// Name: PointerEvent	Type: struct FPointerEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UDragDropOperation::DragCancelled(const struct FPointerEvent& PointerEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DragDropOperation.DragCancelled");

	struct UDragDropOperation_DragCancelled_Params {
		struct FPointerEvent PointerEvent;			//Offset: 0 | ElementSize: 112
	};
	UDragDropOperation_DragCancelled_Params params;
	params.PointerEvent = PointerEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.DragDropOperation.Dragged
// Flags: Native, Event, Public, HasOutParms, BlueprintEvent
// Params:
// Name: PointerEvent	Type: struct FPointerEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UDragDropOperation::Dragged(const struct FPointerEvent& PointerEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DragDropOperation.Dragged");

	struct UDragDropOperation_Dragged_Params {
		struct FPointerEvent PointerEvent;			//Offset: 0 | ElementSize: 112
	};
	UDragDropOperation_Dragged_Params params;
	params.PointerEvent = PointerEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

/////////////////////////////////////////////
// Function UMG.DragDropOperation.Drop
// Flags: Native, Event, Public, HasOutParms, BlueprintEvent
// Params:
// Name: PointerEvent	Type: struct FPointerEvent	Flags: ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic
/////////////////////////////////////////////
void UDragDropOperation::Drop(const struct FPointerEvent& PointerEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DragDropOperation.Drop");

	struct UDragDropOperation_Drop_Params {
		struct FPointerEvent PointerEvent;			//Offset: 0 | ElementSize: 112
	};
	UDragDropOperation_Drop_Params params;
	params.PointerEvent = PointerEvent;

	uint32_t flags = (uint32_t)fn->GetFunctionFlags();
	uint32_t newFlags = flags;
	newFlags |= 0x00000400;
	fn->SetFunctionFlags((EFunctionFlags)newFlags);

	UObject::ProcessEvent(fn, &params);
	fn->SetFunctionFlags((EFunctionFlags)flags);

}

#pragma endregion
}