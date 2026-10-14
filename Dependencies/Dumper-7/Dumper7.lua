-- Vendored Dumper-7 analysis/generator code (see VENDORED.txt) as a static library, linked by Mods/DevTools (DevTools.Generator).
-- Dumper-7 needs C++20/23 (concepts, std::format, ranges), which is why it is kept out of the C++17/20 mod and core code.
project "Dumper7"
	kind "StaticLib"
	language "C++"
	cppdialect "C++latest"
	staticruntime "off"

	targetdir ("bin/" .. outputdir)
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	defines
	{
		"NDEBUG",
		"_CRT_SECURE_NO_WARNINGS",
	}
	files
	{
		"Dumper/Engine/**.h",
		"Dumper/Engine/**.cpp",
		"Dumper/Platform/**.h",
		"Dumper/Platform/**.cpp",
		"Dumper/Generator/**.h",
		"Dumper/Generator/**.cpp",
		"Dumper/Settings.h",
		"Dumper/Settings.cpp",
		"Dumper/TmpUtils.h",
		"Dumper/Utils/**.h",
		"Dumper/Utils/**.hpp",
	}
	-- same include roots as upstream Dumper.vcxproj
	includedirs
	{
		"Dumper",
		"Dumper/Engine/Public",
		"Dumper/Generator/Public",
		"Dumper/Utils",
		"Dumper/Platform/Public",
	}
	-- Upstream Dumper-7 builds with these narrowing/sign warnings (int32 offsets from uintptr_t etc.). We do not patch
	-- vendored code (VENDORED.txt "Modifications: none"), so they are silenced here and in DevTools.Generator (which
	-- includes the same headers): C4244/C4267 narrowing, C4018 signed/unsigned, C4305 int->bool.
	disablewarnings { "4244", "4267", "4018", "4305" }

	filter "system:windows"
		systemversion "latest"
		buildoptions { "/utf-8", "/bigobj" }

	filter "configurations:Release"
		runtime "Release"
		symbols "on"
		optimize "speed"
