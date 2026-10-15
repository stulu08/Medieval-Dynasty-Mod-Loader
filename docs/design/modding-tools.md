# Design: Modding tools (asset extractor, mod builder, SDK helpers, live editing)

Status: **design draft, not implemented** (2026-10-15). Phase 3 feature, last item of the owner's order "event bus -> Lua -> modding
tools" (`docs/MODERNIZATION_PLAN.md`, decisions log 2026-10-15 "Next work"). Nothing here is decided until the owner answers the
questions in section 11. Items marked **[verify]** are from UE 4.27 knowledge or from tool documentation and must be checked
before implementation.

Security note for agents: the old pak AES key lives in `C:\dev\MDML\Key.txt` (outside the repo). This document was written
**without reading that file**; it only records that the file exists. Never print, log, paste or commit the key (see section 5.4).

Related: `docs/design/mod-components.md` (Mod = Core/Blueprint/Overwrite/Lua components, event bus), `docs/design/pak-mods.md`
(mounting `.pak` mods), `docs/design/live-view.md`, `docs/design/lua-scripting.md` (section 14 "Answers"),
`docs/guides/Modding.md`, `docs/guides/DevKit.md`, `Tools/ModManager/docs/ModManager.md`, `docs/SDK_GENERATOR.md`.

## 1. Goals / non-goals

Owner wishes (2026-10-15): modding tools that make creating mods easy: **easy asset replacement**, **building/packaging mods**,
**easily adding rows to DataTables**. Motivating example: the owner's **weapon mod** (a new item with its own assets, overriding
the bow actor's parameters / editing weapon stats, spawning own assets; an old experiment used `BP_HoldableItem_Longbow`).

Goals
1. **Asset extractor**: take assets of the game (inside the game pak) and put them into a mod folder or a UE project.
2. **Mod builder**: from a UE 4.27 project to a ready mod folder (`mod.ini` + cooked assets, later `.pak`), one command or one button.
3. **SDK helpers** (C++ and Lua) so that value changes are written as code: add/edit/remove DataTable rows, change class default
   values (CDO), load assets, spawn actors, load sub-levels / place POIs.
4. **Live editor**: find the object or table you want to change in the running game (Live View), try values live, then copy the
   change into code.
5. Everything usable by someone who knows Unity but not Unreal: the docs explain the UE terms (section 2) and the workflow (section 3).

Non-goals
- **No declarative patch format** (owner decision): no "mod patch" files that describe value or level changes. Changes are code:
  Lua (soon), Core C++, C# (deferred). MDML only provides the API. CoreMods may expose interfaces to other mods (via the event bus
  and exported headers), that is how shared "weapon framework" code would be built.
- No own asset editor / no replacement for the UE editor. Meshes, textures, Blueprints are authored in UE 4.27.
- No redistribution of game assets: the extractor works on the player's own install; extracted files stay on the modder's disk
  (and must never be committed or shipped inside a mod unless they are modified and legally unproblematic; the docs say so).
- Not in v1: level editing in-game (placing POIs in the live world and saving), see section 7.5 for what is realistic.

## 2. Unreal background for the owner (Unity / own-engine view)

| UE term | Short explanation | Unity analogy |
|---|---|---|
| **Package / asset** | One file `Name.uasset` (header: imports/exports) + `.uexp` (export data) + optional `.ubulk` (big raw data, e.g. mesh/texture mips). Identified by a path like `/Game/GFX/Items/Weapons/BP_Bow` ("Game" = the `Content` folder). A package can hold several objects, usually one main asset | Asset file + .meta GUID, but with a stable path as ID |
| **Cooked vs uncooked** | The editor works with *uncooked* assets (editor-only data, full graphs). *Cooking* converts them to platform-ready *cooked* assets (no editor data, compiled Blueprint bytecode, converted textures). The shipped game contains only cooked assets. A cooked asset **cannot be opened in the editor** | Editor project vs built player data |
| **Blueprint** | Visual-script class asset. Compiles to a `UClass` (name ends `_C`) with a **CDO** | Prefab + MonoBehaviour in one |
| **CDO (Class Default Object)** | The one default instance of every class; holds the default value of each property. Every spawned instance copies it. Editing a default in the CDO changes all instances created **afterwards** (already existing ones keep their values) | The prefab asset's serialized values |
| **DataTable** | An asset with a *row struct* (a USTRUCT type) and rows addressed by an `FName` key. Built from CSV/JSON in the editor; game logic looks rows up by name (items, recipes, prices, ...). At runtime a `UDataTable` holds `RowMap` (name -> memory of one row struct) | ScriptableObject list / CSV-driven table |
| **Soft reference** | A reference stored as a *path* (`TSoftObjectPtr`, `TSoftClassPtr`), not loaded until asked. Hard references load the target with the owner. Items in DataTables often use soft references to meshes/icons/classes, which is why a new row can point at a new asset **without** touching the game's files | Addressables / `Resources.Load` by path |
| **AssetRegistry** | Index of all assets (path, class, tags) so the game can search without loading. Built at startup from the cooked registry. Assets loaded **by path** do not need to be in it; code that *searches* the registry will not find mod assets unless the registry is extended | `AssetDatabase` (editor) |
| **.pak** | Archive of cooked files (virtual file system, optional compression + AES encryption of data and index). The game ships **one** pak (section 4.1). Later paks with higher priority override files with the same path | AssetBundle |
| **IoStore (`.utoc` / `.ucas`)** | UE 4.26+ alternative container; **not** used by this game (only one `.pak`) **[verify]** | - |
| **umap** | A level (map) asset. **Sub-level / streaming level**: a level loaded into the current world at runtime (`ULevelStreamingDynamic`). POIs / camps would be sub-levels or actors spawned from a Blueprint | Additive scene |
| **Actor / UObject** | `AActor` = placed object with transform, `UObject` = any reflected object. Reflection (property/function by name) is why MDML can read and write them without game headers | GameObject / Object |
| **Mount point** | The path prefix inside a pak (`../../../Medieval_Dynasty/Content/`). Files must sit under the right prefix to appear as `/Game/...` | - |

