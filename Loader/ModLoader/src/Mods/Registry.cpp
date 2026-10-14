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
		Registry::Get().CoreMods.forEach([&fn](Mod* mod) { fn(*mod); });
	}

	size_t GetModCount()
	{
		return Registry::Get().CoreMods.size();
	}

	Mod* FindMod(const std::string& name)
	{
		return Registry::Get().CoreMods.find(name);
	}

	void MoveToFront(Mod* mod)
	{
		Registry::Get().CoreMods.moveToFront(mod);
	}

	void RegisterBPFunction(const std::string& name, void* function)
	{
		if (name.empty() || !function)
			return;
		Registry::Get().BPFunctionWrappers[name] = function;
	}
}
