#pragma once
#include "Core.h"

namespace UE4 {

	template<int32_t Size, uint32_t Alignment>
	struct TAlignedBytes; // this intentionally won't compile, we don't support the requested alignment
	/** Unaligned storage. */
	template<int32_t Size>
	struct TAlignedBytes<Size, 1>
	{
		uint8_t Pad[Size];
	};
	// Alignment.
#if defined(__clang__)
#define GCC_PACK(n) __attribute__((packed,aligned(n)))
#define GCC_ALIGN(n) __attribute__((aligned(n)))
#if defined(_MSC_VER)
#define MS_ALIGN(n) __declspec(align(n)) // With -fms-extensions, Clang will accept either alignment attribute
#endif
#else
#define MS_ALIGN(n) __declspec(align(n))
#endif
#ifndef GCC_ALIGN
#define GCC_ALIGN(n)
#endif
// C++/CLI doesn't support alignment of native types in managed code, so we enforce that the element
// size is a multiple of the desired alignment
#ifdef __cplusplus_cli
#define IMPLEMENT_ALIGNED_STORAGE(Align) \
		template<int32_t Size>        \
		struct TAlignedBytes<Size,Align> \
		{ \
			uint8_t Pad[Size]; \
			static_assert(Size % Align == 0, "CLR interop types must not be aligned."); \
		};
#else
/** A macro that implements TAlignedBytes for a specific alignment. */
#define IMPLEMENT_ALIGNED_STORAGE(Align) \
	template<int32_t Size>        \
	struct TAlignedBytes<Size,Align> \
	{ \
		struct MS_ALIGN(Align) TPadding \
		{ \
			uint8_t Pad[Size]; \
		} GCC_ALIGN(Align); \
		TPadding Padding; \
	};
#endif

// Implement TAlignedBytes for these alignments.
	IMPLEMENT_ALIGNED_STORAGE(16);
	IMPLEMENT_ALIGNED_STORAGE(8);
	IMPLEMENT_ALIGNED_STORAGE(4);
	IMPLEMENT_ALIGNED_STORAGE(2);

}