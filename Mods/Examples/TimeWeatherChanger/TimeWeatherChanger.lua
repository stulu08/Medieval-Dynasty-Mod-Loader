project "TimeWeatherChanger"
	kind "SharedLib"
	language "C++"
	cppdialect "C++17"
	staticruntime "off"
	targetname ("TimeWeatherChanger");
	targetdir ("%{wks.location}/bin/" .. outputdir .. "/Mods/TimeWeatherChanger")
	objdir ("bin-int/" .. outputdir .. "")
	dependson { "ModLoader", "BaseMod" }
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
		"%{IncludeDir.ModLoader}",
		"%{IncludeDir.Engine}",
		"%{IncludeDir.EngineUE4}",
		"%{IncludeDir.INI}",
		"%{IncludeDir.glm}",
		"%{IncludeDir.ImGui}",
		"%{IncludeDir.BaseMod}",
		"%{IncludeDir.UE4}",
		"%{IncludeDir.SDK}",
		"%{IncludeDir.MedievalDynasty}",
	}
	postbuildcommands {
		"{COPYDIR} \"%{ProjectDir.TimeWeatherChanger}/Config\" \"%{wks.location}/bin/" .. outputdir .. "/Mods/TimeWeatherChanger\"",
	}
	links
	{
		"BaseMod",
		"SDK",
		"ModLoader"
	}
	filter "system:windows"
		systemversion "latest"

	filter "configurations:Release"
		defines "ST_RELEASE"
		runtime "Release"
		symbols "on"
		optimize "speed"
