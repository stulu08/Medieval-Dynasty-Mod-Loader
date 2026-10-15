project "TimeWeatherChanger"
	kind "SharedLib"
	language "C++"
	cppdialect "C++20"
	staticruntime "off"
	targetname ("TimeWeatherChanger");
	targetdir ("bin/" .. outputdir)
	DeployTo("ModLoader/Mods/TimeWeatherChanger")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")
	dependson { "ModLoader" }
	defines
	{
		"NDEBUG",
		"TimeWeatherChanger_EXPORTS",
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
		"%{IncludeDir.SDK}", -- generated SDK (header-only), e.g. #include "BP_WeatherManager.hpp"
	}
	postbuildcommands {
		"{COPYDIR} \"%{ProjectDir.TimeWeatherChanger}/Config\" \"%{OutputDir}/ModLoader/Mods/TimeWeatherChanger\"",
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
