#pragma once
// Runtime support for the MDML-generated SDK headers (DevTools -> MDMLGenerator, docs/SDK_GENERATOR.md).
// Hand-written core, compiled into MDML.dll; the out-of-line helpers are exported with MDML_ENGINE_API.
//
// Contract with the generator (keep both sides in sync, see DevTools/src/Generator/MDMLGenerator.cpp):
//  * UClasses are offset-free "views": every reflected member is an accessor (MSVC __declspec(property)) whose
//    offset is resolved by property NAME on first use and cached per accessor. The dump-time offset is only a
//    fallback (logged) when the property does not exist any more. A size mismatch between the generated type and the
//    live property disables the accessor (reads/writes go to a harmless sink, logged once) instead of corrupting memory.
//  * ScriptStructs have a real layout (static_assert'ed against the dump) because they are used by value.
//  * Functions go through CallFunction: the UFunction is looked up by name, ParmsSize and every parameter
//    (name, offset, size) are validated against the live UFunction on first call; on mismatch the call is skipped
//    and an error is logged.
// Nothing in here may read SDK::SelectedGameProfile directly; only the public core API is used.

#include "Core.h"
#include "CoreUObject/UnrealType.h"
#include "CoreUObject/Interface.h"
#include "Containers/Map.h"
#include "Containers/Pointers.h"
#include "Containers/String.h"
#include "Containers/Text.h"

#include <atomic>
#include <cstddef>
#include <cstdint>

namespace mdml::sdk {
	// ---------------------------------------------------------------------------------------------------------------
	// Descriptors (constexpr, emitted by the generator) and caches (one static per accessor / function / class)
	// ---------------------------------------------------------------------------------------------------------------
	struct FMemberDesc {
		const char* OwnerName;    // raw UE name of the declaring class, e.g. "BP_BaseCharacter_C"
		const char* PropertyName; // raw UE property name, e.g. "InventoryComponent"
		int32_t DumpOffset;       // offset at generation time (fallback only)
		int32_t ElementSize;      // sizeof(generated type), checked against FProperty::ElementSize
		int32_t ArrayDim;         // 1, or the static array size
	};

	enum : int32_t {
		SlotUnresolved = 0,
		SlotResolved = 1, // Offset is valid (live offset, or logged dump-offset fallback)
		SlotDisabled = 2, // mismatch: accessor uses the sink
	};

	struct FMemberSlot {
		std::atomic<int32_t> State{ SlotUnresolved };
		int32_t Offset = 0;
		std::atomic<bool> bNullLogged{ false };
	};

	struct FBitDesc {
		const char* OwnerName;
		const char* PropertyName;
		int32_t DumpOffset;       // byte that holds the bit (property offset + byte offset)
		uint8_t DumpMask;         // mask inside that byte
	};

	struct FBitSlot {
		std::atomic<int32_t> State{ SlotUnresolved };
		int32_t Offset = 0;
		uint8_t Mask = 0;
		std::atomic<bool> bNullLogged{ false };
	};

	struct FParamDesc {
		const char* Name;  // raw UE parameter name
		int32_t Offset;
		int32_t Size;      // ElementSize * ArrayDim
	};

	enum EFunctionDescFlags : uint32_t {
		FunctionDesc_None = 0,
		FunctionDesc_Static = 1 << 0,  // called on the class default object
		FunctionDesc_Dynamic = 1 << 1, // interface function: looked up on the object's class at every call
	};

	struct FFunctionDesc {
		const char* OwnerName;    // raw UE name of the declaring class
		const char* FunctionName; // raw UE function name
		int32_t DumpParmsSize;    // end of the last parameter at generation time (informational)
		int32_t BufferSize;       // sizeof(generated parameter struct), must be >= live ParmsSize
		const FParamDesc* Params;
		int32_t NumParams;
		uint32_t Flags;
	};

	struct FFunctionSlot {
		std::atomic<int32_t> State{ SlotUnresolved };
		std::atomic<UE4::UFunction*> Function{ nullptr };
	};

	struct FObjectSlot {
		std::atomic<UE4::UObject*> Object{ nullptr };
	};

	// ---------------------------------------------------------------------------------------------------------------
	// Exported helpers (GeneratedSupport.cpp)
	// ---------------------------------------------------------------------------------------------------------------

	// Resolves Slot from Object's class chain (finds the class named Desc.OwnerName, then its own property).
	// Returns the new state; stays SlotUnresolved when Object is null (nothing is cached then).
	MDML_ENGINE_API int32_t ResolveMemberSlot(const void* Object, FMemberSlot& Slot, const FMemberDesc& Desc);
	MDML_ENGINE_API int32_t ResolveBitSlot(const void* Object, FBitSlot& Slot, const FBitDesc& Desc);

