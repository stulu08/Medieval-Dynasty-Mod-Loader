#include "Dialogs.h"

#include <Windows.h>
#include <ShlObj.h>
#include <shobjidl.h>
#include <shellapi.h>

namespace mmui {
	namespace {
		mm::fs::path RunDialog(IFileDialog* dlg) {
			mm::fs::path result;
			if (SUCCEEDED(dlg->Show(nullptr))) {
				IShellItem* item = nullptr;
				if (SUCCEEDED(dlg->GetResult(&item)) && item) {
					PWSTR p = nullptr;
					if (SUCCEEDED(item->GetDisplayName(SIGDN_FILESYSPATH, &p)) && p) {
						result = p;
						CoTaskMemFree(p);
					}
					item->Release();
				}
			}
			dlg->Release();
			return result;
		}
	}

	mm::fs::path PickFile(const std::vector<std::pair<std::wstring, std::wstring>>& filter, const wchar_t* title) {
		CoInitializeEx(nullptr, COINIT_APARTMENTTHREADED);
		IFileOpenDialog* dlg = nullptr;
		if (FAILED(CoCreateInstance(CLSID_FileOpenDialog, nullptr, CLSCTX_ALL, IID_PPV_ARGS(&dlg)))) return {};
		std::vector<COMDLG_FILTERSPEC> specs;
		for (const auto& f : filter) specs.push_back({ f.first.c_str(), f.second.c_str() });
		if (!specs.empty()) dlg->SetFileTypes((UINT)specs.size(), specs.data());
		if (title) dlg->SetTitle(title);
		return RunDialog(dlg);
	}

	mm::fs::path PickFolder(const wchar_t* title) {
		CoInitializeEx(nullptr, COINIT_APARTMENTTHREADED);
		IFileOpenDialog* dlg = nullptr;
		if (FAILED(CoCreateInstance(CLSID_FileOpenDialog, nullptr, CLSCTX_ALL, IID_PPV_ARGS(&dlg)))) return {};
		DWORD opts = 0;
		dlg->GetOptions(&opts);
		dlg->SetOptions(opts | FOS_PICKFOLDERS | FOS_FORCEFILESYSTEM);
		if (title) dlg->SetTitle(title);
		return RunDialog(dlg);
	}

	mm::fs::path SaveFile(const wchar_t* defaultName, const wchar_t* ext, const wchar_t* title) {
		CoInitializeEx(nullptr, COINIT_APARTMENTTHREADED);
		IFileSaveDialog* dlg = nullptr;
		if (FAILED(CoCreateInstance(CLSID_FileSaveDialog, nullptr, CLSCTX_ALL, IID_PPV_ARGS(&dlg)))) return {};
		if (defaultName) dlg->SetFileName(defaultName);
		if (ext) dlg->SetDefaultExtension(ext);
		if (title) dlg->SetTitle(title);
		return RunDialog(dlg);
	}

	void OpenInExplorer(const mm::fs::path& path) {
		ShellExecuteW(nullptr, L"open", path.wstring().c_str(), nullptr, nullptr, SW_SHOWNORMAL);
	}
}
