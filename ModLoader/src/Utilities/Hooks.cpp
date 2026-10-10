#include "Core.h"
#include "Hooks.h"

#include "Utilities/Logger.h"
#include "include/MinHook.h"

#include <mutex>

namespace mdml {
	namespace {
		struct HookRecord {
			std::string name;
			HMODULE owner = nullptr;   // module that contains the detour
			std::string ownerName;
			void* detour = nullptr;
			bool enabled = false;
		};

		// Guards s_hooks and serializes all MinHook calls made through this API.
		std::mutex s_mutex;
		std::map<void*, HookRecord> s_hooks;
		bool s_initialized = false;

		HMODULE ModuleFromAddress(const void* address) {
			HMODULE module = nullptr;
			if (!address || !GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
				(LPCWSTR)address, &module))
				return nullptr;
			return module;
		}

		// "BaseMod" for ...\Mods\BaseMod\BaseMod.dll, "MDML" for MDML.dll.
		std::string ModuleName(HMODULE module) {
			if (!module)
				return "<unknown module>";
			wchar_t path[MAX_PATH] = {};
			if (!GetModuleFileNameW(module, path, MAX_PATH))
				return "<unknown module>";
			return std::filesystem::path(path).stem().string();
		}

		// "Medieval_Dynasty-Win64-Shipping+0x1A2B3C (0x7FF6...)" or just the absolute address outside of any module.
		std::string DescribeAddress(const void* address) {
			char buffer[64];
			snprintf(buffer, sizeof(buffer), "0x%llX", (unsigned long long)(uintptr_t)address);
			HMODULE module = ModuleFromAddress(address);
			if (!module)
				return buffer;
			char offset[32];
			snprintf(offset, sizeof(offset), "+0x%llX", (unsigned long long)((uintptr_t)address - (uintptr_t)module));
			return ModuleName(module) + offset + " (" + buffer + ")";
		}

