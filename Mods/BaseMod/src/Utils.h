#pragma once
#include "UE4.h"
#include "MDML/MDML.h"

// Helpers for mods built on GameMod. (The SDK exporter, the object/class browser GUI helpers and the class dump moved to
// DevTools in Wave 3C, see Mods/DevTools/src.)
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
		auto cached = tablesCache.find(tableFullName);
		if (cached != tablesCache.end())
			return cached->second;

		UE4::UDataTable* table = UE4::UObject::FindObject<UE4::UDataTable>(tableFullName);
		if (!table) {
			UE_LOG(LogTemp, Warn, "Could not find: {0}", tableFullName)
			return nullptr; // not cached, so a later call (after the table was loaded) can still find it
		}
		tablesCache.insert({ tableFullName, table });
		return table;
	}
	template<typename KeyType, typename ValueType>
	inline UE4::NativeTMap<KeyType, ValueType> GetDataTableItems(const std::string& tableFullName) {
		UE4::UDataTable* table = FindDataTable(tableFullName);
		if (table) {
			return table->GetRowMap();
		}
		return UE4::NativeTMap<KeyType, ValueType>();
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
}
