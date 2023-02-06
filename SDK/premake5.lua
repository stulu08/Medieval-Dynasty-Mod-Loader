project "SDK"
	kind "StaticLib"
	language "C++"
	cppdialect "C++17"
	staticruntime "off"
	targetname ("SDK");
	targetdir ("%{wks.location}/bin/" .. outputdir .. "")
	objdir ("bin-int/" .. outputdir .. "")
	defines
	{
		"SDK_EXPORT",
		"NDEBUG",
		"_WINDOWS",
		"_USRDLL",
		"_CRT_SECURE_NO_WARNINGS"
	}
	files
	{
		"src/**.h",
		"src/**.cpp",
		"src/**.hpp",
	}

	includedirs
	{
		"%{IncludeDir.ModLoader}",
		"%{IncludeDir.glm}",
		"%{IncludeDir.UE4}",
		"%{IncludeDir.SDK}",
		"%{IncludeDir.spdlog}",
		"%{IncludeDir.MedievalDynasty}",
	}
	filter "system:windows"
		systemversion "latest"

	filter "configurations:Release"
		defines "ST_RELEASE"
		runtime "Release"
		symbols "on"
		optimize "speed"
