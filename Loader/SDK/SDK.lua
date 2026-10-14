-- Generated SDK only (+ the UE4/SDK.h / Medieval_Dynasty/SDK.h aggregators and the hybrids GamePlayStatics,
-- DataTable, StringTable). The hand-written engine core moved to Loader/ModLoader/src/Engine and is compiled into MDML.dll
-- (Wave 2.3): every object in SDK.lib imports UObject/FName/UClass/... from MDML.dll (MDML_ENGINE_API = dllimport
-- here), so whoever links SDK.lib must also link MDML.lib ("ModLoader"). MDML itself must NOT link SDK.
project "SDK"
	kind "StaticLib"
	language "C++"
	cppdialect "C++20"
	staticruntime "off"
	targetname ("SDK");
	targetdir ("bin/" .. outputdir)
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")
	defines
	{
		"SDK_EXPORT",
		"NDEBUG",
		"_WINDOWS",
		"_USRDLL",
		"_CRT_SECURE_NO_WARNINGS"
	}
	-- LTCG made SDK.lib ~2.7 GB (every generated .cpp includes the whole SDK); off until the new generator (plan 2.4)
	linktimeoptimization "Off"
	files
	{
		"src/**.h",
		"src/**.cpp",
		"src/**.hpp",
	}

	includedirs
	{
		"%{IncludeDir.MDML}",
		"%{IncludeDir.Engine}",
		"%{IncludeDir.EngineUE4}",
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
