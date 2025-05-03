#pragma once
#include "Logger.h"

class FileLogger : public Logger {
public:
	FileLogger(LogLevel level);
protected:
	void write(std::string message) override;
};
