// Offline tests of the ModManager core. Exit code 0 = all passed.
#include <ModManager/Ini.h>
#include <ModManager/Installer.h>
#include <ModManager/LoadOrder.h>
#include <ModManager/ModScanner.h>
#include <ModManager/Archive.h>

#include <fstream>
#include <iostream>

static int g_failed = 0;
#define CHECK(c) do { if (!(c)) { std::cout << "FAIL " << __LINE__ << ": " #c "\n"; g_failed++; } } while (0)

using namespace mm;

static void Write(const fs::path& p, const std::string& s) {
	fs::create_directories(p.parent_path());
	std::ofstream(p, std::ios::binary) << s;
}

static void TestIni() {
	IniDocument d;
	d.LoadFromString("; top\r\n[Mod]\r\n;the dll\r\nDLLPath=A.dll ; note\r\n\r\n[Overwrites]\r\nEnable=True\r\n");
	CHECK(d.Get("Mod", "DLLPath") == "A.dll ; note"); // ';' after a value belongs to the value (MDML rule)
	CHECK(d.Get("mod", "dllpath") == "A.dll ; note"); // case-insensitive fallback
	CHECK(d.GetBool("Overwrites", "Enable", false));
	CHECK(d.Items("Mod").at(0).comment == "the dll");
	d.Set("Overwrites", "Folder", "Content");
	d.Set("New", "x", "1");
	std::string s = d.ToString();
	CHECK(s.find("; top\r\n[Mod]") == 0);          // untouched header
	CHECK(s.find("Enable=True\r\nFolder=Content") != std::string::npos);
	CHECK(s.find("[New]\r\nx=1") != std::string::npos);
	IniDocument d2;
	d2.LoadFromString(s);
	CHECK(d2.Get("Overwrites", "Folder") == "Content");
}

static void TestLoadOrder() {
	fs::path p = MakeTempDir("lo") / "LoadOrder.ini";
	Write(p, "; header\nBaseMod = 1\nPresetMod = 0 ; off\n; tail comment\n");
	LoadOrder lo;
	CHECK(lo.Load(p));
	CHECK(lo.Entries().size() == 2);
	CHECK(!lo.Entries()[1].enabled && lo.Entries()[1].comment == "off");
	CHECK(lo.Merge({ "BaseMod", "Zeta", "alpha" }) == 2);
	CHECK(lo.Entries()[2].name == "alpha"); // appended alphabetically, case-insensitive
	lo.Move(3, 0);
	CHECK(lo.Entries()[0].name == "Zeta");
	CHECK(lo.Save(p));
	std::string txt;
	ReadTextFile(p, txt);
	CHECK(txt.find("; header") == 0);
	CHECK(txt.find("PresetMod = 0 ; off") != std::string::npos);
	CHECK(txt.find("; tail comment") != std::string::npos);
	LoadOrder lo2;
	lo2.Load(p);
	CHECK(lo2.Entries()[0].name == "Zeta");
}

static void TestScanAndInstall() {
	fs::path root = MakeTempDir("scan");
	fs::path mods = root / "Mods";
	Write(mods / "Alpha" / "mod.ini", "[Mod]\nName=Alpha Mod\nVersion=1.2\nAuthor=Me\nDescription=Test\n\n[Core]\nLogger=File\n");
	Write(mods / "Alpha" / "Alpha.dll", "x");
	Write(mods / "Beta" / "mod.ini", "[Mod]\n[Core]\nDll=Other.dll\n[Blueprint]\nActor=A.uasset\n[Overwrite]\nFolder=Content\n");
	Write(mods / "Skin" / "mod.ini", "[Overwrite]\nFolder=Content\n");
	Write(mods / "OnlyMeta" / "mod.ini", "[Mod]\nName=No components\n");
	Write(mods / "Old" / "mod.ini", "[Mod]\nDLLPath=Old.dll\n[LogicMod]\nActorFile=A.uasset\n[Overwrites]\nFolder=Content\n");
	Write(mods / "NoIni" / "NoIni.dll", "x");
	Write(mods / "Loose.dll", "x");
	Write(mods / "Empty" / "readme.txt", "no mod");
	auto found = ScanMods(mods);
	CHECK(found.size() == 3); // OnlyMeta/Old (no component section), NoIni, Loose.dll, Empty are not mods
	CHECK(found[0].name == "Alpha" && found[0].core && !found[0].blueprint && !found[0].overwrite);
	CHECK(found[0].dllPath == "Alpha.dll" && found[0].version == "1.2" && found[0].author == "Me" && found[0].description == "Test");
	CHECK(found[1].name == "Beta" && found[1].core && found[1].blueprint && found[1].overwrite && found[1].dllPath == "Other.dll");
	CHECK(DescribeKinds(found[1]) == "Core, Blueprint, Overwrite");
	CHECK(found[2].name == "Skin" && found[2].overwrite && !found[2].core && found[2].dllPath.empty());

	// archive of a mod -> candidates -> install
	fs::path src = root / "src" / "CoolMod";
	Write(src / "mod.ini", "[Mod]\nName=CoolMod\n[Blueprint]\nActor=A.uasset\n");
	Write(src / "Content" / "a.uasset", "x");
	fs::path zip = root / "CoolMod.zip";
	std::string err;
	CHECK(CreateZip(root / "src", zip, err));
	{
		// entries must not be stored as "./Content/..." (what "tar -C dir ." does)
		std::string cmd = "tar -tf \"" + zip.string() + "\"";
		FILE* pipe = _popen(cmd.c_str(), "r");
		CHECK(pipe != nullptr);
		char line[512];
		int entries = 0;
		while (pipe && fgets(line, sizeof(line), pipe)) {
			entries++;
			CHECK(line[0] != '.');
		}
		if (pipe) _pclose(pipe);
		CHECK(entries > 0);
	}
	std::vector<ModCandidate> cands;
	fs::path tmp;
	CHECK(PrepareModSource(zip, cands, tmp, err));
	CHECK(cands.size() == 1 && cands[0].name == "CoolMod");

	GameInstall g;
	g.root = root / "game";
	fs::create_directories(g.Binaries());
	CHECK(g.Valid());
	CHECK(InstallMod(cands[0], g, root / "backups", err));
	CHECK(fs::exists(g.ModsDir() / "CoolMod" / "Content" / "a.uasset"));
	// reinstall keeps working and backs the old copy up
	CHECK(InstallMod(cands[0], g, root / "backups", err));
	CHECK(fs::exists(root / "backups"));
	ModCandidate bad{ "..\\evil", src };
	CHECK(!InstallMod(bad, g, root / "backups", err));
}