		std::string Describe(void* target, const HookRecord& hook) {
			return "'" + hook.name + "' (owner " + hook.ownerName + ", target " + DescribeAddress(target) + ")";
		}
	}

	const char* ToString(HookStatus status) {
		switch (status) {
		case HookStatus::Ok: return "Ok";
		case HookStatus::NotInitialized: return "NotInitialized";
		case HookStatus::InvalidArgument: return "InvalidArgument";
		case HookStatus::AlreadyHooked: return "AlreadyHooked";
		case HookStatus::NotHooked: return "NotHooked";
		case HookStatus::MinHookError: return "MinHookError";
		}
		return "Unknown";
	}

	bool Hooks::Initialize() {
		std::lock_guard<std::mutex> lock(s_mutex);
		if (s_initialized)
			return true;
		const MH_STATUS status = MH_Initialize();
		if (status != MH_OK) {
			Log::Error_UML("Failed to initialize MinHook: {0}", MH_StatusToString(status));
			return false;
		}
		s_initialized = true;
		return true;
	}

	// Same sequence as before the hook API: disable everything, then uninitialize (frees all trampolines).
	// Runs in DLL_PROCESS_DETACH, possibly before the logger exists -> no logging here.
	void Hooks::Shutdown() {
		std::lock_guard<std::mutex> lock(s_mutex);
		MH_DisableHook(MH_ALL_HOOKS);
		MH_Uninitialize();
		s_hooks.clear();
		s_initialized = false;
	}

	bool Hooks::IsInitialized() {
		std::lock_guard<std::mutex> lock(s_mutex);
		return s_initialized;
	}

	bool Hooks::IsHooked(const void* target) {
		std::lock_guard<std::mutex> lock(s_mutex);
		return s_hooks.find(const_cast<void*>(target)) != s_hooks.end();
	}

	HookStatus Hooks::CreateHook(void* target, void* detour, void** original, const std::string& name, bool enable) {
		HookRecord hook;
		hook.name = name.empty() ? "<unnamed>" : name;
		hook.owner = ModuleFromAddress(detour);
		hook.ownerName = ModuleName(hook.owner);
		hook.detour = detour;

		if (!target) {
			Log::Error_MDML("Skipping hook {0}: target address was not resolved", Describe(target, hook));
			return HookStatus::InvalidArgument;
		}
		if (!detour) {
			Log::Error_MDML("Skipping hook {0}: no detour function", Describe(target, hook));
			return HookStatus::InvalidArgument;
		}

		std::lock_guard<std::mutex> lock(s_mutex);
		if (!s_initialized) {
			Log::Error_MDML("Failed to create hook {0}: MinHook is not initialized", Describe(target, hook));
			return HookStatus::NotInitialized;
		}
		auto existing = s_hooks.find(target);
		if (existing != s_hooks.end()) {
			Log::Error_MDML("Failed to create hook {0}: target is already hooked by {1}", Describe(target, hook), Describe(target, existing->second));
			return HookStatus::AlreadyHooked;
		}

		MH_STATUS status = MH_CreateHook(target, detour, original);
		if (status != MH_OK) {
			Log::Error_MDML("Failed to create hook {0}: {1}", Describe(target, hook), MH_StatusToString(status));
			return status == MH_ERROR_ALREADY_CREATED ? HookStatus::AlreadyHooked : HookStatus::MinHookError;
		}

		if (enable) {
			status = MH_EnableHook(target);
			if (status != MH_OK) {
				Log::Error_MDML("Failed to enable hook {0}: {1}", Describe(target, hook), MH_StatusToString(status));
				// Don't leave a half-installed hook behind; the trampoline is gone with it.
				MH_RemoveHook(target);
				if (original)
					*original = nullptr;
				return HookStatus::MinHookError;
			}
			hook.enabled = true;
		}

		Log::Info_MDML("{0} hook {1}", enable ? "Added" : "Created (disabled)", Describe(target, hook));
		s_hooks.emplace(target, std::move(hook));
		return HookStatus::Ok;
	}

	HookStatus Hooks::EnableHook(void* target) {
		std::lock_guard<std::mutex> lock(s_mutex);
		auto it = s_hooks.find(target);
		if (it == s_hooks.end()) {
			Log::Error_MDML("Failed to enable hook at {0}: no hook was created there", DescribeAddress(target));
			return HookStatus::NotHooked;
		}
		if (it->second.enabled)
			return HookStatus::Ok;
		const MH_STATUS status = MH_EnableHook(target);
		if (status != MH_OK) {
			Log::Error_MDML("Failed to enable hook {0}: {1}", Describe(target, it->second), MH_StatusToString(status));
			return HookStatus::MinHookError;
		}
		it->second.enabled = true;
		Log::Info_MDML("Enabled hook {0}", Describe(target, it->second));
		return HookStatus::Ok;
	}

	HookStatus Hooks::DisableHook(void* target) {
		std::lock_guard<std::mutex> lock(s_mutex);
		auto it = s_hooks.find(target);
		if (it == s_hooks.end()) {
			Log::Error_MDML("Failed to disable hook at {0}: no hook was created there", DescribeAddress(target));
			return HookStatus::NotHooked;
		}
		if (!it->second.enabled)
			return HookStatus::Ok;
		const MH_STATUS status = MH_DisableHook(target);
		if (status != MH_OK) {
			Log::Error_MDML("Failed to disable hook {0}: {1}", Describe(target, it->second), MH_StatusToString(status));
			return HookStatus::MinHookError;
		}
		it->second.enabled = false;
		Log::Info_MDML("Disabled hook {0}", Describe(target, it->second));
		return HookStatus::Ok;
	}

	HookStatus Hooks::RemoveHook(void* target) {
		std::lock_guard<std::mutex> lock(s_mutex);
		auto it = s_hooks.find(target);
		if (it == s_hooks.end()) {
			Log::Error_MDML("Failed to remove hook at {0}: no hook was created there", DescribeAddress(target));
			return HookStatus::NotHooked;
		}
		const MH_STATUS status = MH_RemoveHook(target);
		if (status != MH_OK) {
			Log::Error_MDML("Failed to remove hook {0}: {1}", Describe(target, it->second), MH_StatusToString(status));
			return HookStatus::MinHookError;
		}
		Log::Info_MDML("Removed hook {0}", Describe(target, it->second));
		s_hooks.erase(it);
		return HookStatus::Ok;
	}

	size_t Hooks::RemoveAll(HMODULE owner) {
		if (!owner)
			return 0;
		std::lock_guard<std::mutex> lock(s_mutex);
		size_t removed = 0;
		for (auto it = s_hooks.begin(); it != s_hooks.end();) {
			if (it->second.owner != owner) {
				++it;
				continue;
			}
			const MH_STATUS status = MH_RemoveHook(it->first);
			if (status != MH_OK) {
				Log::Error_MDML("Failed to remove hook {0}: {1}", Describe(it->first, it->second), MH_StatusToString(status));
				++it;
				continue;
			}
			Log::Info_MDML("Removed hook {0}", Describe(it->first, it->second));
			it = s_hooks.erase(it);
			++removed;
		}
		return removed;
	}
}
