#include "Downloader.h"

#include <iostream>
#include <windows.h>
#include <winhttp.h>
#include <fstream>

#include "JSON.h"

// Function to make an HTTP GET request and return the response
std::string httpGet(const std::wstring& server, const std::wstring& path, const std::wstring& token = L"") {
    HINTERNET hSession = WinHttpOpen(L"WinHTTP Example/1.0",
        WINHTTP_ACCESS_TYPE_DEFAULT_PROXY,
        WINHTTP_NO_PROXY_NAME,
        WINHTTP_NO_PROXY_BYPASS, 0);

    if (!hSession) {
        std::cout << "Error initializing WinHTTP session.\n";
        return "";
    }

    HINTERNET hConnect = WinHttpConnect(hSession, server.c_str(), INTERNET_DEFAULT_HTTPS_PORT, 0);
    if (!hConnect) {
        std::cout << "Error connecting to server.\n";
        WinHttpCloseHandle(hSession);
        return "";
    }

    HINTERNET hRequest = WinHttpOpenRequest(hConnect, L"GET", path.c_str(), NULL, WINHTTP_NO_REFERER,
        WINHTTP_DEFAULT_ACCEPT_TYPES, WINHTTP_FLAG_SECURE);
    if (!hRequest) {
        std::cout << "Error opening request.\n";
        WinHttpCloseHandle(hConnect);
        WinHttpCloseHandle(hSession);
        return "";
    }

    if (!token.empty()) {
        std::wstring authHeader = L"Authorization: token " + token;
        WinHttpAddRequestHeaders(hRequest, authHeader.c_str(), (ULONG)-1L, WINHTTP_ADDREQ_FLAG_ADD);
    }

    if (!WinHttpSendRequest(hRequest, WINHTTP_NO_ADDITIONAL_HEADERS, 0, WINHTTP_NO_REQUEST_DATA, 0, 0, 0)) {
        std::cout << "Error sending request.\n";
        WinHttpCloseHandle(hRequest);
        WinHttpCloseHandle(hConnect);
        WinHttpCloseHandle(hSession);
        return "";
    }

    if (!WinHttpReceiveResponse(hRequest, NULL)) {
        std::cout << "Error receiving response.\n";
        WinHttpCloseHandle(hRequest);
        WinHttpCloseHandle(hConnect);
        WinHttpCloseHandle(hSession);
        return "";
    }

    DWORD bufferSize = 0;
    WinHttpQueryDataAvailable(hRequest, &bufferSize);

    std::string response;
    while (bufferSize > 0) {
        char* buffer = new char[bufferSize + 1];
        ZeroMemory(buffer, bufferSize + 1);

        DWORD bytesRead = 0;
        WinHttpReadData(hRequest, buffer, bufferSize, &bytesRead);

        response.append(buffer, bytesRead);
        delete[] buffer;

        WinHttpQueryDataAvailable(hRequest, &bufferSize);
    }

    WinHttpCloseHandle(hRequest);
    WinHttpCloseHandle(hConnect);
    WinHttpCloseHandle(hSession);

    return response;
}

bool Downloader::DownloadFile(const std::string& server, const std::string& path, const std::string& outputPath) const {
    std::string fileData = httpGet(std::wstring(server.begin(), server.end()), std::wstring(path.begin(), path.end()));

    if (!fileData.empty()) {
        std::ofstream file(outputPath, std::ios::binary);
        if (file.is_open()) {
            file.write(fileData.c_str(), fileData.size());
            file.close();
            std::cout << "Downloaded file to: " << outputPath << "\n";
            return true;
        }
        else {
            std::cout << "Failed to open file: " << outputPath << "\n";
        }
    }
    else {
        std::cout << "Failed to download file.\n";
    }
    return false;
}


bool Downloader::DownloadLatestRelease(const std::string& outputPath, const std::string& owner, const std::string& repo) const {
    std::wstring server = L"api.github.com";
    const std::string path = "/repos/" + std::string(owner.begin(), owner.end()) + "/" +
        std::string(repo.begin(), repo.end()) + "/releases/latest";

    // Step 1: Get the latest release details
    std::string response = httpGet(server, std::wstring(path.begin(), path.end()), L"");
    if (response.empty()) {
        std::cout << "Failed to fetch the latest release details.\n";
        return false;
    }

    // Step 2: Parse the JSON response to get the download URL
    auto json = nlohmann::json::parse(response);
    if (json.contains("assets") && !json["assets"].empty()) {
        std::string downloadUrl = json["assets"][0]["browser_download_url"];
        std::cout << "Download URL: " << downloadUrl << "\n";

        // Extract the server and path from the URL
        size_t pos = downloadUrl.find("github.com");
        if (pos != std::string::npos) {
            std::string fileServer = "github.com";
            std::string filePath = std::string(downloadUrl.begin() + pos + 10, downloadUrl.end());
            return DownloadFile(fileServer, filePath, outputPath);
        }
        else {
            std::cout << "Invalid download URL format.\n";
        }
    }
    else {
        std::cout << "No assets found in the latest release.\n";
    }
    return false;
}