static void TestLoaderPackage() {
	fs::path root = MakeTempDir("pkg");
	Write(root / "Release 1" / "MDML.dll", "x");
	Write(root / "Release 1" / "xinput1_3.dll", "x");
	Write(root / "Release 1" / "Config" / "ModLoaderInfo.ini", "[General]\n");
	Write(root / "Release 1" / "BaseMod" / "mod.ini", "[Mod]\n[Core]\nDll=BaseMod.dll\n");
	Write(root / "Release 1" / "BaseMod" / "BaseMod.pdb", "x");
	LoaderPackage pkg;
	CHECK(DetectLoaderPackage(root, pkg));
	CHECK(pkg.hasProxy && pkg.mods.size() == 1 && pkg.mods[0] == "BaseMod");

	GameInstall g;
	g.root = root / "game";
	fs::create_directories(g.Binaries());
	Write(g.ConfigDir() / "LoadOrder.ini", "BaseMod = 0\n");
	Write(g.ConfigDir() / "ModLoaderInfo.ini", "[General]\nLogDir=Mine\n");
	auto rep = InstallLoader(pkg, g, { "BaseMod" }, root / "backups");
	CHECK(rep.ok);
	CHECK(g.LoaderInstalled());
	CHECK(fs::exists(g.ModsDir() / "BaseMod" / "mod.ini"));
	CHECK(!fs::exists(g.ModsDir() / "BaseMod" / "BaseMod.pdb")); // junk is not installed
	std::string txt;
	ReadTextFile(g.ConfigDir() / "ModLoaderInfo.ini", txt);
	CHECK(txt.find("Mine") != std::string::npos);                // user config survives
}

