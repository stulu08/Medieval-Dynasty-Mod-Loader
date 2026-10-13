project "LoaderAutoInjector"
	kind "SharedLib"
	language "C++"
	cppdialect "C++17"
	staticruntime "off"
	targetname ("xinput1_3");
	targetdir ("%{wks.location}/bin/" .. outputdir .. "")
	objdir ("bin-int/" .. outputdir .. "")
	
	defines
	{
		"NDEBUG",
		"LOADERAUTOINJECTOR_EXPORTS",
		"_WINDOWS",
		"_USRDLL",
		"_CRT_SECURE_NO_WARNINGS"
	}
	files
	{
		"xinput1_3/xinput1_3.cpp",
		"xinput1_3/xinput1_3.def",
		"xinput1_3/xinput1_3_asm.asm",
		"Loader/**.cpp",
		"Loader/**.h"
	}
	libdirs 
	{
		
	}
	includedirs
	{
		
	}
	postbuildcommands {
		
	}
	links
	{
		
	}
	filter "system:windows"
		systemversion "latest"

	filter "configurations:Release"
		defines "ST_RELEASE"
		runtime "Release"
		symbols "on"
		optimize "speed"
