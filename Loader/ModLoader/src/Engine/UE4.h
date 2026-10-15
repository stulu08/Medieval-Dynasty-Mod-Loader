#pragma once
// Umbrella header of the hand-written engine core (ModLoader/src/Engine, compiled into MDML.dll and exported):
// UObject/UClass/FProperty/FName, containers, math, UE_LOG and the engine helpers (GetWorld, SpawnActor, ...).
// The game and engine CLASSES (AActor, UWorld, UGameplayStatics, BP_..._C) are the generated SDK in
// Loader/SDK/Generated: include the package header you need, e.g. "Engine.hpp" or "BP_PlayerCharacter.hpp"
// (docs/SDK_GENERATOR.md). This header only forward-declares the few the public API mentions (Wave 4 step B; before,
// it pulled in the whole old generated SDK).
// Pattern.h / GameInfo.h are no longer pulled in here (Wave 2.3): include Platform/Pattern.h where you scan.
// Engine state lives in EngineAddresses.h / EngineLayout.h, loader settings in Runtime/LoaderConfig.h.

#include "MDML/Math.h"
#include "NameValidator.h"
#include "UE_LOG.h"

#include "Math/Vector.h"
#include "Math/Color.h"
#include "Math/Transform.h"
#include "Math/Box.h"
#include "Math/Plane.h"
#include "Math/Quat.h"

#include "Containers/Array.h"
#include "Containers/Pointers.h"
#include "Containers/String.h"
#include "Containers/Templates.h"
#include "Containers/Text.h"

#include "CoreUObject/NamePool.h"
#include "CoreUObject/ObjectsArray.h"
#include "CoreUObject/Object.h"
#include "CoreUObject/CoreTypes.h"
#include "CoreUObject/Class.h"
#include "CoreUObject/UnrealType.h"
#include "CoreUObject/Stack.h"

#include "UE4/Engine/EngineBaseTypes.h"
#include "UE4/Engine/EngineHelpers.h"

namespace UE4 {
	// Generated classes used by pointer in the public API (MDML/Mod.h, MDML/GameMod.h).
	class AActor;
	class APawn;
	class APlayerController;
	class UWorld;
	class ULevel;
}
