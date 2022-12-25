#include "Logger.h"
#include "Mod/Mod.h"
void Log::Init(const std::string& dir) {
	s_logDir = dir;
	s_mdmlLogger = Logger::Create("MDML", getLogFile("MDML-log.txt"));
	s_umlLogger = Logger::Create("UnrealModLoader", getLogFile("UML-log.txt"));
};
Ref<Logger> Log::ModLogger() {
    return Logger::getLogger(Mod::ModRef->ModName);
}
Ref<Logger> Log::ModLogger(Mod* mod) {
    return Logger::getLogger(mod->ModName);

}

//std::vector<std::string> Log::LogArray;

std::unordered_map<std::string, Logger*> Logger::s_loggers;
Ref<spdlog::sinks::sink> Logger::s_baseSink;

Ref<Logger> Logger::Create(const std::string& uniqueName, const std::string& logFile) {
	if (existsLogger(uniqueName))
		return getLogger(uniqueName);

	spdlog::set_pattern("%^[%T][%n]: %v%$");
	Ref<spdlog::sinks::sink> consoleSink = createRef<spdlog::sinks::stdout_color_sink_mt>(spdlog::color_mode::automatic);
	consoleSink->set_level(spdlog::level::trace);
	Ref<spdlog::sinks::sink> fileSink = createRef<spdlog::sinks::basic_file_sink_mt>(logFile, true);
	fileSink->set_level(spdlog::level::trace);

	return createRef<Logger>(uniqueName, consoleSink, fileSink);
}
Ref<Logger> Logger::Create(const std::string& uniqueName) {
	if (existsLogger(uniqueName))
		return getLogger(uniqueName);

	spdlog::set_pattern("%^[%T][%n]: %v%$");
	Ref<spdlog::sinks::sink> consoleSink = createRef<spdlog::sinks::stdout_color_sink_mt>(spdlog::color_mode::automatic);
	consoleSink->set_level(spdlog::level::trace);

	return createRef<Logger>(uniqueName, consoleSink);
}

Ref<Logger> Logger::Create(const std::string& uniqueName, const Ref<spdlog::sinks::sink>& fileSink) {
	if (existsLogger(uniqueName))
		return getLogger(uniqueName);

	spdlog::set_pattern("%^[%T][%n]: %v%$");
	Ref<spdlog::sinks::sink> consoleSink = createRef<spdlog::sinks::stdout_color_sink_mt>(spdlog::color_mode::automatic);
	consoleSink->set_level(spdlog::level::trace);

	return createRef<Logger>(uniqueName, consoleSink, fileSink);
}

Logger::Logger(const std::string& uniqueName, const Ref<spdlog::sinks::sink>& consoleSink, const Ref<spdlog::sinks::sink>& fileSink)
	: m_consoleSink(consoleSink), m_fileSink(fileSink) {
	m_logger = createRef<spdlog::logger>(uniqueName, spdlog::sinks_init_list{ m_consoleSink, m_fileSink });
	m_logger->set_level(spdlog::level::trace);
	s_loggers.insert({ m_logger->name(), this });
	setup();
}

Logger::Logger(const std::string& uniqueName, const Ref<spdlog::sinks::sink>& consoleSink)
	: m_consoleSink(consoleSink) {
	m_logger = createRef<spdlog::logger>(uniqueName, m_consoleSink);
	m_logger->set_level(spdlog::level::trace);
	s_loggers.insert({ m_logger->name(), this });
	setup();
}

const std::string& Logger::getName() const {
	return m_logger->name();
}

void Logger::setup() {
	if (!m_logger)
		return;
	spdlog::details::registry::instance().initialize_logger(m_logger);
	if (s_baseSink == nullptr) {
		s_baseSink = createRef<spdlog::sinks::basic_file_sink_mt>(Log::getLogFile(BASE_LOG_FILENAME), true);
		s_baseSink->set_level(spdlog::level::trace);
	}
	m_logger->sinks().push_back(s_baseSink);
	m_logger->flush_on(spdlog::level::trace);
	s_loggers.insert({ m_logger->name(), this });
}