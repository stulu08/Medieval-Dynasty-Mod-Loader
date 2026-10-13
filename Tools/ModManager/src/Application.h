#pragma once
#include <vector>

#include "Renderer.h"
#include "View.h"

#include "INI.h"

class Application {
public:
	Application(void* handel);
	~Application();
	
	void Run();
	void Stop();

	inline Renderer* GetRenderer() const {
		return m_renderer;
	}
	
	template<class T = View, typename ... Args>
	inline void AddView() {
		m_views.push_back(new T(std::forward<Args>(args)...));
	}
	template<class T = View>
	inline const T* GetView() const {
		auto target = typeid(T).name();
		for (auto& view : m_views) {
			if (view->GetName() == target)
				return (const T*)view;
		}
		return nullptr;
	}

	template<class T>
	T GetINIConfig(const std::string& key, const std::string& section = "Config", T nullReturn = T()) {
		const std::string path = "settings.ini";

		if (FILE* file = fopen(path.c_str(), "r")) {
			fclose(file);
			
			INI::PARSE_FLAGS = INI::PARSE_COMMENTS_ALL | INI::PARSE_COMMENTS_SLASH | INI::PARSE_COMMENTS_HASH;
			INI ini(path, true);
			if (ini.select(section)) {
				return ini.getAs<T>(section, key, nullReturn);
			}
		}

		std::cout << "Could not read from settings" << std::endl;
		return nullReturn;
	}
	template<class T>
	void SetINIConfig(const std::string& key, T value = T(), const std::string& section = "Config") {
		const std::string path = "settings.ini";
		if (FILE* file = fopen(path.c_str(), "a+")) {
			fclose(file);

			INI::PARSE_FLAGS = INI::PARSE_COMMENTS_ALL | INI::PARSE_COMMENTS_SLASH | INI::PARSE_COMMENTS_HASH;
			INI::SAVE_FLAGS = INI::SAVE_PADDING_SECTIONS | INI::SAVE_PRUNE;
			INI ini(path, true);
			std::stringstream stream;
			stream << value;
			ini.select(section);
			ini.set(key, stream.str());
			ini.save(path);
			return;
		}

		std::cout << "Could not write to settings" << std::endl;
	}

	static Application* Get();
private:
	Renderer* m_renderer;
	bool m_running;
	std::vector<View*> m_views;

	static Application* s_app;
};

class Settings {
public:
	Settings() {
		auto* app = Application::Get();
		gamePath = app->GetINIConfig("GamePath", "Settings", "");
	}

	~Settings() {
		auto* app = Application::Get();
		app->SetINIConfig("GamePath", gamePath, "Settings");
	}

	std::string gamePath;

	inline std::string GetBinariesFolder() const {
		return gamePath + "/Medieval_Dynasty/Binaries/Win64";
	}
	inline std::string GetModsFolder() const {
		return gamePath + "/Medieval_Dynasty/Content/Mods";
	}

private:

};