#pragma once
#include <Windows.h>
#include <vector>
#include <string>
#include <memory>
#include "../UMLDefs.h"

#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/fmt/ostr.h"
#include "spdlog/sinks/basic_file_sink.h"

template<typename T>
using Ref = std::shared_ptr<T>;
template<typename T, typename ... Args>
constexpr Ref<T> createRef(Args&& ... args)
{
	return std::make_shared<T>(std::forward<Args>(args)...);
}

enum class LogLevel {
	Trace = 0,
	Info = 2,
	Warn = 3,
	Error = 4,
	Critical = 5,
};

class LOADER_API Mod;
class LOADER_API Logger {
public:
	//File + Console
	static Ref<Logger> Create(const std::string& uniqueName, const std::string& logFile);
	//Only Console
	static Ref<Logger> Create(const std::string& uniqueName);
	//Creates a logger with a given filesink
	static Ref<Logger> Create(const std::string& uniqueName, const Ref<spdlog::sinks::sink>& fileSink);
	static inline Logger* getLoggerRaw(const std::string& name) {
		auto it = s_loggers.find(name);
		if (it != s_loggers.end())
			return it->second;
		return nullptr;
	}
	static inline Ref<Logger> getLogger(const std::string& name) {
		auto it = s_loggers.find(name);
		if (it != s_loggers.end())
			return Ref<Logger>(it->second);
		return nullptr;
	}
	static inline bool existsLogger(const std::string& name) {
		return s_loggers.find(name) != s_loggers.end();
	}
public:
	Logger(const Ref<spdlog::logger>& logger, const Ref<spdlog::sinks::sink>& consoleSink, const  Ref<spdlog::sinks::sink>& fileSink)
		: m_logger(logger), m_consoleSink(consoleSink), m_fileSink(fileSink) { setup(); }
	Logger(const std::string& uniqueName, const Ref<spdlog::sinks::sink>& consoleSink, const Ref<spdlog::sinks::sink>& fileSink);
	Logger(const std::string& uniqueName, const Ref<spdlog::sinks::sink>& consoleSink);
	Logger(const Ref<spdlog::logger>& logger)
		: m_logger(logger), m_consoleSink(nullptr), m_fileSink(nullptr) { setup(); }
	~Logger() {
		if (existsLogger(m_logger->name()))
			s_loggers.erase(m_logger->name());
		if (m_logger) {
			m_logger->flush();
			delete(m_logger.get());
			m_logger.reset();
		}
		if (m_consoleSink) {
			delete(m_consoleSink.get());
			m_consoleSink.reset();
		}
		if (m_fileSink) {
			delete(m_fileSink.get());
			m_fileSink.reset();
		}
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

	template<typename FormatString, typename... Args>
	void Trace(const FormatString& fmt, Args &&...args) {
		m_logger->trace(fmt, std::forward<Args>(args)...);
	}
	template<typename FormatString, typename... Args>
	void Info(const FormatString& fmt, Args &&...args) {
		m_logger->info(fmt, std::forward<Args>(args)...);
	}
	template<typename FormatString, typename... Args>
	void Warn(const FormatString& fmt, Args &&...args) {
		m_logger->warn(fmt, std::forward<Args>(args)...);
	}
	template<typename FormatString, typename... Args>
	void Error(const FormatString& fmt, Args &&...args) {
		m_logger->error(fmt, std::forward<Args>(args)...);
	}
	template<typename FormatString, typename... Args>
	void Critical(const FormatString& fmt, Args &&...args) {
		m_logger->critical(fmt, std::forward<Args>(args)...);
	}
	template<typename FormatString, typename... Args>
	void Log(LogLevel level, const FormatString& fmt, Args &&...args) {
		m_logger->log((spdlog::level::level_enum)level, fmt, std::forward<Args>(args)...);
	}
	template<typename T>
	void Trace(const T& msg) {
		m_logger->trace<T>(msg);
	}
	template<typename T>
	void Info(const T& msg) {
		m_logger->info<T>(msg);
	}
	template<typename T>
	void Warn(const T& msg) {
		m_logger->warn<T>(msg);
	}
	template<typename T>
	void Error(const T& msg) {
		m_logger->error<T>(msg);
	}
	template<typename T>
	void Critical(const T& msg) {
		m_logger->critical<T>(msg);
	}
	template<typename T>
	void Log(LogLevel level, const T& msg) {
		m_logger->log<T>((spdlog::level::level_enum)level, msg);
	}
private:
	void setup();

	Ref<spdlog::logger> m_logger;
	Ref<spdlog::sinks::sink> m_consoleSink;
	Ref<spdlog::sinks::sink> m_fileSink;

	//a sink for all logger to create a file with every log msg
	static Ref<spdlog::sinks::sink> s_baseSink;
	static std::unordered_map<std::string, Logger*> s_loggers;
};
class LOADER_API Log {
public:
	static void Init(const std::string& dir = DEFAULT_LOG_DIR);
	static inline void SetupErrorMessage(const std::string& Message) {
		MessageBoxA(NULL, (Message + "\nPress OK to exit.").c_str(), "Error", MB_ICONERROR);
		abort();
	}
	static inline void SetupMessage(const std::string& Info, const std::string& Message) {
		MessageBoxA(NULL, Message.c_str(), Info.c_str(), MB_OK | MB_SYSTEMMODAL);
	}
	template <typename ...Args>
	static inline void Trace(const std::string& format, Args&& ...args) {
		s_umlLogger->Trace(format, std::forward<Args>(args)...);
	}
	template <typename ...Args>
	static inline void Info(const std::string& format, Args&& ...args) {
		s_umlLogger->Info(format, std::forward<Args>(args)...);
	}
	template <typename ...Args>
	static inline void Warn(const std::string& format, Args&& ...args) {
		s_umlLogger->Warn(format, std::forward<Args>(args)...);
	}
	template <typename ...Args>
	static inline void Error(const std::string& format, Args&& ...args) {
		s_umlLogger->Error(format, std::forward<Args>(args)...);
	}
	template <typename ...Args>
	static inline void Critical(const std::string& format, Args&& ...args) {
		s_umlLogger->Critical(format, std::forward<Args>(args)...);
	}
	template <typename ...Args>
	static inline void Trace_MDML(const std::string& format, Args&& ...args) {
		s_mdmlLogger->Trace(format, std::forward<Args>(args)...);
	}
	template <typename ...Args>
	static inline void Info_MDML(const std::string& format, Args&& ...args) {
		s_mdmlLogger->Info(format, std::forward<Args>(args)...);
	}
	template <typename ...Args>
	static inline void Warn_MDML(const std::string& format, Args&& ...args) {
		s_mdmlLogger->Warn(format, std::forward<Args>(args)...);
	}
	template <typename ...Args>
	static inline void Error_MDML(const std::string& format, Args&& ...args) {
		s_mdmlLogger->Error(format, std::forward<Args>(args)...);
	}
	template <typename ...Args>
	static inline void Critical_MDML(const std::string& format, Args&& ...args) {
		s_mdmlLogger->Critical(format, std::forward<Args>(args)...);
	}
	static Ref<Logger> ModLogger();
	static Ref<Logger> ModLogger(Mod* mod);
	static Ref<Logger> getMDMLLogger() { return s_mdmlLogger; }
	static Ref<Logger> getUMLLogger() { return s_umlLogger; }
	static std::string getLogDir() { return s_logDir; }
	static std::string getLogFile(const std::string& fileName) { return s_logDir + "/" + fileName; }
private:
	static inline Ref<Logger> s_mdmlLogger;
	static inline Ref<Logger> s_umlLogger;
	static inline std::string s_logDir;
};