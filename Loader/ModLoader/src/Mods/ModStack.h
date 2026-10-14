#pragma once
#include <map>
#include <string>
#include <string_view>
#include <vector>
#include <windows.h>
#include <functional>
#include <shared_mutex>

#include "MDML/Log.h"


class Mod;

class Event {
public:
    // Virtual: ModStack deletes events it unregistered through Event* (Wave 3E).
    virtual ~Event() = default;
    virtual const std::string& getName() const = 0;
    virtual const void* getData() const = 0;
};

template <typename ...args>
class ModEvent : public Event
{
public:
    using event_callback = std::function<bool(args...)>;

    explicit ModEvent(Mod* mod, const std::string& name, const event_callback& cb) : m_name(name), m_mod(mod), m_callback(cb) {}
    ~ModEvent() override {}

    bool dispatch(args... a) { return m_callback(a...); }

    virtual const std::string& getName() const override { return this->m_name; }
    virtual const void* getData() const override { return this->m_mod; }
    virtual Mod* getMod() { return this->m_mod; }
private:
    Mod* m_mod;
    std::string m_name;
    const event_callback m_callback;
};


// The core mods (load order) and their event handlers.
//
// Thread safety (Wave 3E, owner decision 2026-10-14 "dispatch shared, registration exclusive"):
// - callEvent holds m_mutex SHARED for the whole dispatch, so the game thread (InitGameState/BeginPlay/Tick/
//   PostBeginPlay) and the render thread (SetupImGui/DrawImGui/DX11*) can dispatch at the same time.
// - registerEvent / clearModEvents / pushMod / popMod take it EXCLUSIVE: they wait until no thread is dispatching,
//   so once they return no other thread is still inside a handler they removed. That makes deleting removed events
//   safe (they leaked before).
// - Called from inside a handler (same thread, e.g. a mod calling SetupHooks in its Tick, or popMod after a handler
//   threw), a change cannot take the exclusive lock (the thread already holds it shared; std::shared_mutex is not
//   recursive) and would also invalidate the vector being iterated. Such changes are DEFERRED: queued per thread and
//   applied, in order, right after that thread's outermost callEvent returns. Nested callEvent on the same thread
//   (a handler that triggers another event) reuses the outer shared lock instead of locking again.
// - Semantics are unchanged: handlers run in registration order, returning true stops propagation, a throwing mod
//   is removed from the stack (it gets no further events once the removal is applied).
// - forEach/size/find/contains/moveToFront are synchronized the same way (Wave 4, 3E-Q3: replaced the raw
//   begin()/end()/operator[] accessors). forEach behaves like a dispatch (shared lock, nested calls and changes from
//   inside it are deferred until it returns).
// Loader-internal since Wave 4 (not exported); mods use include/MDML/Mods.h.
class ModStack {
public:
    ModStack() {}
    ~ModStack() {}
    ModStack(const ModStack&) = delete;
    ModStack& operator=(const ModStack&) = delete;

    void push_back(Mod* mod) { pushMod(mod); }
    void pushMod(Mod* mod);
    void popMod(Mod* mod);

    size_t size() const;
    // Calls fn for every mod in load order under the shared lock (see above).
    void forEach(const std::function<void(Mod*)>& fn);
    // The mod with this ModName, or null.
    Mod* find(const std::string& name) const;
    // Moves the mod to index 0 (applied now, or deferred while this thread dispatches).
    void moveToFront(Mod* mod);

    template <typename ..._args>
    void callEvent(const std::string& eventName, _args...a) {
        DispatchScope scope(*this);
        auto it_eventList = m_eventList.find(eventName);
        if (it_eventList == m_eventList.end())
            return;
        // Safe to iterate: changes to m_eventList are deferred while this thread dispatches and wait for the lock on others.
        for (auto eventIt : it_eventList->second)
        {
            if (ModEvent<_args...>* event = dynamic_cast<ModEvent<_args...>*>(eventIt)) {
                // A mod removed from the stack (it threw) gets no more events.
                if (!containsLocked(event->getMod()))
                    continue;

                try {
                    if (event->dispatch(a...))
                        break;//event was handled if returned true
                }
                catch (std::exception& ex) {
                    Log::Error_MDML("Exception thrown in {0} from mod {1}: {2}", event->getName(), event->getMod()->ModName, ex.what());
                    Log::Warn_MDML("Removing mod {0} from modstack", event->getMod()->ModName);
                    this->popMod(event->getMod());
                }
                catch (int code) {
                    Log::Error_MDML("Exception thrown in {0} from mod {1}, exception code: {2}", event->getName(), event->getMod()->ModName, code);
                    Log::Warn_MDML("Removing mod {0} from modstack", event->getMod()->ModName);
                    this->popMod(event->getMod());
                }
                catch (const char* str) {
                    Log::Error_MDML("Exception thrown in {0} from mod {1}: {2}", event->getName(), event->getMod()->ModName, str);
                    Log::Warn_MDML("Removing mod {0} from modstack", event->getMod()->ModName);
                    this->popMod(event->getMod());
                }
                catch (std::string str) {
                    Log::Error_MDML("Exception thrown in {0} from mod {1}: {2}", event->getName(), event->getMod()->ModName, str);
                    Log::Warn_MDML("Removing mod {0} from modstack", event->getMod()->ModName);
                    this->popMod(event->getMod());
                }
                catch (...) {
                    Log::Error_MDML("Exception thrown in {0} from mod {1}", event->getName(), event->getMod()->ModName);
                    Log::Warn_MDML("Removing mod {0} from modstack", event->getMod()->ModName);
                    this->popMod(event->getMod());
                }
            }
        }
    }
    // Takes ownership of the event (deleted when it is unregistered again).
    void registerEvent(Event* event);
    // Unregisters (and deletes) the mod's handler for eventName (Mod::SetupHooks calls it before registering again).
    void clearModEvents(const std::string& eventName, Mod* mod);
    // True while the mod is in the stack (not popped after an exception).
    bool contains(Mod* mod) const;
private:
    // RAII around one callEvent: the outermost dispatch on a thread takes m_mutex shared; the end of it releases the
    // lock and applies the changes this thread deferred meanwhile (exclusive).
    struct DispatchScope {
        explicit DispatchScope(ModStack& stack) : m_stack(stack) { m_stack.beginDispatch(); }
        ~DispatchScope() { m_stack.endDispatch(); }
        DispatchScope(const DispatchScope&) = delete;
        DispatchScope& operator=(const DispatchScope&) = delete;
        ModStack& m_stack;
    };
    void beginDispatch();
    void endDispatch();
    // Runs `change` under the exclusive lock now, or defers it if this thread is inside callEvent.
    void applyOrDefer(std::function<void()> change);
    // Caller holds m_mutex (either mode).
    bool containsLocked(Mod* mod) const;

    std::map<std::string, std::vector<Event*>> m_eventList;
    std::vector<Mod*> m_mods;
    uint32_t m_insertIndex = 0;
    mutable std::shared_mutex m_mutex;
};
