#pragma once
#include "Core.h"

// Overwrite mods = loose files linked into the game's Content folder, plus the pak hooks that let the engine load
// loose files instead of the pak versions (Wave 3A, were the NoOverwrite part of SetupProfile in MDML.cpp, the
// link code in Mod/ModLoader.cpp and the pak detours in Platform/HooksManager.cpp). MDML-internal, not exported.
// Registered mods: Global::GetGlobals()->OverwriteMods.
namespace mdml::mods {
	// Init thread: generates Config/NoOverwrite.ini on the first start (every loose file of the game = true) and reads
	// it into runtime::Config.disableOverwriteFiles. Needs runtime::Config.rootGameDir / NoOverwriteFile.
	void LoadNoOverwriteList();
	// Init thread: removes links left over from a crash, then links the files of every enabled overwrite mod
	// (mod.ini [Overwrites] or [Overrides], Enable=True) and records them in Config/ModLinks.bin. Loose originals are
	// backed up as <file>.mdml-backup and restored by DeleteSysLinks.
	void CreateSysLinks();
	// isOld: cleanup of links from an earlier run (startup) instead of this run's (shutdown).
	void DeleteSysLinks(bool isOld = false);
	// Init thread: FPakPlatformFile::FindFileInPakFiles / IsNonPakFilenameAllowed (only with [PakOverwrite] bPakOverwrite=1).
	void InstallPakHooks();
}
