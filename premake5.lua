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
		"Dependencies/Dependencies.lua",
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

-- Third-party code (vendored in Dependencies/, built from source as static libraries; see each VENDORED.txt)
group "Dependencies"
include "Dependencies/MinHook/MinHook.lua"
include "Dependencies/ImGui/ImGui.lua"
include "Dependencies/GLFW/premake5.lua"
include "Dependencies/Glad/premake5.lua"
include "Dependencies/SDG/premake5.lua"
include "Dependencies/Dumper-7/Dumper7.lua"

group "MDML"
include "Loader/Proxy/Proxy.lua"
include "Loader/ModLoader/ModLoader.lua"
-- Loader/SDK/Generated: the generated SDK, header-only (no project; IncludeDir.SDK). BaseMod is gone: GameMod is part
-- of MDML.dll (MDML/GameMod.h) since Wave 4 step B.
include "Mods/Examples/Examples.lua"
-- standalone Mod Manager app on SDG (GLFW + OpenGL + ImGui, all from the Dependencies group)
group "GUI"
include "Tools/ModManager/Core/ModManagerCore.lua"
include "Tools/ModManager/ModManager.lua"
-- DevTools mod (off by default) with the MDML SDK generator on vendored Dumper-7 (plan 2.4, docs/SDK_GENERATOR.md)
group "DevTools"
include "Mods/DevTools/DevTools.lua"
-- offline compile test of the SDK generator output (Tests/SDKCompileTest, plan 2.4); its DLL goes to Output/Tests
group "Tests"
include "Tests/SDKCompileTest/SDKCompileTest.lua"
-- test mod for the mod model (Core + Overwrite); deploys to Output/Tests/OverwriteTest, NOT into the installable package
include "Tests/OverwriteTest/OverwriteTest.lua"
group ""