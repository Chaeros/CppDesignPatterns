#pragma once
#include <string>
#include <thread>
#include "../enum/LogLevel.h"

class Logger {
protected:
	LogLevel level;
	std::shared_ptr<Logger> nextLogger;
	virtual void write(std::string message) = 0;
public:
	Logger(LogLevel level);
	void setNextLogger(std::shared_ptr<Logger> nextLogger);
	void logMessage(LogLevel level, const std::string& message);
};