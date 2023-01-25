#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "CoreUObject/Object.h"
/////////////////////////////////////////////
// Class UMG.DragDropOperation
// Super: Class CoreUObject.Object
// Size: 136
// Size inherited: 40
/////////////////////////////////////////////
namespace UE4 {
class UDragDropOperation : public UObject {
public:
#pragma region Members
	//struct FString	Tag;		//Offset: 40	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FString M_GetTag() const;
	struct FString* M_PtrGetTag();
	void M_SetTag(const struct FString& value);

	//class UObject*	Payload;		//Offset: 56	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UObject* M_GetPayload() const;
	class UObject** M_PtrGetPayload();
	void M_SetPayload(const class UObject*& value);

	//class UWidget*	DefaultDragVisual;		//Offset: 64	Size: 8	Flags: Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UWidget* M_GetDefaultDragVisual() const;
	class UWidget** M_PtrGetDefaultDragVisual();
	void M_SetDefaultDragVisual(const class UWidget*& value);

	//EDragPivot	Pivot;		//Offset: 72	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EDragPivot M_GetPivot() const;
	EDragPivot* M_PtrGetPivot();
	void M_SetPivot(const EDragPivot& value);

	//struct FVector2D	Offset;		//Offset: 76	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FVector2D M_GetOffset() const;
	struct FVector2D* M_PtrGetOffset();
	void M_SetOffset(const struct FVector2D& value);

	//TAssetPtr<class FOnDragDropMulticast__DelegateSignature>	OnDrop;		//Offset: 88	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnDragDropMulticast__DelegateSignature> M_GetOnDrop() const;
	TAssetPtr<class FOnDragDropMulticast__DelegateSignature>* M_PtrGetOnDrop();
	void M_SetOnDrop(const TAssetPtr<class FOnDragDropMulticast__DelegateSignature>& value);

	//TAssetPtr<class FOnDragDropMulticast__DelegateSignature>	OnDragCancelled;		//Offset: 104	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnDragDropMulticast__DelegateSignature> M_GetOnDragCancelled() const;
	TAssetPtr<class FOnDragDropMulticast__DelegateSignature>* M_PtrGetOnDragCancelled();
	void M_SetOnDragCancelled(const TAssetPtr<class FOnDragDropMulticast__DelegateSignature>& value);

	//TAssetPtr<class FOnDragDropMulticast__DelegateSignature>	OnDragged;		//Offset: 120	Size: 16	Flags: ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	TAssetPtr<class FOnDragDropMulticast__DelegateSignature> M_GetOnDragged() const;
	TAssetPtr<class FOnDragDropMulticast__DelegateSignature>* M_PtrGetOnDragged();
	void M_SetOnDragged(const TAssetPtr<class FOnDragDropMulticast__DelegateSignature>& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.DragDropOperation");
		return ptr;
	}

#pragma region Functions
	void DragCancelled(const struct FPointerEvent& PointerEvent);

	void Dragged(const struct FPointerEvent& PointerEvent);

	void Drop(const struct FPointerEvent& PointerEvent);

#pragma endregion
};
};