#pragma once
#include "Mods/Mod.h"

#ifdef BaseMod_EXPORTS
#define BASEMOD_API __declspec(dllexport)
#else
#define BASEMOD_API __declspec(dllimport)
#endif