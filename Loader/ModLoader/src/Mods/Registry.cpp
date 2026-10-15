#include "Core.h"
#include "Mods/Registry.h"
#include "MDML/Mods.h"

namespace mdml::mods {
	Registry& Registry::Get()
	{
		// Never destroyed: mods may still dispatch events while the process exits.
		static Registry* registry = new Registry();
		return *registry;
	}

	// Public API (include/MDML/Mods.h)
	void ForEachMod(const std::function<void(Mod&)>& fn)
	{
		for (auto& mod : Registry::Get().Mods)
			fn(*mod);
	}

	size_t GetModCount()
	{
		return Registry::Get().Mods.size();
	}

	Mod* FindMod(const std::string& name)
	{
		for (auto& mod : Registry::Get().Mods)
			if (mod->Info().Name == name)
				return mod.get();
		return nullptr;
	}

	void MoveToFront(CoreMod* mod)
	{
		Registry::Get().CoreMods.moveToFront(mod);
	}

	void RegisterBPFunction(const std::string& name, void* function)
	{
		if (name.empty() || !function)
			return;
		Registry::Get().BPFunctionWrappers[name] = function;
	}

	// ModAccess (friend of Mod / CoreMod / ModContext)
	Mod& ModAccess::Create(ModInfo info)
	{
		Registry::Get().Mods.push_back(std::make_unique<Mod>(std::move(info)));
		return *Registry::Get().Mods.back();
	}

	void ModAccess::SetCore(Mod& mod, CoreMod* core, HMODULE module)
	{
		mod.m_core = core;
		core->m_mod = &mod;
		core->hModule = module;
	}

	void ModAccess::Fail(Mod& mod, const std::string& reason)
	{
		mod.m_core = nullptr;
		mod.m_blueprint.reset();
		mod.m_overwrite.reset();
		mod.m_failed = true;
		mod.m_failReason = reason;
	}

	BlueprintMod& ModAccess::EnsureBlueprint(Mod& mod)
	{
		if (!mod.m_blueprint)
			mod.m_blueprint = std::make_unique<BlueprintMod>();
		return *mod.m_blueprint;
	}

	OverwriteMod& ModAccess::EnsureOverwrite(Mod& mod)
	{
		if (!mod.m_overwrite)
			mod.m_overwrite = std::make_unique<OverwriteMod>();
		return *mod.m_overwrite;
	}

	ModContext ModAccess::MakeContext(Mod& self)
	{
		return ModContext(self);
	}

	void ModAccess::SetupCore(CoreMod& core, Ref<Logger> logger)
	{
		core.logger = std::move(logger);
	}
}
