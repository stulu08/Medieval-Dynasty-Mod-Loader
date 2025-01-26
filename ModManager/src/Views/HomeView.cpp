#include "HomeView.h"
#include "Downloader.h"
#include "Application.h"

#include <iostream>
#include <ShlObj.h>
#pragma comment(lib, "shlwapi.lib")

HomeView::HomeView()
{
}

HomeView::~HomeView()
{
}

void ExtractZip(const wchar_t* zipPath, const wchar_t* extractPath);

void DownloadMDML() {
    Downloader downloader;
    
    downloader.DownloadLatestRelease("MDML.zip");
    ExtractZip(L"MDML.zip", L"Cache");
}

void HomeView::Render() {
    

    ImGui::TextWrapped("Welcome to Medieval Dynasty Mod Manager");
    ImGui::Separator();

    ImGui::TextWrapped("Easily manage and install mods for Medieval Dynasty.");
    ImGui::Spacing();

    const float btnSize = max(150.0f, ImGui::GetWindowSize().x / 3.0f);
    
    if (ImGui::Button("Install Mod Loader", ImVec2(btnSize, 50))) {
        DownloadMDML();
    }
    if (ImGui::Button("Manage Mods", ImVec2(btnSize, 50))) {
       
    }

    // Footer
    ImGui::Spacing();
    ImGui::Separator();
    ImGui::Text("Version: %s", APP_VERSION);
    ImGui::SameLine();
    ImGui::TextColored(ImVec4(0.8f, 0.8f, 0.8f, 1.0f), "Created by 2025 Stulu");


    ImGui::End();
}


void ExtractZip(const wchar_t* zipPath, const wchar_t* extractPath) {
    IStorage* storage = nullptr;
    HRESULT hr = StgOpenStorageEx(
        zipPath,
        STGM_READ | STGM_SHARE_DENY_WRITE,
        STGFMT_FILE,
        0,
        nullptr,
        nullptr,
        IID_PPV_ARGS(&storage)
    );

    if (SUCCEEDED(hr))
    {
        IShellItem* destFolder = nullptr;
        hr = SHCreateItemFromParsingName(extractPath, nullptr, IID_PPV_ARGS(&destFolder));
        if (SUCCEEDED(hr))
        {
            IStorage* destStorage = nullptr;
            hr = destFolder->BindToHandler(nullptr, BHID_Storage, IID_PPV_ARGS(&destStorage));
            if (SUCCEEDED(hr))
            {
                hr = storage->CopyTo(0, nullptr, nullptr, destStorage);  // Extract contents
                if (SUCCEEDED(hr))
                {
                    std::wcout << L"ZIP extracted successfully to " << extractPath << std::endl;
                }
                else
                {
                    std::wcerr << L"Failed to extract ZIP contents: 0x" << std::hex << hr << std::endl;
                }
                destStorage->Release();
            }
            destFolder->Release();
        }
        storage->Release();
    }
    else
    {
        std::wcerr << L"Failed to open ZIP file: 0x" << std::hex << hr << std::endl;

        LPVOID pText = 0;

        ::FormatMessage(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
            NULL, hr, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), (LPWSTR)&pText, 0, NULL);
        MessageBox(NULL, (LPCWSTR)pText, 0, MB_OK);
        LocalFree(pText);
    }
}
