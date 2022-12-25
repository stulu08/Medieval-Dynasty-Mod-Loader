#include "ModStack.h"
#include "Mod/Mod.h"

void ModStack::pushMod(Mod* mod) {
    m_mods.emplace(m_mods.begin() + m_insertIndex, mod);
    m_insertIndex++;
}

void ModStack::popMod(Mod* mod) {
    auto it = std::find(m_mods.begin(), m_mods.begin() + m_insertIndex, mod);

    if (it != m_mods.begin() + m_insertIndex) {
        m_mods.erase(it);
        m_insertIndex--;
    }
}
bool ModStack::setCurrentMod(Mod* mod) {
    Mod::ModRef = mod;
    auto it = std::find(m_mods.begin(), m_mods.begin() + m_insertIndex, mod);
    return it != m_mods.end();
}