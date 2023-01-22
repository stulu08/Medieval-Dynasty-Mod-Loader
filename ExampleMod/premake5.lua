project "ExampleMod"
	kind "SharedLib"
	language "C++"
	cppdialect "C++17"
	staticruntime "off"
	targetname ("ExampleMod");
	targetdir ("%{wks.location}/bin/" .. outputdir .. "/ExampleMod")
	objdir ("bin-int/" .. outputdir .. "")
	dependson { "MedievalDynastyModLoader", "BaseMod" }
	defines
	{
		"NDEBUG",
		"EXAMPLEMOD_EXPORTS",
		"_WINDOWS",
		"_USRDLL",
		"_CRT_SECURE_NO_WARNINGS"
	}
	files
	{
		"**.h",
		"**.cpp",
		"**.hpp",
		"%{IncludeDir.UE4}/**.hpp",
		"%{IncludeDir.UE4}/**.cpp",
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
	}
	postbuildcommands {
		"{COPYDIR} \"%{ProjectDir.ExampleMod}/Config\" \"%{wks.location}/bin/" .. outputdir .. "/ExampleMod\"",
	}
	links
	{
		"BaseMod",
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
