#pragma once
#include "Containers/Pointers.h"
#include "UObject/CoreTypes.h"
#include "Math/Vector.h"

namespace UE4 {
	// ScriptStruct Engine.FHitResult | UE: 4.27.2
	// FHitResult size: 136
	struct FHitResult {
		int32_t FaceIndex;																							 //offset: 0   | size: 4
		float Time;																									 //offset: 4   | size: 4
		float Distance;																								 //offset: 8   | size: 4
		FVector Location;																							 //offset: 12  | size: 12
		FVector ImpactPoint;																						 //offset: 24  | size: 12
		FVector Normal;																								 //offset: 36  | size: 12
		FVector ImpactNormal;																						 //offset: 48  | size: 12
		FVector TraceStart;																							 //offset: 60  | size: 12
		FVector TraceEnd;																							 //offset: 72  | size: 12
		float PenetrationDepth;																						 //offset: 84  | size: 4
		int32_t Item;																								 //offset: 88  | size: 4
		uint8_t ElementIndex;																						 //offset: 92  | size: 1
		uint8_t bBlockingHit : 1;																					 //offset:     | size:
		uint8_t bStartPenetrating : 1;																				 //offset:     | size:
		TWeakObjectPtr<class UPhysicalMaterial> PhysMaterial;														 //offset: 96  | size: 8
		TWeakObjectPtr<class AActor> Actor;																			 //offset: 104 | size: 8
		TWeakObjectPtr<class UPrimitiveComponent> Component;														 //offset: 112 | size: 8
		FName BoneName;																								 //offset: 120 | size: 8
		FName MyBoneName;																							 //offset: 128 | size: 8
	};
	enum class ETeleportType
	{
		None = 0,
		TeleportPhysics = 1,
		ResetPhysics = 2,
	};
}