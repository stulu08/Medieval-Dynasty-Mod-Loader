-- DevTools: developer mod shipped with MDML, disabled by default (Config/mod.ini). Hosts the MDML SDK generator.
-- Two projects, so that Dumper-7's C++latest requirement stays out of the C++17 mod/core code:
--   DevTools.Generator  static lib, C++latest: vendored Dumper-7 analysis (vendor/Dumper-7, unmodified) + our
--                       MDMLGenerator backend + the SdkGenerator facade (src/Generator). No MDML headers.
--   DevTools            the mod DLL, C++17: ImGui UI, export lists, game-thread scheduling; talks to the generator
--                       only through src/Generator/SdkGenerator.h (std types only).
local dumper = "vendor/Dumper-7/Dumper"

project "DevTools.Generator"
	kind "StaticLib"
	language "C++"
	cppdialect "C++latest" -- Dumper-7 uses C++20/23 features (concepts, std::format, ranges)
	staticruntime "off"
	targetdir ("%{wks.location}/bin-int/" .. outputdir .. "/lib")
	objdir ("bin-int/" .. outputdir .. "")
	defines
	{
		"NDEBUG",
		"_CRT_SECURE_NO_WARNINGS",
	}
	files
	{
		dumper .. "/Engine/**.h",
		dumper .. "/Engine/**.cpp",
		dumper .. "/Platform/**.h",
		dumper .. "/Platform/**.cpp",
		dumper .. "/Generator/**.h",
		dumper .. "/Generator/**.cpp",
		dumper .. "/Settings.h",
		dumper .. "/Settings.cpp",
		dumper .. "/TmpUtils.h",
		dumper .. "/Utils/**.h",
		dumper .. "/Utils/**.hpp",
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
	-- Upstream Dumper-7 builds with these narrowing/sign warnings (int32 offsets from uintptr_t etc.). We do not patch
	-- vendored code (VENDORED.txt "Modifications: none"), and its headers are included by our generator sources too,
	-- so they are silenced for this project only: C4244/C4267 narrowing, C4018 signed/unsigned, C4305 int->bool.
	disablewarnings { "4244", "4267", "4018", "4305" }
	filter "system:windows"
		systemversion "latest"
		buildoptions { "/utf-8", "/bigobj" }

	filter "configurations:Release"
		runtime "Release"
		symbols "on"
		optimize "speed"

ProjectDir["DevTools"] = "%{wks.location}/DevTools"

project "DevTools"
	kind "SharedLib"
	language "C++"
	cppdialect "C++17"
	staticruntime "off"
	targetname ("DevTools");
	targetdir ("%{wks.location}/bin/" .. outputdir .. "/Mods/DevTools")
	objdir ("bin-int/" .. outputdir .. "")
	dependson { "MedievalDynastyModLoader", "DevTools.Generator" }
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
		"%{IncludeDir.MinHook}",
		"%{IncludeDir.ModLoader}",
		"%{IncludeDir.Engine}",
		"%{IncludeDir.EngineUE4}",
		"%{IncludeDir.INI}",
		"%{IncludeDir.glm}",
		"%{IncludeDir.ImGui}",
		-- Mod/Mod.h still pulls the old generated SDK headers through UE4.h (declarations only, SDK.lib is not linked)
		"%{IncludeDir.UE4}",
		"%{IncludeDir.SDK}",
		"%{IncludeDir.MedievalDynasty}",
	}
	postbuildcommands {
		"{COPYDIR} \"%{ProjectDir.DevTools}/Config\" \"%{wks.location}/bin/" .. outputdir .. "/Mods/DevTools\"",
	}
	links
	{
		"MedievalDynastyModLoader",
		"DevTools.Generator",
	}
	filter "system:windows"
		systemversion "latest"

	filter "configurations:Release"
		runtime "Release"
		symbols "on"
		optimize "speed"

include "tests/SDKCompileTest"
