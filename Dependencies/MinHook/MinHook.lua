-- MinHook v1.3.4 built from source (see VENDORED.txt).
-- Replaces the prebuilt libMinHook-x64-v141-mtd.lib (which used the static debug CRT /MTd).
project "MinHook"
	kind "StaticLib"
	language "C"
	staticruntime "off"
	targetdir ("bin/" .. outputdir)
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"include/MinHook.h",
		"src/**.h",
		"src/**.c",
	}
	includedirs
	{
		"include",
		"src",
	}

	filter "system:windows"
		systemversion "latest"

	filter "configurations:Release"
		runtime "Release"
		optimize "speed"
