#include "Core.h"
#include "UnrealMemory.h"
#include "EngineAddresses.h"
#include "MDML/Log.h"

#include <atomic>
#include <cstdlib>

namespace UE4 {
	namespace {
		using MallocFn = void* (*)(size_t, uint32_t);
		using ReallocFn = void* (*)(void*, size_t, uint32_t);
		using FreeFn = void (*)(void*);

		void WarnCrtFallback() {
			static std::atomic<bool> bWarned{ false };
			if (!bWarned.exchange(true))
				Log::Warn_MDML("FMemory: engine allocator not resolved, using the CRT heap (memory must not be handed to the engine)");
		}
	}

	bool FMemory::IsEngineAllocator() {
		return mdml::Addresses.FMemoryMalloc && mdml::Addresses.FMemoryRealloc && mdml::Addresses.FMemoryFree;
	}

	void* FMemory::Malloc(size_t Count, uint32_t Alignment) {
		if (IsEngineAllocator())
			return reinterpret_cast<MallocFn>(mdml::Addresses.FMemoryMalloc)(Count, Alignment);
		WarnCrtFallback();
		return std::malloc(Count);
	}

	void* FMemory::Realloc(void* Original, size_t Count, uint32_t Alignment) {
		if (IsEngineAllocator())
			return reinterpret_cast<ReallocFn>(mdml::Addresses.FMemoryRealloc)(Original, Count, Alignment);
		WarnCrtFallback();
		return std::realloc(Original, Count);
	}

	void FMemory::Free(void* Original) {
		if (!Original)
			return;
		if (IsEngineAllocator()) {
			reinterpret_cast<FreeFn>(mdml::Addresses.FMemoryFree)(Original);
			return;
		}
		WarnCrtFallback();
		std::free(Original);
	}
}
