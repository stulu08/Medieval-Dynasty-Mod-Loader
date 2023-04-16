project "PresetMod"
	kind "SharedLib"
	language "C++"
	cppdialect "C++17"
	staticruntime "off"
	targetname ("PresetMod");
	targetdir ("%{wks.location}/bin/" .. outputdir .. "/Mods/PresetMod")
	objdir ("bin-int/" .. outputdir .. "")
	dependson { "MedievalDynastyModLoader", "BaseMod" }
	defines
	{
		"NDEBUG",
		"PresetMod_EXPORTS",
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
		"%{IncludeDir.MinHook}",
		"%{IncludeDir.ModLoader}",
		"%{IncludeDir.INI}",
		"%{IncludeDir.glm}",
		"%{IncludeDir.ImGui}",
		"%{IncludeDir.BaseMod}",
		"%{IncludeDir.UE4}",
		"%{IncludeDir.SDK}",
		"%{IncludeDir.MedievalDynasty}",
	}
	postbuildcommands {
		"{COPYDIR} \"%{ProjectDir.PresetMod}/Config\" \"%{wks.location}/bin/" .. outputdir .. "/Mods/PresetMod\"",
	}
	links
	{
		"BaseMod",
		"SDK",
		"LoaderAutoInjector",
		"MedievalDynastyModLoader",
		"%{IncludeDir.MinHook}/lib/libMinHook-x64-v141-mtd.lib"
	}
	filter "system:windows"
		systemversion "latest"

	filter "configurations:Release"
		defines "ST_RELEASE"
		runtime "Release"
		symbols "on"
		optimize "speed"
