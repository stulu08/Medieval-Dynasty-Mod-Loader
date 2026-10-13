project "ModManager"
	kind "WindowedApp"
	language "C++"
	cppdialect "C++17"
	staticruntime "off"
	targetname ("MDML Mod Manager");
	targetdir ("%{wks.location}/bin/" .. outputdir .. "/UI")
	objdir ("bin-int/" .. outputdir .. "")
	
	defines
	{
		"NDEBUG",
		"_WINDOWS",
		"_USRDLL",
		"_CRT_SECURE_NO_WARNINGS"
	}
	files
	{
		"**.h",
		"**.cpp",
		"**.hpp",

		"%{IncludeDir.nlohmann_json}/JSON.h",
		"%{IncludeDir.glm}/**.hpp",
		"%{IncludeDir.glm}/**.inl",
		"%{IncludeDir.ImGui}/**.h",
		"%{IncludeDir.ImGui}/**.cpp",
	}

	includedirs
	{
		"src",
		"%{IncludeDir.nlohmann_json}",
		"%{IncludeDir.INI}",
		"%{IncludeDir.glm}",
		"%{IncludeDir.ImGui}"
	}

	filter "files:vendor/**.cpp"
		enablepch "Off"

	filter "system:windows"
		systemversion "latest"

	filter "configurations:Release"
		defines "ST_RELEASE"
		runtime "Release"
		symbols "on"
		optimize "speed"
