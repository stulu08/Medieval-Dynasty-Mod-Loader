#include "Object.h"

#include "Class.h"
#include "GameInfo.h"
#include "SDK.h"


namespace UE4 {
	FUObjectArray* UObject::GObjects = nullptr;

	std::string UObject::GetName() const
	{
		if (!this)
			return "";

		auto Name = *reinterpret_cast<FName*>((byte*)this + SDK::SelectedGameProfile.defs.UObject.Name);
		std::string name(Name.GetName());
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
			if (p)
				package = (UPackage*)p;
		}
		return package;
	}

	int32_t UObject::GetIndex() const
	{
		return Read<int32_t>((byte*)this + SDK::SelectedGameProfile.defs.UObject.Index);
	};

	UClass* UObject::GetClass() const
	{
		return Read<class UClass*>((byte*)this + SDK::SelectedGameProfile.defs.UObject.Class);
	};

	UObject* UObject::GetOuter() const
	{
		return Read<UObject*>((byte*)this + SDK::SelectedGameProfile.defs.UObject.Outer);
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
		if (IsChunkedArray())
		{
			for (int i = 0; i < GObjects->GetAsChunckArray().Num(); ++i)
			{
				auto object = GObjects->GetAsChunckArray().GetByIndex(i).Object;

				if (object == nullptr)
				{
					continue;
				}

				if (object->GetName() == Function)
				{
					if (object->GetOuter() == this->GetClass())
					{
						return true;
					}
				}
			}
			return false;
		}
		else
		{
			for (int i = 0; i < GObjects->GetAsTUArray().Num(); ++i)
			{
				auto object = GObjects->GetAsTUArray().GetByIndex(i).Object;

				if (object == nullptr)
				{
					continue;
				}

				if (object->GetName() == Function)
				{
					if (object->GetOuter() == this->GetClass())
					{
						return true;
					}
				}
			}
			return false;
		}
		return false;
	}

	class UFunction* UObject::GetFunction(std::string Function)
	{
		if (IsChunkedArray())
		{
			for (int i = 0; i < GObjects->GetAsChunckArray().Num(); ++i)
			{
				auto object = GObjects->GetAsChunckArray().GetByIndex(i).Object;

				if (object == nullptr)
				{
					continue;
				}

				if (object->GetName() == Function)
				{
					if (object->GetOuter() == this->GetClass())
					{
						return (UFunction*)object;
					}
				}
			}
			return nullptr;
		}
		else
		{
			for (int i = 0; i < GObjects->GetAsTUArray().Num(); ++i)
			{
				auto object = GObjects->GetAsTUArray().GetByIndex(i).Object;

				if (object == nullptr)
				{
					continue;
				}

				if (object->GetName() == Function)
				{
					if (object->GetOuter() == this->GetClass())
					{
						return (UFunction*)object;
					}
				}
			}
			return nullptr;
		}
		return nullptr;
	}
#ifndef ALWAYS_PROCESS_EVENT_SAVE
	void UObject::ProcessEvent(class UFunction* function, void* parms) {
		if (function)
			return reinterpret_cast<void(*)(UObject*, class UFunction*, void*)>(SDK::SelectedGameProfile.ProcessEvent)(this, function, parms);
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
		return reinterpret_cast<void(*)(UObject*, class UFunction*, void*)>(SDK::SelectedGameProfile.ProcessEvent)(this, function, parms);

	}

	UObject* UObject::StaticLoadObject(class UClass* uclass, UObject* InOuter, const wchar_t* InName, const wchar_t* Filename, ELoadFlags LoadFlags, void* Sandbox, bool bAllowObjectReconciliation, const void* InstancingContext)
	{
		return reinterpret_cast<UObject * (__fastcall*)(class UClass*, UObject*, const wchar_t*, const wchar_t*, uint32_t, void*, bool, const void*)>(SDK::SelectedGameProfile.StaticLoadObject)(uclass, InOuter, InName, Filename, (uint32_t)LoadFlags, Sandbox, bAllowObjectReconciliation, InstancingContext);
	}

	UObject* UObject::StaticFindObject(UClass* uclass, UObject* InOuter, const wchar_t* Name, bool ExactClass)
	{
		return reinterpret_cast<UObject * (__fastcall*)(class UClass*, UObject*, const wchar_t*, bool)>(SDK::SelectedGameProfile.StaticFindObject)(uclass, InOuter, Name, ExactClass);
	}

	UObject* UObject::StaticConstructObject_Internal(UClass* Class, UObject* InOuter, FName Name, unsigned int SetFlags, EInternalObjectFlags InternalSetFlags, UObject* Template, bool bCopyTransientsFromClassDefaults, void* InstanceGraph, bool bAssumeTemplateIsArchetype)
	{
		if (SDK::SelectedGameProfile.StaticConstructObject_Internal)
		{
			if (SDK::SelectedGameProfile.IsUsingUpdatedStaticConstruct)
			{
				struct FStaticConstructObjectParameters
				{
					const UClass* Class;
					UObject* Outer;
					FName Name;
					unsigned int SetFlags = 0x00000000;
					EInternalObjectFlags InternalSetFlags = EInternalObjectFlags::None;
					bool bCopyTransientsFromClassDefaults = false;
					bool bAssumeTemplateIsArchetype = false;
					UObject* Template = nullptr;
					void* InstanceGraph = nullptr;
					void* ExternalPackage = nullptr;
				};
				FStaticConstructObjectParameters StaticConstructObjectParameters;
				StaticConstructObjectParameters.Class = Class;
				StaticConstructObjectParameters.Outer = InOuter;
				StaticConstructObjectParameters.Name = Name;
				StaticConstructObjectParameters.SetFlags = SetFlags;
				StaticConstructObjectParameters.InternalSetFlags = InternalSetFlags;
				StaticConstructObjectParameters.Template = Template;
				StaticConstructObjectParameters.bCopyTransientsFromClassDefaults = bCopyTransientsFromClassDefaults;
				StaticConstructObjectParameters.InstanceGraph = InstanceGraph;
				StaticConstructObjectParameters.bAssumeTemplateIsArchetype = bAssumeTemplateIsArchetype;
				return reinterpret_cast<UObject * (__fastcall*)(const FStaticConstructObjectParameters*)>(SDK::SelectedGameProfile.StaticConstructObject_Internal)(&StaticConstructObjectParameters);
			}
			else
			{
				return reinterpret_cast<UObject * (__fastcall*)(UClass*, UObject*, FName, unsigned int, unsigned int, UObject*, bool, void*, bool)>(SDK::SelectedGameProfile.StaticConstructObject_Internal)(Class, InOuter, Name, SetFlags, (unsigned int)InternalSetFlags, Template, bCopyTransientsFromClassDefaults, InstanceGraph, bAssumeTemplateIsArchetype);
			}
		}
		else
		{
			UE_LOG(LogTemp, Warn, "StaticConstructObject_Internal Called But Not Found!");
		}
		return nullptr;
	}

	bool UObject::CallFunctionByNameWithArguments(const wchar_t* Str, void* Ar, UE4::UObject* Executor, bool bForceCallWithNonExec)
	{
		return reinterpret_cast<bool (*)(UE4::UObject*, const wchar_t*, void*, UE4::UObject*, bool)>(SDK::SelectedGameProfile.CallFunctionByNameWithArguments)(this, Str, Ar, Executor, bForceCallWithNonExec);
	}
}