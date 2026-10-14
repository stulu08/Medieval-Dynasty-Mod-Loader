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
	Write(mods / "BaseMod" / "mod.ini", "[Mod]\nDLLPath=BaseMod.dll\n");
	Write(mods / "BaseMod" / "BaseMod.dll", "x");
	Write(mods / "Skin" / "mod.ini", "[Overwrites]\nEnable=True\nFolder=Content\n");
	Write(mods / "Loose.dll", "x");
	Write(mods / "Empty" / "readme.txt", "no mod");
	auto found = ScanMods(mods);
	CHECK(found.size() == 3);
	CHECK(found[0].name == "BaseMod" && found[0].coreDll);
	CHECK(found[1].name == "Loose" && found[1].looseDll);
	CHECK(found[2].name == "Skin" && found[2].overwrite && !found[2].coreDll);

	// archive of a mod -> candidates -> install
	fs::path src = root / "src" / "CoolMod";
	Write(src / "mod.ini", "[LogicMod]\nModName=CoolMod\n");
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
	Write(root / "Release 1" / "BaseMod" / "mod.ini", "[Mod]\nDLLPath=BaseMod.dll\n");
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

int main() {
	TestIni();
	TestLoadOrder();
	TestScanAndInstall();
	TestLoaderPackage();
	std::cout << (g_failed ? "FAILED: " : "all passed, failures: ") << g_failed << "\n";
	return g_failed ? 1 : 0;
}
