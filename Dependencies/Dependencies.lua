-- Include directories and project directories shared by all premake projects.
-- Every third-party library lives in Dependencies/ unmodified (exceptions are listed in docs/reports/repo-restructure.md).
-- Libraries that need compiling are static-library projects in the solution group "Dependencies" (root premake5.lua);
-- the rest (spdlog, glm, mINI, INI, nlohmann-json) is header-only and only needs its include dir.
-- Loaded from the root premake5.lua after the workspace is declared (uses %{wks.location}).

Dependencies = "%{wks.location}/Dependencies"

-- Build layout: every project builds into its own folder (<project>/bin/<cfg>, <project>/bin-int/<cfg>/<project>); both are
-- git-ignored. Runnable results are collected by a post-build step in one sorted folder at the repo root:
--   Output/ModLoader/   MDML.dll, xinput1_3.dll (proxy), Config/, Mods/<Mod>/   = the installable loader package
--   Output/ModManager/  MDML Mod Manager.exe, Resources/
--   Output/Tests/       ModManagerTests.exe, SDKCompileTest.dll
OutputDir = "%{wks.location}/Output"

-- Post-build: copies the project's target (+ pdb) to Output/<subdir>. Call inside a project, after targetdir.
function DeployTo(subdir)
	postbuildcommands
	{
		"{MKDIR} \"%{OutputDir}/" .. subdir .. "\"",
		"{COPYFILE} \"%{cfg.buildtarget.abspath}\" \"%{OutputDir}/" .. subdir .. "\"",
		"{COPYFILE} \"%{cfg.buildtarget.directory}/%{cfg.buildtarget.basename}.pdb\" \"%{OutputDir}/" .. subdir .. "\"",
	}
end

IncludeDir = {}
IncludeDir["spdlog"] = "%{Dependencies}/spdlog"
IncludeDir["MinHook"] = "%{Dependencies}/MinHook"
IncludeDir["glm"] = "%{Dependencies}/glm"
-- old feather INI parser: only the Mod Manager still uses it (not MDML.dll since Wave 3E). Loader code uses mINI through mdml::platform::IniFile (Wave 3A).
IncludeDir["INI"] = "%{Dependencies}/INI"
-- mINI (header-only, "mini/ini.h"); only included by Loader/ModLoader/src/Platform/IniFile.cpp
IncludeDir["mINI"] = "%{Dependencies}/mINI"
IncludeDir["ImGui"] = "%{Dependencies}/ImGui"
-- nlohmann/json.hpp (single-header nlohmann/json 3.12.0), used by the Mod Manager
IncludeDir["nlohmann_json"] = "%{Dependencies}/nlohmann-json"
IncludeDir["Dumper7"] = "%{Dependencies}/Dumper-7/Dumper"

-- public mod API (Wave 4): include/MDML/*.h, included as "MDML/<Header>.h". Mods get this + the engine core dirs,
-- never the loader's src (IncludeDir.ModLoader is for MDML.dll itself only).
IncludeDir["MDML"] = "%{wks.location}/Loader/ModLoader/include"
IncludeDir["ModLoader"] = "%{wks.location}/Loader/ModLoader/src"
-- hand-written engine core, compiled into MDML.dll and exported (Wave 2.3). Same relative paths as the old SDK/src
-- layout: Engine = old SDK/src ("UE4.h", "NameValidator.h"), EngineUE4 = old SDK/src/UE4 ("CoreUObject/...", "Math/...").
IncludeDir["Engine"] = "%{wks.location}/Loader/ModLoader/src/Engine"
IncludeDir["EngineUE4"] = "%{wks.location}/Loader/ModLoader/src/Engine/UE4"
-- generated SDK (Wave 4 step B): header-only, one "<Package>.hpp" per game/engine package, made by the DevTools SDK
-- generator (docs/SDK_GENERATOR.md). Never edit by hand; regenerate and copy the whole MDML-SDK folder.
IncludeDir["SDK"] = "%{wks.location}/Loader/SDK/Generated"

ProjectDir = {}
ProjectDir["DevTools"] = "%{wks.location}/Mods/DevTools"
ProjectDir["TimeWeatherChanger"] = "%{wks.location}/Mods/Examples/TimeWeatherChanger"
ProjectDir["PresetMod"] = "%{wks.location}/Mods/Examples/PresetMod"
ProjectDir["OverwriteTest"] = "%{wks.location}/Tests/OverwriteTest"
ProjectDir["Injector"] = "%{wks.location}/Loader/Proxy"
ProjectDir["Loader"] = "%{wks.location}/Loader/ModLoader"

-- GUI libraries of Tools/ModManager (SDG = own Stulu Desktop GUI on GLFW + OpenGL + ImGui). All vendored, not submodules.
-- ImGui is built twice from the same sources (Dependencies/ImGui/ImGui.lua): "ImGui" for standalone apps (GLFW/OpenGL3
-- backends in backends/) and "ImGuiLoader" for MDML.dll. imconfig.h includes "Core.h" for LOADER_API; config/standalone
-- provides an empty one for the standalone app.
IncludeDir["ImGuiSrc"] = "%{wks.location}/Dependencies/ImGui/imgui"
IncludeDir["ImGuiBackends"] = "%{wks.location}/Dependencies/ImGui/backends"
IncludeDir["ImGuiConfig"] = "%{wks.location}/Dependencies/ImGui/config/standalone"IncludeDir["GLFW"] = "%{wks.location}/Dependencies/GLFW/include"
IncludeDir["Glad"] = "%{wks.location}/Dependencies/Glad/include"
IncludeDir["stb_image"] = "%{wks.location}/Dependencies/stb_image"
IncludeDir["SDG"] = "%{wks.location}/Dependencies/SDG/src"
IncludeDir["nlohmann_json"] = "%{wks.location}/Dependencies/nlohmann-json"
IncludeDir["ModManagerCore"] = "%{wks.location}/Tools/ModManager/Core/src"
ProjectDir["ModManager"] = "%{wks.location}/Tools/ModManager"

Library = {}
Library["OpenGL"] = "opengl32.lib"
