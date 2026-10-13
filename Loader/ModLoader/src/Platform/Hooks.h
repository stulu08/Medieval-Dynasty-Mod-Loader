#pragma once
#include "Core.h"

#include <type_traits>

// Function hooks (inline detours) for the loader and for core mods. MDML.dll owns the only MinHook instance
// (MH_Initialize/MH_Uninitialize); mods use this API instead of linking MinHook themselves.
//
// Every hook is identified by its target address (MinHook allows one hook per target) and carries a display name
// for the log. The owner is the module (DLL) that contains the detour function, i.e. the mod that installed the hook,
// so all hooks of a mod can be removed before that mod's DLL is unloaded (RemoveAll). Every call is thread-safe and
// logged with name, owner and target.
//
// Usage from a mod (the detour and the original pointer live in the mod):
//
//     static bool(*origFoo)(void* self);
//     static bool hookFoo(void* self) { ...; return origFoo(self); }
//
//     mdml::platform::Hooks::Add(fooAddress, &hookFoo, &origFoo, "AFoo::Foo");   // create + enable
//     mdml::platform::Hooks::Disable(fooAddress);                                // temporarily off, origFoo stays valid
//     mdml::platform::Hooks::Enable(fooAddress);
//     mdml::platform::Hooks::Remove(fooAddress);                                 // gone, origFoo must not be called any more
//
// Targets can be given as pointers or as integer addresses (DWORD64/uintptr_t), like mdml::Addresses.
namespace mdml::platform {
	enum class HookStatus {
		Ok = 0,
		NotInitialized,  // MinHook is not initialized (before the loader setup or after shutdown)
		InvalidArgument, // null target/detour (e.g. an address that was not resolved)
		AlreadyHooked,   // the target already has a hook (from this or another module)
		NotHooked,       // Enable/Disable/Remove on a target without a hook
		MinHookError,    // MinHook rejected the call; the log line has MinHook's status text
	};

	LOADER_API const char* ToString(HookStatus status);

	class LOADER_API Hooks {
	public:
		// Creates the hook and enables it (what almost every caller wants).
		// On success *original receives the trampoline that calls the original function; original may be null.
		template <typename TTarget, typename TDetour, typename TOriginal>
		static HookStatus Add(TTarget target, TDetour detour, TOriginal** original, const std::string& name) {
			return CreateHook(ToAddress(target), ToAddress(detour), reinterpret_cast<void**>(original), name, true);
		}
		// Creates the hook but leaves it disabled; call Enable later. *original is already valid afterwards.
		template <typename TTarget, typename TDetour, typename TOriginal>
		static HookStatus Create(TTarget target, TDetour detour, TOriginal** original, const std::string& name) {
			return CreateHook(ToAddress(target), ToAddress(detour), reinterpret_cast<void**>(original), name, false);
		}

		template <typename TTarget>
		static HookStatus Enable(TTarget target) { return EnableHook(ToAddress(target)); }
		template <typename TTarget>
		static HookStatus Disable(TTarget target) { return DisableHook(ToAddress(target)); }
		// Disables and deletes the hook. The trampoline (*original) is freed: never call it afterwards.
		template <typename TTarget>
		static HookStatus Remove(TTarget target) { return RemoveHook(ToAddress(target)); }

		// Removes every hook whose detour lives in `owner` (a mod's HMODULE). Returns the number of removed hooks.
		// Meant for unloading a mod (hot reload): call it before FreeLibrary.
		static size_t RemoveAll(HMODULE owner);

		static bool IsHooked(const void* target);
		static bool IsInitialized();

		// Loader only (Bootstrap/Startup.cpp): the single MH_Initialize / MH_Uninitialize of the process. Mods must not call these.
		static bool Initialize();
		static void Shutdown();

	private:
		// Pointers (incl. function pointers) and integer addresses (DWORD64, uintptr_t) -> void*
		template <typename TTarget>
		static void* ToAddress(TTarget target) {
			if constexpr (std::is_pointer_v<TTarget>)
				return (void*)target;
			else {
				static_assert(std::is_integral_v<TTarget>, "hook target/detour must be a pointer or an integer address");
				return reinterpret_cast<void*>(static_cast<uintptr_t>(target));
			}
		}

		static HookStatus CreateHook(void* target, void* detour, void** original, const std::string& name, bool enable);
		static HookStatus EnableHook(void* target);
		static HookStatus DisableHook(void* target);
		static HookStatus RemoveHook(void* target);
	};
}
