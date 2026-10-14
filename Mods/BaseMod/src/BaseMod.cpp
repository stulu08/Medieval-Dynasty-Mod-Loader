#include "BaseMod.h"

namespace MDMLBase {
	void Mod::OnModInitialize() {
		// Move BaseMod to the front of the core mod stack (the loader also loads it first).
		auto& coreMods = Global::GetGlobals()->CoreMods;
		if (coreMods.size() > 0 && coreMods[0] != this) {
			auto baseModIt = std::find(coreMods.begin(), coreMods.end(), this);
			if (baseModIt != coreMods.end()) {
				std::rotate(coreMods.begin(), baseModIt, baseModIt + 1);
			}
		}
	}
}
