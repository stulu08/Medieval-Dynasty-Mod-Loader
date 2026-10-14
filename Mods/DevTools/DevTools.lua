-- DevTools: developer mod shipped with MDML, disabled by default (Config/mod.ini). Hosts the MDML SDK generator.
-- Two projects, so that Dumper-7's C++latest requirement stays out of the C++17 mod/core code:
--   DevTools.Generator  static lib, C++latest: our MDMLGenerator backend + the SdkGenerator facade (src/Generator) on top of
--                       the vendored Dumper-7 analysis (Dependencies/Dumper-7, project "Dumper7"). No MDML headers.
--   DevTools            the mod DLL, C++20: ImGui UI, export lists, game-thread scheduling, plus (Wave 3C) the tools moved
--                       from BaseMod (object browser, legacy exporter, INI browser/editor, player tools); talks to the generator
--                       only through src/Generator/SdkGenerator.h (std types only).
local dumper = "%{IncludeDir.Dumper7}"

project "DevTools.Generator"
	kind "StaticLib"
	language "C++"
	cppdialect "C++latest" -- includes Dumper-7 headers (C++20/23: concepts, std::format, ranges)
	staticruntime "off"
	targetdir ("bin/" .. outputdir)
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")
	defines
	{
		"NDEBUG",
		"_CRT_SECURE_NO_WARNINGS",
	}
	files
	{
		"src/Generator/**.h",
		"src/Generator/**.cpp",
	}
	-- same include roots as upstream Dumper.vcxproj
	includedirs
	{
		dumper,
		dumper .. "/Engine/Public",
		dumper .. "/Generator/Public",
		dumper .. "/Utils",
		dumper .. "/Platform/Public",
		"src/Generator",
	}
	-- see Dependencies/Dumper-7/Dumper7.lua: the included Dumper-7 headers trigger these upstream warnings
	disablewarnings { "4244", "4267", "4018", "4305" }
	links { "Dumper7" }
	filter "system:windows"
		systemversion "latest"
		buildoptions { "/utf-8", "/bigobj" }

	filter "configurations:Release"
		runtime "Release"
		symbols "on"
		optimize "speed"

project "DevTools"
	kind "SharedLib"
	language "C++"
	cppdialect "C++20"
	staticruntime "off"
	targetname ("DevTools");
	targetdir ("bin/" .. outputdir)
	DeployTo("ModLoader/Mods/DevTools")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")
	dependson { "ModLoader", "DevTools.Generator" }
	defines
	{
		"NDEBUG",
		"_WINDOWS",
		"_USRDLL",
		"_CRT_SECURE_NO_WARNINGS"
	}
	files
	{
		"dllmain.cpp",
		"src/*.h",
		"src/*.cpp",
		"src/Generator/SdkGenerator.h",
	}
	includedirs
	{
		"src",
		"%{IncludeDir.spdlog}",
		"%{IncludeDir.MDML}",
		"%{IncludeDir.Engine}",
		"%{IncludeDir.EngineUE4}",
		"%{IncludeDir.glm}",
		"%{IncludeDir.ImGui}",
		-- Mod/Mod.h pulls the old generated SDK headers through UE4.h (the DLL links SDK, see links below)
		"%{IncludeDir.UE4}",
		"%{IncludeDir.SDK}",
		"%{IncludeDir.MedievalDynasty}",
	}
	postbuildcommands {
		"{COPYDIR} \"%{ProjectDir.DevTools}/Config\" \"%{OutputDir}/ModLoader/Mods/DevTools\"",
	}
	-- SDK: the object browser and player tools use hybrid old-SDK classes (AActor, UDataTable, UGameplayStatics, ...).
	-- Goes away with the old SDK (plan 2.4).
	links
	{
		"ModLoader",
		"SDK",
		"DevTools.Generator",
	}
	filter "system:windows"
		systemversion "latest"

	filter "configurations:Release"
		runtime "Release"
		symbols "on"
		optimize "speed"
