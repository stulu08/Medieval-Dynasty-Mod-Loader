#include "Object.h"

#include "Class.h"
#include "GameInfo.h"


namespace UE4 {
	FUObjectArray* UObject::GObjects = nullptr;

	std::string UObject::GetName() const
	{
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

	void UObject::ProcessEvent(class UFunction* function, void* parms) {
		if (function)
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
			std::cerr << "StaticConstructObject_Internal Called But Not Found!\n";
		}
		return nullptr;
	}

	bool UObject::CallFunctionByNameWithArguments(const wchar_t* Str, void* Ar, UE4::UObject* Executor, bool bForceCallWithNonExec)
	{
		return reinterpret_cast<bool (*)(UE4::UObject*, const wchar_t*, void*, UE4::UObject*, bool)>(SDK::SelectedGameProfile.CallFunctionByNameWithArguments)(this, Str, Ar, Executor, bForceCallWithNonExec);
	}
}