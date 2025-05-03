#include "Logger.h"

Logger::Logger(LogLevel level)
	:level(level) {
};

void Logger::setNextLogger(std::shared_ptr<Logger> nextLogger) {
	this->nextLogger = std::move(nextLogger);
}

void Logger::logMessage(LogLevel level, const std::string& message) {
	if (this->level <= level) {
		write(message);
	}
	if (nextLogger != nullptr) {
		nextLogger->logMessage(level, message);
	}
}