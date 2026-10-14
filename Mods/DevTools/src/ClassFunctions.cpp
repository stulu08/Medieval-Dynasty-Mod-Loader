#include "ClassFunctions.h"

#include <mutex>
#include <unordered_map>

namespace devtools::classinfo {
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
			if (!f->GetName().starts_with("SimpleConstructionScript"))
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
}
