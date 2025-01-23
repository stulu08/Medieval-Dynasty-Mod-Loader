#pragma once
#include "UE4.h"
#include <Mod/Mod.h>

namespace Utils {
	template<typename T, typename U> constexpr size_t offsetOfClass(U T::* member) {
		return (char*)&((T*)nullptr->*member) - (char*)nullptr;
	}

	inline void ReplaceString(std::string& originalString, const std::string& stringToReplace, const std::string& replacementString) {
			size_t index = 0;
			while ((index = originalString.find(stringToReplace, index)) != std::string::npos)
			{
				originalString.replace(index, stringToReplace.length(), replacementString);
				index += replacementString.length();
			}
		}
	inline std::string WStringToString(const std::wstring& wstr) {
			std::string str(wstr.length(), 0);
			std::transform(wstr.begin(), wstr.end(), str.begin(), [](wchar_t c) { return (char)c; });
			return str;
		}
	inline std::string FStringToString(const UE4::FString& fstr) {
			return WStringToString(fstr.c_str());
		}
	inline bool SaveString(const std::string& string, const std::string& file) {
			std::ofstream out(file);
			if (!out.is_open())
				return false;
			out << string;
			out.close();
			return true;
		}
	inline bool AppendStringToFile(const std::string& string, const std::string& file) {
			std::ofstream out;
			out.open(file, std::ios_base::app);
			if (!out.is_open())
				return false;
			out << string;
			out.close();
			return true;
		}
	template<class T = UE4::AActor>
	inline bool GetUniqueActorBeginPlay(UE4::AActor* src, T** dest) {
		if (src->IsA(T::StaticClass())) {
			if (dest) {
				*dest = static_cast<T*>(src);
				return true;
			}
		}
		return false;
	}
	inline bool IsCorrectBPObject(UE4::UObject* src, const std::string& fullName) {
		if (!src)
			return false;
		return src->IsAByName(fullName);
	}
	template<class T = UE4::UObject>
	inline T* ValidateBPObject(UE4::UObject* src, const std::string& fullName) {
		if (IsCorrectBPObject(src, fullName)) {
			return static_cast<T*>(src);
		}
		else {
			return nullptr;
		}
	}
	//assigns dest to src when class matches
	template<class T = UE4::AActor>
	inline bool ValidateBPObjectBeginPlay(UE4::AActor* src, T** dest, const std::string& fullName) {
		if (IsCorrectBPObject(src, fullName)) {
			if (dest) {
				*dest = static_cast<T*>(src);
			}
			return true;
		}
		else {
			return false;
		}
	}
	inline UE4::UDataTable* FindDataTable(const std::string& tableFullName) {
		static std::unordered_map<std::string, UE4::UDataTable*> tablesCache;
		if (tablesCache.find(tableFullName) != tablesCache.end())
			return tablesCache.at(tableFullName);

		UE4::UDataTable* table = UE4::UObject::FindObject<UE4::UDataTable>(tableFullName);
		if (!table) {
			UE_LOG(LogTemp, Warn, "Could not find: {0}", tableFullName)
		}
		tablesCache.insert({ tableFullName, UE4::UObject::FindObject<UE4::UDataTable>(tableFullName) });
		return tablesCache.at(tableFullName);
	}
	template<typename KeyType, typename ValueType>
	inline UE4::NativeTMap<KeyType, ValueType> GetDataTableItems(const std::string& tableFullName) {
		UE4::UDataTable* table = FindDataTable(tableFullName);
		if (table) {
			return table->GetRowMap();
		}
		return UE4::NativeTMap<KeyType, ValueType>();
	}
	inline std::vector<UE4::UFunction*>& GetAllClasssFunctions(UE4::UClass* clas, bool reload = false) {
			static std::unordered_map<UE4::UClass*, std::vector<UE4::UFunction*>> classFunctions;
			if (!reload) {
				if(classFunctions.find(clas) != classFunctions.end())
					return classFunctions[clas];
			}
			classFunctions[clas].clear();
			auto& GObjects = UE4::UObject::GObjects;
			if (UE4::UObject::IsChunkedArray()) {
				for (int i = 0; i < GObjects->GetAsChunckArray().Num(); ++i) {
					auto fn = GObjects->GetAsChunckArray().GetByIndex(i).Object;
					if (!fn)
						continue;
					if (!fn->GetOuter())
						continue;
					if (fn->GetOuter() == clas) {
						UE4::UFunction* f = static_cast<UE4::UFunction*>(fn);
						if(!f->GetName()._Starts_with("SimpleConstructionScript"))
							classFunctions[clas].push_back(f);
					}
				}
			}
			else {
				for (int i = 0; i < GObjects->GetAsTUArray().Num(); ++i) {
					auto fn = GObjects->GetAsTUArray().GetByIndex(i).Object;
					if (!fn)
						continue;
					if (!fn->GetOuter())
						continue;
					if (fn->GetOuter() == clas) {
						UE4::UFunction* f = static_cast<UE4::UFunction*>(fn);
						if (!f->GetName()._Starts_with("SimpleConstructionScript"))
							classFunctions[clas].push_back(f);
					}
				}
			}
			return classFunctions[clas];
		}
	inline void DumpClassInfo(UE4::UClass* clas) {
			if (!clas)
				return;
			if (!std::filesystem::exists("Dump"))
				std::filesystem::create_directory("Dump");
			FILE* Log = NULL;
			std::string FileName = std::string("Dump/") + clas->GetName() + "_Dump.txt";
			fopen_s(&Log, FileName.c_str(), "w+");
			if (Log != NULL) {
				for (UE4::UObject* fn : GetAllClasssFunctions(clas)) {
					if (!fn)
						continue;
					UE4::UFunction* func = static_cast<UE4::UFunction*>(fn);
#pragma warning( push )
#pragma warning( disable : 4477 )
#pragma warning( disable : 4313 )
					fprintf(Log, "FunctionName: %s\n", fn->GetName().c_str());
					{
						UE4::EFunctionFlags flags = func->GetFunctionFlags();
						fprintf(Log, "FunctionFlags: ");
						{
							fprintf(Log, UE4::StringifyFlags(flags).c_str());
						}
						fprintf(Log, "\n");
					}
					fprintf(Log, "FunctionNumParms: 0x%p\n", func->GetNumParms());
					fprintf(Log, "FunctionGetParamsSize: 0x%p\n", func->GetParamsSize());
					fprintf(Log, "FunctionReturnValueOffset: 0x%p\n", func->GetReturnValueOffset());
					fprintf(Log, "Parms:\n");
					std::string paramStr = "";
					std::string returnType = "void";
					if (func->GetNumParms() > 0 && func->GetChildren()) {
						UE4::FField* childs = (UE4::FField*)func->GetChildren();
						int i = 0;
						for (UE4::FField* child = childs; child != nullptr; child = child->GetNext()) {
							if (i >= func->GetNumParms())
								break;
							UE4::FProperty* prop = child->GetAsProperty();
							std::string cppType = prop->GetCppTypeName();
							fprintf(Log, "-%s (Size: %d, CppType: %s ,Flags: %s)\n", child->GetName().c_str(), prop->GetElementSize(), cppType.c_str(), UE4::StringifyFlags(prop->GetPropertyFlags()).c_str());
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
						fprintf(Log, "%s %s::%s(%s)\n", returnType, NameValidator::MakeValidName(clas->GetName()).c_str(), func->GetName().c_str(), paramStr.c_str());


					fprintf(Log, "\n");
#pragma warning( pop )
				}
				fclose(Log);
				Log::SetupMessage("Done!", "Actors functions Dump Complete!");
			}
		}
	/// <summary>
	/// Returns a list which every object in the vector that has the string inside the fullname
	/// </summary>
	/// <returns></returns>
	inline void FilterListByName(std::vector<UE4::UObject*>& objects, const std::string& search, std::unordered_map<UE4::UObject*, bool>& outResult) {
			for (auto object : objects) {
				if (!object)
					continue;
				std::string name = object->GetFullName();
				if(!name.empty())
					outResult[object] = name.find(search) != std::string::npos;
			}
		}
	inline UE4::UFunction* GetFunction(const std::string& functionName) {
			UE4::UFunction* f = UE4::UObject::FindObject<UE4::UFunction>(functionName);
			if (f == nullptr) {
				Log::Error_MDML("\"{0}\" could not be found", functionName);
				return nullptr;
			}
			return f;
		}
	namespace Export {
		inline bool ComparePropertyLess(const UE4::FProperty* lhs, const UE4::FProperty* rhs) {
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
		inline std::string ParamsStruct(const std::string& name, std::vector<PInfo>& parms, PInfo* returnValue) {
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
		inline std::string Enum(UE4::UEnum* uenum) {
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
				ReplaceString(entryName, cppName + "__", "");
				ReplaceString(entryName, cppName + "_", "");
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
		inline std::pair<std::string, std::string> ScriptStruct(UE4::UScriptStruct* ustruct) {
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
			uint32_t offset = InheritedSize = super->GetPropertySize();
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
			for (UE4::FField* member = (UE4::FField*)ustruct->GetChildren(); member != nullptr; member = member->GetNext()) {
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
						result += "	unsigned char uknownData_" + std::to_string(unknowCounter) + "[" + std::to_string(dist) + "];\t\t//";
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
				result += "	unsigned char uknownData_" + std::to_string(unknowCounter) + "[" + std::to_string(dist) + "];\t\t//";
				result += "Offset: " + std::to_string(offset) + "	";
				result += "Size: " + std::to_string(dist) + "\n";
				offset += dist;
				unknowCounter++;
			}
			result += "};\n";
			return { NameCpp + ";\n", result };
		}
		enum class FunctionType {
				Defenition, Declaration, Both
			};
		inline std::string Function(const std::string& ClassName, const std::string& paramStructName, UE4::UFunction* func, FunctionType type) {
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
			if (type == FunctionType::Defenition) {
				head += "/////////////////////////////////////////////\n";
				head += "// " + func->GetFullName() + "\n";
				head += "// Flags: " + UE4::StringifyFlags(func->GetFunctionFlags()) + "\n";
				head += "// Params:\n";
			}
			{
				if (func->GetNumParms() > 0 && func->GetChildren()) {
					UE4::FField* childs = (UE4::FField*)func->GetChildren();
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
						if (type == FunctionType::Defenition) {
							head += "// Name: " + name + "	Type: " + cppType + "	Flags: " + UE4::StringifyFlags(child->GetAsProperty()->GetPropertyFlags()) + "\n";
						}
						i++;
					}
				}
			}
			if (type == FunctionType::Defenition) {
				head += "/////////////////////////////////////////////\n";
			}
			if (type != FunctionType::Defenition) {
				head += "	";
			}
			if (isStatic && type != FunctionType::Defenition) {
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
			if (type == FunctionType::Defenition) {
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
		inline std::string GenClass(UE4::UClass* Class, const std::string& folder) {
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
			UE4::FField* members = (UE4::FField*)Class->GetChildren();
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
			for (UE4::UFunction* func : GetAllClasssFunctions(Class, true)) {
				std::string FunctionParamsName = ClassName + "_" + NameValidator::MakeValidName(func->GetName()) + "_Params";
				header += Function(ClassName, FunctionParamsName, func, FunctionType::Declaration);
			}
			header += "#pragma endregion\n";
			header += "};\n};";
			cpp += "#pragma region Functions\n";
			for (UE4::UFunction* func : GetAllClasssFunctions(Class)) {
				std::string FunctionParamsName = ClassName + "_" + NameValidator::MakeValidName(func->GetName()) + "_Params";
				cpp += Function(ClassName, FunctionParamsName, func, FunctionType::Defenition);
			}
			cpp += "#pragma endregion\n";
			cpp += "}";
			SaveString(header, folder + "/" + headerFile);
			SaveString(cpp, folder + "/" + functionsFile);
			
			return headerFile;
		}
		inline std::string Package(UE4::UPackage* pack, const std::string exportFolder, bool appendToPack = true) {
			if (pack == nullptr || !pack->GetFullName().rfind("Package ", 0) == 0)
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
					for (UE4::FField* member = (UE4::FField*)sstruct->GetChildren(); member != nullptr; member = member->GetNext()) {
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
				SaveString(result, EnumStructsFile);
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
			SaveString(result, headerFile);
			
			//append to sdk.h
			if(appendToPack)
				AppendStringToFile("#include \"" + headerFile + "\"\n", exportFolder + "/SDK.h");

			Log::Info_MDML("Finished package export");
			return headerFile;
		}
		inline std::string AllBPEnums(const std::string& exportFolder) {
			std::vector<std::string> enums;
			if (UE4::UObject::IsChunkedArray()) {
				for (int i = 0; i < UE4::UObject::GObjects->GetAsChunckArray().Num(); ++i) {
					auto object = UE4::UObject::GObjects->GetAsChunckArray().GetByIndex(i).Object;
					if (object == nullptr) {
						continue;
					}

					if (object->IsA(UE4::UUserDefinedEnum::StaticClass())) {
						auto Package = object->GetPackage()->GetName();
						if (Package._Starts_with("E_") || Package._Starts_with("BP_Enum_")) {
							enums.push_back(Enum((UE4::UEnum*)object));
						}
					}
				}
			}
			else {
				for (int i = 0; i < UE4::UObject::GObjects->GetAsTUArray().Num(); ++i) {
					auto object = UE4::UObject::GObjects->GetAsChunckArray().GetByIndex(i).Object;
					if (object == nullptr) {
						continue;
					}

					if (object->IsA(UE4::UUserDefinedEnum::StaticClass())) {
						auto Package = object->GetPackage()->GetName();
						if (Package._Starts_with("E_") || Package._Starts_with("BP_Enum_")) {
							enums.push_back(Enum((UE4::UEnum*)object));
						}
					}
				}
			}
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
			SaveString(result, file);
			return file;
		}
		inline std::string AllBPStructs(const std::string& exportFolder) {
			std::vector<UE4::UScriptStruct*> structsObjectList;
			if (UE4::UObject::IsChunkedArray()) {
				for (int i = 0; i < UE4::UObject::GObjects->GetAsChunckArray().Num(); ++i) {
					auto object = UE4::UObject::GObjects->GetAsChunckArray().GetByIndex(i).Object;
					if (object == nullptr) {
						continue;
					}

					if (object->IsA(UE4::UUserDefinedStruct::StaticClass())) {
						auto Package = object->GetPackage()->GetName();
						if (Package._Starts_with("ST_") || Package._Starts_with("BP_Struct_")) {
							structsObjectList.push_back((UE4::UScriptStruct*)object);
						}
					}
				}
			}
			else {
				for (int i = 0; i < UE4::UObject::GObjects->GetAsTUArray().Num(); ++i) {
					auto object = UE4::UObject::GObjects->GetAsChunckArray().GetByIndex(i).Object;
					if (object == nullptr) {
						continue;
					}

					if (object->IsA(UE4::UUserDefinedStruct::StaticClass())) {
						auto Package = object->GetPackage()->GetName();
						if (Package._Starts_with("ST_") || Package._Starts_with("BP_Struct_")) {
							structsObjectList.push_back((UE4::UScriptStruct*)object);
						}
					}
				}
			}
			std::vector<std::pair<std::string, std::string>> structs;
			std::unordered_map<std::string, bool> isDefined;
			std::function<void(UE4::UScriptStruct*)> AddStruct = [&](UE4::UScriptStruct* sstruct) {
				if (isDefined[sstruct->GetName()]) {
					return;
				}
				//prevent infinite loop
				isDefined[sstruct->GetName()] = true;
				for (UE4::FField* member = (UE4::FField*)sstruct->GetChildren(); member != nullptr; member = member->GetNext()) {
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
			SaveString(result, file);
			return file;
		}
		
		
		static std::vector<std::future<std::string>> workingTasks;
		
		inline void StartThreadBPEnums (const std::string& exportFolder) {
			if (!std::filesystem::exists(exportFolder + "/SDK.h")) {
				std::string content;
				content += "#pragma once\n";
				content += "/////////////////////////////////////////////\n";
				content += "// Medieval Version " + std::string(MEDIEVAL_VERSION) + "\n";
				content += "/////////////////////////////////////////////\n\n";
				SaveString(content, exportFolder + "/SDK.h");
			}
			if (!std::filesystem::exists("Export"))
				std::filesystem::create_directory("Export");
			workingTasks.push_back(std::async(Utils::Export::AllBPEnums, exportFolder));
		}
		inline void StartThreadBPStructs (const std::string& exportFolder) {
			if (!std::filesystem::exists(exportFolder + "/SDK.h")) {
				std::string content;
				content += "#pragma once\n";
				content += "/////////////////////////////////////////////\n";
				content += "// Medieval Version " + std::string(MEDIEVAL_VERSION) + "\n";
				content += "/////////////////////////////////////////////\n\n";
				SaveString(content, exportFolder + "/SDK.h");
			}
			if (!std::filesystem::exists("Export"))
				std::filesystem::create_directory("Export");
			workingTasks.push_back(std::async(Utils::Export::AllBPStructs, exportFolder));
		}
		inline void StartThreadPackage(UE4::UPackage* pack, const std::string& exportFolder){
			if (!std::filesystem::exists(exportFolder + "/SDK.h")) {
				std::string content;
				content += "#pragma once\n";
				content += "/////////////////////////////////////////////\n";
				content += "// Medieval Version " + std::string(MEDIEVAL_VERSION) + "\n";
				content += "/////////////////////////////////////////////\n\n";
				SaveString(content, exportFolder + "/SDK.h");
			}

			if (!std::filesystem::exists("Export"))
				std::filesystem::create_directory("Export");
			workingTasks.push_back(std::async(Utils::Export::Package, pack, exportFolder, true));
		}
		
		inline void StartThreadPackages(const std::vector<UE4::UPackage*>& exportList, const std::string& exportFolder) {
			if (!std::filesystem::exists(exportFolder + "/SDK.h")) {
				std::string content;
				content += "#pragma once\n";
				content += "/////////////////////////////////////////////\n";
				content += "// Medieval Version " + std::string(MEDIEVAL_VERSION) + "\n";
				content += "/////////////////////////////////////////////\n\n";
				SaveString(content, exportFolder + "/SDK.h");
			}
			
			if (!std::filesystem::exists("Export"))
				std::filesystem::create_directory("Export");

			auto func = [=]() -> std::string {
				size_t c = 0;
				std::for_each(std::execution::par, exportList.begin(), exportList.end(), [&](UE4::UPackage* pack) {
					Utils::Export::Package(pack, exportFolder, false);
					c++;
				});
				std::for_each(exportList.begin(), exportList.end(), [&](UE4::UPackage* pack) {
					if (pack) {
						std::string packName = NameValidator::MakeValidName(pack->GetName());
						std::string headerFile = packName + "/" + packName + "_SDK.h";
						AppendStringToFile("#include \"" + headerFile + "\"\n", exportFolder + "/SDK.h");
					}
				});
				return std::to_string(c) + " Packages to: " + exportFolder;
			};
			workingTasks.push_back(std::async(func));
			
		}
		inline void CheckFinished() {
			using namespace std::chrono_literals;
			for (size_t i = 0; i < workingTasks.size(); i++) {
				std::future_status status;
				status = workingTasks[i].wait_for(1ms);
				if (status == std::future_status::ready) {
					Log::SetupMessage("Export done!", "Finished exporting: " + workingTasks[i].get());
					workingTasks.erase(workingTasks.begin() + i);
					break;
				}
			}
		}
	}
	namespace Gui {
		inline void UE4FunctionInfoTreeNode(UE4::UFunction* function, size_t id = 0, ImGuiTreeNodeFlags flags = DEFAULT_TREE_NODE_FLAGS) {
			if (!function)
				return;
			if (id == 0)
				id = (size_t)function->GetIndex();
			if (ImGui::TreeNodeEx((void*)id, flags, function->GetName().c_str())) {
				ImGui::Text(function->GetFullName().c_str());
				if (function->GetClass()) {
					int numParms = function->GetNumParms();
					if (numParms < 1) {
						ImGui::Text("Num Parms: %d", numParms);
						ImGui::Text("Params Size: %d", function->GetParamsSize());
					}
					else {
						ImGui::Text("No function parameter");
					}
					ImGui::Text("Flags: %s", UE4::StringifyFlags(function->GetFunctionFlags()).c_str());
					if (function->GetReturnValueOffset() != UINT16_MAX)
						ImGui::Text("Return Value Offset: %d", function->GetReturnValueOffset());
					else
						ImGui::Text("No return value");
					if(numParms > 0 && function->GetChildren() && ImGui::TreeNodeEx((std::to_string(id) + "_params").c_str(), flags, "Params:")) {
						UE4::FField* childs = (UE4::FField*)function->GetChildren();
						int i = 0;
						for (UE4::FField* child = childs; child != nullptr; child = child->GetNext()) {
							if (i >= numParms)
								break;
							UE4::FProperty* prop = child->GetAsProperty();
							ImGui::Text("%d: %s (Size: %d, CppType: %s, Flags: %s)", i, child->GetName().c_str(), prop->GetElementSize(), prop->GetCppTypeName().c_str(), UE4::StringifyFlags(prop->GetPropertyFlags()).c_str());
							i++;
						}
						ImGui::TreePop();
					}
				}
				ImGui::TreePop();
			}
		}
		inline void UE4ClassInfo(UE4::UClass* clas, ImGuiTreeNodeFlags flags = DEFAULT_TREE_NODE_FLAGS) {
			if (!clas)
				return;
			ImGui::Text("Name: %s", clas->GetName().c_str());
			ImGui::Text("Fullname: %s", clas->GetFullName().c_str());
			ImGui::Text("Size: %d", clas->GetPropertySize());
			ImGui::Text("Package: %s", clas->GetPackage()->GetName().c_str());
			if (clas->GetSuperField()) {
				ImGui::Text("Super: %s", clas->GetSuperField()->GetFullName().c_str());
			}
			if (clas->GetChildren() && ImGui::TreeNodeEx((clas->GetName() + "_member").c_str(), flags, "Member:")) {
				UE4::FField* childs = (UE4::FField*)clas->GetChildren();
				int i = 0;
				for (UE4::FField* child = childs; child != nullptr; child = child->GetNext()) {
					UE4::FProperty* prop = child->GetAsProperty();
					ImGui::Text("%d: %s (Offset: %d, Size: %d, CppType: %s, Flags: %s)", i, child->GetName().c_str(), prop->GetOffset(), prop->GetElementSize(), prop->GetCppTypeName().c_str(), UE4::StringifyFlags(prop->GetPropertyFlags()).c_str());
					i++;
				}
				ImGui::TreePop();
			}
			if (ImGui::CollapsingHeader("Functions")) {
				std::vector<UE4::UFunction*> functions = Utils::GetAllClasssFunctions(clas);
				if (ImGui::Button("Dump class functions")) {
					DumpClassInfo(clas);
				}
				size_t in = 0;
				for (UE4::UFunction* fn : functions) {
					if (!fn)
						continue;
					in++;
					Utils::Gui::UE4FunctionInfoTreeNode(fn, in);
				}
			}
			ImGui::Separator();
		}
		inline bool UE4ActorTransformEdit(UE4::AActor* actor, bool applyChanges = true) {
				bool status = false;
				ImGui::PushID((void*)actor);
				glm::vec3 pos = actor->GetActorLocation();
				if (ImGui::MDML_Vector3("Position", pos)) {
					if(applyChanges)
						actor->K2_SetActorLocation(pos);
					status = true;
				}
				glm::vec3 rotation = actor->GetActorRotation();
				if (ImGui::MDML_Vector3("Rotation", rotation)) {
					if (applyChanges)
						actor->SetActorRotation(rotation);
					status = true;
				}
				glm::vec3 scale = actor->GetActorScale3D();
				if (ImGui::MDML_Vector3("Scale", scale)) {
					if (applyChanges)
						actor->SetActorScale3D(scale);
					status = true;
				}
				ImGui::PopID();
				return status;
		}
		inline bool TransformEdit(UE4::FTransform& transform, void* id = nullptr, bool applyChanges = true) {
				bool status = false;
				if(id)
					ImGui::PushID(id);
				glm::vec3 pos = transform.Translation;
				if (ImGui::MDML_Vector3("Position", pos)) {
					if(applyChanges)
						transform.Translation = pos;
					status = true;
				}
				glm::vec3 rotation = transform.Rotation.Rotator();
				if (ImGui::MDML_Vector3("Rotation", rotation)) {
					if (applyChanges)
						transform.Rotation = glm::quat(glm::radians(rotation));
					status = true;
				}
				glm::vec3 scale = transform.Scale3D;
				if (ImGui::MDML_Vector3("Scale", scale)) {
					if (applyChanges)
						transform.Scale3D = scale;
					status = true;
				}
				if (id)
					ImGui::PopID();
				return status;
		}
		inline bool FilterSearch(UE4::UObject* object, const std::string& search) {
			if (!object)
				return false;
			if (search.empty())
				return true;
			std::string name = object->GetName();
			if (name.find(search) != name.npos) {
				return true;
			}

			return false;
		}
	}
}
