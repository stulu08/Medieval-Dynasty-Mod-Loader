project "ModLoader"
	kind "SharedLib"
	language "C++"
	cppdialect "C++20"
	staticruntime "off"
	targetname ("MDML");
	targetdir ("bin/" .. outputdir)
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")
	
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
	-- Third-party code lives in Dependencies/ and is linked as static libraries (MinHook, ImGuiLoader); spdlog, mINI and
	-- glm are header-only (include dirs only).
	-- The generated SDK (Loader/SDK/Generated, IncludeDir.SDK) is header-only: the few engine classes MDML itself uses
	-- (AActor, APlayerController, UGameplayStatics, UKismetSystemLibrary) come from "Engine.hpp" in the .cpp files that
	-- need them (Wave 4 step B; before, three old SDK .cpp files were compiled in here).
	includedirs
	{
		"%{IncludeDir.spdlog}",
		"%{IncludeDir.MinHook}",
		"%{IncludeDir.MDML}",
		"%{IncludeDir.ModLoader}",
		"%{IncludeDir.Engine}",
		"%{IncludeDir.EngineUE4}",
		"%{IncludeDir.mINI}", -- only for Platform/IniFile.cpp
		"%{IncludeDir.glm}",
		"%{IncludeDir.ImGui}",
		"%{IncludeDir.SDK}",
	}
	DeployTo("ModLoader")
	postbuildcommands {
		"{COPYDIR} \"%{ProjectDir.Loader}/Config\" \"%{OutputDir}/ModLoader/Config\"",
	}
	-- No "SDK" link any more (Wave 2.3): the hand-written engine core (src/Engine) is compiled in here and exported;
	-- SDK.lib's generated code imports it from MDML.dll, so linking SDK.lib here would be a cycle.
	links
	{
		"MinHook",
		"ImGuiLoader",
	}
	-- ImGui (and the dx11/win32 backends) are exported from MDML.dll for the mods, but MDML itself only references part of
	-- them: pull in the whole static library so every exported symbol is present.
	libdirs { "%{wks.location}/Dependencies/ImGui/bin/" .. outputdir }
	linkoptions { "/WHOLEARCHIVE:ImGuiLoader.lib" }
	filter "files:src/Engine/**.cpp"
		enablepch "Off"
	filter "system:windows"
		systemversion "latest"

	filter "configurations:Release"
		defines "ST_RELEASE"
		runtime "Release"
		symbols "on"
		optimize "speed"
