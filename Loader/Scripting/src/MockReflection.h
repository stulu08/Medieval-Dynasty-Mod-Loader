#pragma once
// Mock of the parts of UE 4.27 reflection the Lua binding needs, shaped like MDML's hand-written engine core
// (ModLoader/src/Engine/UE4/CoreUObject): UObject with InternalIndex in a GObjects array (+ serial numbers for weak
// handles), UClass/UStruct with a super chain and an FProperty list (name, offset, element size, flags, bool field mask),
// UFunction with ParamsSize/ReturnValueOffset and parameter properties flagged CPF_Parm/CPF_OutParm/CPF_ReturnParm,
// FName as an index into a name pool, FString as an engine-allocated (FMemory) UTF-16 buffer, and ProcessEvent.
//
// Property offsets are relative to the object pointer, exactly like FProperty::GetOffset() in the engine, so the binding
// code reads memory the same way the real implementation will: (uint8_t*)Object + Property->Offset.
//
// No sol2 / Lua in here: this is the stand-in for the engine side.

#include <cstdint>
#include <memory>
#include <string>
#include <vector>

namespace mock
{
	using EPropertyFlags = uint64_t;
	// Same values as UE's EPropertyFlags.
	constexpr EPropertyFlags CPF_Parm = 0x0000000000000080;
	constexpr EPropertyFlags CPF_OutParm = 0x0000000000000100;
	constexpr EPropertyFlags CPF_ReturnParm = 0x0000000000000400;
	constexpr EPropertyFlags CPF_ReferenceParm = 0x0000000008000000;

	// Stand-in for the FFieldClass of a property (FBoolProperty, FIntProperty, ...).
	enum class EPropKind { Bool, Int, Int64, Float, Double, Name, Str, Object };
	const char* KindName(EPropKind kind); // "BoolProperty", "IntProperty", ...

	struct FName
	{
		int32_t ComparisonIndex = 0;
		int32_t Number = 0;
	};

	// Engine-style FString (TArray<TCHAR>): buffer owned by the engine allocator, Num includes the terminating 0.
	struct FString
	{
		wchar_t* Data = nullptr;
		int32_t Num = 0;
		int32_t Max = 0;
	};

	// Stand-in for FMemory::Malloc/Free (GMalloc). Counts live allocations so the test can detect leaks.
	namespace FMemory
	{
		void* Malloc(size_t size);
		void Free(void* ptr);
		int64_t LiveAllocations();
	}

	// Name pool: FindOrAdd creates names (the real core can only find existing ones today, see design doc 6.6).
	namespace Names
	{
		FName FindOrAdd(const std::string& name);
		std::string ToString(FName name);
	}

	FString MakeFString(const std::wstring& text); // allocates with FMemory
	void FreeFString(FString& str);                // frees with FMemory, leaves an empty string
	std::wstring ToWide(const FString& str);

	struct UClass;
	struct UObject;

	struct FProperty
	{
		std::string Name;
		EPropKind Kind = EPropKind::Int;
		int32_t Offset = 0;
		int32_t ElementSize = 0;
		uint8_t FieldMask = 0xFF;          // FBoolProperty bitfield mask (0xFF = native bool)
		EPropertyFlags Flags = 0;
		UClass* PropertyClass = nullptr;   // FObjectProperty::PropertyClass
	};

	struct UStruct
	{
		std::string Name;
		UStruct* Super = nullptr;
		std::vector<std::unique_ptr<FProperty>> Properties; // ChildProperties chain
		int32_t PropertiesSize = 0;
	};

	using FNativeFuncPtr = void (*)(UObject* context, void* parms);

	struct UFunction : UStruct
	{
		UClass* Outer = nullptr;
		uint16_t ParamsSize = 0;
		uint16_t ReturnValueOffset = 0xFFFF;
		FNativeFuncPtr Func = nullptr;   // the "exec thunk"; the real hook mechanism swaps this pointer (design doc 7.1)
	};

	struct UClass : UStruct
	{
		std::vector<std::unique_ptr<UFunction>> Functions;
		UClass* SuperClass() const { return static_cast<UClass*>(Super); }
	};

	// Object header. Instances are allocated as Class->PropertiesSize raw bytes with this header in front,
	// so property offsets start after sizeof(UObject), like real UObjects.
	struct UObject
	{
		UClass* ClassPrivate = nullptr;
		int32_t InternalIndex = -1;
		int32_t ObjectFlags = 0;
		FName NamePrivate;
	};

	struct FUObjectItem
	{
		UObject* Object = nullptr;
		int32_t SerialNumber = 0;
		bool PendingKill = false;
	};

	// --- engine "globals" ---
	std::vector<FUObjectItem>& GObjects();
	UClass* FindClass(const std::string& name);
	UFunction* FindFunction(UClass* cls, const std::string& name);       // walks super classes
	const FProperty* FindProperty(const UStruct* st, const std::string& name); // walks super structs
	bool IsA(const UObject* obj, const UClass* cls);
	std::string GetName(const UObject* obj);

	// Weak-handle validation, as proposed for the real core (index + serial + not pending kill).
	bool IsValidWeak(const UObject* obj, int32_t index, int32_t serial);

	// --- building the mock world (test setup) ---
	UClass* NewClass(const std::string& name, UClass* super);
	FProperty* AddProperty(UStruct* st, const std::string& name, EPropKind kind, EPropertyFlags flags = 0,
	                       UClass* propertyClass = nullptr, uint8_t fieldMask = 0xFF);
	UFunction* AddFunction(UClass* cls, const std::string& name, FNativeFuncPtr func);
	void FinishFunction(UFunction* fn); // computes ParamsSize / ReturnValueOffset from the params
	UObject* NewObject(UClass* cls, const std::string& name);
	void DestroyObject(UObject* obj);   // frees memory, slot becomes empty, serial changes -> weak handles die
	void DestroyAll();

	// --- ProcessEvent + hook point ---
	// The binding installs this observer to see calls (stand-in for the native-thunk swap / ProcessEvent detour).
	struct IProcessEventObserver
	{
		virtual ~IProcessEventObserver() = default;
		virtual void Pre(UObject* context, UFunction* fn, void* parms) = 0;
		virtual void Post(UObject* context, UFunction* fn, void* parms) = 0;
	};
	void SetProcessEventObserver(IProcessEventObserver* observer);
	void ProcessEvent(UObject* context, UFunction* fn, void* parms);
}
