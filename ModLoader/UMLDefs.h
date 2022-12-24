#pragma once

//Easy To Manage, keeping it in one place.
#define MODLOADER_VERSION "2.2.1"
//The version of the medieval dynasty mod loader
#define MEDIEVAL_VERSION "1.0.0"

#define ModLoaderConfigFile "Config/ModLoaderInfo.ini"
#define DEFAULT_LOG_FILE "UML-Log.txt"

#ifdef UNREALENGINEMODLOADER_EXPORTS
#define LOADER_API __declspec(dllexport)
#else
#define LOADER_API __declspec(dllimport)
#endif

#define BPFUNCTION(Function) void Function(UE4::UObject* ContextObject, UE4::FFrame* stack, void* const ret)

#define REGISTER_FUNCTION(Function) Global::GetGlobals()->AddBPFunctionWrapper(#Function, Function);
#define REGISTER_FUNCTION_NAMED(Function, StringName) Global::GetGlobals()->AddBPFunctionWrapper(StringName, Function);