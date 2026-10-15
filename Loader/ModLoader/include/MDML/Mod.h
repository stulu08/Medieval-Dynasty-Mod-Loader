#pragma once
// The mod container (docs/design/mod-components.md): ONE Mod per mod folder, declared by its mod.ini, with up to three
// components. A component pointer is null when the mod.ini has no such section.
//   [Core]      CoreMod       native DLL (MDML/CoreMod.h), created by the DLL
//   [Blueprint] BlueprintMod  cooked Blueprint assets and an optional actor (was "logic mod")
//   [Overwrite] OverwriteMod  loose files that replace game files
// The loader owns every Mod; mods get them through CoreMod::GetMod(), ModContext and MDML/Mods.h.
#include "MDML/Core.h"

class CoreMod;
namespace UE4 {
	class AActor;
	class UObject;
}
namespace mdml::mods { struct ModAccess; }

// [Mod]: metadata. Name defaults to the folder name.
struct ModInfo {
	std::string Name;
	std::string Version = "Unknown";
	std::string Author = "Unknown";
	std::string Description;
	// Folder name under Content/Mods, e.g. "DevTools"
	std::string Folder;
	// Absolute path of the mod folder (where mod.ini is)
	std::string Path;
};

// One loose file of an overwrite mod.
struct OverwriteFile {
	// Existing file on disk
	std::filesystem::path Source;
	// Where it goes, relative to the game's Content folder (backslashes), e.g. "Blueprints\Foo.uasset"
	std::string Target;
};

// [Overwrite]: files linked into the game's Content folder (load phase 2).
struct OverwriteMod {
	// [Overwrite] Folder: relative to the mod folder, every file in it is added (phase 0). Empty = no folder.
	std::string Folder;
	// The files to link. Final after load phase 1 (see ModContext::AddOverwriteFile).
	std::vector<OverwriteFile> Files;
	// Filled in phase 2: the absolute game paths that were linked.
	std::vector<std::string> Linked;
};

// [Blueprint]: cooked assets under /Game/Mods/<Folder>/ and an optional actor (load phase 3 registers it).
// Phase 1 only reads and stores SpawnIn / Persistent / Events; the actor still spawns on every InitGameState like the
// old logic mods. The new spawn rules come with mod-components phase 3.
struct BlueprintMod {
	// ---- settings from mod.ini, a CoreMod may change them in phase 1 (ModContext::EditBlueprint) ----
	bool Enabled = true;
	// Actor=MyActor.uasset (relative to the mod folder). Empty = asset-only mod.
	std::string ActorFile;
	// SpawnIn=Game | Menu | Always | Never
	std::string SpawnIn = "Game";
	// Persistent=MyData.uasset (relative to the mod folder), optional
	std::string PersistentFile;
	// Events=Tick,PostBeginPlay
	std::vector<std::string> Events;

	// ---- state, owned by the loader (read only for mods) ----
	// The spawned actor of the current level, null outside a level / before the spawn.
	UE4::AActor* Actor() const { return ActorInstance; }
	UE4::UObject* PersistentObject() const { return PersistentInstance; }

	// Phase 3 found an actor to spawn
	bool Registered = false;
	// /Game/Mods/<Folder>/MyActor.MyActor_C
	std::wstring ActorPath;
	std::wstring PersistentObjectPath;
	UE4::AActor* ActorInstance = nullptr;
	UE4::UObject* PersistentInstance = nullptr;
	bool ContainsButton = false;
	bool WasInitialized = false;
	std::vector<std::string> ModButtons;
};

class LOADER_API Mod {
public:
	Mod(ModInfo info);
	~Mod();
	Mod(const Mod&) = delete;
	Mod& operator=(const Mod&) = delete;

	const ModInfo& Info() const { return m_info; }
	// null = the mod has no such component
	CoreMod* Core() const { return m_core; }
	BlueprintMod* Blueprint() const { return m_blueprint.get(); }
	OverwriteMod* Overwrite() const { return m_overwrite.get(); }
	// True if the mod failed to load (a [Core] that could not be loaded or whose OnLoad threw). A failed mod stays in
	// the list so it can be shown, but ALL its components are dropped: Core/Blueprint/Overwrite are null, nothing of it
	// is linked or registered, and ModContext refuses to change it. FailReason() says why.
	bool Failed() const { return m_failed; }
	const std::string& FailReason() const { return m_failReason; }

private:
	friend struct mdml::mods::ModAccess;
	ModInfo m_info;
	CoreMod* m_core = nullptr;
	std::unique_ptr<BlueprintMod> m_blueprint;
	std::unique_ptr<OverwriteMod> m_overwrite;
	bool m_failed = false;
	std::string m_failReason;
};

// Handed to CoreMod::OnLoad (load phase 1, init thread): the mod list is still mutable. The components of every mod
// (also other mods') can be changed until they are applied: overwrite files until phase 2 starts, the Blueprint
// component until phase 3 starts. Later calls log an error and change nothing.
class LOADER_API ModContext {
public:
	// The mod whose OnLoad is running.
	Mod& Self() const { return m_self; }
	// All mods in load order.
	void ForEachMod(const std::function<void(Mod&)>& fn);
	// The mod with this Info().Name, or null.
	Mod* FindMod(const std::string& name);

	// Adds a file to target's [Overwrite] component (created when the mod has none). source must be an existing file;
	// gameRelativePath is relative to the game's Content folder and must stay inside it. Replaces an entry for the same
	// target. Returns false (and logs) if the file is invalid or the phase is over.
	bool AddOverwriteFile(Mod& target, const std::filesystem::path& source, const std::string& gameRelativePath);
	// Removes the entry for gameRelativePath. False if there is none.
	bool RemoveOverwriteFile(Mod& target, const std::string& gameRelativePath);
	// The Blueprint component of target (created when the mod has none: asset-only, no actor). After phase 2 a scratch
	// object is returned and an error is logged.
	BlueprintMod& EditBlueprint(Mod& target);

private:
	friend struct mdml::mods::ModAccess;
	explicit ModContext(Mod& self) : m_self(self) {}
	Mod& m_self;
};
