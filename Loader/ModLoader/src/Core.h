#pragma once
// Precompiled header of MDML.dll; also the first include of every mod and of the engine core.
// UML_VERSION / MODLOADER_VERSION / MEDIEVAL_VERSION live in Bootstrap/Version.h (Wave 3A).
#include "Bootstrap/Version.h"

#define ModLoaderConfigFile "Config/ModLoaderInfo.ini"
#define DEFAULT_LOG_DIR "Logs"
#define BASE_LOG_FILENAME "Log.txt"

#ifdef UNREALENGINEMODLOADER_EXPORTS
#define LOADER_API __declspec(dllexport)
#else
#define LOADER_API __declspec(dllimport)
#endif
// Hand-written engine core (ModLoader/src/Engine: UObject, FName, UClass, FProperty, UWorld, ...) is compiled into
// MDML.dll and exported with the same import/export switch. Separate name so engine exports stay greppable and could
// move to their own DLL later without touching every declaration (Wave 2.3).
#define MDML_ENGINE_API LOADER_API

#define BPFUNCTION(Function) void Function(UE4::UObject* ContextObject, UE4::FFrame* stack, void* const ret)

#define REGISTER_FUNCTION(Function) Global::GetGlobals()->AddBPFunctionWrapper(#Function, Function);
#define REGISTER_FUNCTION_NAMED(Function, StringName) Global::GetGlobals()->AddBPFunctionWrapper(StringName, Function);

#define NOMINMAX

//uses only the UE4 TMap implementation
//#define USE_ONLY_UE4_TMAP 1

//does checks for UObject::ProcesseEvent
#define ALWAYS_PROCESS_EVENT_SAVE 1


#include <set>
#include <map>
#include <any>
#include <regex>
#include <xhash>
#include <array>
#include <vector>
#include <string>
#include <future>
#include <memory>
#include <errno.h>
#include <sstream>
#include <variant>
#include <numeric>
#include <cstring>
#include <ostream>
#include <fstream>
#include <cstdlib>
#include <stdio.h>
#include <utility>
#include <iomanip>
#include <optional>
#include <iostream>
#include <stdlib.h>
#include <execution>
#include <algorithm>
#include <functional>
#include <filesystem>
#include <unordered_map>
#include <unordered_set>

#include <windows.h>
#include <psapi.h>
#include <tchar.h>
#include <cinttypes>
#include <commdlg.h>
#include <process.h>
#include <shlobj_core.h>

template<typename T>
using Ref = std::shared_ptr<T>;
template<typename T, typename ... Args>
constexpr Ref<T> createRef(Args&& ... args)
{
	return std::make_shared<T>(std::forward<Args>(args)...);
}

enum class LogLevel {
	Trace = 0,
	Info = 2,
	Warn = 3,
	Error = 4,
	Critical = 5,

	//unreal engine logging formats
	VeryVerbose = Trace,
	Verbose = Trace,
	Log = Info,
	Display = Info,
	Warning = Warn,
	Fatal = Critical,
};