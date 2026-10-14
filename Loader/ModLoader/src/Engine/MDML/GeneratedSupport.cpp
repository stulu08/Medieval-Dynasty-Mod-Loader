#include "Core.h"
#include "GeneratedSupport.h"

#include "Platform/Logger.h"
#include "Runtime/GameThread.h"

#include <mutex>
#include <string>
#include <map>
#include <utility>

// Out-of-line part of the generated-SDK runtime (see GeneratedSupport.h for the contract).
// Uses only the public core API (UObject/UStruct/FField/FProperty/UFunction + StaticFindObject), no game profile.

namespace mdml::sdk {
	namespace {
		const UE4::UStruct* FindOwnerInChain(const UE4::UObject* Object, const char* OwnerName) {
			for (UE4::UStruct* Struct = Object->GetClass(); Struct; Struct = Struct->GetSuperField()) {
				if (Struct->GetName() == OwnerName)
					return Struct;
			}
			return nullptr;
		}

		// Property declared directly in Struct (no super walk): its ChildProperties chain.
		UE4::FProperty* FindOwnProperty(const UE4::UStruct* Struct, const char* Name) {
			for (auto Field = Struct->GetChildProperties(); Field; Field = Field->GetNext()) {
				if (Field->GetName() == Name)
					return static_cast<UE4::FProperty*>(Field);
			}
			return nullptr;
		}

		// Finds the property for Object: first in the declaring class (exact), then anywhere in the chain by name.
		UE4::FProperty* FindMemberProperty(const UE4::UObject* Object, const char* OwnerName, const char* Name, bool& bOwnerFound) {
			const UE4::UStruct* Owner = FindOwnerInChain(Object, OwnerName);
			bOwnerFound = Owner != nullptr;
			if (Owner) {
				if (auto Property = FindOwnProperty(Owner, Name))
					return Property;
			}
			for (UE4::UStruct* Struct = Object->GetClass(); Struct; Struct = Struct->GetSuperField()) {
				if (auto Property = FindOwnProperty(Struct, Name))
					return Property;
			}
			return nullptr;
		}

		std::wstring Widen(const char* Text) {
			std::wstring Result;
			for (const char* c = Text; *c; ++c)
				Result.push_back(static_cast<wchar_t>(static_cast<unsigned char>(*c)));
			return Result;
		}

		std::string Narrow(const wchar_t* Text) {
			std::string Result;
			for (const wchar_t* c = Text; *c; ++c)
				Result.push_back(*c < 0x80 ? static_cast<char>(*c) : '?');
			return Result;
		}

		bool IsFunctionObject(UE4::UObject* Object) {
			return Object && Object->IsA(UE4::UFunction::StaticClass());
		}

		void WarnIfOffGameThread(const FFunctionDesc& Desc) {
			static std::atomic<bool> bWarned{ false };
			if (mdml::runtime::GameThread::IsInGameThread() || bWarned.exchange(true))
				return;
			Log::Warn_MDML("[SDK] {0}::{1} called off the game thread. Use mdml::runtime::GameThread::Enqueue for engine calls (warned once).",
				Desc.OwnerName, Desc.FunctionName);
		}
	}

	int32_t ResolveMemberSlot(const void* ObjectPtr, FMemberSlot& Slot, const FMemberDesc& Desc) {
		if (!ObjectPtr) {
			if (!Slot.bNullLogged.exchange(true))
				Log::Error_MDML("[SDK] {0}::{1} accessed on a null object (accessor returns a dummy value).", Desc.OwnerName, Desc.PropertyName);
			return SlotUnresolved;
		}

		static std::mutex s_mutex;
		std::lock_guard<std::mutex> Lock(s_mutex);
		const int32_t Current = Slot.State.load(std::memory_order_acquire);
		if (Current != SlotUnresolved)
			return Current;

		auto Object = static_cast<const UE4::UObject*>(ObjectPtr);
		bool bOwnerFound = false;
		UE4::FProperty* Property = FindMemberProperty(Object, Desc.OwnerName, Desc.PropertyName, bOwnerFound);

		int32_t NewState = SlotResolved;
		if (!Property) {
			Slot.Offset = Desc.DumpOffset;
			Log::Warn_MDML("[SDK] {0}::{1} not found by name on {2} (owner class {3}); using the dump offset 0x{4:X}. Regenerate the SDK.",
				Desc.OwnerName, Desc.PropertyName, Object->GetClass() ? Object->GetClass()->GetName() : std::string("<no class>"),
				bOwnerFound ? "found" : "not in chain", Desc.DumpOffset);
		}
		else {
			const int32_t LiveSize = Property->GetElementSize();
			const int32_t LiveDim = Property->GetArrayDim();
			Slot.Offset = Property->GetOffset();
			if (LiveSize != Desc.ElementSize || LiveDim != Desc.ArrayDim) {
				NewState = SlotDisabled;
				Log::Error_MDML("[SDK] {0}::{1} type changed (live size {2} x{3}, generated {4} x{5}); accessor disabled to avoid memory corruption. Regenerate the SDK.",
					Desc.OwnerName, Desc.PropertyName, LiveSize, LiveDim, Desc.ElementSize, Desc.ArrayDim);
			}
			else if (Slot.Offset != Desc.DumpOffset) {
				Log::Info_MDML("[SDK] {0}::{1} moved 0x{2:X} -> 0x{3:X} since generation (resolved by name).",
					Desc.OwnerName, Desc.PropertyName, Desc.DumpOffset, Slot.Offset);
			}
		}
		Slot.State.store(NewState, std::memory_order_release);
		return NewState;
	}

