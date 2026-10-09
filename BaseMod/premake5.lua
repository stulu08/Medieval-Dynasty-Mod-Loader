project "BaseMod"
	kind "SharedLib"
	language "C++"
	cppdialect "C++17"
	staticruntime "off"
	targetname ("BaseMod");
	targetdir ("%{wks.location}/bin/" .. outputdir .. "/Mods/BaseMod")
	objdir ("bin-int/" .. outputdir .. "")
	dependson { "MedievalDynastyModLoader" }
	defines
	{
		"NDEBUG",
		"BaseMod_EXPORTS",
		"_WINDOWS",
		"_USRDLL",
		"_CRT_SECURE_NO_WARNINGS"
	}
	files
	{
		"dllmain.cpp",
		"src/**.h",
		"src/**.cpp",
		"src/**.hpp",
	}

	includedirs
	{
		"%{IncludeDir.spdlog}",
		"%{IncludeDir.MinHook}",
		"%{IncludeDir.ModLoader}",
		"%{IncludeDir.INI}",
		"%{IncludeDir.glm}",
		"%{IncludeDir.BaseMod}",
		"%{IncludeDir.ImGui}",
		"%{IncludeDir.UE4}",
		"%{IncludeDir.SDK}",
		"%{IncludeDir.MedievalDynasty}",
	}
	postbuildcommands {
		"{COPYDIR} \"%{ProjectDir.BaseMod}/Config\" \"%{wks.location}/bin/" .. outputdir .. "/Mods/BaseMod\"",
	}
	links
	{
		"MedievalDynastyModLoader",
		"SDK",
		"LoaderAutoInjector",
		"MinHook"
	}
	filter "system:windows"
		systemversion "latest"

	filter "configurations:Release"
		defines "ST_RELEASE"
		runtime "Release"
		symbols "on"
		optimize "speed"
