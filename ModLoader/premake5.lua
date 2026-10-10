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
	removefiles { "vendor/MinHook/src/**" } -- MinHook is its own project
	-- The few GENERATED SDK functions MDML itself calls (UGameplayStatics::GetGameInstance/GetCurrentLevelName/
	-- BeginDeferredActorSpawnFromClass/ExecuteConsoleCommand -> UKismetSystemLibrary, AActor::K2_GetActorLocation/...)
	-- are compiled into MDML.dll from the SDK sources instead of linking SDK.lib (which now depends on MDML.dll).
	-- Not exported; mods get their own copy from SDK.lib, exactly as before. Goes away with the new generator (plan 2.4).
	files
	{
		"../SDK/src/UE4/Engine/Actor.cpp",
		"../SDK/src/UE4/Engine/GamePlayStatics.cpp",
		"../SDK/src/UE4/Engine/KismetSystemLibrary.cpp",
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
		"%{IncludeDir.Engine}",
		"%{IncludeDir.EngineUE4}",
		"%{IncludeDir.INI}",
		"%{IncludeDir.glm}",
		"%{IncludeDir.ImGui}",
		
		"%{IncludeDir.UE4}",
		"%{IncludeDir.SDK}",
		"%{IncludeDir.MedievalDynasty}",
		
	}
	postbuildcommands {
		"{MKDIR} \"%{wks.location}/bin/" .. outputdir .. "/Config\"",
		"{COPYDIR} \"%{wks.location}/Config\" \"%{wks.location}/bin/" .. outputdir .. "/Config\"",
	}
	-- No "SDK" link any more (Wave 2.3): the hand-written engine core (src/Engine) is compiled in here and exported;
	-- SDK.lib's generated code imports it from MDML.dll, so linking SDK.lib here would be a cycle.
	links
	{
		"MinHook",
	}
	filter "files:vendor/**.cpp or files:src/Engine/**.cpp or files:../SDK/src/**.cpp"
		flags {"NoPCH"}
	filter "system:windows"
		systemversion "latest"

	filter "configurations:Release"
		defines "ST_RELEASE"
		runtime "Release"
		symbols "on"
		optimize "speed"