	// Calls the function on Object (or on the class default object for static functions; Object is then ignored and
	// Class is used). Returns false (and logs once per call site) when the function is missing or its live signature
	// does not match the generated one; the parameter buffer is then left untouched.
	MDML_ENGINE_API bool CallFunction(const void* Object, FFunctionSlot& Slot, const FFunctionDesc& Desc, void* Parms);
	MDML_ENGINE_API bool CallStaticFunction(UE4::UClass* Class, FFunctionSlot& Slot, const FFunctionDesc& Desc, void* Parms);

	// StaticFindObject by full path ("/Script/Engine.Actor", "/Game/.../BP_X.BP_X_C"). Only a non-null result is
	// cached, so a Blueprint class that is not loaded yet is found later.
	MDML_ENGINE_API UE4::UClass* FindClass(FObjectSlot& Slot, const wchar_t* PathName);
	MDML_ENGINE_API UE4::UScriptStruct* FindStruct(FObjectSlot& Slot, const wchar_t* PathName);

	// Compares sizeof(generated struct) with the live UScriptStruct::PropertiesSize. Logs and returns false on mismatch.
	MDML_ENGINE_API bool ValidateStructSize(UE4::UScriptStruct* Struct, const char* CppName, int32_t GeneratedSize);

	// ---------------------------------------------------------------------------------------------------------------
	// Inline fast paths used by the generated accessors
	// ---------------------------------------------------------------------------------------------------------------

	// "const T&" that also works for pointer types spelled inside a macro (const class UFoo*& would be wrong).
	template<typename T>
	using TConstRef = const T&;

	// Zeroed per-type storage that disabled accessors read from / write to instead of the object.
	template<typename T>
	inline void* Sink() {
		alignas(alignof(T) > 16 ? alignof(T) : 16) static unsigned char Storage[sizeof(T)] = {};
		return Storage;
	}

	inline void* MemberPtr(const void* Object, FMemberSlot& Slot, const FMemberDesc& Desc, void* SinkStorage) {
		int32_t State = Slot.State.load(std::memory_order_acquire);
		if (State == SlotUnresolved)
			State = ResolveMemberSlot(Object, Slot, Desc);
		if (State == SlotResolved && Object)
			return const_cast<uint8_t*>(static_cast<const uint8_t*>(Object)) + Slot.Offset;
		return SinkStorage;
	}

	inline uint8_t* BitPtr(const void* Object, FBitSlot& Slot, const FBitDesc& Desc, uint8_t& OutMask) {
		int32_t State = Slot.State.load(std::memory_order_acquire);
		if (State == SlotUnresolved)
			State = ResolveBitSlot(Object, Slot, Desc);
		if (State == SlotResolved && Object) {
			OutMask = Slot.Mask;
			return const_cast<uint8_t*>(static_cast<const uint8_t*>(Object)) + Slot.Offset;
		}
		OutMask = 0;
		return nullptr;
	}

	inline bool GetBit(const void* Object, FBitSlot& Slot, const FBitDesc& Desc) {
		uint8_t Mask = 0;
		const uint8_t* Byte = BitPtr(Object, Slot, Desc, Mask);
		return Byte && (*Byte & Mask) != 0;
	}

	inline void SetBit(const void* Object, FBitSlot& Slot, const FBitDesc& Desc, bool bValue) {
		uint8_t Mask = 0;
		uint8_t* Byte = BitPtr(Object, Slot, Desc, Mask);
		if (!Byte)
			return;
		if (bValue)
			*Byte |= Mask;
		else
			*Byte &= static_cast<uint8_t>(~Mask);
	}

	// IsA check against the generated class: mdml::sdk::Cast<UE4::ABP_BaseCharacter_C>(Actor)
	template<typename T>
	inline T* Cast(UE4::UObject* Object) {
		if (!Object)
			return nullptr;
		UE4::UClass* Class = T::StaticClass();
		return (Class && Object->IsA(Class)) ? reinterpret_cast<T*>(Object) : nullptr;
	}

	// Opaque storage for property types the core has no C++ type for (FieldPath, sparse delegates, ...).
	template<int32_t Size, int32_t Align>
	struct alignas(Align) TOpaque {
		uint8_t Data[Size];
	};
}

// -------------------------------------------------------------------------------------------------------------------
// Macros used by the generated headers. Names starting with _mdml_ are reserved for the generator.
// -------------------------------------------------------------------------------------------------------------------

// First line of every generated UClass: raw UE name (for member/function lookup) + StaticClass() by path.
#define MDML_CLASS(RawName, PathName) \
public: \
	static constexpr const char* _mdml_OwnerName = RawName; \
	static ::UE4::UClass* StaticClass() { static ::mdml::sdk::FObjectSlot _mdml_s; return ::mdml::sdk::FindClass(_mdml_s, PathName); }

