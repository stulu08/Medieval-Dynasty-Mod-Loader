include "./Dependencies/premake/premake_customization/solution_items.lua"
include "./Dependencies/premake/premake_customization/generate_doc.lua"
workspace "MDML"
	startproject "ExampleMod"
	configurations
	{
		"Release"
	}
	solution_items 
	{
		"Loader/ModLoader/Config/ModLoaderInfo.ini",
		"Loader/ModLoader/Config/NoOverwrite.ini",
		"README.md",
		"docs/guides/Modding.md"
	}
	multiprocessorcompile  "On"
	architecture "x86_64"
	exceptionhandling "SEH"
	
	filter "configurations:Release"
		defines     "NDEBUG"

	filter { "system:windows", "configurations:Release", "toolset:not mingw" }
		linktimeoptimization "On"
	
	filter "action:vs*"
		-- /utf-8: required by fmt 12 (spdlog 1.17); all sources are ASCII, so nothing else changes
		buildoptions { "/utf-8" }
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


include "Dependencies/Dependencies.lua"

include "Mods/Examples/Examples.lua"
group "MDML"
include "Loader/Proxy/Proxy.lua"
include "Loader/ModLoader/ModLoader.lua"
include "Mods/BaseMod/BaseMod.lua"
include "Loader/SDK/SDK.lua"
include "Dependencies/MinHook/MinHook.lua"
group "GUI"
include "Tools/ModManager/ModManager.lua"
-- DevTools mod (off by default) with the MDML SDK generator on vendored Dumper-7 (plan 2.4, docs/SDK_GENERATOR.md)
group "DevTools"
include "Mods/DevTools/DevTools.lua"
-- offline compile test of the SDK generator output (Tests/SDKCompileTest, plan 2.4); its DLL goes to bin/.../Tests
group "Tests"
include "Tests/SDKCompileTest/SDKCompileTest.lua"
group ""
