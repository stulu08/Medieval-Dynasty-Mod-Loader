#include "MDML/MDML.h"

// Test mod for the mod model (docs/design/mod-components.md phase 1): a Core + Overwrite mod. OnLoad (load phase 1) adds a
// file to the mod's own [Overwrite] component; the loader links it in phase 2. InitializeMod (engine ready) checks that
// both the file from the [Overwrite] Folder and the added one exist in the game's Content folder.
class OverwriteTestMod : public CoreMod {
public:
	void OnLoad(ModContext& ctx) override {
		const std::filesystem::path source = std::filesystem::path(GetFolder()) / "Extra" / "AddedByCore.txt";
		const bool added = ctx.AddOverwriteFile(ctx.Self(), source, "MDMLTest/AddedByCore.txt");
		if (logger)
			logger->Info("OnLoad: AddOverwriteFile({0}) = {1}, {2} overwrite file(s) now", source.string(), added, GetMod().Overwrite() ? GetMod().Overwrite()->Files.size() : 0);
	}

	void InitializeMod() override {
		if (!logger)
			return;
		const std::filesystem::path content = std::filesystem::path(GetContentFolder());
		for (const char* file : { "MDMLTest/FromFolder.txt", "MDMLTest/AddedByCore.txt" })
			logger->Info("{0}: {1}", file, std::filesystem::exists(content / file) ? "linked" : "MISSING");
		const OverwriteMod* overwrite = GetMod().Overwrite();
		logger->Info("Linked by the loader: {0}", overwrite ? overwrite->Linked.size() : 0);
	}
};

MDML_MOD(OverwriteTestMod)
