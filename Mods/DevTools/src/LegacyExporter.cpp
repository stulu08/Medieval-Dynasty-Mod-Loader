#include "LegacyExporter.h"

#include "Util.h"

#include <functional>
#include <mutex>
#include <unordered_map>

// Moved from Mods/BaseMod/src/Utils.h (namespace Utils::Export), Wave 3C. Behaviour changes: runs on the game thread
// (no std::async / parallel for_each), GObjects loops use UObject::ForEachObject, FField chains use
// GetChildProperties(), output typos fixed ("unknownData_", "Definition"), null check for structs without a super.
namespace devtools::legacy {

namespace {
bool ComparePropertyLess(const UE4::FProperty* lhs, const UE4::FProperty* rhs) {
		if (lhs->GetOffset() == rhs->GetOffset()
			&& lhs->IsA<UE4::FBoolProperty>()
			&& rhs->IsA<UE4::FBoolProperty>())
		{
			return ((UE4::FBoolProperty*)lhs) < ((UE4::FBoolProperty*)rhs);
		}

		return lhs->GetOffset() < rhs->GetOffset();
	}
struct PInfo {
	std::string cppType;
	std::string name;
	UE4::EPropertyFlags flags;
	UE4::FField* field;
	bool isOut = false;
};
std::string ParamsStruct(const std::string& name, std::vector<PInfo>& parms, PInfo* returnValue) {
	std::string result;
	result += "	struct " + name + " {\n";
	for (auto p : parms) {
		result += "		" + p.cppType + " " + p.name + ";			//Offset: " + std::to_string(p.field->GetAsProperty()->GetOffset()) + " | ElementSize: " + std::to_string(p.field->GetAsProperty()->GetElementSize()) + "\n";
	}
	if(returnValue)
		result += "		" + returnValue->cppType + " " + returnValue->name + ";			//Offset: " + std::to_string(returnValue->field->GetAsProperty()->GetOffset()) + " | ElementSize: " + std::to_string(returnValue->field->GetAsProperty()->GetElementSize()) + "\n";
	result += "	};\n";
	return result;
}
std::string Enum(UE4::UEnum* uenum) {
	std::string result = "";
	{
		std::string name = uenum->GetName();
		if (name.find("Default__") != std::string::npos || name.find("PLACEHOLDER-CLASS") != std::string::npos) {
			return "";
		}
	}
	std::string cppName = NameValidator::MakeUniqueCppName(uenum);
	result += "/////////////////////////////////////////////\n";
	result += "// " + uenum->GetFullName() + "\n";
	result += "/////////////////////////////////////////////\n";
	// uenums can only be uint8_t
	result += "enum class " + cppName + " : uint8_t {\n";
	std::vector<std::string> names;
	if (uenum->IsA(UE4::UUserDefinedEnum::StaticClass())) {
		names = ((UE4::UUserDefinedEnum*)uenum)->GetDisplayNamesParsed();
	}
	else {
		names = uenum->GetNamesParsed();
	}
	Log::Info_MDML("Exporting Enum {0} with {1} Names", uenum->GetName(), names.size());
	std::unordered_map<std::string, size_t> counter;
	for (uint8_t c = 0; c < names.size(); c++) {
		std::string entryName = NameValidator::MakeValidName(std::move(names[c]));
		util::ReplaceString(entryName, cppName + "__", "");
		util::ReplaceString(entryName, cppName + "_", "");
		//check duplicate
		counter[names[c]]++;
		if (counter[names[c]] > 1) {
			entryName += "_" + std::to_string(counter[names[c]]);
		}
		else {
			if (std::count(names.begin(), names.end(), names[c]) > 1) {
				entryName += "_1";
			}
		}
		result += "	" + entryName + " = " + std::to_string(c) + ",\n";
	}
	result += "};\n";
	return result;
}
std::pair<std::string, std::string> ScriptStruct(UE4::UScriptStruct* ustruct) {
	std::string result;
	{
		std::string name = ustruct->GetName();
		if (name.find("Default__") != std::string::npos || name.find("PLACEHOLDER-CLASS") != std::string::npos) {
			return { "","" };
		}
	}
	std::string NameCpp = "struct ";
	auto super = ustruct->GetSuperField();
	NameCpp += NameValidator::MakeUniqueCppName(ustruct);
	uint32_t Size = ustruct->GetPropertySize();
	uint32_t InheritedSize = 0;
	uint32_t offset = InheritedSize = super ? super->GetPropertySize() : 0;
	result += "/////////////////////////////////////////////\n";
	result += "// " + ustruct->GetFullName() + "\n";
	if (super)
		result += "// Super " + super->GetFullName() + "\n";
	result += "// Size " + std::to_string(Size) + "\n";
	if (super)
		result += "// Size inherited " + std::to_string(InheritedSize) + "\n";
	result += "/////////////////////////////////////////////\n";
	result += NameCpp;
	if (super) {
		result += " : public " + NameValidator::MakeValidName(super->GetCPPName());
	}
	result += +" {\n";
	std::vector<std::string> names;
	std::vector<UE4::FProperty*> fields;
	for (UE4::FField* member = ustruct->GetChildProperties(); member != nullptr; member = member->GetNext()) {
		if (member) {
			fields.push_back(member->GetAsProperty());
			names.push_back(NameValidator::MakeValidName(member->GetName()));
		}
	}
	std::sort(std::begin(fields), std::end(fields), ComparePropertyLess);

	std::unordered_map<std::string, size_t> counter;
	Log::Info_MDML("Exporting Struct {0} with {1} members", ustruct->GetName(), fields.size());
	uint32_t unknowCounter = 0;
	for (UE4::FProperty* prop : fields) {
		std::string cppType = prop->GetCppTypeName();
		std::string name = NameValidator::MakeValidName(prop->GetName());

		//remove the id stuff at end
		//Name_63_2D0C87BC4552A1931DB5CB8F9E366663
		if (ustruct->IsA(UE4::UUserDefinedStruct::StaticClass()) && std::count(name.begin(), name.end(), '_') >= 2) {
			size_t last = name.find_last_of('_');
			if ((name.size() - (last + 1)) == 32) {
				//remove _2D0C87BC4552A1931DB5CB8F9E366663
				name = name.erase(last);
				//remove the remaining _63
				last = name.find_last_of('_');
				if (last != name.npos) {
					name = name.erase(last);
				}
			}
		}

		counter[name]++;
		if (counter[name] > 1) {
			name += "_" + std::to_string(counter[name]);
		}
		else {
			if (std::count(names.begin(), names.end(), name) > 1) {
				name += "_1";
			}
		}

		std::string member_name = name;
		bool bitfield = false;
		if (prop->GetArrayDim() > 1) {
			member_name += "[" + std::to_string(prop->GetArrayDim()) + "]";
		}
		if (prop->IsA<UE4::FBoolProperty>() && ((UE4::FBoolProperty*)prop)->IsBitfield()) {
			bitfield = true;
			member_name += " : 1";
		}
		if (!cppType.empty()) {
			auto poff = (uint32_t)prop->GetOffset();
			auto psize = prop->GetElementSize();
			if (offset < poff) {
				uint32_t dist = poff - offset;
				result += "	unsigned char unknownData_" + std::to_string(unknowCounter) + "[" + std::to_string(dist) + "];\t\t//";
				result += "Offset: " + std::to_string(offset) + "	";
				result += "Size: " + std::to_string(dist) + "\n";
				offset += dist;
				unknowCounter++;
			}

			result += "	";
			if (bitfield) {
				result += "//Bitfields are not supported, but you can try uncommenting them\n	//";
			}
			result += cppType + "	" + member_name + ";		//";
			result += "Offset: " + std::to_string(poff) + "	";
			result += "Size: " + std::to_string(psize) + "	";
			result += "Flags: " + UE4::StringifyFlags(prop->GetPropertyFlags()) + "\n";
			if(!bitfield)
				offset = poff + psize * prop->GetArrayDim();
		}
	}
	if (offset < Size) {
		uint32_t dist = Size - offset;
		result += "	unsigned char unknownData_" + std::to_string(unknowCounter) + "[" + std::to_string(dist) + "];\t\t//";
		result += "Offset: " + std::to_string(offset) + "	";
		result += "Size: " + std::to_string(dist) + "\n";
		offset += dist;
		unknowCounter++;
	}
	result += "};\n";
	return { NameCpp + ";\n", result };
}
enum class FunctionType {
		Definition, Declaration, Both
	};
std::string Function(const std::string& ClassName, const std::string& paramStructName, UE4::UFunction* func, FunctionType type) {
	if (func == nullptr || func->GetName() == "StaticClass") {
		return "";
	}
	std::vector<PInfo> parms;
	std::string head;
	std::string name = NameValidator::MakeValidName(func->GetName());
	if (name.find("_GEN_VARIABLE") != name.npos)//these functions crash everything and i dont know why
		return "";
	if ((uint32_t)func->GetFunctionFlags() == 0xFFFFFFFF || (uint32_t)func->GetFunctionFlags() == 0)
		return "";//no flags or all flags are kinda sus
	bool isNativ = func->GetFunctionFlags() & UE4::EFunctionFlags::Native;
	bool isStatic = func->GetFunctionFlags() & UE4::EFunctionFlags::Static;
	bool isConst = func->GetFunctionFlags() & UE4::EFunctionFlags::Const;
	if (isStatic)
		isConst = false;
	bool hasReturnValue = false;
	PInfo returnInfo;
	//Get parms
	if (type == FunctionType::Definition) {
		head += "/////////////////////////////////////////////\n";
		head += "// " + func->GetFullName() + "\n";
		head += "// Flags: " + UE4::StringifyFlags(func->GetFunctionFlags()) + "\n";
		head += "// Params:\n";
	}
	{
		if (func->GetNumParms() > 0 && func->GetChildProperties()) {
			UE4::FField* childs = func->GetChildProperties();
			int i = 0;
			for (UE4::FField* child = childs; child != nullptr; child = child->GetNext()) {
				if (i >= func->GetNumParms())
					break;

				UE4::FProperty* prop = child->GetAsProperty();
				
				if (!(prop->GetPropertyFlags() & UE4::EPropertyFlags::Parm)) {
					continue;
				}
				
				std::string cppType = prop->GetCppTypeName();
				if (cppType.empty()) {
					Log::Warn_MDML("Error getting name of a parameter from {0}::{1}", ClassName, name);
					continue;
				}
				
				if (prop->GetArrayDim() > 1)
					cppType += "*";
				
				std::string name = NameValidator::MakeValidName(child->GetName());
				if (prop->GetPropertyFlags() & UE4::EPropertyFlags::ReturnParm) {
					returnInfo = { cppType, name, prop->GetPropertyFlags(), child };
					hasReturnValue = true;
				}
				else {
					parms.push_back({ cppType, name, prop->GetPropertyFlags(), child, false });
				}
				if (type == FunctionType::Definition) {
					head += "// Name: " + name + "	Type: " + cppType + "	Flags: " + UE4::StringifyFlags(child->GetAsProperty()->GetPropertyFlags()) + "\n";
				}
				i++;
			}
		}
	}
	if (type == FunctionType::Definition) {
		head += "/////////////////////////////////////////////\n";
	}
	if (type != FunctionType::Definition) {
		head += "	";
	}
	if (isStatic && type != FunctionType::Definition) {
		head += "static ";
	}
	if (!hasReturnValue) {
		head += "void";
	}
	else {
		head += returnInfo.cppType;
	}
	
	//Generate head
	head += " ";
	if (type == FunctionType::Definition) {
		head += ClassName + "::";
	}
	head += name;
	head += "(";
	for (size_t i = 0; i < parms.size(); i++) {
		PInfo& info = parms[i];
		bool Const = false;
		if (info.flags & UE4::EPropertyFlags::OutParm) {
			if (info.flags & UE4::EPropertyFlags::ConstParm) {
				info.isOut = false;
				Const = true;
			}
			else
				info.isOut = true;
		}

		//if we make it const we cant set the value for a class in the params struct
		//Const = info.flags & UE4::EPropertyFlags::ConstParm;
		bool Ref = false;

		if(!info.isOut) {
			if (info.flags & UE4::EPropertyFlags::ReferenceParm) {
				Ref = true;
			}
		}
		
		if (i != 0)
			head += ", ";
		//dont use const for class ptr's
		if (Const && !info.cppType._Starts_with("class ") && info.cppType[info.cppType.length() - 1] != '*')
			head += "const ";

		head += info.cppType;

		if (info.isOut)
			head += "*";
		if (Ref)
			head += "&";
		head += " " + info.name;

	}
	head += ")";
	if (isConst)
		head += "/* const*/";//with const we cant use ProcessEvent
	if (type == FunctionType::Declaration) {
		head += ";";
		return head + "\n\n";
	}
	std::string body = "";
	body += "	static auto fn = UObject::FindObject<UFunction>(\"" + func->GetFullName() + "\");\n\n";

	if (type != FunctionType::Declaration)
		body += ParamsStruct(paramStructName, parms, hasReturnValue ? &returnInfo : nullptr);
	body += "	" + paramStructName + " params;\n";
	for (auto p : parms) {
		if (!p.isOut)
			body += "	params." + p.name + " = " + p.name + ";\n";
	}

	body += "\n";
	if (isNativ) {
		body += "	uint32_t flags = (uint32_t)fn->GetFunctionFlags();\n";
		body += "	uint32_t newFlags = flags;\n";
		body += "	newFlags |= 0x00000400;\n";
		body += "	fn->SetFunctionFlags((EFunctionFlags)newFlags);\n\n";
	}
	if (!isStatic) {
		body += "	UObject::ProcessEvent(fn, &params);\n";
	}
	else {
		body += "	static auto Obj = StaticClass()->CreateDefaultObject();\n";
		body += "	Obj->ProcessEvent(fn, &params);\n\n";
	}
	if (isNativ) {
		body += "	fn->SetFunctionFlags((EFunctionFlags)flags);\n\n";
	}
	for (auto p : parms) {
		if (p.isOut) {
			body += "	if (" + p.name + " != nullptr)\n";
			body += "		*" + p.name + " = params." + p.name + ";\n";
		}
	}
	if (hasReturnValue)
		body += "	return params." + returnInfo.name + ";\n";


	//combine head and body
	return head + " {\n" + body + "}\n\n";
}
std::string GenClass(UE4::UClass* Class, const std::string& folder) {
	if (Class == nullptr)
		return "";
	
	std::string ClassName = NameValidator::MakeValidName(Class->GetCPPName());
	UE4::UStruct* Super = Class->GetSuperField();
	std::string header;
	std::string fileWithOutEnding = NameValidator::MakeValidName(Class->GetName());
	std::string headerFile = fileWithOutEnding + ".h";
	std::string functionsFile = fileWithOutEnding + ".cpp";
	Log::Info_MDML("Exporting Class {0} to {1}", Class->GetName(), folder + "/" + headerFile);
	//head
	header += "#pragma once\n";
	header += "#include \"Structs.h\"\n";
	if (Super) {
		header += "#include \"" + NameValidator::MakeValidName(Super->GetPackage()->GetName()) + "/" + NameValidator::MakeValidName(Super->GetName()) + ".h\"\n";
	}
	header += "/////////////////////////////////////////////\n";
	header += "// " + Class->GetFullName() + "\n";
	if (Super)
		header += "// Super: " + Super->GetFullName() + "\n";
	header += "// Size: " + std::to_string(Class->GetPropertySize()) + "\n";
	if (Super)
		header += "// Size inherited: " + std::to_string(Super->GetPropertySize()) + "\n";
	header += "/////////////////////////////////////////////\n";
	header += "namespace UE4 {\n";
	header += "class " + ClassName;
	if (Super) {
		header += " : public " + NameValidator::MakeValidName(Super->GetCPPName());
	}
	//Members
	std::string cpp;
	cpp += "#include \"../SDK.h\"\n";
	cpp += "#include \"" + headerFile + "\"\n";
	cpp += "namespace UE4 {\n";
	header += " {\npublic:\n";
	UE4::FField* members = Class->GetChildProperties();
	header += "#pragma region Members\n";
	cpp += "#pragma region Members\n";
	for (UE4::FField* member = members; member != nullptr; member = member->GetNext()) {
		UE4::FProperty* prop = member->GetAsProperty();
		if (!prop)
			continue;
		std::string cppType = prop->GetCppTypeName();
		std::string name = NameValidator::MakeValidName(prop->GetName());
		std::string member_name = name;
		bool bitfield = false;
		if (prop->GetArrayDim() > 1) {
			member_name += "[" + std::to_string(prop->GetArrayDim()) + "]";
		}
		if (prop->IsA<UE4::FBoolProperty>() && ((UE4::FBoolProperty*)prop)->IsBitfield()) {
			bitfield = true;
			member_name += " : 1";
		}
		if (!cppType.empty()) {
			header += "	//" + cppType + "	" + member_name + ";		//";
			header += "Offset: " + std::to_string(prop->GetOffset()) + "	";
			header += "Size: " + std::to_string(prop->GetElementSize()) + "	";
			header += "Flags: " + UE4::StringifyFlags(prop->GetPropertyFlags()) + "\n";
			
			if (bitfield)
				header += std::string("	[[deprecated(\"This member is a bit field, you cannot get the value using this function accurately\")]]\n");
			header += "	" + cppType + " M_Get" + name + "() const;\n";
			if (bitfield)
				header += std::string("	[[deprecated(\"This member is a bit field, you cannot get the value using this function accurately\")]]\n");
			header += "	" + cppType + "* M_PtrGet" + name + "();\n";
			if (bitfield)
				header += std::string("	[[deprecated(\"This member is a bit field, you cannot get the value using this function accurately\")]]\n");
			header += "	void M_Set" + name + "(const " + cppType + "& value);\n\n";
			cpp += "// Member Getter and Setter of " + name + "\n";
			cpp += "// Declaration: " + cppType + " " + member_name + "\n";
			
			cpp += cppType + " " + ClassName + "::" + "M_Get" + name + "() const {\n";
			cpp += "	return Read<" + cppType + ">((byte*)this + " + std::to_string(prop->GetOffset()) + ");\n}\n";

			cpp += cppType + "* " + ClassName + "::" + "M_PtrGet" + name + "() {\n";
			cpp += "	return reinterpret_cast<" + cppType + "*>((byte*)this + " + std::to_string(prop->GetOffset()) + ");\n}\n";

			cpp += "void " + ClassName + "::" + "M_Set" + name + "(const " + cppType + "& value) {\n";
			cpp += "	Write((byte*)this + " + std::to_string(prop->GetOffset()) + ", value);\n}\n";

		}
	}
	header += "#pragma endregion\n";
	cpp += "#pragma endregion\n";
	//static UClass* StaticClass()
	header += "\npublic:";
	header += "\n	static UClass* StaticClass() {";
	header += "\n		static auto ptr = UObject::FindClass(\"" + Class->GetFullName() + "\");";
	header += "\n		return ptr;";
	header += "\n	}\n\n";

	header += "#pragma region Functions\n";
	//Gen declarations
	for (UE4::UFunction* func : GetAllClassFunctions(Class, true)) {
		std::string FunctionParamsName = ClassName + "_" + NameValidator::MakeValidName(func->GetName()) + "_Params";
		header += Function(ClassName, FunctionParamsName, func, FunctionType::Declaration);
	}
	header += "#pragma endregion\n";
	header += "};\n};";
	cpp += "#pragma region Functions\n";
	for (UE4::UFunction* func : GetAllClassFunctions(Class)) {
		std::string FunctionParamsName = ClassName + "_" + NameValidator::MakeValidName(func->GetName()) + "_Params";
		cpp += Function(ClassName, FunctionParamsName, func, FunctionType::Definition);
	}
	cpp += "#pragma endregion\n";
	cpp += "}";
	util::SaveString(header, folder + "/" + headerFile);
	util::SaveString(cpp, folder + "/" + functionsFile);
	
	return headerFile;
}
}  // namespace

std::string Package(UE4::UPackage* pack, const std::string& exportFolder, bool appendToPack) {
	if (pack == nullptr || pack->GetFullName().rfind("Package ", 0) != 0)
		return "Not a package";
	//classes
	std::string packName = NameValidator::MakeValidName(pack->GetName());
	std::string headerFile = exportFolder + "/" + packName + "/" + packName + "_SDK.h";
	std::string EnumStructsFile = exportFolder + "/" + packName + "/" + "Structs.h";
	std::vector<std::string> classFiles;
	std::vector<std::string> enums;
	std::vector<std::pair<std::string, std::string>> structs;
	std::vector<UE4::UObject*> structsObjectList;
	std::vector<UE4::UObject*> packageObjects = pack->GetAllObjectsInPackage(true);
	if (!std::filesystem::exists(exportFolder + "/" + packName))
		std::filesystem::create_directory(exportFolder + "/" + packName);
	Log::Info_MDML("Exporting package {0} with {1} objects to {2}", packName, packageObjects.size(), headerFile);
	for (size_t i = 0; i < packageObjects.size(); i++) {
		auto obj = packageObjects[i];
		if (!obj)
			continue;
		if (obj->IsA(UE4::UEnum::StaticClass())) {
			auto uenum = (UE4::UEnum*)obj;
			enums.push_back(Enum(uenum));
		}
		else if (obj->IsA(UE4::UClass::StaticClass())) {
			auto clas = (UE4::UClass*)obj;
			classFiles.push_back(GenClass(clas, exportFolder + "/" + packName));
		}
		else if (obj->IsA(UE4::UScriptStruct::StaticClass())) {
			structsObjectList.push_back(obj);
		}
	}
	{
		
		std::unordered_map<std::string, bool> isDefined;
		std::function<void(UE4::UScriptStruct*)> AddStruct = [&](UE4::UScriptStruct* sstruct) {
			if (isDefined[sstruct->GetName()]) {
				return;
			}
			//prevent infinite loop
			isDefined[sstruct->GetName()] = true;
			if (sstruct->GetSuperField()) {
				auto superStruct = sstruct->GetSuperField();
				if (superStruct->GetPackage() == pack && superStruct->IsA(UE4::UScriptStruct::StaticClass()))
					AddStruct((UE4::UScriptStruct*)superStruct);
			}
			for (UE4::FField* member = sstruct->GetChildProperties(); member != nullptr; member = member->GetNext()) {
				if (!member)
					continue;
				if (member->GetAsProperty()->IsA<UE4::FStructProperty>()) {
					auto childStruct = (UE4::FStructProperty*)member;
					if(childStruct->GetStruct()->GetPackage() == pack)
						AddStruct(childStruct->GetStruct());
				}
			}
			structs.push_back(ScriptStruct(sstruct));
		};
		for (size_t i = 0; i < structsObjectList.size(); i++) {
			AddStruct((UE4::UScriptStruct*)structsObjectList[i]);
		}
		std::string result = "";
		result += "#pragma once\n";
		result += "#include \"CoreUObject/CoreTypes.h\"\n\n\n";
		result += "namespace UE4 {\n";
		result += "#pragma region Enums\n";
		for (auto& str : enums) {
			result += str;
		}
		result += "#pragma endregion\n\n";
		result += "#pragma region Structs\n";
		for (auto& str : structs) {
			result += str.first;
		}
		for (auto& str : structs) {
			result += str.second;
		}
		result += "#pragma endregion\n";
		result += "}";
		util::SaveString(result, EnumStructsFile);
	}
	
	//gen include all file
	std::string result;
	result += "#pragma once\n";
	result += "/////////////////////////////////////////////\n";
	result += "// " + pack->GetFullName() + "\n";
	result += "// Classes: " + std::to_string(classFiles.size()) + "\n";
	result += "// Enums: " + std::to_string(enums.size()) + "\n";
	result += "// Structs: " + std::to_string(structs.size()) + "\n";
	result += "// Objects: " + std::to_string(packageObjects.size()) + "\n";
	result += "/////////////////////////////////////////////\n\n\n";
	result += "#include \"Structs.h\"\n";
	result += "\n";
	for (auto& file : classFiles) {
		result += "#include \"" + file + "\"\n";
	}
	util::SaveString(result, headerFile);
	
	//append to sdk.h
	if(appendToPack)
		util::AppendStringToFile("#include \"" + headerFile + "\"\n", exportFolder + "/SDK.h");

	Log::Info_MDML("Finished package export");
	return headerFile;
}
std::string AllBPEnums(const std::string& exportFolder) {
	std::vector<std::string> enums;
	UE4::UObject::ForEachObject([&](UE4::UObject* object) {
		if (object->IsA(UE4::UUserDefinedEnum::StaticClass())) {
			auto Package = object->GetPackage()->GetName();
			if (Package._Starts_with("E_") || Package._Starts_with("BP_Enum_")) {
				enums.push_back(Enum((UE4::UEnum*)object));
			}
		}
	});
	//gen include all file
	std::string result;
	result += "#pragma once\n";
	result += "#include <memory>\n";
	result += "/////////////////////////////////////////////\n";
	result += "// Enums: " + std::to_string(enums.size()) + "\n";
	result += "/////////////////////////////////////////////\n";
	result += "\n";
	result += "namespace UE4 {\n";
	for (auto& e : enums) {
		result += e;
	}
	result += "};\n";
	std::string file = exportFolder + "/BP_Enums.h";
	util::SaveString(result, file);
	return file;
}
std::string AllBPStructs(const std::string& exportFolder) {
	std::vector<UE4::UScriptStruct*> structsObjectList;
	UE4::UObject::ForEachObject([&](UE4::UObject* object) {
		if (object->IsA(UE4::UUserDefinedStruct::StaticClass())) {
			auto Package = object->GetPackage()->GetName();
			if (Package._Starts_with("ST_") || Package._Starts_with("BP_Struct_")) {
				structsObjectList.push_back((UE4::UScriptStruct*)object);
			}
		}
	});
	std::vector<std::pair<std::string, std::string>> structs;
	std::unordered_map<std::string, bool> isDefined;
	std::function<void(UE4::UScriptStruct*)> AddStruct = [&](UE4::UScriptStruct* sstruct) {
		if (isDefined[sstruct->GetName()]) {
			return;
		}
		//prevent infinite loop
		isDefined[sstruct->GetName()] = true;
		for (UE4::FField* member = sstruct->GetChildProperties(); member != nullptr; member = member->GetNext()) {
			if (!member)
				continue;
			if (member->GetAsProperty()->IsA<UE4::FStructProperty>()) {
				auto childStruct = ((UE4::FStructProperty*)member)->GetStruct();
				if (std::find(structsObjectList.begin(), structsObjectList.end(), childStruct) != structsObjectList.end())
					AddStruct(childStruct);
			}
		}
		structs.push_back(ScriptStruct(sstruct));
	};
	for (size_t i = 0; i < structsObjectList.size(); i++) {
		AddStruct((UE4::UScriptStruct*)structsObjectList[i]);
	}

	//gen include all file
	std::string result;
	result += "#pragma once\n";
	result += "#include \"CoreUObject/CoreTypes.h\"\n";
	result += "/////////////////////////////////////////////\n";
	result += "// Structs: " + std::to_string(structs.size()) + "\n";
	result += "/////////////////////////////////////////////\n";
	result += "\n";
	result += "namespace UE4 {\n";
	for (auto& str : structs) {
		result += str.first;
	}
	result += "\n";
	for (auto& str : structs) {
		result += str.second;
	}
	result += "};\n";
	std::string file = exportFolder + "/BP_Structs.h";
	util::SaveString(result, file);
	return file;
}



namespace {
	std::mutex s_functionCacheMutex;
	std::unordered_map<UE4::UClass*, std::vector<UE4::UFunction*>> s_classFunctions;
}

const std::vector<UE4::UFunction*>& GetAllClassFunctions(UE4::UClass* clas, bool reload) {
	std::lock_guard<std::mutex> lock(s_functionCacheMutex);
	auto it = s_classFunctions.find(clas);
	if (!reload && it != s_classFunctions.end())
		return it->second;
	auto& list = s_classFunctions[clas];
	list.clear();
	UE4::UObject::ForEachObject([&](UE4::UObject* object) {
		// Only functions can be returned here. (The old loop cast every object whose outer was the class, which also
		// matched *_GEN_VARIABLE components and caused the "these functions crash everything" workaround.)
		if (object->GetOuter() != clas || !object->IsA(UE4::UFunction::StaticClass()))
			return;
		auto* f = static_cast<UE4::UFunction*>(object);
		if (!f->GetName()._Starts_with("SimpleConstructionScript"))
			list.push_back(f);
	});
	return list;
}

bool TryGetCachedClassFunctions(UE4::UClass* clas, std::vector<UE4::UFunction*>& out) {
	std::lock_guard<std::mutex> lock(s_functionCacheMutex);
	auto it = s_classFunctions.find(clas);
	if (it == s_classFunctions.end())
		return false;
	out = it->second;
	return true;
}

void ClearClassFunctionCache() {
	std::lock_guard<std::mutex> lock(s_functionCacheMutex);
	s_classFunctions.clear();
}

std::string DumpClassInfo(UE4::UClass* clas, const std::filesystem::path& outFolder) {
	if (!clas)
		return "";
	std::error_code ec;
	std::filesystem::create_directories(outFolder, ec);
	const std::string fileName = (outFolder / (clas->GetName() + "_Dump.txt")).string();
	FILE* Log = nullptr;
	fopen_s(&Log, fileName.c_str(), "w+");
	if (!Log)
		return "";
	std::vector<UE4::UFunction*> functions = GetAllClassFunctions(clas);
	for (UE4::UFunction* func : functions) {
		if (!func)
			continue;
		fprintf(Log, "FunctionName: %s\n", func->GetName().c_str());
		fprintf(Log, "FunctionFlags: %s\n", UE4::StringifyFlags(func->GetFunctionFlags()).c_str());
		fprintf(Log, "FunctionNumParms: 0x%X\n", (unsigned)func->GetNumParms());
		fprintf(Log, "FunctionGetParamsSize: 0x%X\n", (unsigned)func->GetParamsSize());
		fprintf(Log, "FunctionReturnValueOffset: 0x%X\n", (unsigned)func->GetReturnValueOffset());
		fprintf(Log, "Parms:\n");
		std::string paramStr;
		std::string returnType = "void";
		if (func->GetNumParms() > 0 && func->GetChildProperties()) {
			int i = 0;
			for (UE4::FField* child = func->GetChildProperties(); child != nullptr; child = child->GetNext()) {
				if (i >= func->GetNumParms())
					break;
				UE4::FProperty* prop = child->GetAsProperty();
				if (!prop)
					continue;
				std::string cppType = prop->GetCppTypeName();
				fprintf(Log, "-%s (Size: %d, CppType: %s ,Flags: %s)\n", child->GetName().c_str(), (int)prop->GetElementSize(), cppType.c_str(), UE4::StringifyFlags(prop->GetPropertyFlags()).c_str());
				if (prop->GetPropertyFlags() & UE4::EPropertyFlags::ReturnParm)
					returnType = cppType;
				else {
					if (i != 0)
						paramStr += ", ";
					paramStr += cppType + " " + child->GetName();
				}
				i++;
			}
		}
		if (func->GetReturnValueOffset() != UINT16_MAX)
			fprintf(Log, "%s %s::%s(%s)\n", returnType.c_str(), NameValidator::MakeValidName(clas->GetName()).c_str(), func->GetName().c_str(), paramStr.c_str());
		fprintf(Log, "\n");
	}
	fclose(Log);
	return fileName;
}

namespace {
	void EnsureSdkHeader(const std::filesystem::path& exportFolder) {
		std::error_code ec;
		std::filesystem::create_directories(exportFolder, ec);
		const auto sdkHeader = exportFolder / "SDK.h";
		if (!std::filesystem::exists(sdkHeader)) {
			std::string content;
			content += "#pragma once\n";
			content += "/////////////////////////////////////////////\n";
			content += "// Medieval Version " + std::string(MEDIEVAL_VERSION) + "\n";
			content += "/////////////////////////////////////////////\n\n";
			util::SaveString(content, sdkHeader.string());
		}
	}
}

std::string RunExportPackages(const std::vector<UE4::UPackage*>& packages, const std::filesystem::path& exportFolder) {
	EnsureSdkHeader(exportFolder);
	const std::string folder = exportFolder.string();
	size_t count = 0;
	if (packages.size() == 1) {
		Package(packages[0], folder, true);
		count = 1;
	}
	else {
		// Sequential (the old parallel for_each incremented a shared counter without synchronisation and ran next to the game).
		for (UE4::UPackage* pack : packages) {
			Package(pack, folder, false);
			++count;
		}
		for (UE4::UPackage* pack : packages) {
			if (pack) {
				std::string packName = NameValidator::MakeValidName(pack->GetName());
				util::AppendStringToFile("#include \"" + packName + "/" + packName + "_SDK.h\"\n", folder + "/SDK.h");
			}
		}
	}
	return std::to_string(count) + " package(s) to: " + folder;
}

std::string RunExportBPEnums(const std::filesystem::path& exportFolder) {
	EnsureSdkHeader(exportFolder);
	return "Blueprint enums to: " + AllBPEnums(exportFolder.string());
}

std::string RunExportBPStructs(const std::filesystem::path& exportFolder) {
	EnsureSdkHeader(exportFolder);
	return "Blueprint structs to: " + AllBPStructs(exportFolder.string());
}

}  // namespace devtools::legacy
