#include "MockReflection.h"

#include <atomic>
#include <cstdlib>
#include <cstring>
#include <new>
#include <unordered_map>

namespace mock
{
	const char* KindName(EPropKind kind)
	{
		switch (kind)
		{
		case EPropKind::Bool: return "BoolProperty";
		case EPropKind::Int: return "IntProperty";
		case EPropKind::Int64: return "Int64Property";
		case EPropKind::Float: return "FloatProperty";
		case EPropKind::Double: return "DoubleProperty";
		case EPropKind::Name: return "NameProperty";
		case EPropKind::Str: return "StrProperty";
		case EPropKind::Object: return "ObjectProperty";
		}
		return "UnknownProperty";
	}

	// ---------------------------------------------------------------- FMemory
	static std::atomic<int64_t> g_liveAllocations{0};

	void* FMemory::Malloc(size_t size)
	{
		++g_liveAllocations;
		return std::malloc(size);
	}

	void FMemory::Free(void* ptr)
	{
		if (!ptr)
			return;
		--g_liveAllocations;
		std::free(ptr);
	}

	int64_t FMemory::LiveAllocations() { return g_liveAllocations.load(); }

	// ---------------------------------------------------------------- names
	static std::vector<std::string>& NamePool()
	{
		static std::vector<std::string> pool{"None"};
		return pool;
	}

	FName Names::FindOrAdd(const std::string& name)
	{
		auto& pool = NamePool();
		for (size_t i = 0; i < pool.size(); ++i)
			if (pool[i] == name)
				return FName{static_cast<int32_t>(i), 0};
		pool.push_back(name);
		return FName{static_cast<int32_t>(pool.size() - 1), 0};
	}

	std::string Names::ToString(FName name)
	{
		auto& pool = NamePool();
		if (name.ComparisonIndex < 0 || static_cast<size_t>(name.ComparisonIndex) >= pool.size())
			return "None";
		return pool[name.ComparisonIndex];
	}

	// ---------------------------------------------------------------- FString
	FString MakeFString(const std::wstring& text)
	{
		FString s;
		if (text.empty())
			return s;
		s.Num = s.Max = static_cast<int32_t>(text.size() + 1);
		s.Data = static_cast<wchar_t*>(FMemory::Malloc(sizeof(wchar_t) * s.Max));
		std::memcpy(s.Data, text.c_str(), sizeof(wchar_t) * s.Num);
		return s;
	}

	void FreeFString(FString& str)
	{
		FMemory::Free(str.Data);
		str = FString{};
	}

	std::wstring ToWide(const FString& str)
	{
		if (!str.Data || str.Num <= 0)
			return std::wstring();
		return std::wstring(str.Data, static_cast<size_t>(str.Num - 1));
	}

	// ---------------------------------------------------------------- classes
	static std::vector<std::unique_ptr<UClass>>& Classes()
	{
		static std::vector<std::unique_ptr<UClass>> classes;
		return classes;
	}

	std::vector<FUObjectItem>& GObjects()
	{
		static std::vector<FUObjectItem> objects;
		return objects;
	}

	UClass* FindClass(const std::string& name)
	{
		for (auto& c : Classes())
			if (c->Name == name)
				return c.get();
		return nullptr;
	}

	UFunction* FindFunction(UClass* cls, const std::string& name)
	{
		for (UClass* c = cls; c; c = c->SuperClass())
			for (auto& f : c->Functions)
				if (f->Name == name)
					return f.get();
		return nullptr;
	}

	const FProperty* FindProperty(const UStruct* st, const std::string& name)
	{
		for (const UStruct* s = st; s; s = s->Super)
			for (auto& p : s->Properties)
				if (p->Name == name)
					return p.get();
		return nullptr;
	}

	bool IsA(const UObject* obj, const UClass* cls)
	{
		if (!obj || !cls)
			return false;
		for (UClass* c = obj->ClassPrivate; c; c = c->SuperClass())
			if (c == cls)
				return true;
		return false;
	}

	std::string GetName(const UObject* obj) { return obj ? Names::ToString(obj->NamePrivate) : std::string("None"); }

	bool IsValidWeak(const UObject* obj, int32_t index, int32_t serial)
	{
		auto& objects = GObjects();
		if (!obj || index < 0 || static_cast<size_t>(index) >= objects.size())
			return false;
		const FUObjectItem& item = objects[index];
		return item.Object == obj && item.SerialNumber == serial && !item.PendingKill;
	}

	// ---------------------------------------------------------------- building the world
	static int32_t SizeOf(EPropKind kind)
	{
		switch (kind)
		{
		case EPropKind::Bool: return 1;
		case EPropKind::Int: return 4;
		case EPropKind::Int64: return 8;
		case EPropKind::Float: return 4;
		case EPropKind::Double: return 8;
		case EPropKind::Name: return static_cast<int32_t>(sizeof(FName));
		case EPropKind::Str: return static_cast<int32_t>(sizeof(FString));
		case EPropKind::Object: return static_cast<int32_t>(sizeof(UObject*));
		}
		return 0;
	}

