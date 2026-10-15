#include "Core.h"
#include "ModStack.h"
#include "MDML/CoreMod.h"

#include <mutex>

// Locking design: see ModStack.h.
namespace {
    // Per thread and stack: how deep this thread is inside callEvent, and the changes it deferred meanwhile.
    // Only MDML.dll touches this (beginDispatch/endDispatch/applyOrDefer are out of line), so there is one copy.
    struct ThreadDispatch {
        const ModStack* Stack = nullptr;
        int Depth = 0;
        std::vector<std::function<void()>> Deferred;
    };
    thread_local std::vector<ThreadDispatch> t_dispatches;

    ThreadDispatch* FindDispatch(const ModStack* stack) {
        for (ThreadDispatch& d : t_dispatches)
            if (d.Stack == stack)
                return &d;
        return nullptr;
    }
    bool IsDispatching(const ModStack* stack) {
        const ThreadDispatch* d = FindDispatch(stack);
        return d && d->Depth > 0;
    }
}

void ModStack::beginDispatch() {
    ThreadDispatch* d = FindDispatch(this);
    if (!d) {
        t_dispatches.push_back({ this, 0, {} });
        d = &t_dispatches.back();
    }
    // Only the outermost dispatch locks: re-acquiring a shared SRW lock on the same thread can deadlock as soon as
    // another thread waits for the exclusive lock.
    if (d->Depth == 0)
        m_mutex.lock_shared();
    ++d->Depth;
}

void ModStack::endDispatch() {
    ThreadDispatch* d = FindDispatch(this);
    if (!d || d->Depth == 0)
        return;
    if (--d->Depth > 0)
        return;
    m_mutex.unlock_shared();

    std::vector<std::function<void()>> deferred;
    deferred.swap(d->Deferred);
    t_dispatches.erase(t_dispatches.begin() + (d - t_dispatches.data()));
    if (deferred.empty())
        return;
    std::unique_lock<std::shared_mutex> lock(m_mutex);
    for (auto& change : deferred)
        change();
}

void ModStack::applyOrDefer(std::function<void()> change) {
    if (ThreadDispatch* d = FindDispatch(this); d && d->Depth > 0) {
        d->Deferred.push_back(std::move(change));
        return;
    }
    std::unique_lock<std::shared_mutex> lock(m_mutex);
    change();
}

void ModStack::pushMod(CoreMod* mod) {
    applyOrDefer([this, mod]() {
        m_mods.emplace(m_mods.begin() + m_insertIndex, mod);
        m_insertIndex++;
    });
}

void ModStack::popMod(CoreMod* mod) {
    applyOrDefer([this, mod]() {
        auto it = std::find(m_mods.begin(), m_mods.begin() + m_insertIndex, mod);
        if (it != m_mods.begin() + m_insertIndex) {
            m_mods.erase(it);
            m_insertIndex--;
        }
    });
}

void ModStack::registerEvent(Event* event) {
    if (!event)
        return;
    applyOrDefer([this, event]() { m_eventList[event->getName()].push_back(event); });
}

void ModStack::clearModEvents(const std::string& eventName, CoreMod* mod) {
    if (mod == nullptr || eventName.empty())
        return;
    applyOrDefer([this, eventName, mod]() {
        auto found = m_eventList.find(eventName);
        if (found == m_eventList.end())
            return;
        std::vector<Event*>& events = found->second;
        // erase/remove_if instead of erasing inside a range-for (code inventory C5). The exclusive lock guarantees that
        // no thread is dispatching, so the removed events can be deleted (they leaked before Wave 3E).
        auto removed = std::stable_partition(events.begin(), events.end(), [mod](Event* e) { return e->getData() != mod; });
        for (auto it = removed; it != events.end(); ++it)
            delete *it;
        events.erase(removed, events.end());
    });
}

bool ModStack::containsLocked(CoreMod* mod) const {
    auto end = m_mods.begin() + m_insertIndex;
    return std::find(m_mods.begin(), end, mod) != end;
}

bool ModStack::contains(CoreMod* mod) const {
    if (IsDispatching(this))
        return containsLocked(mod); // this thread already holds the shared lock
    std::shared_lock<std::shared_mutex> lock(m_mutex);
    return containsLocked(mod);
}

size_t ModStack::size() const {
    if (IsDispatching(this))
        return m_insertIndex;
    std::shared_lock<std::shared_mutex> lock(m_mutex);
    return m_insertIndex;
}

void ModStack::forEach(const std::function<void(CoreMod*)>& fn) {
    DispatchScope scope(*this);
    // Safe to iterate: changes are deferred while this thread is inside the scope.
    for (uint32_t i = 0; i < m_insertIndex; i++)
        fn(m_mods[i]);
}

CoreMod* ModStack::find(const std::string& name) const {
    auto findLocked = [this, &name]() -> CoreMod* {
        for (uint32_t i = 0; i < m_insertIndex; i++)
            if (m_mods[i]->GetName() == name)
                return m_mods[i];
        return nullptr;
    };
    if (IsDispatching(this))
        return findLocked();
    std::shared_lock<std::shared_mutex> lock(m_mutex);
    return findLocked();
}

void ModStack::moveToFront(CoreMod* mod) {
    applyOrDefer([this, mod]() {
        auto end = m_mods.begin() + m_insertIndex;
        auto it = std::find(m_mods.begin(), end, mod);
        if (it != end)
            std::rotate(m_mods.begin(), it, it + 1);
    });
}
