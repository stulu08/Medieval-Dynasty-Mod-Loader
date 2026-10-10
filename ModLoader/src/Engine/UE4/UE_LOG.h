#pragma once
#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/fmt/ostr.h>
#define UE_LOG(CategoryName, Verbosity, Format, ...) {\
	if (SDK::SelectedGameProfile.UnrealLogger) { \
		LogLevel level = LogLevel::Verbosity;  \
		SDK::SelectedGameProfile.UnrealLogger->log((spdlog::level::level_enum)level, Format, __VA_ARGS__); \
	} \
} 