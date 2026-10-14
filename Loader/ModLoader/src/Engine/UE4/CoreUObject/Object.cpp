#include "Object.h"

#include "Class.h"
#include "EngineAddresses.h"
#include "EngineLayout.h"
#include "EngineMemory.h"
#include "UE4.h"


namespace UE4 {
	FUObjectArray* UObject::GObjects = nullptr;

	std::string UObject::GetName() const
	{
		if (this == nullptr)
			return "";

		auto Name = mdml::mem::Load<FName>(reinterpret_cast<const uint8_t*>(this) + mdml::Layout.UObject.Name);
		std::string name(Name.GetName());
		// Note: UE stores the "_N" suffix as Number = N + 1 (NAME_EXTERNAL_TO_INTERNAL); MDML has always printed Number
		// itself. Kept as is in Wave 3D because the old generated SDK looks objects up by these names (3D report, open
		// question Q3).
		if (Name.Number > 0)
		{
			name += '_' + std::to_string(Name.Number);
		}

		auto pos = name.rfind('/');
		if (pos == std::string::npos)
		{
			return name;
		}

		return name.substr(pos + 1);
	}

	std::string UObject::GetFullName() const
	{
		std::string name;
		auto Class = GetClass();
		if (Class != nullptr)
		{
			std::string temp;
			for (auto p = GetOuter(); p; p = p->GetOuter())
			{
				temp = p->GetName() + "." + temp;
			}

			name = Class->GetName();
			name += " ";
			name += temp;
			name += GetName();
		}

		return name;
	}

	std::string UObject::ShortNameOf(const std::string& fullName)
	{
		// Object names cannot contain '.' or ' ' (INVALID_OBJECTNAME_CHARACTERS), so this is exactly GetName().
		auto dot = fullName.rfind('.');
		if (dot != std::string::npos)
			return fullName.substr(dot + 1);
		auto space = fullName.find(' ');
		return space != std::string::npos ? fullName.substr(space + 1) : fullName;
	}

	std::string UObject::GetCPPName() const {
		std::string name;
		if (IsA(UClass::StaticClass()))
		{
			UStruct* c = (UStruct*)this;
			while (c != nullptr)
			{
				const auto className = c->GetName();
				if (className == "Actor")
				{
					name += "A";
					break;
				}
				if (className == "Object")
				{
					name += "U";
					break;
				}

				c = c->GetSuperField();
			}
		}
		else
		{
			name += "F";
		}

		name += GetName();

		return name;
	}

	UPackage* UObject::GetPackage() const {
		UPackage* package = nullptr;
		for (UObject* p = GetOuter(); p; p = p->GetOuter()) {
			package = (UPackage*)p;
		}
		return package;
	}

	int32_t UObject::GetIndex() const
	{
		return mdml::mem::LoadField<int32_t>(this, mdml::Layout.UObject.Index);
	};

	UClass* UObject::GetClass() const
	{
		return mdml::mem::LoadField<UClass*>(this, mdml::Layout.UObject.Class);
	};

	UObject* UObject::GetOuter() const
	{
		return mdml::mem::LoadField<UObject*>(this, mdml::Layout.UObject.Outer);
	};

	UClass* UObject::FindClass(const std::string& name) {
		return FindObject<UClass>(name);
	}

	bool UObject::IsA(UClass* cmp) const
	{
		for (auto super = GetClass(); super; super = static_cast<UClass*>(super->GetSuperField()))
		{
			if (super == cmp)
			{
				return true;
			}
		}

		return false;
	}

	bool UObject::IsAByName(const std::string& fullName) const
	{
		for (auto super = GetClass(); super; super = static_cast<UClass*>(super->GetSuperField()))
		{
			if (super->GetFullName() == fullName)
			{
				return true;
			}
		}

		return false;
	}

	void UObject::ExecuteUbergraph(int EntryPoint)
	{
		static auto fn = UObject::FindObject<UFunction>("Function CoreUObject.Object.ExecuteUbergraph");
		struct
		{
			int EntryPoint;
		}params;
		params.EntryPoint = EntryPoint;
		UObject::ProcessEvent(fn, &params);
	}