// First line of every generated ScriptStruct (adds no data members, layout stays the reflected one).
#define MDML_STRUCT(CppName, RawName, PathName) \
public: \
	static constexpr const char* _mdml_OwnerName = RawName; \
	static ::UE4::UScriptStruct* StaticStruct() { static ::mdml::sdk::FObjectSlot _mdml_s; return ::mdml::sdk::FindStruct(_mdml_s, PathName); } \
	static bool ValidateLayout() { return ::mdml::sdk::ValidateStructSize(StaticStruct(), #CppName, static_cast<int32_t>(sizeof(CppName))); }

// Reflected member of a UClass, resolved by name on first use. Type is last (it may contain commas).
#define MDML_MEMBER(Name, RawName, DumpOffset, ...) \
	__declspec(property(get = _mdml_get_##Name, put = _mdml_put_##Name)) __VA_ARGS__ Name; \
	__VA_ARGS__& _mdml_get_##Name() const { \
		static constexpr ::mdml::sdk::FMemberDesc _mdml_d{ _mdml_OwnerName, RawName, DumpOffset, static_cast<int32_t>(sizeof(__VA_ARGS__)), 1 }; \
		static ::mdml::sdk::FMemberSlot _mdml_s; \
		return *static_cast<__VA_ARGS__*>(::mdml::sdk::MemberPtr(this, _mdml_s, _mdml_d, ::mdml::sdk::Sink<__VA_ARGS__>())); \
	} \
	void _mdml_put_##Name(::mdml::sdk::TConstRef<__VA_ARGS__> _mdml_v) { _mdml_get_##Name() = _mdml_v; }

// Static array member (ArrayDim > 1): Obj->Name[i]. Out-of-range indices hit the sink.
#define MDML_MEMBER_ARRAY(Name, RawName, DumpOffset, Dim, ...) \
	__declspec(property(get = _mdml_get_##Name, put = _mdml_put_##Name)) __VA_ARGS__ Name[]; \
	__VA_ARGS__& _mdml_get_##Name(int32_t _mdml_i) const { \
		static constexpr ::mdml::sdk::FMemberDesc _mdml_d{ _mdml_OwnerName, RawName, DumpOffset, static_cast<int32_t>(sizeof(__VA_ARGS__)), Dim }; \
		static ::mdml::sdk::FMemberSlot _mdml_s; \
		void* _mdml_sink = ::mdml::sdk::Sink<__VA_ARGS__>(); \
		if (_mdml_i < 0 || _mdml_i >= (Dim)) \
			return *static_cast<__VA_ARGS__*>(_mdml_sink); \
		void* _mdml_p = ::mdml::sdk::MemberPtr(this, _mdml_s, _mdml_d, _mdml_sink); \
		return _mdml_p == _mdml_sink ? *static_cast<__VA_ARGS__*>(_mdml_sink) : static_cast<__VA_ARGS__*>(_mdml_p)[_mdml_i]; \
	} \
	void _mdml_put_##Name(int32_t _mdml_i, ::mdml::sdk::TConstRef<__VA_ARGS__> _mdml_v) { _mdml_get_##Name(_mdml_i) = _mdml_v; }

// Bitfield bool (FBoolProperty with FieldMask != 0xFF), resolved by name (byte offset + mask).
#define MDML_BITFIELD(Name, RawName, DumpOffset, DumpMask) \
	__declspec(property(get = _mdml_get_##Name, put = _mdml_put_##Name)) bool Name; \
	static ::mdml::sdk::FBitSlot& _mdml_bs_##Name() { static ::mdml::sdk::FBitSlot _mdml_s; return _mdml_s; } \
	static constexpr ::mdml::sdk::FBitDesc _mdml_bd_##Name{ _mdml_OwnerName, RawName, DumpOffset, DumpMask }; \
	bool _mdml_get_##Name() const { return ::mdml::sdk::GetBit(this, _mdml_bs_##Name(), _mdml_bd_##Name); } \
	void _mdml_put_##Name(bool _mdml_v) { ::mdml::sdk::SetBit(this, _mdml_bs_##Name(), _mdml_bd_##Name, _mdml_v); }

// Compile-time check that a hand-written core type still matches the reflected layout of the live game.
// Define MDML_SDK_NO_PREDEFINED_CHECKS to silence them while fixing the core.
#ifndef MDML_SDK_NO_PREDEFINED_CHECKS
#define MDML_PREDEFINED_CHECK(Type, Size, Align) \
	static_assert(sizeof(::UE4::Type) == (Size), "MDML core type UE4::" #Type " has the wrong size for this game build"); \
	static_assert(alignof(::UE4::Type) == (Align), "MDML core type UE4::" #Type " has the wrong alignment for this game build");
#else
#define MDML_PREDEFINED_CHECK(Type, Size, Align)
#endif
