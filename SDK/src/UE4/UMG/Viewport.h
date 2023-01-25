#pragma once
#include "Structs.h"
#include "UE4/SDK.h"
#include "UMG/ContentWidget.h"
/////////////////////////////////////////////
// Class UMG.Viewport
// Super: Class UMG.ContentWidget
// Size: 360
// Size inherited: 288
/////////////////////////////////////////////
namespace UE4 {
class UViewport : public UContentWidget {
public:
#pragma region Members
	//struct FLinearColor	BackgroundColor;		//Offset: 288	Size: 16	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FLinearColor M_GetBackgroundColor() const;
	struct FLinearColor* M_PtrGetBackgroundColor();
	void M_SetBackgroundColor(const struct FLinearColor& value);

#pragma endregion

public:
	static UClass* StaticClass() {
		static auto ptr = UObject::FindClass("Class UMG.Viewport");
		return ptr;
	}

#pragma region Functions
	struct FVector GetViewLocation() const;

	class UWorld* GetViewportWorld() const;

	struct FRotator GetViewRotation() const;

	void SetViewLocation(struct FVector Location);

	void SetViewRotation(struct FRotator Rotation);

	class AActor* Spawn(class AActor* ActorClass);

#pragma endregion
};
};