	bool UObject::DoesObjectContainFunction(std::string Function)
	{
		return GetFunction(Function) != nullptr;
	}

	class UFunction* UObject::GetFunction(std::string Function)
	{
		UClass* Class = GetClass();
		if (!Class)
			return nullptr;
		// The class's own functions are its UField chain (UStruct::Children); each has the class as its outer.
		for (UField* Field = Class->GetChildren(); Field; Field = Field->GetNext())
		{
			if (Field->GetName() == Function && Field->GetOuter() == Class && Field->IsA(UFunction::StaticClass()))
				return static_cast<UFunction*>(Field);
		}
		// Fallback with the pre-3D semantics: any object with that name whose outer is the class.
		UFunction* Found = nullptr;
		ForEachObject([&](UObject* object) {
			if (object->GetName() == Function && object->GetOuter() == Class)
			{
				Found = static_cast<UFunction*>(object);
				return false;
			}
			return true;
		});
		return Found;
	}
#ifndef ALWAYS_PROCESS_EVENT_SAVE
	void UObject::ProcessEvent(class UFunction* function, void* parms) {
		if (function)
			return reinterpret_cast<void(*)(UObject*, class UFunction*, void*)>(mdml::Addresses.ProcessEvent)(this, function, parms);
		UE_LOG(LogTemp, Warn, "UObject::ProcessEvent function was nullptr");
	}
#endif
	void UObject::ProcessEvent_Save_impl(UFunction* function, void* parms, bool checkClass, bool checkParamSize, size_t parmsSize) {
		if (!function) {
			UE_LOG(LogTemp, Warn, "UObject::ProcessEvent_Save function was nullptr");
			return;
		}
		if (checkClass) {
			UObject* fOuter = function->GetOuter();
			if (fOuter == nullptr) {
				UE_LOG(LogTemp, Warn, "UObject::ProcessEvent_Save {0}.Outer is nullptr", function->GetName());
				return;
			}
			if (!fOuter->IsA(UClass::StaticClass())) {
				UE_LOG(LogTemp, Warn, "UObject::ProcessEvent_Save {0}.Outer is not a UClass", function->GetName());
				return;
			}
			// Known weak check (code inventory C16): this compares the classes' classes, so it always passes. Kept in
			// Wave 3D because tightening it would reject interface calls the old SDK makes (3D report).
			if (!this->GetClass()->IsA(fOuter->GetClass())) {
				UE_LOG(LogTemp, Warn, "UObject::ProcessEvent_Save UClasses did not match\n	This.Class: {0}\n	{2}.Outer: {1}", this->GetClass()->GetName(), fOuter->GetName(), function->GetName());
				return;
			}
		}
		if (checkParamSize) {
			uint16_t expectedSize = function->GetParamsSize();
			if (expectedSize > parmsSize) {
				UE_LOG(LogTemp, Warn, "UObject::ProcessEvent_Save params size did not match of function {0}\n	Expected at least: {1}\n	Got: {2}", function->GetName(), expectedSize, parmsSize);
				return;
			}
		}
		if (!mdml::Addresses.ProcessEvent) {
			UE_LOG(LogTemp, Error, "UObject::ProcessEvent called but ProcessEvent was not resolved");
			return;
		}
		return reinterpret_cast<void(*)(UObject*, class UFunction*, void*)>(mdml::Addresses.ProcessEvent)(this, function, parms);

	}

	UObject* UObject::StaticLoadObject(class UClass* uclass, UObject* InOuter, const wchar_t* InName, const wchar_t* Filename, ELoadFlags LoadFlags, void* Sandbox, bool bAllowObjectReconciliation, const void* InstancingContext)
	{
		if (!mdml::Addresses.StaticLoadObject)
		{
			UE_LOG(LogTemp, Error, "StaticLoadObject called but not resolved");
			return nullptr;
		}
		return reinterpret_cast<UObject * (__fastcall*)(class UClass*, UObject*, const wchar_t*, const wchar_t*, uint32_t, void*, bool, const void*)>(mdml::Addresses.StaticLoadObject)(uclass, InOuter, InName, Filename, (uint32_t)LoadFlags, Sandbox, bAllowObjectReconciliation, InstancingContext);
	}

