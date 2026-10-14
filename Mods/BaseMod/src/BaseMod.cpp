#include "BaseMod.h"

namespace MDMLBase {
	void Mod::OnModInitialize() {
		// Move BaseMod to the front of the core mod list (the loader also loads it first). Locked API (Wave 4, 3E-Q3):
		// called from InitializeMod, i.e. inside the loader's iteration, so the move is applied right after it.
		mdml::mods::MoveToFront(this);
	}
}
