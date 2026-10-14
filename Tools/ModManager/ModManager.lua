-- Standalone desktop app (SDG: GLFW + OpenGL + ImGui). Independent of the loader at runtime; shares Dependencies/ with it.
project "ModManager"
	kind "WindowedApp"
	language "C++"
	cppdialect "C++17"
	staticruntime "off"

	targetname "MDML Mod Manager"
	targetdir ("bin/" .. outputdir)
	DeployTo("ModManager")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")
	debugdir "%{OutputDir}/ModManager"

	defines
	{
		"_CRT_SECURE_NO_WARNINGS",
		"WIN32_LEAN_AND_MEAN",
		"NOMINMAX",
		"GLFW_INCLUDE_NONE",
		"LOADER_API=", -- see Dependencies/SDG/premake5.lua
		"IMGUI_DEFINE_MATH_OPERATORS",
		"SDG_DIST" -- WinMain entry point (no console window)
	}

	files { "src/**.h", "src/**.cpp" }

	includedirs
	{
		"src",
		"%{IncludeDir.ModManagerCore}",
		"%{IncludeDir.SDG}",
		"%{IncludeDir.ImGuiSrc}",
		"%{IncludeDir.ImGuiBackends}",
		"%{IncludeDir.ImGuiConfig}",
		"%{IncludeDir.GLFW}",
		"%{IncludeDir.glm}",
		"%{IncludeDir.nlohmann_json}"
	}

	links
	{
		"ModManagerCore",
		"SDG",
		"ImGui",
		"GLFW",
		"Glad",
		"%{Library.OpenGL}"
	}

	postbuildcommands
	{
		"{COPYDIR} \"%{prj.location}/Resources\" \"%{OutputDir}/ModManager/Resources\""
	}

	filter "system:windows"
		systemversion "latest"

	filter "configurations:Release"
		runtime "Release"
		optimize "on"
		symbols "on"
