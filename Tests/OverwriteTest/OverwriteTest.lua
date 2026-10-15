-- Test mod for the mod model (Core + Overwrite, mod-components phase 1): the DLL adds an overwrite file in OnLoad.
project "OverwriteTest"
	kind "SharedLib"
	language "C++"
	cppdialect "C++20"
	staticruntime "off"
	targetname ("OverwriteTest");
	targetdir ("bin/" .. outputdir)
	DeployTo("Tests/OverwriteTest")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")
	dependson { "ModLoader" }
	defines
	{
		"NDEBUG",
		"OverwriteTest_EXPORTS",
		"_WINDOWS",
		"_USRDLL",
		"_CRT_SECURE_NO_WARNINGS"
	}
	files
	{
		"**.h",
		"**.cpp",
		"**.hpp",
	}

	includedirs
	{
		"%{IncludeDir.spdlog}",
		"%{IncludeDir.MDML}",
		"%{IncludeDir.Engine}",
		"%{IncludeDir.EngineUE4}",
		"%{IncludeDir.glm}",
		"%{IncludeDir.ImGui}",
		"%{IncludeDir.SDK}", -- generated SDK (header-only), not used by this test mod
	}
	postbuildcommands {
		"{COPYDIR} \"%{ProjectDir.OverwriteTest}/Config\" \"%{OutputDir}/Tests/OverwriteTest\"",
	}
	links
	{
		"ModLoader"
	}
	filter "system:windows"
		systemversion "latest"

	filter "configurations:Release"
		defines "ST_RELEASE"
		runtime "Release"
		symbols "on"
		optimize "speed"
