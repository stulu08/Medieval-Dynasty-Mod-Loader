#pragma once
#include "Math/Transform.h"
#include "UObject/Object.h"
#include "GameFrameworkTypes.h"
namespace UE4 {
	class AActor : public UObject
	{
	public:
		FTransform GetTransform();
		bool K2_SetActorTransform(const struct FTransform& NewTransform, bool bSweep = false, struct FHitResult* SweepHitResult = nullptr, bool bTeleport = true);
		
		FRotator GetActorRotation();
		bool SetActorRotation(const FQuat& NewRotation, ETeleportType Teleport = ETeleportType::None) {
			return K2_SetActorRotation(NewRotation.Rotator(), Teleport == ETeleportType::TeleportPhysics);
		}
		bool SetActorRotation(const FRotator& NewRotation, ETeleportType Teleport = ETeleportType::None) {
			return K2_SetActorRotation(NewRotation, Teleport == ETeleportType::TeleportPhysics);
		}
		bool K2_SetActorRotation(const struct FRotator& NewRotation, bool bTeleportPhysics = false);

		FVector GetActorLocation();
		bool K2_SetActorLocation(const struct FVector& NewLocation, bool bSweep = false, struct FHitResult* SweepHitResult = nullptr, bool bTeleport = true);
		
		FVector GetActorScale3D();
		void SetActorScale3D(const struct FVector& NewScale3D);
		
		FVector GetActorForwardVector();
		FVector GetActorUpVector();
		FVector GetActorRightVector();
		
		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class Engine.Actor");
			return ptr;
		}
	};
}