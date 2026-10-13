#pragma once
#include "Core.h"

#include <string>
#include <vector>

// Notices shown in the loader (F1) window. Any thread may post; the UI reads a snapshot on the render thread.
// Persistent notices (e.g. a failed engine layout check) stay until the game ends; transient ones (e.g. "dump
// written to ...") fade after a few seconds. Every posted notice is also written to the log.
// Contract between Wave 3 round 2 packages: 3E posts, 3B displays (docs/MODERNIZATION_PLAN.md, decisions 2026-10-14).
namespace mdml::runtime {
	enum class NoticeSeverity { Info, Warning, Error };

	struct Notice {
		NoticeSeverity Severity = NoticeSeverity::Info;
		std::string Text;
		bool Persistent = false;
		// Seconds since the notice was posted (filled by Snapshot).
		float AgeSeconds = 0.f;
	};

	class LOADER_API Notices {
	public:
		// Thread-safe. Logs the text with the matching log level.
		static void Post(NoticeSeverity severity, const std::string& text, bool persistent = false);
		// Thread-safe copy of all persistent notices plus transient ones younger than maxTransientAge, oldest first.
		static std::vector<Notice> Snapshot(float maxTransientAge = 8.f);
	};
}
