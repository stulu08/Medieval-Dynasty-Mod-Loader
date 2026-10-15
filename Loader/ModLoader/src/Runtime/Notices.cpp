#include "Core.h"
#include "MDML/Notices.h"

#include "MDML/Log.h"

#include <algorithm>
#include <chrono>
#include <mutex>

namespace mdml::runtime {
	namespace {
		struct StoredNotice {
			Notice Value;
			std::chrono::steady_clock::time_point Time;
		};

		std::mutex s_mutex;
		std::vector<StoredNotice> s_notices;
		// Transient notices older than this are dropped on the next Post, so the list stays small.
		constexpr float MaxKeptTransientAge = 60.f;

		float AgeOf(const StoredNotice& n, std::chrono::steady_clock::time_point now) {
			return std::chrono::duration<float>(now - n.Time).count();
		}
	}

	void Notices::Post(NoticeSeverity severity, const std::string& text, bool persistent) {
		switch (severity) {
		case NoticeSeverity::Info: Log::Info_MDML("{0}", text); break;
		case NoticeSeverity::Warning: Log::Warn_MDML("{0}", text); break;
		case NoticeSeverity::Error: Log::Error_MDML("{0}", text); break;
		}

		auto now = std::chrono::steady_clock::now();
		std::lock_guard<std::mutex> lock(s_mutex);
		s_notices.erase(std::remove_if(s_notices.begin(), s_notices.end(), [now](const StoredNotice& n) {
			return !n.Value.Persistent && AgeOf(n, now) > MaxKeptTransientAge;
		}), s_notices.end());
		s_notices.push_back({ Notice{ severity, text, persistent, 0.f }, now });
	}

	std::vector<Notice> Notices::Snapshot(float maxTransientAge) {
		auto now = std::chrono::steady_clock::now();
		std::vector<Notice> result;
		std::lock_guard<std::mutex> lock(s_mutex);
		for (const StoredNotice& n : s_notices) {
			float age = AgeOf(n, now);
			if (!n.Value.Persistent && age > maxTransientAge)
				continue;
			Notice copy = n.Value;
			copy.AgeSeconds = age;
			result.push_back(std::move(copy));
		}
		return result;
	}
}
