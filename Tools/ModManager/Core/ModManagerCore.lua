-- GUI-free logic of the Mod Manager (ini / load order / mod scan / install / download). Also used by the tests below.
project "ModManagerCore"
	kind "StaticLib"
	language "C++"
	cppdialect "C++17"
	staticruntime "off"

	targetdir ("bin/" .. outputdir)
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	defines { "_CRT_SECURE_NO_WARNINGS", "WIN32_LEAN_AND_MEAN", "NOMINMAX" }

	files { "src/**.h", "src/**.cpp" }

	includedirs
	{
		"src",
		"%{IncludeDir.nlohmann_json}"
	}

	links { "winhttp", "shell32", "version", "ole32", "advapi32" }

	filter "system:windows"
		systemversion "latest"

	filter "configurations:Release"
		runtime "Release"
		optimize "on"
		symbols "on"

-- offline tests of the core (no game, no network): Output/Tests/ModManagerTests.exe, exit code 0 = passed
project "ModManagerTests"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++17"
	staticruntime "off"

	targetdir ("bin/" .. outputdir)

	DeployTo("Tests")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	defines { "_CRT_SECURE_NO_WARNINGS", "WIN32_LEAN_AND_MEAN", "NOMINMAX" }

	files { "Tests/**.cpp", "Tests/**.h" }

	includedirs
	{
		"src",
		"%{IncludeDir.nlohmann_json}"
	}

	links { "ModManagerCore" }

	filter "system:windows"
		systemversion "latest"

	filter "configurations:Release"
		runtime "Release"
		optimize "on"


-- console front end of the release packages (scripts/package.bat): Output/Tools/MDMLPackager.exe
project "MDMLPackager"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++17"
	staticruntime "off"

	targetdir ("bin/" .. outputdir)

	DeployTo("Tools")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	defines { "_CRT_SECURE_NO_WARNINGS", "WIN32_LEAN_AND_MEAN", "NOMINMAX" }

	files { "../Packager/**.cpp" }

	includedirs
	{
		"src",
		"%{IncludeDir.nlohmann_json}"
	}

	links { "ModManagerCore" }

	filter "system:windows"
		systemversion "latest"

	filter "configurations:Release"
		runtime "Release"
		optimize "on"
		symbols "on"
