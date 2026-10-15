#pragma once
#include "Core.h"

// Overwrite mods = loose files linked into the game's Content folder, plus the pak hooks that let the engine load
// loose files instead of the pak versions (Wave 3A, were the NoOverwrite part of SetupProfile in MDML.cpp, the
// link code in Mod/ModLoader.cpp and the pak detours in Platform/HooksManager.cpp). MDML-internal, not exported.
// The files come from the [Overwrite] component of every Mod (Registry::Get().Mods); since mod-components phase 1 the
// list is final after load phase 1 and this is load phase 2.
namespace mdml::mods {
	// Init thread: generates Config/NoOverwrite.ini on the first start (every loose file of the game = true) and reads
	// it into runtime::Config.disableOverwriteFiles. Needs runtime::Config.rootGameDir / NoOverwriteFile.
	void LoadNoOverwriteList();
	// Init thread, load phase 2: removes links left over from a crash, then links the files of every mod's [Overwrite]
	// component (Mod::Overwrite()->Files) and records them in Config/ModLinks.bin. Loose originals are
	// backed up as <file>.mdml-backup and restored by DeleteSysLinks.
	void CreateSysLinks();
	// isOld: cleanup of links from an earlier run (startup) instead of this run's (shutdown).
	void DeleteSysLinks(bool isOld = false);
	// Init thread: FPakPlatformFile::FindFileInPakFiles / IsNonPakFilenameAllowed (only with [PakOverwrite] bPakOverwrite=1).
	void InstallPakHooks();
}
