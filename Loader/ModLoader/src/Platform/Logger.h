#pragma once
#include "Core.h"

#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/fmt/ostr.h>
#include <spdlog/sinks/basic_file_sink.h>

class LOADER_API Mod;
class LOADER_API Logger {
public:
	//File + Console
	static Ref<Logger> Create(const std::string& uniqueName, const std::string& logFile);
	//Only Console
	static Ref<Logger> Create(const std::string& uniqueName);
	//Creates a logger with a given filesink
	static Ref<Logger> Create(const std::string& uniqueName, const Ref<spdlog::sinks::sink>& fileSink);
	// The registry only observes loggers (weak_ptr); the Ref returned by Create owns it.
	static inline Ref<Logger> getLogger(const std::string& name) {
		auto it = s_loggers.find(name);
		if (it != s_loggers.end())
			return it->second.lock();
		return nullptr;
	}
	static inline bool existsLogger(const std::string& name) {
		auto it = s_loggers.find(name);
		return it != s_loggers.end() && !it->second.expired();
	}
public:
	Logger(const Ref<spdlog::logger>& logger, const Ref<spdlog::sinks::sink>& consoleSink, const  Ref<spdlog::sinks::sink>& fileSink)
		: m_logger(logger), m_consoleSink(consoleSink), m_fileSink(fileSink) { setup(); }
	Logger(const std::string& uniqueName, const Ref<spdlog::sinks::sink>& consoleSink, const Ref<spdlog::sinks::sink>& fileSink);
	Logger(const std::string& uniqueName, const Ref<spdlog::sinks::sink>& consoleSink);
	Logger(const Ref<spdlog::logger>& logger)
		: m_logger(logger), m_consoleSink(nullptr), m_fileSink(nullptr) { setup(); }
	~Logger() {
		if (!m_logger)
			return;
		// our own entry is already expired here; a newer logger with the same name keeps its entry
		auto it = s_loggers.find(m_logger->name());
		if (it != s_loggers.end() && it->second.expired())
			s_loggers.erase(it);
		m_logger->flush();
	}

	const Ref<spdlog::logger>& getLogger() const {
		return m_logger;
	}
	const Ref<spdlog::sinks::sink>& getConsoleSink() const {
		return m_consoleSink;
	}
	const Ref<spdlog::sinks::sink>& getFileSink() const {
		return m_fileSink;
	}

	const std::string& getName() const;

	template<typename... Args>
	void Trace(spdlog::format_string_t<Args...> fmt, Args &&...args) {
		m_logger->trace(fmt, std::forward<Args>(args)...);
	}
	template<typename... Args>
	void Info(spdlog::format_string_t<Args...> fmt, Args &&...args) {
		m_logger->info(fmt, std::forward<Args>(args)...);
	}
	template<typename... Args>
	void Warn(spdlog::format_string_t<Args...> fmt, Args &&...args) {
		m_logger->warn(fmt, std::forward<Args>(args)...);
	}
	template<typename... Args>
	void Error(spdlog::format_string_t<Args...> fmt, Args &&...args) {
		m_logger->error(fmt, std::forward<Args>(args)...);
	}
	template<typename... Args>
	void Critical(spdlog::format_string_t<Args...> fmt, Args &&...args) {
		m_logger->critical(fmt, std::forward<Args>(args)...);
	}
	template<typename... Args>
	void Log(LogLevel level, spdlog::format_string_t<Args...> fmt, Args &&...args) {
		m_logger->log((spdlog::level::level_enum)level, fmt, std::forward<Args>(args)...);
	}
	// Plain message, no format interpretation ("{}" is printed as is).
	template<typename T>
	void Trace(const T& msg) {
		m_logger->trace(msg);
	}
	template<typename T>
	void Info(const T& msg) {
		m_logger->info(msg);
	}
	template<typename T>
	void Warn(const T& msg) {
		m_logger->warn(msg);
	}
	template<typename T>
	void Error(const T& msg) {
		m_logger->error(msg);
	}
	template<typename T>
	void Critical(const T& msg) {
		m_logger->critical(msg);
	}
	template<typename T>
	void Log(LogLevel level, const T& msg) {
		m_logger->log((spdlog::level::level_enum)level, msg);
	}
private:
	void setup();
	static Ref<Logger> Register(const Ref<Logger>& logger);

