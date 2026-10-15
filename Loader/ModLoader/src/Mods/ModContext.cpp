#include "Core.h"
#include "MDML/Mod.h"
#include "MDML/CoreMod.h"
#include "MDML/Log.h"
#include "Mods/Registry.h"
#include "MDML/Mods.h"

// The Mod container and the ModContext handed to CoreMod::OnLoad (mod-components phase 1).
Mod::Mod(ModInfo info) : m_info(std::move(info)) {}
Mod::~Mod() = default;

namespace {
	using mdml::mods::LoadPhase;
	using mdml::mods::Registry;

	bool IsBefore(LoadPhase limit) {
		return Registry::Get().Phase < limit;
	}

	// NTFS is case-insensitive
	std::string Lower(std::string text) {
		for (auto& c : text)
			c = (char)tolower((unsigned char)c);
		return text;
	}

	// Relative path inside Content, backslashes, no "." / "..". Empty if the path is not usable.
	std::string NormalizeTarget(const std::string& gameRelativePath) {
		std::filesystem::path path = std::filesystem::path(gameRelativePath).lexically_normal();
		if (path.empty() || path.has_root_path() || path.is_absolute() || path.filename().empty())
			return {};
		for (const auto& part : path)
			if (part == "..")
				return {};
		return path.make_preferred().string();
	}
}

void ModContext::ForEachMod(const std::function<void(Mod&)>& fn) {
	for (auto& mod : Registry::Get().Mods)
		fn(*mod);
}

Mod* ModContext::FindMod(const std::string& name) {
	return mdml::mods::FindMod(name);
}

bool ModContext::AddOverwriteFile(Mod& target, const std::filesystem::path& source, const std::string& gameRelativePath) {
	if (!IsBefore(LoadPhase::Overwrite)) {
		Log::Error_MDML("Mod {0}: AddOverwriteFile is only allowed in OnLoad (load phase 1), the overwrite files are final", m_self.Info().Name);
		return false;
	}
	if (target.Failed()) {
		Log::Error_MDML("Mod {0}: cannot add an overwrite file to mod {1}, it failed to load", m_self.Info().Name, target.Info().Name);
		return false;
	}
	std::error_code ec;
	if (!std::filesystem::is_regular_file(source, ec)) {
		Log::Error_MDML("Mod {0}: cannot add overwrite file {1}, it is not an existing file", m_self.Info().Name, source.string());
		return false;
	}
	const std::string normalized = NormalizeTarget(gameRelativePath);
	if (normalized.empty()) {
		Log::Error_MDML("Mod {0}: cannot add overwrite file, '{1}' is not a path inside the game's Content folder", m_self.Info().Name, gameRelativePath);
		return false;
	}
	OverwriteMod& overwrite = mdml::mods::ModAccess::EnsureOverwrite(target);
	const std::string key = Lower(normalized);
	for (OverwriteFile& file : overwrite.Files) {
		if (Lower(file.Target) == key) {
			file.Source = source;
			Log::Info_MDML("Mod {0}: replaced the overwrite file {1} of mod {2}", m_self.Info().Name, normalized, target.Info().Name);
			return true;
		}
	}
	overwrite.Files.push_back({ source, normalized });
	Log::Info_MDML("Mod {0}: added overwrite file {1} to mod {2}", m_self.Info().Name, normalized, target.Info().Name);
	return true;
}

bool ModContext::RemoveOverwriteFile(Mod& target, const std::string& gameRelativePath) {
	if (!IsBefore(LoadPhase::Overwrite)) {
		Log::Error_MDML("Mod {0}: RemoveOverwriteFile is only allowed in OnLoad (load phase 1), the overwrite files are final", m_self.Info().Name);
		return false;
	}
	OverwriteMod* overwrite = target.Overwrite();
	const std::string key = Lower(NormalizeTarget(gameRelativePath));
	if (!overwrite || key.empty())
		return false;
	auto it = std::find_if(overwrite->Files.begin(), overwrite->Files.end(), [&key](const OverwriteFile& file) { return Lower(file.Target) == key; });
	if (it == overwrite->Files.end())
		return false;
	Log::Info_MDML("Mod {0}: removed overwrite file {1} from mod {2}", m_self.Info().Name, it->Target, target.Info().Name);
	overwrite->Files.erase(it);
	return true;
}

BlueprintMod& ModContext::EditBlueprint(Mod& target) {
	if (!IsBefore(LoadPhase::Blueprint)) {
		Log::Error_MDML("Mod {0}: EditBlueprint is only allowed in OnLoad (load phase 1), the Blueprint components are final", m_self.Info().Name);
		static thread_local BlueprintMod scratch;
		scratch = BlueprintMod();
		return scratch;
	}
	if (target.Failed()) {
		Log::Error_MDML("Mod {0}: cannot edit the Blueprint component of mod {1}, it failed to load", m_self.Info().Name, target.Info().Name);
		static thread_local BlueprintMod scratch;
		scratch = BlueprintMod();
		return scratch;
	}
	return mdml::mods::ModAccess::EnsureBlueprint(target);
}
