project "MedievalDynastyModLoader"
	kind "SharedLib"
	language "C++"
	cppdialect "C++17"
	staticruntime "off"
	targetname ("MDML");
	targetdir ("%{wks.location}/bin/" .. outputdir .. "")
	objdir ("bin-int/" .. outputdir .. "")
	
	pchheader "Core.h"
	pchsource "src/Core.cpp"
	
	defines
	{
		"NDEBUG",
		"UNREALENGINEMODLOADER_EXPORTS",
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
	libdirs 
	{
		--"%{IncludeDir.MinHook}/lib"
	}
	includedirs
	{
		"%{IncludeDir.spdlog}",
		"%{IncludeDir.MinHook}",
		"%{IncludeDir.ModLoader}",
		"%{IncludeDir.INI}",
		"%{IncludeDir.glm}",
		"%{IncludeDir.ImGui}",
		
		"%{IncludeDir.UE4}",
		
	}
	postbuildcommands {
		"{MKDIR} \"%{wks.location}/bin/" .. outputdir .. "/Config\"",
		"{COPYDIR} \"%{wks.location}/Config\" \"%{wks.location}/bin/" .. outputdir .. "/Config\"",
	}
	links
	{
		"%{IncludeDir.MinHook}/lib/libMinHook-x64-v141-mtd.lib"
	}
	filter "files:vendor/**.cpp or files:src/UE4/**.cpp"
		flags {"NoPCH"}
	filter "system:windows"
		systemversion "latest"

	filter "configurations:Release"
		defines "ST_RELEASE"
		runtime "Release"
		symbols "on"
		optimize "speed"
