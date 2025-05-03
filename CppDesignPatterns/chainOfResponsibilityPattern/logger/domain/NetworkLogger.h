#pragma once
#include "Logger.h"

class NetworkLogger : public Logger {
public:
	NetworkLogger(LogLevel level);
protected:
	void write(std::string message) override;
};