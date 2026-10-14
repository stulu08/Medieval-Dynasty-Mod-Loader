#pragma once
// Umbrella header: hand-written engine core (ModLoader/src/Engine, compiled into MDML.dll and exported)
// + the generated SDK aggregators (SDK/src, static SDK.lib).
// Pattern.h / GameInfo.h are no longer pulled in here (Wave 2.3): include Platform/Pattern.h where you scan.
// GameInfo.h is gone (Wave 2.4): engine state lives in EngineAddresses.h / EngineLayout.h (included by the core
// headers that read it), loader settings in Runtime/LoaderConfig.h.

#include "Platform/Memory.h"
#include "Platform/Math.h"
#include "NameValidator.h"
#include "UE4/Engine/EngineBaseTypes.h"

#include "UE4/SDK.h"
#include "Medieval_Dynasty/SDK.h"
