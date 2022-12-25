#pragma once

#include "Utilities/Version.h"

#ifndef MODLOADER_VERSION
//Easy To Manage, keeping it in one place.
#define MODLOADER_VERSION "2.2.1"
//The version of the medieval dynasty mod loader
#define MEDIEVAL_VERSION "1.1.0"
#endif // !MODLOADER_VERSION

#define ModLoaderConfigFile "Config/ModLoaderInfo.ini"
#define DEFAULT_LOG_DIR "Logs"
#define BASE_LOG_FILENAME "Log.txt"

#ifdef UNREALENGINEMODLOADER_EXPORTS
#define LOADER_API __declspec(dllexport)
#else
#define LOADER_API __declspec(dllimport)
#endif

#define BPFUNCTION(Function) void Function(UE4::UObject* ContextObject, UE4::FFrame* stack, void* const ret)

#define REGISTER_FUNCTION(Function) Global::GetGlobals()->AddBPFunctionWrapper(#Function, Function);
#define REGISTER_FUNCTION_NAMED(Function, StringName) Global::GetGlobals()->AddBPFunctionWrapper(StringName, Function);