	UObject* UObject::StaticFindObject(UClass* uclass, UObject* InOuter, const wchar_t* Name, bool ExactClass)
	{
		if (!mdml::Addresses.StaticFindObject || !Name)
		{
			UE_LOG(LogTemp, Error, "StaticFindObject called but not resolved");
			return nullptr;
		}
		return reinterpret_cast<UObject * (__fastcall*)(class UClass*, UObject*, const wchar_t*, bool)>(mdml::Addresses.StaticFindObject)(uclass, InOuter, Name, ExactClass);
	}

	namespace {
		// StaticConstructObject_Internal's only argument since UE 4.26 (layout checked against the PDB).
		struct FStaticConstructObjectParameters
		{
			const UClass* Class = nullptr;
			UObject* Outer = nullptr;
			FName Name;
			unsigned int SetFlags = 0x00000000;
			EInternalObjectFlags InternalSetFlags = EInternalObjectFlags::None;
			bool bCopyTransientsFromClassDefaults = false;
			bool bAssumeTemplateIsArchetype = false;
			UObject* Template = nullptr;
			void* InstanceGraph = nullptr;
			void* ExternalPackage = nullptr;
		};
		namespace L = mdml::layout::FStaticConstructObjectParameters;
		static_assert(sizeof(FStaticConstructObjectParameters) == L::Size, "FStaticConstructObjectParameters layout");
		static_assert(offsetof(FStaticConstructObjectParameters, Name) == L::Name, "FStaticConstructObjectParameters layout");
		static_assert(offsetof(FStaticConstructObjectParameters, InternalSetFlags) == L::InternalSetFlags, "FStaticConstructObjectParameters layout");
		static_assert(offsetof(FStaticConstructObjectParameters, bAssumeTemplateIsArchetype) == L::bAssumeTemplateIsArchetype, "FStaticConstructObjectParameters layout");
		static_assert(offsetof(FStaticConstructObjectParameters, Template) == L::Template, "FStaticConstructObjectParameters layout");
		static_assert(offsetof(FStaticConstructObjectParameters, ExternalPackage) == L::ExternalPackage, "FStaticConstructObjectParameters layout");
	}

	UObject* UObject::StaticConstructObject_Internal(UClass* Class, UObject* InOuter, FName Name, unsigned int SetFlags, EInternalObjectFlags InternalSetFlags, UObject* Template, bool bCopyTransientsFromClassDefaults, void* InstanceGraph, bool bAssumeTemplateIsArchetype)
	{
		if (!mdml::Addresses.StaticConstructObject_Internal)
		{
			UE_LOG(LogTemp, Warn, "StaticConstructObject_Internal Called But Not Found!");
			return nullptr;
		}
		FStaticConstructObjectParameters Params;
		Params.Class = Class;
		Params.Outer = InOuter;
		Params.Name = Name;
		Params.SetFlags = SetFlags;
		Params.InternalSetFlags = InternalSetFlags;
		Params.Template = Template;
		Params.bCopyTransientsFromClassDefaults = bCopyTransientsFromClassDefaults;
		Params.InstanceGraph = InstanceGraph;
		Params.bAssumeTemplateIsArchetype = bAssumeTemplateIsArchetype;
		return reinterpret_cast<UObject * (__fastcall*)(const FStaticConstructObjectParameters*)>(mdml::Addresses.StaticConstructObject_Internal)(&Params);
	}

	bool UObject::CallFunctionByNameWithArguments(const wchar_t* Str, void* Ar, UE4::UObject* Executor, bool bForceCallWithNonExec)
	{
		if (!mdml::Addresses.CallFunctionByNameWithArguments)
			return false;
		return reinterpret_cast<bool (*)(UE4::UObject*, const wchar_t*, void*, UE4::UObject*, bool)>(mdml::Addresses.CallFunctionByNameWithArguments)(this, Str, Ar, Executor, bForceCallWithNonExec);
	}
}
