-- Offline compile test for the MDML SDK generator output (docs/SDK_GENERATOR.md).
-- Compiles Sample/ (hand-written exactly as MDMLGenerator emits it) against the hand-written core and links MDML.lib.
-- Only the core include dirs are used - no old generated SDK - to prove the generated headers are self-contained.
-- The resulting DLL is a test artifact; it is not part of the deployed mod set.
project "DevTools.SDKCompileTest"
	kind "SharedLib"
	language "C++"
	cppdialect "C++17"
	staticruntime "off"
	targetname ("SDKCompileTest");
	targetdir ("%{wks.location}/bin/" .. outputdir .. "/Tests")
	objdir ("bin-int/" .. outputdir .. "")
	dependson { "MedievalDynastyModLoader" }
	defines
	{
		"NDEBUG",
		"_WINDOWS",
		"_USRDLL",
		"_CRT_SECURE_NO_WARNINGS"
	}
	files
	{
		"SDKCompileTest.cpp",
		"Sample/**.hpp",
	}
	includedirs
	{
		"Sample",
		"%{IncludeDir.spdlog}",
		"%{IncludeDir.ModLoader}",
		"%{IncludeDir.Engine}",
		"%{IncludeDir.EngineUE4}",
		"%{IncludeDir.INI}",
		"%{IncludeDir.glm}",
	}
	links
	{
		"MedievalDynastyModLoader",
	}
	filter "system:windows"
		systemversion "latest"

	filter "configurations:Release"
		runtime "Release"
		symbols "on"
		optimize "speed"
