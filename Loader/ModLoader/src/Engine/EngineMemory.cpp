#include "Core.h"
#include "EngineMemory.h"

namespace mdml::mem {
	// Kept free of C++ objects with destructors so __try/__except is allowed here.
	bool SafeCopy(void* Dest, const void* Source, size_t Size) {
		__try {
			std::memcpy(Dest, Source, Size);
			return true;
		}
		__except (EXCEPTION_EXECUTE_HANDLER) {
			std::memset(Dest, 0, Size);
			return false;
		}
	}
}
