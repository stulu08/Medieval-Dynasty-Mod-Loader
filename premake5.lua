include "./scripts/premake/premake_customization/solution_items.lua"
include "./scripts/premake/premake_customization/generate_doc.lua"
workspace "MDML"
	startproject "ExampleMod"
	configurations
	{
		"Release"
	}
	flags
	{
		"MultiProcessorCompile"
	}
	solution_items 
	{
		"Config/ModLoaderInfo.ini",
		"Config/NoOverwrite.ini",
		"README.md"
	}
	architecture "x86_64"

	filter "configurations:Release"
		defines     "NDEBUG"

	filter { "system:windows", "configurations:Release", "toolset:not mingw" }
		flags		{ "LinkTimeOptimization" }
	
	filter "action:vs*"
		linkoptions {
			"/ignore:4006",
			"/ignore:4099",
			"/ignore:4251",
		}
		disablewarnings {
			"4006",
			"4099",
			"4251",
		}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"
builddir = "%{wks.location}/build/%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"


IncludeDir = {}
IncludeDir["spdlog"] = "%{wks.location}/ModLoader/vendor/spdlog"
IncludeDir["MinHook"] = "%{wks.location}/ModLoader/vendor/MinHook"
IncludeDir["glm"] = "%{wks.location}/ModLoader/vendor/glm"
IncludeDir["INI"] = "%{wks.location}/ModLoader/vendor/INI"
IncludeDir["ImGui"] = "%{wks.location}/ModLoader/vendor/ImGui"

IncludeDir["ModLoader"] = "%{wks.location}/ModLoader/src"
IncludeDir["UE4"] = "%{wks.location}/SDK/src/UE4"
IncludeDir["MedievalDynasty"] = "%{wks.location}/SDK/src/Medieval_Dynasty"
IncludeDir["SDK"] = "%{wks.location}/SDK/src"
IncludeDir["BaseMod"] = "%{wks.location}/BaseMod/src"


ProjectDir = {}
ProjectDir["BaseMod"] = "%{wks.location}/BaseMod"
ProjectDir["Injector"] = "%{wks.location}/LoaderAutoInjector"
ProjectDir["Loader"] = "%{wks.location}/ModLoader"
ProjectDir["ExampleMod"] = "%{wks.location}/ExampleMod"

include "ExampleMod"
group "MDML"
include "LoaderAutoInjector"
include "ModLoader"
include "BaseMod"
include "SDK"
group ""