Practical consequence for modders: you **cannot** "open the game's bow Blueprint, change it, save". You either (a) change values in
**code** at runtime (CDO defaults, DataTable rows; no UE project needed) or (b) create **your own** assets in a UE project
(a new Blueprint deriving from the game's class, new mesh/icon/material), cook them, and make the game load them. Replacing a
game asset means creating an asset with the same path and class in your project (a "stand-in") and cooking it, see 3.

## 3. Workflow walkthrough: the weapon mod, end to end

Goal: a new item "Dynasty Longbow": own mesh and icon, its own actor Blueprint derived from the bow actor, stats from a new
DataTable row, tweaked arrow damage; the player can spawn/obtain it.

Names below (table names, row struct fields, `BP_HoldableItem_Longbow` parent class) come from the owner's old experiment and from
the generated SDK; every other name must be looked up first (step 1, with Live View). **[verify]** all of them in-game.

**Step 0, one-time setup.** Install the DevKit (`MDML-DevKit-<v>.zip`), enable DevTools, create the UE 4.27 project named
`Medieval_Dynasty` with the editor at `F:\Program Files\UE_4.27` (as `docs/guides/Modding.md` already demands for Blueprint mods).
The builder (section 5) is told the project path once.

**Step 1, find what to change (Live View / DevTools).** In game open the object browser (later Live View, section 7): search
`Longbow`, open the CDO `Default__BP_HoldableItem_Longbow_C`, read its properties (damage, draw time, ...), find the item
DataTable by searching class `DataTable`, look at the row struct and a row of a similar item. Right-click "copy as Lua / C++"
(section 7.3) yields the property path and the asset path. Nothing is written yet.

**Step 2, extract what you need (asset extractor, section 4).** `mdml-extract` (or the Mod Manager tab "Assets") lists the game
pak, you pick `.../Weapons/BP_HoldableItem_Longbow*` and its mesh/material/icon, and the extractor writes the **cooked** files
(`.uasset/.uexp/.ubulk`) into `<mod>/Extracted/` (kept out of the final mod) and, for reference, converts meshes/textures to
glTF/PNG for viewing. Extracted cooked files are used for three things: look at them (viewer tools), use them as a template for
stand-in assets in the project, and, when you only want to replace a texture, copy your edited file back as a loose overwrite
(works today, `[Overwrite]`).

**Step 3, make own assets in the UE project.** In the editor: import your mesh/icon, create `BP_DynastyLongbow` as a child of the
game's bow class. Because the game's classes do not exist in your project, a **stand-in parent** is needed: an empty Blueprint
with the same path and a compatible class (`/Game/.../BP_HoldableItem_Longbow`). It is cooked but **its output is discarded**
(the builder excludes stand-in paths, listed in `mod.ini`/the project's `MDML` settings), so only the child is shipped.
Cooked child assets reference the parent by path and resolve against the game's real class at load time. Compatibility of
properties/functions the child touches is the main risk (section 10, R3). Everything of the mod lives under
`Content/Mods/DynastyLongbow/` so paths never collide with the game.

**Step 4, build (mod builder, section 5).** One command, `mdml-build DynastyLongbow` (or button): cooks the project, copies the
cooked files of `Content/Mods/DynastyLongbow` into `<out>/DynastyLongbow/`, writes/updates `mod.ini`, and (once pak mounting
exists) packs them to `DynastyLongbow.pak`. The result is a ready mod folder; "Install to game" in the Mod Manager copies it into
`Content/Mods`.

**Step 5, the code.** A `[Lua]` component (or Core DLL) `main.lua` that runs when the game is ready (examples use the API of section 6):

```lua
-- Scripts/main.lua  (Lua API is a sketch; lua-scripting.md has the binding rules)
Events.Subscribe("MD.GameInit", function()
    -- 1) new item row, by copying a similar row and changing fields
    local items = DataTable.Find("/Game/.../DT_Items")             -- path from Live View
    items:CopyRow("Longbow", "DynastyLongbow", {                    -- source row, new key, field overrides
        DisplayName = "Dynasty Longbow",
        Mesh        = SoftClass("/Game/Mods/DynastyLongbow/BP_DynastyLongbow.BP_DynastyLongbow_C"),
        Icon        = SoftObject("/Game/Mods/DynastyLongbow/T_Icon.T_Icon"),
        Weight      = 1.5,
    })
    -- 2) tweak defaults of the vanilla class (affects instances created from now on)
    local bow = Class.Load("/Game/.../BP_HoldableItem_Longbow.BP_HoldableItem_Longbow_C")
    bow:Default().Damage = bow:Default().Damage * 1.5
end)
```
The same in C++ is section 6.2. **Step 6, test**: owner starts the game; Live View shows the new row and the changed CDO value.
The change is code, so tuning is "edit `main.lua`, hot reload (button)", no cooking needed for numbers.

## 4. Asset extractor

### 4.1 What the game's pak looks like (read-only check, 2026-10-15)
Facts verified from the game files without running the game (listing + the pak footer, the last 221 bytes, parsed with a
script; nothing was modified):
- `Content/Paks/` holds exactly `Medieval_Dynasty-WindowsNoEditor.pak` (11,133,831,096 bytes) and `Medieval_Dynasty-WindowsNoEditor.sig` (680,084 bytes). No `.utoc/.ucas`, so **classic pak, not IoStore**.
- Footer magic `0x5A6F12E1` present; **pak version 11** (`Fnv64BugFix`, the 4.27 default); index offset 11,119,792,843, index size 2,792,848 bytes (~2.7 MB index); encryption key GUID all zero.
- **`bEncryptedIndex = 1`**: the index (file names) is **AES-256 encrypted**. A tool cannot even list the files without the key. Entry data is probably encrypted too (per-entry flag, **[verify]** by reading the index with the key).
- The footer's compression-method name table (5 slots of 32 bytes) is **empty**, so no compression method is registered/used for the entries: the pak most likely stores entries **uncompressed** **[verify]** (an unused table is how 4.27 writes a pak without compressed entries; confirm per entry once the index is readable).
- The `.sig` (680 KB) means pak **signing** is in use: only relevant for *mounting additional paks* (`pak-mods.md` section 6), not for reading the game pak.
- The key is not in any file of the game install (it is compiled into the EXE and registered by `FPakPlatformFile::RegisterEncryptionKey`); the owner's old key file `C:\dev\MDML\Key.txt` exists. Whether it still matches this build is **[verify]** (an index decrypt test answers it: wrong key = garbage index).

### 4.2 Options

| Option | How | License / fit | Pros | Cons |
|---|---|---|---|---|
| **A. UnrealPak from the 4.27 install** | `UnrealPak.exe <pak> -Extract <dir> -cryptokeys=<crypto.json>` (the exe is present: `F:\Program Files\UE_4.27\Engine\Binaries\Win64\UnrealPak.exe`, verified) | Epic EULA tool, already on the owner's machine; **cannot be redistributed**, so it is "bring your own UE" | No new dependency, supports v11 + AES + signing, same tool as the packer (section 5), extracts exactly the cooked layout | Needs the full UE install (modders need it anyway for cooking); extracts the **whole** 11 GB pak (no selective extract? `-Extract` takes no filter in 4.27; use `-List` + filtered response file **[verify]**); needs a `crypto.json` with the key (the key leaves `Key.txt`) |
| **B. repak (Rust CLI)** | `repak --aes-key ... unpack/list/get` | MIT/Apache-2.0 **[verify]**; static binary can be shipped (with attribution) | Fast, selective `get`/`list`, supports v11, AES, encrypted index (**[verify]** v11 + encrypted index + `--aes-key` hex) | Another executable to ship and pin; AES key passed on the command line (visible in process list) unless piped; a pak writer for mod paks as well (replaces UnrealPak for packing, **[verify]**) |
| **C. CUE4Parse (C# library) / FModel** | CUE4Parse = Apache-2.0 **[verify]**; FModel (GUI) = GPL-3.0 **[verify]** | CUE4Parse can read paks **and** parse/export cooked assets (properties as JSON, textures, meshes) and it knows UE 4.27 | Best for "show me what is in the asset"; FModel is the community standard viewer | .NET dependency (C# is deferred in this project); GPL for FModel means "drive it manually / recommend", not bundle; CUE4Parse fits a separate tool, not MDML.dll |
| **D. UAssetAPI / UAssetGUI** | MIT **[verify]**; reads/writes **cooked** `.uasset/.uexp`, JSON round trip | Edit a cooked asset directly (e.g. a DataTable asset's rows, a material parameter) without the editor | Valuable for "edit a cooked asset in place": a loose overwrite of just that file | Needs game-specific mappings if the game uses unversioned properties (`.usmap`) **[verify]**, .NET, can break on exotic classes |
| **E. Own C++ pak reader in MDML** | Parse footer (we know v11 layout), AES-decrypt index (Windows BCrypt/CNG, no dependency), read path-hash/full-directory index, optional zlib; read entries by offset | MDML's own code, LGPL fits; AES = OS API | Zero external tools, runs inside the Mod Manager (C++), selective extract, an offline "list files" for the doc/Live-View asset picker, no key on a command line, **also usable in-process** for an in-game asset browser | We maintain a format parser: v11 index (two indexes + 64-bit FNV path hash seed), encoded entry records, compression blocks, per-entry encryption alignment **[verify]**; roughly 600-900 lines + tests; no asset parsing (only bytes) |
| **F. umodel (UE Viewer)** | Existing `docs/guides/Modding.md` recommendation | Source-available, GPL-ish **[verify]**; needs the AES key as parameter | Quick preview/export of meshes/textures | Not a pak-to-mod-folder tool; viewer only |

### 4.3 Recommendation
Two layers, smallest first:

1. **v1: drive existing tools, add nothing new.** Extractor = a small module in the Mod Manager (and a CLI in `MDMLPackager`)
   that shells out to **UnrealPak `-Extract`** (Option A, the tool the modder already has through UE) with a crypto.json the
   user created once, restricted to the paths wanted if a filter works, otherwise extracting to a scratch folder
   and copying the chosen subtree. For viewing/export of contents, the docs recommend **FModel/CUE4Parse** (Option C) and
   **UAssetGUI** (Option D) as *external* tools, with the exact steps; they are not bundled.
2. **v2: own C++ pak reader (Option E)** in `Tools/ModManager/Core` as a library (listing + selective extraction, no asset parsing),
   because an offline file list also feeds the mod builder ("which of my files override game files?"), the conflict view of
   `pak-mods.md` and a path picker in Live View. Decision after v1 shows how annoying UnrealPak's all-or-nothing extract is.
   Option B (repak) is the fallback if the owner prefers shipping a binary over writing the parser.

Key handling for all options: the modder supplies the key once through a setting that points to a **file outside the repo**
(default suggestion `C:\dev\MDML\Key.txt` for the owner), the tools read it at run time, pass it via a temp crypto.json in the
user's temp folder deleted afterwards (UnrealPak) or via stdin/handle where the tool allows. It is never logged, never in command
lines shown in the UI, never in docs; `.gitignore` guard for `*.key`/`Key*.txt` (also demanded by `pak-mods.md`). Distributing
the key to other modders is the owner's call (question Q3); the release packages never contain it.

### 4.4 Output layout
```
<ModFolder>/Extracted/            (git-ignored, never shipped)
  Medieval_Dynasty/Content/GFX/Items/Weapons/...uasset|uexp|ubulk     cooked, game-relative paths = overwrite layout
  _export/                         optional glTF/PNG/JSON from CUE4Parse for viewing (external tool)
```
Because the folder structure equals the game's `Content/` structure, a file copied from `Extracted/` into `<Mod>/OverwriteContent/`
(after editing, e.g. with UAssetGUI) is already a valid `[Overwrite]` file (`docs/guides/Modding.md`, "Overwrite Mods").

## 5. Mod builder

### 5.1 Inputs / outputs
Input: the UE 4.27 project (`.uproject`), a mod name, the content subtree `Content/Mods/<Mod>/` (and optional extra
overwrite subtrees), plus a `mdml-mod.json`/section in the project describing stand-ins to exclude. Output: a folder

```
Output/<Mod>/                    -> copy to <game>/Medieval_Dynasty/Content/Mods/<Mod>/
  mod.ini                        [Mod] + generated [Blueprint]/[Overwrite] (+ [Pak] later) + hand-written parts preserved
  Content/...                    cooked loose files (today) OR <Mod>.pak (after pak-mods phase 2)
  Scripts/main.lua, <Mod>.dll    copied from the mod source folder if present
```
`mod.ini` is generated only where the builder knows the answer (asset lists, `Actor=` if a class marked entry exists); the
author's own sections/keys are never overwritten (merge, `IniDocument` of the Mod Manager already keeps untouched lines).

### 5.2 Steps the builder drives
1. **Cook** with the 4.27 editor commandlet, no packaging: `UE4Editor-Cmd.exe <proj>.uproject -run=cook -targetplatform=WindowsNoEditor -cookdir=/Game/Mods/<Mod> -iterate` (the exe exists in the install, verified); alternative: `RunUAT.bat BuildCookRun -project=... -cook -skipstage ...` (UAT is present: `Engine\Build\BatchFiles\RunUAT.bat`). Exact arguments and whether `-cookdir` is enough or the stand-ins force a wider cook: **[verify]**. Output: `<proj>/Saved/Cooked/WindowsNoEditor/Medieval_Dynasty/Content/Mods/<Mod>/...`.
2. **Collect**: copy the cooked tree of the mod folder (`.uasset/.uexp/.ubulk/.uptnl`) to the output folder, drop the stand-ins' cooked output.
3. **Pack (later)**: `UnrealPak.exe <Mod>.pak -Create=<responsefile> -compress`? with the mod's content under the mount point `../../../Medieval_Dynasty/Content/Mods/<Mod>/` (response file lines `"src" "dest"`); **unencrypted** per `pak-mods.md` v1 policy. Naming `<Mod>_P.pak` if the engine's own scan ever mounts it **[verify]**.
4. **Verify**: re-list the result (own reader or `UnrealPak -List`), check every Blueprint `Actor=` file exists, warn about files that equal game paths (they would override the game: intended for `[Overwrite]`, suspicious otherwise).

Until pak mounting exists the builder's output is the **loose** layout that works today (Blueprint component: assets under
`/Game/Mods/<Folder>/`, found by the file location rule of `docs/guides/Modding.md`). When `pak-mods.md` lands the same build gets a
`[Pak]` section; no workflow change for the modder.

### 5.3 Where it lives
- Core logic in `Tools/ModManager/Core` (static lib, tested by `ModManagerTests`): `UeInstall` (find the UE install: setting
  `UnrealEngineDir`, default empty; the owner's is `F:\Program Files\UE_4.27`, never hard-coded), `CookRunner`, `PakPacker`,
  `ModIniWriter`, `AssetExtractor`.
- Front ends: Mod Manager tab "Build" (project path, mod name, buttons Cook / Pack / Install to game) and `MDMLPackager` extended
  (or a sibling `MDMLBuild.exe`) for CLI/CI: `mdml-build <proj> <Mod> [--pak] [--install]`. The tool runs **outside** the game and
  must not touch the game folder except "Install", which uses the manager's existing never-delete installer (backups).
- Child processes run on a worker thread (the manager's `State` already has one), stdout of UE is streamed to the log tab; cook takes
  minutes, so cancel must kill the process tree.

### 5.4 What the builder never does
Never writes into the game install on its own, never embeds an AES key into a mod, never packs game assets it extracted (a
warning lists extracted-looking files that are unmodified copies of game files, **[verify]** by hashing against the pak index).

## 6. SDK helpers (C++ and Lua API sketch)

New header `MDML/Content.h` (name open) in the public API; all calls are **game thread only** (they assert via
`mdml::GameThread::IsInGameThread`; from other threads use `GameThread::Enqueue`) and return a result instead of throwing, the
Lua binding turns a failure into a Lua error (decision "unknown name = error"). Implementation uses reflection and engine functions
resolved from the PDB, **not** generated game headers, so it survives game updates ("patch-proof", `lua-scripting.md` section 1).

### 6.1 Building blocks
| Helper | C++ sketch | Lua sketch | Implementation notes |
|---|---|---|---|
| Load asset / class | `UObject* LoadAsset(path)`, `UClass* LoadClass(path)` | `Asset.Load(path)`, `Class.Load(path)` | `StaticLoadObject`/`StaticLoadClass` (exist already for logic mods); `TryLoad` returns null instead of erroring; async variant later |
| Soft references | `SoftPath("...")` value type for row fields | `SoftObject(path)`, `SoftClass(path)` | writes an `FSoftObjectPath` (asset name + sub path) into a `TSoftObjectPtr/TSoftClassPtr` property; **[verify]** 4.27 layout (FName + FString) via `EngineLayout.h` |
| DataTable find | `DataTable Table(path or UDataTable*)` | `DataTable.Find(path)` | wraps `UDataTable`; `RowStruct`, row names, `GetDataTableRowMap` already in `EngineHelpers` |
| Row read | `Row GetRow(name)` -> struct view | `table:Get("Longbow")` -> field table view | reflection over `RowStruct` (`UScriptStruct` properties by name), same value marshalling as Lua's UObject view |
| **Edit row** | `row.Set("Damage", 12.f)` | `table:Get(k).Damage = 12` | writes into the row memory; strings/arrays need the engine allocator (FMemory via PDB, `lua-scripting.md` S1) |
| **Add row** | `table.AddRow(name, rowInitFn)`, `table.CopyRow(src, dst)` | `table:AddRow(k, {...})`, `table:CopyRow(src, dst, {...})` | preferred: call the engine's `UDataTable::AddRow` (symbol in PDB **[verify]**) with a default-initialised row (`RowStruct->InitializeStruct`) then fill fields; `CopyRow` = `CopyScriptStruct` + overrides (clean copies of FString/TArray members). Fallback: manual `RowMap` insert, which needs the engine's TMap hash internals |
| **Remove row** | `table.RemoveRow(name)` | `table:Remove(k)` | engine `RemoveRow` **[verify]**; destroys the struct via `RowStruct->DestroyStruct` |
| Row listing/diff | `table.RowNames()` | `table:Rows()` | for Live View and for "did the game patch change this row" checks |
| **CDO defaults** | `ClassDefaults(cls).Set("Damage", v)` | `Class.Load(p):Default().Damage = v` | `UClass::GetDefaultObject()` + property write by name. Affects instances created afterwards. Blueprint CDOs: edit **before** instances spawn (see 6.3). Subobject defaults (components) via their template names **[verify]** |
| Original values | `ClassDefaults(...).Original("Damage")` | `...:Original("Damage")` | the helper remembers the first read value per (class, property) so mods can scale instead of overwrite and "reset" works for hot reload |
| **Spawn actor** | `SpawnActor(cls, transform)` (exists in `EngineHelpers`) | `World.Spawn(cls, {x,y,z}, rot)` | `UWorld::SpawnActor` wrapper; returns weak handle in Lua |
| Spawn item / give item | wraps the game's own inventory functions, found with Live View | `Item.Give(rowName, count)` | game-specific, lives in a CoreMod/Lua library, not in MDML core (DevTools `ItemTools` is the prototype) |
| **Sub-level / POI** | `LoadSubLevel(path, transform, onLoaded)` | `Level.LoadSub(path, pos, fn)` | `ULevelStreamingDynamic::LoadLevelInstance` (static function; UFunction callable by reflection, **[verify]** exposure in 4.27 and that the game's world allows dynamic streaming); content = a `.umap` from the builder. POIs as **Blueprint actors** spawned at coordinates are the safer first step |
| Exposed interfaces | `Mods::Expose<IWeaponApi>(...)` / `Mods::Get<...>("MyMod")` | `Mod.Export("Weapons", tbl)` / `Mod.Import("Weapons")` | CoreMods publish a pure-virtual interface in a header they ship (cf. mod-defined events with `Event<T>`); Lua modules via the Lua mod's own table. **[verify]** whether the bus is enough instead (`Publish`/`Subscribe` of request events) |

### 6.2 C++ example (Core mod, same weapon)
```cpp
void MyMod::OnLoad(ModContext&) {
    Subscribe(Events::GameInit, [this] {                     // "MD.GameInit"
        auto items = mdml::content::DataTable::Find("/Game/.../DT_Items");
        if (!items) { Log::Warn("items table not found"); return; }
        items->CopyRow("Longbow", "DynastyLongbow", [](mdml::content::Row& r) {
            r.SetText("DisplayName", L"Dynasty Longbow");
            r.SetSoftClass("Mesh", "/Game/Mods/DynastyLongbow/BP_DynastyLongbow.BP_DynastyLongbow_C");
            r.Set("Weight", 1.5f);
        });
        auto bow = mdml::content::ClassDefaults::Load("/Game/.../BP_HoldableItem_Longbow.BP_HoldableItem_Longbow_C");
        bow->Set("Damage", bow->Original<float>("Damage") * 1.5f);
    });
}
```

### 6.3 Timing on the event bus
| Event (thread) | What is safe |
|---|---|
| `OnLoad` / phase 1 (init thread) | **No UObjects.** Only declare things: add overwrite files (`ModContext`), subscribe. No DataTable/CDO access |
| `MDML.EngineReady` (game, first `InitGameState`) | engine initialised (`InitSDK`), `GObjects` filled. Safe for `StaticFindObject`/`LoadObject`, CDOs of **already loaded** classes. A DataTable that is not loaded yet can be loaded by path (`LoadAsset`) but it then also has to be the instance the game uses (same package object, so yes) |
| `MD.MenuInit` / `MD.GameInit` | per game state; `MD.GameInit` = a save is loading/loaded. Best place for row adds and CDO edits: the game's own systems that read the tables (shops, crafting, item lists) usually have not cached them yet at `MD.MenuInit` **[verify which of the two is early enough; Live View shows when the item DataTable is read first]** |
| `MD.GameBeginPlay`, `MD.GameTick` | spawning actors, giving items; never heavy loads on tick |
| `MD.LevelEnd` | world is going away: drop `AActor*` handles, remove actors you spawned; DataTable edits survive level changes (the table object lives in the persistent package set) **[verify]** |

Rules: edits are **idempotent** (re-running `MD.GameInit` for a second save must not duplicate: `AddRow` on an existing key replaces or
is skipped, defined behaviour), and `OnUnload`/hot reload may call `table:Remove` for rows the mod added. Row additions should
be done **before** anything snapshots the table (saved games reference rows by name: removing a mod that added an item
leaves orphans in saves, see risk R6).

## 7. Relationship to Live View (live editor) and DevTools

- **DevTools today** (`Mods/DevTools`): SDK generator, object browser (+ export-list saving), INI browser/editor, player/item tools,
  dev-build flag swap. It is the host for dev features and stays off by default.
- **Live View** (`docs/design/live-view.md`, not implemented) is the *discovery and tuning* half of the modding tools: find
  `Default__BP_HoldableItem_Longbow_C`, edit `Damage` live and see the effect, open the DataTable and edit/add a row, call functions.
  Its snapshot/request architecture (render thread never touches UObjects) is reused by every tool here.
- **7.1 DataTable editor window** (new view in Live View, phase M3): grid of rows x columns from `RowStruct`, edit cell,
  "Add row (copy selected)", "Delete row", **undo one step** (Live View rule). Uses exactly the helpers of 6.1 through the
  request queue, so the code a modder writes and the editor do the same thing.
- **7.2 CDO view**: Live View's inspector already shows CDO properties; add "Original" and "Modified by mod X" columns when a
  helper changed it (the helper registry from 6.1 knows who).
- **7.3 "Copy as code"**: right-click a property, a DataTable cell or a row: copies the Lua or C++ snippet of 6 to the clipboard
  (path, class path, property path, current value). Combined with "live edit first, then paste into `main.lua`" this replaces
  the patch-file idea the owner rejected: the tool helps write code, the mod stays code.
- **7.4 Asset picker**: once an own pak reader exists (4.3 v2), the search window can also list **not loaded** assets of the game
  pak (name, size), and offer "Extract to mod". Before that it lists loaded objects only.
- **7.5 Level editing / POIs (owner is interested)**: realistic order: (1) spawn a Blueprint actor at the player position from the
  Live View ("Spawn here"), with a "copy as code" snippet that stores class path + transform; (2) a mod that spawns a list of such
  actors on `MD.GameBeginPlay` = a hand-placed POI; (3) `.umap` sub-levels built in the UE project and loaded with 6.1 `LoadSub`.
  Saving edited **vanilla** levels is out of scope (no patch format, level assets are huge cooked packages).

## 8. Phased plan

Each phase ends with an in-game or on-disk test by the owner (agents never launch the game). Phases M1-M2 do not depend on the Lua
runtime; M3+ need `[Lua]` (S2) and Live View phase 1.

| Phase | Scope | Exit criterion |
|---|---|---|
| **M0 Investigation** (read-only, can start now) | Index decrypt test: with the user-supplied key read the pak index (Python or UnrealPak `-List`) to confirm v11 layout, per-entry encryption/compression, count and total of entries; check the old key still matches; run a throwaway UnrealPak `-Create` + (with pak-mods phase 0) a mount test; check `UE4Editor-Cmd -run=cook` on an empty `Medieval_Dynasty` project; find the item DataTable, its row struct and the first read time with the object browser | written answers to the [verify] items of 4.1, 5.2, 6.3; list of file counts per folder in `docs/reports/` |
| **M1 Extractor v1** | Mod Manager "Assets" tab / CLI: UnrealPak extract (or `-List` + filter), key setting outside the repo, scratch folder, copy subtree to `<Mod>/Extracted/`; docs: viewing with FModel/CUE4Parse, editing with UAssetGUI | owner extracts `BP_HoldableItem_Longbow*` and its dependencies into a mod folder; no key in logs/UI |
| **M2 Mod builder v1 (loose)** | `UeInstall`, `CookRunner`, collect step, `ModIniWriter`, stand-in exclusion, "Install to game"; docs chapter (replaces the "very bad tutorial" Blueprint/Overwrite chapters in `Modding.md`) | owner builds `DynastyLongbow` from the UE project to a mod folder with one command and the Blueprint component loads it in-game |
| **M3 SDK helpers: content API** | `MDML/Content.h` (`LoadAsset/LoadClass`, soft refs, `DataTable` find/get/set, `AddRow`/`CopyRow`/`RemoveRow`, `ClassDefaults` with `Original`), C++ tests in DevTools, then Lua bindings in the `[Lua]` component | a test mod adds a row to the item DataTable and edits a CDO value (verified with the object browser); idempotent across two saves |
| **M4 Spawn + sub-level** | `World.Spawn` for mod assets, `LoadSub` feasibility, item-give helper in a library mod | the weapon appears in the player's hands/inventory; a sub-level test map loads (or the doc says why it cannot) |
| **M5 Builder v2 (pak)** | `PakPacker` via UnrealPak (needs `pak-mods.md` phase 1-2 for the mount), `[Pak]` generation, verify step | the same mod builds as one `.pak` and works in-game identically |
| **M6 Live editor** | Live View DataTable editor, CDO "modified by", "copy as code", asset picker | owner edits a row live, copies the Lua, pastes it into `main.lua`, restart reproduces the state |
| **M7 Extractor v2** | own C++ pak reader (Option E) as library, selective extract, file list in the manager and Live View | extracts one asset in <1 s without UnrealPak |
| **M8 Weapon mod end-to-end** | the real mod (section 3) as an example mod in `Mods/Examples`, doc walkthrough | owner plays with it |

## 9. Packaging into the existing tools (summary)
- `Tools/ModManager`: gains tabs "Assets" (extractor) and "Build" (builder); `ModScanner` learns `[Pak]` later (open item of
  `ModManager.md`); `Installer` is reused for "Install to game".
- `MDMLPackager`: CLI sibling for CI. The player zip does **not** need these tabs (question Q10: put them in the DevKit zip only).
- DevKit zip: gets `docs/guides/Modding.md` (rewritten around this document), `mdml-build` if it is a separate exe, the stand-in
  helper (empty parent Blueprints) is **not** shipped (game assets/names; generated by the user from their extracted files, **[verify]**
  whether a generic stand-in recipe is possible).

## 10. Risks / [verify] items
| # | Risk / unknown | Mitigation |
|---|---|---|
| R1 | The old AES key no longer matches this game build, or entries use a second key | M0 decrypt test before any tool work; otherwise extract the key from the running game (`RegisterEncryptionKey`, `pak-mods.md` section 6) by a DevTools command that writes it to a file outside the repo, only on the owner's request |
| R2 | Pak entries are compressed/encrypted differently than assumed (footer table empty) | M0 reads real entries; Options A/B/C handle both |
| R3 | Child Blueprint of a stand-in parent cooks with a layout that does not match the real game class (property indices, missing functions) -> crash/ignored | cook only own assets, minimal stand-ins, runtime check log ("class X parent Y: N properties missing"), docs recommend deriving only from classes whose members they use; fallback: C++/Lua for logic and asset-only mods for meshes/icons |
| R4 | Cooking the 4.27 stock editor project produces assets incompatible with the game build (engine fork/version `4.27.2`, custom plugins, `Medieval_Dynasty` Blueprints use game C++ classes unknown to the project) | The project needs stub C++ classes or only data/asset content; Blueprints deriving from game C++ classes need the C++ module stub (the SDK generator already knows the class layouts: **[verify]** a generator output "UE project stubs" would solve this and is a likely later feature) |
| R5 | DataTable adds break because rows are read from a copy/another cache (e.g. item list built at game start) | M0 finds when tables are first read; use `MD.MenuInit`/earlier hook; fall back to editing the source asset via overwrite with UAssetGUI |
| R6 | Save games reference added items/rows by name; removing the mod leaves invalid data | document; the builder/mods list a "changes saves" warning in `mod.ini` (`[Mod] SaveImpact=...`, name open) |
| R7 | `UDataTable::AddRow`/`RemoveRow` not in the PDB or not callable; manual `RowMap` insertion is fragile | fall back to engine `TMap` helpers from the PDB; at worst `CopyRow` by in-place overwrite of an unused row |
| R8 | Game patch changes table layouts | reflection by name: missing field = clear error; M3 helper logs the row struct fields on mismatch |
| R9 | Sub-level streaming blocked/unsupported by the game's world (World Partition is not in 4.27, but custom streaming code exists) | M4 feasibility test; fall back to Blueprint actors for POIs |
| R10 | Licenses: UnrealPak/UE belong to Epic (EULA: no redistribution, fine for bring-your-own), FModel GPL-3, CUE4Parse/UAssetAPI/repak permissive **[verify each LICENSE file]** | Do not bundle UE or GPL tools; reference by link; if repak/CUE4Parse is bundled, add to `THIRD_PARTY_LICENSES.md` |
| R11 | Extracted files copied into released mods (copyright of the game developer) | documented rule, builder warning (5.4) |
| R12 | Time spent on cook workflow is large (UE learning curve for the owner) | M2 comes with a ready sample UE project skeleton **(not game assets)** in the DevKit and a one-page checklist |
| R13 | Signature check rejects the mod pak at mount | belongs to `pak-mods.md`; the builder works for loose files until solved |

## 11. Owner questions (nothing decided; recommendation per question)

| # | Question | Recommendation |
|---|---|---|
| Q1 | **Extractor v1: drive UnrealPak** (you already have UE, nothing new to ship) and recommend FModel/UAssetGUI as external viewers; write our own C++ pak reader later (M7) only if UnrealPak's all-at-once extract bothers you? Or write the own reader right away? | UnrealPak first (M1), own reader as M7 |
| Q2 | Is **repak** (small Rust exe, MIT/Apache) acceptable as an optional bundled dependency for selective extract and packing, or do you want to avoid more third-party binaries? | no repak for now; revisit after M1 |
| Q3 | The extractor and viewer tools run on the **pak's AES key**. May the tools read it from a user-set file path (default for you: `C:\dev\MDML\Key.txt`), never storing it in the repo, logs or UI? Should other modders get the key from the README, or must they find it themselves? | yes to the setting; do not publish the key in the repo or docs, tell modders to find it themselves (community knows how) |
| Q4 | May we add a DevTools command that reads the game's already-registered key from memory and writes it to a file outside the repo (so the old key does not matter)? | yes, but only on explicit button press, file outside the repo, never logged |
| Q5 | **Stand-in parents** for Blueprints that derive from game classes (section 3, step 3): fine as the workflow, or would you rather have the SDK generator emit a **UE project skeleton** (stub C++ classes for the game types, so parents resolve in the editor)? Larger work, much nicer for modders | stand-ins now (cheap), generator skeleton as later feature after the weapon mod shows how painful it is |
| Q6 | **Builder front end**: a tab in the Mod Manager plus a CLI (`MDMLPackager`/`mdml-build`)? Or CLI only for now? | both, one shared core library (as ModManager Core already works) |
| Q7 | **Pak vs loose output of the builder**: ship loose cooked files until pak mounting (`pak-mods.md`) exists, then switch to `.pak` (same `mod.ini`)? Or hold the builder until paks work? | loose now, pak when mounting lands |
| Q8 | **API home**: content helpers (DataTable, CDO, spawn, sub-level) as a new public header `MDML/Content.h` inside MDML.dll next to `Hooks`/`Mods` (Lua binds it from there), not as a separate CoreMod? | inside MDML.dll, namespace `mdml::content` |
| Q9 | Row edits **idempotence rule**: `AddRow` on an existing key replaces the row (author's pick), or skips with a warning, or is an error? | replace + log once (re-run safe, hot reload friendly) |
| Q10 | The player zip: include the new builder/extractor tabs, or only the DevKit zip (modders)? | DevKit only; player manager hides them |
| Q11 | **Level editing / POIs**: is "spawn Blueprint actors from code at coordinates + sub-levels built in UE" enough as the realistic goal, or do you expect to edit vanilla `.umap` levels? (the latter needs an asset-patching tool and is a separate project) | the first (7.5), vanilla level editing out of scope |
| Q12 | Weapon mod as the **first end-to-end example** (M8) in `Mods/Examples`? Can you provide the old experiment's assets/notes (what you changed on `BP_HoldableItem_Longbow`), so the doc uses real names? | yes; please send the notes or let Live View find the names |
| Q13 | OK to ship a small **sample UE 4.27 project skeleton** (no game assets, only folder layout, `Config/DefaultGame.ini`, the `MDMLModActor` base class once it exists) in the DevKit? | yes |
| Q14 | `[Mod] SaveImpact` (or similar) flag to warn players that a mod adds items/rows saved games depend on? | yes, informational only |
