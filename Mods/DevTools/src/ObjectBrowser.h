#pragma once
// Object browser (actors, classes, blueprints, data tables, packages) + the legacy exporter UI, moved from BaseMod
// (BaseMod.cpp ShowObjectBrowser, Utils::Gui) in Wave 3C.
//
// Threading: Draw() runs on the render thread. Everything that scans GObjects, calls ProcessEvent (actor transform,
// components) or writes files goes through mdml::runtime::GameThread::Enqueue and hands its result back through a
// mutex-protected snapshot. What the render thread still does itself is read-only reflection browsing of the objects
// in the snapshot (GetName/GetFullName/class and property info); the snapshot is dropped on level change
// (Invalidate(), called from the InitGameState event).
#include "Mods/Mod.h"

#include <filesystem>
#include <functional>
#include <map>
#include <memory>
#include <mutex>
#include <set>
#include <string>
#include <unordered_map>
#include <vector>

namespace devtools {
	using LogFn = std::function<void(const std::string& line, bool isError)>;

	// Pieces shared by the tools (formerly Utils::Gui in BaseMod).
	namespace gui {
		bool FilterSearch(UE4::UObject* object, const std::string& search);
		// Class info; the function list comes from the cache (button "Load functions" fills it on the game thread).
		void ClassInfo(UE4::UClass* clas, const LogFn& log);
		// Position/rotation/scale editor for an actor. Values are read and written on the game thread; the editor shows
		// the last read values and refreshes them about twice a second while no field is being edited.
		void ActorTransformEdit(UE4::AActor* actor);
		void ForgetActorTransforms(); // game thread / level change
	}

	class ObjectBrowser {
	public:
		explicit ObjectBrowser(LogFn log) : m_log(std::move(log)) {}

		bool& Open() { return m_open; }
		void Draw();       // render thread
		void Invalidate(); // level change: drop the snapshot
		// Folder of the legacy exporter's "<profile>.export" lists (= DevTools' mod folder, next to mod.ini).
		void SetListFolder(std::filesystem::path folder) { m_listFolder = std::move(folder); }

	private:
		struct Snapshot {
			std::vector<UE4::UObject*> actors, classes, blueprints, dataTables, packages;
		};
		void RequestScan();
		std::shared_ptr<const Snapshot> GetSnapshot();
		void DrawPackages(const std::vector<UE4::UObject*>& packages);

		LogFn m_log;
		bool m_open = false;

		std::mutex m_mutex;
		std::shared_ptr<const Snapshot> m_snapshot;
		bool m_scanning = false;
		std::map<UE4::UObject*, int32_t> m_packageObjectCounts; // filled on the game thread, guarded by m_mutex
		std::set<UE4::UObject*> m_countsPending;

		// UI state (render thread only)
		std::string m_searchActors, m_searchClasses, m_searchBlueprints, m_searchDataTables, m_searchPackages;
		std::vector<UE4::UPackage*> m_exportList;
		std::vector<std::string> m_needAddList;
		std::string m_profile = "Default";
		std::filesystem::path m_listFolder;
	};
}
