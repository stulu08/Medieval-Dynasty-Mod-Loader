-- Include directories and project directories shared by all premake projects.
-- Every third-party library lives in Dependencies/ unmodified (exceptions are listed in docs/reports/repo-restructure.md).
-- Loaded from the root premake5.lua after the workspace is declared (uses %{wks.location}).

Dependencies = "%{wks.location}/Dependencies"

IncludeDir = {}
IncludeDir["spdlog"] = "%{Dependencies}/spdlog"
IncludeDir["MinHook"] = "%{Dependencies}/MinHook"
IncludeDir["glm"] = "%{Dependencies}/glm"
IncludeDir["INI"] = "%{Dependencies}/INI"
IncludeDir["ImGui"] = "%{Dependencies}/ImGui"
-- TextEditor.h; compiled into MDML.dll and exported (LOADER_API), BaseMod uses it through MDML.dll
IncludeDir["ImGuiColorTextEdit"] = "%{Dependencies}/ImGuiColorTextEdit"
-- JSON.h (single-header nlohmann/json), used by the Mod Manager
IncludeDir["nlohmann_json"] = "%{Dependencies}/nlohmann-json"
IncludeDir["Dumper7"] = "%{Dependencies}/Dumper-7/Dumper"

IncludeDir["ModLoader"] = "%{wks.location}/Loader/ModLoader/src"
-- hand-written engine core, compiled into MDML.dll and exported (Wave 2.3). Same relative paths as the old SDK/src
-- layout: Engine = old SDK/src ("UE4.h", "NameValidator.h"), EngineUE4 = old SDK/src/UE4 ("CoreUObject/...", "Math/...").
IncludeDir["Engine"] = "%{wks.location}/Loader/ModLoader/src/Engine"
IncludeDir["EngineUE4"] = "%{wks.location}/Loader/ModLoader/src/Engine/UE4"
-- generated SDK (static SDK.lib)
IncludeDir["UE4"] = "%{wks.location}/Loader/SDK/src/UE4"
IncludeDir["MedievalDynasty"] = "%{wks.location}/Loader/SDK/src/Medieval_Dynasty"
IncludeDir["SDK"] = "%{wks.location}/Loader/SDK/src"
IncludeDir["BaseMod"] = "%{wks.location}/Mods/BaseMod/src"

ProjectDir = {}
ProjectDir["BaseMod"] = "%{wks.location}/Mods/BaseMod"
ProjectDir["DevTools"] = "%{wks.location}/Mods/DevTools"
ProjectDir["TimeWeatherChanger"] = "%{wks.location}/Mods/Examples/TimeWeatherChanger"
ProjectDir["PresetMod"] = "%{wks.location}/Mods/Examples/PresetMod"
ProjectDir["Injector"] = "%{wks.location}/Loader/Proxy"
ProjectDir["Loader"] = "%{wks.location}/Loader/ModLoader"
