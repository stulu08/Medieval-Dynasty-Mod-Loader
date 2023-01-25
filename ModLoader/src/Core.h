#pragma once

//The version of unreal mod loader
#define UML_VERSION "2.2.1"
//The version of the medieval dynasty mod loader
#define MODLOADER_VERSION "1.2.2"
//The version of medieval dynasty
#define MEDIEVAL_VERSION "1.5.0.4"

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

#define NOMINMAX

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