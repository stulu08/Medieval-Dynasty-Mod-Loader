#pragma once
// Facade between the DevTools mod (C++17, MDML headers) and the SDK generator library (C++latest, Dumper-7 headers).
// Only standard-library types cross this boundary. Implemented in SdkGenerator.cpp (DevTools.Generator lib).
//
// Threading: every function here walks the engine's object array and must run on the GAME THREAD
// (DevTools enqueues it with mdml::runtime::GameThread::Enqueue). The game freezes while it runs.

#include <filesystem>
#include <functional>
#include <cstdint>
#include <string>
#include <utility>
#include <vector>

namespace devtools::sdkgen {
	enum class ELogLevel {
		Info,
		Warn,
		Error,
	};
	using LogCallback = std::function<void(ELogLevel Level, const std::string& Message)>;
	// Display names of a Blueprint (user-defined) enum: (value, display name) for every entry that has one, empty for
	// any other enum. Enum is the raw UEnum*. Without it, Blueprint enums keep their internal names (NewEnumerator0..N).
	using EnumDisplayNamesCallback = std::function<std::vector<std::pair<uint64_t, std::string>>(const void* Enum)>;

	struct GenerateRequest {
		// Root output folder, e.g. "<MDML.dll dir>/SDK-Out". Dumper-7 creates "<GameVersion>-<GameName>/" inside it;
		// the headers go to ".../MDML-SDK/". Existing folders are rotated to "*_OLD" by Dumper-7.
		std::filesystem::path OutputRoot;
		// Package names as shown by the package list (e.g. "BP_BaseCharacter", "Engine"). Dependencies are added.
		std::vector<std::string> Packages;
		bool bAllPackages = false;
		EnumDisplayNamesCallback EnumDisplayNames;
	};

	struct GenerateResult {
		bool bSuccess = false;
		std::string Error;
		std::filesystem::path SdkFolder;              // folder with the generated headers
		std::vector<std::string> GeneratedPackages;
		std::vector<std::string> MissingPackages;     // requested but not found in the running game
		int NumClasses = 0;
		int NumStructs = 0;
		int NumEnums = 0;
		int NumFunctions = 0;
		int NumSkippedFunctions = 0;
		int NumOpaqueMembers = 0;
		double Seconds = 0.0;
	};

	// Runs Dumper-7's engine-core init and analysis (offset finder, package/struct/enum/member managers) once per
	// process. Later calls return the cached result: classes loaded after the first analysis are not seen.
	bool EnsureAnalysis(const LogCallback& Log, std::string& OutError);
	bool IsAnalysisDone();

	// Non-empty package names of the analysis snapshot, sorted. Empty before EnsureAnalysis succeeded.
	std::vector<std::string> GetPackageNames();

	// EnsureAnalysis + MDMLGenerator. Never throws; failures are reported in the result.
	GenerateResult Generate(const GenerateRequest& Request, const LogCallback& Log);
}