	UClass* NewClass(const std::string& name, UClass* super)
	{
		auto cls = std::make_unique<UClass>();
		cls->Name = name;
		cls->Super = super;
		cls->PropertiesSize = super ? super->PropertiesSize : static_cast<int32_t>(sizeof(UObject));
		Classes().push_back(std::move(cls));
		return Classes().back().get();
	}

	FProperty* AddProperty(UStruct* st, const std::string& name, EPropKind kind, EPropertyFlags flags, UClass* propertyClass, uint8_t fieldMask)
	{
		auto prop = std::make_unique<FProperty>();
		prop->Name = name;
		prop->Kind = kind;
		prop->ElementSize = SizeOf(kind);
		prop->Flags = flags;
		prop->PropertyClass = propertyClass;
		prop->FieldMask = fieldMask;

		// Bitfield bools share the byte of a preceding bitfield bool (like uint8 bFoo : 1; uint8 bBar : 1;).
		const FProperty* last = st->Properties.empty() ? nullptr : st->Properties.back().get();
		if (kind == EPropKind::Bool && fieldMask != 0xFF && last && last->Kind == EPropKind::Bool && last->FieldMask != 0xFF)
		{
			prop->Offset = last->Offset;
		}
		else
		{
			const int32_t align = prop->ElementSize < 8 ? prop->ElementSize : 8;
			int32_t offset = st->PropertiesSize;
			offset = (offset + align - 1) / align * align;
			prop->Offset = offset;
			st->PropertiesSize = offset + prop->ElementSize;
		}
		st->Properties.push_back(std::move(prop));
		return st->Properties.back().get();
	}

	UFunction* AddFunction(UClass* cls, const std::string& name, FNativeFuncPtr func)
	{
		auto fn = std::make_unique<UFunction>();
		fn->Name = name;
		fn->Outer = cls;
		fn->Func = func;
		cls->Functions.push_back(std::move(fn));
		return cls->Functions.back().get();
	}

	void FinishFunction(UFunction* fn)
	{
		fn->ParamsSize = static_cast<uint16_t>((fn->PropertiesSize + 7) / 8 * 8);
		for (auto& p : fn->Properties)
			if (p->Flags & CPF_ReturnParm)
				fn->ReturnValueOffset = static_cast<uint16_t>(p->Offset);
	}

	UObject* NewObject(UClass* cls, const std::string& name)
	{
		void* memory = ::operator new(static_cast<size_t>(cls->PropertiesSize), std::align_val_t{16});
		std::memset(memory, 0, static_cast<size_t>(cls->PropertiesSize));
		auto* obj = new (memory) UObject();
		obj->ClassPrivate = cls;
		obj->NamePrivate = Names::FindOrAdd(name);

		auto& objects = GObjects();
		// Reuse a free slot like the engine does; the serial number tells old handles apart.
		for (size_t i = 0; i < objects.size(); ++i)
		{
			if (!objects[i].Object)
			{
				objects[i].Object = obj;
				objects[i].PendingKill = false;
				obj->InternalIndex = static_cast<int32_t>(i);
				return obj;
			}
		}
		objects.push_back(FUObjectItem{obj, 1, false});
		obj->InternalIndex = static_cast<int32_t>(objects.size() - 1);
		return obj;
	}

	static void FreeObjectMemory(UObject* obj)
	{
		// Free engine-owned FString buffers of the instance.
		for (const UStruct* s = obj->ClassPrivate; s; s = s->Super)
			for (auto& p : s->Properties)
				if (p->Kind == EPropKind::Str)
					FreeFString(*reinterpret_cast<FString*>(reinterpret_cast<uint8_t*>(obj) + p->Offset));
		obj->~UObject();
		::operator delete(obj, std::align_val_t{16});
	}

	void DestroyObject(UObject* obj)
	{
		if (!obj)
			return;
		auto& item = GObjects()[obj->InternalIndex];
		item.Object = nullptr;
		item.SerialNumber++;
		FreeObjectMemory(obj);
	}

	void DestroyAll()
	{
		for (auto& item : GObjects())
		{
			if (item.Object)
			{
				FreeObjectMemory(item.Object);
				item.Object = nullptr;
				item.SerialNumber++;
			}
		}
	}

	// ---------------------------------------------------------------- ProcessEvent
	static IProcessEventObserver* g_observer = nullptr;

	void SetProcessEventObserver(IProcessEventObserver* observer) { g_observer = observer; }

	void ProcessEvent(UObject* context, UFunction* fn, void* parms)
	{
		if (g_observer)
			g_observer->Pre(context, fn, parms);
		if (fn->Func)
			fn->Func(context, parms);
		if (g_observer)
			g_observer->Post(context, fn, parms);
	}
}
