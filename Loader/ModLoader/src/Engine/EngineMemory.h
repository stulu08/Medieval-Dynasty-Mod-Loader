#pragma once
#include "Core.h"
#include <cstring>

// Memory access for the hand-written engine core (Wave 3D, decision 2026-10-09 "direct memory access").
//
// The core used to read/write engine memory through Platform/Memory.h `Read`/`Write`, which do one
// ReadProcessMemory/WriteProcessMemory syscall per access on the own process. Those quietly return zero on a bad
// address. The core now uses plain in-process loads/stores (bitwise copies, like before, so no copy constructors run):
//  * Load/Store: the address is known to be valid (an object the engine handed us + a PDB-checked offset).
//  * LoadField: same, but a null base returns a value-initialized T, the one "soft failure" callers relied on.
//  * SafeRead: SEH-guarded copy for memory whose validity is unknown (EngineDefFinder's fallback scan, invariant
//    checks on objects found by name). Only use it where scanning genuinely needs it.
// Platform/Memory.h stays for the generated SDK (its member getters/setters use Read/Write).
namespace mdml::mem {
	template<typename T>
	inline T Load(const void* Address) {
		T Value{};
		std::memcpy(static_cast<void*>(&Value), Address, sizeof(T));
		return Value;
	}

	template<typename T>
	inline T LoadField(const void* Base, size_t Offset) {
		if (!Base)
			return T{};
		return Load<T>(static_cast<const uint8_t*>(Base) + Offset);
	}

	template<typename T>
	inline void Store(void* Address, const T& Value) {
		std::memcpy(Address, static_cast<const void*>(&Value), sizeof(T));
	}

	template<typename T>
	inline void StoreField(void* Base, size_t Offset, const T& Value) {
		if (Base)
			Store<T>(static_cast<uint8_t*>(Base) + Offset, Value);
	}

	// Copies Size bytes; false (Dest zeroed) if the source is not readable. Defined in EngineMemory.cpp (SEH).
	MDML_ENGINE_API bool SafeCopy(void* Dest, const void* Source, size_t Size);

	template<typename T>
	inline bool SafeRead(const void* Address, T& Out) {
		return Address && SafeCopy(static_cast<void*>(&Out), Address, sizeof(T));
	}

	template<typename T>
	inline T SafeLoad(const void* Address) {
		T Value{};
		SafeRead(Address, Value);
		return Value;
	}
}
