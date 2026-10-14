#include "Http.h"

#include <Windows.h>
#include <winhttp.h>
#include <fstream>
#include <nlohmann/json.hpp>

namespace mm {
	namespace {
		struct Handle {
			HINTERNET h = nullptr;
			explicit Handle(HINTERNET v = nullptr) : h(v) {}
			~Handle() { if (h) WinHttpCloseHandle(h); }
			Handle(const Handle&) = delete;
			Handle& operator=(const Handle&) = delete;
			operator bool() const { return h != nullptr; }
		};

		// opens the request and receives the response headers; status must be 200
		bool Open(Handle& session, Handle& connect, Handle& request, const std::string& url, std::string& error) {
			std::wstring wurl = ToWide(url);
			URL_COMPONENTSW uc{};
			uc.dwStructSize = sizeof(uc);
			uc.dwSchemeLength = uc.dwHostNameLength = uc.dwUrlPathLength = uc.dwExtraInfoLength = (DWORD)-1;
			if (!WinHttpCrackUrl(wurl.c_str(), 0, 0, &uc)) {
				error = "invalid url";
				return false;
			}
			std::wstring host(uc.lpszHostName, uc.dwHostNameLength);
			std::wstring path(uc.lpszUrlPath, uc.dwUrlPathLength + uc.dwExtraInfoLength);

			session.h = WinHttpOpen(L"MDML-ModManager/1.0", WINHTTP_ACCESS_TYPE_AUTOMATIC_PROXY, nullptr, nullptr, 0);
			if (!session) { error = "WinHttpOpen failed"; return false; }
			connect.h = WinHttpConnect(session.h, host.c_str(), uc.nPort, 0);
			if (!connect) { error = "connect failed"; return false; }
			DWORD flags = uc.nScheme == INTERNET_SCHEME_HTTPS ? WINHTTP_FLAG_SECURE : 0;
			request.h = WinHttpOpenRequest(connect.h, L"GET", path.c_str(), nullptr, WINHTTP_NO_REFERER, WINHTTP_DEFAULT_ACCEPT_TYPES, flags);
			if (!request) { error = "request failed"; return false; }

			if (!WinHttpSendRequest(request.h, L"Accept: application/vnd.github+json\r\n", (DWORD)-1, nullptr, 0, 0, 0) ||
				!WinHttpReceiveResponse(request.h, nullptr)) {
				error = "no response (error " + std::to_string(GetLastError()) + ")";
				return false;
			}
			DWORD status = 0, size = sizeof(status);
			WinHttpQueryHeaders(request.h, WINHTTP_QUERY_STATUS_CODE | WINHTTP_QUERY_FLAG_NUMBER, nullptr, &status, &size, nullptr);
			if (status != 200) {
				error = "HTTP status " + std::to_string(status);
				return false;
			}
			return true;
		}
	}

	bool HttpGetString(const std::string& url, std::string& out, std::string& error) {
		Handle s, c, r;
		if (!Open(s, c, r, url, error)) return false;
		out.clear();
		DWORD avail = 0;
		while (WinHttpQueryDataAvailable(r.h, &avail) && avail > 0) {
			std::string chunk(avail, '\0');
			DWORD read = 0;
			if (!WinHttpReadData(r.h, chunk.data(), avail, &read)) break;
			out.append(chunk.data(), read);
		}
		return true;
	}

	bool HttpDownload(const std::string& url, const fs::path& dest, const ProgressFn& progress,
		const std::atomic<bool>* cancel, std::string& error) {
		Handle s, c, r;
		if (!Open(s, c, r, url, error)) return false;

		uint64_t total = 0;
		wchar_t lenBuf[32] = {};
		DWORD lenSize = sizeof(lenBuf);
		if (WinHttpQueryHeaders(r.h, WINHTTP_QUERY_CONTENT_LENGTH, nullptr, lenBuf, &lenSize, nullptr))
			total = _wcstoui64(lenBuf, nullptr, 10);

		std::error_code ec;
		fs::create_directories(dest.parent_path(), ec);
		fs::path tmp = dest;
		tmp += L".part";
		std::ofstream f(tmp, std::ios::binary | std::ios::trunc);
		if (!f) { error = "cannot write " + PathToUtf8(tmp); return false; }

		uint64_t done = 0;
		DWORD avail = 0;
		std::vector<char> buf(64 * 1024);
		while (WinHttpQueryDataAvailable(r.h, &avail) && avail > 0) {
			if (cancel && cancel->load()) { error = "cancelled"; f.close(); fs::remove(tmp, ec); return false; }
			DWORD want = std::min<DWORD>(avail, (DWORD)buf.size()), read = 0;
			if (!WinHttpReadData(r.h, buf.data(), want, &read) || read == 0) break;
			f.write(buf.data(), read);
			done += read;
			if (progress) progress(done, total);
		}
		f.close();
		if (total && done != total) {
			error = "incomplete download";
			fs::remove(tmp, ec);
			return false;
		}
		fs::remove(dest, ec);
		fs::rename(tmp, dest, ec);
		if (ec) { error = "rename failed: " + ec.message(); return false; }
		return true;
	}

	bool FetchLatestRelease(const std::string& owner, const std::string& repo, ReleaseInfo& out, std::string& error) {
		std::string body;
		if (!HttpGetString("https://api.github.com/repos/" + owner + "/" + repo + "/releases?per_page=10", body, error))
			return false;
		try {
			auto json = nlohmann::json::parse(body);
			for (const auto& rel : json) {
				if (rel.value("draft", false)) continue;
				for (const auto& a : rel["assets"]) {
					std::string name = a.value("name", "");
					if (Lower(name).size() < 4 || Lower(name).substr(Lower(name).size() - 4) != ".zip") continue;
					out.tag = rel.value("tag_name", "");
					out.name = rel.value("name", "");
					out.published = rel.value("published_at", "");
					out.assetName = name;
					out.assetUrl = a.value("browser_download_url", "");
					out.assetSize = a.value("size", (uint64_t)0);
					return true;
				}
			}
			error = "no release with a zip asset found";
		}
		catch (const std::exception& e) {
			error = std::string("bad response: ") + e.what();
		}
		return false;
	}
}
