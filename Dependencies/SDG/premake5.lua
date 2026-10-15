project "SDG"
	kind "StaticLib"
	language "C++"
	cppdialect "C++17"
	staticruntime "off"

	targetdir ("bin/" .. outputdir)
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")
	
	
	pchheader "st_pch.h"
	pchsource "src/st_pch.cpp"

	files
	{
		"src/**.h",
		"src/**.cpp"
	}

	defines
	{
		"_CRT_SECURE_NO_WARNINGS",
		-- imconfig.h (MDML block) includes "Core.h", which here resolves to SDG's own Core.h: no import/export in a standalone app
		"LOADER_API=",
		-- imgui_internal.h of 1.92 requires this before the first imgui.h include (SDG's headers include imgui.h first)
		"IMGUI_DEFINE_MATH_OPERATORS",
	}
	defines
	{
		--"SDG_DYNAMIC_LINK",
		--"SDG_DLL_BUILD"
	}

	includedirs
	{
		"src",
		"src/Stulu/",
		"%{IncludeDir.GLFW}",
		"%{IncludeDir.Glad}",
		"%{IncludeDir.ImGuiSrc}",
		"%{IncludeDir.ImGuiBackends}",
		"%{IncludeDir.ImGuiConfig}",
		"%{IncludeDir.glm}",
		"%{IncludeDir.stb_image}"
		
	}

	links 
	{ 
		"GLFW",
		"Glad",
		"ImGui",
		"%{Library.OpenGL}"
	}
	
	filter "system:windows"
		systemversion "latest"
		defines
		{
			"GLFW_INCLUDE_NONE"
		}
		

	filter "configurations:Debug"
		defines "SDG_DEBUG"
		runtime "Debug"
		optimize "off"
		symbols "on"

	filter "configurations:Release"
		defines "SDG_RELEASE"
		runtime "Release"
		optimize "on"
		symbols "on"

	filter "configurations:Dist"
		defines "SDG_DIST"
		runtime "Release"
		optimize "on"
		symbols "off"