	int32_t ResolveBitSlot(const void* ObjectPtr, FBitSlot& Slot, const FBitDesc& Desc) {
		if (!ObjectPtr) {
			if (!Slot.bNullLogged.exchange(true))
				Log::Error_MDML("[SDK] {0}::{1} accessed on a null object (bitfield reads false).", Desc.OwnerName, Desc.PropertyName);
			return SlotUnresolved;
		}

		static std::mutex s_mutex;
		std::lock_guard<std::mutex> Lock(s_mutex);
		const int32_t Current = Slot.State.load(std::memory_order_acquire);
		if (Current != SlotUnresolved)
			return Current;

		auto Object = static_cast<const UE4::UObject*>(ObjectPtr);
		bool bOwnerFound = false;
		UE4::FProperty* Property = FindMemberProperty(Object, Desc.OwnerName, Desc.PropertyName, bOwnerFound);

		int32_t NewState = SlotResolved;
		if (!Property) {
			Slot.Offset = Desc.DumpOffset;
			Slot.Mask = Desc.DumpMask;
			Log::Warn_MDML("[SDK] bitfield {0}::{1} not found by name; using the dump offset 0x{2:X} mask 0x{3:X}. Regenerate the SDK.",
				Desc.OwnerName, Desc.PropertyName, Desc.DumpOffset, Desc.DumpMask);
		}
		else if (!Property->IsA<UE4::FBoolProperty>()) {
			NewState = SlotDisabled;
			Log::Error_MDML("[SDK] {0}::{1} is no longer a bool property; bitfield accessor disabled. Regenerate the SDK.",
				Desc.OwnerName, Desc.PropertyName);
		}
		else {
			auto BoolProperty = static_cast<UE4::FBoolProperty*>(Property);
			Slot.Offset = Property->GetOffset() + BoolProperty->ByteOffset();
			Slot.Mask = BoolProperty->ByteMask();
			if (Slot.Mask == 0) {
				NewState = SlotDisabled;
				Log::Error_MDML("[SDK] bitfield {0}::{1} has an empty byte mask; accessor disabled.", Desc.OwnerName, Desc.PropertyName);
			}
			else if (Slot.Offset != Desc.DumpOffset || Slot.Mask != Desc.DumpMask) {
				Log::Info_MDML("[SDK] bitfield {0}::{1} moved 0x{2:X}/0x{3:X} -> 0x{4:X}/0x{5:X} since generation (resolved by name).",
					Desc.OwnerName, Desc.PropertyName, Desc.DumpOffset, Desc.DumpMask, Slot.Offset, Slot.Mask);
			}
		}
		Slot.State.store(NewState, std::memory_order_release);
		return NewState;
	}

