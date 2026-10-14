#include "Util.h"

#include "MDML/MDML.h"

namespace devtools::util {
	std::filesystem::path MdmlFolder() {
		// Next to MDML.dll (Binaries/Win64), never derived from the working directory.
		HMODULE Mdml = nullptr;
		wchar_t Path[MAX_PATH] = {};
		if (GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
				reinterpret_cast<LPCWSTR>(&::Mod::GetModsFolder), &Mdml) && Mdml
			&& GetModuleFileNameW(Mdml, Path, MAX_PATH)) {
			return std::filesystem::path(Path).parent_path();
		}
		return std::filesystem::path(::Mod::GetModsFolder()).parent_path().parent_path() / "Binaries" / "Win64";
	}
}
