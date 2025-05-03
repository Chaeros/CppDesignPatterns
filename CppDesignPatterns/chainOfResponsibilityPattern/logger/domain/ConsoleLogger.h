#pragma once
#include "Logger.h"

class ConsoleLogger : public Logger {
public:
	ConsoleLogger(LogLevel level);
protected:
	void write(std::string message) override;
};