	namespace {
		// Validates the live UFunction against the generated descriptor. Logs every mismatch.
		bool ValidateFunction(UE4::UFunction* Function, const FFunctionDesc& Desc) {
			bool bOk = true;
			const int32_t LiveParmsSize = Function->GetParamsSize();
			if (LiveParmsSize > Desc.BufferSize) {
				Log::Error_MDML("[SDK] {0}::{1}: live ParmsSize {2} exceeds the generated parameter struct ({3} bytes, dump ParmsSize {4}).",
					Desc.OwnerName, Desc.FunctionName, LiveParmsSize, Desc.BufferSize, Desc.DumpParmsSize);
				bOk = false;
			}

			int32_t NumLiveParams = 0;
			for (auto Field = Function->GetChildProperties(); Field; Field = Field->GetNext()) {
				auto Property = static_cast<UE4::FProperty*>(Field);
				if ((static_cast<uint64_t>(Property->GetPropertyFlags()) & static_cast<uint64_t>(UE4::EPropertyFlags::Parm)) == 0)
					continue;
				++NumLiveParams;
				const std::string Name = Field->GetName();
				const FParamDesc* Match = nullptr;
				for (int32_t i = 0; i < Desc.NumParams; ++i) {
					if (Name == Desc.Params[i].Name) {
						Match = &Desc.Params[i];
						break;
					}
				}
				const int32_t LiveOffset = Property->GetOffset();
				const int32_t LiveSize = Property->GetElementSize() * Property->GetArrayDim();
				if (!Match) {
					Log::Error_MDML("[SDK] {0}::{1}: live parameter '{2}' (offset 0x{3:X}, size {4}) is unknown to the generated header.",
						Desc.OwnerName, Desc.FunctionName, Name, LiveOffset, LiveSize);
					bOk = false;
				}
				else if (Match->Offset != LiveOffset || Match->Size != LiveSize) {
					Log::Error_MDML("[SDK] {0}::{1}: parameter '{2}' changed (live offset 0x{3:X} size {4}, generated 0x{5:X} size {6}).",
						Desc.OwnerName, Desc.FunctionName, Name, LiveOffset, LiveSize, Match->Offset, Match->Size);
					bOk = false;
				}
			}
			if (NumLiveParams != Desc.NumParams) {
				Log::Error_MDML("[SDK] {0}::{1}: live function has {2} parameters, generated header {3}.",
					Desc.OwnerName, Desc.FunctionName, NumLiveParams, Desc.NumParams);
				bOk = false;
			}
			if (!bOk)
				Log::Error_MDML("[SDK] {0}::{1}: signature mismatch, calls are skipped. Regenerate the SDK.", Desc.OwnerName, Desc.FunctionName);
			return bOk;
		}

		UE4::UFunction* FindFunctionIn(const UE4::UStruct* Owner, const std::wstring& Name) {
			UE4::UObject* Found = UE4::UObject::StaticFindObject(nullptr, const_cast<UE4::UStruct*>(Owner), Name.c_str(), false);
			return IsFunctionObject(Found) ? static_cast<UE4::UFunction*>(Found) : nullptr;
		}

		// Declaring class first (like the old generator and Dumper-7: static binding), else first match up the chain.
		UE4::UFunction* FindFunctionForObject(const UE4::UObject* Object, const FFunctionDesc& Desc) {
			const std::wstring Name = Widen(Desc.FunctionName);
			if (!(Desc.Flags & FunctionDesc_Dynamic)) {
				if (const UE4::UStruct* Owner = FindOwnerInChain(Object, Desc.OwnerName)) {
					if (auto Function = FindFunctionIn(Owner, Name))
						return Function;
				}
			}
			for (UE4::UStruct* Struct = Object->GetClass(); Struct; Struct = Struct->GetSuperField()) {
				if (auto Function = FindFunctionIn(Struct, Name))
					return Function;
			}
			return nullptr;
		}

		// Validation results for dynamically looked-up (interface) functions, keyed by UFunction + call site.
		bool ValidateDynamic(UE4::UFunction* Function, const FFunctionDesc& Desc) {
			static std::mutex s_mutex;
			static std::map<std::pair<UE4::UFunction*, const FFunctionDesc*>, bool> s_results;
			std::lock_guard<std::mutex> Lock(s_mutex);
			auto Key = std::make_pair(Function, &Desc);
			auto It = s_results.find(Key);
			if (It != s_results.end())
				return It->second;
			const bool bOk = ValidateFunction(Function, Desc);
			s_results.emplace(Key, bOk);
			return bOk;
		}

		UE4::UFunction* ResolveFunction(const UE4::UObject* Object, UE4::UClass* StaticOwner, FFunctionSlot& Slot, const FFunctionDesc& Desc) {
			if (Desc.Flags & FunctionDesc_Dynamic) {
				UE4::UFunction* Function = Object ? FindFunctionForObject(Object, Desc) : nullptr;
				if (!Function) {
					if (Slot.State.exchange(SlotDisabled) != SlotDisabled)
						Log::Error_MDML("[SDK] interface function {0}::{1} not found on the object's class; call skipped.", Desc.OwnerName, Desc.FunctionName);
					return nullptr;
				}
				return ValidateDynamic(Function, Desc) ? Function : nullptr;
			}

			int32_t State = Slot.State.load(std::memory_order_acquire);
			if (State == SlotResolved)
				return Slot.Function.load(std::memory_order_acquire);
			if (State == SlotDisabled)
				return nullptr;

			static std::mutex s_mutex;
			std::lock_guard<std::mutex> Lock(s_mutex);
			State = Slot.State.load(std::memory_order_acquire);
			if (State == SlotResolved)
				return Slot.Function.load(std::memory_order_acquire);
			if (State == SlotDisabled)
				return nullptr;

			UE4::UFunction* Function = nullptr;
			if (StaticOwner)
				Function = FindFunctionIn(StaticOwner, Widen(Desc.FunctionName));
			else if (Object)
				Function = FindFunctionForObject(Object, Desc);

			if (!Function) {
				// Not cached: a Blueprint class may simply not be loaded yet.
				Log::Error_MDML("[SDK] function {0}::{1} not found; call skipped.", Desc.OwnerName, Desc.FunctionName);
				return nullptr;
			}
			if (!ValidateFunction(Function, Desc)) {
				Slot.State.store(SlotDisabled, std::memory_order_release);
				return nullptr;
			}
			Slot.Function.store(Function, std::memory_order_release);
			Slot.State.store(SlotResolved, std::memory_order_release);
			return Function;
		}
	}

