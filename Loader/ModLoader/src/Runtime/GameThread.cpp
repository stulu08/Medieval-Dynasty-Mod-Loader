#include "Core.h"
#include "MDML/GameThread.h"
#include "GameHooks.h"

#include "MDML/Log.h"

#include <atomic>
#include <mutex>
#include <vector>

namespace mdml::runtime {
	namespace {
		std::mutex s_mutex;
		std::vector<std::function<void()>> s_pending;
		std::atomic<size_t> s_pendingCount{ 0 };
		std::atomic<DWORD> s_gameThreadId{ 0 };
	}

	void GameThread::Enqueue(std::function<void()> task) {
		if (!task)
			return;
		std::lock_guard<std::mutex> lock(s_mutex);
		s_pending.push_back(std::move(task));
		s_pendingCount.store(s_pending.size(), std::memory_order_release);
	}

	bool GameThread::IsInGameThread() {
		const DWORD id = s_gameThreadId.load(std::memory_order_acquire);
		return id != 0 && id == GetCurrentThreadId();
	}

	void MarkGameThread() {
		if (s_gameThreadId.load(std::memory_order_relaxed) == 0)
			s_gameThreadId.store(GetCurrentThreadId(), std::memory_order_release);
	}

	void GameThread::RunPending() {
		// The first drain call identifies the game thread (the Tick hook always runs there)
		MarkGameThread();

		if (s_pendingCount.load(std::memory_order_acquire) == 0)
			return;

		std::vector<std::function<void()>> tasks;
		{
			std::lock_guard<std::mutex> lock(s_mutex);
			tasks.swap(s_pending);
			s_pendingCount.store(0, std::memory_order_release);
		}

		for (auto& task : tasks) {
			try {
				task();
			}
			catch (const std::exception& e) {
				Log::Error_MDML("GameThread task threw an exception: {0}", e.what());
			}
			catch (...) {
				Log::Error_MDML("GameThread task threw an unknown exception");
			}
		}
	}
}