static void TestReleasePackages() {
	fs::path root = fs::temp_directory_path() / "mm_release_test";
	fs::remove_all(root);
	// fake repo: Output/ModLoader (build) + the sources the dev kit collects
	Write(root / "premake5.lua", "");
	Write(root / "README.md", "r");
	Write(root / "LICENSE", "l");
	Write(root / "docs" / "guides" / "Modding.md", "m");
	Write(root / "docs" / "guides" / "DevKit.md", "k");
	Write(root / "Loader" / "ModLoader" / "include" / "MDML" / "Mod.h", "h");
	Write(root / "Loader" / "ModLoader" / "src" / "Engine" / "UE4.h", "h");
	Write(root / "Loader" / "ModLoader" / "src" / "Engine" / "EngineInit.cpp", "cpp");
	Write(root / "Loader" / "ModLoader" / "bin" / "Release-windows-x86_64" / "MDML.lib", "lib");
	Write(root / "Loader" / "SDK" / "Generated" / "Engine.hpp", "sdk");
	Write(root / "Dependencies" / "spdlog" / "spdlog" / "spdlog.h", "h");
	Write(root / "Dependencies" / "spdlog" / "spdlog" / "src.cpp", "cpp");
	Write(root / "Dependencies" / "glm" / "glm" / "glm.hpp", "h");
	Write(root / "Dependencies" / "ImGui" / "imgui" / "imgui.h", "h");
	Write(root / "Dependencies" / "ImGui" / "imgui" / "imgui.cpp", "cpp");
	Write(root / "Mods" / "Examples" / "Examples.lua", "x");
	Write(root / "Mods" / "Examples" / "PresetMod" / "Mod.cpp", "x");
	Write(root / "Mods" / "Examples" / "PresetMod" / "PresetMod.vcxproj", "x");
	Write(root / "Mods" / "Examples" / "PresetMod" / "bin" / "junk.cpp", "x");
	Write(root / "Output" / "ModManager" / "MDML Mod Manager.exe", "exe");
	Write(root / "Output" / "ModManager" / "MDML Mod Manager.pdb", "pdb");
	Write(root / "Output" / "ModManager" / "MDML Mod Manager-config.ini", "cfg");
	Write(root / "Output" / "ModManager" / "Resources" / "f.ttf", "ttf");
	fs::path b = root / "Output" / "ModLoader";
	Write(b / "MDML.dll", "dll");
	Write(b / "MDML.pdb", "pdb");
	Write(b / "xinput1_3.dll", "dll");
	Write(b / "Config" / "ModLoaderInfo.ini", "[General]\n");
	Write(b / "Config" / "LoadOrder.ini", "state");
	Write(b / "Mods" / "DevTools" / "mod.ini", "[Mod]\n");
	Write(b / "Mods" / "DevTools" / "DevTools.dll", "dll");
	Write(b / "Mods" / "DevTools" / "DevTools.pdb", "pdb");
	Write(b / "Mods" / "BaseMod" / "mod.ini", "[Mod]\n[Core]\n"); // stale folder in Output: must not ship
	LoaderPackage pkg;
	CHECK(DetectLoaderPackage(b, pkg));
	fs::path repo;
	CHECK(FindRepoRoot(pkg, repo));
	CHECK(ReleaseZipName(pkg, ReleaseKind::EndUser) == "MDML-dev.zip" || !pkg.version.empty());
	CHECK(ReleaseZipName(pkg, ReleaseKind::DevKit).rfind("MDML-DevKit-", 0) == 0);

	std::string err;
	fs::path user = root / "stage-user", dev = root / "stage-dev";
	CHECK(StageRelease(pkg, ReleaseKind::EndUser, user, err));
	CHECK(fs::exists(user / "MDML.dll") && fs::exists(user / "xinput1_3.dll"));
	CHECK(fs::exists(user / "Config" / "ModLoaderInfo.ini") && !fs::exists(user / "Config" / "LoadOrder.ini"));
	CHECK(fs::exists(user / "ModManager" / "MDML Mod Manager.exe") && fs::exists(user / "ModManager" / "Resources" / "f.ttf"));
	CHECK(!fs::exists(user / "ModManager" / "MDML Mod Manager.pdb") && !fs::exists(user / "ModManager" / "MDML Mod Manager-config.ini"));
	CHECK(fs::exists(user / "README.md") && fs::exists(user / "LICENSE"));
	CHECK(!fs::exists(user / "MDML.pdb") && !fs::exists(user / "Mods") && !fs::exists(user / "DevKit"));

	CHECK(StageRelease(pkg, ReleaseKind::DevKit, dev, err));
	CHECK(fs::exists(dev / "MDML.dll") && fs::exists(dev / "MDML.pdb") && fs::exists(dev / "README.md"));
	CHECK(fs::exists(dev / "Mods" / "DevTools" / "mod.ini") && fs::exists(dev / "Mods" / "DevTools" / "DevTools.pdb"));
	CHECK(!fs::exists(dev / "Mods" / "BaseMod"));
	CHECK(fs::exists(dev / "DevKit" / "README.md") && fs::exists(dev / "DevKit" / "docs" / "Modding.md"));
	CHECK(fs::exists(dev / "DevKit" / "include" / "MDML" / "Mod.h") && fs::exists(dev / "DevKit" / "include" / "Engine" / "UE4.h"));
	CHECK(!fs::exists(dev / "DevKit" / "include" / "Engine" / "EngineInit.cpp"));
	CHECK(fs::exists(dev / "DevKit" / "include" / "SDK" / "Engine.hpp") && fs::exists(dev / "DevKit" / "lib" / "MDML.lib"));
	CHECK(fs::exists(dev / "DevKit" / "include" / "ThirdParty" / "spdlog" / "spdlog" / "spdlog.h"));
	CHECK(!fs::exists(dev / "DevKit" / "include" / "ThirdParty" / "ImGui" / "imgui" / "imgui.cpp"));
	CHECK(fs::exists(dev / "DevKit" / "examples" / "PresetMod" / "Mod.cpp") && fs::exists(dev / "DevKit" / "examples" / "Examples.lua"));
	CHECK(!fs::exists(dev / "DevKit" / "examples" / "PresetMod" / "PresetMod.vcxproj") && !fs::exists(dev / "DevKit" / "examples" / "PresetMod" / "bin"));

	// a package outside the repo (re-zipped download): loader + config only, no dev kit
	fs::path stray = root / "stray";
	Write(stray / "MDML.dll", "dll");
	LoaderPackage sp;
	CHECK(DetectLoaderPackage(stray, sp));
	CHECK(!StageRelease(sp, ReleaseKind::DevKit, root / "stage-bad", err));
	fs::remove_all(root);
}

int main() {
	TestIni();
	TestLoadOrder();
	TestScanAndInstall();
	TestLoaderPackage();
	TestReleasePackages();
	std::cout << (g_failed ? "FAILED: " : "all passed, failures: ") << g_failed << "\n";
	return g_failed ? 1 : 0;
}
