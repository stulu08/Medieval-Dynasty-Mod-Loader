-- Dear ImGui (see VENDORED.txt) as two static libraries sharing the unmodified sources in imgui/.
-- They differ only in the LOADER_API config header that imconfig.h includes (config/<variant>/Core.h):
--   ImGui        standalone apps (Tools/ModManager via SDG): no import/export, GLFW + OpenGL3 backends
--   ImGuiLoader  linked into MDML.dll as a whole archive (ModLoader.lua): dllexport, so mods import ImGui and the
--                dx11/win32 backends from MDML.dll
local function imguiCore(configDir)
	files
	{
		"imgui/imgui.cpp",
		"imgui/imgui_draw.cpp",
		"imgui/imgui_tables.cpp",
		"imgui/imgui_widgets.cpp",
		"imgui/imgui_demo.cpp",
		"imgui/imgui_stdlib.cpp",
		"imgui/*.h",
	}
	includedirs { "imgui", configDir }
end

project "ImGui"
	kind "StaticLib"
	language "C++"
	cppdialect "C++17"
	staticruntime "off"

	targetdir ("bin/" .. outputdir)
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	imguiCore("config/standalone")
	files
	{
		"backends/imgui_impl_glfw_compat.cpp",
		"backends/imgui_impl_opengl3.cpp",
		"backends/*.h",
	}
	includedirs { "backends", "%{IncludeDir.GLFW}" }

	defines { "IMGUI_IMPL_OPENGL_LOADER_GLAD", "_CRT_SECURE_NO_WARNINGS" }

	filter "system:windows"
		systemversion "latest"
	filter "configurations:Release"
		runtime "Release"
		optimize "on"
		symbols "on"

project "ImGuiLoader"
	kind "StaticLib"
	language "C++"
	cppdialect "C++17"
	staticruntime "off"

	targetdir ("bin/" .. outputdir)
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	imguiCore("config/loader")
	-- the dx11/win32 backends sit next to the core files in imgui/ (their headers are already in "imgui/*.h")
	files
	{
		"imgui/imgui_impl_dx11.cpp",
		"imgui/imgui_impl_win32.cpp",
	}

	defines { "_CRT_SECURE_NO_WARNINGS" }

	filter "system:windows"
		systemversion "latest"
	filter "configurations:Release"
		runtime "Release"
		optimize "on"
		symbols "on"
