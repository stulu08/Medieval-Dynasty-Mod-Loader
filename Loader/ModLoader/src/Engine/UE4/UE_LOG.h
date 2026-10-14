#pragma once
#include "Core.h"
#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/fmt/ostr.h>

namespace mdml {
	// spdlog logger behind UE_LOG (UE_LOG-log.txt), created by mdml::runtime::LoadLoaderConfig (Runtime/LoaderConfig.cpp);
	// UE_LOG does nothing while it is null.
	// Defined in MDML.dll (Engine/EngineInit.cpp) and exported, so UE_LOG in mods writes to the same log
	// (Wave 2.4, was GameProfile::UnrealLogger).
	extern MDML_ENGINE_API Ref<spdlog::logger> UnrealLogger;
}

#define UE_LOG(CategoryName, Verbosity, Format, ...) {\
	if (mdml::UnrealLogger) { \
		LogLevel level = LogLevel::Verbosity;  \
		mdml::UnrealLogger->log((spdlog::level::level_enum)level, Format, __VA_ARGS__); \
	} \
}