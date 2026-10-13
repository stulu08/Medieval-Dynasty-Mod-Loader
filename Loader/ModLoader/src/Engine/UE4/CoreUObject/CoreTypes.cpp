#include "CoreTypes.h"
#include "Object.h"

#include <vector>
#include <sstream>
#include <iterator>

namespace UE4 {
	DWORD* FName::GNames = nullptr;

	std::string StringifyFlags(const EFunctionFlags flags) {
		std::vector<const char*> buffer;
		if (flags & EFunctionFlags::Final) { buffer.push_back("Final"); }
		if (flags & EFunctionFlags::RequiredAPI) { buffer.push_back("RequiredAPI"); }
		if (flags & EFunctionFlags::BlueprintAuthorityOnly) { buffer.push_back("BlueprintAuthorityOnly"); }
		if (flags & EFunctionFlags::BlueprintCosmetic) { buffer.push_back("BlueprintCosmetic"); }
		if (flags & EFunctionFlags::Net) { buffer.push_back("Net"); }
		if (flags & EFunctionFlags::NetReliable) { buffer.push_back("NetReliable"); }
		if (flags & EFunctionFlags::NetRequest) { buffer.push_back("NetRequest"); }
		if (flags & EFunctionFlags::Exec) { buffer.push_back("Exec"); }
		if (flags & EFunctionFlags::Native) { buffer.push_back("Native"); }
		if (flags & EFunctionFlags::Event) { buffer.push_back("Event"); }
		if (flags & EFunctionFlags::NetResponse) { buffer.push_back("NetResponse"); }
		if (flags & EFunctionFlags::Static) { buffer.push_back("Static"); }
		if (flags & EFunctionFlags::NetMulticast) { buffer.push_back("NetMulticast"); }
		if (flags & EFunctionFlags::MulticastDelegate) { buffer.push_back("MulticastDelegate"); }
		if (flags & EFunctionFlags::Public) { buffer.push_back("Public"); }
		if (flags & EFunctionFlags::Private) { buffer.push_back("Private"); }
		if (flags & EFunctionFlags::Protected) { buffer.push_back("Protected"); }
		if (flags & EFunctionFlags::Delegate) { buffer.push_back("Delegate"); }
		if (flags & EFunctionFlags::NetServer) { buffer.push_back("NetServer"); }
		if (flags & EFunctionFlags::HasOutParms) { buffer.push_back("HasOutParms"); }
		if (flags & EFunctionFlags::HasDefaults) { buffer.push_back("HasDefaults"); }
		if (flags & EFunctionFlags::NetClient) { buffer.push_back("NetClient"); }
		if (flags & EFunctionFlags::DLLImport) { buffer.push_back("DLLImport"); }
		if (flags & EFunctionFlags::BlueprintCallable) { buffer.push_back("BlueprintCallable"); }
		if (flags & EFunctionFlags::BlueprintEvent) { buffer.push_back("BlueprintEvent"); }
		if (flags & EFunctionFlags::BlueprintPure) { buffer.push_back("BlueprintPure"); }
		if (flags & EFunctionFlags::Const) { buffer.push_back("Const"); }
		if (flags & EFunctionFlags::NetValidate) { buffer.push_back("NetValidate"); }

		switch (buffer.size())
		{
		case 0:
			return std::string();
		case 1:
			return std::string(buffer[0]);
		default:
			std::ostringstream os;
			std::copy(buffer.begin(), buffer.end() - 1, std::ostream_iterator<const char*>(os, ", "));
			os << *buffer.rbegin();
			return os.str();
		}
	}
	std::string StringifyFlags(const EPropertyFlags flags)
	{
		std::vector<const char*> buffer;

		if (flags & EPropertyFlags::Edit) { buffer.push_back("Edit"); }
		if (flags & EPropertyFlags::ConstParm) { buffer.push_back("ConstParm"); }
		if (flags & EPropertyFlags::BlueprintVisible) { buffer.push_back("BlueprintVisible"); }
		if (flags & EPropertyFlags::ExportObject) { buffer.push_back("ExportObject"); }
		if (flags & EPropertyFlags::BlueprintReadOnly) { buffer.push_back("BlueprintReadOnly"); }
		if (flags & EPropertyFlags::Net) { buffer.push_back("Net"); }
		if (flags & EPropertyFlags::EditFixedSize) { buffer.push_back("EditFixedSize"); }
		if (flags & EPropertyFlags::Parm) { buffer.push_back("Parm"); }
		if (flags & EPropertyFlags::OutParm) { buffer.push_back("OutParm"); }
		if (flags & EPropertyFlags::ZeroConstructor) { buffer.push_back("ZeroConstructor"); }
		if (flags & EPropertyFlags::ReturnParm) { buffer.push_back("ReturnParm"); }
		if (flags & EPropertyFlags::DisableEditOnTemplate) { buffer.push_back("DisableEditOnTemplate"); }
		if (flags & EPropertyFlags::Transient) { buffer.push_back("Transient"); }
		if (flags & EPropertyFlags::Config) { buffer.push_back("Config"); }
		if (flags & EPropertyFlags::DisableEditOnInstance) { buffer.push_back("DisableEditOnInstance"); }
		if (flags & EPropertyFlags::EditConst) { buffer.push_back("EditConst"); }
		if (flags & EPropertyFlags::GlobalConfig) { buffer.push_back("GlobalConfig"); }
		if (flags & EPropertyFlags::InstancedReference) { buffer.push_back("InstancedReference"); }
		if (flags & EPropertyFlags::DuplicateTransient) { buffer.push_back("DuplicateTransient"); }
		if (flags & EPropertyFlags::SubobjectReference) { buffer.push_back("SubobjectReference"); }
		if (flags & EPropertyFlags::SaveGame) { buffer.push_back("SaveGame"); }
		if (flags & EPropertyFlags::NoClear) { buffer.push_back("NoClear"); }
		if (flags & EPropertyFlags::ReferenceParm) { buffer.push_back("ReferenceParm"); }
		if (flags & EPropertyFlags::BlueprintAssignable) { buffer.push_back("BlueprintAssignable"); }
		if (flags & EPropertyFlags::Deprecated) { buffer.push_back("Deprecated"); }
		if (flags & EPropertyFlags::IsPlainOldData) { buffer.push_back("IsPlainOldData"); }
		if (flags & EPropertyFlags::RepSkip) { buffer.push_back("RepSkip"); }
		if (flags & EPropertyFlags::RepNotify) { buffer.push_back("RepNotify"); }
		if (flags & EPropertyFlags::Interp) { buffer.push_back("Interp"); }
		if (flags & EPropertyFlags::NonTransactional) { buffer.push_back("NonTransactional"); }
		if (flags & EPropertyFlags::EditorOnly) { buffer.push_back("EditorOnly"); }
		if (flags & EPropertyFlags::NoDestructor) { buffer.push_back("NoDestructor"); }
		if (flags & EPropertyFlags::AutoWeak) { buffer.push_back("AutoWeak"); }
		if (flags & EPropertyFlags::ContainsInstancedReference) { buffer.push_back("ContainsInstancedReference"); }
		if (flags & EPropertyFlags::AssetRegistrySearchable) { buffer.push_back("AssetRegistrySearchable"); }
		if (flags & EPropertyFlags::SimpleDisplay) { buffer.push_back("SimpleDisplay"); }
		if (flags & EPropertyFlags::AdvancedDisplay) { buffer.push_back("AdvancedDisplay"); }
		if (flags & EPropertyFlags::Protected) { buffer.push_back("Protected"); }
		if (flags & EPropertyFlags::BlueprintCallable) { buffer.push_back("BlueprintCallable"); }
		if (flags & EPropertyFlags::BlueprintAuthorityOnly) { buffer.push_back("BlueprintAuthorityOnly"); }
		if (flags & EPropertyFlags::TextExportTransient) { buffer.push_back("TextExportTransient"); }
		if (flags & EPropertyFlags::NonPIEDuplicateTransient) { buffer.push_back("NonPIEDuplicateTransient"); }
		if (flags & EPropertyFlags::ExposeOnSpawn) { buffer.push_back("ExposeOnSpawn"); }
		if (flags & EPropertyFlags::PersistentInstance) { buffer.push_back("PersistentInstance"); }
		if (flags & EPropertyFlags::UObjectWrapper) { buffer.push_back("UObjectWrapper"); }
		if (flags & EPropertyFlags::HasGetValueTypeHash) { buffer.push_back("HasGetValueTypeHash"); }
		if (flags & EPropertyFlags::NativeAccessSpecifierPublic) { buffer.push_back("NativeAccessSpecifierPublic"); }
		if (flags & EPropertyFlags::NativeAccessSpecifierProtected) { buffer.push_back("NativeAccessSpecifierProtected"); }
		if (flags & EPropertyFlags::NativeAccessSpecifierPrivate) { buffer.push_back("NativeAccessSpecifierPrivate"); }

		switch (buffer.size())
		{
		case 0:
			return std::string();
		case 1:
			return std::string(buffer[0]);
		default:
			std::ostringstream os;
			std::copy(buffer.begin(), buffer.end() - 1, std::ostream_iterator<const char*>(os, ", "));
			os << *buffer.rbegin();
			return os.str();
		}
	}
	std::string StringifyFlags(const EObjectFlags flags)
	{
		std::vector<const char*> buffer;

		if (flags & EObjectFlags::NoFlags) { buffer.push_back("NoFlags"); }

		if (flags & EObjectFlags::Public) { buffer.push_back("Public"); }
		if (flags & EObjectFlags::Standalone) { buffer.push_back("Standalone"); }
		if (flags & EObjectFlags::MarkAsNative) { buffer.push_back("MarkAsNative"); }
		if (flags & EObjectFlags::Transactional) { buffer.push_back("Transactional"); }
		if (flags & EObjectFlags::ClassDefaultObject) { buffer.push_back("ClassDefaultObject"); }
		if (flags & EObjectFlags::ArchetypeObject) { buffer.push_back("ArchetypeObject"); }
		if (flags & EObjectFlags::Transient) { buffer.push_back("Transient"); }
		if (flags & EObjectFlags::MarkAsRootSet) { buffer.push_back("MarkAsRootSet"); }
		if (flags & EObjectFlags::TagGarbageTemp) { buffer.push_back("TagGarbageTemp"); }
		if (flags & EObjectFlags::NeedInitialization) { buffer.push_back("NeedInitialization"); }
		if (flags & EObjectFlags::NeedLoad) { buffer.push_back("NeedLoad"); }
		if (flags & EObjectFlags::KeepForCooker) { buffer.push_back("KeepForCooker"); }
		if (flags & EObjectFlags::NeedPostLoad) { buffer.push_back("NeedPostLoad"); }
		if (flags & EObjectFlags::NeedPostLoadSubobjects) { buffer.push_back("NeedPostLoadSubobjects"); }
		if (flags & EObjectFlags::NewerVersionExists) { buffer.push_back("NewerVersionExists"); }
		if (flags & EObjectFlags::BeginDestroyed) { buffer.push_back("BeginDestroyed"); }
		if (flags & EObjectFlags::FinishDestroyed) { buffer.push_back("FinishDestroyed"); }
		if (flags & EObjectFlags::BeingRegenerated) { buffer.push_back("BeingRegenerated"); }
		if (flags & EObjectFlags::DefaultSubObject) { buffer.push_back("DefaultSubObject"); }
		if (flags & EObjectFlags::WasLoaded) { buffer.push_back("WasLoaded"); }
		if (flags & EObjectFlags::TextExportTransient) { buffer.push_back("TextExportTransient"); }
		if (flags & EObjectFlags::LoadCompleted) { buffer.push_back("LoadCompleted"); }
		if (flags & EObjectFlags::InheritableComponentTemplate) { buffer.push_back("InheritableComponentTemplate"); }
		if (flags & EObjectFlags::DuplicateTransient) { buffer.push_back("DuplicateTransient"); }
		if (flags & EObjectFlags::StrongRefOnFrame) { buffer.push_back("StrongRefOnFrame"); }
		if (flags & EObjectFlags::NonPIEDuplicateTransient) { buffer.push_back("NonPIEDuplicateTransient"); }
		if (flags & EObjectFlags::Dynamic) { buffer.push_back("Dynamic"); }
		if (flags & EObjectFlags::WillBeLoaded) { buffer.push_back("WillBeLoaded"); }
		if (flags & EObjectFlags::HasExternalPackage) { buffer.push_back("HasExternalPackage"); }


		switch (buffer.size())
		{
		case 0:
			return std::string();
		case 1:
			return std::string(buffer[0]);
		default:
			std::ostringstream os;
			std::copy(buffer.begin(), buffer.end() - 1, std::ostream_iterator<const char*>(os, ", "));
			os << *buffer.rbegin();
			return os.str();
		}
	}
}