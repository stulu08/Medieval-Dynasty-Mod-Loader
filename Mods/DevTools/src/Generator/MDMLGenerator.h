#pragma once
// MDMLGenerator: MDML's own SDK backend for Dumper-7 (plugs into Generator::Generate<T>()).
//
// Uses Dumper-7's analysis (PackageManager, StructManager, EnumManager, MemberManager, collision handling, struct
// sizes/alignment) and emits ONE HEADER PER PACKAGE against MDML's hand-written core (UE4::UObject, TArray, FName, ...,
// runtime helpers in ModLoader/src/Engine/MDML/GeneratedSupport.h). Output shape: docs/SDK_GENERATOR.md.
//
// Parts of this backend (member layout/padding/bitfield logic, parameter typing rules, type mapping) are adapted from
// Dumper-7's CppGenerator - Dumper-7 by Encryqed/Fischsalat and contributors, https://github.com/Encryqed/Dumper-7,
// used with the maintainer's permission for open-source projects with attribution (issue #416, see
// Dependencies/Dumper-7/VENDORED.txt).
//
// C++latest translation unit (Dumper-7 headers). Not visible to the C++17 mod code: use SdkGenerator.h.

#include <filesystem>
#include <string>
#include <unordered_set>
#include <vector>

#include "Generators/Generator.h"
#include "PredefinedMembers.h"

namespace fs = std::filesystem;

class MDMLGenerator
{
public:
	/* Required by Generator::Generate<T>() (GeneratorImplementation concept) */
	static inline PredefinedMemberLookupMapType PredefinedMembers;

	static inline std::string MainFolderName = "MDML-SDK";
	static inline std::string SubfolderName = "";

	static inline fs::path MainFolder;
	static inline fs::path Subfolder;

public:
	/* Input, set before Generator::Generate<MDMLGenerator>() */
	static inline std::vector<std::string> RequestedPackages;
	static inline bool bAllPackages = false;

	/* Output of the last run */
	struct FStats
	{
		std::vector<std::string> GeneratedPackages;
		std::vector<std::string> MissingPackages;
		int32 NumClasses = 0;
		int32 NumStructs = 0;
		int32 NumEnums = 0;
		int32 NumFunctions = 0;
		int32 NumSkippedFunctions = 0;
		int32 NumOpaqueMembers = 0;
		std::vector<std::string> Notes; // skipped functions, opaque members, cycles (also in GenerationReport.txt)
	};
	static inline FStats Stats;

public:
	static void Generate();

	/* No predefined (non-reflected) members: MDML classes are offset-free views, predefined core types are hand-written. */
	static void InitPredefinedMembers() {}
	static void InitPredefinedFunctions() {}

	/* Names of all non-empty packages, sorted (for the DevTools package picker). Requires Generator::InitInternal(). */
	static std::vector<std::string> GetPackageNames();
};