	bool CallFunction(const void* ObjectPtr, FFunctionSlot& Slot, const FFunctionDesc& Desc, void* Parms) {
		if (!ObjectPtr) {
			Log::Error_MDML("[SDK] {0}::{1} called on a null object; call skipped.", Desc.OwnerName, Desc.FunctionName);
			return false;
		}
		WarnIfOffGameThread(Desc);
		auto Object = const_cast<UE4::UObject*>(static_cast<const UE4::UObject*>(ObjectPtr));
		UE4::UFunction* Function = ResolveFunction(Object, nullptr, Slot, Desc);
		if (!Function)
			return false;
		// Raw ProcessEvent: the signature was validated above, the core's class/size checks are not needed.
		Object->ProcessEvent_Save_impl(Function, Parms, false, false, 0);
		return true;
	}

	bool CallStaticFunction(UE4::UClass* Class, FFunctionSlot& Slot, const FFunctionDesc& Desc, void* Parms) {
		if (!Class) {
			Log::Error_MDML("[SDK] static {0}::{1}: class not found (not loaded?); call skipped.", Desc.OwnerName, Desc.FunctionName);
			return false;
		}
		WarnIfOffGameThread(Desc);
		UE4::UFunction* Function = ResolveFunction(nullptr, Class, Slot, Desc);
		if (!Function)
			return false;
		UE4::UObject* DefaultObject = Class->CreateDefaultObject();
		if (!DefaultObject) {
			Log::Error_MDML("[SDK] static {0}::{1}: no default object; call skipped.", Desc.OwnerName, Desc.FunctionName);
			return false;
		}
		DefaultObject->ProcessEvent_Save_impl(Function, Parms, false, false, 0);
		return true;
	}

	namespace {
		UE4::UObject* FindTyped(FObjectSlot& Slot, const wchar_t* PathName, UE4::UClass* RequiredClass, const char* Kind) {
			if (UE4::UObject* Cached = Slot.Object.load(std::memory_order_acquire))
				return Cached;
			UE4::UObject* Found = UE4::UObject::StaticFindObject(nullptr, nullptr, PathName, false);
			if (!Found)
				return nullptr;
			if (RequiredClass && !Found->IsA(RequiredClass)) {
				Log::Error_MDML("[SDK] '{0}' is not a {1}.", Narrow(PathName), Kind);
				return nullptr;
			}
			Slot.Object.store(Found, std::memory_order_release);
			return Found;
		}
	}

	UE4::UClass* FindClass(FObjectSlot& Slot, const wchar_t* PathName) {
		return static_cast<UE4::UClass*>(FindTyped(Slot, PathName, UE4::UClass::StaticClass(), "class"));
	}

	UE4::UScriptStruct* FindStruct(FObjectSlot& Slot, const wchar_t* PathName) {
		return static_cast<UE4::UScriptStruct*>(FindTyped(Slot, PathName, UE4::UScriptStruct::StaticClass(), "script struct"));
	}

	bool ValidateStructSize(UE4::UScriptStruct* Struct, const char* CppName, int32_t GeneratedSize) {
		if (!Struct) {
			Log::Warn_MDML("[SDK] {0}: struct not found, layout not validated.", CppName);
			return false;
		}
		const int32_t LiveSize = Struct->GetPropertySize();
		// PropertiesSize is the unaligned size; the C++ struct may carry trailing alignment padding.
		if (LiveSize > GeneratedSize || GeneratedSize - LiveSize >= 16) {
			Log::Error_MDML("[SDK] {0}: live struct size {1}, generated {2}. Regenerate the SDK before using it by value.", CppName, LiveSize, GeneratedSize);
			return false;
		}
		return true;
	}
}
