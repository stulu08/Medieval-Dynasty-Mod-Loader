#pragma once
// Umbrella header: hand-written engine core (ModLoader/src/Engine, compiled into MDML.dll and exported)
// + the generated SDK aggregators (SDK/src, static SDK.lib).
// Pattern.h / GameInfo.h are no longer pulled in here (Wave 2.3): include Utilities/Pattern.h where you scan;
// GameInfo.h still comes in through the core headers that read SDK::SelectedGameProfile.

#include "Utilities/Memory.h"
#include "Utilities/Math.h"
#include "NameValidator.h"

#include "UE4/SDK.h"
#include "Medieval_Dynasty/SDK.h"