	Ref<spdlog::logger> m_logger;
	Ref<spdlog::sinks::sink> m_consoleSink;
	Ref<spdlog::sinks::sink> m_fileSink;

	//a sink for all logger to create a file with every log msg
	static Ref<spdlog::sinks::sink> s_baseSink;
	static std::unordered_map<std::string, std::weak_ptr<Logger>> s_loggers;
};
class LOADER_API Log {
public:
	static void Init(const std::string& dir = DEFAULT_LOG_DIR);
	static inline void SetupMessage(const std::string& Info, const std::string& Message) {
		MessageBoxA(NULL, Message.c_str(), Info.c_str(), MB_OK | MB_SYSTEMMODAL);
	}
	template <typename ...Args>
	static inline void Trace_UML(spdlog::format_string_t<Args...> format, Args&& ...args) {
		s_umlLogger->Trace(format, std::forward<Args>(args)...);
	}
	template <typename T>
	static inline void Trace_UML(const T& message) {
		s_umlLogger->Trace(message);
	}
	template <typename ...Args>
	static inline void Info_UML(spdlog::format_string_t<Args...> format, Args&& ...args) {
		s_umlLogger->Info(format, std::forward<Args>(args)...);
	}
	template <typename T>
	static inline void Info_UML(const T& message) {
		s_umlLogger->Info(message);
	}
	template <typename ...Args>
	static inline void Warn_UML(spdlog::format_string_t<Args...> format, Args&& ...args) {
		s_umlLogger->Warn(format, std::forward<Args>(args)...);
	}
	template <typename T>
	static inline void Warn_UML(const T& message) {
		s_umlLogger->Warn(message);
	}
	template <typename ...Args>
	static inline void Error_UML(spdlog::format_string_t<Args...> format, Args&& ...args) {
		s_umlLogger->Error(format, std::forward<Args>(args)...);
	}
	template <typename T>
	static inline void Error_UML(const T& message) {
		s_umlLogger->Error(message);
	}
	template <typename ...Args>
	static inline void Critical_UML(spdlog::format_string_t<Args...> format, Args&& ...args) {
		s_umlLogger->Critical(format, std::forward<Args>(args)...);
	}
	template <typename T>
	static inline void Critical_UML(const T& message) {
		s_umlLogger->Critical(message);
	}
	template <typename ...Args>
	static inline void Trace_MDML(spdlog::format_string_t<Args...> format, Args&& ...args) {
		s_mdmlLogger->Trace(format, std::forward<Args>(args)...);
	}
	template <typename T>
	static inline void Trace_MDML(const T& message) {
		s_mdmlLogger->Trace(message);
	}
	template <typename ...Args>
	static inline void Info_MDML(spdlog::format_string_t<Args...> format, Args&& ...args) {
		s_mdmlLogger->Info(format, std::forward<Args>(args)...);
	}
	template <typename T>
	static inline void Info_MDML(const T& message) {
		s_mdmlLogger->Info(message);
	}
	template <typename ...Args>
	static inline void Warn_MDML(spdlog::format_string_t<Args...> format, Args&& ...args) {
		s_mdmlLogger->Warn(format, std::forward<Args>(args)...);
	}
	template <typename T>
	static inline void Warn_MDML(const T& message) {
		s_mdmlLogger->Warn(message);
	}
	template <typename ...Args>
	static inline void Error_MDML(spdlog::format_string_t<Args...> format, Args&& ...args) {
		s_mdmlLogger->Error(format, std::forward<Args>(args)...);
	}
	template <typename T>
	static inline void Error_MDML(const T& message) {
		s_mdmlLogger->Error(message);
	}
	template <typename ...Args>
	static inline void Critical_MDML(spdlog::format_string_t<Args...> format, Args&& ...args) {
		s_mdmlLogger->Critical(format, std::forward<Args>(args)...);
	}
	template <typename T>
	static inline void Critical_MDML(const T& message) {
		s_mdmlLogger->Critical(message);
	}
	static Ref<Logger> getMDMLLogger() { return s_mdmlLogger; }
	static Ref<Logger> getUMLLogger() { return s_umlLogger; }
	static std::string getLogDir() { return s_logDir; }
	static std::string getLogFile(const std::string& fileName) { return s_logDir + "/" + fileName; }
private:
	static inline Ref<Logger> s_mdmlLogger;
	static inline Ref<Logger> s_umlLogger;
	static inline std::string s_logDir;
};